#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_1990217544"}, QuoteStatusRequest_0);
  set_field(msg, FIX::AccountType{1}, QuoteStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{3}, QuoteStatusRequest_0);
  set_field(msg, FIX::QuoteID{"STRING_1251518364"}, QuoteStatusRequest_0);
  set_field(msg, FIX::QuoteStatusReqID{"STRING_231037074"}, QuoteStatusRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, QuoteStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, QuoteStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, QuoteStatusRequest_0);
  all_values.push_back(QuoteStatusRequest_0);

  all_compo_names.insert("QuoteStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_24;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1971584357"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementDesc{"STRING_1689558251"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementID{"STRING_848426835"}, FinancingDetails_24);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_24);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1370059863"}, FinancingDetails_24);
  FIX::MarginRatio MarginRatio_24;
  MarginRatio_24.setString("23.990000");
set_field(msg, MarginRatio_24, FinancingDetails_24);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_2064105948"}, FinancingDetails_24);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_24);
  all_values.push_back(FinancingDetails_24);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_109;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_272452891"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{477139439}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1233343226"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{382294540}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2035519059"}, InstrumentLeg_109);
    FIX::LegContractMultiplier LegContractMultiplier_109;
    LegContractMultiplier_109.setString("2231601");
set_field(noLegs_0_0, LegContractMultiplier_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1463095455}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1553220107"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1812110597"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1900103004"}, InstrumentLeg_109);
    FIX::LegCouponRate LegCouponRate_109;
    LegCouponRate_109.setString("94.170000");
set_field(noLegs_0_0, LegCouponRate_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1385202574"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1575639204"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{846871616}, InstrumentLeg_109);
    FIX::LegFactor LegFactor_109;
    LegFactor_109.setString("10352208");
set_field(noLegs_0_0, LegFactor_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{705907618}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_264858108"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1468411584"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1604423367"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1180029640"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1292512294"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1146497970"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2028456476"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_311748694"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_109);
    FIX::LegOptionRatio LegOptionRatio_109;
    LegOptionRatio_109.setString("14994352");
set_field(noLegs_0_0, LegOptionRatio_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_228370995"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_216871377"}, InstrumentLeg_109);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
    LegPriceUnitOfMeasureQty_109.setString("20638897");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegProduct{500823886}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegPutOrCall{694010816}, InstrumentLeg_109);
    FIX::LegRatioQty LegRatioQty_109;
    LegRatioQty_109.setString("11497493");
set_field(noLegs_0_0, LegRatioQty_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_883118427"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_582046227"}, InstrumentLeg_109);
    FIX::LegRepurchaseRate LegRepurchaseRate_109;
    LegRepurchaseRate_109.setString("94.560000");
set_field(noLegs_0_0, LegRepurchaseRate_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{198730234}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2135266334"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1037536405"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2098833238"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_833782104"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_275255332"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1694186490"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1850894536"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_109);
    FIX::LegStrikePrice LegStrikePrice_109;
    LegStrikePrice_109.setString("4093185");
set_field(noLegs_0_0, LegStrikePrice_109, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_658432566"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1994114607"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2013741874"}, InstrumentLeg_109);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1838462207"}, InstrumentLeg_109);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
    LegUnitOfMeasureQty_109.setString("11391432");
set_field(noLegs_0_0, LegUnitOfMeasureQty_109, InstrumentLeg_109);
    all_values.push_back(InstrumentLeg_109);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1719435035"}, LegSecAltIDGrp_NoLegSecurityAltID_216);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1450891948"}, LegSecAltIDGrp_NoLegSecurityAltID_216);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_74;
  FIX::AttachmentPoint AttachmentPoint_74;
  AttachmentPoint_74.setString("3.830000");
set_field(msg, AttachmentPoint_74, Instrument_74);
  set_field(msg, FIX::CFICode{"STRING_1071386614"}, Instrument_74);
  set_field(msg, FIX::CPProgram{2}, Instrument_74);
  set_field(msg, FIX::CPRegType{"STRING_1598701760"}, Instrument_74);
  FIX::CapPrice CapPrice_74;
  CapPrice_74.setString("9877927");
set_field(msg, CapPrice_74, Instrument_74);
  FIX::ContractMultiplier ContractMultiplier_74;
  ContractMultiplier_74.setString("326031");
