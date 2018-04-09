#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListRequest_0;
  set_field(msg, FIX::Currency{"CHF"}, SecurityListRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1895580108"}, SecurityListRequest_0);
  set_field(msg, FIX::EncodedTextLen{1656246995}, SecurityListRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_527501848"}, SecurityListRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_553270351"}, SecurityListRequest_0);
  set_field(msg, FIX::SecurityListID{"STRING_1528954241"}, SecurityListRequest_0);
  set_field(msg, FIX::SecurityListRequestType{4}, SecurityListRequest_0);
  set_field(msg, FIX::SecurityListType{2}, SecurityListRequest_0);
  set_field(msg, FIX::SecurityListTypeSource{1}, SecurityListRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1451506963"}, SecurityListRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, SecurityListRequest_0);
  set_field(msg, FIX::Text{"STRING_1641397923"}, SecurityListRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, SecurityListRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, SecurityListRequest_0);
  all_values.push_back(SecurityListRequest_0);

  all_compo_names.insert("SecurityListRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_26;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_26);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1208868754"}, FinancingDetails_26);
  set_field(msg, FIX::AgreementDesc{"STRING_2133166318"}, FinancingDetails_26);
  set_field(msg, FIX::AgreementID{"STRING_519680319"}, FinancingDetails_26);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_26);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1440443360"}, FinancingDetails_26);
  FIX::MarginRatio MarginRatio_26;
  MarginRatio_26.setString("21.620000");
set_field(msg, MarginRatio_26, FinancingDetails_26);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_136971111"}, FinancingDetails_26);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_26);
  all_values.push_back(FinancingDetails_26);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_126;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1342514222"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1139406442}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_397241610"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{715888092}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1583724223"}, InstrumentLeg_126);
    FIX::LegContractMultiplier LegContractMultiplier_126;
    LegContractMultiplier_126.setString("7702544");
set_field(noLegs_0_0, LegContractMultiplier_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1674640233}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1331820683"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_279017826"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_54658433"}, InstrumentLeg_126);
    FIX::LegCouponRate LegCouponRate_126;
    LegCouponRate_126.setString("10.350000");
set_field(noLegs_0_0, LegCouponRate_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1807972067"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1408834839"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{755100423}, InstrumentLeg_126);
    FIX::LegFactor LegFactor_126;
    LegFactor_126.setString("11526307");
set_field(noLegs_0_0, LegFactor_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{902749115}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1593035359"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_112828079"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_576328252"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1598176022"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1321696833"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_562010922"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2117856341"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_973373310"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_126);
    FIX::LegOptionRatio LegOptionRatio_126;
    LegOptionRatio_126.setString("14360648");
set_field(noLegs_0_0, LegOptionRatio_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1110344421"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1170961869"}, InstrumentLeg_126);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_126;
    LegPriceUnitOfMeasureQty_126.setString("10812754");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegProduct{305374995}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegPutOrCall{162884663}, InstrumentLeg_126);
    FIX::LegRatioQty LegRatioQty_126;
    LegRatioQty_126.setString("14785170");
set_field(noLegs_0_0, LegRatioQty_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1021263087"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1746608887"}, InstrumentLeg_126);
    FIX::LegRepurchaseRate LegRepurchaseRate_126;
    LegRepurchaseRate_126.setString("78.680000");
set_field(noLegs_0_0, LegRepurchaseRate_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{548419672}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_930945922"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_380305694"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_603078106"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_668553309"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_40794113"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2054155214"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1449628953"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_126);
    FIX::LegStrikePrice LegStrikePrice_126;
    LegStrikePrice_126.setString("2048944");
set_field(noLegs_0_0, LegStrikePrice_126, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_107323700"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_499698297"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_781222672"}, InstrumentLeg_126);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1705499722"}, InstrumentLeg_126);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_126;
    LegUnitOfMeasureQty_126.setString("18213951");
