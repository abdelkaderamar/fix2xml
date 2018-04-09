#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderMassActionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_1914266254"}, OrderMassActionRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_647014708"}, OrderMassActionRequest_0);
  set_field(msg, FIX::EncodedTextLen{397650138}, OrderMassActionRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1001842518"}, OrderMassActionRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1509106476"}, OrderMassActionRequest_0);
  set_field(msg, FIX::MassActionScope{7}, OrderMassActionRequest_0);
  set_field(msg, FIX::MassActionType{1}, OrderMassActionRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_746547688"}, OrderMassActionRequest_0);
  set_field(msg, FIX::Side{'4'}, OrderMassActionRequest_0);
  set_field(msg, FIX::Text{"STRING_1285258627"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, OrderMassActionRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(1, 33, 37, 1, 4, 2011)}, OrderMassActionRequest_0);
  all_values.push_back(OrderMassActionRequest_0);

  all_compo_names.insert("OrderMassActionRequest");

  // Instrument
  multiset<string> Instrument_58;
  FIX::AttachmentPoint AttachmentPoint_58;
  AttachmentPoint_58.setString("17.320000");
set_field(msg, AttachmentPoint_58, Instrument_58);
  set_field(msg, FIX::CFICode{"STRING_574705948"}, Instrument_58);
  set_field(msg, FIX::CPProgram{2}, Instrument_58);
  set_field(msg, FIX::CPRegType{"STRING_239421607"}, Instrument_58);
  FIX::CapPrice CapPrice_58;
  CapPrice_58.setString("16849665");
set_field(msg, CapPrice_58, Instrument_58);
  FIX::ContractMultiplier ContractMultiplier_58;
  ContractMultiplier_58.setString("20228387");
set_field(msg, ContractMultiplier_58, Instrument_58);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_58);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_938280679"}, Instrument_58);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1538364989"}, Instrument_58);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_198045216"}, Instrument_58);
  FIX::CouponRate CouponRate_58;
  CouponRate_58.setString("76.270000");
set_field(msg, CouponRate_58, Instrument_58);
  set_field(msg, FIX::CreditRating{"STRING_2005248157"}, Instrument_58);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2112311470"}, Instrument_58);
  FIX::DetachmentPoint DetachmentPoint_58;
  DetachmentPoint_58.setString("86.870000");
set_field(msg, DetachmentPoint_58, Instrument_58);
  set_field(msg, FIX::EncodedIssuer{"DATA_255414647"}, Instrument_58);
  set_field(msg, FIX::EncodedIssuerLen{966670340}, Instrument_58);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1669605163"}, Instrument_58);
  set_field(msg, FIX::EncodedSecurityDescLen{1050178181}, Instrument_58);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_58);
  FIX::Factor Factor_58;
  Factor_58.setString("2686692");
set_field(msg, Factor_58, Instrument_58);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_58);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_58);
  FIX::FloorPrice FloorPrice_58;
  FloorPrice_58.setString("9292889");
set_field(msg, FloorPrice_58, Instrument_58);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_58);
  set_field(msg, FIX::InstrRegistry{"STRING_1282540230"}, Instrument_58);
  set_field(msg, FIX::InstrmtAssignmentMethod{'6'}, Instrument_58);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1460678203"}, Instrument_58);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_545182619"}, Instrument_58);
  set_field(msg, FIX::Issuer{"STRING_1686680873"}, Instrument_58);
  set_field(msg, FIX::ListMethod{0}, Instrument_58);
  set_field(msg, FIX::LocaleOfIssue{"STRING_277053783"}, Instrument_58);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1309148958"}, Instrument_58);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1441959018"}, Instrument_58);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1745724523"}, Instrument_58);
  FIX::MinPriceIncrement MinPriceIncrement_58;
  MinPriceIncrement_58.setString("15485705");
set_field(msg, MinPriceIncrement_58, Instrument_58);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
  MinPriceIncrementAmount_58.setString("9794419");
