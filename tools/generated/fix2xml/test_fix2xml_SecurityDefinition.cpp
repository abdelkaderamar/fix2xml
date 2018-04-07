#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_998093760"}, SecurityDefinition_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_H"}, SecurityDefinition_0);
  set_field(msg, FIX::Currency{"CAN"}, SecurityDefinition_0);
  set_field(msg, FIX::EncodedText{"DATA_354996750"}, SecurityDefinition_0);
  set_field(msg, FIX::EncodedTextLen{2063502385}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityReportID{892846686}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1695831266"}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_1578190046"}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityResponseType{4}, SecurityDefinition_0);
  set_field(msg, FIX::Text{"STRING_1208237974"}, SecurityDefinition_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 45, 41, 0, 4, 2016)}, SecurityDefinition_0);
  all_values.push_back(SecurityDefinition_0);

  all_compo_names.insert("SecurityDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  set_field(msg, FIX::ApplID{"STRING_624101921"}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplLastSeqNum{1666866606}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplSeqNum{1144943934}, ApplicationSequenceControl_12);
  all_values.push_back(ApplicationSequenceControl_12);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_93;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_917448151"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1012419082}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1346235159"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1976251975}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_703998682"}, InstrumentLeg_93);
    FIX::LegContractMultiplier LegContractMultiplier_93;
    LegContractMultiplier_93.setString("15512010");
set_field(noLegs_0_0, LegContractMultiplier_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1573142845}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1055364553"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_401811176"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_47223003"}, InstrumentLeg_93);
    FIX::LegCouponRate LegCouponRate_93;
    LegCouponRate_93.setString("18.050000");
set_field(noLegs_0_0, LegCouponRate_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1937200219"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_682563257"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2098051019}, InstrumentLeg_93);
    FIX::LegFactor LegFactor_93;
    LegFactor_93.setString("10694669");
set_field(noLegs_0_0, LegFactor_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{155092176}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1158805345"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2136012155"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_934841454"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_441849962"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_455011628"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1424035419"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1164586889"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_748281486"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_93);
    FIX::LegOptionRatio LegOptionRatio_93;
    LegOptionRatio_93.setString("6839698");
set_field(noLegs_0_0, LegOptionRatio_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_535701327"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1045597627"}, InstrumentLeg_93);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
    LegPriceUnitOfMeasureQty_93.setString("20427546");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegProduct{1453149478}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2058016709}, InstrumentLeg_93);
    FIX::LegRatioQty LegRatioQty_93;
    LegRatioQty_93.setString("12415061");
set_field(noLegs_0_0, LegRatioQty_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1281917805"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_614531743"}, InstrumentLeg_93);
    FIX::LegRepurchaseRate LegRepurchaseRate_93;
    LegRepurchaseRate_93.setString("35.330000");
set_field(noLegs_0_0, LegRepurchaseRate_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{707577002}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1669896296"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1047034709"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_754800005"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1245154453"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_836751280"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1157019758"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1519314538"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_93);
    FIX::LegStrikePrice LegStrikePrice_93;
    LegStrikePrice_93.setString("16744067");
set_field(noLegs_0_0, LegStrikePrice_93, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_118908827"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1794426796"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_461764521"}, InstrumentLeg_93);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_560758790"}, InstrumentLeg_93);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
    LegUnitOfMeasureQty_93.setString("1019547");
set_field(noLegs_0_0, LegUnitOfMeasureQty_93, InstrumentLeg_93);
    all_values.push_back(InstrumentLeg_93);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1725345679"}, LegSecAltIDGrp_NoLegSecurityAltID_195);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_850236263"}, LegSecAltIDGrp_NoLegSecurityAltID_195);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_66;
  FIX::AttachmentPoint AttachmentPoint_66;
  AttachmentPoint_66.setString("36.320000");
set_field(msg, AttachmentPoint_66, Instrument_66);
  set_field(msg, FIX::CFICode{"STRING_261831879"}, Instrument_66);
  set_field(msg, FIX::CPProgram{99}, Instrument_66);
  set_field(msg, FIX::CPRegType{"STRING_684567611"}, Instrument_66);
  FIX::CapPrice CapPrice_66;
  CapPrice_66.setString("1571028");
set_field(msg, CapPrice_66, Instrument_66);
  FIX::ContractMultiplier ContractMultiplier_66;
  ContractMultiplier_66.setString("6916034");
set_field(msg, ContractMultiplier_66, Instrument_66);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_66);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1398608955"}, Instrument_66);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1973521226"}, Instrument_66);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1209632415"}, Instrument_66);
  FIX::CouponRate CouponRate_66;
  CouponRate_66.setString("24.880000");
set_field(msg, CouponRate_66, Instrument_66);
  set_field(msg, FIX::CreditRating{"STRING_533614581"}, Instrument_66);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_732045063"}, Instrument_66);
  FIX::DetachmentPoint DetachmentPoint_66;
  DetachmentPoint_66.setString("35.500000");
set_field(msg, DetachmentPoint_66, Instrument_66);
  set_field(msg, FIX::EncodedIssuer{"DATA_1288414586"}, Instrument_66);
  set_field(msg, FIX::EncodedIssuerLen{1977199517}, Instrument_66);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1780134830"}, Instrument_66);
  set_field(msg, FIX::EncodedSecurityDescLen{297950697}, Instrument_66);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_66);
  FIX::Factor Factor_66;
  Factor_66.setString("11519657");
set_field(msg, Factor_66, Instrument_66);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_66);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_66);
  FIX::FloorPrice FloorPrice_66;
  FloorPrice_66.setString("6788887");
