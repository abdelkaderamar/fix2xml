#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ExecutionAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_0;
  FIX::AvgPx AvgPx_4;
  AvgPx_4.setString("3875642");
set_field(msg, AvgPx_4, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ClOrdID{"STRING_1047829310"}, ExecutionAcknowledgement_0);
  FIX::CumQty CumQty_0;
  CumQty_0.setString("4979410");
set_field(msg, CumQty_0, ExecutionAcknowledgement_0);
  set_field(msg, FIX::DKReason{'D'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::EncodedText{"DATA_424768871"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::EncodedTextLen{1890735421}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ExecAckStatus{'2'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ExecID{"STRING_2061972149"}, ExecutionAcknowledgement_0);
  FIX::LastParPx LastParPx_7;
  LastParPx_7.setString("9925183");
set_field(msg, LastParPx_7, ExecutionAcknowledgement_0);
  FIX::LastPx LastPx_8;
  LastPx_8.setString("5226510");
set_field(msg, LastPx_8, ExecutionAcknowledgement_0);
  FIX::LastQty LastQty_8;
  LastQty_8.setString("196577");
set_field(msg, LastQty_8, ExecutionAcknowledgement_0);
  set_field(msg, FIX::OrderID{"STRING_1346640368"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::PriceType{18}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1855371658"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::Side{'5'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::Text{"STRING_603646339"}, ExecutionAcknowledgement_0);
  all_values.push_back(ExecutionAcknowledgement_0);

  all_compo_names.insert("ExecutionAcknowledgement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_39;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_330930285"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{2006799843}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2008014301"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{34162816}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1030770916"}, InstrumentLeg_39);
    FIX::LegContractMultiplier LegContractMultiplier_39;
    LegContractMultiplier_39.setString("15708429");
set_field(noLegs_0_0, LegContractMultiplier_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1709780747}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1455825237"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1847220722"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1329429538"}, InstrumentLeg_39);
    FIX::LegCouponRate LegCouponRate_39;
    LegCouponRate_39.setString("82.040000");
set_field(noLegs_0_0, LegCouponRate_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_299970514"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_687534720"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2050497505}, InstrumentLeg_39);
    FIX::LegFactor LegFactor_39;
    LegFactor_39.setString("3771458");
set_field(noLegs_0_0, LegFactor_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{605609486}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_327782728"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_120397582"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_534518522"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_242271229"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1112915972"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1057169575"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_261928964"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_312072692"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_39);
    FIX::LegOptionRatio LegOptionRatio_39;
    LegOptionRatio_39.setString("21173006");
set_field(noLegs_0_0, LegOptionRatio_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1273445945"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_608332726"}, InstrumentLeg_39);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
    LegPriceUnitOfMeasureQty_39.setString("3960284");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegProduct{1604376230}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPutOrCall{467648922}, InstrumentLeg_39);
    FIX::LegRatioQty LegRatioQty_39;
    LegRatioQty_39.setString("2565590");
set_field(noLegs_0_0, LegRatioQty_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1638539047"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1498419838"}, InstrumentLeg_39);
    FIX::LegRepurchaseRate LegRepurchaseRate_39;
    LegRepurchaseRate_39.setString("20.110000");
set_field(noLegs_0_0, LegRepurchaseRate_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1200836146}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_806761427"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1527139085"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_382782037"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2003179631"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1827109599"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1385450231"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_367160672"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_39);
    FIX::LegStrikePrice LegStrikePrice_39;
    LegStrikePrice_39.setString("9727701");
set_field(noLegs_0_0, LegStrikePrice_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1616246816"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_232444181"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1507288681"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1858518046"}, InstrumentLeg_39);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
    LegUnitOfMeasureQty_39.setString("13453601");
set_field(noLegs_0_0, LegUnitOfMeasureQty_39, InstrumentLeg_39);
    all_values.push_back(InstrumentLeg_39);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2120447010"}, LegSecAltIDGrp_NoLegSecurityAltID_81);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1657432846"}, LegSecAltIDGrp_NoLegSecurityAltID_81);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_25;
  FIX::AttachmentPoint AttachmentPoint_25;
  AttachmentPoint_25.setString("9.950000");
set_field(msg, AttachmentPoint_25, Instrument_25);
  set_field(msg, FIX::CFICode{"STRING_2090263984"}, Instrument_25);
  set_field(msg, FIX::CPProgram{2}, Instrument_25);
  set_field(msg, FIX::CPRegType{"STRING_1029993721"}, Instrument_25);
  FIX::CapPrice CapPrice_25;
  CapPrice_25.setString("3388087");