set_field(msg, ContractMultiplier_74, Instrument_74);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_74);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2137542083"}, Instrument_74);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_915721608"}, Instrument_74);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_727275155"}, Instrument_74);
  FIX::CouponRate CouponRate_74;
  CouponRate_74.setString("78.910000");
set_field(msg, CouponRate_74, Instrument_74);
  set_field(msg, FIX::CreditRating{"STRING_1114451842"}, Instrument_74);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_715057841"}, Instrument_74);
  FIX::DetachmentPoint DetachmentPoint_74;
  DetachmentPoint_74.setString("6.490000");
set_field(msg, DetachmentPoint_74, Instrument_74);
  set_field(msg, FIX::EncodedIssuer{"DATA_1065801432"}, Instrument_74);
  set_field(msg, FIX::EncodedIssuerLen{1548839945}, Instrument_74);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_528275981"}, Instrument_74);
  set_field(msg, FIX::EncodedSecurityDescLen{612504274}, Instrument_74);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_74);
  FIX::Factor Factor_74;
  Factor_74.setString("2316868");
set_field(msg, Factor_74, Instrument_74);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_74);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_74);
  FIX::FloorPrice FloorPrice_74;
  FloorPrice_74.setString("6410053");
set_field(msg, FloorPrice_74, Instrument_74);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_74);
  set_field(msg, FIX::InstrRegistry{"STRING_1411656130"}, Instrument_74);
  set_field(msg, FIX::InstrmtAssignmentMethod{'5'}, Instrument_74);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1355489858"}, Instrument_74);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_403315736"}, Instrument_74);
  set_field(msg, FIX::Issuer{"STRING_1520019800"}, Instrument_74);
  set_field(msg, FIX::ListMethod{1}, Instrument_74);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1854207684"}, Instrument_74);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_754366535"}, Instrument_74);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1998827859"}, Instrument_74);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1385986979"}, Instrument_74);
  FIX::MinPriceIncrement MinPriceIncrement_74;
  MinPriceIncrement_74.setString("2055846");
set_field(msg, MinPriceIncrement_74, Instrument_74);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
  MinPriceIncrementAmount_74.setString("8391369");
set_field(msg, MinPriceIncrementAmount_74, Instrument_74);
  set_field(msg, FIX::NTPositionLimit{1418590160}, Instrument_74);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
  NotionalPercentageOutstanding_74.setString("35.750000");
set_field(msg, NotionalPercentageOutstanding_74, Instrument_74);
  set_field(msg, FIX::OptAttribute{'8'}, Instrument_74);
  FIX::OptPayoutAmount OptPayoutAmount_74;
  OptPayoutAmount_74.setString("1868281");
set_field(msg, OptPayoutAmount_74, Instrument_74);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_74);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
  OriginalNotionalPercentageOutstanding_74.setString("96.250000");
set_field(msg, OriginalNotionalPercentageOutstanding_74, Instrument_74);
  set_field(msg, FIX::Pool{"STRING_1301279963"}, Instrument_74);
  set_field(msg, FIX::PositionLimit{1793146571}, Instrument_74);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_74);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_219597748"}, Instrument_74);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
  PriceUnitOfMeasureQty_74.setString("11945028");
set_field(msg, PriceUnitOfMeasureQty_74, Instrument_74);
  set_field(msg, FIX::Product{1}, Instrument_74);
  set_field(msg, FIX::ProductComplex{"STRING_832102022"}, Instrument_74);
  set_field(msg, FIX::PutOrCall{1}, Instrument_74);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1057663125"}, Instrument_74);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1838180755"}, Instrument_74);
  FIX::RepurchaseRate RepurchaseRate_74;
  RepurchaseRate_74.setString("65.400000");
set_field(msg, RepurchaseRate_74, Instrument_74);
  set_field(msg, FIX::RepurchaseTerm{1698668501}, Instrument_74);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_74);
  set_field(msg, FIX::SecurityDesc{"STRING_915539022"}, Instrument_74);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_58448456"}, Instrument_74);
  set_field(msg, FIX::SecurityGroup{"STRING_563214617"}, Instrument_74);
  set_field(msg, FIX::SecurityID{"STRING_1318854758"}, Instrument_74);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_74);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_74);
  set_field(msg, FIX::SecuritySubType{"STRING_1025578794"}, Instrument_74);
  set_field(msg, FIX::SecurityType{"STRING_RVLVTRM"}, Instrument_74);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_74);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_74);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_390935790"}, Instrument_74);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_33653373"}, Instrument_74);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_74);
  FIX::StrikeMultiplier StrikeMultiplier_74;
  StrikeMultiplier_74.setString("8628487");
