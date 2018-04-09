#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::PositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_0;
  set_field(msg, FIX::Account{"STRING_409674992"}, PositionReport_0);
  set_field(msg, FIX::AccountType{7}, PositionReport_0);
  set_field(msg, FIX::AcctIDSource{99}, PositionReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1835812528"}, PositionReport_0);
  set_field(msg, FIX::Currency{"CHF"}, PositionReport_0);
  set_field(msg, FIX::DeliveryDate{"LOCALMKTDATE_1691150525"}, PositionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1149441139"}, PositionReport_0);
  set_field(msg, FIX::EncodedTextLen{1068463279}, PositionReport_0);
  set_field(msg, FIX::MatchStatus{'1'}, PositionReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_674048195"}, PositionReport_0);
  set_field(msg, FIX::ModelType{1}, PositionReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_1577285364"}, PositionReport_0);
  set_field(msg, FIX::PosReqID{"STRING_1939573393"}, PositionReport_0);
  set_field(msg, FIX::PosReqResult{0}, PositionReport_0);
  set_field(msg, FIX::PosReqType{6}, PositionReport_0);
  FIX::PriceDelta PriceDelta_7;
  PriceDelta_7.setString("10280203");
set_field(msg, PriceDelta_7, PositionReport_0);
  set_field(msg, FIX::PriceType{17}, PositionReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("17877207");
set_field(msg, PriorSettlPrice_2, PositionReport_0);
  set_field(msg, FIX::RegistStatus{'A'}, PositionReport_0);
  set_field(msg, FIX::SettlCurrency{"CAN"}, PositionReport_0);
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("18363689");
set_field(msg, SettlPrice_2, PositionReport_0);
  set_field(msg, FIX::SettlPriceType{1}, PositionReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, PositionReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2018060838"}, PositionReport_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, PositionReport_0);
  set_field(msg, FIX::Text{"STRING_747877531"}, PositionReport_0);
  set_field(msg, FIX::TotalNumPosReports{265643743}, PositionReport_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, PositionReport_0);
  all_values.push_back(PositionReport_0);

  all_compo_names.insert("PositionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  set_field(msg, FIX::ApplID{"STRING_2006437008"}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplLastSeqNum{675318735}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplSeqNum{1526259052}, ApplicationSequenceControl_11);
  all_values.push_back(ApplicationSequenceControl_11);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_90;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_360603760"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1676447335}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2054798141"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1510044899}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_597426966"}, InstrumentLeg_90);
    FIX::LegContractMultiplier LegContractMultiplier_90;
    LegContractMultiplier_90.setString("3156262");
set_field(noLegs_0_0, LegContractMultiplier_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{36609447}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_961791433"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1892911580"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1976182840"}, InstrumentLeg_90);
    FIX::LegCouponRate LegCouponRate_90;
    LegCouponRate_90.setString("77.450000");
set_field(noLegs_0_0, LegCouponRate_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1048254372"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_688491516"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1852417105}, InstrumentLeg_90);
    FIX::LegFactor LegFactor_90;
    LegFactor_90.setString("14179751");
set_field(noLegs_0_0, LegFactor_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{242956857}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1541302408"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_648910164"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_633522236"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1411879598"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_198671119"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1381399767"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1677523341"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1575351791"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_90);
    FIX::LegOptionRatio LegOptionRatio_90;
    LegOptionRatio_90.setString("2053584");
set_field(noLegs_0_0, LegOptionRatio_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_891934609"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_619128532"}, InstrumentLeg_90);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
    LegPriceUnitOfMeasureQty_90.setString("5690060");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegProduct{1252538369}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPutOrCall{148092219}, InstrumentLeg_90);
    FIX::LegRatioQty LegRatioQty_90;
    LegRatioQty_90.setString("4763205");
set_field(noLegs_0_0, LegRatioQty_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_615099620"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_745519185"}, InstrumentLeg_90);
    FIX::LegRepurchaseRate LegRepurchaseRate_90;
    LegRepurchaseRate_90.setString("67.530000");
set_field(noLegs_0_0, LegRepurchaseRate_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{651709067}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1707310618"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_537374685"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_480408260"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_142044715"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1585629058"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1337127764"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_126636926"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_90);
    FIX::LegStrikePrice LegStrikePrice_90;
    LegStrikePrice_90.setString("3695937");
set_field(noLegs_0_0, LegStrikePrice_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_435879982"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1325963694"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1003116020"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1847759580"}, InstrumentLeg_90);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
    LegUnitOfMeasureQty_90.setString("15246348");
set_field(noLegs_0_0, LegUnitOfMeasureQty_90, InstrumentLeg_90);
    all_values.push_back(InstrumentLeg_90);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1377799274"}, LegSecAltIDGrp_NoLegSecurityAltID_183);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_952502957"}, LegSecAltIDGrp_NoLegSecurityAltID_183);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("52.670000");
set_field(msg, AttachmentPoint_65, Instrument_65);
  set_field(msg, FIX::CFICode{"STRING_1583157703"}, Instrument_65);
  set_field(msg, FIX::CPProgram{1}, Instrument_65);
  set_field(msg, FIX::CPRegType{"STRING_2096513799"}, Instrument_65);
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("46801");
set_field(msg, CapPrice_65, Instrument_65);
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("9494922");
set_field(msg, ContractMultiplier_65, Instrument_65);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_65);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_481000638"}, Instrument_65);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1564591907"}, Instrument_65);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_842641555"}, Instrument_65);
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("73.910000");
set_field(msg, CouponRate_65, Instrument_65);
  set_field(msg, FIX::CreditRating{"STRING_68817327"}, Instrument_65);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_402468525"}, Instrument_65);
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("20.770000");
set_field(msg, DetachmentPoint_65, Instrument_65);
  set_field(msg, FIX::EncodedIssuer{"DATA_549225587"}, Instrument_65);
  set_field(msg, FIX::EncodedIssuerLen{544513240}, Instrument_65);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1248467487"}, Instrument_65);
  set_field(msg, FIX::EncodedSecurityDescLen{1886353351}, Instrument_65);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_65);
  FIX::Factor Factor_65;
  Factor_65.setString("13751044");
