#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_0;
  set_field(msg, FIX::Account{"STRING_324803782"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AccountType{8}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AcctIDSource{4}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AdjustmentType{2}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_665048751"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::ContraryInstructionIndicator{false}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::Currency{"CHF"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_2056187950"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::EncodedTextLen{742393761}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::OrigPosReqRefID{"STRING_1504775294"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosMaintAction{4}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_50567117"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosReqID{"STRING_101358265"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosTransType{2}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PriorSpreadIndicator{false}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlCurrency{"JPY"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlSessID{"STRING_ITD"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_817570830"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::Text{"STRING_35612934"}, PositionMaintenanceRequest_0);
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("5656721");
set_field(msg, ThresholdAmount_2, PositionMaintenanceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 56, 0, 3, 3, 2008)}, PositionMaintenanceRequest_0);
  all_values.push_back(PositionMaintenanceRequest_0);

  all_compo_names.insert("PositionMaintenanceRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_89;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_680069105"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1177141032}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1216322710"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{617012844}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_65598154"}, InstrumentLeg_89);
    FIX::LegContractMultiplier LegContractMultiplier_89;
    LegContractMultiplier_89.setString("18813714");
set_field(noLegs_0_0, LegContractMultiplier_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1369718339}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_851761053"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1547235746"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1278422641"}, InstrumentLeg_89);
    FIX::LegCouponRate LegCouponRate_89;
    LegCouponRate_89.setString("48.140000");
set_field(noLegs_0_0, LegCouponRate_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_904527392"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1005885657"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{944005947}, InstrumentLeg_89);
    FIX::LegFactor LegFactor_89;
    LegFactor_89.setString("2809453");
set_field(noLegs_0_0, LegFactor_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{263764259}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_698777951"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_364249274"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1081335089"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_734390885"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_929921430"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_252822211"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_229425477"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_2014646966"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_89);
    FIX::LegOptionRatio LegOptionRatio_89;
    LegOptionRatio_89.setString("3347745");
set_field(noLegs_0_0, LegOptionRatio_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1951747076"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2133952522"}, InstrumentLeg_89);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
    LegPriceUnitOfMeasureQty_89.setString("2094338");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegProduct{484332533}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1163609907}, InstrumentLeg_89);
    FIX::LegRatioQty LegRatioQty_89;
    LegRatioQty_89.setString("14257565");
set_field(noLegs_0_0, LegRatioQty_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1101345378"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1229208061"}, InstrumentLeg_89);
    FIX::LegRepurchaseRate LegRepurchaseRate_89;
    LegRepurchaseRate_89.setString("43.840000");
set_field(noLegs_0_0, LegRepurchaseRate_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{323580069}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2080969115"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_559396482"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1602002711"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1527640281"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1463923875"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_751999075"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_322325884"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_89);
    FIX::LegStrikePrice LegStrikePrice_89;
    LegStrikePrice_89.setString("5860901");
set_field(noLegs_0_0, LegStrikePrice_89, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_247299326"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1670073197"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1667425233"}, InstrumentLeg_89);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_981690212"}, InstrumentLeg_89);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
    LegUnitOfMeasureQty_89.setString("4525109");
set_field(noLegs_0_0, LegUnitOfMeasureQty_89, InstrumentLeg_89);
    all_values.push_back(InstrumentLeg_89);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1211115689"}, LegSecAltIDGrp_NoLegSecurityAltID_180);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_319674297"}, LegSecAltIDGrp_NoLegSecurityAltID_180);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1054379069"}, LegSecAltIDGrp_NoLegSecurityAltID_181);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1545890218"}, LegSecAltIDGrp_NoLegSecurityAltID_181);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_123937725"}, LegSecAltIDGrp_NoLegSecurityAltID_182);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1040847943"}, LegSecAltIDGrp_NoLegSecurityAltID_182);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_64;
  FIX::AttachmentPoint AttachmentPoint_64;
  AttachmentPoint_64.setString("40.780000");
set_field(msg, AttachmentPoint_64, Instrument_64);
  set_field(msg, FIX::CFICode{"STRING_608270259"}, Instrument_64);
  set_field(msg, FIX::CPProgram{99}, Instrument_64);
  set_field(msg, FIX::CPRegType{"STRING_1033597001"}, Instrument_64);
  FIX::CapPrice CapPrice_64;
  CapPrice_64.setString("17096156");
