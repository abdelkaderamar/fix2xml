#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassActionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_1305441228"}, OrderMassActionRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1473722175"}, OrderMassActionRequest_0);
  set_field(msg, FIX::EncodedTextLen{2008648487}, OrderMassActionRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_515944834"}, OrderMassActionRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_479579855"}, OrderMassActionRequest_0);
  set_field(msg, FIX::MassActionScope{11}, OrderMassActionRequest_0);
  set_field(msg, FIX::MassActionType{2}, OrderMassActionRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1917459016"}, OrderMassActionRequest_0);
  set_field(msg, FIX::Side{'7'}, OrderMassActionRequest_0);
  set_field(msg, FIX::Text{"STRING_1924289354"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 9, 38, 6, 5, 2001)}, OrderMassActionRequest_0);
  all_values.push_back(OrderMassActionRequest_0);

  all_compo_names.insert("OrderMassActionRequest");

  // Instrument
  multiset<string> Instrument_45;
  FIX::AttachmentPoint AttachmentPoint_45;
  AttachmentPoint_45.setString("2.710000");
set_field(msg, AttachmentPoint_45, Instrument_45);
  set_field(msg, FIX::CFICode{"STRING_739270639"}, Instrument_45);
  set_field(msg, FIX::CPProgram{99}, Instrument_45);
  set_field(msg, FIX::CPRegType{"STRING_297458284"}, Instrument_45);
  FIX::CapPrice CapPrice_45;
  CapPrice_45.setString("13558894");
set_field(msg, CapPrice_45, Instrument_45);
  FIX::ContractMultiplier ContractMultiplier_45;
  ContractMultiplier_45.setString("12640827");
set_field(msg, ContractMultiplier_45, Instrument_45);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_45);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_57229315"}, Instrument_45);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1215650034"}, Instrument_45);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_289903348"}, Instrument_45);
  FIX::CouponRate CouponRate_45;
  CouponRate_45.setString("73.080000");
set_field(msg, CouponRate_45, Instrument_45);
  set_field(msg, FIX::CreditRating{"STRING_544882475"}, Instrument_45);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1595344576"}, Instrument_45);
  FIX::DetachmentPoint DetachmentPoint_45;
  DetachmentPoint_45.setString("58.350000");
set_field(msg, DetachmentPoint_45, Instrument_45);
  set_field(msg, FIX::EncodedIssuer{"DATA_406047315"}, Instrument_45);
  set_field(msg, FIX::EncodedIssuerLen{2111289410}, Instrument_45);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1900075691"}, Instrument_45);
  set_field(msg, FIX::EncodedSecurityDescLen{2091673501}, Instrument_45);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_45);
  FIX::Factor Factor_45;
  Factor_45.setString("16700510");
set_field(msg, Factor_45, Instrument_45);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_45);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_45);
  FIX::FloorPrice FloorPrice_45;
  FloorPrice_45.setString("16850506");
set_field(msg, FloorPrice_45, Instrument_45);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_45);
  set_field(msg, FIX::InstrRegistry{"STRING_1945963069"}, Instrument_45);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_45);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_533076228"}, Instrument_45);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_234512359"}, Instrument_45);
  set_field(msg, FIX::Issuer{"STRING_784360743"}, Instrument_45);
  set_field(msg, FIX::ListMethod{1}, Instrument_45);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1877413977"}, Instrument_45);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_465917367"}, Instrument_45);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1639742508"}, Instrument_45);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_133118796"}, Instrument_45);
  FIX::MinPriceIncrement MinPriceIncrement_45;
  MinPriceIncrement_45.setString("7633756");
set_field(msg, MinPriceIncrement_45, Instrument_45);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
  MinPriceIncrementAmount_45.setString("8481482");
set_field(msg, MinPriceIncrementAmount_45, Instrument_45);
  set_field(msg, FIX::NTPositionLimit{1397201578}, Instrument_45);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
  NotionalPercentageOutstanding_45.setString("84.550000");
set_field(msg, NotionalPercentageOutstanding_45, Instrument_45);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_45);
  FIX::OptPayoutAmount OptPayoutAmount_45;
  OptPayoutAmount_45.setString("4653679");
