#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::RequestForPositionsAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_0;
  set_field(msg, FIX::Account{"STRING_1213839547"}, RequestForPositionsAck_0);
  set_field(msg, FIX::AccountType{4}, RequestForPositionsAck_0);
  set_field(msg, FIX::AcctIDSource{1}, RequestForPositionsAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_184753345"}, RequestForPositionsAck_0);
  set_field(msg, FIX::Currency{"CHF"}, RequestForPositionsAck_0);
  set_field(msg, FIX::EncodedText{"DATA_514418898"}, RequestForPositionsAck_0);
  set_field(msg, FIX::EncodedTextLen{1393895285}, RequestForPositionsAck_0);
  set_field(msg, FIX::MatchStatus{'0'}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_688246398"}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqID{"STRING_651864708"}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqResult{4}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqStatus{1}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqType{3}, RequestForPositionsAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_812294840"}, RequestForPositionsAck_0);
  set_field(msg, FIX::ResponseTransportType{0}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1879915969"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, RequestForPositionsAck_0);
  set_field(msg, FIX::Text{"STRING_749524747"}, RequestForPositionsAck_0);
  set_field(msg, FIX::TotalNumPosReports{1269921722}, RequestForPositionsAck_0);
  set_field(msg, FIX::UnsolicitedIndicator{false}, RequestForPositionsAck_0);
  all_values.push_back(RequestForPositionsAck_0);

  all_compo_names.insert("RequestForPositionsAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_103330184"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1065104544}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_256852127"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{793182864}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1906763978"}, InstrumentLeg_117);
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("11169144");
set_field(noLegs_0_0, LegContractMultiplier_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2007022411}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_816579527"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1086935812"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_44292108"}, InstrumentLeg_117);
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("64.170000");
set_field(noLegs_0_0, LegCouponRate_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_571971630"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_29327425"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1246957405}, InstrumentLeg_117);
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("8875527");
set_field(noLegs_0_0, LegFactor_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{235691309}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_873010551"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1419187037"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1047986149"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_446792079"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2139732018"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_777594144"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2075627731"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1872164340"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_117);
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("6776688");
set_field(noLegs_0_0, LegOptionRatio_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_994602414"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1501546576"}, InstrumentLeg_117);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("20704883");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegProduct{1097932598}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPutOrCall{419167473}, InstrumentLeg_117);
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("1798568");
set_field(noLegs_0_0, LegRatioQty_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1891115462"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_178447803"}, InstrumentLeg_117);
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("13.090000");
set_field(noLegs_0_0, LegRepurchaseRate_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1750654225}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_995027330"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_236223474"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1794946334"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1984303748"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_808195104"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_206173693"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_837522529"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_117);
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("10732138");
set_field(noLegs_0_0, LegStrikePrice_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_178658001"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_231764307"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2121199987"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_625450081"}, InstrumentLeg_117);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("2240126");
set_field(noLegs_0_0, LegUnitOfMeasureQty_117, InstrumentLeg_117);
    all_values.push_back(InstrumentLeg_117);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_230;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_553594164"}, LegSecAltIDGrp_NoLegSecurityAltID_230);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_2096177017"}, LegSecAltIDGrp_NoLegSecurityAltID_230);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_230);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_231;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_335038326"}, LegSecAltIDGrp_NoLegSecurityAltID_231);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1231262994"}, LegSecAltIDGrp_NoLegSecurityAltID_231);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_231);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_232;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_943295783"}, LegSecAltIDGrp_NoLegSecurityAltID_232);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1836584903"}, LegSecAltIDGrp_NoLegSecurityAltID_232);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_232);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_78;
  FIX::AttachmentPoint AttachmentPoint_78;
  AttachmentPoint_78.setString("76.980000");
set_field(msg, AttachmentPoint_78, Instrument_78);
  set_field(msg, FIX::CFICode{"STRING_2041228382"}, Instrument_78);
  set_field(msg, FIX::CPProgram{1}, Instrument_78);
  set_field(msg, FIX::CPRegType{"STRING_1334124530"}, Instrument_78);
  FIX::CapPrice CapPrice_78;
  CapPrice_78.setString("17848601");
set_field(msg, CapPrice_78, Instrument_78);
  FIX::ContractMultiplier ContractMultiplier_78;
  ContractMultiplier_78.setString("2867165");
