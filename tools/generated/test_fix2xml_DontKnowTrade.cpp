#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTrade, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DontKnowTrade msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTrade_0;
  set_field(msg, FIX::DKReason{'E'}, DontKnowTrade_0);
  set_field(msg, FIX::EncodedText{"DATA_1930533361"}, DontKnowTrade_0);
  set_field(msg, FIX::EncodedTextLen{1863739861}, DontKnowTrade_0);
  set_field(msg, FIX::ExecID{"STRING_977250664"}, DontKnowTrade_0);
  FIX::LastPx LastPx_7;
  LastPx_7.setString("10436668");
set_field(msg, LastPx_7, DontKnowTrade_0);
  FIX::LastQty LastQty_7;
  LastQty_7.setString("3040399");
set_field(msg, LastQty_7, DontKnowTrade_0);
  set_field(msg, FIX::OrderID{"STRING_2052140017"}, DontKnowTrade_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1482030723"}, DontKnowTrade_0);
  set_field(msg, FIX::Side{'9'}, DontKnowTrade_0);
  set_field(msg, FIX::Text{"STRING_734876289"}, DontKnowTrade_0);
  all_values.push_back(DontKnowTrade_0);

  all_compo_names.insert("DontKnowTrade");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_34;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_866550447"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1738022506}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1927222026"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{532666349}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_434083677"}, InstrumentLeg_34);
    FIX::LegContractMultiplier LegContractMultiplier_34;
    LegContractMultiplier_34.setString("21386305");
set_field(noLegs_0_0, LegContractMultiplier_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{691464171}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_230039883"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_74141966"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1097987250"}, InstrumentLeg_34);
    FIX::LegCouponRate LegCouponRate_34;
    LegCouponRate_34.setString("12.170000");
set_field(noLegs_0_0, LegCouponRate_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1195586816"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_480022468"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{350684934}, InstrumentLeg_34);
    FIX::LegFactor LegFactor_34;
    LegFactor_34.setString("19634276");
set_field(noLegs_0_0, LegFactor_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1550225875}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_243725655"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_180892358"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1218494687"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_26775369"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2044632220"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_48261703"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1070442206"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_201188509"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_34);
    FIX::LegOptionRatio LegOptionRatio_34;
    LegOptionRatio_34.setString("4049892");
set_field(noLegs_0_0, LegOptionRatio_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_309730389"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_687794361"}, InstrumentLeg_34);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
    LegPriceUnitOfMeasureQty_34.setString("17020285");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegProduct{1176280837}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegPutOrCall{278333219}, InstrumentLeg_34);
    FIX::LegRatioQty LegRatioQty_34;
    LegRatioQty_34.setString("14817669");
set_field(noLegs_0_0, LegRatioQty_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1708947186"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_712416896"}, InstrumentLeg_34);
    FIX::LegRepurchaseRate LegRepurchaseRate_34;
    LegRepurchaseRate_34.setString("38.170000");
set_field(noLegs_0_0, LegRepurchaseRate_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{252927709}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_942456779"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1547055783"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1350914959"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_276924348"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_595158951"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1705426874"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1075181420"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_34);
    FIX::LegStrikePrice LegStrikePrice_34;
    LegStrikePrice_34.setString("4779236");
set_field(noLegs_0_0, LegStrikePrice_34, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_152353816"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1203124717"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1696418335"}, InstrumentLeg_34);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_179129185"}, InstrumentLeg_34);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
    LegUnitOfMeasureQty_34.setString("11002732");
set_field(noLegs_0_0, LegUnitOfMeasureQty_34, InstrumentLeg_34);
    all_values.push_back(InstrumentLeg_34);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1249571391"}, LegSecAltIDGrp_NoLegSecurityAltID_68);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1301461798"}, LegSecAltIDGrp_NoLegSecurityAltID_68);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1697598111"}, LegSecAltIDGrp_NoLegSecurityAltID_69);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1654560673"}, LegSecAltIDGrp_NoLegSecurityAltID_69);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1611192188"}, LegSecAltIDGrp_NoLegSecurityAltID_70);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_237908824"}, LegSecAltIDGrp_NoLegSecurityAltID_70);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_21;
  FIX::AttachmentPoint AttachmentPoint_21;
  AttachmentPoint_21.setString("55.790000");
