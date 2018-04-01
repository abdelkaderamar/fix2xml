#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::QuoteStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_1911818003"}, QuoteStatusRequest_0);
  set_field(msg, FIX::AccountType{6}, QuoteStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{99}, QuoteStatusRequest_0);
  set_field(msg, FIX::QuoteID{"STRING_86113192"}, QuoteStatusRequest_0);
  set_field(msg, FIX::QuoteStatusReqID{"STRING_1163083149"}, QuoteStatusRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, QuoteStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, QuoteStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, QuoteStatusRequest_0);
  all_values.push_back(QuoteStatusRequest_0);

  all_compo_names.insert("QuoteStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_24;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1466815306"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementDesc{"STRING_1033942491"}, FinancingDetails_24);
  set_field(msg, FIX::AgreementID{"STRING_308058275"}, FinancingDetails_24);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_24);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1830036414"}, FinancingDetails_24);
  FIX::MarginRatio MarginRatio_24;
  MarginRatio_24.setString("11.040000");
set_field(msg, MarginRatio_24, FinancingDetails_24);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_317163423"}, FinancingDetails_24);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_24);
  all_values.push_back(FinancingDetails_24);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_86;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_979661850"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1439711691}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_876816861"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1978310133}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_589726336"}, InstrumentLeg_86);
    FIX::LegContractMultiplier LegContractMultiplier_86;
    LegContractMultiplier_86.setString("5607631");
set_field(noLegs_0_0, LegContractMultiplier_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{779086807}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_343081708"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_386128772"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_534254705"}, InstrumentLeg_86);
    FIX::LegCouponRate LegCouponRate_86;
    LegCouponRate_86.setString("97.630000");
set_field(noLegs_0_0, LegCouponRate_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1040898968"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_503789981"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{384702252}, InstrumentLeg_86);
    FIX::LegFactor LegFactor_86;
    LegFactor_86.setString("20498222");
set_field(noLegs_0_0, LegFactor_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2074854676}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_336477912"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2081748344"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1088920102"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1940329282"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1401080003"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2122862593"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_100903910"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_66760325"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_86);
    FIX::LegOptionRatio LegOptionRatio_86;
    LegOptionRatio_86.setString("13995650");
set_field(noLegs_0_0, LegOptionRatio_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_383923749"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_904398917"}, InstrumentLeg_86);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
    LegPriceUnitOfMeasureQty_86.setString("2519097");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegProduct{1363585599}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPutOrCall{196626960}, InstrumentLeg_86);
    FIX::LegRatioQty LegRatioQty_86;
    LegRatioQty_86.setString("11287266");
set_field(noLegs_0_0, LegRatioQty_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1194412084"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_786353296"}, InstrumentLeg_86);
    FIX::LegRepurchaseRate LegRepurchaseRate_86;
    LegRepurchaseRate_86.setString("97.770000");
set_field(noLegs_0_0, LegRepurchaseRate_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1973498892}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1129435005"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_2075618549"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_360269949"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1676484768"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_969033869"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_658859010"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSide{'4'}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1472823850"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_86);
    FIX::LegStrikePrice LegStrikePrice_86;
    LegStrikePrice_86.setString("14001948");
set_field(noLegs_0_0, LegStrikePrice_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1380039174"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_252343496"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_341631333"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1172884809"}, InstrumentLeg_86);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
    LegUnitOfMeasureQty_86.setString("16534234");
set_field(noLegs_0_0, LegUnitOfMeasureQty_86, InstrumentLeg_86);
    all_values.push_back(InstrumentLeg_86);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1273788719"}, LegSecAltIDGrp_NoLegSecurityAltID_178);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1720183824"}, LegSecAltIDGrp_NoLegSecurityAltID_178);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_61;
  FIX::AttachmentPoint AttachmentPoint_61;
  AttachmentPoint_61.setString("56.380000");
set_field(msg, AttachmentPoint_61, Instrument_61);
  set_field(msg, FIX::CFICode{"STRING_525870085"}, Instrument_61);
  set_field(msg, FIX::CPProgram{1}, Instrument_61);
  set_field(msg, FIX::CPRegType{"STRING_879340907"}, Instrument_61);
  FIX::CapPrice CapPrice_61;
  CapPrice_61.setString("7777798");
set_field(msg, CapPrice_61, Instrument_61);
  FIX::ContractMultiplier ContractMultiplier_61;
  ContractMultiplier_61.setString("13202095");
set_field(msg, ContractMultiplier_61, Instrument_61);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_61);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1906506503"}, Instrument_61);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_367137961"}, Instrument_61);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1862321164"}, Instrument_61);
  FIX::CouponRate CouponRate_61;
  CouponRate_61.setString("26.320000");
