#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_779717120"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_498475036"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::EncodedTextLen{483415801}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_719205031"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_425948934"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MassCancelRequestType{'9'}, OrderMassCancelRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_275467555"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::Side{'3'}, OrderMassCancelRequest_0);
  set_field(msg, FIX::Text{"STRING_1484337240"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 55, 39, 6, 1, 2012)}, OrderMassCancelRequest_0);
  all_values.push_back(OrderMassCancelRequest_0);

  all_compo_names.insert("OrderMassCancelRequest");

  // Instrument
  multiset<string> Instrument_47;
  FIX::AttachmentPoint AttachmentPoint_47;
  AttachmentPoint_47.setString("69.580000");
set_field(msg, AttachmentPoint_47, Instrument_47);
  set_field(msg, FIX::CFICode{"STRING_1898831749"}, Instrument_47);
  set_field(msg, FIX::CPProgram{99}, Instrument_47);
  set_field(msg, FIX::CPRegType{"STRING_2124794081"}, Instrument_47);
  FIX::CapPrice CapPrice_47;
  CapPrice_47.setString("1618621");
set_field(msg, CapPrice_47, Instrument_47);
  FIX::ContractMultiplier ContractMultiplier_47;
  ContractMultiplier_47.setString("21200294");
set_field(msg, ContractMultiplier_47, Instrument_47);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_47);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_139297142"}, Instrument_47);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_392828653"}, Instrument_47);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1065939837"}, Instrument_47);
  FIX::CouponRate CouponRate_47;
  CouponRate_47.setString("61.760000");
set_field(msg, CouponRate_47, Instrument_47);
  set_field(msg, FIX::CreditRating{"STRING_1473508714"}, Instrument_47);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1781058659"}, Instrument_47);
  FIX::DetachmentPoint DetachmentPoint_47;
  DetachmentPoint_47.setString("32.960000");
set_field(msg, DetachmentPoint_47, Instrument_47);
  set_field(msg, FIX::EncodedIssuer{"DATA_1971983750"}, Instrument_47);
  set_field(msg, FIX::EncodedIssuerLen{116990813}, Instrument_47);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_367884679"}, Instrument_47);
  set_field(msg, FIX::EncodedSecurityDescLen{250449036}, Instrument_47);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_47);
  FIX::Factor Factor_47;
  Factor_47.setString("6433522");
set_field(msg, Factor_47, Instrument_47);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_47);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_47);
  FIX::FloorPrice FloorPrice_47;
  FloorPrice_47.setString("2490391");
set_field(msg, FloorPrice_47, Instrument_47);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_47);
  set_field(msg, FIX::InstrRegistry{"STRING_1195161728"}, Instrument_47);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_47);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1407089052"}, Instrument_47);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_681983499"}, Instrument_47);
  set_field(msg, FIX::Issuer{"STRING_1116690172"}, Instrument_47);
  set_field(msg, FIX::ListMethod{0}, Instrument_47);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1553372133"}, Instrument_47);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_558573482"}, Instrument_47);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_407187921"}, Instrument_47);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1360388106"}, Instrument_47);
  FIX::MinPriceIncrement MinPriceIncrement_47;
  MinPriceIncrement_47.setString("5358839");
set_field(msg, MinPriceIncrement_47, Instrument_47);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
  MinPriceIncrementAmount_47.setString("5690500");
set_field(msg, MinPriceIncrementAmount_47, Instrument_47);
  set_field(msg, FIX::NTPositionLimit{1332933888}, Instrument_47);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
  NotionalPercentageOutstanding_47.setString("14.520000");
set_field(msg, NotionalPercentageOutstanding_47, Instrument_47);
  set_field(msg, FIX::OptAttribute{'7'}, Instrument_47);
  FIX::OptPayoutAmount OptPayoutAmount_47;
  OptPayoutAmount_47.setString("17257625");
set_field(msg, OptPayoutAmount_47, Instrument_47);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_47);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
  OriginalNotionalPercentageOutstanding_47.setString("33.440000");