set_field(msg, FloorPrice_66, Instrument_66);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_66);
  set_field(msg, FIX::InstrRegistry{"STRING_2018988654"}, Instrument_66);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_66);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2085205444"}, Instrument_66);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2120943431"}, Instrument_66);
  set_field(msg, FIX::Issuer{"STRING_878969600"}, Instrument_66);
  set_field(msg, FIX::ListMethod{0}, Instrument_66);
  set_field(msg, FIX::LocaleOfIssue{"STRING_823696047"}, Instrument_66);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_517939584"}, Instrument_66);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1924899355"}, Instrument_66);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_62149989"}, Instrument_66);
  FIX::MinPriceIncrement MinPriceIncrement_66;
  MinPriceIncrement_66.setString("12025071");
set_field(msg, MinPriceIncrement_66, Instrument_66);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
  MinPriceIncrementAmount_66.setString("20820021");
set_field(msg, MinPriceIncrementAmount_66, Instrument_66);
  set_field(msg, FIX::NTPositionLimit{753753410}, Instrument_66);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
  NotionalPercentageOutstanding_66.setString("78.680000");
set_field(msg, NotionalPercentageOutstanding_66, Instrument_66);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_66);
  FIX::OptPayoutAmount OptPayoutAmount_66;
  OptPayoutAmount_66.setString("5797909");
set_field(msg, OptPayoutAmount_66, Instrument_66);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_66);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
  OriginalNotionalPercentageOutstanding_66.setString("63.400000");
set_field(msg, OriginalNotionalPercentageOutstanding_66, Instrument_66);
  set_field(msg, FIX::Pool{"STRING_1113405570"}, Instrument_66);
  set_field(msg, FIX::PositionLimit{1591801699}, Instrument_66);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_66);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_254336508"}, Instrument_66);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
  PriceUnitOfMeasureQty_66.setString("14215175");
set_field(msg, PriceUnitOfMeasureQty_66, Instrument_66);
  set_field(msg, FIX::Product{2}, Instrument_66);
  set_field(msg, FIX::ProductComplex{"STRING_552287205"}, Instrument_66);
  set_field(msg, FIX::PutOrCall{1}, Instrument_66);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_809993145"}, Instrument_66);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1957825032"}, Instrument_66);
  FIX::RepurchaseRate RepurchaseRate_66;
  RepurchaseRate_66.setString("29.950000");
set_field(msg, RepurchaseRate_66, Instrument_66);
  set_field(msg, FIX::RepurchaseTerm{1488881932}, Instrument_66);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_66);
  set_field(msg, FIX::SecurityDesc{"STRING_2083731650"}, Instrument_66);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_482051592"}, Instrument_66);
  set_field(msg, FIX::SecurityGroup{"STRING_1272509835"}, Instrument_66);
  set_field(msg, FIX::SecurityID{"STRING_2057191433"}, Instrument_66);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_66);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_66);
  set_field(msg, FIX::SecuritySubType{"STRING_733403832"}, Instrument_66);
  set_field(msg, FIX::SecurityType{"STRING_BRIDGE"}, Instrument_66);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_66);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_66);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_933984324"}, Instrument_66);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_500027915"}, Instrument_66);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_66);
  FIX::StrikeMultiplier StrikeMultiplier_66;
  StrikeMultiplier_66.setString("18331554");
set_field(msg, StrikeMultiplier_66, Instrument_66);
  FIX::StrikePrice StrikePrice_66;
  StrikePrice_66.setString("21290982");
set_field(msg, StrikePrice_66, Instrument_66);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_66);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
  StrikePriceBoundaryPrecision_66.setString("81.060000");
set_field(msg, StrikePriceBoundaryPrecision_66, Instrument_66);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_66);
  FIX::StrikeValue StrikeValue_66;
  StrikeValue_66.setString("8881832");
set_field(msg, StrikeValue_66, Instrument_66);
  set_field(msg, FIX::Symbol{"STRING_940524348"}, Instrument_66);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_66);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_66);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_66);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_66);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
  UnitOfMeasureQty_66.setString("23982");
set_field(msg, UnitOfMeasureQty_66, Instrument_66);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_66);
  all_values.push_back(Instrument_66);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_138;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_138);
    FIX::ComplexEventPrice ComplexEventPrice_138;
    ComplexEventPrice_138.setString("7499432");
set_field(noComplexEvents_0_0, ComplexEventPrice_138, ComplexEvents_NoComplexEvents_138);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_138);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
    ComplexEventPriceBoundaryPrecision_138.setString("92.880000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_138, ComplexEvents_NoComplexEvents_138);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_138);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_138);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
    ComplexOptPayoutAmount_138.setString("20605807");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_138, ComplexEvents_NoComplexEvents_138);
    all_values.push_back(ComplexEvents_NoComplexEvents_138);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_287;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 46, 14, 16, 12, 2001)}, ComplexEventDates_NoComplexEventDates_287);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 56, 46, 5, 3, 2005)}, ComplexEventDates_NoComplexEventDates_287);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_287);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 14, 56)}, ComplexEventTimes_NoComplexEventTimes_580);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 26, 17)}, ComplexEventTimes_NoComplexEventTimes_580);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 50, 19)}, ComplexEventTimes_NoComplexEventTimes_581);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 12, 12)}, ComplexEventTimes_NoComplexEventTimes_581);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_288;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 58, 41, 2, 2, 2004)}, ComplexEventDates_NoComplexEventDates_288);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 10, 49, 26, 2, 2004)}, ComplexEventDates_NoComplexEventDates_288);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_288);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 38, 16)}, ComplexEventTimes_NoComplexEventTimes_582);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 34, 16)}, ComplexEventTimes_NoComplexEventTimes_582);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 58, 29)}, ComplexEventTimes_NoComplexEventTimes_583);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 34, 32)}, ComplexEventTimes_NoComplexEventTimes_583);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 22, 28)}, ComplexEventTimes_NoComplexEventTimes_584);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 42, 18)}, ComplexEventTimes_NoComplexEventTimes_584);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_139;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_139);
    FIX::ComplexEventPrice ComplexEventPrice_139;
    ComplexEventPrice_139.setString("9480695");
