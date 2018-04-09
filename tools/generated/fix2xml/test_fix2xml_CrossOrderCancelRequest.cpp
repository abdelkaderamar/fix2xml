#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CrossOrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_0;
  set_field(msg, FIX::CrossID{"STRING_1344568642"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::CrossPrioritization{1}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::CrossType{3}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::HostCrossID{"STRING_1162397926"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1390853121"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::OrigCrossID{"STRING_988276962"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(11, 59, 54, 3, 9, 2008)}, CrossOrderCancelRequest_0);
  all_values.push_back(CrossOrderCancelRequest_0);

  all_compo_names.insert("CrossOrderCancelRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1423280606"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{474865487}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2063033906"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1722398931}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_718869659"}, InstrumentLeg_24);
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("9155870");
set_field(noLegs_0_0, LegContractMultiplier_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2037374086}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_205348982"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1114043178"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_666402490"}, InstrumentLeg_24);
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("59.500000");
set_field(noLegs_0_0, LegCouponRate_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_158675135"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1245082848"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2144326663}, InstrumentLeg_24);
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("8034436");
set_field(noLegs_0_0, LegFactor_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{442167842}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1087680369"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_245253445"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1604565768"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_331049842"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1233530408"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2100794379"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1320727461"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_716074979"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_24);
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("119587");
set_field(noLegs_0_0, LegOptionRatio_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_175297739"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1967364111"}, InstrumentLeg_24);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("1124252");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegProduct{1598578346}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegPutOrCall{294745950}, InstrumentLeg_24);
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("279755");
set_field(noLegs_0_0, LegRatioQty_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1173493629"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1013615609"}, InstrumentLeg_24);
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("26.190000");
set_field(noLegs_0_0, LegRepurchaseRate_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1063384068}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1218964592"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_2057605798"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1729786558"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1257220542"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_68797285"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_306778777"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSide{'9'}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1313880133"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_24);
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("17560479");
set_field(noLegs_0_0, LegStrikePrice_24, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1391302161"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1991440423"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1213130096"}, InstrumentLeg_24);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1722352004"}, InstrumentLeg_24);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("10774871");
set_field(noLegs_0_0, LegUnitOfMeasureQty_24, InstrumentLeg_24);
    all_values.push_back(InstrumentLeg_24);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_895595817"}, LegSecAltIDGrp_NoLegSecurityAltID_51);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1793562163"}, LegSecAltIDGrp_NoLegSecurityAltID_51);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_17;
  FIX::AttachmentPoint AttachmentPoint_17;
  AttachmentPoint_17.setString("69.240000");
set_field(msg, AttachmentPoint_17, Instrument_17);
  set_field(msg, FIX::CFICode{"STRING_907554574"}, Instrument_17);
  set_field(msg, FIX::CPProgram{1}, Instrument_17);
  set_field(msg, FIX::CPRegType{"STRING_353787387"}, Instrument_17);
  FIX::CapPrice CapPrice_17;
  CapPrice_17.setString("10199798");
set_field(msg, CapPrice_17, Instrument_17);
  FIX::ContractMultiplier ContractMultiplier_17;
  ContractMultiplier_17.setString("14199546");
set_field(msg, ContractMultiplier_17, Instrument_17);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_17);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1047955357"}, Instrument_17);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_445964582"}, Instrument_17);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1662148946"}, Instrument_17);
  FIX::CouponRate CouponRate_17;
  CouponRate_17.setString("79.770000");
set_field(msg, CouponRate_17, Instrument_17);
  set_field(msg, FIX::CreditRating{"STRING_1509348650"}, Instrument_17);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_733629890"}, Instrument_17);
  FIX::DetachmentPoint DetachmentPoint_17;
  DetachmentPoint_17.setString("1.270000");
set_field(msg, DetachmentPoint_17, Instrument_17);
  set_field(msg, FIX::EncodedIssuer{"DATA_1091651560"}, Instrument_17);
  set_field(msg, FIX::EncodedIssuerLen{1990850432}, Instrument_17);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1970437412"}, Instrument_17);
  set_field(msg, FIX::EncodedSecurityDescLen{1398430338}, Instrument_17);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_17);
  FIX::Factor Factor_17;
  Factor_17.setString("11368338");