set_field(msg, Factor_65, Instrument_65);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_65);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_65);
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("17446981");
set_field(msg, FloorPrice_65, Instrument_65);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_65);
  set_field(msg, FIX::InstrRegistry{"STRING_1806608796"}, Instrument_65);
  set_field(msg, FIX::InstrmtAssignmentMethod{'6'}, Instrument_65);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_917086839"}, Instrument_65);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1183759962"}, Instrument_65);
  set_field(msg, FIX::Issuer{"STRING_837362709"}, Instrument_65);
  set_field(msg, FIX::ListMethod{1}, Instrument_65);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2136262919"}, Instrument_65);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_167264328"}, Instrument_65);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1730560168"}, Instrument_65);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1833216837"}, Instrument_65);
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("1162944");
set_field(msg, MinPriceIncrement_65, Instrument_65);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("17352402");
set_field(msg, MinPriceIncrementAmount_65, Instrument_65);
  set_field(msg, FIX::NTPositionLimit{635225476}, Instrument_65);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("68.500000");
set_field(msg, NotionalPercentageOutstanding_65, Instrument_65);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_65);
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("523337");
set_field(msg, OptPayoutAmount_65, Instrument_65);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_65);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("46.500000");
set_field(msg, OriginalNotionalPercentageOutstanding_65, Instrument_65);
  set_field(msg, FIX::Pool{"STRING_121151062"}, Instrument_65);
  set_field(msg, FIX::PositionLimit{1458526931}, Instrument_65);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_65);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_670376649"}, Instrument_65);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("20030401");