set_field(msg, ContractMultiplier_78, Instrument_78);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_78);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1388030774"}, Instrument_78);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1281743861"}, Instrument_78);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_719635665"}, Instrument_78);
  FIX::CouponRate CouponRate_78;
  CouponRate_78.setString("34.600000");
set_field(msg, CouponRate_78, Instrument_78);
  set_field(msg, FIX::CreditRating{"STRING_1118563961"}, Instrument_78);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1527830769"}, Instrument_78);
  FIX::DetachmentPoint DetachmentPoint_78;
  DetachmentPoint_78.setString("71.530000");
set_field(msg, DetachmentPoint_78, Instrument_78);
  set_field(msg, FIX::EncodedIssuer{"DATA_1191072116"}, Instrument_78);
  set_field(msg, FIX::EncodedIssuerLen{217869650}, Instrument_78);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_547314603"}, Instrument_78);
  set_field(msg, FIX::EncodedSecurityDescLen{3649386}, Instrument_78);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_78);
  FIX::Factor Factor_78;
  Factor_78.setString("7259726");
set_field(msg, Factor_78, Instrument_78);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_78);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_78);
  FIX::FloorPrice FloorPrice_78;
  FloorPrice_78.setString("13514226");
set_field(msg, FloorPrice_78, Instrument_78);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_78);
  set_field(msg, FIX::InstrRegistry{"STRING_2016110311"}, Instrument_78);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_78);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_408119740"}, Instrument_78);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_203664990"}, Instrument_78);
  set_field(msg, FIX::Issuer{"STRING_988796195"}, Instrument_78);
  set_field(msg, FIX::ListMethod{0}, Instrument_78);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2040249893"}, Instrument_78);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2143063894"}, Instrument_78);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1245160258"}, Instrument_78);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1034973"}, Instrument_78);
  FIX::MinPriceIncrement MinPriceIncrement_78;
  MinPriceIncrement_78.setString("13297047");
set_field(msg, MinPriceIncrement_78, Instrument_78);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
  MinPriceIncrementAmount_78.setString("8825368");
set_field(msg, MinPriceIncrementAmount_78, Instrument_78);
  set_field(msg, FIX::NTPositionLimit{287751504}, Instrument_78);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
  NotionalPercentageOutstanding_78.setString("69.670000");
set_field(msg, NotionalPercentageOutstanding_78, Instrument_78);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_78);
  FIX::OptPayoutAmount OptPayoutAmount_78;
  OptPayoutAmount_78.setString("15694953");
set_field(msg, OptPayoutAmount_78, Instrument_78);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_78);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
  OriginalNotionalPercentageOutstanding_78.setString("73.920000");
set_field(msg, OriginalNotionalPercentageOutstanding_78, Instrument_78);
  set_field(msg, FIX::Pool{"STRING_540575679"}, Instrument_78);
  set_field(msg, FIX::PositionLimit{1913099754}, Instrument_78);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_78);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1731647795"}, Instrument_78);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
  PriceUnitOfMeasureQty_78.setString("21309694");
set_field(msg, PriceUnitOfMeasureQty_78, Instrument_78);
  set_field(msg, FIX::Product{4}, Instrument_78);
  set_field(msg, FIX::ProductComplex{"STRING_1735297182"}, Instrument_78);
  set_field(msg, FIX::PutOrCall{1}, Instrument_78);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1526048105"}, Instrument_78);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1970710875"}, Instrument_78);
  FIX::RepurchaseRate RepurchaseRate_78;
  RepurchaseRate_78.setString("54.250000");
set_field(msg, RepurchaseRate_78, Instrument_78);
  set_field(msg, FIX::RepurchaseTerm{729987142}, Instrument_78);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_78);
  set_field(msg, FIX::SecurityDesc{"STRING_260512089"}, Instrument_78);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_487520344"}, Instrument_78);
  set_field(msg, FIX::SecurityGroup{"STRING_690773339"}, Instrument_78);
  set_field(msg, FIX::SecurityID{"STRING_464177079"}, Instrument_78);
  set_field(msg, FIX::SecurityIDSource{"STRING_6"}, Instrument_78);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_78);
  set_field(msg, FIX::SecuritySubType{"STRING_356943324"}, Instrument_78);
  set_field(msg, FIX::SecurityType{"STRING_EUCD"}, Instrument_78);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_78);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_78);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_654117913"}, Instrument_78);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2022402279"}, Instrument_78);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_78);
  FIX::StrikeMultiplier StrikeMultiplier_78;
  StrikeMultiplier_78.setString("21454862");