set_field(msg, CouponRate_61, Instrument_61);
  set_field(msg, FIX::CreditRating{"STRING_193153205"}, Instrument_61);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_844272521"}, Instrument_61);
  FIX::DetachmentPoint DetachmentPoint_61;
  DetachmentPoint_61.setString("75.330000");
set_field(msg, DetachmentPoint_61, Instrument_61);
  set_field(msg, FIX::EncodedIssuer{"DATA_553423154"}, Instrument_61);
  set_field(msg, FIX::EncodedIssuerLen{373273641}, Instrument_61);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_198197755"}, Instrument_61);
  set_field(msg, FIX::EncodedSecurityDescLen{1212282164}, Instrument_61);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_61);
  FIX::Factor Factor_61;
  Factor_61.setString("16710216");
set_field(msg, Factor_61, Instrument_61);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_61);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_61);
  FIX::FloorPrice FloorPrice_61;
  FloorPrice_61.setString("9237328");
set_field(msg, FloorPrice_61, Instrument_61);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_61);
  set_field(msg, FIX::InstrRegistry{"STRING_1359436145"}, Instrument_61);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_61);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_513800114"}, Instrument_61);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_865375996"}, Instrument_61);
  set_field(msg, FIX::Issuer{"STRING_1582374449"}, Instrument_61);
  set_field(msg, FIX::ListMethod{1}, Instrument_61);
  set_field(msg, FIX::LocaleOfIssue{"STRING_438076173"}, Instrument_61);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1557316439"}, Instrument_61);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_165975271"}, Instrument_61);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_394700098"}, Instrument_61);
  FIX::MinPriceIncrement MinPriceIncrement_61;
  MinPriceIncrement_61.setString("2891736");
set_field(msg, MinPriceIncrement_61, Instrument_61);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
  MinPriceIncrementAmount_61.setString("9437551");
set_field(msg, MinPriceIncrementAmount_61, Instrument_61);
  set_field(msg, FIX::NTPositionLimit{1714909623}, Instrument_61);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
  NotionalPercentageOutstanding_61.setString("15.660000");
set_field(msg, NotionalPercentageOutstanding_61, Instrument_61);
  set_field(msg, FIX::OptAttribute{'7'}, Instrument_61);
  FIX::OptPayoutAmount OptPayoutAmount_61;
  OptPayoutAmount_61.setString("20820475");
set_field(msg, OptPayoutAmount_61, Instrument_61);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_61);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
  OriginalNotionalPercentageOutstanding_61.setString("69.730000");
set_field(msg, OriginalNotionalPercentageOutstanding_61, Instrument_61);
  set_field(msg, FIX::Pool{"STRING_127717141"}, Instrument_61);
  set_field(msg, FIX::PositionLimit{1924251603}, Instrument_61);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_61);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_681140295"}, Instrument_61);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
  PriceUnitOfMeasureQty_61.setString("1500415");
set_field(msg, PriceUnitOfMeasureQty_61, Instrument_61);
  set_field(msg, FIX::Product{6}, Instrument_61);
  set_field(msg, FIX::ProductComplex{"STRING_1893422460"}, Instrument_61);
  set_field(msg, FIX::PutOrCall{0}, Instrument_61);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1102190219"}, Instrument_61);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_2001782239"}, Instrument_61);
  FIX::RepurchaseRate RepurchaseRate_61;
  RepurchaseRate_61.setString("80.960000");
set_field(msg, RepurchaseRate_61, Instrument_61);
  set_field(msg, FIX::RepurchaseTerm{2025923056}, Instrument_61);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_61);
  set_field(msg, FIX::SecurityDesc{"STRING_1258100593"}, Instrument_61);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1143803578"}, Instrument_61);
  set_field(msg, FIX::SecurityGroup{"STRING_1856497659"}, Instrument_61);
  set_field(msg, FIX::SecurityID{"STRING_2123476590"}, Instrument_61);
  set_field(msg, FIX::SecurityIDSource{"STRING_M"}, Instrument_61);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_61);
  set_field(msg, FIX::SecuritySubType{"STRING_414069115"}, Instrument_61);
  set_field(msg, FIX::SecurityType{"STRING_MTN"}, Instrument_61);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_61);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_61);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_277700869"}, Instrument_61);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_458849602"}, Instrument_61);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_61);
  FIX::StrikeMultiplier StrikeMultiplier_61;
  StrikeMultiplier_61.setString("11616275");
