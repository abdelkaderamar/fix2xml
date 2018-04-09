#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::PositionMaintenanceReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_0;
  set_field(msg, FIX::Account{"STRING_380479814"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AccountType{3}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AcctIDSource{2}, PositionMaintenanceReport_0);
  set_field(msg, FIX::AdjustmentType{1}, PositionMaintenanceReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1731850662"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::ContraryInstructionIndicator{false}, PositionMaintenanceReport_0);
  set_field(msg, FIX::Currency{"USD"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1599139939"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::EncodedTextLen{1371374659}, PositionMaintenanceReport_0);
  set_field(msg, FIX::OrigPosReqRefID{"STRING_1601232442"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintAction{3}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintResult{0}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_986163063"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_1741615521"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosMaintStatus{1}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosReqID{"STRING_363780828"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PosTransType{1}, PositionMaintenanceReport_0);
  set_field(msg, FIX::PriorSpreadIndicator{false}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2003564053"}, PositionMaintenanceReport_0);
  set_field(msg, FIX::Text{"STRING_192522024"}, PositionMaintenanceReport_0);
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("12152127");
set_field(msg, ThresholdAmount_1, PositionMaintenanceReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 24, 42, 7, 8, 2008)}, PositionMaintenanceReport_0);
  all_values.push_back(PositionMaintenanceReport_0);

  all_compo_names.insert("PositionMaintenanceReport");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_88;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_244060782"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{2134880845}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_460140640"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1061015363}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2010279203"}, InstrumentLeg_88);
    FIX::LegContractMultiplier LegContractMultiplier_88;
    LegContractMultiplier_88.setString("18781661");
set_field(noLegs_0_0, LegContractMultiplier_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{512671655}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1234170214"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1331914986"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_173122981"}, InstrumentLeg_88);
    FIX::LegCouponRate LegCouponRate_88;
    LegCouponRate_88.setString("96.580000");
set_field(noLegs_0_0, LegCouponRate_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_170594402"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_534375230"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{20644646}, InstrumentLeg_88);
    FIX::LegFactor LegFactor_88;
    LegFactor_88.setString("1020991");
set_field(noLegs_0_0, LegFactor_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{314823160}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1815592497"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_76912461"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_170903565"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2008114521"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1292125198"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1311043252"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1288966161"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_726064514"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_88);
    FIX::LegOptionRatio LegOptionRatio_88;
    LegOptionRatio_88.setString("10997563");
set_field(noLegs_0_0, LegOptionRatio_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_243194246"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1758398663"}, InstrumentLeg_88);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
    LegPriceUnitOfMeasureQty_88.setString("19755299");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegProduct{487255028}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1745795860}, InstrumentLeg_88);
    FIX::LegRatioQty LegRatioQty_88;
    LegRatioQty_88.setString("2881869");
set_field(noLegs_0_0, LegRatioQty_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1548270392"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1608591415"}, InstrumentLeg_88);
    FIX::LegRepurchaseRate LegRepurchaseRate_88;
    LegRepurchaseRate_88.setString("94.820000");
set_field(noLegs_0_0, LegRepurchaseRate_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{2060942047}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_695277981"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1350784469"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_86581380"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1872017639"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1521378871"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2001319882"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_2055754101"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_88);
    FIX::LegStrikePrice LegStrikePrice_88;
    LegStrikePrice_88.setString("2230936");
set_field(noLegs_0_0, LegStrikePrice_88, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1690073377"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1218389271"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_393997178"}, InstrumentLeg_88);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1550704251"}, InstrumentLeg_88);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
    LegUnitOfMeasureQty_88.setString("3630308");
set_field(noLegs_0_0, LegUnitOfMeasureQty_88, InstrumentLeg_88);
    all_values.push_back(InstrumentLeg_88);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_692186764"}, LegSecAltIDGrp_NoLegSecurityAltID_178);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1089095335"}, LegSecAltIDGrp_NoLegSecurityAltID_178);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1975779657"}, LegSecAltIDGrp_NoLegSecurityAltID_179);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1791943084"}, LegSecAltIDGrp_NoLegSecurityAltID_179);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_63;
  FIX::AttachmentPoint AttachmentPoint_63;
  AttachmentPoint_63.setString("95.810000");
set_field(msg, AttachmentPoint_63, Instrument_63);
  set_field(msg, FIX::CFICode{"STRING_1586694672"}, Instrument_63);
  set_field(msg, FIX::CPProgram{99}, Instrument_63);
  set_field(msg, FIX::CPRegType{"STRING_1819544610"}, Instrument_63);
  FIX::CapPrice CapPrice_63;
  CapPrice_63.setString("11850068");