set_field(msg, CapPrice_25, Instrument_25);
  FIX::ContractMultiplier ContractMultiplier_25;
  ContractMultiplier_25.setString("2402877");
set_field(msg, ContractMultiplier_25, Instrument_25);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_25);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_595367812"}, Instrument_25);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1878826773"}, Instrument_25);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_848578834"}, Instrument_25);
  FIX::CouponRate CouponRate_25;
  CouponRate_25.setString("61.760000");
set_field(msg, CouponRate_25, Instrument_25);
  set_field(msg, FIX::CreditRating{"STRING_932179271"}, Instrument_25);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1655340261"}, Instrument_25);
  FIX::DetachmentPoint DetachmentPoint_25;
  DetachmentPoint_25.setString("52.610000");
set_field(msg, DetachmentPoint_25, Instrument_25);
  set_field(msg, FIX::EncodedIssuer{"DATA_1314961308"}, Instrument_25);
  set_field(msg, FIX::EncodedIssuerLen{1511036245}, Instrument_25);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1482051213"}, Instrument_25);
  set_field(msg, FIX::EncodedSecurityDescLen{552927892}, Instrument_25);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_25);
  FIX::Factor Factor_25;
  Factor_25.setString("18492118");
set_field(msg, Factor_25, Instrument_25);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_25);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_25);
  FIX::FloorPrice FloorPrice_25;
  FloorPrice_25.setString("6744983");
set_field(msg, FloorPrice_25, Instrument_25);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_25);
  set_field(msg, FIX::InstrRegistry{"STRING_1590427817"}, Instrument_25);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_25);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1021189547"}, Instrument_25);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_788304323"}, Instrument_25);
  set_field(msg, FIX::Issuer{"STRING_451278036"}, Instrument_25);
  set_field(msg, FIX::ListMethod{1}, Instrument_25);
  set_field(msg, FIX::LocaleOfIssue{"STRING_298253521"}, Instrument_25);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_872939031"}, Instrument_25);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_936933245"}, Instrument_25);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1081648665"}, Instrument_25);
  FIX::MinPriceIncrement MinPriceIncrement_25;
  MinPriceIncrement_25.setString("19029327");
set_field(msg, MinPriceIncrement_25, Instrument_25);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
  MinPriceIncrementAmount_25.setString("12757419");
set_field(msg, MinPriceIncrementAmount_25, Instrument_25);
  set_field(msg, FIX::NTPositionLimit{1321936391}, Instrument_25);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
  NotionalPercentageOutstanding_25.setString("17.480000");
set_field(msg, NotionalPercentageOutstanding_25, Instrument_25);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_25);
  FIX::OptPayoutAmount OptPayoutAmount_25;
  OptPayoutAmount_25.setString("10532795");
set_field(msg, OptPayoutAmount_25, Instrument_25);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_25);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
  OriginalNotionalPercentageOutstanding_25.setString("59.820000");
set_field(msg, OriginalNotionalPercentageOutstanding_25, Instrument_25);
  set_field(msg, FIX::Pool{"STRING_1985458787"}, Instrument_25);
  set_field(msg, FIX::PositionLimit{1609527196}, Instrument_25);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_25);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1152936448"}, Instrument_25);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
  PriceUnitOfMeasureQty_25.setString("9730797");
set_field(msg, PriceUnitOfMeasureQty_25, Instrument_25);
  set_field(msg, FIX::Product{1}, Instrument_25);
  set_field(msg, FIX::ProductComplex{"STRING_1705864340"}, Instrument_25);
  set_field(msg, FIX::PutOrCall{1}, Instrument_25);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_837633397"}, Instrument_25);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1399772672"}, Instrument_25);
  FIX::RepurchaseRate RepurchaseRate_25;
  RepurchaseRate_25.setString("68.160000");
set_field(msg, RepurchaseRate_25, Instrument_25);
  set_field(msg, FIX::RepurchaseTerm{1512131793}, Instrument_25);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_25);
  set_field(msg, FIX::SecurityDesc{"STRING_872460985"}, Instrument_25);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1546435221"}, Instrument_25);
  set_field(msg, FIX::SecurityGroup{"STRING_1583633720"}, Instrument_25);
  set_field(msg, FIX::SecurityID{"STRING_1660765308"}, Instrument_25);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_25);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_25);
  set_field(msg, FIX::SecuritySubType{"STRING_1959018830"}, Instrument_25);
  set_field(msg, FIX::SecurityType{"STRING_GO"}, Instrument_25);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_25);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_25);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_478617746"}, Instrument_25);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_495494572"}, Instrument_25);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_25);
  FIX::StrikeMultiplier StrikeMultiplier_25;
  StrikeMultiplier_25.setString("2191207");