set_field(msg, PriceUnitOfMeasureQty_65, Instrument_65);
  set_field(msg, FIX::Product{4}, Instrument_65);
  set_field(msg, FIX::ProductComplex{"STRING_409246353"}, Instrument_65);
  set_field(msg, FIX::PutOrCall{0}, Instrument_65);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1480631331"}, Instrument_65);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1190177278"}, Instrument_65);
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("31.980000");
set_field(msg, RepurchaseRate_65, Instrument_65);
  set_field(msg, FIX::RepurchaseTerm{1077845881}, Instrument_65);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_65);
  set_field(msg, FIX::SecurityDesc{"STRING_1946401994"}, Instrument_65);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1678176450"}, Instrument_65);
  set_field(msg, FIX::SecurityGroup{"STRING_1176591376"}, Instrument_65);
  set_field(msg, FIX::SecurityID{"STRING_982678308"}, Instrument_65);
  set_field(msg, FIX::SecurityIDSource{"STRING_M"}, Instrument_65);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_65);
  set_field(msg, FIX::SecuritySubType{"STRING_971457579"}, Instrument_65);
  set_field(msg, FIX::SecurityType{"STRING_MT"}, Instrument_65);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_65);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_65);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_651614320"}, Instrument_65);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_494826983"}, Instrument_65);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_65);
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("5635842");
set_field(msg, StrikeMultiplier_65, Instrument_65);
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("13447499");
set_field(msg, StrikePrice_65, Instrument_65);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_65);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("88.910000");
set_field(msg, StrikePriceBoundaryPrecision_65, Instrument_65);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_65);
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("12321328");
set_field(msg, StrikeValue_65, Instrument_65);
  set_field(msg, FIX::Symbol{"STRING_762348322"}, Instrument_65);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_65);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_65);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_65);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_65);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("7468374");
set_field(msg, UnitOfMeasureQty_65, Instrument_65);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_65);
  all_values.push_back(Instrument_65);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_129;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_129);
    FIX::ComplexEventPrice ComplexEventPrice_129;
    ComplexEventPrice_129.setString("12788688");
set_field(noComplexEvents_0_0, ComplexEventPrice_129, ComplexEvents_NoComplexEvents_129);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_129);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
    ComplexEventPriceBoundaryPrecision_129.setString("90.240000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_129, ComplexEvents_NoComplexEvents_129);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_129);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_129);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
    ComplexOptPayoutAmount_129.setString("16682273");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_129, ComplexEvents_NoComplexEvents_129);
    all_values.push_back(ComplexEvents_NoComplexEvents_129);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_250;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 19, 37, 13, 4, 2012)}, ComplexEventDates_NoComplexEventDates_250);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 41, 9, 6, 2, 2004)}, ComplexEventDates_NoComplexEventDates_250);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_250);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 26, 0)}, ComplexEventTimes_NoComplexEventTimes_516);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 4, 12)}, ComplexEventTimes_NoComplexEventTimes_516);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 16, 40)}, ComplexEventTimes_NoComplexEventTimes_517);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 25, 19)}, ComplexEventTimes_NoComplexEventTimes_517);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_251;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 38, 20, 7, 10, 2002)}, ComplexEventDates_NoComplexEventDates_251);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 53, 6, 13, 11, 2010)}, ComplexEventDates_NoComplexEventDates_251);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_251);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 13, 42)}, ComplexEventTimes_NoComplexEventTimes_518);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 38, 7)}, ComplexEventTimes_NoComplexEventTimes_518);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 15, 59)}, ComplexEventTimes_NoComplexEventTimes_519);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 25, 19)}, ComplexEventTimes_NoComplexEventTimes_519);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_252;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 49, 54, 22, 12, 2006)}, ComplexEventDates_NoComplexEventDates_252);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 52, 52, 3, 3, 2014)}, ComplexEventDates_NoComplexEventDates_252);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_252);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 11, 26)}, ComplexEventTimes_NoComplexEventTimes_520);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 4, 58)}, ComplexEventTimes_NoComplexEventTimes_520);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_130;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_130);
    FIX::ComplexEventPrice ComplexEventPrice_130;
    ComplexEventPrice_130.setString("19182845");
