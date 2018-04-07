#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::CrossOrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_0;
  set_field(msg, FIX::CrossID{"STRING_430499347"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::CrossPrioritization{2}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::CrossType{4}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::HostCrossID{"STRING_978187078"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1747377763"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::OrigCrossID{"STRING_1293207679"}, CrossOrderCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 33, 34, 20, 5, 2004)}, CrossOrderCancelRequest_0);
  all_values.push_back(CrossOrderCancelRequest_0);

  all_compo_names.insert("CrossOrderCancelRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_25;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_991677302"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{6937177}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_921472929"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1980316907}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1159257243"}, InstrumentLeg_25);
    FIX::LegContractMultiplier LegContractMultiplier_25;
    LegContractMultiplier_25.setString("19296345");
set_field(noLegs_0_0, LegContractMultiplier_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{709691408}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_500127538"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_692573353"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_524986148"}, InstrumentLeg_25);
    FIX::LegCouponRate LegCouponRate_25;
    LegCouponRate_25.setString("43.960000");
set_field(noLegs_0_0, LegCouponRate_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1959369956"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2132742193"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{596438881}, InstrumentLeg_25);
    FIX::LegFactor LegFactor_25;
    LegFactor_25.setString("9730467");
set_field(noLegs_0_0, LegFactor_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{415757892}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_970765749"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_497546185"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1393944970"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_570659864"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1790753864"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1324654902"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1695557748"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_950953990"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_25);
    FIX::LegOptionRatio LegOptionRatio_25;
    LegOptionRatio_25.setString("16648658");
set_field(noLegs_0_0, LegOptionRatio_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_127655946"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_152304600"}, InstrumentLeg_25);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
    LegPriceUnitOfMeasureQty_25.setString("1605451");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegProduct{1119333248}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegPutOrCall{159241777}, InstrumentLeg_25);
    FIX::LegRatioQty LegRatioQty_25;
    LegRatioQty_25.setString("10820181");
set_field(noLegs_0_0, LegRatioQty_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_952166508"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1318499021"}, InstrumentLeg_25);
    FIX::LegRepurchaseRate LegRepurchaseRate_25;
    LegRepurchaseRate_25.setString("90.510000");
set_field(noLegs_0_0, LegRepurchaseRate_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1661857916}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1818626559"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1556742404"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_39360416"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_917847307"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1368628712"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_837513590"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSide{'6'}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1353887257"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_25);
    FIX::LegStrikePrice LegStrikePrice_25;
    LegStrikePrice_25.setString("17696451");
set_field(noLegs_0_0, LegStrikePrice_25, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_257234573"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_15989482"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1016106471"}, InstrumentLeg_25);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_827894438"}, InstrumentLeg_25);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
    LegUnitOfMeasureQty_25.setString("18067433");
set_field(noLegs_0_0, LegUnitOfMeasureQty_25, InstrumentLeg_25);
    all_values.push_back(InstrumentLeg_25);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_375968538"}, LegSecAltIDGrp_NoLegSecurityAltID_48);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_610213689"}, LegSecAltIDGrp_NoLegSecurityAltID_48);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1530215802"}, LegSecAltIDGrp_NoLegSecurityAltID_49);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_2040834399"}, LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_737869635"}, LegSecAltIDGrp_NoLegSecurityAltID_50);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1682520403"}, LegSecAltIDGrp_NoLegSecurityAltID_50);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_17;
  FIX::AttachmentPoint AttachmentPoint_17;
  AttachmentPoint_17.setString("59.310000");
set_field(msg, AttachmentPoint_17, Instrument_17);
  set_field(msg, FIX::CFICode{"STRING_1857202883"}, Instrument_17);
  set_field(msg, FIX::CPProgram{99}, Instrument_17);
  set_field(msg, FIX::CPRegType{"STRING_1135914041"}, Instrument_17);
  FIX::CapPrice CapPrice_17;
  CapPrice_17.setString("6618857");
set_field(msg, CapPrice_17, Instrument_17);
  FIX::ContractMultiplier ContractMultiplier_17;
  ContractMultiplier_17.setString("10127775");
set_field(msg, ContractMultiplier_17, Instrument_17);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_17);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_176260011"}, Instrument_17);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_683920464"}, Instrument_17);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1409341849"}, Instrument_17);
  FIX::CouponRate CouponRate_17;
  CouponRate_17.setString("4.280000");