set_field(msg, StrikeMultiplier_78, Instrument_78);
  FIX::StrikePrice StrikePrice_78;
  StrikePrice_78.setString("677415");
set_field(msg, StrikePrice_78, Instrument_78);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_78);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
  StrikePriceBoundaryPrecision_78.setString("99.560000");
set_field(msg, StrikePriceBoundaryPrecision_78, Instrument_78);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_78);
  FIX::StrikeValue StrikeValue_78;
  StrikeValue_78.setString("4706363");
set_field(msg, StrikeValue_78, Instrument_78);
  set_field(msg, FIX::Symbol{"STRING_1409340854"}, Instrument_78);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_78);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_78);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_78);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_78);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
  UnitOfMeasureQty_78.setString("17286913");
set_field(msg, UnitOfMeasureQty_78, Instrument_78);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_78);
  all_values.push_back(Instrument_78);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_158;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_158);
    FIX::ComplexEventPrice ComplexEventPrice_158;
    ComplexEventPrice_158.setString("1704843");
set_field(noComplexEvents_0_0, ComplexEventPrice_158, ComplexEvents_NoComplexEvents_158);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_158);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
    ComplexEventPriceBoundaryPrecision_158.setString("51.930000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_158, ComplexEvents_NoComplexEvents_158);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_158);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_158);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
    ComplexOptPayoutAmount_158.setString("6977822");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_158, ComplexEvents_NoComplexEvents_158);
    all_values.push_back(ComplexEvents_NoComplexEvents_158);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_318;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 47, 12, 13, 1, 2001)}, ComplexEventDates_NoComplexEventDates_318);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 7, 33, 11, 1, 2016)}, ComplexEventDates_NoComplexEventDates_318);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_318);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 9, 36)}, ComplexEventTimes_NoComplexEventTimes_652);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 20, 53)}, ComplexEventTimes_NoComplexEventTimes_652);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_319;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 18, 46, 20, 7, 2011)}, ComplexEventDates_NoComplexEventDates_319);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 7, 56, 9, 6, 2013)}, ComplexEventDates_NoComplexEventDates_319);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_319);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 48, 24)}, ComplexEventTimes_NoComplexEventTimes_653);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 47, 38)}, ComplexEventTimes_NoComplexEventTimes_653);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_159;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_159);
    FIX::ComplexEventPrice ComplexEventPrice_159;
    ComplexEventPrice_159.setString("18291893");
set_field(noComplexEvents_0_1, ComplexEventPrice_159, ComplexEvents_NoComplexEvents_159);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_159);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
    ComplexEventPriceBoundaryPrecision_159.setString("66.540000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_159, ComplexEvents_NoComplexEvents_159);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_159);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_159);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
    ComplexOptPayoutAmount_159.setString("7096009");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_159, ComplexEvents_NoComplexEvents_159);
    all_values.push_back(ComplexEvents_NoComplexEvents_159);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_320;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 24, 3, 0, 7, 2014)}, ComplexEventDates_NoComplexEventDates_320);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 22, 38, 16, 8, 2007)}, ComplexEventDates_NoComplexEventDates_320);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_320);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 32, 31)}, ComplexEventTimes_NoComplexEventTimes_654);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 18, 26)}, ComplexEventTimes_NoComplexEventTimes_654);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 57, 13)}, ComplexEventTimes_NoComplexEventTimes_655);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 59, 55)}, ComplexEventTimes_NoComplexEventTimes_655);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 19, 58)}, ComplexEventTimes_NoComplexEventTimes_656);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 12, 18)}, ComplexEventTimes_NoComplexEventTimes_656);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_160;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_160);
    FIX::ComplexEventPrice ComplexEventPrice_160;
    ComplexEventPrice_160.setString("5641190");
