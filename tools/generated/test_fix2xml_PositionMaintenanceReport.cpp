#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_0;
  set_field(msg, FIX::Account{"STRING_398544768"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AccountType{7}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AcctIDSource{4}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AdjustmentType{3}, PositionMaintenanceReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1434943563"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::ContraryInstructionIndicator{false}, PositionMaintenanceReport_0);
  set_field(msg, FIX::Currency{"JPY"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1481855573"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::EncodedTextLen{791526145}, PositionMaintenanceReport_0);
  set_field(msg, FIX::OrigPosReqRefID{"STRING_469748722"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintAction{3}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintResult{1}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_1523493928"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_1955047248"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintStatus{3}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosReqID{"STRING_74413098"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosTransType{2}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PriorSpreadIndicator{true}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlCurrency{"CAN"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_105888936"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::Text{"STRING_1228937359"}, PositionMaintenanceReport_0);
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("18970118");
set_field(msg, ThresholdAmount_1, PositionMaintenanceReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 30, 54, 20, 5, 2006)}, PositionMaintenanceReport_0);
  all_values.push_back(PositionMaintenanceReport_0);

  all_compo_names.insert("PositionMaintenanceReport");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_65;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1700203867"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1484486557}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1959402690"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{99728694}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_731287756"}, InstrumentLeg_65);
    FIX::LegContractMultiplier LegContractMultiplier_65;
    LegContractMultiplier_65.setString("9190236");
set_field(noLegs_0_0, LegContractMultiplier_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1581584267}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1522813901"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1388772379"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_610383349"}, InstrumentLeg_65);
    FIX::LegCouponRate LegCouponRate_65;
    LegCouponRate_65.setString("53.440000");
set_field(noLegs_0_0, LegCouponRate_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_764782659"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_839195758"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{190062407}, InstrumentLeg_65);
    FIX::LegFactor LegFactor_65;
    LegFactor_65.setString("3936324");
set_field(noLegs_0_0, LegFactor_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{944799463}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1604350601"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1298974179"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1050688399"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_685804312"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1048502390"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1067170814"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1011005032"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_998297052"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_65);
    FIX::LegOptionRatio LegOptionRatio_65;
    LegOptionRatio_65.setString("19604027");
set_field(noLegs_0_0, LegOptionRatio_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_150686072"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1780962642"}, InstrumentLeg_65);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
    LegPriceUnitOfMeasureQty_65.setString("3373781");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegProduct{1850889939}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1117965552}, InstrumentLeg_65);
    FIX::LegRatioQty LegRatioQty_65;
    LegRatioQty_65.setString("1492972");
set_field(noLegs_0_0, LegRatioQty_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1950618633"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1849253308"}, InstrumentLeg_65);
    FIX::LegRepurchaseRate LegRepurchaseRate_65;
    LegRepurchaseRate_65.setString("8.820000");
set_field(noLegs_0_0, LegRepurchaseRate_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1384719253}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1224583562"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_309609613"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1995102602"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_998665258"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1074392272"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_265565904"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1913588030"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_65);
    FIX::LegStrikePrice LegStrikePrice_65;
    LegStrikePrice_65.setString("7109038");
set_field(noLegs_0_0, LegStrikePrice_65, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_2059978913"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_832937008"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1761592245"}, InstrumentLeg_65);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_598299577"}, InstrumentLeg_65);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
    LegUnitOfMeasureQty_65.setString("18814393");
set_field(noLegs_0_0, LegUnitOfMeasureQty_65, InstrumentLeg_65);
    all_values.push_back(InstrumentLeg_65);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1609304609"}, LegSecAltIDGrp_NoLegSecurityAltID_134);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_732252803"}, LegSecAltIDGrp_NoLegSecurityAltID_134);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_50;
  FIX::AttachmentPoint AttachmentPoint_50;
  AttachmentPoint_50.setString("19.320000");
set_field(msg, AttachmentPoint_50, Instrument_50);
  set_field(msg, FIX::CFICode{"STRING_1422223665"}, Instrument_50);
  set_field(msg, FIX::CPProgram{2}, Instrument_50);
  set_field(msg, FIX::CPRegType{"STRING_465810926"}, Instrument_50);
  FIX::CapPrice CapPrice_50;
  CapPrice_50.setString("17596018");