set_field(msg, MinPriceIncrementAmount_58, Instrument_58);
  set_field(msg, FIX::NTPositionLimit{1621079632}, Instrument_58);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
  NotionalPercentageOutstanding_58.setString("84.180000");
set_field(msg, NotionalPercentageOutstanding_58, Instrument_58);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_58);
  FIX::OptPayoutAmount OptPayoutAmount_58;
  OptPayoutAmount_58.setString("10119609");
set_field(msg, OptPayoutAmount_58, Instrument_58);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_58);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
  OriginalNotionalPercentageOutstanding_58.setString("66.200000");
set_field(msg, OriginalNotionalPercentageOutstanding_58, Instrument_58);
  set_field(msg, FIX::Pool{"STRING_869725482"}, Instrument_58);
  set_field(msg, FIX::PositionLimit{724961456}, Instrument_58);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_58);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1125140129"}, Instrument_58);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
  PriceUnitOfMeasureQty_58.setString("16916317");
set_field(msg, PriceUnitOfMeasureQty_58, Instrument_58);
  set_field(msg, FIX::Product{6}, Instrument_58);
  set_field(msg, FIX::ProductComplex{"STRING_27834662"}, Instrument_58);
  set_field(msg, FIX::PutOrCall{1}, Instrument_58);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1382496027"}, Instrument_58);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1976842478"}, Instrument_58);
  FIX::RepurchaseRate RepurchaseRate_58;
  RepurchaseRate_58.setString("41.300000");
set_field(msg, RepurchaseRate_58, Instrument_58);
  set_field(msg, FIX::RepurchaseTerm{164301362}, Instrument_58);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_58);
  set_field(msg, FIX::SecurityDesc{"STRING_1562764361"}, Instrument_58);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_782650466"}, Instrument_58);
  set_field(msg, FIX::SecurityGroup{"STRING_1784670204"}, Instrument_58);
  set_field(msg, FIX::SecurityID{"STRING_2107946980"}, Instrument_58);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_58);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_58);
  set_field(msg, FIX::SecuritySubType{"STRING_237517115"}, Instrument_58);
  set_field(msg, FIX::SecurityType{"STRING_BN"}, Instrument_58);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_58);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_58);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1032083567"}, Instrument_58);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_778356958"}, Instrument_58);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_58);
  FIX::StrikeMultiplier StrikeMultiplier_58;
  StrikeMultiplier_58.setString("5485959");
set_field(msg, StrikeMultiplier_58, Instrument_58);
  FIX::StrikePrice StrikePrice_58;
  StrikePrice_58.setString("3213149");
set_field(msg, StrikePrice_58, Instrument_58);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_58);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
  StrikePriceBoundaryPrecision_58.setString("25.710000");
set_field(msg, StrikePriceBoundaryPrecision_58, Instrument_58);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_58);
  FIX::StrikeValue StrikeValue_58;
  StrikeValue_58.setString("9317834");
set_field(msg, StrikeValue_58, Instrument_58);
  set_field(msg, FIX::Symbol{"STRING_1424024231"}, Instrument_58);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_58);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_58);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_58);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_58);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
  UnitOfMeasureQty_58.setString("18929720");
set_field(msg, UnitOfMeasureQty_58, Instrument_58);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_58);
  all_values.push_back(Instrument_58);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_116;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_116);
    FIX::ComplexEventPrice ComplexEventPrice_116;
    ComplexEventPrice_116.setString("19371647");