set_field(msg, Factor_17, Instrument_17);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_17);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_17);
  FIX::FloorPrice FloorPrice_17;
  FloorPrice_17.setString("7453982");
set_field(msg, FloorPrice_17, Instrument_17);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_17);
  set_field(msg, FIX::InstrRegistry{"STRING_228770265"}, Instrument_17);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_17);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_520739000"}, Instrument_17);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1306257448"}, Instrument_17);
  set_field(msg, FIX::Issuer{"STRING_977485500"}, Instrument_17);
  set_field(msg, FIX::ListMethod{1}, Instrument_17);
  set_field(msg, FIX::LocaleOfIssue{"STRING_952335963"}, Instrument_17);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1511392424"}, Instrument_17);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_176405744"}, Instrument_17);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_773712218"}, Instrument_17);
  FIX::MinPriceIncrement MinPriceIncrement_17;
  MinPriceIncrement_17.setString("18651798");
set_field(msg, MinPriceIncrement_17, Instrument_17);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
  MinPriceIncrementAmount_17.setString("11963855");
set_field(msg, MinPriceIncrementAmount_17, Instrument_17);
  set_field(msg, FIX::NTPositionLimit{46183170}, Instrument_17);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
  NotionalPercentageOutstanding_17.setString("95.000000");
set_field(msg, NotionalPercentageOutstanding_17, Instrument_17);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_17);
  FIX::OptPayoutAmount OptPayoutAmount_17;
  OptPayoutAmount_17.setString("4921477");
set_field(msg, OptPayoutAmount_17, Instrument_17);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_17);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
  OriginalNotionalPercentageOutstanding_17.setString("52.670000");
set_field(msg, OriginalNotionalPercentageOutstanding_17, Instrument_17);
  set_field(msg, FIX::Pool{"STRING_2001496402"}, Instrument_17);
  set_field(msg, FIX::PositionLimit{614524689}, Instrument_17);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_17);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_945664315"}, Instrument_17);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
  PriceUnitOfMeasureQty_17.setString("4578914");
set_field(msg, PriceUnitOfMeasureQty_17, Instrument_17);
  set_field(msg, FIX::Product{2}, Instrument_17);
  set_field(msg, FIX::ProductComplex{"STRING_196611005"}, Instrument_17);
  set_field(msg, FIX::PutOrCall{1}, Instrument_17);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_654835761"}, Instrument_17);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1898663135"}, Instrument_17);
  FIX::RepurchaseRate RepurchaseRate_17;
  RepurchaseRate_17.setString("51.230000");
set_field(msg, RepurchaseRate_17, Instrument_17);
  set_field(msg, FIX::RepurchaseTerm{1400233986}, Instrument_17);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_17);
  set_field(msg, FIX::SecurityDesc{"STRING_1857585388"}, Instrument_17);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1211278660"}, Instrument_17);
  set_field(msg, FIX::SecurityGroup{"STRING_1217789131"}, Instrument_17);
  set_field(msg, FIX::SecurityID{"STRING_1016359188"}, Instrument_17);
  set_field(msg, FIX::SecurityIDSource{"STRING_L"}, Instrument_17);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_17);
  set_field(msg, FIX::SecuritySubType{"STRING_1968695152"}, Instrument_17);
  set_field(msg, FIX::SecurityType{"STRING_REPO"}, Instrument_17);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_17);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_17);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1270369100"}, Instrument_17);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1859431626"}, Instrument_17);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_17);
  FIX::StrikeMultiplier StrikeMultiplier_17;
  StrikeMultiplier_17.setString("19562889");
set_field(msg, StrikeMultiplier_17, Instrument_17);
  FIX::StrikePrice StrikePrice_17;
  StrikePrice_17.setString("11332546");
set_field(msg, StrikePrice_17, Instrument_17);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_17);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
  StrikePriceBoundaryPrecision_17.setString("5.360000");
set_field(msg, StrikePriceBoundaryPrecision_17, Instrument_17);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_17);
  FIX::StrikeValue StrikeValue_17;
  StrikeValue_17.setString("21320180");