set_field(msg, StrikeMultiplier_61, Instrument_61);
  FIX::StrikePrice StrikePrice_61;
  StrikePrice_61.setString("3107591");
set_field(msg, StrikePrice_61, Instrument_61);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_61);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
  StrikePriceBoundaryPrecision_61.setString("45.650000");
set_field(msg, StrikePriceBoundaryPrecision_61, Instrument_61);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_61);
  FIX::StrikeValue StrikeValue_61;
  StrikeValue_61.setString("3521058");
set_field(msg, StrikeValue_61, Instrument_61);
  set_field(msg, FIX::Symbol{"STRING_398405424"}, Instrument_61);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_61);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_61);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_61);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_61);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
  UnitOfMeasureQty_61.setString("14412028");
set_field(msg, UnitOfMeasureQty_61, Instrument_61);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_61);
  all_values.push_back(Instrument_61);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_126;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexEventPrice ComplexEventPrice_126;
    ComplexEventPrice_126.setString("8102036");
set_field(noComplexEvents_0_0, ComplexEventPrice_126, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
    ComplexEventPriceBoundaryPrecision_126.setString("42.620000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_126, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_126);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_126);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
    ComplexOptPayoutAmount_126.setString("4264772");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_126, ComplexEvents_NoComplexEvents_126);
    all_values.push_back(ComplexEvents_NoComplexEvents_126);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_264;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 45, 43, 5, 11, 2005)}, ComplexEventDates_NoComplexEventDates_264);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 49, 38, 21, 3, 2011)}, ComplexEventDates_NoComplexEventDates_264);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_264);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 21, 56)}, ComplexEventTimes_NoComplexEventTimes_534);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 5, 13)}, ComplexEventTimes_NoComplexEventTimes_534);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_265;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 34, 54, 26, 2, 2012)}, ComplexEventDates_NoComplexEventDates_265);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 38, 6, 25, 8, 2002)}, ComplexEventDates_NoComplexEventDates_265);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_265);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 31, 14)}, ComplexEventTimes_NoComplexEventTimes_535);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 38, 7)}, ComplexEventTimes_NoComplexEventTimes_535);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);
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
    multiset<string> ComplexEvents_NoComplexEvents_127;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexEventPrice ComplexEventPrice_127;
    ComplexEventPrice_127.setString("15753095");
set_field(noComplexEvents_0_1, ComplexEventPrice_127, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
    ComplexEventPriceBoundaryPrecision_127.setString("56.830000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_127, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_127);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_127);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
    ComplexOptPayoutAmount_127.setString("19768430");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_127, ComplexEvents_NoComplexEvents_127);
    all_values.push_back(ComplexEvents_NoComplexEvents_127);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_266;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 35, 0, 10, 2, 2013)}, ComplexEventDates_NoComplexEventDates_266);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 49, 29, 11, 1, 2002)}, ComplexEventDates_NoComplexEventDates_266);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_266);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 37, 7)}, ComplexEventTimes_NoComplexEventTimes_536);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 37, 44)}, ComplexEventTimes_NoComplexEventTimes_536);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);
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
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_122;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_159969983"}, EvntGrp_NoEvents_122);
    FIX::EventPx EventPx_122;
    EventPx_122.setString("13515178");
set_field(noEvents_0_0, EventPx_122, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1994571858"}, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 19, 29, 22, 8, 2010)}, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventType{11}, EvntGrp_NoEvents_122);
    all_values.push_back(EvntGrp_NoEvents_122);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_123;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_284219453"}, EvntGrp_NoEvents_123);
    FIX::EventPx EventPx_123;
    EventPx_123.setString("19142232");
set_field(noEvents_0_1, EventPx_123, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventText{"STRING_252912861"}, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 10, 54, 23, 3, 2012)}, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_123);
    all_values.push_back(EvntGrp_NoEvents_123);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_124;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1758979347"}, EvntGrp_NoEvents_124);
    FIX::EventPx EventPx_124;
    EventPx_124.setString("12065392");