set_field(msg, CapPrice_63, Instrument_63);
  FIX::ContractMultiplier ContractMultiplier_63;
  ContractMultiplier_63.setString("19081763");
set_field(msg, ContractMultiplier_63, Instrument_63);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_63);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_646114652"}, Instrument_63);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1927045802"}, Instrument_63);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1133789753"}, Instrument_63);
  FIX::CouponRate CouponRate_63;
  CouponRate_63.setString("26.340000");
set_field(msg, CouponRate_63, Instrument_63);
  set_field(msg, FIX::CreditRating{"STRING_1130346623"}, Instrument_63);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1220371133"}, Instrument_63);
  FIX::DetachmentPoint DetachmentPoint_63;
  DetachmentPoint_63.setString("66.250000");
set_field(msg, DetachmentPoint_63, Instrument_63);
  set_field(msg, FIX::EncodedIssuer{"DATA_504241846"}, Instrument_63);
  set_field(msg, FIX::EncodedIssuerLen{1074207367}, Instrument_63);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2105304236"}, Instrument_63);
  set_field(msg, FIX::EncodedSecurityDescLen{412512300}, Instrument_63);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_63);
  FIX::Factor Factor_63;
  Factor_63.setString("10992973");
set_field(msg, Factor_63, Instrument_63);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_63);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_63);
  FIX::FloorPrice FloorPrice_63;
  FloorPrice_63.setString("1702030");
set_field(msg, FloorPrice_63, Instrument_63);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_63);
  set_field(msg, FIX::InstrRegistry{"STRING_2041982228"}, Instrument_63);
  set_field(msg, FIX::InstrmtAssignmentMethod{'5'}, Instrument_63);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_587159875"}, Instrument_63);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_586685344"}, Instrument_63);
  set_field(msg, FIX::Issuer{"STRING_1622329178"}, Instrument_63);
  set_field(msg, FIX::ListMethod{0}, Instrument_63);
  set_field(msg, FIX::LocaleOfIssue{"STRING_231144780"}, Instrument_63);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_807135111"}, Instrument_63);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2002150557"}, Instrument_63);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1851134162"}, Instrument_63);
  FIX::MinPriceIncrement MinPriceIncrement_63;
  MinPriceIncrement_63.setString("4791960");
set_field(msg, MinPriceIncrement_63, Instrument_63);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
  MinPriceIncrementAmount_63.setString("10396737");
set_field(msg, MinPriceIncrementAmount_63, Instrument_63);
  set_field(msg, FIX::NTPositionLimit{1611826834}, Instrument_63);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
  NotionalPercentageOutstanding_63.setString("74.270000");
set_field(msg, NotionalPercentageOutstanding_63, Instrument_63);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_63);
  FIX::OptPayoutAmount OptPayoutAmount_63;
  OptPayoutAmount_63.setString("13913889");
set_field(msg, OptPayoutAmount_63, Instrument_63);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_63);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
  OriginalNotionalPercentageOutstanding_63.setString("74.320000");
set_field(msg, OriginalNotionalPercentageOutstanding_63, Instrument_63);
  set_field(msg, FIX::Pool{"STRING_374251964"}, Instrument_63);
  set_field(msg, FIX::PositionLimit{1906204665}, Instrument_63);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_63);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_878493810"}, Instrument_63);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
  PriceUnitOfMeasureQty_63.setString("8329283");
set_field(msg, PriceUnitOfMeasureQty_63, Instrument_63);
  set_field(msg, FIX::Product{13}, Instrument_63);
  set_field(msg, FIX::ProductComplex{"STRING_1291006110"}, Instrument_63);
  set_field(msg, FIX::PutOrCall{0}, Instrument_63);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_855258397"}, Instrument_63);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1926612024"}, Instrument_63);
  FIX::RepurchaseRate RepurchaseRate_63;
  RepurchaseRate_63.setString("9.610000");
set_field(msg, RepurchaseRate_63, Instrument_63);
  set_field(msg, FIX::RepurchaseTerm{1025461418}, Instrument_63);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_63);
  set_field(msg, FIX::SecurityDesc{"STRING_19909541"}, Instrument_63);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1558695261"}, Instrument_63);
  set_field(msg, FIX::SecurityGroup{"STRING_1395891343"}, Instrument_63);
  set_field(msg, FIX::SecurityID{"STRING_606594885"}, Instrument_63);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_63);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_63);
  set_field(msg, FIX::SecuritySubType{"STRING_837739665"}, Instrument_63);
  set_field(msg, FIX::SecurityType{"STRING_TBOND"}, Instrument_63);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_63);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_63);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_172388328"}, Instrument_63);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_558204282"}, Instrument_63);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_63);
  FIX::StrikeMultiplier StrikeMultiplier_63;
  StrikeMultiplier_63.setString("965090");