set_field(noLegs_0_0, LegUnitOfMeasureQty_126, InstrumentLeg_126);
    all_values.push_back(InstrumentLeg_126);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_252;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1675872416"}, LegSecAltIDGrp_NoLegSecurityAltID_252);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_647284793"}, LegSecAltIDGrp_NoLegSecurityAltID_252);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_252);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_253;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1198204228"}, LegSecAltIDGrp_NoLegSecurityAltID_253);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_964453623"}, LegSecAltIDGrp_NoLegSecurityAltID_253);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_253);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_83;
  FIX::AttachmentPoint AttachmentPoint_83;
  AttachmentPoint_83.setString("92.150000");
set_field(msg, AttachmentPoint_83, Instrument_83);
  set_field(msg, FIX::CFICode{"STRING_221682449"}, Instrument_83);
  set_field(msg, FIX::CPProgram{99}, Instrument_83);
  set_field(msg, FIX::CPRegType{"STRING_2063004210"}, Instrument_83);
  FIX::CapPrice CapPrice_83;
  CapPrice_83.setString("3845671");
set_field(msg, CapPrice_83, Instrument_83);
  FIX::ContractMultiplier ContractMultiplier_83;
  ContractMultiplier_83.setString("13767624");
set_field(msg, ContractMultiplier_83, Instrument_83);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_83);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2131176000"}, Instrument_83);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1478050309"}, Instrument_83);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1485203322"}, Instrument_83);
  FIX::CouponRate CouponRate_83;
  CouponRate_83.setString("82.740000");
set_field(msg, CouponRate_83, Instrument_83);
  set_field(msg, FIX::CreditRating{"STRING_1858356003"}, Instrument_83);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2088281428"}, Instrument_83);
  FIX::DetachmentPoint DetachmentPoint_83;
  DetachmentPoint_83.setString("15.840000");
set_field(msg, DetachmentPoint_83, Instrument_83);
  set_field(msg, FIX::EncodedIssuer{"DATA_1899150117"}, Instrument_83);
  set_field(msg, FIX::EncodedIssuerLen{1994952994}, Instrument_83);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_817431037"}, Instrument_83);
  set_field(msg, FIX::EncodedSecurityDescLen{1201295422}, Instrument_83);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_83);
  FIX::Factor Factor_83;
  Factor_83.setString("12043012");
set_field(msg, Factor_83, Instrument_83);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_83);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_83);
  FIX::FloorPrice FloorPrice_83;
  FloorPrice_83.setString("17039995");
set_field(msg, FloorPrice_83, Instrument_83);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_83);
  set_field(msg, FIX::InstrRegistry{"STRING_174581111"}, Instrument_83);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_83);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1383162460"}, Instrument_83);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1850453527"}, Instrument_83);
  set_field(msg, FIX::Issuer{"STRING_2025195829"}, Instrument_83);
  set_field(msg, FIX::ListMethod{0}, Instrument_83);
  set_field(msg, FIX::LocaleOfIssue{"STRING_667423502"}, Instrument_83);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1635341396"}, Instrument_83);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_655565489"}, Instrument_83);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_565668905"}, Instrument_83);
  FIX::MinPriceIncrement MinPriceIncrement_83;
  MinPriceIncrement_83.setString("15508619");
set_field(msg, MinPriceIncrement_83, Instrument_83);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
  MinPriceIncrementAmount_83.setString("10401326");
set_field(msg, MinPriceIncrementAmount_83, Instrument_83);
  set_field(msg, FIX::NTPositionLimit{1942431346}, Instrument_83);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
  NotionalPercentageOutstanding_83.setString("19.610000");
set_field(msg, NotionalPercentageOutstanding_83, Instrument_83);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_83);
  FIX::OptPayoutAmount OptPayoutAmount_83;
  OptPayoutAmount_83.setString("12729980");
set_field(msg, OptPayoutAmount_83, Instrument_83);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_83);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
  OriginalNotionalPercentageOutstanding_83.setString("32.290000");