set_field(msg, AttachmentPoint_21, Instrument_21);
  set_field(msg, FIX::CFICode{"STRING_639989377"}, Instrument_21);
  set_field(msg, FIX::CPProgram{2}, Instrument_21);
  set_field(msg, FIX::CPRegType{"STRING_543388863"}, Instrument_21);
  FIX::CapPrice CapPrice_21;
  CapPrice_21.setString("2014529");
set_field(msg, CapPrice_21, Instrument_21);
  FIX::ContractMultiplier ContractMultiplier_21;
  ContractMultiplier_21.setString("12286589");
set_field(msg, ContractMultiplier_21, Instrument_21);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_21);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_454380624"}, Instrument_21);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_23632072"}, Instrument_21);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1415874815"}, Instrument_21);
  FIX::CouponRate CouponRate_21;
  CouponRate_21.setString("55.840000");
set_field(msg, CouponRate_21, Instrument_21);
  set_field(msg, FIX::CreditRating{"STRING_300556420"}, Instrument_21);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2011033766"}, Instrument_21);
  FIX::DetachmentPoint DetachmentPoint_21;
  DetachmentPoint_21.setString("88.100000");
set_field(msg, DetachmentPoint_21, Instrument_21);
  set_field(msg, FIX::EncodedIssuer{"DATA_1506844807"}, Instrument_21);
  set_field(msg, FIX::EncodedIssuerLen{938731538}, Instrument_21);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1271866971"}, Instrument_21);
  set_field(msg, FIX::EncodedSecurityDescLen{381593518}, Instrument_21);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_21);
  FIX::Factor Factor_21;
  Factor_21.setString("14242207");
set_field(msg, Factor_21, Instrument_21);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_21);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_21);
  FIX::FloorPrice FloorPrice_21;
  FloorPrice_21.setString("16033499");
set_field(msg, FloorPrice_21, Instrument_21);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_21);
  set_field(msg, FIX::InstrRegistry{"STRING_562786263"}, Instrument_21);
  set_field(msg, FIX::InstrmtAssignmentMethod{'7'}, Instrument_21);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1838969675"}, Instrument_21);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_112900726"}, Instrument_21);
  set_field(msg, FIX::Issuer{"STRING_212514742"}, Instrument_21);
  set_field(msg, FIX::ListMethod{1}, Instrument_21);
  set_field(msg, FIX::LocaleOfIssue{"STRING_350809551"}, Instrument_21);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1421620321"}, Instrument_21);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1942667592"}, Instrument_21);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_867051595"}, Instrument_21);
  FIX::MinPriceIncrement MinPriceIncrement_21;
  MinPriceIncrement_21.setString("19650091");
set_field(msg, MinPriceIncrement_21, Instrument_21);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
  MinPriceIncrementAmount_21.setString("21441205");
set_field(msg, MinPriceIncrementAmount_21, Instrument_21);
  set_field(msg, FIX::NTPositionLimit{2095710535}, Instrument_21);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
  NotionalPercentageOutstanding_21.setString("82.160000");
set_field(msg, NotionalPercentageOutstanding_21, Instrument_21);
  set_field(msg, FIX::OptAttribute{'4'}, Instrument_21);
  FIX::OptPayoutAmount OptPayoutAmount_21;
  OptPayoutAmount_21.setString("21193426");
set_field(msg, OptPayoutAmount_21, Instrument_21);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_21);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
  OriginalNotionalPercentageOutstanding_21.setString("94.200000");
set_field(msg, OriginalNotionalPercentageOutstanding_21, Instrument_21);
  set_field(msg, FIX::Pool{"STRING_272415380"}, Instrument_21);
  set_field(msg, FIX::PositionLimit{965769501}, Instrument_21);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_21);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1779260187"}, Instrument_21);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
  PriceUnitOfMeasureQty_21.setString("19045010");