set_field(msg, StrikeMultiplier_63, Instrument_63);
  FIX::StrikePrice StrikePrice_63;
  StrikePrice_63.setString("13971223");
set_field(msg, StrikePrice_63, Instrument_63);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_63);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
  StrikePriceBoundaryPrecision_63.setString("65.130000");
set_field(msg, StrikePriceBoundaryPrecision_63, Instrument_63);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_63);
  FIX::StrikeValue StrikeValue_63;
  StrikeValue_63.setString("1689866");
set_field(msg, StrikeValue_63, Instrument_63);
  set_field(msg, FIX::Symbol{"STRING_774346923"}, Instrument_63);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_63);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_63);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_63);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_63);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
  UnitOfMeasureQty_63.setString("6360480");
set_field(msg, UnitOfMeasureQty_63, Instrument_63);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_63);
  all_values.push_back(Instrument_63);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_125;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexEventPrice ComplexEventPrice_125;
    ComplexEventPrice_125.setString("2635440");
set_field(noComplexEvents_0_0, ComplexEventPrice_125, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
    ComplexEventPriceBoundaryPrecision_125.setString("85.280000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_125, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
    ComplexOptPayoutAmount_125.setString("13879634");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_125, ComplexEvents_NoComplexEvents_125);
    all_values.push_back(ComplexEvents_NoComplexEvents_125);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_243;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 8, 17, 17, 9, 2000)}, ComplexEventDates_NoComplexEventDates_243);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 41, 27, 19, 7, 2001)}, ComplexEventDates_NoComplexEventDates_243);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_243);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 43, 32)}, ComplexEventTimes_NoComplexEventTimes_497);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 23, 38)}, ComplexEventTimes_NoComplexEventTimes_497);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 44, 56)}, ComplexEventTimes_NoComplexEventTimes_498);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 21, 8)}, ComplexEventTimes_NoComplexEventTimes_498);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 16, 44)}, ComplexEventTimes_NoComplexEventTimes_499);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 36, 6)}, ComplexEventTimes_NoComplexEventTimes_499);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_126;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexEventPrice ComplexEventPrice_126;
    ComplexEventPrice_126.setString("15832526");
set_field(noComplexEvents_0_1, ComplexEventPrice_126, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
    ComplexEventPriceBoundaryPrecision_126.setString("84.110000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_126, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
    ComplexOptPayoutAmount_126.setString("496662");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_126, ComplexEvents_NoComplexEvents_126);
    all_values.push_back(ComplexEvents_NoComplexEvents_126);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_244;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 50, 23, 8, 2, 2017)}, ComplexEventDates_NoComplexEventDates_244);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 37, 16, 0, 8, 2011)}, ComplexEventDates_NoComplexEventDates_244);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_244);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 49, 7)}, ComplexEventTimes_NoComplexEventTimes_500);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 43, 18)}, ComplexEventTimes_NoComplexEventTimes_500);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_245;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 44, 45, 5, 3, 2016)}, ComplexEventDates_NoComplexEventDates_245);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 49, 25, 21, 11, 2012)}, ComplexEventDates_NoComplexEventDates_245);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_245);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 19, 39)}, ComplexEventTimes_NoComplexEventTimes_501);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 8, 33)}, ComplexEventTimes_NoComplexEventTimes_501);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 14, 36)}, ComplexEventTimes_NoComplexEventTimes_502);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 12, 32)}, ComplexEventTimes_NoComplexEventTimes_502);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 8, 4)}, ComplexEventTimes_NoComplexEventTimes_503);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 26, 33)}, ComplexEventTimes_NoComplexEventTimes_503);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_246;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 50, 17, 5, 1, 2013)}, ComplexEventDates_NoComplexEventDates_246);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 19, 19, 15, 11, 2001)}, ComplexEventDates_NoComplexEventDates_246);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_246);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 3, 24)}, ComplexEventTimes_NoComplexEventTimes_504);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 36, 6)}, ComplexEventTimes_NoComplexEventTimes_504);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 6, 18)}, ComplexEventTimes_NoComplexEventTimes_505);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 44, 48)}, ComplexEventTimes_NoComplexEventTimes_505);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 38, 14)}, ComplexEventTimes_NoComplexEventTimes_506);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 14, 25)}, ComplexEventTimes_NoComplexEventTimes_506);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_127;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexEventPrice ComplexEventPrice_127;
    ComplexEventPrice_127.setString("7022774");