set_field(msg, OriginalNotionalPercentageOutstanding_47, Instrument_47);
  set_field(msg, FIX::Pool{"STRING_1051787607"}, Instrument_47);
  set_field(msg, FIX::PositionLimit{1340586300}, Instrument_47);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_47);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_876287709"}, Instrument_47);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
  PriceUnitOfMeasureQty_47.setString("14575771");
set_field(msg, PriceUnitOfMeasureQty_47, Instrument_47);
  set_field(msg, FIX::Product{3}, Instrument_47);
  set_field(msg, FIX::ProductComplex{"STRING_1126736745"}, Instrument_47);
  set_field(msg, FIX::PutOrCall{1}, Instrument_47);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_237226258"}, Instrument_47);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_10183960"}, Instrument_47);
  FIX::RepurchaseRate RepurchaseRate_47;
  RepurchaseRate_47.setString("82.450000");
set_field(msg, RepurchaseRate_47, Instrument_47);
  set_field(msg, FIX::RepurchaseTerm{486265359}, Instrument_47);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_47);
  set_field(msg, FIX::SecurityDesc{"STRING_561636325"}, Instrument_47);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1648141633"}, Instrument_47);
  set_field(msg, FIX::SecurityGroup{"STRING_1543056369"}, Instrument_47);
  set_field(msg, FIX::SecurityID{"STRING_1243619824"}, Instrument_47);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_47);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_47);
  set_field(msg, FIX::SecuritySubType{"STRING_649508309"}, Instrument_47);
  set_field(msg, FIX::SecurityType{"STRING_PZFJ"}, Instrument_47);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_47);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_47);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1711805556"}, Instrument_47);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1027650488"}, Instrument_47);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_47);
  FIX::StrikeMultiplier StrikeMultiplier_47;
  StrikeMultiplier_47.setString("17359976");
set_field(msg, StrikeMultiplier_47, Instrument_47);
  FIX::StrikePrice StrikePrice_47;
  StrikePrice_47.setString("7736255");
set_field(msg, StrikePrice_47, Instrument_47);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_47);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
  StrikePriceBoundaryPrecision_47.setString("73.510000");
set_field(msg, StrikePriceBoundaryPrecision_47, Instrument_47);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_47);
  FIX::StrikeValue StrikeValue_47;
  StrikeValue_47.setString("11055073");
set_field(msg, StrikeValue_47, Instrument_47);
  set_field(msg, FIX::Symbol{"STRING_539296696"}, Instrument_47);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_47);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_47);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_47);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_47);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
  UnitOfMeasureQty_47.setString("854580");
set_field(msg, UnitOfMeasureQty_47, Instrument_47);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_47);
  all_values.push_back(Instrument_47);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_94;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexEventPrice ComplexEventPrice_94;
    ComplexEventPrice_94.setString("8566623");
set_field(noComplexEvents_0_0, ComplexEventPrice_94, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
    ComplexEventPriceBoundaryPrecision_94.setString("89.240000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_94, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
    ComplexOptPayoutAmount_94.setString("12571887");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_94, ComplexEvents_NoComplexEvents_94);
    all_values.push_back(ComplexEvents_NoComplexEvents_94);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_201;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 33, 44, 20, 10, 2014)}, ComplexEventDates_NoComplexEventDates_201);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 52, 59, 22, 8, 2009)}, ComplexEventDates_NoComplexEventDates_201);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_201);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 30, 51)}, ComplexEventTimes_NoComplexEventTimes_407);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 50, 15)}, ComplexEventTimes_NoComplexEventTimes_407);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_202;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 7, 35, 11, 9, 2005)}, ComplexEventDates_NoComplexEventDates_202);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 32, 17, 18, 9, 2006)}, ComplexEventDates_NoComplexEventDates_202);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_202);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 55, 51)}, ComplexEventTimes_NoComplexEventTimes_408);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 10, 33)}, ComplexEventTimes_NoComplexEventTimes_408);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_203;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 55, 13, 27, 9, 2009)}, ComplexEventDates_NoComplexEventDates_203);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 23, 41, 19, 12, 2011)}, ComplexEventDates_NoComplexEventDates_203);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_203);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 27, 29)}, ComplexEventTimes_NoComplexEventTimes_409);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 47, 37)}, ComplexEventTimes_NoComplexEventTimes_409);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 24, 10)}, ComplexEventTimes_NoComplexEventTimes_410);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 20, 41)}, ComplexEventTimes_NoComplexEventTimes_410);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 29, 22)}, ComplexEventTimes_NoComplexEventTimes_411);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 25, 22)}, ComplexEventTimes_NoComplexEventTimes_411);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_98;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1263731929"}, EvntGrp_NoEvents_98);
    FIX::EventPx EventPx_98;
    EventPx_98.setString("6649984");