set_field(msg, CapPrice_50, Instrument_50);
  FIX::ContractMultiplier ContractMultiplier_50;
  ContractMultiplier_50.setString("5863451");
set_field(msg, ContractMultiplier_50, Instrument_50);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_50);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1908899074"}, Instrument_50);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_389480152"}, Instrument_50);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1285546139"}, Instrument_50);
  FIX::CouponRate CouponRate_50;
  CouponRate_50.setString("63.080000");
set_field(msg, CouponRate_50, Instrument_50);
  set_field(msg, FIX::CreditRating{"STRING_1774199405"}, Instrument_50);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_362646053"}, Instrument_50);
  FIX::DetachmentPoint DetachmentPoint_50;
  DetachmentPoint_50.setString("59.210000");
set_field(msg, DetachmentPoint_50, Instrument_50);
  set_field(msg, FIX::EncodedIssuer{"DATA_1621818360"}, Instrument_50);
  set_field(msg, FIX::EncodedIssuerLen{1361311311}, Instrument_50);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_66254546"}, Instrument_50);
  set_field(msg, FIX::EncodedSecurityDescLen{1887384264}, Instrument_50);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_50);
  FIX::Factor Factor_50;
  Factor_50.setString("19798425");
set_field(msg, Factor_50, Instrument_50);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_50);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_50);
  FIX::FloorPrice FloorPrice_50;
  FloorPrice_50.setString("5432627");
set_field(msg, FloorPrice_50, Instrument_50);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_50);
  set_field(msg, FIX::InstrRegistry{"STRING_868541578"}, Instrument_50);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_50);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_706323770"}, Instrument_50);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_602497329"}, Instrument_50);
  set_field(msg, FIX::Issuer{"STRING_838650782"}, Instrument_50);
  set_field(msg, FIX::ListMethod{1}, Instrument_50);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1334750132"}, Instrument_50);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1670982714"}, Instrument_50);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1590368397"}, Instrument_50);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_70205359"}, Instrument_50);
  FIX::MinPriceIncrement MinPriceIncrement_50;
  MinPriceIncrement_50.setString("21367936");
set_field(msg, MinPriceIncrement_50, Instrument_50);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_50;
  MinPriceIncrementAmount_50.setString("12024865");
set_field(msg, MinPriceIncrementAmount_50, Instrument_50);
  set_field(msg, FIX::NTPositionLimit{656550526}, Instrument_50);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_50;
  NotionalPercentageOutstanding_50.setString("64.710000");
set_field(msg, NotionalPercentageOutstanding_50, Instrument_50);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_50);
  FIX::OptPayoutAmount OptPayoutAmount_50;
  OptPayoutAmount_50.setString("10460306");
set_field(msg, OptPayoutAmount_50, Instrument_50);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_50);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_50;
  OriginalNotionalPercentageOutstanding_50.setString("83.330000");
set_field(msg, OriginalNotionalPercentageOutstanding_50, Instrument_50);
  set_field(msg, FIX::Pool{"STRING_672746436"}, Instrument_50);
  set_field(msg, FIX::PositionLimit{1073795015}, Instrument_50);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_50);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_147081148"}, Instrument_50);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_50;
  PriceUnitOfMeasureQty_50.setString("2876226");
set_field(msg, PriceUnitOfMeasureQty_50, Instrument_50);
  set_field(msg, FIX::Product{2}, Instrument_50);
  set_field(msg, FIX::ProductComplex{"STRING_2034465413"}, Instrument_50);
  set_field(msg, FIX::PutOrCall{1}, Instrument_50);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_684114081"}, Instrument_50);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_82510693"}, Instrument_50);
  FIX::RepurchaseRate RepurchaseRate_50;
  RepurchaseRate_50.setString("89.890000");
set_field(msg, RepurchaseRate_50, Instrument_50);
  set_field(msg, FIX::RepurchaseTerm{1227376855}, Instrument_50);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_50);
  set_field(msg, FIX::SecurityDesc{"STRING_1693410567"}, Instrument_50);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1384748226"}, Instrument_50);
  set_field(msg, FIX::SecurityGroup{"STRING_896858657"}, Instrument_50);
  set_field(msg, FIX::SecurityID{"STRING_148424248"}, Instrument_50);
  set_field(msg, FIX::SecurityIDSource{"STRING_5"}, Instrument_50);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_50);
  set_field(msg, FIX::SecuritySubType{"STRING_1483174380"}, Instrument_50);
  set_field(msg, FIX::SecurityType{"STRING_FXSPOT"}, Instrument_50);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_50);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_50);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1736208068"}, Instrument_50);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1710374736"}, Instrument_50);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_50);
  FIX::StrikeMultiplier StrikeMultiplier_50;
  StrikeMultiplier_50.setString("5267931");