set_field(msg, CouponRate_17, Instrument_17);
  set_field(msg, FIX::CreditRating{"STRING_1601767772"}, Instrument_17);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_630486914"}, Instrument_17);
  FIX::DetachmentPoint DetachmentPoint_17;
  DetachmentPoint_17.setString("40.180000");
set_field(msg, DetachmentPoint_17, Instrument_17);
  set_field(msg, FIX::EncodedIssuer{"DATA_147164271"}, Instrument_17);
  set_field(msg, FIX::EncodedIssuerLen{1984374171}, Instrument_17);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_339602842"}, Instrument_17);
  set_field(msg, FIX::EncodedSecurityDescLen{1813091216}, Instrument_17);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_17);
  FIX::Factor Factor_17;
  Factor_17.setString("5968374");
set_field(msg, Factor_17, Instrument_17);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_17);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_17);
  FIX::FloorPrice FloorPrice_17;
  FloorPrice_17.setString("14247318");
set_field(msg, FloorPrice_17, Instrument_17);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_17);
  set_field(msg, FIX::InstrRegistry{"STRING_668436222"}, Instrument_17);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_17);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2098554086"}, Instrument_17);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_51168377"}, Instrument_17);
  set_field(msg, FIX::Issuer{"STRING_1694051143"}, Instrument_17);
  set_field(msg, FIX::ListMethod{1}, Instrument_17);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1733688780"}, Instrument_17);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1747947075"}, Instrument_17);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_398659309"}, Instrument_17);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1427967312"}, Instrument_17);
  FIX::MinPriceIncrement MinPriceIncrement_17;
  MinPriceIncrement_17.setString("7363774");
set_field(msg, MinPriceIncrement_17, Instrument_17);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
  MinPriceIncrementAmount_17.setString("10605450");
set_field(msg, MinPriceIncrementAmount_17, Instrument_17);
  set_field(msg, FIX::NTPositionLimit{293261218}, Instrument_17);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
  NotionalPercentageOutstanding_17.setString("69.130000");
set_field(msg, NotionalPercentageOutstanding_17, Instrument_17);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_17);
  FIX::OptPayoutAmount OptPayoutAmount_17;
  OptPayoutAmount_17.setString("9771816");
set_field(msg, OptPayoutAmount_17, Instrument_17);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_17);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
  OriginalNotionalPercentageOutstanding_17.setString("54.920000");
set_field(msg, OriginalNotionalPercentageOutstanding_17, Instrument_17);
  set_field(msg, FIX::Pool{"STRING_431465806"}, Instrument_17);
  set_field(msg, FIX::PositionLimit{481322029}, Instrument_17);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_17);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_578630077"}, Instrument_17);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
  PriceUnitOfMeasureQty_17.setString("3182125");
set_field(msg, PriceUnitOfMeasureQty_17, Instrument_17);
  set_field(msg, FIX::Product{10}, Instrument_17);
  set_field(msg, FIX::ProductComplex{"STRING_244237645"}, Instrument_17);
  set_field(msg, FIX::PutOrCall{1}, Instrument_17);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1294516121"}, Instrument_17);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_2073318344"}, Instrument_17);
  FIX::RepurchaseRate RepurchaseRate_17;
  RepurchaseRate_17.setString("30.740000");
set_field(msg, RepurchaseRate_17, Instrument_17);
  set_field(msg, FIX::RepurchaseTerm{571764327}, Instrument_17);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_17);
  set_field(msg, FIX::SecurityDesc{"STRING_920859296"}, Instrument_17);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_224981071"}, Instrument_17);
  set_field(msg, FIX::SecurityGroup{"STRING_1365245532"}, Instrument_17);
  set_field(msg, FIX::SecurityID{"STRING_972027673"}, Instrument_17);
  set_field(msg, FIX::SecurityIDSource{"STRING_2"}, Instrument_17);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_17);
  set_field(msg, FIX::SecuritySubType{"STRING_558232805"}, Instrument_17);
  set_field(msg, FIX::SecurityType{"STRING_IET"}, Instrument_17);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_17);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_17);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_108389462"}, Instrument_17);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1365906319"}, Instrument_17);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_17);
  FIX::StrikeMultiplier StrikeMultiplier_17;
  StrikeMultiplier_17.setString("4552277");
