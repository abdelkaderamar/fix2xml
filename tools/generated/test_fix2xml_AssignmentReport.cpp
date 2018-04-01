#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AssignmentReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_0;
  set_field(msg, FIX::Account{"STRING_1271255335"}, AssignmentReport_0);
  set_field(msg, FIX::AccountType{2}, AssignmentReport_0);
  set_field(msg, FIX::AsgnRptID{"STRING_245749090"}, AssignmentReport_0);
  set_field(msg, FIX::AssignmentMethod{'R'}, AssignmentReport_0);
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("17937831");
set_field(msg, AssignmentUnit_0, AssignmentReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1488421140"}, AssignmentReport_0);
  set_field(msg, FIX::Currency{"EUR"}, AssignmentReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1547785736"}, AssignmentReport_0);
  set_field(msg, FIX::EncodedTextLen{209382097}, AssignmentReport_0);
  set_field(msg, FIX::ExerciseMethod{'M'}, AssignmentReport_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_250370786"}, AssignmentReport_0);
  set_field(msg, FIX::LastRptRequested{true}, AssignmentReport_0);
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("8677011");
set_field(msg, OpenInterest_0, AssignmentReport_0);
  set_field(msg, FIX::PosReqID{"STRING_321883390"}, AssignmentReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("997936");
set_field(msg, PriorSettlPrice_1, AssignmentReport_0);
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("20905708");
set_field(msg, SettlPrice_1, AssignmentReport_0);
  set_field(msg, FIX::SettlPriceType{1}, AssignmentReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, AssignmentReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1564336962"}, AssignmentReport_0);
  set_field(msg, FIX::Text{"STRING_1733335865"}, AssignmentReport_0);
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("16585952");
set_field(msg, ThresholdAmount_0, AssignmentReport_0);
  set_field(msg, FIX::TotNumAssignmentReports{1531427515}, AssignmentReport_0);
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("10064896");
set_field(msg, UnderlyingSettlPrice_0, AssignmentReport_0);
  all_values.push_back(AssignmentReport_0);

  all_compo_names.insert("AssignmentReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  set_field(msg, FIX::ApplID{"STRING_565969592"}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplLastSeqNum{771727746}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplSeqNum{1469584605}, ApplicationSequenceControl_0);
  all_values.push_back(ApplicationSequenceControl_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_457472091"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1054421682}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1735269466"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{61380030}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1300170772"}, InstrumentLeg_9);
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("19240270");
set_field(noLegs_0_0, LegContractMultiplier_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1855163203}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_641108265"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1671288175"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1964977047"}, InstrumentLeg_9);
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("3.530000");
set_field(noLegs_0_0, LegCouponRate_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1880670272"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2147427332"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{209891104}, InstrumentLeg_9);
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("6136645");
set_field(noLegs_0_0, LegFactor_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{99737291}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_152978278"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1471309914"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1020689278"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1717315240"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1057162131"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_531800868"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1101259108"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_2063651742"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_9);
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("18729868");
set_field(noLegs_0_0, LegOptionRatio_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1139239605"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_419871418"}, InstrumentLeg_9);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("1895173");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegProduct{1596711696}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1474293100}, InstrumentLeg_9);
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("19247868");
set_field(noLegs_0_0, LegRatioQty_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1658091726"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_626980225"}, InstrumentLeg_9);
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("2.140000");
set_field(noLegs_0_0, LegRepurchaseRate_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1365771281}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1268088490"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1225134741"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1183264680"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1309498843"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_958321365"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_525454646"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_958265049"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_9);
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("10580023");
set_field(noLegs_0_0, LegStrikePrice_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_888324029"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1538770780"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2078691619"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_458155622"}, InstrumentLeg_9);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("4484492");
set_field(noLegs_0_0, LegUnitOfMeasureQty_9, InstrumentLeg_9);
    all_values.push_back(InstrumentLeg_9);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1559414730"}, LegSecAltIDGrp_NoLegSecurityAltID_18);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_364617358"}, LegSecAltIDGrp_NoLegSecurityAltID_18);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1560779300"}, LegSecAltIDGrp_NoLegSecurityAltID_19);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1284917936"}, LegSecAltIDGrp_NoLegSecurityAltID_19);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1503856963"}, LegSecAltIDGrp_NoLegSecurityAltID_20);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1980650718"}, LegSecAltIDGrp_NoLegSecurityAltID_20);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("52.730000");