set_field(msg, CapPrice_64, Instrument_64);
  FIX::ContractMultiplier ContractMultiplier_64;
  ContractMultiplier_64.setString("12861822");
set_field(msg, ContractMultiplier_64, Instrument_64);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_64);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2033195706"}, Instrument_64);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1219667731"}, Instrument_64);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_605154219"}, Instrument_64);
  FIX::CouponRate CouponRate_64;
  CouponRate_64.setString("47.690000");
set_field(msg, CouponRate_64, Instrument_64);
  set_field(msg, FIX::CreditRating{"STRING_599824364"}, Instrument_64);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2069078094"}, Instrument_64);
  FIX::DetachmentPoint DetachmentPoint_64;
  DetachmentPoint_64.setString("1.970000");
set_field(msg, DetachmentPoint_64, Instrument_64);
  set_field(msg, FIX::EncodedIssuer{"DATA_1624702930"}, Instrument_64);
  set_field(msg, FIX::EncodedIssuerLen{243920331}, Instrument_64);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1788235220"}, Instrument_64);
  set_field(msg, FIX::EncodedSecurityDescLen{783043205}, Instrument_64);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_64);
  FIX::Factor Factor_64;
  Factor_64.setString("20355345");
set_field(msg, Factor_64, Instrument_64);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_64);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_64);
  FIX::FloorPrice FloorPrice_64;
  FloorPrice_64.setString("8697411");
set_field(msg, FloorPrice_64, Instrument_64);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_64);
  set_field(msg, FIX::InstrRegistry{"STRING_122715857"}, Instrument_64);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_64);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1077818030"}, Instrument_64);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1177094926"}, Instrument_64);
  set_field(msg, FIX::Issuer{"STRING_1479263370"}, Instrument_64);
  set_field(msg, FIX::ListMethod{1}, Instrument_64);
  set_field(msg, FIX::LocaleOfIssue{"STRING_70459222"}, Instrument_64);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1087103800"}, Instrument_64);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1810026014"}, Instrument_64);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_127433424"}, Instrument_64);
  FIX::MinPriceIncrement MinPriceIncrement_64;
  MinPriceIncrement_64.setString("21207008");
set_field(msg, MinPriceIncrement_64, Instrument_64);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
  MinPriceIncrementAmount_64.setString("13721580");
set_field(msg, MinPriceIncrementAmount_64, Instrument_64);
  set_field(msg, FIX::NTPositionLimit{1413615688}, Instrument_64);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
  NotionalPercentageOutstanding_64.setString("48.900000");
set_field(msg, NotionalPercentageOutstanding_64, Instrument_64);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_64);
  FIX::OptPayoutAmount OptPayoutAmount_64;
  OptPayoutAmount_64.setString("4857997");
set_field(msg, OptPayoutAmount_64, Instrument_64);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_64);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
  OriginalNotionalPercentageOutstanding_64.setString("11.830000");
set_field(msg, OriginalNotionalPercentageOutstanding_64, Instrument_64);
  set_field(msg, FIX::Pool{"STRING_1085624136"}, Instrument_64);
  set_field(msg, FIX::PositionLimit{545723556}, Instrument_64);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_64);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_562843418"}, Instrument_64);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
  PriceUnitOfMeasureQty_64.setString("7896438");
set_field(msg, PriceUnitOfMeasureQty_64, Instrument_64);
  set_field(msg, FIX::Product{6}, Instrument_64);
  set_field(msg, FIX::ProductComplex{"STRING_1345886623"}, Instrument_64);
  set_field(msg, FIX::PutOrCall{0}, Instrument_64);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_219133851"}, Instrument_64);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1651519377"}, Instrument_64);
  FIX::RepurchaseRate RepurchaseRate_64;
  RepurchaseRate_64.setString("64.230000");
set_field(msg, RepurchaseRate_64, Instrument_64);
  set_field(msg, FIX::RepurchaseTerm{1088874961}, Instrument_64);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_64);
  set_field(msg, FIX::SecurityDesc{"STRING_2092322280"}, Instrument_64);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1022248113"}, Instrument_64);
  set_field(msg, FIX::SecurityGroup{"STRING_1339997492"}, Instrument_64);
  set_field(msg, FIX::SecurityID{"STRING_1121933559"}, Instrument_64);
  set_field(msg, FIX::SecurityIDSource{"STRING_8"}, Instrument_64);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_64);
  set_field(msg, FIX::SecuritySubType{"STRING_1192392781"}, Instrument_64);
  set_field(msg, FIX::SecurityType{"STRING_FXNDF"}, Instrument_64);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_64);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_64);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1414348789"}, Instrument_64);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1428969969"}, Instrument_64);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_64);
  FIX::StrikeMultiplier StrikeMultiplier_64;
  StrikeMultiplier_64.setString("5393563");