set_field(msg, PriceUnitOfMeasureQty_21, Instrument_21);
  set_field(msg, FIX::Product{11}, Instrument_21);
  set_field(msg, FIX::ProductComplex{"STRING_13370057"}, Instrument_21);
  set_field(msg, FIX::PutOrCall{0}, Instrument_21);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2020672342"}, Instrument_21);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1598088292"}, Instrument_21);
  FIX::RepurchaseRate RepurchaseRate_21;
  RepurchaseRate_21.setString("24.510000");
set_field(msg, RepurchaseRate_21, Instrument_21);
  set_field(msg, FIX::RepurchaseTerm{1476538667}, Instrument_21);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_21);
  set_field(msg, FIX::SecurityDesc{"STRING_554565066"}, Instrument_21);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_34492736"}, Instrument_21);
  set_field(msg, FIX::SecurityGroup{"STRING_1827082197"}, Instrument_21);
  set_field(msg, FIX::SecurityID{"STRING_667465793"}, Instrument_21);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_21);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_21);
  set_field(msg, FIX::SecuritySubType{"STRING_1018275344"}, Instrument_21);
  set_field(msg, FIX::SecurityType{"STRING_CP"}, Instrument_21);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_21);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_21);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1486153335"}, Instrument_21);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_774097568"}, Instrument_21);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_21);
  FIX::StrikeMultiplier StrikeMultiplier_21;
  StrikeMultiplier_21.setString("12251150");
set_field(msg, StrikeMultiplier_21, Instrument_21);
  FIX::StrikePrice StrikePrice_21;
  StrikePrice_21.setString("18054127");
set_field(msg, StrikePrice_21, Instrument_21);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_21);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
  StrikePriceBoundaryPrecision_21.setString("44.720000");
set_field(msg, StrikePriceBoundaryPrecision_21, Instrument_21);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_21);
  FIX::StrikeValue StrikeValue_21;
  StrikeValue_21.setString("10930031");
set_field(msg, StrikeValue_21, Instrument_21);
  set_field(msg, FIX::Symbol{"STRING_658529055"}, Instrument_21);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_21);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_21);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_21);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_21);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
  UnitOfMeasureQty_21.setString("20236931");
set_field(msg, UnitOfMeasureQty_21, Instrument_21);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_21);
  all_values.push_back(Instrument_21);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_45;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexEventPrice ComplexEventPrice_45;
    ComplexEventPrice_45.setString("4572243");
set_field(noComplexEvents_0_0, ComplexEventPrice_45, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
    ComplexEventPriceBoundaryPrecision_45.setString("33.310000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_45, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
    ComplexOptPayoutAmount_45.setString("10900191");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_45, ComplexEvents_NoComplexEvents_45);
    all_values.push_back(ComplexEvents_NoComplexEvents_45);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_97;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 49, 42, 11, 5, 2003)}, ComplexEventDates_NoComplexEventDates_97);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 55, 56, 14, 1, 2008)}, ComplexEventDates_NoComplexEventDates_97);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_97);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 2, 24)}, ComplexEventTimes_NoComplexEventTimes_195);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 59, 31)}, ComplexEventTimes_NoComplexEventTimes_195);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_98;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 31, 21, 4, 5, 2009)}, ComplexEventDates_NoComplexEventDates_98);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 46, 59, 20, 6, 2015)}, ComplexEventDates_NoComplexEventDates_98);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_98);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 3, 55)}, ComplexEventTimes_NoComplexEventTimes_196);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 9, 4)}, ComplexEventTimes_NoComplexEventTimes_196);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 7, 2)}, ComplexEventTimes_NoComplexEventTimes_197);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 53, 9)}, ComplexEventTimes_NoComplexEventTimes_197);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_46;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexEventPrice ComplexEventPrice_46;
    ComplexEventPrice_46.setString("9310718");
