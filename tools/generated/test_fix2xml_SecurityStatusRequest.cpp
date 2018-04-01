#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_0;
  set_field(msg, FIX::Currency{"EUR"}, SecurityStatusRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_2007852118"}, SecurityStatusRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_982874023"}, SecurityStatusRequest_0);
  set_field(msg, FIX::SecurityStatusReqID{"STRING_262899374"}, SecurityStatusRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, SecurityStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, SecurityStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, SecurityStatusRequest_0);
  all_values.push_back(SecurityStatusRequest_0);

  all_compo_names.insert("SecurityStatusRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_113;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1078822749"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1581074126}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_482405396"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2093922379}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1162785396"}, InstrumentLeg_113);
    FIX::LegContractMultiplier LegContractMultiplier_113;
    LegContractMultiplier_113.setString("17764813");
set_field(noLegs_0_0, LegContractMultiplier_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{615329579}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_2118595848"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_219138855"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1676593268"}, InstrumentLeg_113);
    FIX::LegCouponRate LegCouponRate_113;
    LegCouponRate_113.setString("82.330000");
set_field(noLegs_0_0, LegCouponRate_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_240525417"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1693227060"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{239254831}, InstrumentLeg_113);
    FIX::LegFactor LegFactor_113;
    LegFactor_113.setString("15115872");
set_field(noLegs_0_0, LegFactor_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{399999480}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_744517729"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1159683598"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1748453322"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1261721396"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_290194853"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1638070415"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1122089866"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1273068876"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_113);
    FIX::LegOptionRatio LegOptionRatio_113;
    LegOptionRatio_113.setString("18819549");
set_field(noLegs_0_0, LegOptionRatio_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1139713326"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1739499712"}, InstrumentLeg_113);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
    LegPriceUnitOfMeasureQty_113.setString("11286880");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegProduct{71052427}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1173090190}, InstrumentLeg_113);
    FIX::LegRatioQty LegRatioQty_113;
    LegRatioQty_113.setString("16110934");
set_field(noLegs_0_0, LegRatioQty_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_17491158"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_188391938"}, InstrumentLeg_113);
    FIX::LegRepurchaseRate LegRepurchaseRate_113;
    LegRepurchaseRate_113.setString("12.390000");
set_field(noLegs_0_0, LegRepurchaseRate_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{632820738}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_159504139"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1459230095"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_161930358"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_234122372"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1699755512"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1677963390"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1245498924"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_113);
    FIX::LegStrikePrice LegStrikePrice_113;
    LegStrikePrice_113.setString("16454984");
set_field(noLegs_0_0, LegStrikePrice_113, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_514252303"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_150880047"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1246468079"}, InstrumentLeg_113);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1775973699"}, InstrumentLeg_113);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
    LegUnitOfMeasureQty_113.setString("4410749");
set_field(noLegs_0_0, LegUnitOfMeasureQty_113, InstrumentLeg_113);
    all_values.push_back(InstrumentLeg_113);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_236;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_750579918"}, LegSecAltIDGrp_NoLegSecurityAltID_236);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1714143777"}, LegSecAltIDGrp_NoLegSecurityAltID_236);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_236);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_237;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_490540988"}, LegSecAltIDGrp_NoLegSecurityAltID_237);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_485051181"}, LegSecAltIDGrp_NoLegSecurityAltID_237);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_237);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_238;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_706373455"}, LegSecAltIDGrp_NoLegSecurityAltID_238);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_82557052"}, LegSecAltIDGrp_NoLegSecurityAltID_238);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_238);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_74;
  FIX::AttachmentPoint AttachmentPoint_74;
  AttachmentPoint_74.setString("92.800000");
set_field(msg, AttachmentPoint_74, Instrument_74);
  set_field(msg, FIX::CFICode{"STRING_777425883"}, Instrument_74);
  set_field(msg, FIX::CPProgram{99}, Instrument_74);
  set_field(msg, FIX::CPRegType{"STRING_1077349128"}, Instrument_74);
  FIX::CapPrice CapPrice_74;
  CapPrice_74.setString("7949170");
set_field(msg, CapPrice_74, Instrument_74);
  FIX::ContractMultiplier ContractMultiplier_74;
  ContractMultiplier_74.setString("14440391");