set_field(noComplexEvents_0_1, ComplexEventPrice_130, ComplexEvents_NoComplexEvents_130);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_130);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
    ComplexEventPriceBoundaryPrecision_130.setString("91.600000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_130, ComplexEvents_NoComplexEvents_130);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_130);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_130);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
    ComplexOptPayoutAmount_130.setString("11782260");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_130, ComplexEvents_NoComplexEvents_130);
    all_values.push_back(ComplexEvents_NoComplexEvents_130);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_253;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 43, 26, 26, 7, 2012)}, ComplexEventDates_NoComplexEventDates_253);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 16, 5, 23, 8, 2014)}, ComplexEventDates_NoComplexEventDates_253);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_253);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 40, 22)}, ComplexEventTimes_NoComplexEventTimes_521);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 18, 10)}, ComplexEventTimes_NoComplexEventTimes_521);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 24, 24)}, ComplexEventTimes_NoComplexEventTimes_522);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 1, 31)}, ComplexEventTimes_NoComplexEventTimes_522);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_254;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 14, 10, 20, 2, 2011)}, ComplexEventDates_NoComplexEventDates_254);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 43, 39, 9, 3, 2009)}, ComplexEventDates_NoComplexEventDates_254);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_254);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 3, 12)}, ComplexEventTimes_NoComplexEventTimes_523);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 30, 58)}, ComplexEventTimes_NoComplexEventTimes_523);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 14, 57)}, ComplexEventTimes_NoComplexEventTimes_524);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 58, 16)}, ComplexEventTimes_NoComplexEventTimes_524);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_255;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 23, 14, 9, 1, 2005)}, ComplexEventDates_NoComplexEventDates_255);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 24, 9, 14, 8, 2016)}, ComplexEventDates_NoComplexEventDates_255);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_255);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 56, 21)}, ComplexEventTimes_NoComplexEventTimes_525);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 51, 1)}, ComplexEventTimes_NoComplexEventTimes_525);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 7, 11)}, ComplexEventTimes_NoComplexEventTimes_526);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 10, 18)}, ComplexEventTimes_NoComplexEventTimes_526);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 33, 44)}, ComplexEventTimes_NoComplexEventTimes_527);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 17, 14)}, ComplexEventTimes_NoComplexEventTimes_527);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_131;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_131);
    FIX::ComplexEventPrice ComplexEventPrice_131;
    ComplexEventPrice_131.setString("4128948");
set_field(noComplexEvents_0_2, ComplexEventPrice_131, ComplexEvents_NoComplexEvents_131);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_131);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
    ComplexEventPriceBoundaryPrecision_131.setString("24.650000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_131, ComplexEvents_NoComplexEvents_131);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_131);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_131);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
    ComplexOptPayoutAmount_131.setString("7439097");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_131, ComplexEvents_NoComplexEvents_131);
    all_values.push_back(ComplexEvents_NoComplexEvents_131);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_256;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 14, 23, 23, 11, 2001)}, ComplexEventDates_NoComplexEventDates_256);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 24, 45, 27, 12, 2017)}, ComplexEventDates_NoComplexEventDates_256);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_256);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 42, 5)}, ComplexEventTimes_NoComplexEventTimes_528);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 22, 23)}, ComplexEventTimes_NoComplexEventTimes_528);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_257;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 39, 19, 0, 12, 2015)}, ComplexEventDates_NoComplexEventDates_257);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 3, 40, 2, 11, 2008)}, ComplexEventDates_NoComplexEventDates_257);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_257);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 0, 34)}, ComplexEventTimes_NoComplexEventTimes_529);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 13, 45)}, ComplexEventTimes_NoComplexEventTimes_529);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 27, 9)}, ComplexEventTimes_NoComplexEventTimes_530);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 31, 12)}, ComplexEventTimes_NoComplexEventTimes_530);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 51, 24)}, ComplexEventTimes_NoComplexEventTimes_531);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 33, 16)}, ComplexEventTimes_NoComplexEventTimes_531);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_135;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1002816268"}, EvntGrp_NoEvents_135);
    FIX::EventPx EventPx_135;
    EventPx_135.setString("9472358");