set_field(msg, AttachmentPoint_7, Instrument_7);
  set_field(msg, FIX::CFICode{"STRING_953085011"}, Instrument_7);
  set_field(msg, FIX::CPProgram{1}, Instrument_7);
  set_field(msg, FIX::CPRegType{"STRING_1251738429"}, Instrument_7);
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("4636930");
set_field(msg, CapPrice_7, Instrument_7);
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("19344403");
set_field(msg, ContractMultiplier_7, Instrument_7);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_7);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1829464370"}, Instrument_7);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1055045238"}, Instrument_7);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2030719736"}, Instrument_7);
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("54.030000");
set_field(msg, CouponRate_7, Instrument_7);
  set_field(msg, FIX::CreditRating{"STRING_217060433"}, Instrument_7);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_841557453"}, Instrument_7);
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("0.490000");
set_field(msg, DetachmentPoint_7, Instrument_7);
  set_field(msg, FIX::EncodedIssuer{"DATA_1818340417"}, Instrument_7);
  set_field(msg, FIX::EncodedIssuerLen{1799822503}, Instrument_7);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2126045800"}, Instrument_7);
  set_field(msg, FIX::EncodedSecurityDescLen{1885801282}, Instrument_7);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_7);
  FIX::Factor Factor_7;
  Factor_7.setString("8668861");
set_field(msg, Factor_7, Instrument_7);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_7);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_7);
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("13250418");
set_field(msg, FloorPrice_7, Instrument_7);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_7);
  set_field(msg, FIX::InstrRegistry{"STRING_1104558006"}, Instrument_7);
  set_field(msg, FIX::InstrmtAssignmentMethod{'7'}, Instrument_7);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2090155036"}, Instrument_7);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_517853658"}, Instrument_7);
  set_field(msg, FIX::Issuer{"STRING_2021890822"}, Instrument_7);
  set_field(msg, FIX::ListMethod{1}, Instrument_7);
  set_field(msg, FIX::LocaleOfIssue{"STRING_351020729"}, Instrument_7);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1348842447"}, Instrument_7);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_252129714"}, Instrument_7);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1658480900"}, Instrument_7);
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("4530972");
set_field(msg, MinPriceIncrement_7, Instrument_7);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("7158228");
set_field(msg, MinPriceIncrementAmount_7, Instrument_7);
  set_field(msg, FIX::NTPositionLimit{1445437648}, Instrument_7);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("22.240000");
set_field(msg, NotionalPercentageOutstanding_7, Instrument_7);
  set_field(msg, FIX::OptAttribute{'3'}, Instrument_7);
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("3529992");
set_field(msg, OptPayoutAmount_7, Instrument_7);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_7);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("89.280000");
set_field(msg, OriginalNotionalPercentageOutstanding_7, Instrument_7);
  set_field(msg, FIX::Pool{"STRING_570059671"}, Instrument_7);
  set_field(msg, FIX::PositionLimit{1983475766}, Instrument_7);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_7);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_240916440"}, Instrument_7);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("16358146");
set_field(msg, PriceUnitOfMeasureQty_7, Instrument_7);
  set_field(msg, FIX::Product{10}, Instrument_7);
  set_field(msg, FIX::ProductComplex{"STRING_2126717723"}, Instrument_7);
  set_field(msg, FIX::PutOrCall{1}, Instrument_7);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1351713664"}, Instrument_7);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1256322489"}, Instrument_7);
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("13.350000");
set_field(msg, RepurchaseRate_7, Instrument_7);
  set_field(msg, FIX::RepurchaseTerm{529271820}, Instrument_7);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_7);
  set_field(msg, FIX::SecurityDesc{"STRING_1944779341"}, Instrument_7);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1266244706"}, Instrument_7);
  set_field(msg, FIX::SecurityGroup{"STRING_777047907"}, Instrument_7);
  set_field(msg, FIX::SecurityID{"STRING_315149352"}, Instrument_7);
  set_field(msg, FIX::SecurityIDSource{"STRING_H"}, Instrument_7);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_7);
  set_field(msg, FIX::SecuritySubType{"STRING_666170081"}, Instrument_7);
  set_field(msg, FIX::SecurityType{"STRING_MTN"}, Instrument_7);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_7);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_7);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_795107909"}, Instrument_7);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1044045127"}, Instrument_7);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_7);
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("14418486");
set_field(msg, StrikeMultiplier_7, Instrument_7);
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("19756042");
set_field(msg, StrikePrice_7, Instrument_7);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_7);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("39.330000");
set_field(msg, StrikePriceBoundaryPrecision_7, Instrument_7);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_7);
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("8842169");
set_field(msg, StrikeValue_7, Instrument_7);
  set_field(msg, FIX::Symbol{"STRING_1063679263"}, Instrument_7);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_7);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_7);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_7);
  set_field(msg, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_7);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("5712200");
