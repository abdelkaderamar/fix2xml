#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStrikePrice.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStrikePrice, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStrikePrice msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStrikePrice_0;
  set_field(msg, FIX::LastFragment{false}, ListStrikePrice_0);
  set_field(msg, FIX::ListID{"STRING_1562113179"}, ListStrikePrice_0);
  set_field(msg, FIX::TotNoStrikes{1848186043}, ListStrikePrice_0);
  all_values.push_back(ListStrikePrice_0);

  all_compo_names.insert("ListStrikePrice");

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    set_field(noStrikes_0_0, FIX::ClOrdID{"STRING_495530199"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Currency{"CHF"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::EncodedText{"DATA_779078017"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::EncodedTextLen{1679048057}, InstrmtStrkPxGrp_NoStrikes_0);
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("13993809");
set_field(noStrikes_0_0, PrevClosePx_1, InstrmtStrkPxGrp_NoStrikes_0);
    FIX::Price Price_11;
    Price_11.setString("5523106");
set_field(noStrikes_0_0, Price_11, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::SecondaryClOrdID{"STRING_973986456"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Side{'E'}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Text{"STRING_1440828887"}, InstrmtStrkPxGrp_NoStrikes_0);
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);
    all_compo_names.insert("...NoStrikes");

    // Instrument
    multiset<string> Instrument_27;
    FIX::AttachmentPoint AttachmentPoint_27;
    AttachmentPoint_27.setString("48.030000");
set_field(noStrikes_0_0, AttachmentPoint_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::CFICode{"STRING_1774073717"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::CPProgram{99}, Instrument_27);
    set_field(noStrikes_0_0, FIX::CPRegType{"STRING_1339898675"}, Instrument_27);
    FIX::CapPrice CapPrice_27;
    CapPrice_27.setString("14742603");
set_field(noStrikes_0_0, CapPrice_27, Instrument_27);
    FIX::ContractMultiplier ContractMultiplier_27;
    ContractMultiplier_27.setString("101785");
set_field(noStrikes_0_0, ContractMultiplier_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::ContractMultiplierUnit{0}, Instrument_27);
    set_field(noStrikes_0_0, FIX::ContractSettlMonth{"MONTHYEAR_770739837"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::CountryOfIssue{"COUNTRY_434147495"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1496366926"}, Instrument_27);
    FIX::CouponRate CouponRate_27;
    CouponRate_27.setString("78.320000");
set_field(noStrikes_0_0, CouponRate_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::CreditRating{"STRING_917322478"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::DatedDate{"LOCALMKTDATE_679371317"}, Instrument_27);
    FIX::DetachmentPoint DetachmentPoint_27;
    DetachmentPoint_27.setString("38.290000");
set_field(noStrikes_0_0, DetachmentPoint_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::EncodedIssuer{"DATA_849217813"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::EncodedIssuerLen{52622042}, Instrument_27);
    set_field(noStrikes_0_0, FIX::EncodedSecurityDesc{"DATA_708727142"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::EncodedSecurityDescLen{681808164}, Instrument_27);
    set_field(noStrikes_0_0, FIX::ExerciseStyle{2}, Instrument_27);
    FIX::Factor Factor_27;
    Factor_27.setString("4094295");
set_field(noStrikes_0_0, Factor_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_27);
    set_field(noStrikes_0_0, FIX::FlexibleIndicator{true}, Instrument_27);
    FIX::FloorPrice FloorPrice_27;
    FloorPrice_27.setString("19459437");
set_field(noStrikes_0_0, FloorPrice_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::FlowScheduleType{1}, Instrument_27);
    set_field(noStrikes_0_0, FIX::InstrRegistry{"STRING_741859789"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_27);
    set_field(noStrikes_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1068368433"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::IssueDate{"LOCALMKTDATE_1294170487"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::Issuer{"STRING_304010961"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::ListMethod{0}, Instrument_27);
    set_field(noStrikes_0_0, FIX::LocaleOfIssue{"STRING_587515726"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::MaturityDate{"LOCALMKTDATE_1772355764"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1199485555"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::MaturityTime{"TZTIMEONLY_1238389279"}, Instrument_27);
    FIX::MinPriceIncrement MinPriceIncrement_27;
    MinPriceIncrement_27.setString("9647707");
set_field(noStrikes_0_0, MinPriceIncrement_27, Instrument_27);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
    MinPriceIncrementAmount_27.setString("5262622");
set_field(noStrikes_0_0, MinPriceIncrementAmount_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::NTPositionLimit{1248567845}, Instrument_27);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
    NotionalPercentageOutstanding_27.setString("68.850000");
set_field(noStrikes_0_0, NotionalPercentageOutstanding_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::OptAttribute{'1'}, Instrument_27);
    FIX::OptPayoutAmount OptPayoutAmount_27;
    OptPayoutAmount_27.setString("16827153");
set_field(noStrikes_0_0, OptPayoutAmount_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::OptPayoutType{2}, Instrument_27);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
    OriginalNotionalPercentageOutstanding_27.setString("63.190000");
set_field(noStrikes_0_0, OriginalNotionalPercentageOutstanding_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::Pool{"STRING_452554171"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::PositionLimit{1063731480}, Instrument_27);
    set_field(noStrikes_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::PriceUnitOfMeasure{"STRING_1301771984"}, Instrument_27);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
    PriceUnitOfMeasureQty_27.setString("11163535");
set_field(noStrikes_0_0, PriceUnitOfMeasureQty_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::Product{3}, Instrument_27);
    set_field(noStrikes_0_0, FIX::ProductComplex{"STRING_1983580148"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::PutOrCall{0}, Instrument_27);
    set_field(noStrikes_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1392493179"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::RepoCollateralSecurityType{"STRING_740260375"}, Instrument_27);
    FIX::RepurchaseRate RepurchaseRate_27;
    RepurchaseRate_27.setString("68.690000");
set_field(noStrikes_0_0, RepurchaseRate_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::RepurchaseTerm{1190953275}, Instrument_27);
    set_field(noStrikes_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityDesc{"STRING_1288246658"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityExchange{"EXCHANGE_520977780"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityGroup{"STRING_1477616256"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityID{"STRING_434933497"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityIDSource{"STRING_6"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecuritySubType{"STRING_1022449224"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SecurityType{"STRING_FOR"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::Seniority{"STRING_SR"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SettlMethod{'P'}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SettleOnOpenFlag{"STRING_1414631648"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::StateOrProvinceOfIssue{"STRING_481292300"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_27);
    FIX::StrikeMultiplier StrikeMultiplier_27;
    StrikeMultiplier_27.setString("17782944");
set_field(noStrikes_0_0, StrikeMultiplier_27, Instrument_27);
    FIX::StrikePrice StrikePrice_27;
    StrikePrice_27.setString("8971543");
set_field(noStrikes_0_0, StrikePrice_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_27);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
    StrikePriceBoundaryPrecision_27.setString("71.070000");
set_field(noStrikes_0_0, StrikePriceBoundaryPrecision_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_27);
    FIX::StrikeValue StrikeValue_27;
    StrikeValue_27.setString("17507165");
set_field(noStrikes_0_0, StrikeValue_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::Symbol{"STRING_587303608"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_27);
    set_field(noStrikes_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_27);
    set_field(noStrikes_0_0, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_27);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
    UnitOfMeasureQty_27.setString("13031915");
set_field(noStrikes_0_0, UnitOfMeasureQty_27, Instrument_27);
    set_field(noStrikes_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_27);
    all_values.push_back(Instrument_27);
    all_compo_names.insert("...NoStrikes.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_55;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_55);
      FIX::ComplexEventPrice ComplexEventPrice_55;
      ComplexEventPrice_55.setString("20063300");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_55, ComplexEvents_NoComplexEvents_55);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_55);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_55;
      ComplexEventPriceBoundaryPrecision_55.setString("13.800000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_55, ComplexEvents_NoComplexEvents_55);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_55);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_55);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_55;
      ComplexOptPayoutAmount_55.setString("14252748");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_55, ComplexEvents_NoComplexEvents_55);
      all_values.push_back(ComplexEvents_NoComplexEvents_55);
      all_compo_names.insert("...NoStrikes....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_112;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 27, 3, 1, 4, 2009)}, ComplexEventDates_NoComplexEventDates_112);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 51, 54, 17, 8, 2002)}, ComplexEventDates_NoComplexEventDates_112);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_112);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 39, 9)}, ComplexEventTimes_NoComplexEventTimes_222);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 3, 26)}, ComplexEventTimes_NoComplexEventTimes_222);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_58;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_639789252"}, EvntGrp_NoEvents_58);
      FIX::EventPx EventPx_58;
      EventPx_58.setString("9939756");
set_field(noEvents_0_1_0, EventPx_58, EvntGrp_NoEvents_58);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_2082394963"}, EvntGrp_NoEvents_58);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 53, 43, 4, 4, 2004)}, EvntGrp_NoEvents_58);
      set_field(noEvents_0_1_0, FIX::EventType{12}, EvntGrp_NoEvents_58);
      all_values.push_back(EvntGrp_NoEvents_58);
      all_compo_names.insert("...NoStrikes....NoEvents");

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_59;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_2074021956"}, EvntGrp_NoEvents_59);
      FIX::EventPx EventPx_59;
      EventPx_59.setString("5059546");
set_field(noEvents_0_1_1, EventPx_59, EvntGrp_NoEvents_59);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_930898167"}, EvntGrp_NoEvents_59);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 10, 4, 7, 10, 2006)}, EvntGrp_NoEvents_59);
      set_field(noEvents_0_1_1, FIX::EventType{11}, EvntGrp_NoEvents_59);
      all_values.push_back(EvntGrp_NoEvents_59);
      all_compo_names.insert("...NoStrikes....NoEvents");

      noStrikes_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_60;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_1071371220"}, EvntGrp_NoEvents_60);
      FIX::EventPx EventPx_60;
      EventPx_60.setString("385856");
set_field(noEvents_0_1_2, EventPx_60, EvntGrp_NoEvents_60);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_948297710"}, EvntGrp_NoEvents_60);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(12, 42, 5, 14, 10, 2010)}, EvntGrp_NoEvents_60);
      set_field(noEvents_0_1_2, FIX::EventType{12}, EvntGrp_NoEvents_60);
      all_values.push_back(EvntGrp_NoEvents_60);
      all_compo_names.insert("...NoStrikes....NoEvents");

      noStrikes_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_50;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1329799171"}, InstrumentParties_NoInstrumentParties_50);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_50);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{430440365}, InstrumentParties_NoInstrumentParties_50);
      all_values.push_back(InstrumentParties_NoInstrumentParties_50);
      all_compo_names.insert("...NoStrikes....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_16170595"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{2090867012}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_51;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_990874757"}, InstrumentParties_NoInstrumentParties_51);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_51);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{2017405320}, InstrumentParties_NoInstrumentParties_51);
      all_values.push_back(InstrumentParties_NoInstrumentParties_51);
      all_compo_names.insert("...NoStrikes....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1866365974"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1571977989}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1079747081"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{292192236}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_1651739413"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{426612828}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_52;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_820880998"}, InstrumentParties_NoInstrumentParties_52);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_52);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{1288143179}, InstrumentParties_NoInstrumentParties_52);
      all_values.push_back(InstrumentParties_NoInstrumentParties_52);
      all_compo_names.insert("...NoStrikes....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1497500173"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{88957241}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubID{"STRING_781705852"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubIDType{2107589809}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_53;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_452102330"}, SecAltIDGrp_NoSecurityAltID_53);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_74569895"}, SecAltIDGrp_NoSecurityAltID_53);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_54;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_1562556668"}, SecAltIDGrp_NoSecurityAltID_54);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_762288060"}, SecAltIDGrp_NoSecurityAltID_54);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_55;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_1183009327"}, SecAltIDGrp_NoSecurityAltID_55);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_632810840"}, SecAltIDGrp_NoSecurityAltID_55);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_54;
    set_field(noStrikes_0_0, FIX::SecurityXML{"XMLDATA_2092087231"}, SecurityXML_54);
    set_field(noStrikes_0_0, FIX::SecurityXMLLen{1957675014}, SecurityXML_54);
    set_field(noStrikes_0_0, FIX::SecurityXMLSchema{"STRING_1063251205"}, SecurityXML_54);
    all_values.push_back(SecurityXML_54);
    all_compo_names.insert("...NoStrikes..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_47;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1973845609"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1006634569}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_194736588"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{761829768}, UnderlyingInstrument_47);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_47;
      UnderlyingAdjustedQuantity_47.setString("8765562");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_47, UnderlyingInstrument_47);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_47;
      UnderlyingAllocationPercent_47.setString("59.950000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_47, UnderlyingInstrument_47);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_47;
      UnderlyingAttachmentPoint_47.setString("20.940000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_301050583"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_623829428"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_772904331"}, UnderlyingInstrument_47);
      FIX::UnderlyingCapValue UnderlyingCapValue_47;
      UnderlyingCapValue_47.setString("19527899");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_47, UnderlyingInstrument_47);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_47;
      UnderlyingCashAmount_47.setString("10504422");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_47);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_47;
      UnderlyingContractMultiplier_47.setString("12642208");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{191101787}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1338553899"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_614237381"}, UnderlyingInstrument_47);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_47;
      UnderlyingCouponRate_47.setString("90.280000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_2120259752"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_47);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_47;
      UnderlyingCurrentValue_47.setString("4248784");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_47, UnderlyingInstrument_47);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_47;
      UnderlyingDetachmentPoint_47.setString("34.380000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_47, UnderlyingInstrument_47);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_47;
      UnderlyingDirtyPrice_47.setString("21223458");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_47, UnderlyingInstrument_47);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_47;
      UnderlyingEndPrice_47.setString("11871664");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_47, UnderlyingInstrument_47);
      FIX::UnderlyingEndValue UnderlyingEndValue_47;
      UnderlyingEndValue_47.setString("18319227");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{607673053}, UnderlyingInstrument_47);
      FIX::UnderlyingFXRate UnderlyingFXRate_47;
      UnderlyingFXRate_47.setString("11317700");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_47);
      FIX::UnderlyingFactor UnderlyingFactor_47;
      UnderlyingFactor_47.setString("16709242");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{335631908}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1468476092"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_530075180"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_530368496"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_82822213"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1406631421"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_74450843"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_563534307"}, UnderlyingInstrument_47);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_47;
      UnderlyingNotionalPercentageOutstanding_47.setString("20.040000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_47);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_47;
      UnderlyingOriginalNotionalPercentageOutstanding_47.setString("86.380000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1512988353"}, UnderlyingInstrument_47);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_47;
      UnderlyingPriceUnitOfMeasureQty_47.setString("17487225");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{782740319}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{629725561}, UnderlyingInstrument_47);
      FIX::UnderlyingPx UnderlyingPx_47;
      UnderlyingPx_47.setString("19398243");
set_field(noUnderlyings_0_1_0, UnderlyingPx_47, UnderlyingInstrument_47);
      FIX::UnderlyingQty UnderlyingQty_47;
      UnderlyingQty_47.setString("21212942");
set_field(noUnderlyings_0_1_0, UnderlyingQty_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1243962943"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_72399695"}, UnderlyingInstrument_47);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_47;
      UnderlyingRepurchaseRate_47.setString("3.230000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1818306485}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_632188887"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_371465109"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_319736275"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_607051100"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1558631603"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_4175392"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1214724153"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_542918032"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1646289523"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_47);
      FIX::UnderlyingStartValue UnderlyingStartValue_47;
      UnderlyingStartValue_47.setString("8785499");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_967281968"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_47);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_47;
      UnderlyingStrikePrice_47.setString("10501041");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_47, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_527387717"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1483369279"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1613638488"}, UnderlyingInstrument_47);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_87586073"}, UnderlyingInstrument_47);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_47;
      UnderlyingUnitOfMeasureQty_47.setString("341659");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_47, UnderlyingInstrument_47);
      all_values.push_back(UnderlyingInstrument_47);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_98;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1600574426"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1782888430"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_99;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1585333798"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_82816340"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_100;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1575229097"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1559144369"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_1647628792"}, UnderlyingStipulations_NoUnderlyingStips_97);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1505731044"}, UnderlyingStipulations_NoUnderlyingStips_97);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_97;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_132334032"}, UndlyInstrumentParties_NoUndlyInstrumentParties_97);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_97);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1317338396}, UndlyInstrumentParties_NoUndlyInstrumentParties_97);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_97);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1288344108"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1321513788}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1954109285"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1831262141}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_820319664"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{544790400}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_48;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_562328433"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{1787601632}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1813030344"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1971246870}, UnderlyingInstrument_48);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_48;
      UnderlyingAdjustedQuantity_48.setString("6902221");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_48, UnderlyingInstrument_48);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_48;
      UnderlyingAllocationPercent_48.setString("44.130000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_48, UnderlyingInstrument_48);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_48;
      UnderlyingAttachmentPoint_48.setString("25.010000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_156377005"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_280520486"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1341298404"}, UnderlyingInstrument_48);
      FIX::UnderlyingCapValue UnderlyingCapValue_48;
      UnderlyingCapValue_48.setString("9589704");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_48, UnderlyingInstrument_48);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_48;
      UnderlyingCashAmount_48.setString("18810949");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_48);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_48;
      UnderlyingContractMultiplier_48.setString("3968206");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{1963911253}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_404448635"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1955965004"}, UnderlyingInstrument_48);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_48;
      UnderlyingCouponRate_48.setString("68.880000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_2052077427"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_48);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_48;
      UnderlyingCurrentValue_48.setString("369278");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_48, UnderlyingInstrument_48);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_48;
      UnderlyingDetachmentPoint_48.setString("49.060000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_48, UnderlyingInstrument_48);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_48;
      UnderlyingDirtyPrice_48.setString("13106637");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_48, UnderlyingInstrument_48);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_48;
      UnderlyingEndPrice_48.setString("7763129");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_48, UnderlyingInstrument_48);
      FIX::UnderlyingEndValue UnderlyingEndValue_48;
      UnderlyingEndValue_48.setString("1847853");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{484693897}, UnderlyingInstrument_48);
      FIX::UnderlyingFXRate UnderlyingFXRate_48;
      UnderlyingFXRate_48.setString("5829385");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_48);
      FIX::UnderlyingFactor UnderlyingFactor_48;
      UnderlyingFactor_48.setString("13050135");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{1127728981}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_430892293"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_945131545"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_793275677"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_254655515"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1635353710"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_986210090"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1561788017"}, UnderlyingInstrument_48);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_48;
      UnderlyingNotionalPercentageOutstanding_48.setString("7.150000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_48);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_48;
      UnderlyingOriginalNotionalPercentageOutstanding_48.setString("27.730000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_603217552"}, UnderlyingInstrument_48);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_48;
      UnderlyingPriceUnitOfMeasureQty_48.setString("10003418");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1732305959}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1000038187}, UnderlyingInstrument_48);
      FIX::UnderlyingPx UnderlyingPx_48;
      UnderlyingPx_48.setString("8167694");