set_field(msg, StrikeMultiplier_25, Instrument_25);
  FIX::StrikePrice StrikePrice_25;
  StrikePrice_25.setString("11209161");
set_field(msg, StrikePrice_25, Instrument_25);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_25);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
  StrikePriceBoundaryPrecision_25.setString("30.640000");
set_field(msg, StrikePriceBoundaryPrecision_25, Instrument_25);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_25);
  FIX::StrikeValue StrikeValue_25;
  StrikeValue_25.setString("11479399");
set_field(msg, StrikeValue_25, Instrument_25);
  set_field(msg, FIX::Symbol{"STRING_2019370660"}, Instrument_25);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_25);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_25);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_25);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_25);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
  UnitOfMeasureQty_25.setString("450693");
set_field(msg, UnitOfMeasureQty_25, Instrument_25);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_25);
  all_values.push_back(Instrument_25);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_45;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexEventPrice ComplexEventPrice_45;
    ComplexEventPrice_45.setString("12100737");
set_field(noComplexEvents_0_0, ComplexEventPrice_45, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
    ComplexEventPriceBoundaryPrecision_45.setString("34.570000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_45, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_45);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_45);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
    ComplexOptPayoutAmount_45.setString("18603287");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_45, ComplexEvents_NoComplexEvents_45);
    all_values.push_back(ComplexEvents_NoComplexEvents_45);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_90;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 0, 16, 7, 3, 2003)}, ComplexEventDates_NoComplexEventDates_90);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 19, 3, 11, 9, 2004)}, ComplexEventDates_NoComplexEventDates_90);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_90);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 15, 20)}, ComplexEventTimes_NoComplexEventTimes_194);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 10, 53)}, ComplexEventTimes_NoComplexEventTimes_194);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 9, 8)}, ComplexEventTimes_NoComplexEventTimes_195);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 26, 56)}, ComplexEventTimes_NoComplexEventTimes_195);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_46;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexEventPrice ComplexEventPrice_46;
    ComplexEventPrice_46.setString("7141166");
set_field(noComplexEvents_0_1, ComplexEventPrice_46, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
    ComplexEventPriceBoundaryPrecision_46.setString("84.310000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_46, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_46);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_46);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
    ComplexOptPayoutAmount_46.setString("19273402");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_46, ComplexEvents_NoComplexEvents_46);
    all_values.push_back(ComplexEvents_NoComplexEvents_46);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_91;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 45, 15, 7, 2, 2012)}, ComplexEventDates_NoComplexEventDates_91);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 7, 24, 11, 2, 2014)}, ComplexEventDates_NoComplexEventDates_91);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_91);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 9, 48)}, ComplexEventTimes_NoComplexEventTimes_196);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 14, 10)}, ComplexEventTimes_NoComplexEventTimes_196);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_92;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 7, 12, 5, 3, 2016)}, ComplexEventDates_NoComplexEventDates_92);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 15, 52, 14, 4, 2003)}, ComplexEventDates_NoComplexEventDates_92);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_92);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 57, 14)}, ComplexEventTimes_NoComplexEventTimes_197);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 33, 20)}, ComplexEventTimes_NoComplexEventTimes_197);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 30, 42)}, ComplexEventTimes_NoComplexEventTimes_198);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 48, 25)}, ComplexEventTimes_NoComplexEventTimes_198);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 24, 49)}, ComplexEventTimes_NoComplexEventTimes_199);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 45, 44)}, ComplexEventTimes_NoComplexEventTimes_199);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_93;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 28, 55, 16, 7, 2007)}, ComplexEventDates_NoComplexEventDates_93);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 34, 53, 3, 5, 2008)}, ComplexEventDates_NoComplexEventDates_93);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_93);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 37, 9)}, ComplexEventTimes_NoComplexEventTimes_200);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 58, 59)}, ComplexEventTimes_NoComplexEventTimes_200);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_47;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_47);
    FIX::ComplexEventPrice ComplexEventPrice_47;
    ComplexEventPrice_47.setString("10592722");