set_field(msg, StrikeMultiplier_50, Instrument_50);
  FIX::StrikePrice StrikePrice_50;
  StrikePrice_50.setString("11084772");
set_field(msg, StrikePrice_50, Instrument_50);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_50);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_50;
  StrikePriceBoundaryPrecision_50.setString("77.970000");
set_field(msg, StrikePriceBoundaryPrecision_50, Instrument_50);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_50);
  FIX::StrikeValue StrikeValue_50;
  StrikeValue_50.setString("7992712");
set_field(msg, StrikeValue_50, Instrument_50);
  set_field(msg, FIX::Symbol{"STRING_958448404"}, Instrument_50);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_50);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_50);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_50);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_50);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_50;
  UnitOfMeasureQty_50.setString("18761583");
set_field(msg, UnitOfMeasureQty_50, Instrument_50);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_50);
  all_values.push_back(Instrument_50);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_99;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_99);
    FIX::ComplexEventPrice ComplexEventPrice_99;
    ComplexEventPrice_99.setString("15742108");
set_field(noComplexEvents_0_0, ComplexEventPrice_99, ComplexEvents_NoComplexEvents_99);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_99);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
    ComplexEventPriceBoundaryPrecision_99.setString("5.790000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_99, ComplexEvents_NoComplexEvents_99);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_99);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_99);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
    ComplexOptPayoutAmount_99.setString("2478948");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_99, ComplexEvents_NoComplexEvents_99);
    all_values.push_back(ComplexEvents_NoComplexEvents_99);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_212;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 10, 56, 16, 11, 2002)}, ComplexEventDates_NoComplexEventDates_212);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 37, 8, 19, 7, 2010)}, ComplexEventDates_NoComplexEventDates_212);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_212);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 41, 7)}, ComplexEventTimes_NoComplexEventTimes_428);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 36, 49)}, ComplexEventTimes_NoComplexEventTimes_428);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 49, 31)}, ComplexEventTimes_NoComplexEventTimes_429);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 59, 30)}, ComplexEventTimes_NoComplexEventTimes_429);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 40, 42)}, ComplexEventTimes_NoComplexEventTimes_430);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 6, 31)}, ComplexEventTimes_NoComplexEventTimes_430);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_213;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 40, 11, 6, 7, 2014)}, ComplexEventDates_NoComplexEventDates_213);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 13, 27, 24, 6, 2002)}, ComplexEventDates_NoComplexEventDates_213);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_213);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 31, 1)}, ComplexEventTimes_NoComplexEventTimes_431);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 52, 27)}, ComplexEventTimes_NoComplexEventTimes_431);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 59, 41)}, ComplexEventTimes_NoComplexEventTimes_432);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 40, 28)}, ComplexEventTimes_NoComplexEventTimes_432);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 8, 37)}, ComplexEventTimes_NoComplexEventTimes_433);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 10, 6)}, ComplexEventTimes_NoComplexEventTimes_433);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_214;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 33, 30, 9, 10, 2004)}, ComplexEventDates_NoComplexEventDates_214);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 27, 35, 15, 10, 2010)}, ComplexEventDates_NoComplexEventDates_214);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_214);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 25, 30)}, ComplexEventTimes_NoComplexEventTimes_434);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 10, 58)}, ComplexEventTimes_NoComplexEventTimes_434);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 58, 19)}, ComplexEventTimes_NoComplexEventTimes_435);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 21, 1)}, ComplexEventTimes_NoComplexEventTimes_435);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 34, 46)}, ComplexEventTimes_NoComplexEventTimes_436);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 50, 32)}, ComplexEventTimes_NoComplexEventTimes_436);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_100;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexEventPrice ComplexEventPrice_100;
    ComplexEventPrice_100.setString("8940718");