set_field(msg, StrikeMultiplier_17, Instrument_17);
  FIX::StrikePrice StrikePrice_17;
  StrikePrice_17.setString("11091593");
set_field(msg, StrikePrice_17, Instrument_17);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_17);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
  StrikePriceBoundaryPrecision_17.setString("32.270000");
set_field(msg, StrikePriceBoundaryPrecision_17, Instrument_17);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_17);
  FIX::StrikeValue StrikeValue_17;
  StrikeValue_17.setString("10295235");
set_field(msg, StrikeValue_17, Instrument_17);
  set_field(msg, FIX::Symbol{"STRING_118245441"}, Instrument_17);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_17);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_17);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_17);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_17);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
  UnitOfMeasureQty_17.setString("11250006");
set_field(msg, UnitOfMeasureQty_17, Instrument_17);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_17);
  all_values.push_back(Instrument_17);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_40;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_40);
    FIX::ComplexEventPrice ComplexEventPrice_40;
    ComplexEventPrice_40.setString("5347209");
set_field(noComplexEvents_0_0, ComplexEventPrice_40, ComplexEvents_NoComplexEvents_40);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_40);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
    ComplexEventPriceBoundaryPrecision_40.setString("93.720000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_40, ComplexEvents_NoComplexEvents_40);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_40);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_40);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
    ComplexOptPayoutAmount_40.setString("11228270");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_40, ComplexEvents_NoComplexEvents_40);
    all_values.push_back(ComplexEvents_NoComplexEvents_40);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_85;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 47, 49, 21, 6, 2012)}, ComplexEventDates_NoComplexEventDates_85);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 55, 52, 0, 3, 2001)}, ComplexEventDates_NoComplexEventDates_85);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_85);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 13, 22)}, ComplexEventTimes_NoComplexEventTimes_170);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 42, 47)}, ComplexEventTimes_NoComplexEventTimes_170);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 29, 51)}, ComplexEventTimes_NoComplexEventTimes_171);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 49, 3)}, ComplexEventTimes_NoComplexEventTimes_171);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 42, 11)}, ComplexEventTimes_NoComplexEventTimes_172);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 11, 36)}, ComplexEventTimes_NoComplexEventTimes_172);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_86;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 28, 2, 1, 6, 2010)}, ComplexEventDates_NoComplexEventDates_86);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 27, 12, 20, 11, 2010)}, ComplexEventDates_NoComplexEventDates_86);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_86);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 16, 57)}, ComplexEventTimes_NoComplexEventTimes_173);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 46, 48)}, ComplexEventTimes_NoComplexEventTimes_173);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 23, 3)}, ComplexEventTimes_NoComplexEventTimes_174);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 7, 14)}, ComplexEventTimes_NoComplexEventTimes_174);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_38;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1001961614"}, EvntGrp_NoEvents_38);
    FIX::EventPx EventPx_38;
    EventPx_38.setString("9251896");