set_field(noComplexEvents_0_1, ComplexEventPrice_139, ComplexEvents_NoComplexEvents_139);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_139);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
    ComplexEventPriceBoundaryPrecision_139.setString("8.120000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_139, ComplexEvents_NoComplexEvents_139);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_139);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_139);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
    ComplexOptPayoutAmount_139.setString("6868398");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_139, ComplexEvents_NoComplexEvents_139);
    all_values.push_back(ComplexEvents_NoComplexEvents_139);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_289;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 46, 56, 26, 1, 2010)}, ComplexEventDates_NoComplexEventDates_289);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 2, 30, 2, 12, 2010)}, ComplexEventDates_NoComplexEventDates_289);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_289);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 40, 30)}, ComplexEventTimes_NoComplexEventTimes_585);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 12, 5)}, ComplexEventTimes_NoComplexEventTimes_585);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_290;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 4, 14, 15, 7, 2016)}, ComplexEventDates_NoComplexEventDates_290);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 36, 23, 0, 7, 2005)}, ComplexEventDates_NoComplexEventDates_290);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_290);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 51, 49)}, ComplexEventTimes_NoComplexEventTimes_586);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 45, 57)}, ComplexEventTimes_NoComplexEventTimes_586);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 30, 46)}, ComplexEventTimes_NoComplexEventTimes_587);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 50, 18)}, ComplexEventTimes_NoComplexEventTimes_587);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 23, 22)}, ComplexEventTimes_NoComplexEventTimes_588);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 32, 41)}, ComplexEventTimes_NoComplexEventTimes_588);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_291;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 4, 16, 15, 9, 2005)}, ComplexEventDates_NoComplexEventDates_291);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 56, 11, 13, 3, 2014)}, ComplexEventDates_NoComplexEventDates_291);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_291);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 24, 56)}, ComplexEventTimes_NoComplexEventTimes_589);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 46, 37)}, ComplexEventTimes_NoComplexEventTimes_589);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 0, 22)}, ComplexEventTimes_NoComplexEventTimes_590);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 46, 11)}, ComplexEventTimes_NoComplexEventTimes_590);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 7, 46)}, ComplexEventTimes_NoComplexEventTimes_591);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 43, 37)}, ComplexEventTimes_NoComplexEventTimes_591);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_135;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1621672239"}, EvntGrp_NoEvents_135);
    FIX::EventPx EventPx_135;
    EventPx_135.setString("392834");
set_field(noEvents_0_0, EventPx_135, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventText{"STRING_354544502"}, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 56, 51, 3, 10, 2005)}, EvntGrp_NoEvents_135);
    set_field(noEvents_0_0, FIX::EventType{11}, EvntGrp_NoEvents_135);
    all_values.push_back(EvntGrp_NoEvents_135);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_136;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1107484572"}, EvntGrp_NoEvents_136);
    FIX::EventPx EventPx_136;
    EventPx_136.setString("15961188");
set_field(noEvents_0_1, EventPx_136, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1948032828"}, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 40, 33, 6, 11, 2000)}, EvntGrp_NoEvents_136);
    set_field(noEvents_0_1, FIX::EventType{2}, EvntGrp_NoEvents_136);
    all_values.push_back(EvntGrp_NoEvents_136);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_137;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_151597876"}, EvntGrp_NoEvents_137);
    FIX::EventPx EventPx_137;
    EventPx_137.setString("7435428");
set_field(noEvents_0_2, EventPx_137, EvntGrp_NoEvents_137);
    set_field(noEvents_0_2, FIX::EventText{"STRING_72900341"}, EvntGrp_NoEvents_137);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(22, 20, 38, 16, 6, 2015)}, EvntGrp_NoEvents_137);
    set_field(noEvents_0_2, FIX::EventType{10}, EvntGrp_NoEvents_137);
    all_values.push_back(EvntGrp_NoEvents_137);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_126;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_72878803"}, InstrumentParties_NoInstrumentParties_126);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_126);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1667274376}, InstrumentParties_NoInstrumentParties_126);
    all_values.push_back(InstrumentParties_NoInstrumentParties_126);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_272169142"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1960377517}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1923680782"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2134092392}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_127;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_920378441"}, InstrumentParties_NoInstrumentParties_127);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_127);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1934641572}, InstrumentParties_NoInstrumentParties_127);
    all_values.push_back(InstrumentParties_NoInstrumentParties_127);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1442508948"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1520216205}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_2038344198"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1732299799}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_1566780691"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{2040449010}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_131;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1718378567"}, SecAltIDGrp_NoSecurityAltID_131);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_636508221"}, SecAltIDGrp_NoSecurityAltID_131);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_132;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1119274053"}, SecAltIDGrp_NoSecurityAltID_132);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1840994501"}, SecAltIDGrp_NoSecurityAltID_132);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_132;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1147095260"}, SecurityXML_132);
  set_field(msg, FIX::SecurityXMLLen{465195706}, SecurityXML_132);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_537844571"}, SecurityXML_132);
  all_values.push_back(SecurityXML_132);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_7;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_7);
  FIX::PctAtRisk PctAtRisk_7;
  PctAtRisk_7.setString("87.830000");
set_field(msg, PctAtRisk_7, InstrumentExtension_7);
  all_values.push_back(InstrumentExtension_7);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_11;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{28}, AttrbGrp_NoInstrAttrib_11);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1162982715"}, AttrbGrp_NoInstrAttrib_11);
    all_values.push_back(AttrbGrp_NoInstrAttrib_11);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_1916358635"}, MarketSegmentGrp_NoMarketSegments_2);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_682773443"}, MarketSegmentGrp_NoMarketSegments_2);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_4;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{2}, BaseTradingRules_4);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_4);
    FIX::MaxPriceVariation MaxPriceVariation_4;
    MaxPriceVariation_4.setString("4956673");
set_field(noMarketSegments_0_0, MaxPriceVariation_4, BaseTradingRules_4);
    FIX::MaxTradeVol MaxTradeVol_4;
    MaxTradeVol_4.setString("15674999");