set_field(noComplexEvents_0_0, ComplexEventPrice_116, ComplexEvents_NoComplexEvents_116);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_116);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
    ComplexEventPriceBoundaryPrecision_116.setString("68.920000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_116, ComplexEvents_NoComplexEvents_116);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_116);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_116);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
    ComplexOptPayoutAmount_116.setString("15489402");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_116, ComplexEvents_NoComplexEvents_116);
    all_values.push_back(ComplexEvents_NoComplexEvents_116);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_227;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 47, 2, 23, 12, 2013)}, ComplexEventDates_NoComplexEventDates_227);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 52, 13, 16, 5, 2006)}, ComplexEventDates_NoComplexEventDates_227);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_227);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 59, 45)}, ComplexEventTimes_NoComplexEventTimes_461);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 30, 0)}, ComplexEventTimes_NoComplexEventTimes_461);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 23, 4)}, ComplexEventTimes_NoComplexEventTimes_462);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 21, 56)}, ComplexEventTimes_NoComplexEventTimes_462);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 35, 50)}, ComplexEventTimes_NoComplexEventTimes_463);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 43, 22)}, ComplexEventTimes_NoComplexEventTimes_463);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_228;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 27, 59, 11, 10, 2008)}, ComplexEventDates_NoComplexEventDates_228);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 1, 39, 8, 2, 2015)}, ComplexEventDates_NoComplexEventDates_228);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_228);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 59, 9)}, ComplexEventTimes_NoComplexEventTimes_464);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 22, 37)}, ComplexEventTimes_NoComplexEventTimes_464);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);
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
    multiset<string> EvntGrp_NoEvents_124;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_941760095"}, EvntGrp_NoEvents_124);
    FIX::EventPx EventPx_124;
    EventPx_124.setString("16519197");
set_field(noEvents_0_0, EventPx_124, EvntGrp_NoEvents_124);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1288101622"}, EvntGrp_NoEvents_124);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 5, 6, 18, 2, 2003)}, EvntGrp_NoEvents_124);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_124);
    all_values.push_back(EvntGrp_NoEvents_124);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_125;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1713320108"}, EvntGrp_NoEvents_125);
    FIX::EventPx EventPx_125;
    EventPx_125.setString("8896558");
set_field(noEvents_0_1, EventPx_125, EvntGrp_NoEvents_125);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2010691603"}, EvntGrp_NoEvents_125);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 37, 34, 25, 7, 2012)}, EvntGrp_NoEvents_125);
    set_field(noEvents_0_1, FIX::EventType{14}, EvntGrp_NoEvents_125);
    all_values.push_back(EvntGrp_NoEvents_125);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_111;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1540633914"}, InstrumentParties_NoInstrumentParties_111);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_111);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1826527304}, InstrumentParties_NoInstrumentParties_111);
    all_values.push_back(InstrumentParties_NoInstrumentParties_111);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_798038777"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2044661766}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_242046604"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{279696949}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_838938214"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1893966317}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_112;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1567798572"}, InstrumentParties_NoInstrumentParties_112);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_112);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{889078524}, InstrumentParties_NoInstrumentParties_112);
    all_values.push_back(InstrumentParties_NoInstrumentParties_112);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_2101616012"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{231331086}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_113;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1502148394"}, InstrumentParties_NoInstrumentParties_113);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_113);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{984010187}, InstrumentParties_NoInstrumentParties_113);
    all_values.push_back(InstrumentParties_NoInstrumentParties_113);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1201675851"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{847218142}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_859902270"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{940754284}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_144472491"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1994504044}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_118;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1092262822"}, SecAltIDGrp_NoSecurityAltID_118);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_918806072"}, SecAltIDGrp_NoSecurityAltID_118);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_119;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1787230946"}, SecAltIDGrp_NoSecurityAltID_119);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1637823957"}, SecAltIDGrp_NoSecurityAltID_119);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_120;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_311956339"}, SecAltIDGrp_NoSecurityAltID_120);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_324664122"}, SecAltIDGrp_NoSecurityAltID_120);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_116;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1316867614"}, SecurityXML_116);
  set_field(msg, FIX::SecurityXMLLen{1277950794}, SecurityXML_116);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1122702899"}, SecurityXML_116);
  all_values.push_back(SecurityXML_116);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1519997399"}, Parties_NoPartyIDs_95);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_95);
    set_field(noPartyIDs_0_0, FIX::PartyRole{7}, Parties_NoPartyIDs_95);
    all_values.push_back(Parties_NoPartyIDs_95);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_822714773"}, PtysSubGrp_NoPartySubIDs_188);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_188);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_8074944"}, PtysSubGrp_NoPartySubIDs_189);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_189);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1838688288"}, PtysSubGrp_NoPartySubIDs_190);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_190);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1613536409"}, Parties_NoPartyIDs_96);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_96);
    set_field(noPartyIDs_0_1, FIX::PartyRole{67}, Parties_NoPartyIDs_96);
    all_values.push_back(Parties_NoPartyIDs_96);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1204900469"}, PtysSubGrp_NoPartySubIDs_191);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_191);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1393939886"}, PtysSubGrp_NoPartySubIDs_192);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_192);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_67623203"}, PtysSubGrp_NoPartySubIDs_193);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_193);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_189095899"}, Parties_NoPartyIDs_97);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_97);
    set_field(noPartyIDs_0_2, FIX::PartyRole{61}, Parties_NoPartyIDs_97);
    all_values.push_back(Parties_NoPartyIDs_97);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_650226334"}, PtysSubGrp_NoPartySubIDs_194);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_194);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_4;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1967093948"}, TargetParties_NoTargetPartyIDs_4);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_4);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1276210219}, TargetParties_NoTargetPartyIDs_4);
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1033656033"}, TargetParties_NoTargetPartyIDs_5);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'9'}, TargetParties_NoTargetPartyIDs_5);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{531126420}, TargetParties_NoTargetPartyIDs_5);
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_939156331"}, TargetParties_NoTargetPartyIDs_6);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'9'}, TargetParties_NoTargetPartyIDs_6);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{1353841193}, TargetParties_NoTargetPartyIDs_6);
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_80;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_676228608"}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{101774955}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1465229208"}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{367433248}, UnderlyingInstrument_80);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
  UnderlyingAdjustedQuantity_80.setString("3411809");