set_field(noEvents_0_0, EventPx_38, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1257818382"}, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 5, 25, 23, 1, 2011)}, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventType{12}, EvntGrp_NoEvents_38);
    all_values.push_back(EvntGrp_NoEvents_38);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_39;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_857599967"}, EvntGrp_NoEvents_39);
    FIX::EventPx EventPx_39;
    EventPx_39.setString("11858550");
set_field(noEvents_0_1, EventPx_39, EvntGrp_NoEvents_39);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1577996887"}, EvntGrp_NoEvents_39);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 23, 57, 18, 3, 2006)}, EvntGrp_NoEvents_39);
    set_field(noEvents_0_1, FIX::EventType{8}, EvntGrp_NoEvents_39);
    all_values.push_back(EvntGrp_NoEvents_39);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_32;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1753087"}, InstrumentParties_NoInstrumentParties_32);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_32);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{133797798}, InstrumentParties_NoInstrumentParties_32);
    all_values.push_back(InstrumentParties_NoInstrumentParties_32);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1981520277"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{234642265}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_343133519"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{363205469}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1236603879"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1268323173}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_33;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1621023852"}, InstrumentParties_NoInstrumentParties_33);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_33);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{44248760}, InstrumentParties_NoInstrumentParties_33);
    all_values.push_back(InstrumentParties_NoInstrumentParties_33);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1298329584"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{944220444}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_34;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1784933493"}, InstrumentParties_NoInstrumentParties_34);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_34);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{2015106695}, InstrumentParties_NoInstrumentParties_34);
    all_values.push_back(InstrumentParties_NoInstrumentParties_34);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1288208340"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1445619934}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_33;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_264954973"}, SecAltIDGrp_NoSecurityAltID_33);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1127975270"}, SecAltIDGrp_NoSecurityAltID_33);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_34;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1007180342"}, SecAltIDGrp_NoSecurityAltID_34);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1791290180"}, SecAltIDGrp_NoSecurityAltID_34);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_34;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1580685088"}, SecurityXML_34);
  set_field(msg, FIX::SecurityXMLLen{1475042558}, SecurityXML_34);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_419743259"}, SecurityXML_34);
  all_values.push_back(SecurityXML_34);
  all_compo_names.insert("..");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1476795646"}, RootParties_NoRootPartyIDs_2);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_2);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{1989058810}, RootParties_NoRootPartyIDs_2);
    all_values.push_back(RootParties_NoRootPartyIDs_2);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1177560958"}, RootSubParties_NoRootPartySubIDs_5);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{76217427}, RootSubParties_NoRootPartySubIDs_5);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1229521351"}, RootSubParties_NoRootPartySubIDs_6);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{1540766427}, RootSubParties_NoRootPartySubIDs_6);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdCxlGrp
  // Group SideCrossOrdCxlGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_0;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_0;
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_350360876"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_1014306631"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_577200786"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_394609637"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{466090892}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_1875530370"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(10, 15, 8, 26, 8, 2005)}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_170143995"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'1'}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_1632564685"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_1177324338"}, SideCrossOrdCxlGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1027369892"}, SideCrossOrdCxlGrp_NoSides_0);
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("10657661");
set_field(noSides_0_0, CashOrderQty_1, OrderQtyData_1);
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("32.480000");
set_field(noSides_0_0, OrderPercent_1, OrderQtyData_1);
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("14471131");
set_field(noSides_0_0, OrderQty_9, OrderQtyData_1);
    set_field(noSides_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_1);
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("19816788");
set_field(noSides_0_0, RoundingModulus_1, OrderQtyData_1);
    all_values.push_back(OrderQtyData_1);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_39;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_615118651"}, Parties_NoPartyIDs_39);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_39);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{7}, Parties_NoPartyIDs_39);
      all_values.push_back(Parties_NoPartyIDs_39);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_83;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1950104429"}, PtysSubGrp_NoPartySubIDs_83);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_83);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_83);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_84;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_2004157385"}, PtysSubGrp_NoPartySubIDs_84);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_84);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_84);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_40;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_80820553"}, Parties_NoPartyIDs_40);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_40);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{84}, Parties_NoPartyIDs_40);
      all_values.push_back(Parties_NoPartyIDs_40);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_85;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_161921245"}, PtysSubGrp_NoPartySubIDs_85);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_85);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_85);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_86;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_650452184"}, PtysSubGrp_NoPartySubIDs_86);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_86);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_86);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_41;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_945390856"}, Parties_NoPartyIDs_41);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_41);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{29}, Parties_NoPartyIDs_41);
      all_values.push_back(Parties_NoPartyIDs_41);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_87;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_1419186730"}, PtysSubGrp_NoPartySubIDs_87);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_87);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_87);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_1;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_1;
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_935061308"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ClOrdLinkID{"STRING_449027420"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_1374379284"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_2000827433"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedTextLen{953910668}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrigClOrdID{"STRING_674008788"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(11, 20, 45, 21, 8, 2002)}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_1311309774"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'6'}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Text{"STRING_1790015741"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeDate{"LOCALMKTDATE_1464291431"}, SideCrossOrdCxlGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_137728238"}, SideCrossOrdCxlGrp_NoSides_1);
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("764066");
set_field(noSides_0_1, CashOrderQty_2, OrderQtyData_2);
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("27.260000");
set_field(noSides_0_1, OrderPercent_2, OrderQtyData_2);
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("6846396");
set_field(noSides_0_1, OrderQty_10, OrderQtyData_2);
    set_field(noSides_0_1, FIX::RoundingDirection{'2'}, OrderQtyData_2);
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("17508204");
set_field(noSides_0_1, RoundingModulus_2, OrderQtyData_2);
    all_values.push_back(OrderQtyData_2);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_42;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_230649155"}, Parties_NoPartyIDs_42);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_42);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{57}, Parties_NoPartyIDs_42);
      all_values.push_back(Parties_NoPartyIDs_42);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_88;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1998707932"}, PtysSubGrp_NoPartySubIDs_88);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_88);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_88);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_89;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1688588226"}, PtysSubGrp_NoPartySubIDs_89);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_89);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_89);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_90;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_157381457"}, PtysSubGrp_NoPartySubIDs_90);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_90);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_90);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_43;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_639629378"}, Parties_NoPartyIDs_43);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_43);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{49}, Parties_NoPartyIDs_43);
      all_values.push_back(Parties_NoPartyIDs_43);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_91;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_1899398040"}, PtysSubGrp_NoPartySubIDs_91);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_91);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_91);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_92;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_361038930"}, PtysSubGrp_NoPartySubIDs_92);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_92);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_92);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_44;
      set_field(noPartyIDs_1_1_2, FIX::PartyID{"STRING_1749565386"}, Parties_NoPartyIDs_44);
      set_field(noPartyIDs_1_1_2, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_44);
      set_field(noPartyIDs_1_1_2, FIX::PartyRole{25}, Parties_NoPartyIDs_44);
      all_values.push_back(Parties_NoPartyIDs_44);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_93;
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubID{"STRING_1936913027"}, PtysSubGrp_NoPartySubIDs_93);
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_93);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_93);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_94;
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubID{"STRING_1944201310"}, PtysSubGrp_NoPartySubIDs_94);
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_94);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_94);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_481357346"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{104163859}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1356456826"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1816449215}, UnderlyingInstrument_31);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("3348130");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_31, UnderlyingInstrument_31);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("44.880000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_31, UnderlyingInstrument_31);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("65.220000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1676391848"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1756408772"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1961454207"}, UnderlyingInstrument_31);
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("12174964");
set_field(noUnderlyings_0_0, UnderlyingCapValue_31, UnderlyingInstrument_31);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("3952107");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_31);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("21329802");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1034840095}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1082644141"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1574989293"}, UnderlyingInstrument_31);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("30.990000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_834558534"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_31);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("20951619");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_31, UnderlyingInstrument_31);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("26.550000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_31, UnderlyingInstrument_31);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("6618093");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_31, UnderlyingInstrument_31);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("3721077");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_31, UnderlyingInstrument_31);
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("15952320");
set_field(noUnderlyings_0_0, UnderlyingEndValue_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{451238695}, UnderlyingInstrument_31);
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("1133450");
set_field(noUnderlyings_0_0, UnderlyingFXRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_31);
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("3170746");
set_field(noUnderlyings_0_0, UnderlyingFactor_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1866465099}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1873307087"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_421238550"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1075438277"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1542272654"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_756051564"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_833139117"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1647889176"}, UnderlyingInstrument_31);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("97.650000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_31);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("97.350000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1502456192"}, UnderlyingInstrument_31);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("8372749");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1433211751}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1487952834}, UnderlyingInstrument_31);
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("18721150");
set_field(noUnderlyings_0_0, UnderlyingPx_31, UnderlyingInstrument_31);
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("3683722");
set_field(noUnderlyings_0_0, UnderlyingQty_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_915458479"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2025988153"}, UnderlyingInstrument_31);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("7.780000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1102135747}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_393416535"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1150609050"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_890894754"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1055225850"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1522716833"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_338643185"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1506464545"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1636061911"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1730592925"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_31);
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("13550433");
set_field(noUnderlyings_0_0, UnderlyingStartValue_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1456416364"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_31);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("8512053");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_853345704"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1116137109"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_351610898"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1138305469"}, UnderlyingInstrument_31);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("15582013");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_31, UnderlyingInstrument_31);
    all_values.push_back(UnderlyingInstrument_31);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_493278013"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_247992662"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1981230847"}, UnderlyingStipulations_NoUnderlyingStips_62);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2120107716"}, UnderlyingStipulations_NoUnderlyingStips_62);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1467570981"}, UnderlyingStipulations_NoUnderlyingStips_63);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_749205678"}, UnderlyingStipulations_NoUnderlyingStips_63);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1998612221"}, UnderlyingStipulations_NoUnderlyingStips_64);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_523018111"}, UnderlyingStipulations_NoUnderlyingStips_64);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_244545108"}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{594752532}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1048860346"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{933395717}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_658751856"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{537438609}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_516504994"}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1892481971}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_432101585"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{27996315}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_32;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_676643081"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1285447289}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1144133424"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1028253980}, UnderlyingInstrument_32);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
    UnderlyingAdjustedQuantity_32.setString("2762691");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_32, UnderlyingInstrument_32);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
    UnderlyingAllocationPercent_32.setString("11.270000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_32, UnderlyingInstrument_32);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
    UnderlyingAttachmentPoint_32.setString("9.650000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_769547123"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_802843789"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1793439702"}, UnderlyingInstrument_32);
    FIX::UnderlyingCapValue UnderlyingCapValue_32;
    UnderlyingCapValue_32.setString("6032943");