set_field(noComplexEvents_0_1, ComplexEventPrice_100, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
    ComplexEventPriceBoundaryPrecision_100.setString("35.970000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_100, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
    ComplexOptPayoutAmount_100.setString("11996628");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_100, ComplexEvents_NoComplexEvents_100);
    all_values.push_back(ComplexEvents_NoComplexEvents_100);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_215;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 25, 29, 4, 12, 2001)}, ComplexEventDates_NoComplexEventDates_215);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 18, 25, 15, 4, 2004)}, ComplexEventDates_NoComplexEventDates_215);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_215);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 15, 6)}, ComplexEventTimes_NoComplexEventTimes_437);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 56, 28)}, ComplexEventTimes_NoComplexEventTimes_437);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_216;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 27, 51, 0, 8, 2010)}, ComplexEventDates_NoComplexEventDates_216);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 31, 32, 4, 5, 2017)}, ComplexEventDates_NoComplexEventDates_216);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_216);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 46, 35)}, ComplexEventTimes_NoComplexEventTimes_438);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 21, 20)}, ComplexEventTimes_NoComplexEventTimes_438);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_101;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexEventPrice ComplexEventPrice_101;
    ComplexEventPrice_101.setString("4183727");
set_field(noComplexEvents_0_2, ComplexEventPrice_101, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
    ComplexEventPriceBoundaryPrecision_101.setString("49.670000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_101, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
    ComplexOptPayoutAmount_101.setString("14818356");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_101, ComplexEvents_NoComplexEvents_101);
    all_values.push_back(ComplexEvents_NoComplexEvents_101);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_217;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 19, 14, 2, 3, 2001)}, ComplexEventDates_NoComplexEventDates_217);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 36, 54, 21, 5, 2003)}, ComplexEventDates_NoComplexEventDates_217);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_217);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 31, 25)}, ComplexEventTimes_NoComplexEventTimes_439);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 38, 21)}, ComplexEventTimes_NoComplexEventTimes_439);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_103;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1417356186"}, EvntGrp_NoEvents_103);
    FIX::EventPx EventPx_103;
    EventPx_103.setString("10913382");
set_field(noEvents_0_0, EventPx_103, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1294357761"}, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 16, 21, 1, 3, 2004)}, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_103);
    all_values.push_back(EvntGrp_NoEvents_103);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_104;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2060283460"}, EvntGrp_NoEvents_104);
    FIX::EventPx EventPx_104;
    EventPx_104.setString("4655157");
set_field(noEvents_0_1, EventPx_104, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventText{"STRING_759847877"}, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 53, 39, 20, 3, 2007)}, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventType{3}, EvntGrp_NoEvents_104);
    all_values.push_back(EvntGrp_NoEvents_104);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_105;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1769108236"}, EvntGrp_NoEvents_105);
    FIX::EventPx EventPx_105;
    EventPx_105.setString("10424013");
set_field(noEvents_0_2, EventPx_105, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventText{"STRING_2050238773"}, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(19, 18, 12, 8, 9, 2016)}, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventType{5}, EvntGrp_NoEvents_105);
    all_values.push_back(EvntGrp_NoEvents_105);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_96;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_3054272"}, InstrumentParties_NoInstrumentParties_96);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_96);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1868938382}, InstrumentParties_NoInstrumentParties_96);
    all_values.push_back(InstrumentParties_NoInstrumentParties_96);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1475796868"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1760488880}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1136268685"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{763194092}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1673288692"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1601784431}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_103;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_232884517"}, SecAltIDGrp_NoSecurityAltID_103);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_184896830"}, SecAltIDGrp_NoSecurityAltID_103);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_104;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_979129834"}, SecAltIDGrp_NoSecurityAltID_104);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_745433657"}, SecAltIDGrp_NoSecurityAltID_104);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_100;
  set_field(msg, FIX::SecurityXML{"XMLDATA_67171786"}, SecurityXML_100);
  set_field(msg, FIX::SecurityXMLLen{1886346060}, SecurityXML_100);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1633614342"}, SecurityXML_100);
  all_values.push_back(SecurityXML_100);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1507970649"}, Parties_NoPartyIDs_92);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_92);
    set_field(noPartyIDs_0_0, FIX::PartyRole{84}, Parties_NoPartyIDs_92);
    all_values.push_back(Parties_NoPartyIDs_92);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1774737684"}, PtysSubGrp_NoPartySubIDs_187);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_187);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1899219647"}, PtysSubGrp_NoPartySubIDs_188);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_188);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1582049357"}, PtysSubGrp_NoPartySubIDs_189);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_189);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2136200317"}, Parties_NoPartyIDs_93);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_93);
    set_field(noPartyIDs_0_1, FIX::PartyRole{60}, Parties_NoPartyIDs_93);
    all_values.push_back(Parties_NoPartyIDs_93);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_396249108"}, PtysSubGrp_NoPartySubIDs_190);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_190);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_2103717807"}, PtysSubGrp_NoPartySubIDs_191);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_191);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1245654272"}, PtysSubGrp_NoPartySubIDs_192);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_192);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_8;
    FIX::PosAmt PosAmt_8;
    PosAmt_8.setString("6999550");