set_field(msg, StrikeMultiplier_64, Instrument_64);
  FIX::StrikePrice StrikePrice_64;
  StrikePrice_64.setString("10717580");
set_field(msg, StrikePrice_64, Instrument_64);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_64);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
  StrikePriceBoundaryPrecision_64.setString("75.670000");
set_field(msg, StrikePriceBoundaryPrecision_64, Instrument_64);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_64);
  FIX::StrikeValue StrikeValue_64;
  StrikeValue_64.setString("4556926");
set_field(msg, StrikeValue_64, Instrument_64);
  set_field(msg, FIX::Symbol{"STRING_1827788947"}, Instrument_64);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_64);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_64);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_64);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_64);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
  UnitOfMeasureQty_64.setString("7175073");
set_field(msg, UnitOfMeasureQty_64, Instrument_64);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_64);
  all_values.push_back(Instrument_64);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_128;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_128);
    FIX::ComplexEventPrice ComplexEventPrice_128;
    ComplexEventPrice_128.setString("13193970");
set_field(noComplexEvents_0_0, ComplexEventPrice_128, ComplexEvents_NoComplexEvents_128);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_128);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
    ComplexEventPriceBoundaryPrecision_128.setString("87.080000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_128, ComplexEvents_NoComplexEvents_128);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_128);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_128);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
    ComplexOptPayoutAmount_128.setString("16064022");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_128, ComplexEvents_NoComplexEvents_128);
    all_values.push_back(ComplexEvents_NoComplexEvents_128);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_248;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 1, 27, 17, 8, 2004)}, ComplexEventDates_NoComplexEventDates_248);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 32, 41, 25, 8, 2010)}, ComplexEventDates_NoComplexEventDates_248);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_248);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 13, 50)}, ComplexEventTimes_NoComplexEventTimes_510);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 45, 56)}, ComplexEventTimes_NoComplexEventTimes_510);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 45, 17)}, ComplexEventTimes_NoComplexEventTimes_511);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 16, 45)}, ComplexEventTimes_NoComplexEventTimes_511);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 39, 47)}, ComplexEventTimes_NoComplexEventTimes_512);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 7, 37)}, ComplexEventTimes_NoComplexEventTimes_512);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_249;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 10, 6, 18, 2, 2015)}, ComplexEventDates_NoComplexEventDates_249);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 47, 23, 7, 2, 2009)}, ComplexEventDates_NoComplexEventDates_249);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_249);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 33, 52)}, ComplexEventTimes_NoComplexEventTimes_513);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 8, 40)}, ComplexEventTimes_NoComplexEventTimes_513);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 19, 31)}, ComplexEventTimes_NoComplexEventTimes_514);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 30, 12)}, ComplexEventTimes_NoComplexEventTimes_514);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 23, 4)}, ComplexEventTimes_NoComplexEventTimes_515);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 38, 45)}, ComplexEventTimes_NoComplexEventTimes_515);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_134;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2018707045"}, EvntGrp_NoEvents_134);
    FIX::EventPx EventPx_134;
    EventPx_134.setString("828900");