set_field(noEvents_0_0, EventPx_98, EvntGrp_NoEvents_98);
    set_field(noEvents_0_0, FIX::EventText{"STRING_460227579"}, EvntGrp_NoEvents_98);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 42, 27, 0, 10, 2002)}, EvntGrp_NoEvents_98);
    set_field(noEvents_0_0, FIX::EventType{7}, EvntGrp_NoEvents_98);
    all_values.push_back(EvntGrp_NoEvents_98);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_89;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_2137528664"}, InstrumentParties_NoInstrumentParties_89);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_89);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{841731775}, InstrumentParties_NoInstrumentParties_89);
    all_values.push_back(InstrumentParties_NoInstrumentParties_89);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2001581727"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1802889665}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_61029091"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{799363394}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1245534378"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1885744933}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_98;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_992411018"}, SecAltIDGrp_NoSecurityAltID_98);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_449921074"}, SecAltIDGrp_NoSecurityAltID_98);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_99;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_240291944"}, SecAltIDGrp_NoSecurityAltID_99);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_252251357"}, SecAltIDGrp_NoSecurityAltID_99);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_94;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1192833623"}, SecurityXML_94);
  set_field(msg, FIX::SecurityXMLLen{1333161670}, SecurityXML_94);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2072408739"}, SecurityXML_94);
  all_values.push_back(SecurityXML_94);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_449409951"}, Parties_NoPartyIDs_88);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_88);
    set_field(noPartyIDs_0_0, FIX::PartyRole{20}, Parties_NoPartyIDs_88);
    all_values.push_back(Parties_NoPartyIDs_88);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1901932204"}, PtysSubGrp_NoPartySubIDs_178);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_178);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_222880946"}, PtysSubGrp_NoPartySubIDs_179);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_179);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1785664943"}, TargetParties_NoTargetPartyIDs_8);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_8);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1239160926}, TargetParties_NoTargetPartyIDs_8);
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1775709959"}, TargetParties_NoTargetPartyIDs_9);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'7'}, TargetParties_NoTargetPartyIDs_9);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{2080892702}, TargetParties_NoTargetPartyIDs_9);
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_2135083642"}, TargetParties_NoTargetPartyIDs_10);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'6'}, TargetParties_NoTargetPartyIDs_10);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{1736298719}, TargetParties_NoTargetPartyIDs_10);
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_83;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_48629085"}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{1435060364}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_834349449"}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1934374018}, UnderlyingInstrument_83);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
  UnderlyingAdjustedQuantity_83.setString("16341061");
set_field(msg, UnderlyingAdjustedQuantity_83, UnderlyingInstrument_83);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
  UnderlyingAllocationPercent_83.setString("4.670000");
set_field(msg, UnderlyingAllocationPercent_83, UnderlyingInstrument_83);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
  UnderlyingAttachmentPoint_83.setString("14.440000");
set_field(msg, UnderlyingAttachmentPoint_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1874398131"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_2079011825"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1429645067"}, UnderlyingInstrument_83);
  FIX::UnderlyingCapValue UnderlyingCapValue_83;
  UnderlyingCapValue_83.setString("10600761");
set_field(msg, UnderlyingCapValue_83, UnderlyingInstrument_83);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
  UnderlyingCashAmount_83.setString("20039369");
set_field(msg, UnderlyingCashAmount_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_83);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
  UnderlyingContractMultiplier_83.setString("15094861");
set_field(msg, UnderlyingContractMultiplier_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{446376775}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_573902390"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_722565463"}, UnderlyingInstrument_83);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
  UnderlyingCouponRate_83.setString("53.310000");