set_field(noComplexEvents_0_2, ComplexEventPrice_127, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
    ComplexEventPriceBoundaryPrecision_127.setString("16.850000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_127, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
    ComplexOptPayoutAmount_127.setString("12069075");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_127, ComplexEvents_NoComplexEvents_127);
    all_values.push_back(ComplexEvents_NoComplexEvents_127);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_247;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 18, 50, 8, 11, 2014)}, ComplexEventDates_NoComplexEventDates_247);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 54, 48, 6, 3, 2000)}, ComplexEventDates_NoComplexEventDates_247);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_247);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 44, 58)}, ComplexEventTimes_NoComplexEventTimes_507);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 12, 17)}, ComplexEventTimes_NoComplexEventTimes_507);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 45, 17)}, ComplexEventTimes_NoComplexEventTimes_508);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 50, 30)}, ComplexEventTimes_NoComplexEventTimes_508);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 41, 39)}, ComplexEventTimes_NoComplexEventTimes_509);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 27, 5)}, ComplexEventTimes_NoComplexEventTimes_509);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
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
    multiset<string> EvntGrp_NoEvents_132;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1293145161"}, EvntGrp_NoEvents_132);
    FIX::EventPx EventPx_132;
    EventPx_132.setString("8051417");
set_field(noEvents_0_0, EventPx_132, EvntGrp_NoEvents_132);
    set_field(noEvents_0_0, FIX::EventText{"STRING_771441777"}, EvntGrp_NoEvents_132);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 12, 35, 20, 9, 2013)}, EvntGrp_NoEvents_132);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_132);
    all_values.push_back(EvntGrp_NoEvents_132);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_133;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1899978983"}, EvntGrp_NoEvents_133);
    FIX::EventPx EventPx_133;
    EventPx_133.setString("5751619");
set_field(noEvents_0_1, EventPx_133, EvntGrp_NoEvents_133);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1061639110"}, EvntGrp_NoEvents_133);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 56, 12, 26, 6, 2000)}, EvntGrp_NoEvents_133);
    set_field(noEvents_0_1, FIX::EventType{5}, EvntGrp_NoEvents_133);
    all_values.push_back(EvntGrp_NoEvents_133);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_119;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1181799245"}, InstrumentParties_NoInstrumentParties_119);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_119);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1445699749}, InstrumentParties_NoInstrumentParties_119);
    all_values.push_back(InstrumentParties_NoInstrumentParties_119);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_101613357"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{473139968}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_879789509"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{916203928}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1766285129"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1684931234}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_120;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1687645705"}, InstrumentParties_NoInstrumentParties_120);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_120);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1171938195}, InstrumentParties_NoInstrumentParties_120);
    all_values.push_back(InstrumentParties_NoInstrumentParties_120);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_245163287"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2075253804}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1726415306"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1022202852}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_1411809797"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1478910641}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_129;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_325965259"}, SecAltIDGrp_NoSecurityAltID_129);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_47516788"}, SecAltIDGrp_NoSecurityAltID_129);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_130;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_525442899"}, SecAltIDGrp_NoSecurityAltID_130);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2092128435"}, SecAltIDGrp_NoSecurityAltID_130);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_131;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1397339080"}, SecAltIDGrp_NoSecurityAltID_131);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_601975213"}, SecAltIDGrp_NoSecurityAltID_131);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_126;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1573893156"}, SecurityXML_126);
  set_field(msg, FIX::SecurityXMLLen{292834166}, SecurityXML_126);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_531723550"}, SecurityXML_126);
  all_values.push_back(SecurityXML_126);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_106;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1474633412"}, Parties_NoPartyIDs_106);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_106);
    set_field(noPartyIDs_0_0, FIX::PartyRole{77}, Parties_NoPartyIDs_106);
    all_values.push_back(Parties_NoPartyIDs_106);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_212;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1369628264"}, PtysSubGrp_NoPartySubIDs_212);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_212);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_212);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_213;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1273110926"}, PtysSubGrp_NoPartySubIDs_213);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_213);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_213);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_214;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1119153416"}, PtysSubGrp_NoPartySubIDs_214);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_214);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_214);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_107;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1825994250"}, Parties_NoPartyIDs_107);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_107);
    set_field(noPartyIDs_0_1, FIX::PartyRole{26}, Parties_NoPartyIDs_107);
    all_values.push_back(Parties_NoPartyIDs_107);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_215;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_507894236"}, PtysSubGrp_NoPartySubIDs_215);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_215);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_215);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_9;
    FIX::PosAmt PosAmt_9;
    PosAmt_9.setString("15300970");