set_field(msg, StrikeValue_17, Instrument_17);
  set_field(msg, FIX::Symbol{"STRING_1592228634"}, Instrument_17);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_17);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_17);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_17);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_17);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
  UnitOfMeasureQty_17.setString("16864275");
set_field(msg, UnitOfMeasureQty_17, Instrument_17);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_17);
  all_values.push_back(Instrument_17);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_31;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexEventPrice ComplexEventPrice_31;
    ComplexEventPrice_31.setString("10178165");
set_field(noComplexEvents_0_0, ComplexEventPrice_31, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
    ComplexEventPriceBoundaryPrecision_31.setString("7.640000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_31, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
    ComplexOptPayoutAmount_31.setString("18942199");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_31, ComplexEvents_NoComplexEvents_31);
    all_values.push_back(ComplexEvents_NoComplexEvents_31);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_64;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 18, 40, 10, 8, 2008)}, ComplexEventDates_NoComplexEventDates_64);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 46, 48, 0, 11, 2001)}, ComplexEventDates_NoComplexEventDates_64);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_64);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 13, 38)}, ComplexEventTimes_NoComplexEventTimes_150);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 29, 16)}, ComplexEventTimes_NoComplexEventTimes_150);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 27, 2)}, ComplexEventTimes_NoComplexEventTimes_151);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 26, 56)}, ComplexEventTimes_NoComplexEventTimes_151);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 7, 56)}, ComplexEventTimes_NoComplexEventTimes_152);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 34, 28)}, ComplexEventTimes_NoComplexEventTimes_152);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_65;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 8, 38, 7, 9, 2011)}, ComplexEventDates_NoComplexEventDates_65);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 48, 14, 19, 7, 2007)}, ComplexEventDates_NoComplexEventDates_65);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_65);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 59, 54)}, ComplexEventTimes_NoComplexEventTimes_153);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 13, 45)}, ComplexEventTimes_NoComplexEventTimes_153);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 52, 12)}, ComplexEventTimes_NoComplexEventTimes_154);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 38, 6)}, ComplexEventTimes_NoComplexEventTimes_154);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_32;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexEventPrice ComplexEventPrice_32;
    ComplexEventPrice_32.setString("20062483");
set_field(noComplexEvents_0_1, ComplexEventPrice_32, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
    ComplexEventPriceBoundaryPrecision_32.setString("65.860000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_32, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
    ComplexOptPayoutAmount_32.setString("13488479");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_32, ComplexEvents_NoComplexEvents_32);
    all_values.push_back(ComplexEvents_NoComplexEvents_32);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_66;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 8, 48, 24, 4, 2008)}, ComplexEventDates_NoComplexEventDates_66);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 19, 43, 17, 8, 2014)}, ComplexEventDates_NoComplexEventDates_66);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_66);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 10, 39)}, ComplexEventTimes_NoComplexEventTimes_155);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 17, 28)}, ComplexEventTimes_NoComplexEventTimes_155);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 34, 6)}, ComplexEventTimes_NoComplexEventTimes_156);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 40, 18)}, ComplexEventTimes_NoComplexEventTimes_156);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 26, 13)}, ComplexEventTimes_NoComplexEventTimes_157);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 33, 55)}, ComplexEventTimes_NoComplexEventTimes_157);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_67;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 39, 28, 11, 12, 2005)}, ComplexEventDates_NoComplexEventDates_67);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 57, 9, 26, 11, 2006)}, ComplexEventDates_NoComplexEventDates_67);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_67);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 28, 21)}, ComplexEventTimes_NoComplexEventTimes_158);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 1, 1)}, ComplexEventTimes_NoComplexEventTimes_158);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_39;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1821327063"}, EvntGrp_NoEvents_39);
    FIX::EventPx EventPx_39;
    EventPx_39.setString("16917040");
set_field(noEvents_0_0, EventPx_39, EvntGrp_NoEvents_39);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1042198260"}, EvntGrp_NoEvents_39);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(6, 34, 49, 13, 7, 2004)}, EvntGrp_NoEvents_39);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_39);
    all_values.push_back(EvntGrp_NoEvents_39);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_40;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_725981842"}, EvntGrp_NoEvents_40);
    FIX::EventPx EventPx_40;
    EventPx_40.setString("10767185");