set_field(msg, UnderlyingAdjustedQuantity_80, UnderlyingInstrument_80);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
  UnderlyingAllocationPercent_80.setString("19.690000");
set_field(msg, UnderlyingAllocationPercent_80, UnderlyingInstrument_80);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
  UnderlyingAttachmentPoint_80.setString("78.660000");
set_field(msg, UnderlyingAttachmentPoint_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1564597202"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1465319585"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1575558335"}, UnderlyingInstrument_80);
  FIX::UnderlyingCapValue UnderlyingCapValue_80;
  UnderlyingCapValue_80.setString("14877479");
set_field(msg, UnderlyingCapValue_80, UnderlyingInstrument_80);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
  UnderlyingCashAmount_80.setString("7117758");
set_field(msg, UnderlyingCashAmount_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_80);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
  UnderlyingContractMultiplier_80.setString("15553711");
set_field(msg, UnderlyingContractMultiplier_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1952736105}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_1762825339"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_567773494"}, UnderlyingInstrument_80);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
  UnderlyingCouponRate_80.setString("88.120000");
set_field(msg, UnderlyingCouponRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1591668537"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_80);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
  UnderlyingCurrentValue_80.setString("17451758");
set_field(msg, UnderlyingCurrentValue_80, UnderlyingInstrument_80);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
  UnderlyingDetachmentPoint_80.setString("1.290000");
set_field(msg, UnderlyingDetachmentPoint_80, UnderlyingInstrument_80);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
  UnderlyingDirtyPrice_80.setString("17439640");
set_field(msg, UnderlyingDirtyPrice_80, UnderlyingInstrument_80);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
  UnderlyingEndPrice_80.setString("8739024");
set_field(msg, UnderlyingEndPrice_80, UnderlyingInstrument_80);
  FIX::UnderlyingEndValue UnderlyingEndValue_80;
  UnderlyingEndValue_80.setString("20712661");
set_field(msg, UnderlyingEndValue_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingExerciseStyle{571183994}, UnderlyingInstrument_80);
  FIX::UnderlyingFXRate UnderlyingFXRate_80;
  UnderlyingFXRate_80.setString("14050288");
set_field(msg, UnderlyingFXRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_80);
  FIX::UnderlyingFactor UnderlyingFactor_80;
  UnderlyingFactor_80.setString("6648840");
set_field(msg, UnderlyingFactor_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingFlowScheduleType{611386394}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1539167453"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_766658961"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_2076615602"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1906600702"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1107839947"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_860413923"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_129774920"}, UnderlyingInstrument_80);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
  UnderlyingNotionalPercentageOutstanding_80.setString("35.010000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_80);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
  UnderlyingOriginalNotionalPercentageOutstanding_80.setString("32.550000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2012701415"}, UnderlyingInstrument_80);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
  UnderlyingPriceUnitOfMeasureQty_80.setString("8900256");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingProduct{1131579047}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingPutOrCall{1420588884}, UnderlyingInstrument_80);
  FIX::UnderlyingPx UnderlyingPx_80;
  UnderlyingPx_80.setString("6952781");
set_field(msg, UnderlyingPx_80, UnderlyingInstrument_80);
  FIX::UnderlyingQty UnderlyingQty_80;
  UnderlyingQty_80.setString("7469207");
set_field(msg, UnderlyingQty_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1988362378"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_512813305"}, UnderlyingInstrument_80);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
  UnderlyingRepurchaseRate_80.setString("56.280000");
set_field(msg, UnderlyingRepurchaseRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1058878559}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_654587516"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1936281485"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_2096488688"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_251067919"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_662700265"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_2020271202"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_822251913"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_2067729114"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_735726399"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_80);
  FIX::UnderlyingStartValue UnderlyingStartValue_80;
  UnderlyingStartValue_80.setString("5316318");
set_field(msg, UnderlyingStartValue_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_127410205"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_80);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
  UnderlyingStrikePrice_80.setString("20340109");
set_field(msg, UnderlyingStrikePrice_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1214151180"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1321177739"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_16302179"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1739104681"}, UnderlyingInstrument_80);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
  UnderlyingUnitOfMeasureQty_80.setString("14994275");
set_field(msg, UnderlyingUnitOfMeasureQty_80, UnderlyingInstrument_80);
  all_values.push_back(UnderlyingInstrument_80);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1604322449"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_241969635"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_877427685"}, UnderlyingStipulations_NoUnderlyingStips_162);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_937247776"}, UnderlyingStipulations_NoUnderlyingStips_162);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_718306416"}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{1643757200}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2104648597"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{1432555037}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1726190015"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{208232868}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2095255303"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubIDType{1598977569}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_1030484782"}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{187220320}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_399648982"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{314630525}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_476448286"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{860412798}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
      set_field(noUndlyInstrumentPartySubIDs_1_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_201157784"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
      set_field(noUndlyInstrumentPartySubIDs_1_1_2, FIX::UnderlyingInstrumentPartySubIDType{1690599466}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_34106889"}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{1282220500}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1939095397"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{739059301}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1775504123"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{497342583}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassActionRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
      set_field(noUndlyInstrumentPartySubIDs_2_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1616486986"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
      set_field(noUndlyInstrumentPartySubIDs_2_1_2, FIX::UnderlyingInstrumentPartySubIDType{565268251}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
  }
  // header
  multiset<string> header_60;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_60);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_187309754"}, header_60);
  set_header_field(msg.getHeader(), FIX::BodyLength{2015329333}, header_60);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1446267708"}, header_60);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1964494729"}, header_60);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1972494282"}, header_60);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_731339097"}, header_60);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1543201096}, header_60);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_60);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{679110752}, header_60);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_994695017"}, header_60);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1063728285"}, header_60);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_547127874"}, header_60);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(2, 16, 3, 17, 11, 2006)}, header_60);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_60);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_60);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1915163611"}, header_60);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{588166295}, header_60);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1227347384"}, header_60);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1706775361"}, header_60);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1327225596"}, header_60);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(8, 15, 31, 23, 6, 2000)}, header_60);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1305412511"}, header_60);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_800549771"}, header_60);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1113492430"}, header_60);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2036751609"}, header_60);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{196267219}, header_60);
  all_values.push_back(header_60);
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