set_field(noComplexEvents_0_1, ComplexEventPrice_46, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
    ComplexEventPriceBoundaryPrecision_46.setString("87.340000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_46, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
    ComplexOptPayoutAmount_46.setString("15156252");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_46, ComplexEvents_NoComplexEvents_46);
    all_values.push_back(ComplexEvents_NoComplexEvents_46);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_99;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 56, 59, 7, 4, 2007)}, ComplexEventDates_NoComplexEventDates_99);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 2, 2, 9, 10, 2003)}, ComplexEventDates_NoComplexEventDates_99);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_99);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 16, 17)}, ComplexEventTimes_NoComplexEventTimes_198);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 10, 42)}, ComplexEventTimes_NoComplexEventTimes_198);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 15, 19)}, ComplexEventTimes_NoComplexEventTimes_199);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 22, 8)}, ComplexEventTimes_NoComplexEventTimes_199);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 56, 42)}, ComplexEventTimes_NoComplexEventTimes_200);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 41, 1)}, ComplexEventTimes_NoComplexEventTimes_200);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_49;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1201809343"}, EvntGrp_NoEvents_49);
    FIX::EventPx EventPx_49;
    EventPx_49.setString("3079604");
set_field(noEvents_0_0, EventPx_49, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventText{"STRING_520568128"}, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 45, 43, 3, 7, 2006)}, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventType{9}, EvntGrp_NoEvents_49);
    all_values.push_back(EvntGrp_NoEvents_49);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_40;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_317834822"}, InstrumentParties_NoInstrumentParties_40);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_40);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2135632819}, InstrumentParties_NoInstrumentParties_40);
    all_values.push_back(InstrumentParties_NoInstrumentParties_40);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1008740590"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1837643250}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_41;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1912430430"}, InstrumentParties_NoInstrumentParties_41);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_41);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{907795244}, InstrumentParties_NoInstrumentParties_41);
    all_values.push_back(InstrumentParties_NoInstrumentParties_41);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1420276681"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1257479748}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1797693867"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{571558775}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_42;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1870670955"}, SecAltIDGrp_NoSecurityAltID_42);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1420730657"}, SecAltIDGrp_NoSecurityAltID_42);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_43;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_882932565"}, SecAltIDGrp_NoSecurityAltID_43);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_366789262"}, SecAltIDGrp_NoSecurityAltID_43);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_42;
  set_field(msg, FIX::SecurityXML{"XMLDATA_475056352"}, SecurityXML_42);
  set_field(msg, FIX::SecurityXMLLen{1190893000}, SecurityXML_42);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_887357390"}, SecurityXML_42);
  all_values.push_back(SecurityXML_42);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_3;
  FIX::CashOrderQty CashOrderQty_3;
  CashOrderQty_3.setString("1759849");
set_field(msg, CashOrderQty_3, OrderQtyData_3);
  FIX::OrderPercent OrderPercent_3;
  OrderPercent_3.setString("65.510000");
set_field(msg, OrderPercent_3, OrderQtyData_3);
  FIX::OrderQty OrderQty_11;
  OrderQty_11.setString("4350224");
set_field(msg, OrderQty_11, OrderQtyData_3);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_3);
  FIX::RoundingModulus RoundingModulus_3;
  RoundingModulus_3.setString("17064738");