set_field(msg, OptPayoutAmount_45, Instrument_45);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_45);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
  OriginalNotionalPercentageOutstanding_45.setString("12.460000");
set_field(msg, OriginalNotionalPercentageOutstanding_45, Instrument_45);
  set_field(msg, FIX::Pool{"STRING_1010250440"}, Instrument_45);
  set_field(msg, FIX::PositionLimit{1704232731}, Instrument_45);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_45);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1416297755"}, Instrument_45);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
  PriceUnitOfMeasureQty_45.setString("16680384");
set_field(msg, PriceUnitOfMeasureQty_45, Instrument_45);
  set_field(msg, FIX::Product{13}, Instrument_45);
  set_field(msg, FIX::ProductComplex{"STRING_1360487608"}, Instrument_45);
  set_field(msg, FIX::PutOrCall{0}, Instrument_45);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1547806536"}, Instrument_45);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1198089179"}, Instrument_45);
  FIX::RepurchaseRate RepurchaseRate_45;
  RepurchaseRate_45.setString("4.610000");
set_field(msg, RepurchaseRate_45, Instrument_45);
  set_field(msg, FIX::RepurchaseTerm{1085373507}, Instrument_45);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_45);
  set_field(msg, FIX::SecurityDesc{"STRING_370709882"}, Instrument_45);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1340349892"}, Instrument_45);
  set_field(msg, FIX::SecurityGroup{"STRING_1008734486"}, Instrument_45);
  set_field(msg, FIX::SecurityID{"STRING_605222242"}, Instrument_45);
  set_field(msg, FIX::SecurityIDSource{"STRING_5"}, Instrument_45);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_45);
  set_field(msg, FIX::SecuritySubType{"STRING_335152571"}, Instrument_45);
  set_field(msg, FIX::SecurityType{"STRING_SLQN"}, Instrument_45);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_45);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_45);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1206520006"}, Instrument_45);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_102129838"}, Instrument_45);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_45);
  FIX::StrikeMultiplier StrikeMultiplier_45;
  StrikeMultiplier_45.setString("10075074");
set_field(msg, StrikeMultiplier_45, Instrument_45);
  FIX::StrikePrice StrikePrice_45;
  StrikePrice_45.setString("1833572");
set_field(msg, StrikePrice_45, Instrument_45);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_45);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
  StrikePriceBoundaryPrecision_45.setString("86.690000");
set_field(msg, StrikePriceBoundaryPrecision_45, Instrument_45);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_45);
  FIX::StrikeValue StrikeValue_45;
  StrikeValue_45.setString("6911420");
set_field(msg, StrikeValue_45, Instrument_45);
  set_field(msg, FIX::Symbol{"STRING_1984822103"}, Instrument_45);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_45);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_45);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_45);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_45);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
  UnitOfMeasureQty_45.setString("14434285");
set_field(msg, UnitOfMeasureQty_45, Instrument_45);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_45);
  all_values.push_back(Instrument_45);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_92;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_92);
    FIX::ComplexEventPrice ComplexEventPrice_92;
    ComplexEventPrice_92.setString("2007903");
set_field(noComplexEvents_0_0, ComplexEventPrice_92, ComplexEvents_NoComplexEvents_92);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_92);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
    ComplexEventPriceBoundaryPrecision_92.setString("52.180000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_92, ComplexEvents_NoComplexEvents_92);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_92);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_92);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
    ComplexOptPayoutAmount_92.setString("8441074");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_92, ComplexEvents_NoComplexEvents_92);
    all_values.push_back(ComplexEvents_NoComplexEvents_92);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_196;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 22, 47, 2, 1, 2015)}, ComplexEventDates_NoComplexEventDates_196);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 1, 36, 25, 3, 2004)}, ComplexEventDates_NoComplexEventDates_196);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_196);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 2, 57)}, ComplexEventTimes_NoComplexEventTimes_398);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 56, 14)}, ComplexEventTimes_NoComplexEventTimes_398);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_197;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 12, 29, 14, 1, 2013)}, ComplexEventDates_NoComplexEventDates_197);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 52, 55, 27, 11, 2005)}, ComplexEventDates_NoComplexEventDates_197);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_197);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 13, 6)}, ComplexEventTimes_NoComplexEventTimes_399);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 16, 1)}, ComplexEventTimes_NoComplexEventTimes_399);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_94;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_986595206"}, EvntGrp_NoEvents_94);
    FIX::EventPx EventPx_94;
    EventPx_94.setString("9596486");