set_field(noComplexEvents_0_2, ComplexEventPrice_47, ComplexEvents_NoComplexEvents_47);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_47);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
    ComplexEventPriceBoundaryPrecision_47.setString("86.650000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_47, ComplexEvents_NoComplexEvents_47);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_47);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_47);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
    ComplexOptPayoutAmount_47.setString("17503517");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_47, ComplexEvents_NoComplexEvents_47);
    all_values.push_back(ComplexEvents_NoComplexEvents_47);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_94;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 45, 46, 27, 4, 2017)}, ComplexEventDates_NoComplexEventDates_94);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 49, 3, 13, 7, 2009)}, ComplexEventDates_NoComplexEventDates_94);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_94);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 30, 58)}, ComplexEventTimes_NoComplexEventTimes_201);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 56, 5)}, ComplexEventTimes_NoComplexEventTimes_201);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 21, 28)}, ComplexEventTimes_NoComplexEventTimes_202);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 11, 3)}, ComplexEventTimes_NoComplexEventTimes_202);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_55;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2044749414"}, EvntGrp_NoEvents_55);
    FIX::EventPx EventPx_55;
    EventPx_55.setString("19932140");
set_field(noEvents_0_0, EventPx_55, EvntGrp_NoEvents_55);
    set_field(noEvents_0_0, FIX::EventText{"STRING_540527138"}, EvntGrp_NoEvents_55);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 1, 28, 13, 4, 2001)}, EvntGrp_NoEvents_55);
    set_field(noEvents_0_0, FIX::EventType{3}, EvntGrp_NoEvents_55);
    all_values.push_back(EvntGrp_NoEvents_55);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_56;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1441310593"}, EvntGrp_NoEvents_56);
    FIX::EventPx EventPx_56;
    EventPx_56.setString("15625047");
set_field(noEvents_0_1, EventPx_56, EvntGrp_NoEvents_56);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1079668395"}, EvntGrp_NoEvents_56);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(8, 37, 0, 6, 10, 2007)}, EvntGrp_NoEvents_56);
    set_field(noEvents_0_1, FIX::EventType{4}, EvntGrp_NoEvents_56);
    all_values.push_back(EvntGrp_NoEvents_56);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_57;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_172225508"}, EvntGrp_NoEvents_57);
    FIX::EventPx EventPx_57;
    EventPx_57.setString("14861861");
set_field(noEvents_0_2, EventPx_57, EvntGrp_NoEvents_57);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1965759725"}, EvntGrp_NoEvents_57);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(3, 5, 48, 6, 9, 2004)}, EvntGrp_NoEvents_57);
    set_field(noEvents_0_2, FIX::EventType{4}, EvntGrp_NoEvents_57);
    all_values.push_back(EvntGrp_NoEvents_57);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_47;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_387538124"}, InstrumentParties_NoInstrumentParties_47);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_47);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1024414408}, InstrumentParties_NoInstrumentParties_47);
    all_values.push_back(InstrumentParties_NoInstrumentParties_47);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1682391816"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{867019391}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_48;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_434227835"}, InstrumentParties_NoInstrumentParties_48);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_48);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{160846336}, InstrumentParties_NoInstrumentParties_48);
    all_values.push_back(InstrumentParties_NoInstrumentParties_48);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1207912505"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{729147258}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_53;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1844812842"}, SecAltIDGrp_NoSecurityAltID_53);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1403377578"}, SecAltIDGrp_NoSecurityAltID_53);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_50;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1649481929"}, SecurityXML_50);
  set_field(msg, FIX::SecurityXMLLen{338431519}, SecurityXML_50);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1953949687"}, SecurityXML_50);
  all_values.push_back(SecurityXML_50);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("1214434");
set_field(msg, CashOrderQty_7, OrderQtyData_7);
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("70.280000");
set_field(msg, OrderPercent_7, OrderQtyData_7);
  FIX::OrderQty OrderQty_16;
  OrderQty_16.setString("12926522");
set_field(msg, OrderQty_16, OrderQtyData_7);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_7);
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("16804243");
set_field(msg, RoundingModulus_7, OrderQtyData_7);
  all_values.push_back(OrderQtyData_7);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_34;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1428129247"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1303118025}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_342352101"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{407018635}, UnderlyingInstrument_34);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
    UnderlyingAdjustedQuantity_34.setString("8230774");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_34, UnderlyingInstrument_34);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
    UnderlyingAllocationPercent_34.setString("7.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_34, UnderlyingInstrument_34);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
    UnderlyingAttachmentPoint_34.setString("88.100000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1210615556"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1599979814"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_950849570"}, UnderlyingInstrument_34);
    FIX::UnderlyingCapValue UnderlyingCapValue_34;
    UnderlyingCapValue_34.setString("2966508");