set_field(msg, OriginalNotionalPercentageOutstanding_83, Instrument_83);
  set_field(msg, FIX::Pool{"STRING_983870362"}, Instrument_83);
  set_field(msg, FIX::PositionLimit{1766163064}, Instrument_83);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_83);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_735536831"}, Instrument_83);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
  PriceUnitOfMeasureQty_83.setString("16136324");
set_field(msg, PriceUnitOfMeasureQty_83, Instrument_83);
  set_field(msg, FIX::Product{13}, Instrument_83);
  set_field(msg, FIX::ProductComplex{"STRING_1936832253"}, Instrument_83);
  set_field(msg, FIX::PutOrCall{0}, Instrument_83);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1248419810"}, Instrument_83);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1195538447"}, Instrument_83);
  FIX::RepurchaseRate RepurchaseRate_83;
  RepurchaseRate_83.setString("51.350000");
set_field(msg, RepurchaseRate_83, Instrument_83);
  set_field(msg, FIX::RepurchaseTerm{804935715}, Instrument_83);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_83);
  set_field(msg, FIX::SecurityDesc{"STRING_766536246"}, Instrument_83);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_35363103"}, Instrument_83);
  set_field(msg, FIX::SecurityGroup{"STRING_471146125"}, Instrument_83);
  set_field(msg, FIX::SecurityID{"STRING_469506125"}, Instrument_83);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_83);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_83);
  set_field(msg, FIX::SecuritySubType{"STRING_1136929627"}, Instrument_83);
  set_field(msg, FIX::SecurityType{"STRING_SECPLEDGE"}, Instrument_83);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_83);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_83);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_951794992"}, Instrument_83);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_453243609"}, Instrument_83);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_83);
  FIX::StrikeMultiplier StrikeMultiplier_83;
  StrikeMultiplier_83.setString("14770685");
set_field(msg, StrikeMultiplier_83, Instrument_83);
  FIX::StrikePrice StrikePrice_83;
  StrikePrice_83.setString("6230605");
set_field(msg, StrikePrice_83, Instrument_83);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_83);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
  StrikePriceBoundaryPrecision_83.setString("81.450000");
set_field(msg, StrikePriceBoundaryPrecision_83, Instrument_83);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_83);
  FIX::StrikeValue StrikeValue_83;
  StrikeValue_83.setString("5885180");
set_field(msg, StrikeValue_83, Instrument_83);
  set_field(msg, FIX::Symbol{"STRING_494735662"}, Instrument_83);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_83);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_83);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_83);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_83);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
  UnitOfMeasureQty_83.setString("300568");
set_field(msg, UnitOfMeasureQty_83, Instrument_83);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_83);
  all_values.push_back(Instrument_83);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_171;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexEventPrice ComplexEventPrice_171;
    ComplexEventPrice_171.setString("4447260");
set_field(noComplexEvents_0_0, ComplexEventPrice_171, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
    ComplexEventPriceBoundaryPrecision_171.setString("82.460000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_171, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
    ComplexOptPayoutAmount_171.setString("18580543");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_171, ComplexEvents_NoComplexEvents_171);
    all_values.push_back(ComplexEvents_NoComplexEvents_171);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_346;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 2, 12, 16, 11, 2010)}, ComplexEventDates_NoComplexEventDates_346);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 38, 49, 19, 12, 2015)}, ComplexEventDates_NoComplexEventDates_346);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_346);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 11, 13)}, ComplexEventTimes_NoComplexEventTimes_704);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 32, 40)}, ComplexEventTimes_NoComplexEventTimes_704);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_172;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexEventPrice ComplexEventPrice_172;
    ComplexEventPrice_172.setString("10786405");