set_field(noMarketSegments_0_0, MaxTradeVol_4, BaseTradingRules_4);
    FIX::MinTradeVol MinTradeVol_4;
    MinTradeVol_4.setString("276528");
set_field(noMarketSegments_0_0, MinTradeVol_4, BaseTradingRules_4);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{0}, BaseTradingRules_4);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{2}, BaseTradingRules_4);
    set_field(noMarketSegments_0_0, FIX::PriceType{3}, BaseTradingRules_4);
    FIX::RoundLot RoundLot_4;
    RoundLot_4.setString("15477805");
set_field(noMarketSegments_0_0, RoundLot_4, BaseTradingRules_4);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"CHF"}, BaseTradingRules_4);
    all_values.push_back(BaseTradingRules_4);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_8;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_8);
      FIX::MinLotSize MinLotSize_8;
      MinLotSize_8.setString("7543240");
set_field(noLotTypeRules_0_1_0, MinLotSize_8, LotTypeRules_NoLotTypeRules_8);
      all_values.push_back(LotTypeRules_NoLotTypeRules_8);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_4;
    FIX::HighLimitPrice HighLimitPrice_4;
    HighLimitPrice_4.setString("13316065");
set_field(noMarketSegments_0_0, HighLimitPrice_4, PriceLimits_4);
    FIX::LowLimitPrice LowLimitPrice_4;
    LowLimitPrice_4.setString("7185474");
set_field(noMarketSegments_0_0, LowLimitPrice_4, PriceLimits_4);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{2}, PriceLimits_4);
    FIX::TradingReferencePrice TradingReferencePrice_4;
    TradingReferencePrice_4.setString("19681147");
set_field(noMarketSegments_0_0, TradingReferencePrice_4, PriceLimits_4);
    all_values.push_back(PriceLimits_4);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_7;
      FIX::EndTickPriceRange EndTickPriceRange_7;
      EndTickPriceRange_7.setString("187298");
set_field(noTickRules_0_1_0, EndTickPriceRange_7, TickRules_NoTickRules_7);
      FIX::StartTickPriceRange StartTickPriceRange_7;
      StartTickPriceRange_7.setString("9677263");
set_field(noTickRules_0_1_0, StartTickPriceRange_7, TickRules_NoTickRules_7);
      FIX::TickIncrement TickIncrement_7;
      TickIncrement_7.setString("1555335");
set_field(noTickRules_0_1_0, TickIncrement_7, TickRules_NoTickRules_7);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_7);
      all_values.push_back(TickRules_NoTickRules_7);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("3949402");
set_field(noTickRules_0_1_1, EndTickPriceRange_8, TickRules_NoTickRules_8);
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("18660923");
set_field(noTickRules_0_1_1, StartTickPriceRange_8, TickRules_NoTickRules_8);
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("14129412");
set_field(noTickRules_0_1_1, TickIncrement_8, TickRules_NoTickRules_8);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{2}, TickRules_NoTickRules_8);
      all_values.push_back(TickRules_NoTickRules_8);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_9;
      FIX::EndTickPriceRange EndTickPriceRange_9;
      EndTickPriceRange_9.setString("8815914");
set_field(noTickRules_0_1_2, EndTickPriceRange_9, TickRules_NoTickRules_9);
      FIX::StartTickPriceRange StartTickPriceRange_9;
      StartTickPriceRange_9.setString("1947033");
set_field(noTickRules_0_1_2, StartTickPriceRange_9, TickRules_NoTickRules_9);
      FIX::TickIncrement TickIncrement_9;
      TickIncrement_9.setString("579148");
set_field(noTickRules_0_1_2, TickIncrement_9, TickRules_NoTickRules_9);
      set_field(noTickRules_0_1_2, FIX::TickRuleType{1}, TickRules_NoTickRules_9);
      all_values.push_back(TickRules_NoTickRules_9);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{98958969}, NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_2060032193"}, NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1406022510}, NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_126611843"}, NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_5);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_5);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_14;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_14);
        all_values.push_back(ExecInstRules_NoExecInstRules_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_15;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_15);
        all_values.push_back(ExecInstRules_NoExecInstRules_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_10);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_2030773691"}, MarketDataFeedTypes_NoMDFeedTypes_10);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1351655257}, MarketDataFeedTypes_NoMDFeedTypes_10);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_11);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_208509009"}, MarketDataFeedTypes_NoMDFeedTypes_11);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{1172286340}, MarketDataFeedTypes_NoMDFeedTypes_11);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_12;
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_12);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDFeedType{"STRING_227238828"}, MarketDataFeedTypes_NoMDFeedTypes_12);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MarketDepth{2140012683}, MarketDataFeedTypes_NoMDFeedTypes_12);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_783813218"}, MatchRules_NoMatchRules_11);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_S3"}, MatchRules_NoMatchRules_11);
        all_values.push_back(MatchRules_NoMatchRules_11);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_93430222"}, MatchRules_NoMatchRules_12);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_M5"}, MatchRules_NoMatchRules_12);
        all_values.push_back(MatchRules_NoMatchRules_12);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_14;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'D'}, OrdTypeRules_NoOrdTypeRules_14);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_15;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'E'}, OrdTypeRules_NoOrdTypeRules_15);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        set_field(noOrdTypeRules_0_0_2_2, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_16);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_18;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_18);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("3044514");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_4, StrikeRules_NoStrikeRules_4);
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("14885191");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_4, StrikeRules_NoStrikeRules_4);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{959994761}, StrikeRules_NoStrikeRules_4);
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("16330457");
set_field(noStrikeRules_0_1_0, StrikeIncrement_4, StrikeRules_NoStrikeRules_4);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_1539390353"}, StrikeRules_NoStrikeRules_4);
      all_values.push_back(StrikeRules_NoStrikeRules_4);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_214453338"}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{30383400}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1488021693"}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_2061157091"}, MaturityRules_NoMaturityRules_7);
        all_values.push_back(MaturityRules_NoMaturityRules_7);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1586157342"}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{122182452}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_88775984"}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_349421280"}, MaturityRules_NoMaturityRules_8);
        all_values.push_back(MaturityRules_NoMaturityRules_8);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        set_field(noMaturityRules_0_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_603489069"}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrement{1133234499}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityRuleID{"STRING_557027704"}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_0_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1182505341"}, MaturityRules_NoMaturityRules_9);
        all_values.push_back(MaturityRules_NoMaturityRules_9);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    set_field(noMarketSegments_0_1, FIX::MarketID{"EXCHANGE_1667467437"}, MarketSegmentGrp_NoMarketSegments_3);
    set_field(noMarketSegments_0_1, FIX::MarketSegmentID{"STRING_1532049365"}, MarketSegmentGrp_NoMarketSegments_3);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_5;
    set_field(noMarketSegments_0_1, FIX::ExpirationCycle{1}, BaseTradingRules_5);
    set_field(noMarketSegments_0_1, FIX::ImpliedMarketIndicator{3}, BaseTradingRules_5);
    FIX::MaxPriceVariation MaxPriceVariation_5;
    MaxPriceVariation_5.setString("19239522");