set_field(msg, StrikeMultiplier_74, Instrument_74);
  FIX::StrikePrice StrikePrice_74;
  StrikePrice_74.setString("18695004");
set_field(msg, StrikePrice_74, Instrument_74);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_74);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
  StrikePriceBoundaryPrecision_74.setString("83.810000");
set_field(msg, StrikePriceBoundaryPrecision_74, Instrument_74);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_74);
  FIX::StrikeValue StrikeValue_74;
  StrikeValue_74.setString("14655010");
set_field(msg, StrikeValue_74, Instrument_74);
  set_field(msg, FIX::Symbol{"STRING_1205228655"}, Instrument_74);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_74);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_74);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_74);
  set_field(msg, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_74);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
  UnitOfMeasureQty_74.setString("5988616");
set_field(msg, UnitOfMeasureQty_74, Instrument_74);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_74);
  all_values.push_back(Instrument_74);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_151;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexEventPrice ComplexEventPrice_151;
    ComplexEventPrice_151.setString("4925692");
set_field(noComplexEvents_0_0, ComplexEventPrice_151, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
    ComplexEventPriceBoundaryPrecision_151.setString("35.230000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_151, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
    ComplexOptPayoutAmount_151.setString("1896546");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_151, ComplexEvents_NoComplexEvents_151);
    all_values.push_back(ComplexEvents_NoComplexEvents_151);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_301;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 10, 38, 10, 5, 2012)}, ComplexEventDates_NoComplexEventDates_301);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 47, 11, 9, 1, 2009)}, ComplexEventDates_NoComplexEventDates_301);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_301);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 44, 59)}, ComplexEventTimes_NoComplexEventTimes_616);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 47, 33)}, ComplexEventTimes_NoComplexEventTimes_616);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 53, 50)}, ComplexEventTimes_NoComplexEventTimes_617);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 24, 45)}, ComplexEventTimes_NoComplexEventTimes_617);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 55, 52)}, ComplexEventTimes_NoComplexEventTimes_618);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 4, 10)}, ComplexEventTimes_NoComplexEventTimes_618);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_302;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 13, 27, 12, 4, 2017)}, ComplexEventDates_NoComplexEventDates_302);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 48, 19, 24, 10, 2010)}, ComplexEventDates_NoComplexEventDates_302);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_302);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 14, 58)}, ComplexEventTimes_NoComplexEventTimes_619);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 22, 54)}, ComplexEventTimes_NoComplexEventTimes_619);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_152;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexEventPrice ComplexEventPrice_152;
    ComplexEventPrice_152.setString("17676709");
set_field(noComplexEvents_0_1, ComplexEventPrice_152, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
    ComplexEventPriceBoundaryPrecision_152.setString("9.270000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_152, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_152);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_152);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
    ComplexOptPayoutAmount_152.setString("11013980");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_152, ComplexEvents_NoComplexEvents_152);
    all_values.push_back(ComplexEvents_NoComplexEvents_152);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_303;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 13, 9, 0, 5, 2007)}, ComplexEventDates_NoComplexEventDates_303);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 1, 56, 23, 3, 2010)}, ComplexEventDates_NoComplexEventDates_303);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_303);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 55, 12)}, ComplexEventTimes_NoComplexEventTimes_620);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 26, 41)}, ComplexEventTimes_NoComplexEventTimes_620);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_304;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 23, 25, 10, 9, 2016)}, ComplexEventDates_NoComplexEventDates_304);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 40, 26, 20, 5, 2016)}, ComplexEventDates_NoComplexEventDates_304);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_304);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 30, 36)}, ComplexEventTimes_NoComplexEventTimes_621);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 23, 57)}, ComplexEventTimes_NoComplexEventTimes_621);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 52, 11)}, ComplexEventTimes_NoComplexEventTimes_622);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 30, 13)}, ComplexEventTimes_NoComplexEventTimes_622);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_305;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 28, 30, 25, 1, 2015)}, ComplexEventDates_NoComplexEventDates_305);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 43, 41, 10, 12, 2003)}, ComplexEventDates_NoComplexEventDates_305);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_305);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 37, 4)}, ComplexEventTimes_NoComplexEventTimes_623);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 27, 30)}, ComplexEventTimes_NoComplexEventTimes_623);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 14, 24)}, ComplexEventTimes_NoComplexEventTimes_624);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 46, 4)}, ComplexEventTimes_NoComplexEventTimes_624);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_149;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1993142261"}, EvntGrp_NoEvents_149);
    FIX::EventPx EventPx_149;
    EventPx_149.setString("13964253");