set_field(noComplexEvents_0_2, ComplexEventPrice_160, ComplexEvents_NoComplexEvents_160);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_160);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
    ComplexEventPriceBoundaryPrecision_160.setString("76.000000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_160, ComplexEvents_NoComplexEvents_160);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_160);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_160);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
    ComplexOptPayoutAmount_160.setString("7490515");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_160, ComplexEvents_NoComplexEvents_160);
    all_values.push_back(ComplexEvents_NoComplexEvents_160);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_321;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 3, 54, 6, 10, 2014)}, ComplexEventDates_NoComplexEventDates_321);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 10, 9, 3, 4, 2013)}, ComplexEventDates_NoComplexEventDates_321);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_321);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 54, 24)}, ComplexEventTimes_NoComplexEventTimes_657);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 36, 44)}, ComplexEventTimes_NoComplexEventTimes_657);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_322;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 33, 56, 12, 2, 2011)}, ComplexEventDates_NoComplexEventDates_322);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 23, 11, 10, 10, 2012)}, ComplexEventDates_NoComplexEventDates_322);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_322);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 41, 31)}, ComplexEventTimes_NoComplexEventTimes_658);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 32, 27)}, ComplexEventTimes_NoComplexEventTimes_658);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_153;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1322934089"}, EvntGrp_NoEvents_153);
    FIX::EventPx EventPx_153;
    EventPx_153.setString("5005171");
set_field(noEvents_0_0, EventPx_153, EvntGrp_NoEvents_153);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1761192790"}, EvntGrp_NoEvents_153);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(21, 39, 38, 9, 11, 2003)}, EvntGrp_NoEvents_153);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_153);
    all_values.push_back(EvntGrp_NoEvents_153);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_154;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1174122422"}, EvntGrp_NoEvents_154);
    FIX::EventPx EventPx_154;
    EventPx_154.setString("11051754");
set_field(noEvents_0_1, EventPx_154, EvntGrp_NoEvents_154);
    set_field(noEvents_0_1, FIX::EventText{"STRING_581230243"}, EvntGrp_NoEvents_154);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(5, 6, 6, 23, 8, 2007)}, EvntGrp_NoEvents_154);
    set_field(noEvents_0_1, FIX::EventType{3}, EvntGrp_NoEvents_154);
    all_values.push_back(EvntGrp_NoEvents_154);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_144;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_694772857"}, InstrumentParties_NoInstrumentParties_144);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_144);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1936107203}, InstrumentParties_NoInstrumentParties_144);
    all_values.push_back(InstrumentParties_NoInstrumentParties_144);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1416422016"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1596538727}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_145;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1402257237"}, InstrumentParties_NoInstrumentParties_145);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_145);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{771989168}, InstrumentParties_NoInstrumentParties_145);
    all_values.push_back(InstrumentParties_NoInstrumentParties_145);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_349749077"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{937054023}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_215629064"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1329340436}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_157;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_296889105"}, SecAltIDGrp_NoSecurityAltID_157);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2091449370"}, SecAltIDGrp_NoSecurityAltID_157);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_158;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_268260517"}, SecAltIDGrp_NoSecurityAltID_158);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_253608454"}, SecAltIDGrp_NoSecurityAltID_158);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_159;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1118088144"}, SecAltIDGrp_NoSecurityAltID_159);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1373436006"}, SecAltIDGrp_NoSecurityAltID_159);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_156;
  set_field(msg, FIX::SecurityXML{"XMLDATA_834838697"}, SecurityXML_156);
  set_field(msg, FIX::SecurityXMLLen{1735612167}, SecurityXML_156);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2035986299"}, SecurityXML_156);
  all_values.push_back(SecurityXML_156);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_137;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1839992254"}, Parties_NoPartyIDs_137);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_137);
    set_field(noPartyIDs_0_0, FIX::PartyRole{24}, Parties_NoPartyIDs_137);
    all_values.push_back(Parties_NoPartyIDs_137);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_273;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1478209065"}, PtysSubGrp_NoPartySubIDs_273);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_273);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_273);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_117;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_981812760"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1295328654}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1168029716"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{250751128}, UnderlyingInstrument_117);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
    UnderlyingAdjustedQuantity_117.setString("7443837");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_117, UnderlyingInstrument_117);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
    UnderlyingAllocationPercent_117.setString("33.050000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_117, UnderlyingInstrument_117);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
    UnderlyingAttachmentPoint_117.setString("10.630000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1516372902"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_178094036"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1336540140"}, UnderlyingInstrument_117);
    FIX::UnderlyingCapValue UnderlyingCapValue_117;
    UnderlyingCapValue_117.setString("3059432");