set_field(noMarketSegments_0_1, MaxPriceVariation_5, BaseTradingRules_5);
    FIX::MaxTradeVol MaxTradeVol_5;
    MaxTradeVol_5.setString("15089761");
set_field(noMarketSegments_0_1, MaxTradeVol_5, BaseTradingRules_5);
    FIX::MinTradeVol MinTradeVol_5;
    MinTradeVol_5.setString("10877906");
set_field(noMarketSegments_0_1, MinTradeVol_5, BaseTradingRules_5);
    set_field(noMarketSegments_0_1, FIX::MultilegModel{0}, BaseTradingRules_5);
    set_field(noMarketSegments_0_1, FIX::MultilegPriceMethod{4}, BaseTradingRules_5);
    set_field(noMarketSegments_0_1, FIX::PriceType{13}, BaseTradingRules_5);
    FIX::RoundLot RoundLot_5;
    RoundLot_5.setString("17139657");
set_field(noMarketSegments_0_1, RoundLot_5, BaseTradingRules_5);
    set_field(noMarketSegments_0_1, FIX::TradingCurrency{"GBP"}, BaseTradingRules_5);
    all_values.push_back(BaseTradingRules_5);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_9;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_9);
      FIX::MinLotSize MinLotSize_9;
      MinLotSize_9.setString("8321025");
set_field(noLotTypeRules_1_1_0, MinLotSize_9, LotTypeRules_NoLotTypeRules_9);
      all_values.push_back(LotTypeRules_NoLotTypeRules_9);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_10;
      set_field(noLotTypeRules_1_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_10);
      FIX::MinLotSize MinLotSize_10;
      MinLotSize_10.setString("12600755");
set_field(noLotTypeRules_1_1_1, MinLotSize_10, LotTypeRules_NoLotTypeRules_10);
      all_values.push_back(LotTypeRules_NoLotTypeRules_10);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_5;
    FIX::HighLimitPrice HighLimitPrice_5;
    HighLimitPrice_5.setString("7457760");
set_field(noMarketSegments_0_1, HighLimitPrice_5, PriceLimits_5);
    FIX::LowLimitPrice LowLimitPrice_5;
    LowLimitPrice_5.setString("16015949");
set_field(noMarketSegments_0_1, LowLimitPrice_5, PriceLimits_5);
    set_field(noMarketSegments_0_1, FIX::PriceLimitType{1}, PriceLimits_5);
    FIX::TradingReferencePrice TradingReferencePrice_5;
    TradingReferencePrice_5.setString("8679584");
set_field(noMarketSegments_0_1, TradingReferencePrice_5, PriceLimits_5);
    all_values.push_back(PriceLimits_5);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_10;
      FIX::EndTickPriceRange EndTickPriceRange_10;
      EndTickPriceRange_10.setString("12183396");
set_field(noTickRules_1_1_0, EndTickPriceRange_10, TickRules_NoTickRules_10);
      FIX::StartTickPriceRange StartTickPriceRange_10;
      StartTickPriceRange_10.setString("12173797");
set_field(noTickRules_1_1_0, StartTickPriceRange_10, TickRules_NoTickRules_10);
      FIX::TickIncrement TickIncrement_10;
      TickIncrement_10.setString("6685603");