set_field(noEvents_0_0, EventPx_134, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1766815026"}, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 46, 0, 25, 12, 2008)}, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_134);
    all_values.push_back(EvntGrp_NoEvents_134);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_121;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1701013433"}, InstrumentParties_NoInstrumentParties_121);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_121);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{455706799}, InstrumentParties_NoInstrumentParties_121);
    all_values.push_back(InstrumentParties_NoInstrumentParties_121);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_123618348"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{295689822}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1461860025"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1092215413}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_575751192"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{2125958397}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_122;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1529114240"}, InstrumentParties_NoInstrumentParties_122);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_122);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{2067102912}, InstrumentParties_NoInstrumentParties_122);
    all_values.push_back(InstrumentParties_NoInstrumentParties_122);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1748243007"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{629078648}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_123;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_924007494"}, InstrumentParties_NoInstrumentParties_123);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_123);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{2023379903}, InstrumentParties_NoInstrumentParties_123);
    all_values.push_back(InstrumentParties_NoInstrumentParties_123);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_534896645"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1642711282}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_75544941"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{2058384435}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_597408960"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{27627974}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_132;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1682652851"}, SecAltIDGrp_NoSecurityAltID_132);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_251143378"}, SecAltIDGrp_NoSecurityAltID_132);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_112403336"}, SecAltIDGrp_NoSecurityAltID_133);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2128529506"}, SecAltIDGrp_NoSecurityAltID_133);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_134;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1952156811"}, SecAltIDGrp_NoSecurityAltID_134);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_341183853"}, SecAltIDGrp_NoSecurityAltID_134);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_128;
  set_field(msg, FIX::SecurityXML{"XMLDATA_436752657"}, SecurityXML_128);
  set_field(msg, FIX::SecurityXMLLen{545594385}, SecurityXML_128);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_464802201"}, SecurityXML_128);
  all_values.push_back(SecurityXML_128);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_108;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_2007454410"}, Parties_NoPartyIDs_108);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_108);
    set_field(noPartyIDs_0_0, FIX::PartyRole{16}, Parties_NoPartyIDs_108);
    all_values.push_back(Parties_NoPartyIDs_108);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_216;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_938648206"}, PtysSubGrp_NoPartySubIDs_216);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_216);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_216);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_217;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1905548424"}, PtysSubGrp_NoPartySubIDs_217);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_217);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_217);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_218;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1206642145"}, PtysSubGrp_NoPartySubIDs_218);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_218);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_218);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("16586487");
set_field(noPosAmt_0_0, PosAmt_12, PositionAmountData_NoPosAmt_12);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ACPN"}, PositionAmountData_NoPosAmt_12);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_249229441"}, PositionAmountData_NoPosAmt_12);
    all_values.push_back(PositionAmountData_NoPosAmt_12);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("19057509");
set_field(noPositions_0_0, LongQty_6, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::PosQtyStatus{1}, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::PosType{"STRING_XM"}, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_355676274"}, PositionQty_NoPositions_6);
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("3524023");
set_field(noPositions_0_0, ShortQty_6, PositionQty_NoPositions_6);
    all_values.push_back(PositionQty_NoPositions_6);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_106;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_2038329125"}, NestedParties_NoNestedPartyIDs_106);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_106);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{30253471}, NestedParties_NoNestedPartyIDs_106);
      all_values.push_back(NestedParties_NoNestedPartyIDs_106);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_408218898"}, NstdPtysSubGrp_NoNestedPartySubIDs_217);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{371437324}, NstdPtysSubGrp_NoNestedPartySubIDs_217);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_308643992"}, NstdPtysSubGrp_NoNestedPartySubIDs_218);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{953813284}, NstdPtysSubGrp_NoNestedPartySubIDs_218);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_107;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_836239525"}, NestedParties_NoNestedPartyIDs_107);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_107);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{813784046}, NestedParties_NoNestedPartyIDs_107);
      all_values.push_back(NestedParties_NoNestedPartyIDs_107);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_201796495"}, NstdPtysSubGrp_NoNestedPartySubIDs_219);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{652229558}, NstdPtysSubGrp_NoNestedPartySubIDs_219);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1184421698"}, NstdPtysSubGrp_NoNestedPartySubIDs_220);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1807679281}, NstdPtysSubGrp_NoNestedPartySubIDs_220);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_20;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_20);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_20);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_20);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_21);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_21);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_89;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1060477440"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1565124392}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_424064706"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{818744755}, UnderlyingInstrument_89);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
    UnderlyingAdjustedQuantity_89.setString("18898987");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_89, UnderlyingInstrument_89);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
    UnderlyingAllocationPercent_89.setString("72.810000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_89, UnderlyingInstrument_89);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
    UnderlyingAttachmentPoint_89.setString("10.290000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_94817483"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_298877416"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1065266507"}, UnderlyingInstrument_89);
    FIX::UnderlyingCapValue UnderlyingCapValue_89;
    UnderlyingCapValue_89.setString("6983632");