set_field(noUnderlyings_0_0, UnderlyingCapValue_117, UnderlyingInstrument_117);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
    UnderlyingCashAmount_117.setString("3937231");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_117);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
    UnderlyingContractMultiplier_117.setString("20221620");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{690612205}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_462362650"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_142938948"}, UnderlyingInstrument_117);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
    UnderlyingCouponRate_117.setString("6.600000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1580450794"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_117);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
    UnderlyingCurrentValue_117.setString("11685793");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_117, UnderlyingInstrument_117);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
    UnderlyingDetachmentPoint_117.setString("76.050000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_117, UnderlyingInstrument_117);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
    UnderlyingDirtyPrice_117.setString("62716");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_117, UnderlyingInstrument_117);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
    UnderlyingEndPrice_117.setString("8610879");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_117, UnderlyingInstrument_117);
    FIX::UnderlyingEndValue UnderlyingEndValue_117;
    UnderlyingEndValue_117.setString("21039787");
set_field(noUnderlyings_0_0, UnderlyingEndValue_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{972654791}, UnderlyingInstrument_117);
    FIX::UnderlyingFXRate UnderlyingFXRate_117;
    UnderlyingFXRate_117.setString("1025691");
set_field(noUnderlyings_0_0, UnderlyingFXRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_117);
    FIX::UnderlyingFactor UnderlyingFactor_117;
    UnderlyingFactor_117.setString("3318762");
set_field(noUnderlyings_0_0, UnderlyingFactor_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{38823155}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_269033297"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1627204897"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1206852871"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_519784425"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_224104983"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1629656176"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1506575488"}, UnderlyingInstrument_117);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
    UnderlyingNotionalPercentageOutstanding_117.setString("78.850000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_117);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
    UnderlyingOriginalNotionalPercentageOutstanding_117.setString("19.800000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2046421163"}, UnderlyingInstrument_117);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
    UnderlyingPriceUnitOfMeasureQty_117.setString("539896");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1214028908}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1921099594}, UnderlyingInstrument_117);
    FIX::UnderlyingPx UnderlyingPx_117;
    UnderlyingPx_117.setString("7446018");
set_field(noUnderlyings_0_0, UnderlyingPx_117, UnderlyingInstrument_117);
    FIX::UnderlyingQty UnderlyingQty_117;
    UnderlyingQty_117.setString("16763915");
set_field(noUnderlyings_0_0, UnderlyingQty_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2064038542"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1688822531"}, UnderlyingInstrument_117);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
    UnderlyingRepurchaseRate_117.setString("87.050000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1432929848}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1320398240"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_130454371"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_690323805"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1326669885"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_991542291"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_646818924"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_151841029"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1094111400"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2081523109"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_117);
    FIX::UnderlyingStartValue UnderlyingStartValue_117;
    UnderlyingStartValue_117.setString("11329345");
set_field(noUnderlyings_0_0, UnderlyingStartValue_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_203072758"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_117);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
    UnderlyingStrikePrice_117.setString("7228571");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_187543503"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1821959954"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_81949024"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1928021389"}, UnderlyingInstrument_117);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
    UnderlyingUnitOfMeasureQty_117.setString("14822265");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_117, UnderlyingInstrument_117);
    all_values.push_back(UnderlyingInstrument_117);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1826958904"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1536216185"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1600574850"}, UnderlyingStipulations_NoUnderlyingStips_234);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_133334408"}, UnderlyingStipulations_NoUnderlyingStips_234);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1517129744"}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{482392880}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_995071531"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{612847251}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1492899749"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{174257769}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1604389542"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{2139718673}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_326098798"}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2073758134}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1683951849"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{129347244}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_773254590"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1876255627}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_852204428"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{960798093}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_118;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1550731934"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{934153452}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_741335834"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{885474805}, UnderlyingInstrument_118);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
    UnderlyingAdjustedQuantity_118.setString("17117344");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_118, UnderlyingInstrument_118);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
    UnderlyingAllocationPercent_118.setString("10.900000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_118, UnderlyingInstrument_118);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
    UnderlyingAttachmentPoint_118.setString("73.420000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1555860721"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_2021385940"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_407541750"}, UnderlyingInstrument_118);
    FIX::UnderlyingCapValue UnderlyingCapValue_118;
    UnderlyingCapValue_118.setString("9288948");