set_field(noUnderlyings_0_1_1, UnderlyingPx_48, UnderlyingInstrument_48);
      FIX::UnderlyingQty UnderlyingQty_48;
      UnderlyingQty_48.setString("21367545");
set_field(noUnderlyings_0_1_1, UnderlyingQty_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_808519543"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1959976334"}, UnderlyingInstrument_48);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_48;
      UnderlyingRepurchaseRate_48.setString("83.730000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{2122731944}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_1953301695"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_2078276185"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1019173203"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_1116481803"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_707105480"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_1203958570"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1601175700"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_1290044061"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1072522430"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_48);
      FIX::UnderlyingStartValue UnderlyingStartValue_48;
      UnderlyingStartValue_48.setString("2702893");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1503414723"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_48);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_48;
      UnderlyingStrikePrice_48.setString("17580702");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_48, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_1191707220"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_2049775161"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1172374608"}, UnderlyingInstrument_48);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_835954288"}, UnderlyingInstrument_48);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_48;
      UnderlyingUnitOfMeasureQty_48.setString("11690220");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_48, UnderlyingInstrument_48);
      all_values.push_back(UnderlyingInstrument_48);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_101;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1439171840"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_21880283"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_291726379"}, UnderlyingStipulations_NoUnderlyingStips_98);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_838649729"}, UnderlyingStipulations_NoUnderlyingStips_98);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_98;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1100245922"}, UndlyInstrumentParties_NoUndlyInstrumentParties_98);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_98);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1395935363}, UndlyInstrumentParties_NoUndlyInstrumentParties_98);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_98);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_456960463"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1326727900}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_99;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2094667422"}, UndlyInstrumentParties_NoUndlyInstrumentParties_99);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_99);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{2033833381}, UndlyInstrumentParties_NoUndlyInstrumentParties_99);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_99);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1027134319"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1176393794}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_76181126"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1785839932}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1446683188"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1579595849}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_100;
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1342193443"}, UndlyInstrumentParties_NoUndlyInstrumentParties_100);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_100);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyRole{1190182440}, UndlyInstrumentParties_NoUndlyInstrumentParties_100);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_100);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_265056124"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{215073400}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1222371303"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1434078213}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2143050781"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_2, FIX::UnderlyingInstrumentPartySubIDType{514059495}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_49;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1455958496"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{1508366825}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_805785874"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{147124578}, UnderlyingInstrument_49);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
      UnderlyingAdjustedQuantity_49.setString("8629538");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_49, UnderlyingInstrument_49);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
      UnderlyingAllocationPercent_49.setString("17.970000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_49, UnderlyingInstrument_49);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
      UnderlyingAttachmentPoint_49.setString("69.940000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_111405531"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_834042368"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_1255227457"}, UnderlyingInstrument_49);
      FIX::UnderlyingCapValue UnderlyingCapValue_49;
      UnderlyingCapValue_49.setString("14381334");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_49, UnderlyingInstrument_49);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
      UnderlyingCashAmount_49.setString("7812261");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_49);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
      UnderlyingContractMultiplier_49.setString("13244831");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{1932368486}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1708320394"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_353393310"}, UnderlyingInstrument_49);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
      UnderlyingCouponRate_49.setString("96.120000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_1346676679"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_49);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
      UnderlyingCurrentValue_49.setString("5413864");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_49, UnderlyingInstrument_49);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
      UnderlyingDetachmentPoint_49.setString("74.610000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_49, UnderlyingInstrument_49);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
      UnderlyingDirtyPrice_49.setString("4833606");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_49, UnderlyingInstrument_49);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
      UnderlyingEndPrice_49.setString("9278034");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_49, UnderlyingInstrument_49);
      FIX::UnderlyingEndValue UnderlyingEndValue_49;
      UnderlyingEndValue_49.setString("2804135");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{698434006}, UnderlyingInstrument_49);
      FIX::UnderlyingFXRate UnderlyingFXRate_49;
      UnderlyingFXRate_49.setString("26911");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_49);
      FIX::UnderlyingFactor UnderlyingFactor_49;
      UnderlyingFactor_49.setString("6940011");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{516750640}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_1022966647"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_54884317"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_1322536515"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1170091225"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_917838133"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1081084664"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1968358219"}, UnderlyingInstrument_49);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
      UnderlyingNotionalPercentageOutstanding_49.setString("36.640000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_49);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
      UnderlyingOriginalNotionalPercentageOutstanding_49.setString("20.280000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_319893447"}, UnderlyingInstrument_49);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
      UnderlyingPriceUnitOfMeasureQty_49.setString("5488695");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{1757288104}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1644376612}, UnderlyingInstrument_49);
      FIX::UnderlyingPx UnderlyingPx_49;
      UnderlyingPx_49.setString("3337543");