set_field(noUnderlyings_0_0, UnderlyingCapValue_34, UnderlyingInstrument_34);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
    UnderlyingCashAmount_34.setString("11348879");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_34);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
    UnderlyingContractMultiplier_34.setString("7308786");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1263132093}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1978715297"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_580127635"}, UnderlyingInstrument_34);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
    UnderlyingCouponRate_34.setString("9.500000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_560378907"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_34);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
    UnderlyingCurrentValue_34.setString("19637564");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_34, UnderlyingInstrument_34);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
    UnderlyingDetachmentPoint_34.setString("41.680000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_34, UnderlyingInstrument_34);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
    UnderlyingDirtyPrice_34.setString("3593216");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_34, UnderlyingInstrument_34);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
    UnderlyingEndPrice_34.setString("17702225");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_34, UnderlyingInstrument_34);
    FIX::UnderlyingEndValue UnderlyingEndValue_34;
    UnderlyingEndValue_34.setString("16940876");
set_field(noUnderlyings_0_0, UnderlyingEndValue_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{869978692}, UnderlyingInstrument_34);
    FIX::UnderlyingFXRate UnderlyingFXRate_34;
    UnderlyingFXRate_34.setString("9153911");
set_field(noUnderlyings_0_0, UnderlyingFXRate_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_34);
    FIX::UnderlyingFactor UnderlyingFactor_34;
    UnderlyingFactor_34.setString("4029194");
set_field(noUnderlyings_0_0, UnderlyingFactor_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2017108591}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_914452814"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1706037454"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_211977044"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1321471450"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_381631238"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1788177788"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1247906612"}, UnderlyingInstrument_34);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
    UnderlyingNotionalPercentageOutstanding_34.setString("67.940000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_34);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
    UnderlyingOriginalNotionalPercentageOutstanding_34.setString("25.340000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1888897654"}, UnderlyingInstrument_34);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
    UnderlyingPriceUnitOfMeasureQty_34.setString("2280782");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1869141495}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{472292702}, UnderlyingInstrument_34);
    FIX::UnderlyingPx UnderlyingPx_34;
    UnderlyingPx_34.setString("14912103");
set_field(noUnderlyings_0_0, UnderlyingPx_34, UnderlyingInstrument_34);
    FIX::UnderlyingQty UnderlyingQty_34;
    UnderlyingQty_34.setString("17003731");
set_field(noUnderlyings_0_0, UnderlyingQty_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1052420338"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1814771332"}, UnderlyingInstrument_34);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
    UnderlyingRepurchaseRate_34.setString("84.030000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{975582577}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1835661477"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2077024888"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_400743097"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_47499494"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1699763765"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2094830751"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_917478186"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_467671222"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1581154318"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_34);
    FIX::UnderlyingStartValue UnderlyingStartValue_34;
    UnderlyingStartValue_34.setString("3372961");
set_field(noUnderlyings_0_0, UnderlyingStartValue_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_348123485"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_34);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
    UnderlyingStrikePrice_34.setString("16695949");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_34, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1260582660"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_189967349"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_770017899"}, UnderlyingInstrument_34);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_705345806"}, UnderlyingInstrument_34);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
    UnderlyingUnitOfMeasureQty_34.setString("14306413");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_34, UnderlyingInstrument_34);
    all_values.push_back(UnderlyingInstrument_34);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_446759813"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1658719592"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_542948280"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_919052515"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1002446326"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_95837776"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_669734011"}, UnderlyingStipulations_NoUnderlyingStips_61);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_209106179"}, UnderlyingStipulations_NoUnderlyingStips_61);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_799571782"}, UnderlyingStipulations_NoUnderlyingStips_62);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_357911840"}, UnderlyingStipulations_NoUnderlyingStips_62);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_138647419"}, UnderlyingStipulations_NoUnderlyingStips_63);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1200314880"}, UnderlyingStipulations_NoUnderlyingStips_63);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1838411185"}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1322889521}, UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_581332653"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{495803489}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_495894924"}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1374754911}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_451567425"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{487853924}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1235135482"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1221585324}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1193199730"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{518293137}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_31;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_31);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1639959543"}, header_31);
  set_header_field(msg.getHeader(), FIX::BodyLength{29529082}, header_31);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_438340389"}, header_31);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_411528411"}, header_31);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1031975408"}, header_31);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_534178165"}, header_31);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{235517616}, header_31);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_31);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{743284344}, header_31);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1035089399"}, header_31);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2059621260"}, header_31);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_881931764"}, header_31);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(2, 1, 34, 3, 5, 2001)}, header_31);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_31);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_31);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_598887758"}, header_31);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1363513220}, header_31);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_125037469"}, header_31);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1050455183"}, header_31);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1851367144"}, header_31);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(4, 6, 8, 5, 3, 2012)}, header_31);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_458289359"}, header_31);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_801087533"}, header_31);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_792486931"}, header_31);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_992467524"}, header_31);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1036605149}, header_31);
  all_values.push_back(header_31);
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