set_field(noEvents_0_0, EventPx_149, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventText{"STRING_367182290"}, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 53, 57, 2, 1, 2008)}, EvntGrp_NoEvents_149);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_149);
    all_values.push_back(EvntGrp_NoEvents_149);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_136;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_849071961"}, InstrumentParties_NoInstrumentParties_136);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_136);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{955396250}, InstrumentParties_NoInstrumentParties_136);
    all_values.push_back(InstrumentParties_NoInstrumentParties_136);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1185091914"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1289966454}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_685220900"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{549398408}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_137;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_956682673"}, InstrumentParties_NoInstrumentParties_137);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_137);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{388937541}, InstrumentParties_NoInstrumentParties_137);
    all_values.push_back(InstrumentParties_NoInstrumentParties_137);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_804448317"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1968347685}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1040694316"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1537203979}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_138;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_97262484"}, InstrumentParties_NoInstrumentParties_138);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_138);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{206819858}, InstrumentParties_NoInstrumentParties_138);
    all_values.push_back(InstrumentParties_NoInstrumentParties_138);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1489763864"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{574002148}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_962355640"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1448192948}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1058404161"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1176435637}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_150;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1830038157"}, SecAltIDGrp_NoSecurityAltID_150);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_32949787"}, SecAltIDGrp_NoSecurityAltID_150);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_151;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1883862895"}, SecAltIDGrp_NoSecurityAltID_151);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_894137412"}, SecAltIDGrp_NoSecurityAltID_151);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_148;
  set_field(msg, FIX::SecurityXML{"XMLDATA_882021748"}, SecurityXML_148);
  set_field(msg, FIX::SecurityXMLLen{190213864}, SecurityXML_148);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1849533663"}, SecurityXML_148);
  all_values.push_back(SecurityXML_148);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1375305778"}, Parties_NoPartyIDs_125);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_125);
    set_field(noPartyIDs_0_0, FIX::PartyRole{49}, Parties_NoPartyIDs_125);
    all_values.push_back(Parties_NoPartyIDs_125);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1948699143"}, PtysSubGrp_NoPartySubIDs_248);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_248);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_18;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_353901980"}, TargetParties_NoTargetPartyIDs_18);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'7'}, TargetParties_NoTargetPartyIDs_18);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{2134505764}, TargetParties_NoTargetPartyIDs_18);
    all_values.push_back(TargetParties_NoTargetPartyIDs_18);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_19;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1394596296"}, TargetParties_NoTargetPartyIDs_19);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_19);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{84284600}, TargetParties_NoTargetPartyIDs_19);
    all_values.push_back(TargetParties_NoTargetPartyIDs_19);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_110;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_326653196"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{27205698}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_830215044"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{900655344}, UnderlyingInstrument_110);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
    UnderlyingAdjustedQuantity_110.setString("9895613");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_110, UnderlyingInstrument_110);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
    UnderlyingAllocationPercent_110.setString("43.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_110, UnderlyingInstrument_110);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
    UnderlyingAttachmentPoint_110.setString("95.060000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_18513327"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_11774942"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1641614015"}, UnderlyingInstrument_110);
    FIX::UnderlyingCapValue UnderlyingCapValue_110;
    UnderlyingCapValue_110.setString("514631");
set_field(noUnderlyings_0_0, UnderlyingCapValue_110, UnderlyingInstrument_110);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
    UnderlyingCashAmount_110.setString("18956378");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_110);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
    UnderlyingContractMultiplier_110.setString("9334848");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2085851702}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_90317795"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_207853749"}, UnderlyingInstrument_110);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
    UnderlyingCouponRate_110.setString("38.320000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1082334264"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_110);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
    UnderlyingCurrentValue_110.setString("8835497");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_110, UnderlyingInstrument_110);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
    UnderlyingDetachmentPoint_110.setString("82.260000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_110, UnderlyingInstrument_110);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
    UnderlyingDirtyPrice_110.setString("12570524");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_110, UnderlyingInstrument_110);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
    UnderlyingEndPrice_110.setString("12374517");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_110, UnderlyingInstrument_110);
    FIX::UnderlyingEndValue UnderlyingEndValue_110;
    UnderlyingEndValue_110.setString("8232212");