set_field(noEvents_0_0, EventPx_135, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1533534084"}, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 51, 39, 18, 8, 2017)}, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventType{6}, EvntGrp_NoEvents_135);
    all_values.push_back(EvntGrp_NoEvents_135);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_136;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1252494806"}, EvntGrp_NoEvents_136);
    FIX::EventPx EventPx_136;
    EventPx_136.setString("3258449");
set_field(noEvents_0_1, EventPx_136, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventText{"STRING_97670062"}, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 50, 39, 15, 2, 2002)}, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_136);
    all_values.push_back(EvntGrp_NoEvents_136);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_124;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1039258813"}, InstrumentParties_NoInstrumentParties_124);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_124);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1071057678}, InstrumentParties_NoInstrumentParties_124);
    all_values.push_back(InstrumentParties_NoInstrumentParties_124);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_513040629"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{260612443}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1110214811"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1529504843}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_135;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2057450647"}, SecAltIDGrp_NoSecurityAltID_135);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_915555279"}, SecAltIDGrp_NoSecurityAltID_135);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_136;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1330643153"}, SecAltIDGrp_NoSecurityAltID_136);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1559986473"}, SecAltIDGrp_NoSecurityAltID_136);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_137;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_215631682"}, SecAltIDGrp_NoSecurityAltID_137);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_746000904"}, SecAltIDGrp_NoSecurityAltID_137);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  set_field(msg, FIX::SecurityXML{"XMLDATA_819241295"}, SecurityXML_130);
  set_field(msg, FIX::SecurityXMLLen{1577894766}, SecurityXML_130);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_964488809"}, SecurityXML_130);
  all_values.push_back(SecurityXML_130);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_109;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_682905924"}, Parties_NoPartyIDs_109);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_109);
    set_field(noPartyIDs_0_0, FIX::PartyRole{85}, Parties_NoPartyIDs_109);
    all_values.push_back(Parties_NoPartyIDs_109);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_219;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1666628206"}, PtysSubGrp_NoPartySubIDs_219);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_219);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_219);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_220;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_479311826"}, PtysSubGrp_NoPartySubIDs_220);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_220);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_220);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_110;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_230095386"}, Parties_NoPartyIDs_110);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_110);
    set_field(noPartyIDs_0_1, FIX::PartyRole{50}, Parties_NoPartyIDs_110);
    all_values.push_back(Parties_NoPartyIDs_110);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_221;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_507678814"}, PtysSubGrp_NoPartySubIDs_221);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_221);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_221);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("8500417");
set_field(noUnderlyings_0_0, UnderlyingDeliveryAmount_0, PosUndInstrmtGrp_NoUnderlyings_0);
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("8506153");
set_field(noUnderlyings_0_0, UnderlyingSettlPrice_1, PosUndInstrmtGrp_NoUnderlyings_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlPriceType{1670572921}, PosUndInstrmtGrp_NoUnderlyings_0);
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("2326365");
set_field(noUnderlyingAmounts_0_1_0, UnderlyingCollectAmount_0, UnderlyingAmount_NoUnderlyingAmounts_0);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("7865179");
set_field(noUnderlyingAmounts_0_1_0, UnderlyingPayAmount_0, UnderlyingAmount_NoUnderlyingAmounts_0);
      set_field(noUnderlyingAmounts_0_1_0, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_1870223560"}, UnderlyingAmount_NoUnderlyingAmounts_0);
      set_field(noUnderlyingAmounts_0_1_0, FIX::UnderlyingSettlementStatus{"STRING_1148191871"}, UnderlyingAmount_NoUnderlyingAmounts_0);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("21171611");
set_field(noUnderlyingAmounts_0_1_1, UnderlyingCollectAmount_1, UnderlyingAmount_NoUnderlyingAmounts_1);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("12827263");
set_field(noUnderlyingAmounts_0_1_1, UnderlyingPayAmount_1, UnderlyingAmount_NoUnderlyingAmounts_1);
      set_field(noUnderlyingAmounts_0_1_1, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_1363823553"}, UnderlyingAmount_NoUnderlyingAmounts_1);
      set_field(noUnderlyingAmounts_0_1_1, FIX::UnderlyingSettlementStatus{"STRING_715678394"}, UnderlyingAmount_NoUnderlyingAmounts_1);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_2;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_2;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_2;
      UnderlyingCollectAmount_2.setString("21019676");
set_field(noUnderlyingAmounts_0_1_2, UnderlyingCollectAmount_2, UnderlyingAmount_NoUnderlyingAmounts_2);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_2;
      UnderlyingPayAmount_2.setString("7942346");
set_field(noUnderlyingAmounts_0_1_2, UnderlyingPayAmount_2, UnderlyingAmount_NoUnderlyingAmounts_2);
      set_field(noUnderlyingAmounts_0_1_2, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_1680167204"}, UnderlyingAmount_NoUnderlyingAmounts_2);
      set_field(noUnderlyingAmounts_0_1_2, FIX::UnderlyingSettlementStatus{"STRING_308486926"}, UnderlyingAmount_NoUnderlyingAmounts_2);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_2);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_90;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1477140596"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{823017324}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_760159882"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{774627163}, UnderlyingInstrument_90);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
    UnderlyingAdjustedQuantity_90.setString("3421618");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_90, UnderlyingInstrument_90);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
    UnderlyingAllocationPercent_90.setString("60.790000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_90, UnderlyingInstrument_90);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
    UnderlyingAttachmentPoint_90.setString("89.890000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_329669007"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_295431466"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_722358990"}, UnderlyingInstrument_90);
    FIX::UnderlyingCapValue UnderlyingCapValue_90;
    UnderlyingCapValue_90.setString("12655276");