set_field(msg, UnderlyingCouponRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_719450539"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_83);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
  UnderlyingCurrentValue_83.setString("5701113");
set_field(msg, UnderlyingCurrentValue_83, UnderlyingInstrument_83);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
  UnderlyingDetachmentPoint_83.setString("77.040000");
set_field(msg, UnderlyingDetachmentPoint_83, UnderlyingInstrument_83);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
  UnderlyingDirtyPrice_83.setString("18729428");
set_field(msg, UnderlyingDirtyPrice_83, UnderlyingInstrument_83);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
  UnderlyingEndPrice_83.setString("18092722");
set_field(msg, UnderlyingEndPrice_83, UnderlyingInstrument_83);
  FIX::UnderlyingEndValue UnderlyingEndValue_83;
  UnderlyingEndValue_83.setString("2118540");
set_field(msg, UnderlyingEndValue_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingExerciseStyle{507058137}, UnderlyingInstrument_83);
  FIX::UnderlyingFXRate UnderlyingFXRate_83;
  UnderlyingFXRate_83.setString("17426813");
set_field(msg, UnderlyingFXRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_83);
  FIX::UnderlyingFactor UnderlyingFactor_83;
  UnderlyingFactor_83.setString("11427551");
set_field(msg, UnderlyingFactor_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1331496401}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_248083095"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_430331823"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_18362202"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_34973465"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2064438010"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1845122670"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_271784910"}, UnderlyingInstrument_83);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
  UnderlyingNotionalPercentageOutstanding_83.setString("24.930000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_83);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
  UnderlyingOriginalNotionalPercentageOutstanding_83.setString("99.770000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_703944998"}, UnderlyingInstrument_83);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
  UnderlyingPriceUnitOfMeasureQty_83.setString("16331041");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingProduct{1399348092}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingPutOrCall{65947454}, UnderlyingInstrument_83);
  FIX::UnderlyingPx UnderlyingPx_83;
  UnderlyingPx_83.setString("20794808");
set_field(msg, UnderlyingPx_83, UnderlyingInstrument_83);
  FIX::UnderlyingQty UnderlyingQty_83;
  UnderlyingQty_83.setString("19732504");
set_field(msg, UnderlyingQty_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_788512917"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_132822574"}, UnderlyingInstrument_83);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
  UnderlyingRepurchaseRate_83.setString("73.730000");
set_field(msg, UnderlyingRepurchaseRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1733959326}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_828407894"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1115328722"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_170103383"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_553867141"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_777117350"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_381957398"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1060925279"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_372315031"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_581411408"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_83);
  FIX::UnderlyingStartValue UnderlyingStartValue_83;
  UnderlyingStartValue_83.setString("17038114");
set_field(msg, UnderlyingStartValue_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_829494503"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_83);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
  UnderlyingStrikePrice_83.setString("8644679");
set_field(msg, UnderlyingStrikePrice_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_403482924"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1419812657"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1136252878"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_47351769"}, UnderlyingInstrument_83);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
  UnderlyingUnitOfMeasureQty_83.setString("10489798");
set_field(msg, UnderlyingUnitOfMeasureQty_83, UnderlyingInstrument_83);
  all_values.push_back(UnderlyingInstrument_83);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_751296767"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_534600323"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_2089547300"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_817244221"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltID{"STRING_466597566"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1915314135"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_599420141"}, UnderlyingStipulations_NoUnderlyingStips_167);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_313047860"}, UnderlyingStipulations_NoUnderlyingStips_167);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_1192232816"}, UnderlyingStipulations_NoUnderlyingStips_168);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_1427828035"}, UnderlyingStipulations_NoUnderlyingStips_168);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1362336199"}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{58010285}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_895136808"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{430325316}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_178221358"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{951333546}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_2134136749"}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1437862108}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1872183829"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{1841345032}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_981155745"}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{1888696801}, UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1551152268"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{492509920}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
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