set_field(noTickRules_1_1_0, TickIncrement_10, TickRules_NoTickRules_10);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{4}, TickRules_NoTickRules_10);
      all_values.push_back(TickRules_NoTickRules_10);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{1659518690}, NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_91481175"}, NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribType{1385635942}, NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribValue{"STRING_1179502479"}, NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_6);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_7"}, TradingSessionRulesGrp_NoTradingSessionRules_6);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_16;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_16);
        all_values.push_back(ExecInstRules_NoExecInstRules_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_17;
        set_field(noExecInstRules_1_0_2_1, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_17);
        all_values.push_back(ExecInstRules_NoExecInstRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_18;
        set_field(noExecInstRules_1_0_2_2, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_18);
        all_values.push_back(ExecInstRules_NoExecInstRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_13;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_13);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1047401342"}, MarketDataFeedTypes_NoMDFeedTypes_13);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{1118054376}, MarketDataFeedTypes_NoMDFeedTypes_13);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_14);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_828336821"}, MarketDataFeedTypes_NoMDFeedTypes_14);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{890108262}, MarketDataFeedTypes_NoMDFeedTypes_14);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_15);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDFeedType{"STRING_843774385"}, MarketDataFeedTypes_NoMDFeedTypes_15);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MarketDepth{2700193}, MarketDataFeedTypes_NoMDFeedTypes_15);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_297885643"}, MatchRules_NoMatchRules_13);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_13);
        all_values.push_back(MatchRules_NoMatchRules_13);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        set_field(noMatchRules_1_0_2_1, FIX::MatchAlgorithm{"STRING_1374591586"}, MatchRules_NoMatchRules_14);
        set_field(noMatchRules_1_0_2_1, FIX::MatchType{"STRING_5"}, MatchRules_NoMatchRules_14);
        all_values.push_back(MatchRules_NoMatchRules_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'A'}, OrdTypeRules_NoOrdTypeRules_17);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_18;
        set_field(noOrdTypeRules_1_0_2_1, FIX::OrdType{'C'}, OrdTypeRules_NoOrdTypeRules_18);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_19;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_19);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_20;
        set_field(noTimeInForceRules_1_0_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_20);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_21;
        set_field(noTimeInForceRules_1_0_2_2, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_21);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_7);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_7);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_19;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'5'}, ExecInstRules_NoExecInstRules_19);
        all_values.push_back(ExecInstRules_NoExecInstRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_16);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_576526665"}, MarketDataFeedTypes_NoMDFeedTypes_16);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{1383698619}, MarketDataFeedTypes_NoMDFeedTypes_16);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_1452662648"}, MatchRules_NoMatchRules_15);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_S1"}, MatchRules_NoMatchRules_15);
        all_values.push_back(MatchRules_NoMatchRules_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        set_field(noMatchRules_1_1_2_1, FIX::MatchAlgorithm{"STRING_1085937421"}, MatchRules_NoMatchRules_16);
        set_field(noMatchRules_1_1_2_1, FIX::MatchType{"STRING_S3"}, MatchRules_NoMatchRules_16);
        all_values.push_back(MatchRules_NoMatchRules_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_19;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_19);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_22;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_22);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      set_field(noTradingSessionRules_1_1_2, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_8);
      set_field(noTradingSessionRules_1_1_2, FIX::TradingSessionSubID{"STRING_7"}, TradingSessionRulesGrp_NoTradingSessionRules_8);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_20;
        set_field(noExecInstRules_1_2_2_0, FIX::ExecInstValue{'9'}, ExecInstRules_NoExecInstRules_20);
        all_values.push_back(ExecInstRules_NoExecInstRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        set_field(noMDFeedTypes_1_2_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_17);
        set_field(noMDFeedTypes_1_2_2_0, FIX::MDFeedType{"STRING_1271407559"}, MarketDataFeedTypes_NoMDFeedTypes_17);
        set_field(noMDFeedTypes_1_2_2_0, FIX::MarketDepth{503941862}, MarketDataFeedTypes_NoMDFeedTypes_17);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_18;
        set_field(noMDFeedTypes_1_2_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_18);
        set_field(noMDFeedTypes_1_2_2_1, FIX::MDFeedType{"STRING_155441210"}, MarketDataFeedTypes_NoMDFeedTypes_18);
        set_field(noMDFeedTypes_1_2_2_1, FIX::MarketDepth{241515167}, MarketDataFeedTypes_NoMDFeedTypes_18);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        set_field(noMatchRules_1_2_2_0, FIX::MatchAlgorithm{"STRING_698993551"}, MatchRules_NoMatchRules_17);
        set_field(noMatchRules_1_2_2_0, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_17);
        all_values.push_back(MatchRules_NoMatchRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        set_field(noMatchRules_1_2_2_1, FIX::MatchAlgorithm{"STRING_1059446861"}, MatchRules_NoMatchRules_18);
        set_field(noMatchRules_1_2_2_1, FIX::MatchType{"STRING_AQ"}, MatchRules_NoMatchRules_18);
        all_values.push_back(MatchRules_NoMatchRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_20;
        set_field(noOrdTypeRules_1_2_2_0, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_20);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_23;
        set_field(noTimeInForceRules_1_2_2_0, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_23);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_24;
        set_field(noTimeInForceRules_1_2_2_1, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_24);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("1193076");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_5, StrikeRules_NoStrikeRules_5);
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("14915548");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_5, StrikeRules_NoStrikeRules_5);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{30995055}, StrikeRules_NoStrikeRules_5);
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("12052450");
set_field(noStrikeRules_1_1_0, StrikeIncrement_5, StrikeRules_NoStrikeRules_5);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_1914788272"}, StrikeRules_NoStrikeRules_5);
      all_values.push_back(StrikeRules_NoStrikeRules_5);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_972035639"}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{965796440}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_249204445"}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1820258799"}, MaturityRules_NoMaturityRules_10);
        all_values.push_back(MaturityRules_NoMaturityRules_10);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("3435675");
set_field(noStrikeRules_1_1_1, EndStrikePxRange_6, StrikeRules_NoStrikeRules_6);
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("5500264");
set_field(noStrikeRules_1_1_1, StartStrikePxRange_6, StrikeRules_NoStrikeRules_6);
      set_field(noStrikeRules_1_1_1, FIX::StrikeExerciseStyle{1901829096}, StrikeRules_NoStrikeRules_6);
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("16149751");
set_field(noStrikeRules_1_1_1, StrikeIncrement_6, StrikeRules_NoStrikeRules_6);
      set_field(noStrikeRules_1_1_1, FIX::StrikeRuleID{"STRING_1053968336"}, StrikeRules_NoStrikeRules_6);
      all_values.push_back(StrikeRules_NoStrikeRules_6);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        set_field(noMaturityRules_1_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1770416361"}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrement{1454079710}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityRuleID{"STRING_1366053152"}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_366042924"}, MaturityRules_NoMaturityRules_11);
        all_values.push_back(MaturityRules_NoMaturityRules_11);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        set_field(noMaturityRules_1_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_596490988"}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrement{1975892155}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityRuleID{"STRING_822495718"}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_2014784404"}, MaturityRules_NoMaturityRules_12);
        all_values.push_back(MaturityRules_NoMaturityRules_12);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("2533145");