set_field(noUnderlyings_0_0, UnderlyingEndValue_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1244074565}, UnderlyingInstrument_110);
    FIX::UnderlyingFXRate UnderlyingFXRate_110;
    UnderlyingFXRate_110.setString("4845643");
set_field(noUnderlyings_0_0, UnderlyingFXRate_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_110);
    FIX::UnderlyingFactor UnderlyingFactor_110;
    UnderlyingFactor_110.setString("13283591");
set_field(noUnderlyings_0_0, UnderlyingFactor_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1972499215}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1269707766"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1355564864"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_655230611"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_22879462"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_197642554"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_786154955"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1981938968"}, UnderlyingInstrument_110);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
    UnderlyingNotionalPercentageOutstanding_110.setString("58.810000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_110);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
    UnderlyingOriginalNotionalPercentageOutstanding_110.setString("93.360000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_267618995"}, UnderlyingInstrument_110);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
    UnderlyingPriceUnitOfMeasureQty_110.setString("5460840");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1864337116}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1201103857}, UnderlyingInstrument_110);
    FIX::UnderlyingPx UnderlyingPx_110;
    UnderlyingPx_110.setString("4844521");
set_field(noUnderlyings_0_0, UnderlyingPx_110, UnderlyingInstrument_110);
    FIX::UnderlyingQty UnderlyingQty_110;
    UnderlyingQty_110.setString("19546549");
set_field(noUnderlyings_0_0, UnderlyingQty_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1408957607"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1798125974"}, UnderlyingInstrument_110);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
    UnderlyingRepurchaseRate_110.setString("55.270000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1576401143}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_741536696"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1773055287"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1669509369"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1998589145"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_863023378"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_345246954"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1095180062"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1347587766"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1288301524"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_110);
    FIX::UnderlyingStartValue UnderlyingStartValue_110;
    UnderlyingStartValue_110.setString("11726033");
set_field(noUnderlyings_0_0, UnderlyingStartValue_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_410525642"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_110);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
    UnderlyingStrikePrice_110.setString("4334051");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_110, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1829262998"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_466505252"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_267860425"}, UnderlyingInstrument_110);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_2045418879"}, UnderlyingInstrument_110);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
    UnderlyingUnitOfMeasureQty_110.setString("12644351");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_110, UnderlyingInstrument_110);
    all_values.push_back(UnderlyingInstrument_110);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_165554226"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1810519238"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1460783229"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1366658084"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1267954492"}, UnderlyingStipulations_NoUnderlyingStips_218);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_628132043"}, UnderlyingStipulations_NoUnderlyingStips_218);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1945613706"}, UnderlyingStipulations_NoUnderlyingStips_219);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_9976371"}, UnderlyingStipulations_NoUnderlyingStips_219);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_539666754"}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1726558908}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_498571389"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2071805862}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1485952314"}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1212623738}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_871278840"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1623149380}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1246144691"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{551629137}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2056554484"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{927924041}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1018134390"}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{825859273}, UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1920861022"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{991413499}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1945605131"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1234160603}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_210587935"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{2093092863}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_74;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_74);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_838719978"}, header_74);
  set_header_field(msg.getHeader(), FIX::BodyLength{1891222922}, header_74);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_364607819"}, header_74);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_895769517"}, header_74);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_283406028"}, header_74);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_155829"}, header_74);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{474844777}, header_74);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_74);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{498727218}, header_74);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_399166991"}, header_74);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_12646946"}, header_74);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_197402725"}, header_74);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 26, 21, 27, 12, 2011)}, header_74);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_74);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_74);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1173458559"}, header_74);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{479615550}, header_74);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_626047338"}, header_74);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_946835933"}, header_74);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1471029049"}, header_74);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(9, 45, 16, 20, 8, 2004)}, header_74);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_752752155"}, header_74);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1268622832"}, header_74);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_396923339"}, header_74);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_752907985"}, header_74);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1743467609}, header_74);
  all_values.push_back(header_74);
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