set_field(noComplexEvents_0_1, ComplexEventPrice_172, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
    ComplexEventPriceBoundaryPrecision_172.setString("26.350000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_172, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
    ComplexOptPayoutAmount_172.setString("11070933");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_172, ComplexEvents_NoComplexEvents_172);
    all_values.push_back(ComplexEvents_NoComplexEvents_172);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_347;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 57, 36, 6, 12, 2010)}, ComplexEventDates_NoComplexEventDates_347);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 28, 6, 13, 8, 2001)}, ComplexEventDates_NoComplexEventDates_347);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_347);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 32, 26)}, ComplexEventTimes_NoComplexEventTimes_705);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 58, 40)}, ComplexEventTimes_NoComplexEventTimes_705);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_162;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1785303783"}, EvntGrp_NoEvents_162);
    FIX::EventPx EventPx_162;
    EventPx_162.setString("7271184");
set_field(noEvents_0_0, EventPx_162, EvntGrp_NoEvents_162);
    set_field(noEvents_0_0, FIX::EventText{"STRING_542574477"}, EvntGrp_NoEvents_162);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 56, 32, 9, 3, 2009)}, EvntGrp_NoEvents_162);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_162);
    all_values.push_back(EvntGrp_NoEvents_162);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_163;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1666503196"}, EvntGrp_NoEvents_163);
    FIX::EventPx EventPx_163;
    EventPx_163.setString("9438690");
set_field(noEvents_0_1, EventPx_163, EvntGrp_NoEvents_163);
    set_field(noEvents_0_1, FIX::EventText{"STRING_908925224"}, EvntGrp_NoEvents_163);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 12, 39, 24, 1, 2011)}, EvntGrp_NoEvents_163);
    set_field(noEvents_0_1, FIX::EventType{2}, EvntGrp_NoEvents_163);
    all_values.push_back(EvntGrp_NoEvents_163);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_164;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1568692988"}, EvntGrp_NoEvents_164);
    FIX::EventPx EventPx_164;
    EventPx_164.setString("1963885");
set_field(noEvents_0_2, EventPx_164, EvntGrp_NoEvents_164);
    set_field(noEvents_0_2, FIX::EventText{"STRING_274447186"}, EvntGrp_NoEvents_164);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(0, 7, 24, 24, 2, 2004)}, EvntGrp_NoEvents_164);
    set_field(noEvents_0_2, FIX::EventType{19}, EvntGrp_NoEvents_164);
    all_values.push_back(EvntGrp_NoEvents_164);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_154;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1034991417"}, InstrumentParties_NoInstrumentParties_154);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_154);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{750818795}, InstrumentParties_NoInstrumentParties_154);
    all_values.push_back(InstrumentParties_NoInstrumentParties_154);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1518417748"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{60113045}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_155;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_487936663"}, InstrumentParties_NoInstrumentParties_155);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_155);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1726616242}, InstrumentParties_NoInstrumentParties_155);
    all_values.push_back(InstrumentParties_NoInstrumentParties_155);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1218449818"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1208038907}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_462957514"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{790195802}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_589080094"}, SecAltIDGrp_NoSecurityAltID_166);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1132780370"}, SecAltIDGrp_NoSecurityAltID_166);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_167;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1020494530"}, SecAltIDGrp_NoSecurityAltID_167);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1111412216"}, SecAltIDGrp_NoSecurityAltID_167);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_166;
  set_field(msg, FIX::SecurityXML{"XMLDATA_553989711"}, SecurityXML_166);
  set_field(msg, FIX::SecurityXMLLen{1216883050}, SecurityXML_166);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1385859402"}, SecurityXML_166);
  all_values.push_back(SecurityXML_166);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_12;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_12);
  FIX::PctAtRisk PctAtRisk_12;
  PctAtRisk_12.setString("12.500000");