set_field(noPosAmt_0_0, PosAmt_8, PositionAmountData_NoPosAmt_8);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ICMTM"}, PositionAmountData_NoPosAmt_8);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1915427550"}, PositionAmountData_NoPosAmt_8);
    all_values.push_back(PositionAmountData_NoPosAmt_8);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_9;
    FIX::PosAmt PosAmt_9;
    PosAmt_9.setString("8848518");
set_field(noPosAmt_0_1, PosAmt_9, PositionAmountData_NoPosAmt_9);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_CMTM"}, PositionAmountData_NoPosAmt_9);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_513377559"}, PositionAmountData_NoPosAmt_9);
    all_values.push_back(PositionAmountData_NoPosAmt_9);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("8129788");
set_field(noPositions_0_0, LongQty_3, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::PosQtyStatus{0}, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::PosType{"STRING_RCV"}, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_173465820"}, PositionQty_NoPositions_3);
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("5280403");
set_field(noPositions_0_0, ShortQty_3, PositionQty_NoPositions_3);
    all_values.push_back(PositionQty_NoPositions_3);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_89;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_303827435"}, NestedParties_NoNestedPartyIDs_89);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_89);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1612456738}, NestedParties_NoNestedPartyIDs_89);
      all_values.push_back(NestedParties_NoNestedPartyIDs_89);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1565094210"}, NstdPtysSubGrp_NoNestedPartySubIDs_185);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1047022447}, NstdPtysSubGrp_NoNestedPartySubIDs_185);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_846030005"}, NestedParties_NoNestedPartyIDs_90);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_90);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1721816822}, NestedParties_NoNestedPartyIDs_90);
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_34248170"}, NstdPtysSubGrp_NoNestedPartySubIDs_186);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{2118065930}, NstdPtysSubGrp_NoNestedPartySubIDs_186);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1748936434"}, NestedParties_NoNestedPartyIDs_91);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_91);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{2127320271}, NestedParties_NoNestedPartyIDs_91);
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_709910581"}, NstdPtysSubGrp_NoNestedPartySubIDs_187);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1662379655}, NstdPtysSubGrp_NoNestedPartySubIDs_187);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_1547062113"}, NstdPtysSubGrp_NoNestedPartySubIDs_188);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{804897154}, NstdPtysSubGrp_NoNestedPartySubIDs_188);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("14303235");
set_field(noPositions_0_1, LongQty_4, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::PosQtyStatus{2}, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::PosType{"STRING_PNTN"}, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_1943701116"}, PositionQty_NoPositions_4);
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("12364540");
set_field(noPositions_0_1, ShortQty_4, PositionQty_NoPositions_4);
    all_values.push_back(PositionQty_NoPositions_4);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1943209369"}, NestedParties_NoNestedPartyIDs_92);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_92);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{717974553}, NestedParties_NoNestedPartyIDs_92);
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_651763899"}, NstdPtysSubGrp_NoNestedPartySubIDs_189);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1021801988}, NstdPtysSubGrp_NoNestedPartySubIDs_189);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_479060360"}, NstdPtysSubGrp_NoNestedPartySubIDs_190);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{116736990}, NstdPtysSubGrp_NoNestedPartySubIDs_190);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1077365423"}, NstdPtysSubGrp_NoNestedPartySubIDs_191);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{2044154570}, NstdPtysSubGrp_NoNestedPartySubIDs_191);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1163759437"}, NestedParties_NoNestedPartyIDs_93);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_93);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1450481801}, NestedParties_NoNestedPartyIDs_93);
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1415462627"}, NstdPtysSubGrp_NoNestedPartySubIDs_192);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1484729972}, NstdPtysSubGrp_NoNestedPartySubIDs_192);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_708674894"}, NstdPtysSubGrp_NoNestedPartySubIDs_193);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1016915413}, NstdPtysSubGrp_NoNestedPartySubIDs_193);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1475212302"}, NestedParties_NoNestedPartyIDs_94);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_94);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{1864022471}, NestedParties_NoNestedPartyIDs_94);
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_203407524"}, NstdPtysSubGrp_NoNestedPartySubIDs_194);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1263600936}, NstdPtysSubGrp_NoNestedPartySubIDs_194);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_842536389"}, NstdPtysSubGrp_NoNestedPartySubIDs_195);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{1633731082}, NstdPtysSubGrp_NoNestedPartySubIDs_195);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_1548031286"}, NstdPtysSubGrp_NoNestedPartySubIDs_196);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{574066302}, NstdPtysSubGrp_NoNestedPartySubIDs_196);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("14299485");
set_field(noPositions_0_2, LongQty_5, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::PosQtyStatus{2}, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::PosType{"STRING_ALC"}, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::QuantityDate{"LOCALMKTDATE_1225674272"}, PositionQty_NoPositions_5);
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("13124872");
set_field(noPositions_0_2, ShortQty_5, PositionQty_NoPositions_5);
    all_values.push_back(PositionQty_NoPositions_5);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1549440295"}, NestedParties_NoNestedPartyIDs_95);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_95);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{710867928}, NestedParties_NoNestedPartyIDs_95);
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_2080988163"}, NstdPtysSubGrp_NoNestedPartySubIDs_197);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1788233352}, NstdPtysSubGrp_NoNestedPartySubIDs_197);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_17);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_17);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_18);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_18);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_565416055"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{396547810}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1849039525"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2040628357}, UnderlyingInstrument_87);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("10850593");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_87, UnderlyingInstrument_87);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("83.490000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_87, UnderlyingInstrument_87);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("75.930000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1288466851"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_681695637"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_773320334"}, UnderlyingInstrument_87);
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("7747142");
set_field(noUnderlyings_0_0, UnderlyingCapValue_87, UnderlyingInstrument_87);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("822432");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_87);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("571791");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{719244936}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_318478024"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1282853460"}, UnderlyingInstrument_87);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("22.090000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_7543964"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_87);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("7184118");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_87, UnderlyingInstrument_87);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("71.140000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_87, UnderlyingInstrument_87);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("17820042");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_87, UnderlyingInstrument_87);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("3591615");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_87, UnderlyingInstrument_87);
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("3435150");
set_field(noUnderlyings_0_0, UnderlyingEndValue_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{731784554}, UnderlyingInstrument_87);
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("19233067");
set_field(noUnderlyings_0_0, UnderlyingFXRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_87);
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("4196574");
set_field(noUnderlyings_0_0, UnderlyingFactor_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{607947193}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2137100831"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_816205280"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_309503070"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2030245541"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1901264607"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1875081419"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1961029486"}, UnderlyingInstrument_87);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("78.100000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_87);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("61.720000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1816962096"}, UnderlyingInstrument_87);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("4915366");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1934252809}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1874141284}, UnderlyingInstrument_87);
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("12107816");
set_field(noUnderlyings_0_0, UnderlyingPx_87, UnderlyingInstrument_87);
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("1052471");
set_field(noUnderlyings_0_0, UnderlyingQty_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1009511096"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1095030182"}, UnderlyingInstrument_87);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("11.490000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1694321203}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_796046269"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_831203042"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_112664669"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_430566870"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1190364638"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_456179714"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1162351424"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_966187719"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2027864490"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_87);
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("15741349");
set_field(noUnderlyings_0_0, UnderlyingStartValue_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2017481673"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_87);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("19002435");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_4511485"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1611235754"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1713789404"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1046759296"}, UnderlyingInstrument_87);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("20205291");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_87, UnderlyingInstrument_87);
    all_values.push_back(UnderlyingInstrument_87);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_716237744"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_364582200"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_2087424738"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_442895380"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1575363821"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_45188276"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_522910356"}, UnderlyingStipulations_NoUnderlyingStips_174);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_157979425"}, UnderlyingStipulations_NoUnderlyingStips_174);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1318956625"}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1111908700}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_32063458"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1568088414}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_764391272"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{998251177}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1448469256"}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{424902442}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_449647045"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{161056777}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1071227200"}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1772292531}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1500917826"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1645338047}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_790704886"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{69671922}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2009920247"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{730645976}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
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