set_field(noUnderlyings_0_0, UnderlyingCapValue_89, UnderlyingInstrument_89);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
    UnderlyingCashAmount_89.setString("3291308");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_89);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
    UnderlyingContractMultiplier_89.setString("11065821");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{700568212}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1245801835"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2060395400"}, UnderlyingInstrument_89);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
    UnderlyingCouponRate_89.setString("77.370000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_139404658"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_89);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
    UnderlyingCurrentValue_89.setString("3412011");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_89, UnderlyingInstrument_89);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
    UnderlyingDetachmentPoint_89.setString("53.570000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_89, UnderlyingInstrument_89);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
    UnderlyingDirtyPrice_89.setString("8195192");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_89, UnderlyingInstrument_89);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
    UnderlyingEndPrice_89.setString("13967");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_89, UnderlyingInstrument_89);
    FIX::UnderlyingEndValue UnderlyingEndValue_89;
    UnderlyingEndValue_89.setString("17892196");
set_field(noUnderlyings_0_0, UnderlyingEndValue_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{533932033}, UnderlyingInstrument_89);
    FIX::UnderlyingFXRate UnderlyingFXRate_89;
    UnderlyingFXRate_89.setString("8682345");
set_field(noUnderlyings_0_0, UnderlyingFXRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_89);
    FIX::UnderlyingFactor UnderlyingFactor_89;
    UnderlyingFactor_89.setString("18498269");
set_field(noUnderlyings_0_0, UnderlyingFactor_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1246237484}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1499651245"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1267467728"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1670302190"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_170912352"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1009882855"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2051329471"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1345333381"}, UnderlyingInstrument_89);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
    UnderlyingNotionalPercentageOutstanding_89.setString("3.380000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_89);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
    UnderlyingOriginalNotionalPercentageOutstanding_89.setString("62.400000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1803063556"}, UnderlyingInstrument_89);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
    UnderlyingPriceUnitOfMeasureQty_89.setString("5318541");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1200274083}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{762162024}, UnderlyingInstrument_89);
    FIX::UnderlyingPx UnderlyingPx_89;
    UnderlyingPx_89.setString("12324223");
set_field(noUnderlyings_0_0, UnderlyingPx_89, UnderlyingInstrument_89);
    FIX::UnderlyingQty UnderlyingQty_89;
    UnderlyingQty_89.setString("2985922");
set_field(noUnderlyings_0_0, UnderlyingQty_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_675073777"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_621746428"}, UnderlyingInstrument_89);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
    UnderlyingRepurchaseRate_89.setString("69.280000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1401769576}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_256844010"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_779198082"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_633211285"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1076363290"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_780594868"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_274947330"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1610295323"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1648829433"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_714121134"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_89);
    FIX::UnderlyingStartValue UnderlyingStartValue_89;
    UnderlyingStartValue_89.setString("7475832");
set_field(noUnderlyings_0_0, UnderlyingStartValue_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_66288731"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_89);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
    UnderlyingStrikePrice_89.setString("2372010");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1442505595"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_174247635"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1582534465"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_399722285"}, UnderlyingInstrument_89);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
    UnderlyingUnitOfMeasureQty_89.setString("3769708");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_89, UnderlyingInstrument_89);
    all_values.push_back(UnderlyingInstrument_89);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_55302193"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_908825001"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_898441140"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_817464218"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_2141247340"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1197033410"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_615510121"}, UnderlyingStipulations_NoUnderlyingStips_180);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1635030339"}, UnderlyingStipulations_NoUnderlyingStips_180);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_872354131"}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1380035208}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1047339641"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1654982538}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1411529096"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{548685426}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_221620025"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{576684108}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1296268695"}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1009306849}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_525109840"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{304328796}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1740918142"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2107644305}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_704051082"}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1805811362}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_879230370"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{556768855}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1576817493"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{872994062}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_66;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_66);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_921871840"}, header_66);
  set_header_field(msg.getHeader(), FIX::BodyLength{1488504183}, header_66);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1241348956"}, header_66);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1668695763"}, header_66);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_213374666"}, header_66);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1508093729"}, header_66);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{901247324}, header_66);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_66);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{407949723}, header_66);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_408746214"}, header_66);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1426137536"}, header_66);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_956635149"}, header_66);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(20, 17, 16, 1, 1, 2008)}, header_66);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_66);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_66);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1403545493"}, header_66);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1873024724}, header_66);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1235930566"}, header_66);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1061873207"}, header_66);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_484894351"}, header_66);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(6, 5, 11, 20, 2, 2012)}, header_66);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_318825988"}, header_66);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_357312153"}, header_66);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_395066553"}, header_66);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1826919718"}, header_66);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1258559477}, header_66);
  all_values.push_back(header_66);
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