set_field(noEvents_0_2, EventPx_124, EvntGrp_NoEvents_124);
    set_field(noEvents_0_2, FIX::EventText{"STRING_518877059"}, EvntGrp_NoEvents_124);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(18, 6, 3, 22, 9, 2008)}, EvntGrp_NoEvents_124);
    set_field(noEvents_0_2, FIX::EventType{8}, EvntGrp_NoEvents_124);
    all_values.push_back(EvntGrp_NoEvents_124);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_114;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1460069866"}, InstrumentParties_NoInstrumentParties_114);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_114);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{462616301}, InstrumentParties_NoInstrumentParties_114);
    all_values.push_back(InstrumentParties_NoInstrumentParties_114);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1475950588"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1065094344}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1603212731"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2100545079}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_123;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1369952289"}, SecAltIDGrp_NoSecurityAltID_123);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_205974292"}, SecAltIDGrp_NoSecurityAltID_123);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_122;
  set_field(msg, FIX::SecurityXML{"XMLDATA_456203615"}, SecurityXML_122);
  set_field(msg, FIX::SecurityXMLLen{1587772141}, SecurityXML_122);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1867212123"}, SecurityXML_122);
  all_values.push_back(SecurityXML_122);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_112;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_442123336"}, Parties_NoPartyIDs_112);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_112);
    set_field(noPartyIDs_0_0, FIX::PartyRole{24}, Parties_NoPartyIDs_112);
    all_values.push_back(Parties_NoPartyIDs_112);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_230;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1535141808"}, PtysSubGrp_NoPartySubIDs_230);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_230);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_230);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_231;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2026930065"}, PtysSubGrp_NoPartySubIDs_231);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_231);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_231);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_18;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_514330723"}, TargetParties_NoTargetPartyIDs_18);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_18);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1278925568}, TargetParties_NoTargetPartyIDs_18);
    all_values.push_back(TargetParties_NoTargetPartyIDs_18);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_19;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1453411203"}, TargetParties_NoTargetPartyIDs_19);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'4'}, TargetParties_NoTargetPartyIDs_19);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{1354245675}, TargetParties_NoTargetPartyIDs_19);
    all_values.push_back(TargetParties_NoTargetPartyIDs_19);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_20;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_92096246"}, TargetParties_NoTargetPartyIDs_20);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_20);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{894459866}, TargetParties_NoTargetPartyIDs_20);
    all_values.push_back(TargetParties_NoTargetPartyIDs_20);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_107;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_165560593"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{222926806}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1619806892"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1768773324}, UnderlyingInstrument_107);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
    UnderlyingAdjustedQuantity_107.setString("1759882");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_107, UnderlyingInstrument_107);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
    UnderlyingAllocationPercent_107.setString("70.420000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_107, UnderlyingInstrument_107);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
    UnderlyingAttachmentPoint_107.setString("19.650000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_381962530"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1277840657"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_431530458"}, UnderlyingInstrument_107);
    FIX::UnderlyingCapValue UnderlyingCapValue_107;
    UnderlyingCapValue_107.setString("1016910");
set_field(noUnderlyings_0_0, UnderlyingCapValue_107, UnderlyingInstrument_107);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
    UnderlyingCashAmount_107.setString("13257621");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_107);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
    UnderlyingContractMultiplier_107.setString("20253371");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1616349888}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_234223153"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1412995275"}, UnderlyingInstrument_107);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
    UnderlyingCouponRate_107.setString("32.160000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_113669570"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_107);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
    UnderlyingCurrentValue_107.setString("6280002");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_107, UnderlyingInstrument_107);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
    UnderlyingDetachmentPoint_107.setString("94.830000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_107, UnderlyingInstrument_107);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
    UnderlyingDirtyPrice_107.setString("5050748");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_107, UnderlyingInstrument_107);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
    UnderlyingEndPrice_107.setString("20814114");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_107, UnderlyingInstrument_107);
    FIX::UnderlyingEndValue UnderlyingEndValue_107;
    UnderlyingEndValue_107.setString("7286595");
set_field(noUnderlyings_0_0, UnderlyingEndValue_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1859320502}, UnderlyingInstrument_107);
    FIX::UnderlyingFXRate UnderlyingFXRate_107;
    UnderlyingFXRate_107.setString("260240");
set_field(noUnderlyings_0_0, UnderlyingFXRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_107);
    FIX::UnderlyingFactor UnderlyingFactor_107;
    UnderlyingFactor_107.setString("6062967");
set_field(noUnderlyings_0_0, UnderlyingFactor_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{580736642}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_616866430"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_829223526"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_53059886"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_238156106"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1005211764"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_874696928"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1229398072"}, UnderlyingInstrument_107);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
    UnderlyingNotionalPercentageOutstanding_107.setString("42.940000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_107);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
    UnderlyingOriginalNotionalPercentageOutstanding_107.setString("85.300000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1488865299"}, UnderlyingInstrument_107);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
    UnderlyingPriceUnitOfMeasureQty_107.setString("13308161");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{387098677}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1366718765}, UnderlyingInstrument_107);
    FIX::UnderlyingPx UnderlyingPx_107;
    UnderlyingPx_107.setString("7996823");