set_field(msg, ContractMultiplier_74, Instrument_74);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_74);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1427737779"}, Instrument_74);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1603543319"}, Instrument_74);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1629186814"}, Instrument_74);
  FIX::CouponRate CouponRate_74;
  CouponRate_74.setString("81.380000");
set_field(msg, CouponRate_74, Instrument_74);
  set_field(msg, FIX::CreditRating{"STRING_1837665692"}, Instrument_74);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1181458678"}, Instrument_74);
  FIX::DetachmentPoint DetachmentPoint_74;
  DetachmentPoint_74.setString("78.800000");
set_field(msg, DetachmentPoint_74, Instrument_74);
  set_field(msg, FIX::EncodedIssuer{"DATA_1464758523"}, Instrument_74);
  set_field(msg, FIX::EncodedIssuerLen{279473954}, Instrument_74);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_889882454"}, Instrument_74);
  set_field(msg, FIX::EncodedSecurityDescLen{455954972}, Instrument_74);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_74);
  FIX::Factor Factor_74;
  Factor_74.setString("14041347");
set_field(msg, Factor_74, Instrument_74);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_74);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_74);
  FIX::FloorPrice FloorPrice_74;
  FloorPrice_74.setString("10326248");
set_field(msg, FloorPrice_74, Instrument_74);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_74);
  set_field(msg, FIX::InstrRegistry{"STRING_1761011636"}, Instrument_74);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_74);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_614570049"}, Instrument_74);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_104068976"}, Instrument_74);
  set_field(msg, FIX::Issuer{"STRING_120772260"}, Instrument_74);
  set_field(msg, FIX::ListMethod{0}, Instrument_74);
  set_field(msg, FIX::LocaleOfIssue{"STRING_186626028"}, Instrument_74);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1734511541"}, Instrument_74);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2098369387"}, Instrument_74);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1442273270"}, Instrument_74);
  FIX::MinPriceIncrement MinPriceIncrement_74;
  MinPriceIncrement_74.setString("6643770");
set_field(msg, MinPriceIncrement_74, Instrument_74);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
  MinPriceIncrementAmount_74.setString("7458027");
set_field(msg, MinPriceIncrementAmount_74, Instrument_74);
  set_field(msg, FIX::NTPositionLimit{738828803}, Instrument_74);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
  NotionalPercentageOutstanding_74.setString("37.400000");
set_field(msg, NotionalPercentageOutstanding_74, Instrument_74);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_74);
  FIX::OptPayoutAmount OptPayoutAmount_74;
  OptPayoutAmount_74.setString("1948884");
set_field(msg, OptPayoutAmount_74, Instrument_74);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_74);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
  OriginalNotionalPercentageOutstanding_74.setString("50.500000");
set_field(msg, OriginalNotionalPercentageOutstanding_74, Instrument_74);
  set_field(msg, FIX::Pool{"STRING_2032554166"}, Instrument_74);
  set_field(msg, FIX::PositionLimit{1497495585}, Instrument_74);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_74);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1349829042"}, Instrument_74);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
  PriceUnitOfMeasureQty_74.setString("17769695");
set_field(msg, PriceUnitOfMeasureQty_74, Instrument_74);
  set_field(msg, FIX::Product{8}, Instrument_74);
  set_field(msg, FIX::ProductComplex{"STRING_1805784014"}, Instrument_74);
  set_field(msg, FIX::PutOrCall{1}, Instrument_74);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_734922847"}, Instrument_74);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_265135386"}, Instrument_74);
  FIX::RepurchaseRate RepurchaseRate_74;
  RepurchaseRate_74.setString("13.930000");
set_field(msg, RepurchaseRate_74, Instrument_74);
  set_field(msg, FIX::RepurchaseTerm{1767547656}, Instrument_74);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_74);
  set_field(msg, FIX::SecurityDesc{"STRING_44459381"}, Instrument_74);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1403268735"}, Instrument_74);
  set_field(msg, FIX::SecurityGroup{"STRING_1927615355"}, Instrument_74);
  set_field(msg, FIX::SecurityID{"STRING_148528358"}, Instrument_74);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_74);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_74);
  set_field(msg, FIX::SecuritySubType{"STRING_335154386"}, Instrument_74);
  set_field(msg, FIX::SecurityType{"STRING_FADN"}, Instrument_74);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_74);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_74);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1775445909"}, Instrument_74);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1797763732"}, Instrument_74);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_74);
  FIX::StrikeMultiplier StrikeMultiplier_74;
  StrikeMultiplier_74.setString("18238206");