set_field(msg, RoundingModulus_3, OrderQtyData_3);
  all_values.push_back(OrderQtyData_3);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_404841529"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1558234847}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_852392448"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{722676351}, UnderlyingInstrument_36);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("10741497");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_36, UnderlyingInstrument_36);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("16.190000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_36, UnderlyingInstrument_36);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("76.500000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_2082890332"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_530701221"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_469784433"}, UnderlyingInstrument_36);
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("12578493");
set_field(noUnderlyings_0_0, UnderlyingCapValue_36, UnderlyingInstrument_36);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("14384964");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_36);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("5306423");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{548492566}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1859781263"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1102201170"}, UnderlyingInstrument_36);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("70.890000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1582968571"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_36);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("19497578");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_36, UnderlyingInstrument_36);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("45.320000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_36, UnderlyingInstrument_36);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("6766090");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_36, UnderlyingInstrument_36);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("6896315");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_36, UnderlyingInstrument_36);
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("10264894");
set_field(noUnderlyings_0_0, UnderlyingEndValue_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{812685558}, UnderlyingInstrument_36);
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("11246539");
set_field(noUnderlyings_0_0, UnderlyingFXRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_36);
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("3716757");
set_field(noUnderlyings_0_0, UnderlyingFactor_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2125862606}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_251592322"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1929910644"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_830771406"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_974268674"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_856576738"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1671313025"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1679106324"}, UnderlyingInstrument_36);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("34.220000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_36);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("71.090000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2049832784"}, UnderlyingInstrument_36);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("14930270");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{63494505}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{432991531}, UnderlyingInstrument_36);
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("20415196");
set_field(noUnderlyings_0_0, UnderlyingPx_36, UnderlyingInstrument_36);
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("19232757");
set_field(noUnderlyings_0_0, UnderlyingQty_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1535192701"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_644303071"}, UnderlyingInstrument_36);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("6.920000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1910640881}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_130019077"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1161034877"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_613661765"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_806628084"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1850666453"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1640151230"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1619313643"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_827836789"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1486902023"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_36);
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("8062157");
set_field(noUnderlyings_0_0, UnderlyingStartValue_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1738494346"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_36);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("5652793");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_482509526"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1160816530"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_96902048"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1274492948"}, UnderlyingInstrument_36);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("12153471");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_36, UnderlyingInstrument_36);
    all_values.push_back(UnderlyingInstrument_36);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1176842084"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_560890544"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_161803663"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1609833615"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2085079432"}, UnderlyingStipulations_NoUnderlyingStips_74);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_997542668"}, UnderlyingStipulations_NoUnderlyingStips_74);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1296356476"}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1229248674}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1374361666"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2035876758}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_13090511"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{867029248}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1507706753"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{840927301}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_206447624"}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1647143048}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_977145333"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1136646554}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_362737694"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1459654859}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_149979436"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{459639742}, UnderlyingInstrument_37);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("5866641");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_37, UnderlyingInstrument_37);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("65.650000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_37, UnderlyingInstrument_37);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("89.000000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1763506243"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1926217109"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_719752564"}, UnderlyingInstrument_37);
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("12258562");
set_field(noUnderlyings_0_1, UnderlyingCapValue_37, UnderlyingInstrument_37);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("2336599");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_37);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("759152");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1332889583}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1953704825"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_836615132"}, UnderlyingInstrument_37);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("46.090000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_116128883"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_37);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("1292193");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_37, UnderlyingInstrument_37);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("23.990000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_37, UnderlyingInstrument_37);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("18107544");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_37, UnderlyingInstrument_37);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("9701466");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_37, UnderlyingInstrument_37);
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("11369700");
set_field(noUnderlyings_0_1, UnderlyingEndValue_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1014483370}, UnderlyingInstrument_37);
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("4698060");
set_field(noUnderlyings_0_1, UnderlyingFXRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_37);
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("19916287");
set_field(noUnderlyings_0_1, UnderlyingFactor_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1606452650}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1297166039"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1303799915"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1756432086"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1756805782"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1890464075"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_974275003"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_167271034"}, UnderlyingInstrument_37);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("66.700000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_37);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("35.980000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_584859233"}, UnderlyingInstrument_37);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("9866684");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1544371947}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{660774464}, UnderlyingInstrument_37);
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("1720743");
set_field(noUnderlyings_0_1, UnderlyingPx_37, UnderlyingInstrument_37);
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("13505931");
set_field(noUnderlyings_0_1, UnderlyingQty_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1497389596"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_586728995"}, UnderlyingInstrument_37);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("20.070000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1560882747}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_889776714"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1595941401"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_343921499"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_553047539"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_418604449"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1480891522"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1567530910"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_888410545"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_267836220"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_37);
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("3473795");
set_field(noUnderlyings_0_1, UnderlyingStartValue_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1565002259"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_37);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("11743243");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_310972660"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_930602989"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1341595428"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1817459331"}, UnderlyingInstrument_37);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("16836114");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_37, UnderlyingInstrument_37);
    all_values.push_back(UnderlyingInstrument_37);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_254834916"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_522796256"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_915609380"}, UnderlyingStipulations_NoUnderlyingStips_75);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_694870642"}, UnderlyingStipulations_NoUnderlyingStips_75);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_265515328"}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{147855160}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_23892704"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1743796562}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_22835927"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{576940243}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_14917363"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1503727449}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2144471153"}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1771563669}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1250707455"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1189082281}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1976655705"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1207035440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
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