set_field(noUnderlyings_0_0, UnderlyingCapValue_90, UnderlyingInstrument_90);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
    UnderlyingCashAmount_90.setString("6343342");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_90);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
    UnderlyingContractMultiplier_90.setString("16031024");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2044294745}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2080079554"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_306234188"}, UnderlyingInstrument_90);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
    UnderlyingCouponRate_90.setString("40.180000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1892852467"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_90);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
    UnderlyingCurrentValue_90.setString("16155923");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_90, UnderlyingInstrument_90);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
    UnderlyingDetachmentPoint_90.setString("26.510000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_90, UnderlyingInstrument_90);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
    UnderlyingDirtyPrice_90.setString("1760958");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_90, UnderlyingInstrument_90);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
    UnderlyingEndPrice_90.setString("7508351");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_90, UnderlyingInstrument_90);
    FIX::UnderlyingEndValue UnderlyingEndValue_90;
    UnderlyingEndValue_90.setString("9034025");
set_field(noUnderlyings_0_0, UnderlyingEndValue_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{891774239}, UnderlyingInstrument_90);
    FIX::UnderlyingFXRate UnderlyingFXRate_90;
    UnderlyingFXRate_90.setString("7053191");
set_field(noUnderlyings_0_0, UnderlyingFXRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_90);
    FIX::UnderlyingFactor UnderlyingFactor_90;
    UnderlyingFactor_90.setString("4244577");
set_field(noUnderlyings_0_0, UnderlyingFactor_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1013806077}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1027294176"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1247475119"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1773965959"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1801921339"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1589637001"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1839302039"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_908376680"}, UnderlyingInstrument_90);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
    UnderlyingNotionalPercentageOutstanding_90.setString("60.080000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_90);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
    UnderlyingOriginalNotionalPercentageOutstanding_90.setString("56.710000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1037350032"}, UnderlyingInstrument_90);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
    UnderlyingPriceUnitOfMeasureQty_90.setString("6215841");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{713289827}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{492968823}, UnderlyingInstrument_90);
    FIX::UnderlyingPx UnderlyingPx_90;
    UnderlyingPx_90.setString("5183952");
set_field(noUnderlyings_0_0, UnderlyingPx_90, UnderlyingInstrument_90);
    FIX::UnderlyingQty UnderlyingQty_90;
    UnderlyingQty_90.setString("6458857");
set_field(noUnderlyings_0_0, UnderlyingQty_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_799203011"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2085779239"}, UnderlyingInstrument_90);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
    UnderlyingRepurchaseRate_90.setString("45.520000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1338073791}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_144713946"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2006846932"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_877652794"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_320809791"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_610198401"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1781055350"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1212584030"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1315517552"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1331208930"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_90);
    FIX::UnderlyingStartValue UnderlyingStartValue_90;
    UnderlyingStartValue_90.setString("1818399");