set_field(noPosAmt_0_0, PosAmt_9, PositionAmountData_NoPosAmt_9);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_VADJ"}, PositionAmountData_NoPosAmt_9);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1295017370"}, PositionAmountData_NoPosAmt_9);
    all_values.push_back(PositionAmountData_NoPosAmt_9);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("9799782");
set_field(noPosAmt_0_1, PosAmt_10, PositionAmountData_NoPosAmt_10);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_SETL"}, PositionAmountData_NoPosAmt_10);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_1342534158"}, PositionAmountData_NoPosAmt_10);
    all_values.push_back(PositionAmountData_NoPosAmt_10);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("15054211");
set_field(noPosAmt_0_2, PosAmt_11, PositionAmountData_NoPosAmt_11);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_BANK"}, PositionAmountData_NoPosAmt_11);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_592389590"}, PositionAmountData_NoPosAmt_11);
    all_values.push_back(PositionAmountData_NoPosAmt_11);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("8716125");
set_field(noPositions_0_0, LongQty_3, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::PosQtyStatus{2}, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::PosType{"STRING_IAS"}, PositionQty_NoPositions_3);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_453124787"}, PositionQty_NoPositions_3);
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("2123735");
set_field(noPositions_0_0, ShortQty_3, PositionQty_NoPositions_3);
    all_values.push_back(PositionQty_NoPositions_3);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_99;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1480336754"}, NestedParties_NoNestedPartyIDs_99);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_99);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{981795781}, NestedParties_NoNestedPartyIDs_99);
      all_values.push_back(NestedParties_NoNestedPartyIDs_99);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1878805863"}, NstdPtysSubGrp_NoNestedPartySubIDs_204);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1120144326}, NstdPtysSubGrp_NoNestedPartySubIDs_204);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_100;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1952358458"}, NestedParties_NoNestedPartyIDs_100);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_100);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{798654928}, NestedParties_NoNestedPartyIDs_100);
      all_values.push_back(NestedParties_NoNestedPartyIDs_100);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_376893788"}, NstdPtysSubGrp_NoNestedPartySubIDs_205);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1035829999}, NstdPtysSubGrp_NoNestedPartySubIDs_205);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("5754999");
set_field(noPositions_0_1, LongQty_4, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::PosQtyStatus{1}, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::PosType{"STRING_EX"}, PositionQty_NoPositions_4);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_2105597085"}, PositionQty_NoPositions_4);
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("13142700");
set_field(noPositions_0_1, ShortQty_4, PositionQty_NoPositions_4);
    all_values.push_back(PositionQty_NoPositions_4);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_101;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_938091679"}, NestedParties_NoNestedPartyIDs_101);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_101);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1342004610}, NestedParties_NoNestedPartyIDs_101);
      all_values.push_back(NestedParties_NoNestedPartyIDs_101);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_2112547701"}, NstdPtysSubGrp_NoNestedPartySubIDs_206);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1934394200}, NstdPtysSubGrp_NoNestedPartySubIDs_206);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_102;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_255941881"}, NestedParties_NoNestedPartyIDs_102);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_102);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{672134309}, NestedParties_NoNestedPartyIDs_102);
      all_values.push_back(NestedParties_NoNestedPartyIDs_102);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1289801409"}, NstdPtysSubGrp_NoNestedPartySubIDs_207);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{884507830}, NstdPtysSubGrp_NoNestedPartySubIDs_207);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_359745655"}, NstdPtysSubGrp_NoNestedPartySubIDs_208);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{622654515}, NstdPtysSubGrp_NoNestedPartySubIDs_208);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1490202768"}, NstdPtysSubGrp_NoNestedPartySubIDs_209);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{1341541437}, NstdPtysSubGrp_NoNestedPartySubIDs_209);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("14558595");