set_field(msg, UnitOfMeasureQty_7, Instrument_7);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_7);
  all_values.push_back(Instrument_7);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("12820085");
set_field(noComplexEvents_0_0, ComplexEventPrice_14, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("70.880000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_14, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("15238864");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_14, ComplexEvents_NoComplexEvents_14);
    all_values.push_back(ComplexEvents_NoComplexEvents_14);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 42, 41, 14, 4, 2011)}, ComplexEventDates_NoComplexEventDates_32);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 34, 58, 7, 4, 2015)}, ComplexEventDates_NoComplexEventDates_32);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 46, 1)}, ComplexEventTimes_NoComplexEventTimes_55);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 43, 53)}, ComplexEventTimes_NoComplexEventTimes_55);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 21)}, ComplexEventTimes_NoComplexEventTimes_56);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 34, 54)}, ComplexEventTimes_NoComplexEventTimes_56);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("10577594");
set_field(noComplexEvents_0_1, ComplexEventPrice_15, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("78.410000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_15, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("1605146");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_15, ComplexEvents_NoComplexEvents_15);
    all_values.push_back(ComplexEvents_NoComplexEvents_15);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 4, 38, 12, 6, 2012)}, ComplexEventDates_NoComplexEventDates_33);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 41, 16, 3, 4, 2015)}, ComplexEventDates_NoComplexEventDates_33);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 37, 5)}, ComplexEventTimes_NoComplexEventTimes_57);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 39, 16)}, ComplexEventTimes_NoComplexEventTimes_57);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 44, 41)}, ComplexEventTimes_NoComplexEventTimes_58);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 36, 18)}, ComplexEventTimes_NoComplexEventTimes_58);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 22, 37, 12, 4, 2007)}, ComplexEventDates_NoComplexEventDates_34);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 4, 27, 3, 8, 2017)}, ComplexEventDates_NoComplexEventDates_34);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 53, 33)}, ComplexEventTimes_NoComplexEventTimes_59);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 12, 51)}, ComplexEventTimes_NoComplexEventTimes_59);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 27, 42)}, ComplexEventTimes_NoComplexEventTimes_60);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 18, 35)}, ComplexEventTimes_NoComplexEventTimes_60);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_16;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexEventPrice ComplexEventPrice_16;
    ComplexEventPrice_16.setString("2068182");
set_field(noComplexEvents_0_2, ComplexEventPrice_16, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("73.690000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_16, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("12661564");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_16, ComplexEvents_NoComplexEvents_16);
    all_values.push_back(ComplexEvents_NoComplexEvents_16);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 26, 9, 1, 2, 2001)}, ComplexEventDates_NoComplexEventDates_35);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 10, 21, 5, 8, 2010)}, ComplexEventDates_NoComplexEventDates_35);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 35, 18)}, ComplexEventTimes_NoComplexEventTimes_61);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 29, 13)}, ComplexEventTimes_NoComplexEventTimes_61);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 2, 51)}, ComplexEventTimes_NoComplexEventTimes_62);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 24, 38)}, ComplexEventTimes_NoComplexEventTimes_62);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 5, 18, 23, 7, 2011)}, ComplexEventDates_NoComplexEventDates_36);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 45, 33, 2, 9, 2011)}, ComplexEventDates_NoComplexEventDates_36);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 34, 14)}, ComplexEventTimes_NoComplexEventTimes_63);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 43, 27)}, ComplexEventTimes_NoComplexEventTimes_63);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 30, 1)}, ComplexEventTimes_NoComplexEventTimes_64);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 26, 29)}, ComplexEventTimes_NoComplexEventTimes_64);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 26, 4)}, ComplexEventTimes_NoComplexEventTimes_65);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 39, 2)}, ComplexEventTimes_NoComplexEventTimes_65);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);
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
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_822872356"}, EvntGrp_NoEvents_18);
    FIX::EventPx EventPx_18;
    EventPx_18.setString("2939288");
set_field(noEvents_0_0, EventPx_18, EvntGrp_NoEvents_18);
    set_field(noEvents_0_0, FIX::EventText{"STRING_265181776"}, EvntGrp_NoEvents_18);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 15, 32, 27, 3, 2017)}, EvntGrp_NoEvents_18);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_18);
    all_values.push_back(EvntGrp_NoEvents_18);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1116384446"}, EvntGrp_NoEvents_19);
    FIX::EventPx EventPx_19;
    EventPx_19.setString("19830875");