set_field(noUnderlyings_0_0, UnderlyingPx_107, UnderlyingInstrument_107);
    FIX::UnderlyingQty UnderlyingQty_107;
    UnderlyingQty_107.setString("6213218");
set_field(noUnderlyings_0_0, UnderlyingQty_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_632230392"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1765675592"}, UnderlyingInstrument_107);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
    UnderlyingRepurchaseRate_107.setString("14.000000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1948092994}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_991824850"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1362991693"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_119208829"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1496899676"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1296919542"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_847868380"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1208736530"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1322943636"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1299174217"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_107);
    FIX::UnderlyingStartValue UnderlyingStartValue_107;
    UnderlyingStartValue_107.setString("19036802");
set_field(noUnderlyings_0_0, UnderlyingStartValue_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1916040647"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_107);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
    UnderlyingStrikePrice_107.setString("67131");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1501984893"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_683953444"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1236111177"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_741675539"}, UnderlyingInstrument_107);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
    UnderlyingUnitOfMeasureQty_107.setString("6890073");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_107, UnderlyingInstrument_107);
    all_values.push_back(UnderlyingInstrument_107);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_83057190"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2019823517"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1449775955"}, UnderlyingStipulations_NoUnderlyingStips_217);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_672022245"}, UnderlyingStipulations_NoUnderlyingStips_217);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1757976568"}, UnderlyingStipulations_NoUnderlyingStips_218);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2082006348"}, UnderlyingStipulations_NoUnderlyingStips_218);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_345484320"}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1282039039}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2001824523"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{631455067}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_857911908"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{702209255}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1840191598"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{33371896}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_2001383472"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1507741200}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1937052175"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1769940471}, UnderlyingInstrument_108);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("20045143");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_108, UnderlyingInstrument_108);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("86.910000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_108, UnderlyingInstrument_108);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("35.760000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1359015574"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_282778488"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_865281106"}, UnderlyingInstrument_108);
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("21006911");
set_field(noUnderlyings_0_1, UnderlyingCapValue_108, UnderlyingInstrument_108);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("9717858");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_108);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("362646");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{844125738}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_604008255"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1486040611"}, UnderlyingInstrument_108);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("79.830000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_214501175"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_108);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("5599854");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_108, UnderlyingInstrument_108);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("53.570000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_108, UnderlyingInstrument_108);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("9409175");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_108, UnderlyingInstrument_108);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("1209778");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_108, UnderlyingInstrument_108);
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("10100362");
set_field(noUnderlyings_0_1, UnderlyingEndValue_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1572372631}, UnderlyingInstrument_108);
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("9788897");
set_field(noUnderlyings_0_1, UnderlyingFXRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_108);
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("12650805");
set_field(noUnderlyings_0_1, UnderlyingFactor_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1012261666}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1566145311"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_625338133"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_801830193"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1188602134"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_482368815"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_400655237"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_817772062"}, UnderlyingInstrument_108);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("43.890000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_108);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("31.680000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1794591855"}, UnderlyingInstrument_108);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("16552195");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1150406686}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1830856510}, UnderlyingInstrument_108);
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("3518616");
set_field(noUnderlyings_0_1, UnderlyingPx_108, UnderlyingInstrument_108);
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("17544149");
set_field(noUnderlyings_0_1, UnderlyingQty_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1169413473"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1868009668"}, UnderlyingInstrument_108);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("61.170000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{442493136}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1526888193"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_381417965"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1598188493"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_320322108"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_502395827"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_460741077"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1892694739"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1481285597"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_25502916"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_108);
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("3460636");
set_field(noUnderlyings_0_1, UnderlyingStartValue_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1591648227"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_108);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("6327667");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_2117998621"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1548549046"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1450538776"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1811899362"}, UnderlyingInstrument_108);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("844991");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_108, UnderlyingInstrument_108);
    all_values.push_back(UnderlyingInstrument_108);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1459007569"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1739718718"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_2136514983"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1142380432"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1743446277"}, UnderlyingStipulations_NoUnderlyingStips_219);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_164310257"}, UnderlyingStipulations_NoUnderlyingStips_219);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1812106423"}, UnderlyingStipulations_NoUnderlyingStips_220);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1564878746"}, UnderlyingStipulations_NoUnderlyingStips_220);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_606803394"}, UnderlyingStipulations_NoUnderlyingStips_221);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1191510968"}, UnderlyingStipulations_NoUnderlyingStips_221);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_57508239"}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{301208891}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1257044168"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1782494489}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_543752233"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{119852193}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2128558105"}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1755481999}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_620683526"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1725996972}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_530033665"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2071222302}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1390412686"}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{909846951}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_206767858"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{898878286}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1844317040"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{150864613}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