set_field(noUnderlyings_0_1, UnderlyingCapValue_118, UnderlyingInstrument_118);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
    UnderlyingCashAmount_118.setString("13910320");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_118);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
    UnderlyingContractMultiplier_118.setString("14112877");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{46124332}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1077286573"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2024135029"}, UnderlyingInstrument_118);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
    UnderlyingCouponRate_118.setString("40.810000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1251544342"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_118);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
    UnderlyingCurrentValue_118.setString("15776431");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_118, UnderlyingInstrument_118);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
    UnderlyingDetachmentPoint_118.setString("82.180000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_118, UnderlyingInstrument_118);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
    UnderlyingDirtyPrice_118.setString("14575335");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_118, UnderlyingInstrument_118);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
    UnderlyingEndPrice_118.setString("2399755");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_118, UnderlyingInstrument_118);
    FIX::UnderlyingEndValue UnderlyingEndValue_118;
    UnderlyingEndValue_118.setString("15685264");
set_field(noUnderlyings_0_1, UnderlyingEndValue_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1586880838}, UnderlyingInstrument_118);
    FIX::UnderlyingFXRate UnderlyingFXRate_118;
    UnderlyingFXRate_118.setString("10132301");
set_field(noUnderlyings_0_1, UnderlyingFXRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_118);
    FIX::UnderlyingFactor UnderlyingFactor_118;
    UnderlyingFactor_118.setString("2916016");
set_field(noUnderlyings_0_1, UnderlyingFactor_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1974028245}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_700546685"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1225755070"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_567880431"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1586021490"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_790005878"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_988691522"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1860228833"}, UnderlyingInstrument_118);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
    UnderlyingNotionalPercentageOutstanding_118.setString("29.520000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_118);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
    UnderlyingOriginalNotionalPercentageOutstanding_118.setString("69.350000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1127277849"}, UnderlyingInstrument_118);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
    UnderlyingPriceUnitOfMeasureQty_118.setString("1061422");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{202501977}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{391081978}, UnderlyingInstrument_118);
    FIX::UnderlyingPx UnderlyingPx_118;
    UnderlyingPx_118.setString("1522665");
set_field(noUnderlyings_0_1, UnderlyingPx_118, UnderlyingInstrument_118);
    FIX::UnderlyingQty UnderlyingQty_118;
    UnderlyingQty_118.setString("12797885");
set_field(noUnderlyings_0_1, UnderlyingQty_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_267733359"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1691290617"}, UnderlyingInstrument_118);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
    UnderlyingRepurchaseRate_118.setString("92.440000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1748774283}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1075066076"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1961492384"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1633348853"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_385116021"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_53984297"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1054391624"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1971996859"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1067214449"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_204206375"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_118);
    FIX::UnderlyingStartValue UnderlyingStartValue_118;
    UnderlyingStartValue_118.setString("8937590");
set_field(noUnderlyings_0_1, UnderlyingStartValue_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_904753060"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_118);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
    UnderlyingStrikePrice_118.setString("3432909");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_2131875778"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_302847351"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_56036088"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_182775082"}, UnderlyingInstrument_118);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
    UnderlyingUnitOfMeasureQty_118.setString("11654411");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_118, UnderlyingInstrument_118);
    all_values.push_back(UnderlyingInstrument_118);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1310052931"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1271583369"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1701134909"}, UnderlyingStipulations_NoUnderlyingStips_235);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1423849904"}, UnderlyingStipulations_NoUnderlyingStips_235);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1968868269"}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2042462794}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2042722949"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1856471530}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1056024109"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{280355323}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1910455828"}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{104868534}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_167138461"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{220983364}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1723945675"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1071891521}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_79;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_79);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1038101504"}, header_79);
  set_header_field(msg.getHeader(), FIX::BodyLength{1415182424}, header_79);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1547245393"}, header_79);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1340948856"}, header_79);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1471218512"}, header_79);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1730020475"}, header_79);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{358906374}, header_79);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_79);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{892589758}, header_79);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1630489743"}, header_79);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2026366536"}, header_79);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_446241020"}, header_79);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 21, 13, 9, 2, 2004)}, header_79);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_79);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_79);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2050107497"}, header_79);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{904435648}, header_79);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_709257091"}, header_79);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_7492384"}, header_79);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1734622277"}, header_79);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(20, 4, 14, 3, 5, 2008)}, header_79);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1191090757"}, header_79);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1542651016"}, header_79);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_539720715"}, header_79);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_773627584"}, header_79);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1901557390}, header_79);
  all_values.push_back(header_79);
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