set_field(noEvents_0_1, EventPx_19, EvntGrp_NoEvents_19);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2034080625"}, EvntGrp_NoEvents_19);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 7, 37, 21, 5, 2009)}, EvntGrp_NoEvents_19);
    set_field(noEvents_0_1, FIX::EventType{7}, EvntGrp_NoEvents_19);
    all_values.push_back(EvntGrp_NoEvents_19);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_67887563"}, InstrumentParties_NoInstrumentParties_11);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_11);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1604347363}, InstrumentParties_NoInstrumentParties_11);
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_210336314"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{966748155}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1336908909"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1972506828}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1789620511"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1630837716}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_563415720"}, SecAltIDGrp_NoSecurityAltID_12);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1939622403"}, SecAltIDGrp_NoSecurityAltID_12);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_782788332"}, SecAltIDGrp_NoSecurityAltID_13);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1144365332"}, SecAltIDGrp_NoSecurityAltID_13);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1526911318"}, SecAltIDGrp_NoSecurityAltID_14);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_73850034"}, SecAltIDGrp_NoSecurityAltID_14);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  set_field(msg, FIX::SecurityXML{"XMLDATA_60626711"}, SecurityXML_14);
  set_field(msg, FIX::SecurityXMLLen{1064718667}, SecurityXML_14);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1190234480"}, SecurityXML_14);
  all_values.push_back(SecurityXML_14);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_951315644"}, Parties_NoPartyIDs_17);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_17);
    set_field(noPartyIDs_0_0, FIX::PartyRole{17}, Parties_NoPartyIDs_17);
    all_values.push_back(Parties_NoPartyIDs_17);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1299619653"}, PtysSubGrp_NoPartySubIDs_35);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_35);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1733611536"}, PtysSubGrp_NoPartySubIDs_36);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_36);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_6;
    FIX::PosAmt PosAmt_6;
    PosAmt_6.setString("4614862");
set_field(noPosAmt_0_0, PosAmt_6, PositionAmountData_NoPosAmt_6);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ACPN"}, PositionAmountData_NoPosAmt_6);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_675693092"}, PositionAmountData_NoPosAmt_6);
    all_values.push_back(PositionAmountData_NoPosAmt_6);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("20658335");
set_field(noPosAmt_0_1, PosAmt_7, PositionAmountData_NoPosAmt_7);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_CMTM"}, PositionAmountData_NoPosAmt_7);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_886029406"}, PositionAmountData_NoPosAmt_7);
    all_values.push_back(PositionAmountData_NoPosAmt_7);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("11295996");