set_field(noStrikeRules_1_1_2, EndStrikePxRange_7, StrikeRules_NoStrikeRules_7);
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("9418033");
set_field(noStrikeRules_1_1_2, StartStrikePxRange_7, StrikeRules_NoStrikeRules_7);
      set_field(noStrikeRules_1_1_2, FIX::StrikeExerciseStyle{1358855652}, StrikeRules_NoStrikeRules_7);
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("2843095");
set_field(noStrikeRules_1_1_2, StrikeIncrement_7, StrikeRules_NoStrikeRules_7);
      set_field(noStrikeRules_1_1_2, FIX::StrikeRuleID{"STRING_2147048387"}, StrikeRules_NoStrikeRules_7);
      all_values.push_back(StrikeRules_NoStrikeRules_7);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        set_field(noMaturityRules_1_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_902276794"}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrement{59322891}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityRuleID{"STRING_406717348"}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_1_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_308527337"}, MaturityRules_NoMaturityRules_13);
        all_values.push_back(MaturityRules_NoMaturityRules_13);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_2);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_26;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_26);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_26);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1295193833"}, SpreadOrBenchmarkCurveData_26);
  FIX::BenchmarkPrice BenchmarkPrice_26;
  BenchmarkPrice_26.setString("2177764");
set_field(msg, BenchmarkPrice_26, SpreadOrBenchmarkCurveData_26);
  set_field(msg, FIX::BenchmarkPriceType{1912522147}, SpreadOrBenchmarkCurveData_26);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1575597267"}, SpreadOrBenchmarkCurveData_26);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1988192806"}, SpreadOrBenchmarkCurveData_26);
  FIX::Spread Spread_26;
  Spread_26.setString("10605220");
set_field(msg, Spread_26, SpreadOrBenchmarkCurveData_26);
  all_values.push_back(SpreadOrBenchmarkCurveData_26);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_40;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_LEAVEQTY"}, Stipulations_NoStipulations_40);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_279091507"}, Stipulations_NoStipulations_40);
    all_values.push_back(Stipulations_NoStipulations_40);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_41;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_LOT"}, Stipulations_NoStipulations_41);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_759126410"}, Stipulations_NoStipulations_41);
    all_values.push_back(Stipulations_NoStipulations_41);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_116;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1076644761"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{492179865}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1843311399"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{943945517}, UnderlyingInstrument_116);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
    UnderlyingAdjustedQuantity_116.setString("7454944");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_116, UnderlyingInstrument_116);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
    UnderlyingAllocationPercent_116.setString("10.930000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_116, UnderlyingInstrument_116);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
    UnderlyingAttachmentPoint_116.setString("75.220000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1029804000"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_637195833"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1281477799"}, UnderlyingInstrument_116);
    FIX::UnderlyingCapValue UnderlyingCapValue_116;
    UnderlyingCapValue_116.setString("19320807");
set_field(noUnderlyings_0_0, UnderlyingCapValue_116, UnderlyingInstrument_116);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
    UnderlyingCashAmount_116.setString("16087962");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_116);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
    UnderlyingContractMultiplier_116.setString("16526703");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2015513560}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1649328027"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1046035118"}, UnderlyingInstrument_116);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
    UnderlyingCouponRate_116.setString("48.530000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_360398190"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_116);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
    UnderlyingCurrentValue_116.setString("1254366");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_116, UnderlyingInstrument_116);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
    UnderlyingDetachmentPoint_116.setString("25.710000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_116, UnderlyingInstrument_116);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
    UnderlyingDirtyPrice_116.setString("6768004");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_116, UnderlyingInstrument_116);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
    UnderlyingEndPrice_116.setString("11859586");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_116, UnderlyingInstrument_116);
    FIX::UnderlyingEndValue UnderlyingEndValue_116;
    UnderlyingEndValue_116.setString("5040522");
set_field(noUnderlyings_0_0, UnderlyingEndValue_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{839435878}, UnderlyingInstrument_116);
    FIX::UnderlyingFXRate UnderlyingFXRate_116;
    UnderlyingFXRate_116.setString("14650502");
set_field(noUnderlyings_0_0, UnderlyingFXRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_116);
    FIX::UnderlyingFactor UnderlyingFactor_116;
    UnderlyingFactor_116.setString("15985622");
set_field(noUnderlyings_0_0, UnderlyingFactor_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{338382233}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_681449621"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2090742153"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_34209984"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1625395138"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_688752910"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_671841078"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1780712660"}, UnderlyingInstrument_116);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
    UnderlyingNotionalPercentageOutstanding_116.setString("69.110000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_116);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
    UnderlyingOriginalNotionalPercentageOutstanding_116.setString("68.110000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1503154057"}, UnderlyingInstrument_116);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
    UnderlyingPriceUnitOfMeasureQty_116.setString("7703494");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{108023854}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1008340790}, UnderlyingInstrument_116);
    FIX::UnderlyingPx UnderlyingPx_116;
    UnderlyingPx_116.setString("6383793");
set_field(noUnderlyings_0_0, UnderlyingPx_116, UnderlyingInstrument_116);
    FIX::UnderlyingQty UnderlyingQty_116;
    UnderlyingQty_116.setString("17573518");
set_field(noUnderlyings_0_0, UnderlyingQty_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2054375909"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1256694239"}, UnderlyingInstrument_116);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
    UnderlyingRepurchaseRate_116.setString("0.720000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{100637565}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_2092785537"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_95703114"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1869980136"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_622102344"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1281661807"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_226548742"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1461538222"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_599228360"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1978837249"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_116);
    FIX::UnderlyingStartValue UnderlyingStartValue_116;
    UnderlyingStartValue_116.setString("9376105");