set_field(noUnderlyings_0_0, UnderlyingStartValue_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_211019458"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_90);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
    UnderlyingStrikePrice_90.setString("20129407");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_179186651"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1647624332"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_773833830"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_2098492659"}, UnderlyingInstrument_90);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
    UnderlyingUnitOfMeasureQty_90.setString("16348741");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_90, UnderlyingInstrument_90);
    all_values.push_back(UnderlyingInstrument_90);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_988359043"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_108974665"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_970375680"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1481327866"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1616261414"}, UnderlyingStipulations_NoUnderlyingStips_181);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_133047229"}, UnderlyingStipulations_NoUnderlyingStips_181);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_181);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2007515966"}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{710379422}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_201290166"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1031189213}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_329594004"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1982345517}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_96289596"}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1166070799}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1826951538"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1377090258}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_322881071"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1635273832}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1242547407"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{502067722}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1135414516"}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{453076734}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_125983442"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1441435777}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("10963591");
set_field(noPosAmt_0_0, PosAmt_13, PositionAmountData_NoPosAmt_13);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_BANK"}, PositionAmountData_NoPosAmt_13);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1359149608"}, PositionAmountData_NoPosAmt_13);
    all_values.push_back(PositionAmountData_NoPosAmt_13);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("5651368");
set_field(noPosAmt_0_1, PosAmt_14, PositionAmountData_NoPosAmt_14);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_CPN"}, PositionAmountData_NoPosAmt_14);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_1924815085"}, PositionAmountData_NoPosAmt_14);
    all_values.push_back(PositionAmountData_NoPosAmt_14);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("2319645");
set_field(noPositions_0_0, LongQty_7, PositionQty_NoPositions_7);
    set_field(noPositions_0_0, FIX::PosQtyStatus{1}, PositionQty_NoPositions_7);
    set_field(noPositions_0_0, FIX::PosType{"STRING_FIN"}, PositionQty_NoPositions_7);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_433254764"}, PositionQty_NoPositions_7);
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("15189000");
set_field(noPositions_0_0, ShortQty_7, PositionQty_NoPositions_7);
    all_values.push_back(PositionQty_NoPositions_7);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_108;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_268116633"}, NestedParties_NoNestedPartyIDs_108);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_108);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{2119270370}, NestedParties_NoNestedPartyIDs_108);
      all_values.push_back(NestedParties_NoNestedPartyIDs_108);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1201037443"}, NstdPtysSubGrp_NoNestedPartySubIDs_221);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1798738261}, NstdPtysSubGrp_NoNestedPartySubIDs_221);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_663794043"}, NstdPtysSubGrp_NoNestedPartySubIDs_222);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1523918514}, NstdPtysSubGrp_NoNestedPartySubIDs_222);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1286528445"}, NstdPtysSubGrp_NoNestedPartySubIDs_223);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1906341450}, NstdPtysSubGrp_NoNestedPartySubIDs_223);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  // header
  multiset<string> header_67;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_67);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_274459313"}, header_67);
  set_header_field(msg.getHeader(), FIX::BodyLength{1775239040}, header_67);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_331579323"}, header_67);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_897264371"}, header_67);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1901222482"}, header_67);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1773015100"}, header_67);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1629044094}, header_67);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_67);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{400811448}, header_67);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_840710055"}, header_67);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1415234846"}, header_67);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1309138674"}, header_67);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(6, 32, 51, 4, 5, 2008)}, header_67);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_67);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_67);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2092358445"}, header_67);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{283430752}, header_67);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1529178455"}, header_67);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1145912240"}, header_67);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2082169013"}, header_67);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 30, 0, 16, 1, 2012)}, header_67);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_732429019"}, header_67);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_245453847"}, header_67);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1333324527"}, header_67);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_357960471"}, header_67);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1874497942}, header_67);
  all_values.push_back(header_67);
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