set_field(msg, PctAtRisk_12, InstrumentExtension_12);
  all_values.push_back(InstrumentExtension_12);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_23;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{13}, AttrbGrp_NoInstrAttrib_23);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1310549262"}, AttrbGrp_NoInstrAttrib_23);
    all_values.push_back(AttrbGrp_NoInstrAttrib_23);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_24;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_24);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_87010862"}, AttrbGrp_NoInstrAttrib_24);
    all_values.push_back(AttrbGrp_NoInstrAttrib_24);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_25;
    set_field(noInstrAttrib_0_2, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_25);
    set_field(noInstrAttrib_0_2, FIX::InstrAttribValue{"STRING_605595128"}, AttrbGrp_NoInstrAttrib_25);
    all_values.push_back(AttrbGrp_NoInstrAttrib_25);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_126;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_756722944"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1356413923}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1010470461"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{127657044}, UnderlyingInstrument_126);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
    UnderlyingAdjustedQuantity_126.setString("14165269");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_126, UnderlyingInstrument_126);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
    UnderlyingAllocationPercent_126.setString("71.250000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_126, UnderlyingInstrument_126);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
    UnderlyingAttachmentPoint_126.setString("16.380000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_995659563"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_782729197"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1655631456"}, UnderlyingInstrument_126);
    FIX::UnderlyingCapValue UnderlyingCapValue_126;
    UnderlyingCapValue_126.setString("562148");
set_field(noUnderlyings_0_0, UnderlyingCapValue_126, UnderlyingInstrument_126);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
    UnderlyingCashAmount_126.setString("12456867");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_126);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
    UnderlyingContractMultiplier_126.setString("10838179");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1834766806}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1431123981"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2104312451"}, UnderlyingInstrument_126);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
    UnderlyingCouponRate_126.setString("53.740000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1985113692"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_126);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
    UnderlyingCurrentValue_126.setString("20330615");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_126, UnderlyingInstrument_126);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
    UnderlyingDetachmentPoint_126.setString("94.550000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_126, UnderlyingInstrument_126);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
    UnderlyingDirtyPrice_126.setString("8354551");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_126, UnderlyingInstrument_126);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
    UnderlyingEndPrice_126.setString("1341472");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_126, UnderlyingInstrument_126);
    FIX::UnderlyingEndValue UnderlyingEndValue_126;
    UnderlyingEndValue_126.setString("19680487");
set_field(noUnderlyings_0_0, UnderlyingEndValue_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{192415691}, UnderlyingInstrument_126);
    FIX::UnderlyingFXRate UnderlyingFXRate_126;
    UnderlyingFXRate_126.setString("2211580");
set_field(noUnderlyings_0_0, UnderlyingFXRate_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_126);
    FIX::UnderlyingFactor UnderlyingFactor_126;
    UnderlyingFactor_126.setString("7980108");
set_field(noUnderlyings_0_0, UnderlyingFactor_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1343160365}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_146750086"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_6941095"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_206147179"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_274407130"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1423468064"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1704554304"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_711588769"}, UnderlyingInstrument_126);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
    UnderlyingNotionalPercentageOutstanding_126.setString("39.790000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_126);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
    UnderlyingOriginalNotionalPercentageOutstanding_126.setString("65.770000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_327858801"}, UnderlyingInstrument_126);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
    UnderlyingPriceUnitOfMeasureQty_126.setString("15854865");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{518080188}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1411676723}, UnderlyingInstrument_126);
    FIX::UnderlyingPx UnderlyingPx_126;
    UnderlyingPx_126.setString("12727697");
set_field(noUnderlyings_0_0, UnderlyingPx_126, UnderlyingInstrument_126);
    FIX::UnderlyingQty UnderlyingQty_126;
    UnderlyingQty_126.setString("19492041");
set_field(noUnderlyings_0_0, UnderlyingQty_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1368505526"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2071465096"}, UnderlyingInstrument_126);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
    UnderlyingRepurchaseRate_126.setString("42.140000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{394733732}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_2108536224"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1672412136"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1052233187"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_796507745"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1806559360"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_872798257"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_988923436"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_2027717446"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_262825399"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_126);
    FIX::UnderlyingStartValue UnderlyingStartValue_126;
    UnderlyingStartValue_126.setString("12233941");