set_field(noUnderlyings_0_1_2, UnderlyingPx_49, UnderlyingInstrument_49);
      FIX::UnderlyingQty UnderlyingQty_49;
      UnderlyingQty_49.setString("13181248");
set_field(noUnderlyings_0_1_2, UnderlyingQty_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1997769922"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_194820328"}, UnderlyingInstrument_49);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
      UnderlyingRepurchaseRate_49.setString("78.810000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{1650362773}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1635482141"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1058704355"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1665720234"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_2118842747"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1986507845"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_1946133820"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_669793106"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_1989198990"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1513141971"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_49);
      FIX::UnderlyingStartValue UnderlyingStartValue_49;
      UnderlyingStartValue_49.setString("3584659");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_388624970"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_49);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
      UnderlyingStrikePrice_49.setString("15587161");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_189033048"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_614603513"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1379590767"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1218276712"}, UnderlyingInstrument_49);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
      UnderlyingUnitOfMeasureQty_49.setString("3822468");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_49, UnderlyingInstrument_49);
      all_values.push_back(UnderlyingInstrument_49);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1538170160"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_931116423"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_2065497252"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1035063124"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_1264870787"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1236138454"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_1459691115"}, UnderlyingStipulations_NoUnderlyingStips_99);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_1753456336"}, UnderlyingStipulations_NoUnderlyingStips_99);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_101;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_947689609"}, UndlyInstrumentParties_NoUndlyInstrumentParties_101);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_101);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{2053948758}, UndlyInstrumentParties_NoUndlyInstrumentParties_101);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_101);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_503701240"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1852598930}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1588841814"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{345416582}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_102;
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1218257253"}, UndlyInstrumentParties_NoUndlyInstrumentParties_102);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_102);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyRole{703882565}, UndlyInstrumentParties_NoUndlyInstrumentParties_102);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_102);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_76347328"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{237401414}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1018114771"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{265380376}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_852004928"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{250221891}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_103;
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1483657089"}, UndlyInstrumentParties_NoUndlyInstrumentParties_103);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_103);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyRole{558431039}, UndlyInstrumentParties_NoUndlyInstrumentParties_103);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_103);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203;
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_17884601"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{476444643}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noStrikes_0_0);
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