set_field(msg, StrikeMultiplier_74, Instrument_74);
  FIX::StrikePrice StrikePrice_74;
  StrikePrice_74.setString("5636612");
set_field(msg, StrikePrice_74, Instrument_74);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_74);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
  StrikePriceBoundaryPrecision_74.setString("20.470000");
set_field(msg, StrikePriceBoundaryPrecision_74, Instrument_74);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_74);
  FIX::StrikeValue StrikeValue_74;
  StrikeValue_74.setString("1283448");
set_field(msg, StrikeValue_74, Instrument_74);
  set_field(msg, FIX::Symbol{"STRING_1880451330"}, Instrument_74);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_74);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_74);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_74);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_74);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
  UnitOfMeasureQty_74.setString("13122889");
set_field(msg, UnitOfMeasureQty_74, Instrument_74);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_74);
  all_values.push_back(Instrument_74);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_152;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexEventPrice ComplexEventPrice_152;
    ComplexEventPrice_152.setString("15662262");
set_field(noComplexEvents_0_0, ComplexEventPrice_152, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
    ComplexEventPriceBoundaryPrecision_152.setString("97.640000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_152, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
    ComplexOptPayoutAmount_152.setString("19362081");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_152, ComplexEvents_NoComplexEvents_152);
    all_values.push_back(ComplexEvents_NoComplexEvents_152);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_316;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 17, 59, 5, 8, 2013)}, ComplexEventDates_NoComplexEventDates_316);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 27, 8, 2, 11, 2015)}, ComplexEventDates_NoComplexEventDates_316);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_316);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 15, 40)}, ComplexEventTimes_NoComplexEventTimes_645);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 26, 57)}, ComplexEventTimes_NoComplexEventTimes_645);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 26, 47)}, ComplexEventTimes_NoComplexEventTimes_646);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 1, 15)}, ComplexEventTimes_NoComplexEventTimes_646);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_317;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 33, 58, 27, 9, 2017)}, ComplexEventDates_NoComplexEventDates_317);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 0, 0, 23, 4, 2003)}, ComplexEventDates_NoComplexEventDates_317);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_317);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 42, 27)}, ComplexEventTimes_NoComplexEventTimes_647);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 46, 24)}, ComplexEventTimes_NoComplexEventTimes_647);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 50, 41)}, ComplexEventTimes_NoComplexEventTimes_648);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 42, 13)}, ComplexEventTimes_NoComplexEventTimes_648);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 38, 2)}, ComplexEventTimes_NoComplexEventTimes_649);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 35, 47)}, ComplexEventTimes_NoComplexEventTimes_649);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_318;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 47, 38, 11, 2, 2017)}, ComplexEventDates_NoComplexEventDates_318);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 40, 6, 9, 8, 2014)}, ComplexEventDates_NoComplexEventDates_318);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_318);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 44, 6)}, ComplexEventTimes_NoComplexEventTimes_650);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 48, 49)}, ComplexEventTimes_NoComplexEventTimes_650);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 27, 4)}, ComplexEventTimes_NoComplexEventTimes_651);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 40, 37)}, ComplexEventTimes_NoComplexEventTimes_651);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_153;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_153);
    FIX::ComplexEventPrice ComplexEventPrice_153;
    ComplexEventPrice_153.setString("19508225");