set_field(noPositions_0_2, LongQty_5, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::PosQtyStatus{1}, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::PosType{"STRING_PIT"}, PositionQty_NoPositions_5);
    set_field(noPositions_0_2, FIX::QuantityDate{"LOCALMKTDATE_1260734368"}, PositionQty_NoPositions_5);
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("17634057");
set_field(noPositions_0_2, ShortQty_5, PositionQty_NoPositions_5);
    all_values.push_back(PositionQty_NoPositions_5);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_103;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1328340127"}, NestedParties_NoNestedPartyIDs_103);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_103);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1203394}, NestedParties_NoNestedPartyIDs_103);
      all_values.push_back(NestedParties_NoNestedPartyIDs_103);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_132492855"}, NstdPtysSubGrp_NoNestedPartySubIDs_210);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{853140123}, NstdPtysSubGrp_NoNestedPartySubIDs_210);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1861953560"}, NstdPtysSubGrp_NoNestedPartySubIDs_211);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1446762872}, NstdPtysSubGrp_NoNestedPartySubIDs_211);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_104;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_852610575"}, NestedParties_NoNestedPartyIDs_104);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_104);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{2114107514}, NestedParties_NoNestedPartyIDs_104);
      all_values.push_back(NestedParties_NoNestedPartyIDs_104);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_948590765"}, NstdPtysSubGrp_NoNestedPartySubIDs_212);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{2079171567}, NstdPtysSubGrp_NoNestedPartySubIDs_212);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_1981525737"}, NstdPtysSubGrp_NoNestedPartySubIDs_213);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{1204532646}, NstdPtysSubGrp_NoNestedPartySubIDs_213);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_105;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_768364541"}, NestedParties_NoNestedPartyIDs_105);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_105);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{1952110785}, NestedParties_NoNestedPartyIDs_105);
      all_values.push_back(NestedParties_NoNestedPartyIDs_105);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_1390684229"}, NstdPtysSubGrp_NoNestedPartySubIDs_214);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{164372792}, NstdPtysSubGrp_NoNestedPartySubIDs_214);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_533336818"}, NstdPtysSubGrp_NoNestedPartySubIDs_215);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{733403349}, NstdPtysSubGrp_NoNestedPartySubIDs_215);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
        set_field(noNestedPartySubIDs_2_2_2_2, FIX::NestedPartySubID{"STRING_1505914229"}, NstdPtysSubGrp_NoNestedPartySubIDs_216);
        set_field(noNestedPartySubIDs_2_2_2_2, FIX::NestedPartySubIDType{1989196375}, NstdPtysSubGrp_NoNestedPartySubIDs_216);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_17);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_17);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_18);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_18);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_19);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_19);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_39660050"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1696159103}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1639833257"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1901613611}, UnderlyingInstrument_86);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("9954383");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_86, UnderlyingInstrument_86);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("1.840000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_86, UnderlyingInstrument_86);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("15.550000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_962062194"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_392091721"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1355282320"}, UnderlyingInstrument_86);
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("8937501");
set_field(noUnderlyings_0_0, UnderlyingCapValue_86, UnderlyingInstrument_86);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("2261338");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_86);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("16621146");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{732310210}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_216958456"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1572796957"}, UnderlyingInstrument_86);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("44.390000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_381331248"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_86);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("18872454");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_86, UnderlyingInstrument_86);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("65.030000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_86, UnderlyingInstrument_86);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("5163588");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_86, UnderlyingInstrument_86);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("15598781");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_86, UnderlyingInstrument_86);
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("9028099");
set_field(noUnderlyings_0_0, UnderlyingEndValue_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2087209222}, UnderlyingInstrument_86);
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("1978842");
set_field(noUnderlyings_0_0, UnderlyingFXRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_86);
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("15033918");
set_field(noUnderlyings_0_0, UnderlyingFactor_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{984577400}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1225773576"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1052067278"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_476927009"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_979903539"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2047505606"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_821887194"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1386595094"}, UnderlyingInstrument_86);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("41.520000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_86);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("37.660000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1755834265"}, UnderlyingInstrument_86);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("14401127");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1006725085}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1270465272}, UnderlyingInstrument_86);
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("249392");
set_field(noUnderlyings_0_0, UnderlyingPx_86, UnderlyingInstrument_86);
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("12236835");
set_field(noUnderlyings_0_0, UnderlyingQty_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_695778582"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_450080"}, UnderlyingInstrument_86);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("47.900000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{654428709}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_709364221"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1344776620"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_454791564"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1225723047"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_757171146"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1357601515"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1165448621"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_955055412"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_396231392"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_86);
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("19396328");
set_field(noUnderlyings_0_0, UnderlyingStartValue_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1622004968"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_86);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("4544248");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1473446032"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1090963368"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1841019953"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_188046536"}, UnderlyingInstrument_86);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("1574586");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_86, UnderlyingInstrument_86);
    all_values.push_back(UnderlyingInstrument_86);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1943880801"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1597571362"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1294655157"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1066862426"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1622510650"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_370855051"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1622960730"}, UnderlyingStipulations_NoUnderlyingStips_174);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1975869841"}, UnderlyingStipulations_NoUnderlyingStips_174);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_269586069"}, UnderlyingStipulations_NoUnderlyingStips_175);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_184841303"}, UnderlyingStipulations_NoUnderlyingStips_175);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_175);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1173162813"}, UnderlyingStipulations_NoUnderlyingStips_176);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_724377634"}, UnderlyingStipulations_NoUnderlyingStips_176);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_176);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1930333959"}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{428529324}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_330726893"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{949886120}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_530054888"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1952731862}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_375826546"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{799131062}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_259673073"}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1890094430}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2037319114"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2047553066}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_241139451"}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1497640780}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_753095045"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{972667782}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1906649659"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{368252405}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_448144865"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1735035852}, UnderlyingInstrument_87);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("6378384");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_87, UnderlyingInstrument_87);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("61.680000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_87, UnderlyingInstrument_87);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("50.170000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1362216109"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_2043550519"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_543565329"}, UnderlyingInstrument_87);
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("12967116");
set_field(noUnderlyings_0_1, UnderlyingCapValue_87, UnderlyingInstrument_87);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("3245961");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_87);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("16274385");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1274482315}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1811525941"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1432686717"}, UnderlyingInstrument_87);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("88.610000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_463173356"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_87);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("2057841");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_87, UnderlyingInstrument_87);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("91.700000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_87, UnderlyingInstrument_87);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("12419332");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_87, UnderlyingInstrument_87);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("1058535");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_87, UnderlyingInstrument_87);
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("18867086");
set_field(noUnderlyings_0_1, UnderlyingEndValue_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{928165876}, UnderlyingInstrument_87);
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("16034943");
set_field(noUnderlyings_0_1, UnderlyingFXRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_87);
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("16812609");
set_field(noUnderlyings_0_1, UnderlyingFactor_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{428678471}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1034185593"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2049513327"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_876823336"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_621737797"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_539868154"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1509809504"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1382452815"}, UnderlyingInstrument_87);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("42.630000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_87);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("81.440000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1051312225"}, UnderlyingInstrument_87);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("17304725");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1060005549}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{531267081}, UnderlyingInstrument_87);
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("8574712");
set_field(noUnderlyings_0_1, UnderlyingPx_87, UnderlyingInstrument_87);
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("7240478");
set_field(noUnderlyings_0_1, UnderlyingQty_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1963953798"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_360296450"}, UnderlyingInstrument_87);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("11.980000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1508829941}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1712394241"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1393005337"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1006915463"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_806843850"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1498858893"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_746140436"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1735009727"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_954869582"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2021160018"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_87);
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("13835480");
set_field(noUnderlyings_0_1, UnderlyingStartValue_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_907861963"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_87);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("15295997");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_87, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1710684835"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1622697245"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_764568927"}, UnderlyingInstrument_87);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1465285450"}, UnderlyingInstrument_87);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("8810899");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_87, UnderlyingInstrument_87);
    all_values.push_back(UnderlyingInstrument_87);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_369114028"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_464078895"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1603108972"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_900381109"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_179673167"}, UnderlyingStipulations_NoUnderlyingStips_177);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_716851259"}, UnderlyingStipulations_NoUnderlyingStips_177);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1366894365"}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1246757177}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1085113016"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2053601027}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2111274948"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1831253453}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1641127106"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{918660882}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1704929823"}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{154725287}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1933247140"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{267613028}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1994907898"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1496448327}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1890310273"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{611993178}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_814250129"}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1155096601}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1087995494"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{610721926}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_88;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_2083745266"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{262061979}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_790395093"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{653112878}, UnderlyingInstrument_88);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
    UnderlyingAdjustedQuantity_88.setString("19439085");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_88, UnderlyingInstrument_88);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
    UnderlyingAllocationPercent_88.setString("58.100000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_88, UnderlyingInstrument_88);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
    UnderlyingAttachmentPoint_88.setString("4.310000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1043182091"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_622221865"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1816423447"}, UnderlyingInstrument_88);
    FIX::UnderlyingCapValue UnderlyingCapValue_88;
    UnderlyingCapValue_88.setString("9492994");