set_field(noEvents_0_0, EventPx_94, EvntGrp_NoEvents_94);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1561853242"}, EvntGrp_NoEvents_94);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 11, 20, 19, 11, 2014)}, EvntGrp_NoEvents_94);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_94);
    all_values.push_back(EvntGrp_NoEvents_94);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_85;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_857374260"}, InstrumentParties_NoInstrumentParties_85);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_85);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1628031101}, InstrumentParties_NoInstrumentParties_85);
    all_values.push_back(InstrumentParties_NoInstrumentParties_85);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1585275430"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1270662928}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2064752354"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{152529805}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1933842675"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1609763719}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_86;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_85304874"}, InstrumentParties_NoInstrumentParties_86);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_86);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1490540664}, InstrumentParties_NoInstrumentParties_86);
    all_values.push_back(InstrumentParties_NoInstrumentParties_86);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1942818744"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1419258212}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_87;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1496129288"}, InstrumentParties_NoInstrumentParties_87);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_87);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1233254818}, InstrumentParties_NoInstrumentParties_87);
    all_values.push_back(InstrumentParties_NoInstrumentParties_87);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1926315133"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{647624412}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_93;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1970226056"}, SecAltIDGrp_NoSecurityAltID_93);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_925267463"}, SecAltIDGrp_NoSecurityAltID_93);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_94;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1085527672"}, SecAltIDGrp_NoSecurityAltID_94);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_966574543"}, SecAltIDGrp_NoSecurityAltID_94);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_90;
  set_field(msg, FIX::SecurityXML{"XMLDATA_119490649"}, SecurityXML_90);
  set_field(msg, FIX::SecurityXMLLen{924423796}, SecurityXML_90);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1301729460"}, SecurityXML_90);
  all_values.push_back(SecurityXML_90);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_84;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1781798056"}, Parties_NoPartyIDs_84);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_84);
    set_field(noPartyIDs_0_0, FIX::PartyRole{7}, Parties_NoPartyIDs_84);
    all_values.push_back(Parties_NoPartyIDs_84);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_167;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1110106400"}, PtysSubGrp_NoPartySubIDs_167);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_167);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_167);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_168;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1399582262"}, PtysSubGrp_NoPartySubIDs_168);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_168);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_168);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_309003597"}, PtysSubGrp_NoPartySubIDs_169);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_169);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_657111456"}, TargetParties_NoTargetPartyIDs_3);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'2'}, TargetParties_NoTargetPartyIDs_3);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{767415332}, TargetParties_NoTargetPartyIDs_3);
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_4;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_452446552"}, TargetParties_NoTargetPartyIDs_4);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_4);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{116060973}, TargetParties_NoTargetPartyIDs_4);
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_81;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1419112990"}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{709948732}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_451301820"}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1197944475}, UnderlyingInstrument_81);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
  UnderlyingAdjustedQuantity_81.setString("13575731");
set_field(msg, UnderlyingAdjustedQuantity_81, UnderlyingInstrument_81);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
  UnderlyingAllocationPercent_81.setString("38.120000");
set_field(msg, UnderlyingAllocationPercent_81, UnderlyingInstrument_81);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
  UnderlyingAttachmentPoint_81.setString("68.830000");
set_field(msg, UnderlyingAttachmentPoint_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_135356960"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1444031485"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1987261427"}, UnderlyingInstrument_81);
  FIX::UnderlyingCapValue UnderlyingCapValue_81;
  UnderlyingCapValue_81.setString("2548476");
set_field(msg, UnderlyingCapValue_81, UnderlyingInstrument_81);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
  UnderlyingCashAmount_81.setString("2209716");
set_field(msg, UnderlyingCashAmount_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_81);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
  UnderlyingContractMultiplier_81.setString("262817");
set_field(msg, UnderlyingContractMultiplier_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{2002769690}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_666338209"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1425747090"}, UnderlyingInstrument_81);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
  UnderlyingCouponRate_81.setString("95.980000");