set_field(noComplexEvents_0_1, ComplexEventPrice_153, ComplexEvents_NoComplexEvents_153);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_153);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
    ComplexEventPriceBoundaryPrecision_153.setString("97.500000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_153, ComplexEvents_NoComplexEvents_153);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_153);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_153);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
    ComplexOptPayoutAmount_153.setString("3203711");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_153, ComplexEvents_NoComplexEvents_153);
    all_values.push_back(ComplexEvents_NoComplexEvents_153);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_319;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 7, 53, 23, 4, 2011)}, ComplexEventDates_NoComplexEventDates_319);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 31, 14, 15, 5, 2012)}, ComplexEventDates_NoComplexEventDates_319);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_319);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 24, 35)}, ComplexEventTimes_NoComplexEventTimes_652);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 15, 24)}, ComplexEventTimes_NoComplexEventTimes_652);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 33, 0)}, ComplexEventTimes_NoComplexEventTimes_653);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 48, 31)}, ComplexEventTimes_NoComplexEventTimes_653);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_320;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 31, 12, 7, 3, 2017)}, ComplexEventDates_NoComplexEventDates_320);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 22, 13, 24, 7, 2001)}, ComplexEventDates_NoComplexEventDates_320);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_320);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 28, 40)}, ComplexEventTimes_NoComplexEventTimes_654);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 47, 53)}, ComplexEventTimes_NoComplexEventTimes_654);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 26, 28)}, ComplexEventTimes_NoComplexEventTimes_655);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 9, 3)}, ComplexEventTimes_NoComplexEventTimes_655);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_149;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1216913297"}, EvntGrp_NoEvents_149);
    FIX::EventPx EventPx_149;
    EventPx_149.setString("9843875");
set_field(noEvents_0_0, EventPx_149, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventText{"STRING_989830955"}, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(13, 26, 16, 2, 1, 2010)}, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventType{15}, EvntGrp_NoEvents_149);
    all_values.push_back(EvntGrp_NoEvents_149);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_150;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_91634962"}, EvntGrp_NoEvents_150);
    FIX::EventPx EventPx_150;
    EventPx_150.setString("1464012");
set_field(noEvents_0_1, EventPx_150, EvntGrp_NoEvents_150);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1314098138"}, EvntGrp_NoEvents_150);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 59, 7, 27, 2, 2000)}, EvntGrp_NoEvents_150);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_150);
    all_values.push_back(EvntGrp_NoEvents_150);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_140;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1897976036"}, InstrumentParties_NoInstrumentParties_140);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_140);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{515500341}, InstrumentParties_NoInstrumentParties_140);
    all_values.push_back(InstrumentParties_NoInstrumentParties_140);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1140151158"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{856871070}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_168373104"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{73450841}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_141;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2073784368"}, InstrumentParties_NoInstrumentParties_141);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_141);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1063281796}, InstrumentParties_NoInstrumentParties_141);
    all_values.push_back(InstrumentParties_NoInstrumentParties_141);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_180107559"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2029434882}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_217350237"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{912204913}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_142;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1679539222"}, InstrumentParties_NoInstrumentParties_142);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_142);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1509713387}, InstrumentParties_NoInstrumentParties_142);
    all_values.push_back(InstrumentParties_NoInstrumentParties_142);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_745573181"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{676327878}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_145;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_407905131"}, SecAltIDGrp_NoSecurityAltID_145);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1044258617"}, SecAltIDGrp_NoSecurityAltID_145);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_148;
  set_field(msg, FIX::SecurityXML{"XMLDATA_633266112"}, SecurityXML_148);
  set_field(msg, FIX::SecurityXMLLen{882231458}, SecurityXML_148);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_101210614"}, SecurityXML_148);
  all_values.push_back(SecurityXML_148);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_15;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_15);
  FIX::PctAtRisk PctAtRisk_15;
  PctAtRisk_15.setString("5.380000");
set_field(msg, PctAtRisk_15, InstrumentExtension_15);
  all_values.push_back(InstrumentExtension_15);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_27;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{18}, AttrbGrp_NoInstrAttrib_27);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1541162476"}, AttrbGrp_NoInstrAttrib_27);
    all_values.push_back(AttrbGrp_NoInstrAttrib_27);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_133;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1805442855"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{533829987}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1495899739"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1973815959}, UnderlyingInstrument_133);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
    UnderlyingAdjustedQuantity_133.setString("6072808");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_133, UnderlyingInstrument_133);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
    UnderlyingAllocationPercent_133.setString("4.590000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_133, UnderlyingInstrument_133);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
    UnderlyingAttachmentPoint_133.setString("29.300000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1670562625"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1895105388"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1159200489"}, UnderlyingInstrument_133);
    FIX::UnderlyingCapValue UnderlyingCapValue_133;
    UnderlyingCapValue_133.setString("15525138");