set_field(noUnderlyings_0_1, UnderlyingCapValue_32, UnderlyingInstrument_32);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
    UnderlyingCashAmount_32.setString("7754678");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_32);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
    UnderlyingContractMultiplier_32.setString("13525000");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{626596430}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1636545146"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1056357777"}, UnderlyingInstrument_32);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
    UnderlyingCouponRate_32.setString("15.390000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1162688660"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_32);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
    UnderlyingCurrentValue_32.setString("640653");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_32, UnderlyingInstrument_32);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
    UnderlyingDetachmentPoint_32.setString("23.780000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_32, UnderlyingInstrument_32);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
    UnderlyingDirtyPrice_32.setString("6821807");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_32, UnderlyingInstrument_32);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
    UnderlyingEndPrice_32.setString("6015039");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_32, UnderlyingInstrument_32);
    FIX::UnderlyingEndValue UnderlyingEndValue_32;
    UnderlyingEndValue_32.setString("9535273");
set_field(noUnderlyings_0_1, UnderlyingEndValue_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1016988152}, UnderlyingInstrument_32);
    FIX::UnderlyingFXRate UnderlyingFXRate_32;
    UnderlyingFXRate_32.setString("3465022");
set_field(noUnderlyings_0_1, UnderlyingFXRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_32);
    FIX::UnderlyingFactor UnderlyingFactor_32;
    UnderlyingFactor_32.setString("14490897");