set_field(noUnderlyings_0_0, UnderlyingStartValue_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_512803222"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_116);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
    UnderlyingStrikePrice_116.setString("21381983");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1544628279"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1643661656"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1771427373"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1115701542"}, UnderlyingInstrument_116);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
    UnderlyingUnitOfMeasureQty_116.setString("8052149");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_116, UnderlyingInstrument_116);
    all_values.push_back(UnderlyingInstrument_116);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_471371951"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1575564394"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1479712742"}, UnderlyingStipulations_NoUnderlyingStips_236);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_66460132"}, UnderlyingStipulations_NoUnderlyingStips_236);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_256542624"}, UnderlyingStipulations_NoUnderlyingStips_237);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1386605003"}, UnderlyingStipulations_NoUnderlyingStips_237);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_226809048"}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1268456261}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1209739056"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1890558605}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1604173970"}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1204613180}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1267641400"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2117230043}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_993529276"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1780444622}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_825621763"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1965349855}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_117;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1771159335"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{222766394}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1461527863"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1395103061}, UnderlyingInstrument_117);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
    UnderlyingAdjustedQuantity_117.setString("13384679");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_117, UnderlyingInstrument_117);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
    UnderlyingAllocationPercent_117.setString("91.350000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_117, UnderlyingInstrument_117);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
    UnderlyingAttachmentPoint_117.setString("35.980000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1809839888"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1694823529"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_432944341"}, UnderlyingInstrument_117);
    FIX::UnderlyingCapValue UnderlyingCapValue_117;
    UnderlyingCapValue_117.setString("11420689");
set_field(noUnderlyings_0_1, UnderlyingCapValue_117, UnderlyingInstrument_117);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
    UnderlyingCashAmount_117.setString("17612836");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_117);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
    UnderlyingContractMultiplier_117.setString("3811903");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{936954385}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_916296014"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1868432905"}, UnderlyingInstrument_117);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
    UnderlyingCouponRate_117.setString("69.980000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1238808176"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_117);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
    UnderlyingCurrentValue_117.setString("6954984");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_117, UnderlyingInstrument_117);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
    UnderlyingDetachmentPoint_117.setString("24.640000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_117, UnderlyingInstrument_117);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
    UnderlyingDirtyPrice_117.setString("10056151");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_117, UnderlyingInstrument_117);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
    UnderlyingEndPrice_117.setString("7514171");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_117, UnderlyingInstrument_117);
    FIX::UnderlyingEndValue UnderlyingEndValue_117;
    UnderlyingEndValue_117.setString("14871338");
set_field(noUnderlyings_0_1, UnderlyingEndValue_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{975361531}, UnderlyingInstrument_117);
    FIX::UnderlyingFXRate UnderlyingFXRate_117;
    UnderlyingFXRate_117.setString("17449464");
set_field(noUnderlyings_0_1, UnderlyingFXRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_117);
    FIX::UnderlyingFactor UnderlyingFactor_117;
    UnderlyingFactor_117.setString("18009832");
set_field(noUnderlyings_0_1, UnderlyingFactor_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1562812664}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_743770526"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2023749689"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_876856880"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_2138873587"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1214733977"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_996116015"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1925143537"}, UnderlyingInstrument_117);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
    UnderlyingNotionalPercentageOutstanding_117.setString("2.170000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_117);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
    UnderlyingOriginalNotionalPercentageOutstanding_117.setString("42.300000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2019159199"}, UnderlyingInstrument_117);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
    UnderlyingPriceUnitOfMeasureQty_117.setString("1572559");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{900091195}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{252865888}, UnderlyingInstrument_117);
    FIX::UnderlyingPx UnderlyingPx_117;
    UnderlyingPx_117.setString("10942102");
set_field(noUnderlyings_0_1, UnderlyingPx_117, UnderlyingInstrument_117);
    FIX::UnderlyingQty UnderlyingQty_117;
    UnderlyingQty_117.setString("18163872");
set_field(noUnderlyings_0_1, UnderlyingQty_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2121298793"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1152137293"}, UnderlyingInstrument_117);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
    UnderlyingRepurchaseRate_117.setString("17.380000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{904503459}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_953139249"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1603210236"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1123995923"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1958754385"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_207143769"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_463646139"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_786632268"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1952090227"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1583740977"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_117);
    FIX::UnderlyingStartValue UnderlyingStartValue_117;
    UnderlyingStartValue_117.setString("13674192");
set_field(noUnderlyings_0_1, UnderlyingStartValue_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_180027855"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_117);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
    UnderlyingStrikePrice_117.setString("1714177");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_117, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1531131933"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1092908490"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2096561331"}, UnderlyingInstrument_117);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_260738503"}, UnderlyingInstrument_117);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
    UnderlyingUnitOfMeasureQty_117.setString("16363643");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_117, UnderlyingInstrument_117);
    all_values.push_back(UnderlyingInstrument_117);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_132414054"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1793620296"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1059773109"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_385279943"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_728676670"}, UnderlyingStipulations_NoUnderlyingStips_238);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_359095088"}, UnderlyingStipulations_NoUnderlyingStips_238);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1892484236"}, UnderlyingStipulations_NoUnderlyingStips_239);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1636388408"}, UnderlyingStipulations_NoUnderlyingStips_239);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_698139838"}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{240110822}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1299258766"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{703756961}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1296042844"}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{140014291}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_323800941"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{320042146}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2052572715"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{420593416}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_491459941"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1436221000}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1513501907"}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1696959503}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_600219538"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1829373558}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_648519293"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1659992647}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_21;
  FIX::Yield Yield_21;
  Yield_21.setString("98.530000");
set_field(msg, Yield_21, YieldData_21);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1388866236"}, YieldData_21);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_241185669"}, YieldData_21);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
  YieldRedemptionPrice_21.setString("4262649");
set_field(msg, YieldRedemptionPrice_21, YieldData_21);
  set_field(msg, FIX::YieldRedemptionPriceType{1133866825}, YieldData_21);
  set_field(msg, FIX::YieldType{"STRING_AFTERTAX"}, YieldData_21);
  all_values.push_back(YieldData_21);
  all_compo_names.insert(".");


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