set_field(noUnderlyings_0_2, UnderlyingCapValue_88, UnderlyingInstrument_88);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
    UnderlyingCashAmount_88.setString("5860131");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_88);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
    UnderlyingContractMultiplier_88.setString("4429429");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1504674047}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1057639427"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1205373389"}, UnderlyingInstrument_88);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
    UnderlyingCouponRate_88.setString("93.340000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1522947565"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_88);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
    UnderlyingCurrentValue_88.setString("13703718");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_88, UnderlyingInstrument_88);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
    UnderlyingDetachmentPoint_88.setString("15.600000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_88, UnderlyingInstrument_88);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
    UnderlyingDirtyPrice_88.setString("16698389");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_88, UnderlyingInstrument_88);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
    UnderlyingEndPrice_88.setString("19823649");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_88, UnderlyingInstrument_88);
    FIX::UnderlyingEndValue UnderlyingEndValue_88;
    UnderlyingEndValue_88.setString("11543516");
set_field(noUnderlyings_0_2, UnderlyingEndValue_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{146271938}, UnderlyingInstrument_88);
    FIX::UnderlyingFXRate UnderlyingFXRate_88;
    UnderlyingFXRate_88.setString("9899779");
set_field(noUnderlyings_0_2, UnderlyingFXRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_88);
    FIX::UnderlyingFactor UnderlyingFactor_88;
    UnderlyingFactor_88.setString("12342674");