set_field(noEvents_0_1, EventPx_40, EvntGrp_NoEvents_40);
    set_field(noEvents_0_1, FIX::EventText{"STRING_356381252"}, EvntGrp_NoEvents_40);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(11, 30, 2, 9, 9, 2014)}, EvntGrp_NoEvents_40);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_40);
    all_values.push_back(EvntGrp_NoEvents_40);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_41;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1953458578"}, EvntGrp_NoEvents_41);
    FIX::EventPx EventPx_41;
    EventPx_41.setString("8164722");
set_field(noEvents_0_2, EventPx_41, EvntGrp_NoEvents_41);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1085303560"}, EvntGrp_NoEvents_41);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(9, 1, 4, 23, 1, 2007)}, EvntGrp_NoEvents_41);
    set_field(noEvents_0_2, FIX::EventType{4}, EvntGrp_NoEvents_41);
    all_values.push_back(EvntGrp_NoEvents_41);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_34;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1467117301"}, InstrumentParties_NoInstrumentParties_34);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_34);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{498272047}, InstrumentParties_NoInstrumentParties_34);
    all_values.push_back(InstrumentParties_NoInstrumentParties_34);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1323855750"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1244481625}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1305861310"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1310985375}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1970463467"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{235096197}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_35;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1667366628"}, InstrumentParties_NoInstrumentParties_35);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_35);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{880299537}, InstrumentParties_NoInstrumentParties_35);
    all_values.push_back(InstrumentParties_NoInstrumentParties_35);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_971815894"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1605714922}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1031901766"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{2101670634}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_36;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1080302674"}, InstrumentParties_NoInstrumentParties_36);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_36);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{770659225}, InstrumentParties_NoInstrumentParties_36);
    all_values.push_back(InstrumentParties_NoInstrumentParties_36);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1830766188"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1884602866}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_42;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1922647252"}, SecAltIDGrp_NoSecurityAltID_42);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1436451421"}, SecAltIDGrp_NoSecurityAltID_42);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_43;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1409737608"}, SecAltIDGrp_NoSecurityAltID_43);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1688371732"}, SecAltIDGrp_NoSecurityAltID_43);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_34;
  set_field(msg, FIX::SecurityXML{"XMLDATA_532520376"}, SecurityXML_34);
  set_field(msg, FIX::SecurityXMLLen{165939981}, SecurityXML_34);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1008005385"}, SecurityXML_34);
  all_values.push_back(SecurityXML_34);
  all_compo_names.insert("..");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_1;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_664212028"}, RootParties_NoRootPartyIDs_1);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'7'}, RootParties_NoRootPartyIDs_1);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{1508519471}, RootParties_NoRootPartyIDs_1);
    all_values.push_back(RootParties_NoRootPartyIDs_1);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_2101334077"}, RootSubParties_NoRootPartySubIDs_1);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{672021199}, RootSubParties_NoRootPartySubIDs_1);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1731673473"}, RootSubParties_NoRootPartySubIDs_2);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{188946626}, RootSubParties_NoRootPartySubIDs_2);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_2);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubID{"STRING_191904179"}, RootSubParties_NoRootPartySubIDs_3);
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubIDType{1808316185}, RootSubParties_NoRootPartySubIDs_3);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_1069246163"}, RootParties_NoRootPartyIDs_2);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_2);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{632648431}, RootParties_NoRootPartyIDs_2);
    all_values.push_back(RootParties_NoRootPartyIDs_2);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_630967307"}, RootSubParties_NoRootPartySubIDs_4);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{586835417}, RootSubParties_NoRootPartySubIDs_4);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_1607780112"}, RootSubParties_NoRootPartySubIDs_5);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{1468844003}, RootSubParties_NoRootPartySubIDs_5);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubID{"STRING_1357494642"}, RootSubParties_NoRootPartySubIDs_6);
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubIDType{1625902698}, RootSubParties_NoRootPartySubIDs_6);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_1152126543"}, RootParties_NoRootPartyIDs_3);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_3);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{1026668897}, RootParties_NoRootPartyIDs_3);
    all_values.push_back(RootParties_NoRootPartyIDs_3);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_383581634"}, RootSubParties_NoRootPartySubIDs_7);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{288922857}, RootSubParties_NoRootPartySubIDs_7);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // SideCrossOrdCxlGrp
  // Group SideCrossOrdCxlGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_0;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_0;
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_916102011"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_454862838"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_1476183617"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_1100765732"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{1119074866}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_124172736"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(8, 5, 55, 1, 8, 2006)}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_125307234"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'4'}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_924792475"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_757955665"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1863693393"}, SideCrossOrdCxlGrp_NoSides_0);
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_3;
    FIX::CashOrderQty CashOrderQty_3;
    CashOrderQty_3.setString("15557597");