set_field(noUnderlyings_0_0, UnderlyingCapValue_133, UnderlyingInstrument_133);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
    UnderlyingCashAmount_133.setString("21124556");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_133);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
    UnderlyingContractMultiplier_133.setString("10845694");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{564143877}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1433635142"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_708259971"}, UnderlyingInstrument_133);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
    UnderlyingCouponRate_133.setString("70.580000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2109963020"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_133);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
    UnderlyingCurrentValue_133.setString("10067379");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_133, UnderlyingInstrument_133);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
    UnderlyingDetachmentPoint_133.setString("54.470000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_133, UnderlyingInstrument_133);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
    UnderlyingDirtyPrice_133.setString("4523700");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_133, UnderlyingInstrument_133);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
    UnderlyingEndPrice_133.setString("11079486");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_133, UnderlyingInstrument_133);
    FIX::UnderlyingEndValue UnderlyingEndValue_133;
    UnderlyingEndValue_133.setString("12056674");
set_field(noUnderlyings_0_0, UnderlyingEndValue_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{193976890}, UnderlyingInstrument_133);
    FIX::UnderlyingFXRate UnderlyingFXRate_133;
    UnderlyingFXRate_133.setString("12314769");
set_field(noUnderlyings_0_0, UnderlyingFXRate_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_133);
    FIX::UnderlyingFactor UnderlyingFactor_133;
    UnderlyingFactor_133.setString("17351393");
set_field(noUnderlyings_0_0, UnderlyingFactor_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1870505599}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_995211000"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_121485706"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1218921690"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_821543312"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_728766534"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_493638501"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1800636242"}, UnderlyingInstrument_133);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
    UnderlyingNotionalPercentageOutstanding_133.setString("55.110000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_133);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
    UnderlyingOriginalNotionalPercentageOutstanding_133.setString("30.830000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1804359371"}, UnderlyingInstrument_133);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
    UnderlyingPriceUnitOfMeasureQty_133.setString("2062322");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{736274838}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{741445157}, UnderlyingInstrument_133);
    FIX::UnderlyingPx UnderlyingPx_133;
    UnderlyingPx_133.setString("7703760");
set_field(noUnderlyings_0_0, UnderlyingPx_133, UnderlyingInstrument_133);
    FIX::UnderlyingQty UnderlyingQty_133;
    UnderlyingQty_133.setString("224263");
set_field(noUnderlyings_0_0, UnderlyingQty_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1449705128"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2080093153"}, UnderlyingInstrument_133);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
    UnderlyingRepurchaseRate_133.setString("93.530000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1641014463}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1650231695"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_991643695"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_318106263"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2102601695"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2099592298"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1523773689"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_149094937"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1183585581"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_713541834"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_133);
    FIX::UnderlyingStartValue UnderlyingStartValue_133;
    UnderlyingStartValue_133.setString("9066075");
set_field(noUnderlyings_0_0, UnderlyingStartValue_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1708752834"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_133);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
    UnderlyingStrikePrice_133.setString("3828124");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_133, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_587002897"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_471684075"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_35965092"}, UnderlyingInstrument_133);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_838848408"}, UnderlyingInstrument_133);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
    UnderlyingUnitOfMeasureQty_133.setString("7129443");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_133, UnderlyingInstrument_133);
    all_values.push_back(UnderlyingInstrument_133);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_495724131"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_919176534"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1584593014"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1237169288"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_274;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1607019347"}, UnderlyingStipulations_NoUnderlyingStips_274);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_539390768"}, UnderlyingStipulations_NoUnderlyingStips_274);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_274);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_273;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1591925053"}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1124910182}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_273);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_351027847"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1080028229}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_274;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_388193750"}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1229123167}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_274);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_440859722"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{965873823}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_330903215"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2128908}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_824110186"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{308948789}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_275;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_384941407"}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{780632864}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_275);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_102477843"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1493577180}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1269224675"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{598201975}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
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