set_field(noUnderlyings_0_0, UnderlyingStartValue_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_409575485"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_126);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
    UnderlyingStrikePrice_126.setString("6839826");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_126, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1069859767"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_986611999"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1395571384"}, UnderlyingInstrument_126);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1341503746"}, UnderlyingInstrument_126);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
    UnderlyingUnitOfMeasureQty_126.setString("13264118");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_126, UnderlyingInstrument_126);
    all_values.push_back(UnderlyingInstrument_126);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1669362547"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_764414768"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_2133388150"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_933555622"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1935108672"}, UnderlyingStipulations_NoUnderlyingStips_253);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_154577501"}, UnderlyingStipulations_NoUnderlyingStips_253);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_267;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1574459239"}, UndlyInstrumentParties_NoUndlyInstrumentParties_267);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_267);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1922218516}, UndlyInstrumentParties_NoUndlyInstrumentParties_267);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_267);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1601544420"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{571242613}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_758463440"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{326859029}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1560166050"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{638697238}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_268;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_589684428"}, UndlyInstrumentParties_NoUndlyInstrumentParties_268);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_268);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1862091402}, UndlyInstrumentParties_NoUndlyInstrumentParties_268);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_268);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_846008361"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1144149097}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1683242529"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1915868128}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2130761096"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{931330265}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_269;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1109888226"}, UndlyInstrumentParties_NoUndlyInstrumentParties_269);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_269);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{399154579}, UndlyInstrumentParties_NoUndlyInstrumentParties_269);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_269);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2074104069"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{385059082}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1565322748"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1963804912}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_172684106"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1719900249}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_127;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1777487203"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1747143345}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_121727834"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1552222071}, UnderlyingInstrument_127);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
    UnderlyingAdjustedQuantity_127.setString("6990474");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_127, UnderlyingInstrument_127);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
    UnderlyingAllocationPercent_127.setString("22.540000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_127, UnderlyingInstrument_127);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
    UnderlyingAttachmentPoint_127.setString("46.850000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1457510865"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_2050131284"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1536147087"}, UnderlyingInstrument_127);
    FIX::UnderlyingCapValue UnderlyingCapValue_127;
    UnderlyingCapValue_127.setString("20962081");
set_field(noUnderlyings_0_1, UnderlyingCapValue_127, UnderlyingInstrument_127);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
    UnderlyingCashAmount_127.setString("4923320");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_127);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
    UnderlyingContractMultiplier_127.setString("18108158");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1491591978}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1434288458"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_807481307"}, UnderlyingInstrument_127);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
    UnderlyingCouponRate_127.setString("8.590000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1202672938"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_127);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
    UnderlyingCurrentValue_127.setString("1650775");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_127, UnderlyingInstrument_127);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
    UnderlyingDetachmentPoint_127.setString("80.560000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_127, UnderlyingInstrument_127);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
    UnderlyingDirtyPrice_127.setString("2103520");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_127, UnderlyingInstrument_127);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
    UnderlyingEndPrice_127.setString("7968446");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_127, UnderlyingInstrument_127);
    FIX::UnderlyingEndValue UnderlyingEndValue_127;
    UnderlyingEndValue_127.setString("20270684");
set_field(noUnderlyings_0_1, UnderlyingEndValue_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{595411138}, UnderlyingInstrument_127);
    FIX::UnderlyingFXRate UnderlyingFXRate_127;
    UnderlyingFXRate_127.setString("2146837");
set_field(noUnderlyings_0_1, UnderlyingFXRate_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_127);
    FIX::UnderlyingFactor UnderlyingFactor_127;
    UnderlyingFactor_127.setString("7680952");
set_field(noUnderlyings_0_1, UnderlyingFactor_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1934583990}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1473393297"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_367754942"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_2056311824"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_878131720"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1066802367"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1632100431"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_854112757"}, UnderlyingInstrument_127);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
    UnderlyingNotionalPercentageOutstanding_127.setString("95.840000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_127);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
    UnderlyingOriginalNotionalPercentageOutstanding_127.setString("61.960000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_325554039"}, UnderlyingInstrument_127);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
    UnderlyingPriceUnitOfMeasureQty_127.setString("20270801");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{831056293}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{2136369897}, UnderlyingInstrument_127);
    FIX::UnderlyingPx UnderlyingPx_127;
    UnderlyingPx_127.setString("13711884");