set_field(msg, UnderlyingCouponRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1776444609"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_81);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
  UnderlyingCurrentValue_81.setString("8915971");
set_field(msg, UnderlyingCurrentValue_81, UnderlyingInstrument_81);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
  UnderlyingDetachmentPoint_81.setString("16.100000");
set_field(msg, UnderlyingDetachmentPoint_81, UnderlyingInstrument_81);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
  UnderlyingDirtyPrice_81.setString("14515605");
set_field(msg, UnderlyingDirtyPrice_81, UnderlyingInstrument_81);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
  UnderlyingEndPrice_81.setString("920545");
set_field(msg, UnderlyingEndPrice_81, UnderlyingInstrument_81);
  FIX::UnderlyingEndValue UnderlyingEndValue_81;
  UnderlyingEndValue_81.setString("7670230");
set_field(msg, UnderlyingEndValue_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingExerciseStyle{1656479896}, UnderlyingInstrument_81);
  FIX::UnderlyingFXRate UnderlyingFXRate_81;
  UnderlyingFXRate_81.setString("8594699");
set_field(msg, UnderlyingFXRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_81);
  FIX::UnderlyingFactor UnderlyingFactor_81;
  UnderlyingFactor_81.setString("11331738");
set_field(msg, UnderlyingFactor_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingFlowScheduleType{975530904}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_491098961"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1843122543"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1426832724"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1689043436"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1053212040"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1785336537"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_562246671"}, UnderlyingInstrument_81);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
  UnderlyingNotionalPercentageOutstanding_81.setString("90.000000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_81);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
  UnderlyingOriginalNotionalPercentageOutstanding_81.setString("44.500000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1443416610"}, UnderlyingInstrument_81);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
  UnderlyingPriceUnitOfMeasureQty_81.setString("13028560");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingProduct{1543531689}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingPutOrCall{1469698410}, UnderlyingInstrument_81);
  FIX::UnderlyingPx UnderlyingPx_81;
  UnderlyingPx_81.setString("11581420");
set_field(msg, UnderlyingPx_81, UnderlyingInstrument_81);
  FIX::UnderlyingQty UnderlyingQty_81;
  UnderlyingQty_81.setString("623862");
set_field(msg, UnderlyingQty_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_747961852"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_348257999"}, UnderlyingInstrument_81);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
  UnderlyingRepurchaseRate_81.setString("8.600000");
set_field(msg, UnderlyingRepurchaseRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{548869864}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_937956212"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_582944379"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_658781474"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_242033110"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_674998978"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_1425804541"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1898513006"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1534468909"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_497790512"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_81);
  FIX::UnderlyingStartValue UnderlyingStartValue_81;
  UnderlyingStartValue_81.setString("3625161");
set_field(msg, UnderlyingStartValue_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_988889473"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_81);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
  UnderlyingStrikePrice_81.setString("5304492");
set_field(msg, UnderlyingStrikePrice_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1633054103"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1427201779"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1092695932"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_674139456"}, UnderlyingInstrument_81);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
  UnderlyingUnitOfMeasureQty_81.setString("3616025");
set_field(msg, UnderlyingUnitOfMeasureQty_81, UnderlyingInstrument_81);
  all_values.push_back(UnderlyingInstrument_81);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_2117556066"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1664458513"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_890768424"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1439770828"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltID{"STRING_675116914"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltIDSource{"STRING_953154675"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1023374914"}, UnderlyingStipulations_NoUnderlyingStips_163);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_644501887"}, UnderlyingStipulations_NoUnderlyingStips_163);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1961331126"}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{1247900371}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1902445244"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{526221264}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1954393594"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{1289430505}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1024011776"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubIDType{691113114}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_1651946671"}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1270955178}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_395866862"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{756525633}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_573530045"}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{1430665089}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_835799530"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{1400737508}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_452107416"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{1726567954}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