set_field(noSides_0_0, CashOrderQty_3, OrderQtyData_3);
    FIX::OrderPercent OrderPercent_3;
    OrderPercent_3.setString("10.820000");
set_field(noSides_0_0, OrderPercent_3, OrderQtyData_3);
    FIX::OrderQty OrderQty_12;
    OrderQty_12.setString("13239898");
set_field(noSides_0_0, OrderQty_12, OrderQtyData_3);
    set_field(noSides_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_3);
    FIX::RoundingModulus RoundingModulus_3;
    RoundingModulus_3.setString("5548020");
set_field(noSides_0_0, RoundingModulus_3, OrderQtyData_3);
    all_values.push_back(OrderQtyData_3);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_38;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_2029246681"}, Parties_NoPartyIDs_38);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_38);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{66}, Parties_NoPartyIDs_38);
      all_values.push_back(Parties_NoPartyIDs_38);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_2032997572"}, PtysSubGrp_NoPartySubIDs_81);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_81);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1277231413"}, PtysSubGrp_NoPartySubIDs_82);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_82);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_83;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_425379852"}, PtysSubGrp_NoPartySubIDs_83);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_83);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_83);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_39;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1902381668"}, Parties_NoPartyIDs_39);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_39);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{60}, Parties_NoPartyIDs_39);
      all_values.push_back(Parties_NoPartyIDs_39);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_84;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_277255943"}, PtysSubGrp_NoPartySubIDs_84);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_84);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_84);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_40;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_1350522331"}, Parties_NoPartyIDs_40);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_40);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{60}, Parties_NoPartyIDs_40);
      all_values.push_back(Parties_NoPartyIDs_40);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_85;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_867037874"}, PtysSubGrp_NoPartySubIDs_85);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_85);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_85);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_86;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_1453558092"}, PtysSubGrp_NoPartySubIDs_86);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_86);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_86);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_87;
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubID{"STRING_2127522774"}, PtysSubGrp_NoPartySubIDs_87);
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_87);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_87);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_1;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_1;
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_822300973"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ClOrdLinkID{"STRING_1304028983"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_1738954363"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_1377103050"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedTextLen{2106437890}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrigClOrdID{"STRING_1620717396"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(7, 9, 45, 17, 11, 2014)}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_36445265"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'D'}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Text{"STRING_1321063220"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeDate{"LOCALMKTDATE_1580899984"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_748070194"}, SideCrossOrdCxlGrp_NoSides_1);
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_4;
    FIX::CashOrderQty CashOrderQty_4;
    CashOrderQty_4.setString("15377627");
set_field(noSides_0_1, CashOrderQty_4, OrderQtyData_4);
    FIX::OrderPercent OrderPercent_4;
    OrderPercent_4.setString("59.270000");
set_field(noSides_0_1, OrderPercent_4, OrderQtyData_4);
    FIX::OrderQty OrderQty_13;
    OrderQty_13.setString("15561974");
set_field(noSides_0_1, OrderQty_13, OrderQtyData_4);
    set_field(noSides_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_4);
    FIX::RoundingModulus RoundingModulus_4;
    RoundingModulus_4.setString("4524029");
set_field(noSides_0_1, RoundingModulus_4, OrderQtyData_4);
    all_values.push_back(OrderQtyData_4);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_41;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1269567096"}, Parties_NoPartyIDs_41);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_41);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{51}, Parties_NoPartyIDs_41);
      all_values.push_back(Parties_NoPartyIDs_41);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_88;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_796950684"}, PtysSubGrp_NoPartySubIDs_88);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_88);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_88);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_89;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1437475766"}, PtysSubGrp_NoPartySubIDs_89);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_89);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_89);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_42;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_2031708395"}, Parties_NoPartyIDs_42);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_42);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{74}, Parties_NoPartyIDs_42);
      all_values.push_back(Parties_NoPartyIDs_42);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_90;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_502180230"}, PtysSubGrp_NoPartySubIDs_90);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_90);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_90);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_91;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_1631211037"}, PtysSubGrp_NoPartySubIDs_91);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_91);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_91);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_92;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_344972018"}, PtysSubGrp_NoPartySubIDs_92);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_92);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_92);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_2;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_2;
    set_field(noSides_0_2, FIX::ClOrdID{"STRING_196501854"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ClOrdLinkID{"STRING_1911137218"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ComplianceID{"STRING_1278721715"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::EncodedText{"DATA_214467931"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::EncodedTextLen{1084716791}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrigClOrdID{"STRING_712138052"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(11, 51, 35, 11, 8, 2003)}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SecondaryClOrdID{"STRING_337880867"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::Side{'D'}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::Text{"STRING_1602703144"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeDate{"LOCALMKTDATE_913522408"}, SideCrossOrdCxlGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeOriginationDate{"LOCALMKTDATE_844121081"}, SideCrossOrdCxlGrp_NoSides_2);
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_2);
    all_compo_names.insert("...NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_5;
    FIX::CashOrderQty CashOrderQty_5;
    CashOrderQty_5.setString("1828989");
set_field(noSides_0_2, CashOrderQty_5, OrderQtyData_5);
    FIX::OrderPercent OrderPercent_5;
    OrderPercent_5.setString("45.260000");
set_field(noSides_0_2, OrderPercent_5, OrderQtyData_5);
    FIX::OrderQty OrderQty_14;
    OrderQty_14.setString("3158890");
set_field(noSides_0_2, OrderQty_14, OrderQtyData_5);
    set_field(noSides_0_2, FIX::RoundingDirection{'0'}, OrderQtyData_5);
    FIX::RoundingModulus RoundingModulus_5;
    RoundingModulus_5.setString("12324610");
set_field(noSides_0_2, RoundingModulus_5, OrderQtyData_5);
    all_values.push_back(OrderQtyData_5);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_43;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_2057786294"}, Parties_NoPartyIDs_43);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_43);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{5}, Parties_NoPartyIDs_43);
      all_values.push_back(Parties_NoPartyIDs_43);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_93;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_371624751"}, PtysSubGrp_NoPartySubIDs_93);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_93);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_93);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_94;
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubID{"STRING_636306485"}, PtysSubGrp_NoPartySubIDs_94);
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_94);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_94);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_44;
      set_field(noPartyIDs_2_1_1, FIX::PartyID{"STRING_853808493"}, Parties_NoPartyIDs_44);
      set_field(noPartyIDs_2_1_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_44);
      set_field(noPartyIDs_2_1_1, FIX::PartyRole{54}, Parties_NoPartyIDs_44);
      all_values.push_back(Parties_NoPartyIDs_44);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_95;
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubID{"STRING_479682604"}, PtysSubGrp_NoPartySubIDs_95);
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_95);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_95);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_96;
        set_field(noPartySubIDs_2_1_2_1, FIX::PartySubID{"STRING_266037575"}, PtysSubGrp_NoPartySubIDs_96);
        set_field(noPartySubIDs_2_1_2_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_96);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_96);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_97;
        set_field(noPartySubIDs_2_1_2_2, FIX::PartySubID{"STRING_2116384617"}, PtysSubGrp_NoPartySubIDs_97);
        set_field(noPartySubIDs_2_1_2_2, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_97);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_97);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_2_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_45;
      set_field(noPartyIDs_2_1_2, FIX::PartyID{"STRING_1777706187"}, Parties_NoPartyIDs_45);
      set_field(noPartyIDs_2_1_2, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_45);
      set_field(noPartyIDs_2_1_2, FIX::PartyRole{7}, Parties_NoPartyIDs_45);
      all_values.push_back(Parties_NoPartyIDs_45);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_98;
        set_field(noPartySubIDs_2_2_2_0, FIX::PartySubID{"STRING_279183324"}, PtysSubGrp_NoPartySubIDs_98);
        set_field(noPartySubIDs_2_2_2_0, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_98);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_98);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_99;
        set_field(noPartySubIDs_2_2_2_1, FIX::PartySubID{"STRING_521514016"}, PtysSubGrp_NoPartySubIDs_99);
        set_field(noPartySubIDs_2_2_2_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_99);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_99);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_1);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_837403107"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{529205889}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2021730157"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2002163259}, UnderlyingInstrument_26);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("4395085");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_26, UnderlyingInstrument_26);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("77.480000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_26, UnderlyingInstrument_26);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("25.150000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1981022218"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1980512499"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1690017438"}, UnderlyingInstrument_26);
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("4698450");
set_field(noUnderlyings_0_0, UnderlyingCapValue_26, UnderlyingInstrument_26);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("4011554");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_26);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("2373896");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1183749993}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_187383919"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_717072212"}, UnderlyingInstrument_26);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("90.070000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_453421494"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_26);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("19352564");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_26, UnderlyingInstrument_26);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("76.870000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_26, UnderlyingInstrument_26);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("15742638");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_26, UnderlyingInstrument_26);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("16074887");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_26, UnderlyingInstrument_26);
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("9271806");
set_field(noUnderlyings_0_0, UnderlyingEndValue_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1853447128}, UnderlyingInstrument_26);
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("457596");
set_field(noUnderlyings_0_0, UnderlyingFXRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_26);
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("1680457");
set_field(noUnderlyings_0_0, UnderlyingFactor_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{835028825}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_138614098"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_697251602"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_709275334"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2140777357"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1136760137"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_170679434"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_593156225"}, UnderlyingInstrument_26);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("87.070000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_26);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("0.150000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1440143762"}, UnderlyingInstrument_26);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("4048637");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{532032298}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1677533370}, UnderlyingInstrument_26);
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("15886137");
set_field(noUnderlyings_0_0, UnderlyingPx_26, UnderlyingInstrument_26);
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("7194162");
set_field(noUnderlyings_0_0, UnderlyingQty_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_247121934"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_222529094"}, UnderlyingInstrument_26);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("77.110000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1866687082}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_972829070"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_960610552"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_968991121"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_399609226"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_420615607"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1896171743"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_105572706"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_466375284"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1197382734"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_26);
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("13014041");
set_field(noUnderlyings_0_0, UnderlyingStartValue_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1335996833"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_26);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("13292905");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2107630160"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_33875231"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1922446767"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_930445219"}, UnderlyingInstrument_26);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("375835");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_26, UnderlyingInstrument_26);
    all_values.push_back(UnderlyingInstrument_26);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_223105334"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_442447258"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1900638704"}, UnderlyingStipulations_NoUnderlyingStips_46);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2031060993"}, UnderlyingStipulations_NoUnderlyingStips_46);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1162101649"}, UnderlyingStipulations_NoUnderlyingStips_47);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_276990"}, UnderlyingStipulations_NoUnderlyingStips_47);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_106106439"}, UnderlyingStipulations_NoUnderlyingStips_48);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_187455713"}, UnderlyingStipulations_NoUnderlyingStips_48);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1078935509"}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{688471545}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1568681873"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{437159640}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1584117442"}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1634542375}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1188977619"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{823055560}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_681122236"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1052173416}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_25;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_25);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_641268748"}, header_25);
  set_header_field(msg.getHeader(), FIX::BodyLength{1086048647}, header_25);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1927309222"}, header_25);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1571713968"}, header_25);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1123632163"}, header_25);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1837962356"}, header_25);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1794819302}, header_25);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_25);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{133164141}, header_25);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1547974358"}, header_25);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1449656767"}, header_25);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1295265790"}, header_25);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(23, 3, 52, 4, 6, 2001)}, header_25);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_25);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_25);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_245879309"}, header_25);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1402393598}, header_25);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1939559503"}, header_25);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1880421684"}, header_25);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1112645812"}, header_25);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(20, 8, 51, 7, 6, 2006)}, header_25);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_340681625"}, header_25);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1859267117"}, header_25);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2095424053"}, header_25);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_31160333"}, header_25);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1506602771}, header_25);
  all_values.push_back(header_25);
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