set_field(noUnderlyings_0_1, UnderlyingPx_127, UnderlyingInstrument_127);
    FIX::UnderlyingQty UnderlyingQty_127;
    UnderlyingQty_127.setString("1178611");
set_field(noUnderlyings_0_1, UnderlyingQty_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_796367557"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_251055672"}, UnderlyingInstrument_127);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
    UnderlyingRepurchaseRate_127.setString("40.410000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1587126313}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_62253149"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1485611557"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1540090721"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_272605205"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_134972551"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1419675551"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_868016343"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_349656292"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1115581644"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_127);
    FIX::UnderlyingStartValue UnderlyingStartValue_127;
    UnderlyingStartValue_127.setString("1367566");
set_field(noUnderlyings_0_1, UnderlyingStartValue_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_441491293"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_127);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
    UnderlyingStrikePrice_127.setString("13196230");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_127, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_923185248"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1677685242"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_26252123"}, UnderlyingInstrument_127);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1300014832"}, UnderlyingInstrument_127);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
    UnderlyingUnitOfMeasureQty_127.setString("10649496");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_127, UnderlyingInstrument_127);
    all_values.push_back(UnderlyingInstrument_127);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1625568872"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_944546145"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1100084613"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1614455121"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_168250958"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1217945717"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_419306631"}, UnderlyingStipulations_NoUnderlyingStips_254);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_390996110"}, UnderlyingStipulations_NoUnderlyingStips_254);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1850465343"}, UnderlyingStipulations_NoUnderlyingStips_255);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_481559780"}, UnderlyingStipulations_NoUnderlyingStips_255);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1876607668"}, UnderlyingStipulations_NoUnderlyingStips_256);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1243072417"}, UnderlyingStipulations_NoUnderlyingStips_256);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_270;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2011580219"}, UndlyInstrumentParties_NoUndlyInstrumentParties_270);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_270);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1622181328}, UndlyInstrumentParties_NoUndlyInstrumentParties_270);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_270);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1630845964"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1110809267}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_350509498"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2072337258}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_967192149"}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1244476624}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2073779552"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1270728747}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_128;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1042908582"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{991245566}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1539757067"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{520993806}, UnderlyingInstrument_128);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
    UnderlyingAdjustedQuantity_128.setString("19357917");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_128, UnderlyingInstrument_128);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
    UnderlyingAllocationPercent_128.setString("80.330000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_128, UnderlyingInstrument_128);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
    UnderlyingAttachmentPoint_128.setString("89.270000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_2104042669"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1710303750"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_251304310"}, UnderlyingInstrument_128);
    FIX::UnderlyingCapValue UnderlyingCapValue_128;
    UnderlyingCapValue_128.setString("3758656");
set_field(noUnderlyings_0_2, UnderlyingCapValue_128, UnderlyingInstrument_128);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
    UnderlyingCashAmount_128.setString("21012998");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_128);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
    UnderlyingContractMultiplier_128.setString("8574254");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1830423880}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1197358422"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1611590417"}, UnderlyingInstrument_128);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
    UnderlyingCouponRate_128.setString("4.510000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1712622742"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_128);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
    UnderlyingCurrentValue_128.setString("11959850");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_128, UnderlyingInstrument_128);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
    UnderlyingDetachmentPoint_128.setString("37.170000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_128, UnderlyingInstrument_128);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
    UnderlyingDirtyPrice_128.setString("1112991");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_128, UnderlyingInstrument_128);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
    UnderlyingEndPrice_128.setString("11208386");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_128, UnderlyingInstrument_128);
    FIX::UnderlyingEndValue UnderlyingEndValue_128;
    UnderlyingEndValue_128.setString("10168058");