set_field(noPositions_0_0, LongQty_2, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::PosQtyStatus{2}, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::PosType{"STRING_DN"}, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_612953676"}, PositionQty_NoPositions_2);
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("8012575");
set_field(noPositions_0_0, ShortQty_2, PositionQty_NoPositions_2);
    all_values.push_back(PositionQty_NoPositions_2);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_42;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_405092431"}, NestedParties_NoNestedPartyIDs_42);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_42);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{87532365}, NestedParties_NoNestedPartyIDs_42);
      all_values.push_back(NestedParties_NoNestedPartyIDs_42);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1657895909"}, NstdPtysSubGrp_NoNestedPartySubIDs_90);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{148159077}, NstdPtysSubGrp_NoNestedPartySubIDs_90);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_849238769"}, NstdPtysSubGrp_NoNestedPartySubIDs_91);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{700646741}, NstdPtysSubGrp_NoNestedPartySubIDs_91);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_44389711"}, NstdPtysSubGrp_NoNestedPartySubIDs_92);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1800554413}, NstdPtysSubGrp_NoNestedPartySubIDs_92);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_10;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1338932207"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1925019297}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_943870262"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1181222480}, UnderlyingInstrument_10);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("15111471");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_10, UnderlyingInstrument_10);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("7.710000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_10, UnderlyingInstrument_10);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("85.990000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1972633412"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1632218844"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1983421692"}, UnderlyingInstrument_10);
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("18909833");
set_field(noUnderlyings_0_0, UnderlyingCapValue_10, UnderlyingInstrument_10);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("14249095");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_10);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("6285978");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{407025503}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1433020037"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1155832765"}, UnderlyingInstrument_10);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("91.790000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_86793932"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_10);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("16708398");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_10, UnderlyingInstrument_10);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("21.630000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_10, UnderlyingInstrument_10);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("12095917");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_10, UnderlyingInstrument_10);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("11812520");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_10, UnderlyingInstrument_10);
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("3346912");
set_field(noUnderlyings_0_0, UnderlyingEndValue_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2058830481}, UnderlyingInstrument_10);
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("18818988");
set_field(noUnderlyings_0_0, UnderlyingFXRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_10);
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("17119012");
set_field(noUnderlyings_0_0, UnderlyingFactor_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1526149418}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1718013158"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1489436896"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_322536032"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_751751990"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_853100433"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1576636804"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2059480590"}, UnderlyingInstrument_10);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("1.970000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_10);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("86.340000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_421749903"}, UnderlyingInstrument_10);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("3387978");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{469902436}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1050347707}, UnderlyingInstrument_10);
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("7458233");
set_field(noUnderlyings_0_0, UnderlyingPx_10, UnderlyingInstrument_10);
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("19029224");
set_field(noUnderlyings_0_0, UnderlyingQty_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_58696824"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1765802577"}, UnderlyingInstrument_10);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("64.050000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{157696622}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1043390540"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1513072564"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_344228786"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_105498605"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_546840984"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_678920026"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_16845438"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_281256145"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1058000978"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_10);
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("18074055");
set_field(noUnderlyings_0_0, UnderlyingStartValue_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_628530488"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_10);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("13802824");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1923800366"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1559094752"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1292279421"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_454566915"}, UnderlyingInstrument_10);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("4729831");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_10, UnderlyingInstrument_10);
    all_values.push_back(UnderlyingInstrument_10);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_876316819"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_811780999"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1510116843"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1926664526"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1557604397"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1265555669"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1175923326"}, UnderlyingStipulations_NoUnderlyingStips_21);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1107788426"}, UnderlyingStipulations_NoUnderlyingStips_21);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_71830219"}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{339803111}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1020218327"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1018723138}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_194174262"}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2076724116}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_961396388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{557770956}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_846137233"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{943854336}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1938053435"}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{355465440}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1077020867"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{828448544}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_11;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_2123063615"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1953337686}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1640229543"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1485696811}, UnderlyingInstrument_11);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("17325185");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_11, UnderlyingInstrument_11);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("2.920000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_11, UnderlyingInstrument_11);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("88.320000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1570396268"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_78789971"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1711557258"}, UnderlyingInstrument_11);
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("15659705");
set_field(noUnderlyings_0_1, UnderlyingCapValue_11, UnderlyingInstrument_11);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("1506201");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_11);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("19057737");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{327949014}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1057669281"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_777013195"}, UnderlyingInstrument_11);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("32.760000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_211660106"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_11);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("11730564");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_11, UnderlyingInstrument_11);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("46.190000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_11, UnderlyingInstrument_11);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("11436978");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_11, UnderlyingInstrument_11);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("21169108");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_11, UnderlyingInstrument_11);
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("10545944");
set_field(noUnderlyings_0_1, UnderlyingEndValue_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1766151762}, UnderlyingInstrument_11);
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("3248926");
set_field(noUnderlyings_0_1, UnderlyingFXRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_11);
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("6956889");
set_field(noUnderlyings_0_1, UnderlyingFactor_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1153341168}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_2113023583"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_501543020"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_646087063"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1451236746"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_86577937"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1696437356"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2055005578"}, UnderlyingInstrument_11);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("42.050000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_11);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("91.880000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1075461150"}, UnderlyingInstrument_11);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("19258475");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1656530142}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{833751207}, UnderlyingInstrument_11);
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("1063128");
set_field(noUnderlyings_0_1, UnderlyingPx_11, UnderlyingInstrument_11);
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("5667157");
set_field(noUnderlyings_0_1, UnderlyingQty_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1610764402"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_628436159"}, UnderlyingInstrument_11);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("58.810000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{169534417}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_925996736"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1951432375"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1433559037"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_2069694546"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1920859558"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_340669796"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1688362660"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_98268534"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_330629763"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_11);
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("12516097");
set_field(noUnderlyings_0_1, UnderlyingStartValue_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_296169698"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_11);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("17474064");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_824688950"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1446650473"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1654928374"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_334179507"}, UnderlyingInstrument_11);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("10743941");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_11, UnderlyingInstrument_11);
    all_values.push_back(UnderlyingInstrument_11);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1409640658"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_852758021"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_635570409"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_95908217"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_959070904"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1202286184"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1587507064"}, UnderlyingStipulations_NoUnderlyingStips_22);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1980662065"}, UnderlyingStipulations_NoUnderlyingStips_22);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_23;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1876207037"}, UnderlyingStipulations_NoUnderlyingStips_23);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_366020152"}, UnderlyingStipulations_NoUnderlyingStips_23);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1162282426"}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1557986703}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1976593710"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1656255237}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
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