set_field(noUnderlyings_0_1, UnderlyingFactor_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{374498606}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1455608165"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_587053378"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1518632030"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_336378497"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_863322488"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2073483157"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1030619463"}, UnderlyingInstrument_32);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
    UnderlyingNotionalPercentageOutstanding_32.setString("96.110000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_32);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
    UnderlyingOriginalNotionalPercentageOutstanding_32.setString("55.170000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_88680285"}, UnderlyingInstrument_32);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
    UnderlyingPriceUnitOfMeasureQty_32.setString("15043111");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1790102552}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1441180285}, UnderlyingInstrument_32);
    FIX::UnderlyingPx UnderlyingPx_32;
    UnderlyingPx_32.setString("21309075");
set_field(noUnderlyings_0_1, UnderlyingPx_32, UnderlyingInstrument_32);
    FIX::UnderlyingQty UnderlyingQty_32;
    UnderlyingQty_32.setString("12791640");
set_field(noUnderlyings_0_1, UnderlyingQty_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_350054414"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_854565477"}, UnderlyingInstrument_32);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
    UnderlyingRepurchaseRate_32.setString("90.620000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{2001164724}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_877994327"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_358434421"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_290703454"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1560175033"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_959938389"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1244230827"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_429679537"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1306440680"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2023195911"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_32);
    FIX::UnderlyingStartValue UnderlyingStartValue_32;
    UnderlyingStartValue_32.setString("16809392");
set_field(noUnderlyings_0_1, UnderlyingStartValue_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1331320429"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_32);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
    UnderlyingStrikePrice_32.setString("16676989");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1181661492"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_978087179"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_550834741"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_667047455"}, UnderlyingInstrument_32);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
    UnderlyingUnitOfMeasureQty_32.setString("17069304");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_32, UnderlyingInstrument_32);
    all_values.push_back(UnderlyingInstrument_32);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_755727740"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1063757985"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_870029162"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_49424377"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1047181923"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1709565"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1901747400"}, UnderlyingStipulations_NoUnderlyingStips_65);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_296078627"}, UnderlyingStipulations_NoUnderlyingStips_65);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_253159868"}, UnderlyingStipulations_NoUnderlyingStips_66);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_632258079"}, UnderlyingStipulations_NoUnderlyingStips_66);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_543863322"}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1614451437}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_474629002"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{773408470}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1663806413"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{205914628}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
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