set_field(noUnderlyings_0_2, UnderlyingEndValue_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{507393475}, UnderlyingInstrument_128);
    FIX::UnderlyingFXRate UnderlyingFXRate_128;
    UnderlyingFXRate_128.setString("2178316");
set_field(noUnderlyings_0_2, UnderlyingFXRate_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_128);
    FIX::UnderlyingFactor UnderlyingFactor_128;
    UnderlyingFactor_128.setString("4336893");
set_field(noUnderlyings_0_2, UnderlyingFactor_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1488560392}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1802608197"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1424934946"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_880833812"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_176118355"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1213243009"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1373191845"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_164083635"}, UnderlyingInstrument_128);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
    UnderlyingNotionalPercentageOutstanding_128.setString("20.300000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_128);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
    UnderlyingOriginalNotionalPercentageOutstanding_128.setString("79.450000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1545667683"}, UnderlyingInstrument_128);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
    UnderlyingPriceUnitOfMeasureQty_128.setString("8898281");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{369673950}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{255609467}, UnderlyingInstrument_128);
    FIX::UnderlyingPx UnderlyingPx_128;
    UnderlyingPx_128.setString("5727683");
set_field(noUnderlyings_0_2, UnderlyingPx_128, UnderlyingInstrument_128);
    FIX::UnderlyingQty UnderlyingQty_128;
    UnderlyingQty_128.setString("15670323");
set_field(noUnderlyings_0_2, UnderlyingQty_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1867199885"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_119805195"}, UnderlyingInstrument_128);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
    UnderlyingRepurchaseRate_128.setString("14.670000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{806004334}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_2028078510"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_180672878"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_855618051"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_2139377676"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1301511547"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1872423917"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_499287503"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1519343192"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_484639885"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_128);
    FIX::UnderlyingStartValue UnderlyingStartValue_128;
    UnderlyingStartValue_128.setString("8604199");
set_field(noUnderlyings_0_2, UnderlyingStartValue_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_139764434"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_128);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
    UnderlyingStrikePrice_128.setString("3158827");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_128, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1423671190"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_966961946"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_479966425"}, UnderlyingInstrument_128);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_445989573"}, UnderlyingInstrument_128);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
    UnderlyingUnitOfMeasureQty_128.setString("19029738");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_128, UnderlyingInstrument_128);
    all_values.push_back(UnderlyingInstrument_128);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1991657256"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_645318404"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_267;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1265028320"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_99783075"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_268;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1218086796"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_684577045"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1337891992"}, UnderlyingStipulations_NoUnderlyingStips_257);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1816748513"}, UnderlyingStipulations_NoUnderlyingStips_257);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_625503647"}, UnderlyingStipulations_NoUnderlyingStips_258);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1218486854"}, UnderlyingStipulations_NoUnderlyingStips_258);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1997421391"}, UnderlyingStipulations_NoUnderlyingStips_259);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_1481121698"}, UnderlyingStipulations_NoUnderlyingStips_259);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1151449291"}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1709668386}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1690701853"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{495161621}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1383728772"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1830466287}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_84;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_84);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_977498873"}, header_84);
  set_header_field(msg.getHeader(), FIX::BodyLength{2146349077}, header_84);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2129260993"}, header_84);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1944460819"}, header_84);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_478831854"}, header_84);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_427766918"}, header_84);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1699951064}, header_84);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_84);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{271940526}, header_84);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_197785821"}, header_84);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_491730897"}, header_84);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_371723602"}, header_84);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 34, 41, 23, 10, 2014)}, header_84);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_84);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_84);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_887665050"}, header_84);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1846959842}, header_84);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1356426580"}, header_84);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_449849788"}, header_84);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_222785029"}, header_84);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(10, 2, 4, 9, 12, 2010)}, header_84);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1632378558"}, header_84);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_233506199"}, header_84);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1060324708"}, header_84);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2060145477"}, header_84);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1933457263}, header_84);
  all_values.push_back(header_84);
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