set_field(noUnderlyings_0_2, UnderlyingFactor_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1600699873}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_126493817"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1496329411"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_243611318"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_779606695"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1292754325"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_253417129"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1510917126"}, UnderlyingInstrument_88);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
    UnderlyingNotionalPercentageOutstanding_88.setString("27.690000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_88);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
    UnderlyingOriginalNotionalPercentageOutstanding_88.setString("69.260000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1137752240"}, UnderlyingInstrument_88);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
    UnderlyingPriceUnitOfMeasureQty_88.setString("14616521");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{532566530}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1580695169}, UnderlyingInstrument_88);
    FIX::UnderlyingPx UnderlyingPx_88;
    UnderlyingPx_88.setString("8188425");
set_field(noUnderlyings_0_2, UnderlyingPx_88, UnderlyingInstrument_88);
    FIX::UnderlyingQty UnderlyingQty_88;
    UnderlyingQty_88.setString("15902059");
set_field(noUnderlyings_0_2, UnderlyingQty_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_638584910"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_330758244"}, UnderlyingInstrument_88);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
    UnderlyingRepurchaseRate_88.setString("98.750000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1629721791}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_110286958"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_188558043"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1969823351"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1780125945"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_23439389"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_976691393"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1926397883"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1013417337"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1166923592"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_88);
    FIX::UnderlyingStartValue UnderlyingStartValue_88;
    UnderlyingStartValue_88.setString("4666335");
set_field(noUnderlyings_0_2, UnderlyingStartValue_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1293417409"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_88);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
    UnderlyingStrikePrice_88.setString("20730241");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1654781756"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_963662010"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1436457583"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1843234525"}, UnderlyingInstrument_88);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
    UnderlyingUnitOfMeasureQty_88.setString("18393010");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_88, UnderlyingInstrument_88);
    all_values.push_back(UnderlyingInstrument_88);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_833503117"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1153469515"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1001397392"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_266714638"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1972312073"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_444119702"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_155586669"}, UnderlyingStipulations_NoUnderlyingStips_178);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1409789577"}, UnderlyingStipulations_NoUnderlyingStips_178);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_387537692"}, UnderlyingStipulations_NoUnderlyingStips_179);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_265873627"}, UnderlyingStipulations_NoUnderlyingStips_179);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_179);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_209877396"}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1621787010}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1824913808"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{487720699}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_206008733"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{690611827}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_954354262"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1499426142}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1052639258"}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1424966599}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_480777505"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{713940535}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_255688243"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{172594861}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1182771396"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1089191360}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_65;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_6"}, header_65);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_36685140"}, header_65);
  set_header_field(msg.getHeader(), FIX::BodyLength{1355905998}, header_65);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1150892801"}, header_65);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_480804842"}, header_65);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_113721899"}, header_65);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1306479470"}, header_65);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1890594420}, header_65);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_65);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1572353097}, header_65);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1341458393"}, header_65);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_711136988"}, header_65);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1470869021"}, header_65);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(1, 41, 35, 2, 2, 2001)}, header_65);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_65);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_65);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1774952212"}, header_65);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{733139956}, header_65);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1304003985"}, header_65);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_108246069"}, header_65);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1447080491"}, header_65);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(10, 39, 40, 6, 5, 2004)}, header_65);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_610314459"}, header_65);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_999858222"}, header_65);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1971027838"}, header_65);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1916793929"}, header_65);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{742968994}, header_65);
  all_values.push_back(header_65);
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
