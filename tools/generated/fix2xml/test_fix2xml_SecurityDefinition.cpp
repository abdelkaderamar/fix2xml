#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_39778603"}, SecurityDefinition_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_H"}, SecurityDefinition_0);
  set_field(msg, FIX::Currency{"EUR"}, SecurityDefinition_0);
  set_field(msg, FIX::EncodedText{"DATA_2112458363"}, SecurityDefinition_0);
  set_field(msg, FIX::EncodedTextLen{143935837}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityReportID{1456157930}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityReqID{"STRING_232600356"}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_2018448710"}, SecurityDefinition_0);
  set_field(msg, FIX::SecurityResponseType{1}, SecurityDefinition_0);
  set_field(msg, FIX::Text{"STRING_2070384901"}, SecurityDefinition_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 59, 26, 4, 7, 2000)}, SecurityDefinition_0);
  all_values.push_back(SecurityDefinition_0);

  all_compo_names.insert("SecurityDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  set_field(msg, FIX::ApplID{"STRING_226703965"}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplLastSeqNum{107395255}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_12);
  set_field(msg, FIX::ApplSeqNum{1537788269}, ApplicationSequenceControl_12);
  all_values.push_back(ApplicationSequenceControl_12);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_118;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1423154581"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1739490429}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1124184531"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{466761690}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1134657798"}, InstrumentLeg_118);
    FIX::LegContractMultiplier LegContractMultiplier_118;
    LegContractMultiplier_118.setString("16639052");
set_field(noLegs_0_0, LegContractMultiplier_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1240389275}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_888731540"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1703683849"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_759122970"}, InstrumentLeg_118);
    FIX::LegCouponRate LegCouponRate_118;
    LegCouponRate_118.setString("13.780000");
set_field(noLegs_0_0, LegCouponRate_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1622345341"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_931019623"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{956698041}, InstrumentLeg_118);
    FIX::LegFactor LegFactor_118;
    LegFactor_118.setString("1407122");
set_field(noLegs_0_0, LegFactor_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1672169491}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_879599294"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1781429513"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1407299179"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1548825553"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1177286951"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2046864515"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_779825255"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_580636773"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_118);
    FIX::LegOptionRatio LegOptionRatio_118;
    LegOptionRatio_118.setString("8872205");
set_field(noLegs_0_0, LegOptionRatio_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_212462343"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1663873101"}, InstrumentLeg_118);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
    LegPriceUnitOfMeasureQty_118.setString("7954191");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegProduct{1635616925}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1255879883}, InstrumentLeg_118);
    FIX::LegRatioQty LegRatioQty_118;
    LegRatioQty_118.setString("19196037");
set_field(noLegs_0_0, LegRatioQty_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2102378615"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_243054033"}, InstrumentLeg_118);
    FIX::LegRepurchaseRate LegRepurchaseRate_118;
    LegRepurchaseRate_118.setString("53.210000");
set_field(noLegs_0_0, LegRepurchaseRate_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1195284242}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1131785573"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_992225523"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1954407212"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1257596951"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_467087216"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_531021249"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1398106839"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_118);
    FIX::LegStrikePrice LegStrikePrice_118;
    LegStrikePrice_118.setString("9227926");
set_field(noLegs_0_0, LegStrikePrice_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_219834936"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1302002309"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_182608214"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1768660489"}, InstrumentLeg_118);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
    LegUnitOfMeasureQty_118.setString("3318056");
set_field(noLegs_0_0, LegUnitOfMeasureQty_118, InstrumentLeg_118);
    all_values.push_back(InstrumentLeg_118);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_233;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_401002097"}, LegSecAltIDGrp_NoLegSecurityAltID_233);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_912442386"}, LegSecAltIDGrp_NoLegSecurityAltID_233);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_233);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_79;
  FIX::AttachmentPoint AttachmentPoint_79;
  AttachmentPoint_79.setString("39.140000");
set_field(msg, AttachmentPoint_79, Instrument_79);
  set_field(msg, FIX::CFICode{"STRING_1288222607"}, Instrument_79);
  set_field(msg, FIX::CPProgram{1}, Instrument_79);
  set_field(msg, FIX::CPRegType{"STRING_1871947016"}, Instrument_79);
  FIX::CapPrice CapPrice_79;
  CapPrice_79.setString("20836417");
set_field(msg, CapPrice_79, Instrument_79);
  FIX::ContractMultiplier ContractMultiplier_79;
  ContractMultiplier_79.setString("6130380");
set_field(msg, ContractMultiplier_79, Instrument_79);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_79);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1855761874"}, Instrument_79);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_567932974"}, Instrument_79);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1223397284"}, Instrument_79);
  FIX::CouponRate CouponRate_79;
  CouponRate_79.setString("35.470000");
set_field(msg, CouponRate_79, Instrument_79);
  set_field(msg, FIX::CreditRating{"STRING_1763217216"}, Instrument_79);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_207699209"}, Instrument_79);
  FIX::DetachmentPoint DetachmentPoint_79;
  DetachmentPoint_79.setString("90.700000");
set_field(msg, DetachmentPoint_79, Instrument_79);
  set_field(msg, FIX::EncodedIssuer{"DATA_1570140781"}, Instrument_79);
  set_field(msg, FIX::EncodedIssuerLen{1465296161}, Instrument_79);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_456132638"}, Instrument_79);
  set_field(msg, FIX::EncodedSecurityDescLen{2101162030}, Instrument_79);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_79);
  FIX::Factor Factor_79;
  Factor_79.setString("18542394");
set_field(msg, Factor_79, Instrument_79);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_79);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_79);
  FIX::FloorPrice FloorPrice_79;
  FloorPrice_79.setString("6295485");
set_field(msg, FloorPrice_79, Instrument_79);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_79);
  set_field(msg, FIX::InstrRegistry{"STRING_1667731784"}, Instrument_79);
  set_field(msg, FIX::InstrmtAssignmentMethod{'8'}, Instrument_79);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1282409451"}, Instrument_79);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1999537396"}, Instrument_79);
  set_field(msg, FIX::Issuer{"STRING_894145809"}, Instrument_79);
  set_field(msg, FIX::ListMethod{0}, Instrument_79);
  set_field(msg, FIX::LocaleOfIssue{"STRING_764496134"}, Instrument_79);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1102219724"}, Instrument_79);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_824150507"}, Instrument_79);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1889400864"}, Instrument_79);
  FIX::MinPriceIncrement MinPriceIncrement_79;
  MinPriceIncrement_79.setString("8266830");
set_field(msg, MinPriceIncrement_79, Instrument_79);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
  MinPriceIncrementAmount_79.setString("7603086");
set_field(msg, MinPriceIncrementAmount_79, Instrument_79);
  set_field(msg, FIX::NTPositionLimit{354955222}, Instrument_79);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
  NotionalPercentageOutstanding_79.setString("63.430000");
set_field(msg, NotionalPercentageOutstanding_79, Instrument_79);
  set_field(msg, FIX::OptAttribute{'4'}, Instrument_79);
  FIX::OptPayoutAmount OptPayoutAmount_79;
  OptPayoutAmount_79.setString("9228881");
set_field(msg, OptPayoutAmount_79, Instrument_79);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_79);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
  OriginalNotionalPercentageOutstanding_79.setString("4.320000");
set_field(msg, OriginalNotionalPercentageOutstanding_79, Instrument_79);
  set_field(msg, FIX::Pool{"STRING_538621765"}, Instrument_79);
  set_field(msg, FIX::PositionLimit{1090639188}, Instrument_79);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_79);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2108762546"}, Instrument_79);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
  PriceUnitOfMeasureQty_79.setString("4084517");
set_field(msg, PriceUnitOfMeasureQty_79, Instrument_79);
  set_field(msg, FIX::Product{1}, Instrument_79);
  set_field(msg, FIX::ProductComplex{"STRING_2062440928"}, Instrument_79);
  set_field(msg, FIX::PutOrCall{1}, Instrument_79);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1764824323"}, Instrument_79);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1356354953"}, Instrument_79);
  FIX::RepurchaseRate RepurchaseRate_79;
  RepurchaseRate_79.setString("78.560000");
set_field(msg, RepurchaseRate_79, Instrument_79);
  set_field(msg, FIX::RepurchaseTerm{246889188}, Instrument_79);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_79);
  set_field(msg, FIX::SecurityDesc{"STRING_1139585992"}, Instrument_79);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1059045915"}, Instrument_79);
  set_field(msg, FIX::SecurityGroup{"STRING_5029718"}, Instrument_79);
  set_field(msg, FIX::SecurityID{"STRING_991639740"}, Instrument_79);
  set_field(msg, FIX::SecurityIDSource{"STRING_2"}, Instrument_79);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_79);
  set_field(msg, FIX::SecuritySubType{"STRING_1756135875"}, Instrument_79);
  set_field(msg, FIX::SecurityType{"STRING_RVLVTRM"}, Instrument_79);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_79);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_79);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1734610893"}, Instrument_79);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1125416784"}, Instrument_79);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_79);
  FIX::StrikeMultiplier StrikeMultiplier_79;
  StrikeMultiplier_79.setString("15940036");
set_field(msg, StrikeMultiplier_79, Instrument_79);
  FIX::StrikePrice StrikePrice_79;
  StrikePrice_79.setString("6284128");
set_field(msg, StrikePrice_79, Instrument_79);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_79);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
  StrikePriceBoundaryPrecision_79.setString("4.520000");
set_field(msg, StrikePriceBoundaryPrecision_79, Instrument_79);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_79);
  FIX::StrikeValue StrikeValue_79;
  StrikeValue_79.setString("12202491");
set_field(msg, StrikeValue_79, Instrument_79);
  set_field(msg, FIX::Symbol{"STRING_513862659"}, Instrument_79);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_79);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_79);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_79);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_79);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
  UnitOfMeasureQty_79.setString("7348255");
set_field(msg, UnitOfMeasureQty_79, Instrument_79);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_79);
  all_values.push_back(Instrument_79);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_161;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_161);
    FIX::ComplexEventPrice ComplexEventPrice_161;
    ComplexEventPrice_161.setString("2886773");
set_field(noComplexEvents_0_0, ComplexEventPrice_161, ComplexEvents_NoComplexEvents_161);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_161);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
    ComplexEventPriceBoundaryPrecision_161.setString("57.420000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_161, ComplexEvents_NoComplexEvents_161);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_161);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_161);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
    ComplexOptPayoutAmount_161.setString("1904218");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_161, ComplexEvents_NoComplexEvents_161);
    all_values.push_back(ComplexEvents_NoComplexEvents_161);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_323;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 0, 7, 20, 2, 2017)}, ComplexEventDates_NoComplexEventDates_323);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 12, 20, 4, 9, 2007)}, ComplexEventDates_NoComplexEventDates_323);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_323);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 13, 39)}, ComplexEventTimes_NoComplexEventTimes_659);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 18, 52)}, ComplexEventTimes_NoComplexEventTimes_659);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 18, 19)}, ComplexEventTimes_NoComplexEventTimes_660);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 33, 19)}, ComplexEventTimes_NoComplexEventTimes_660);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 12, 56)}, ComplexEventTimes_NoComplexEventTimes_661);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 19, 17)}, ComplexEventTimes_NoComplexEventTimes_661);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_324;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 29, 31, 20, 1, 2015)}, ComplexEventDates_NoComplexEventDates_324);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 20, 27, 26, 12, 2007)}, ComplexEventDates_NoComplexEventDates_324);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_324);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 41, 55)}, ComplexEventTimes_NoComplexEventTimes_662);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 21, 46)}, ComplexEventTimes_NoComplexEventTimes_662);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_325;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 50, 32, 15, 1, 2003)}, ComplexEventDates_NoComplexEventDates_325);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 15, 18, 18, 12, 2011)}, ComplexEventDates_NoComplexEventDates_325);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_325);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 58, 49)}, ComplexEventTimes_NoComplexEventTimes_663);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 27, 16)}, ComplexEventTimes_NoComplexEventTimes_663);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 57, 2)}, ComplexEventTimes_NoComplexEventTimes_664);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 23, 55)}, ComplexEventTimes_NoComplexEventTimes_664);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 38, 52)}, ComplexEventTimes_NoComplexEventTimes_665);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 44, 51)}, ComplexEventTimes_NoComplexEventTimes_665);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_162;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_162);
    FIX::ComplexEventPrice ComplexEventPrice_162;
    ComplexEventPrice_162.setString("6139442");
set_field(noComplexEvents_0_1, ComplexEventPrice_162, ComplexEvents_NoComplexEvents_162);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_162);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
    ComplexEventPriceBoundaryPrecision_162.setString("30.910000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_162, ComplexEvents_NoComplexEvents_162);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_162);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_162);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
    ComplexOptPayoutAmount_162.setString("15621791");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_162, ComplexEvents_NoComplexEvents_162);
    all_values.push_back(ComplexEvents_NoComplexEvents_162);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_326;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 22, 2, 22, 6, 2006)}, ComplexEventDates_NoComplexEventDates_326);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 7, 26, 20, 8, 2005)}, ComplexEventDates_NoComplexEventDates_326);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_326);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 57, 48)}, ComplexEventTimes_NoComplexEventTimes_666);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 24, 50)}, ComplexEventTimes_NoComplexEventTimes_666);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 52, 40)}, ComplexEventTimes_NoComplexEventTimes_667);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 21, 14)}, ComplexEventTimes_NoComplexEventTimes_667);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_327;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 36, 48, 27, 6, 2010)}, ComplexEventDates_NoComplexEventDates_327);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 5, 38, 4, 5, 2002)}, ComplexEventDates_NoComplexEventDates_327);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_327);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 57, 25)}, ComplexEventTimes_NoComplexEventTimes_668);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 49, 50)}, ComplexEventTimes_NoComplexEventTimes_668);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 34, 37)}, ComplexEventTimes_NoComplexEventTimes_669);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 50, 36)}, ComplexEventTimes_NoComplexEventTimes_669);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_155;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_971605424"}, EvntGrp_NoEvents_155);
    FIX::EventPx EventPx_155;
    EventPx_155.setString("17067485");
set_field(noEvents_0_0, EventPx_155, EvntGrp_NoEvents_155);
    set_field(noEvents_0_0, FIX::EventText{"STRING_424268086"}, EvntGrp_NoEvents_155);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 44, 7, 21, 6, 2016)}, EvntGrp_NoEvents_155);
    set_field(noEvents_0_0, FIX::EventType{6}, EvntGrp_NoEvents_155);
    all_values.push_back(EvntGrp_NoEvents_155);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_146;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1688255638"}, InstrumentParties_NoInstrumentParties_146);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_146);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2136444478}, InstrumentParties_NoInstrumentParties_146);
    all_values.push_back(InstrumentParties_NoInstrumentParties_146);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_655025534"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1184923275}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_160;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_399564582"}, SecAltIDGrp_NoSecurityAltID_160);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_940100876"}, SecAltIDGrp_NoSecurityAltID_160);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_158;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1602003056"}, SecurityXML_158);
  set_field(msg, FIX::SecurityXMLLen{1088316699}, SecurityXML_158);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2015921573"}, SecurityXML_158);
  all_values.push_back(SecurityXML_158);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_8;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_8);
  FIX::PctAtRisk PctAtRisk_8;
  PctAtRisk_8.setString("13.280000");
set_field(msg, PctAtRisk_8, InstrumentExtension_8);
  all_values.push_back(InstrumentExtension_8);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_14;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{5}, AttrbGrp_NoInstrAttrib_14);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1821687599"}, AttrbGrp_NoInstrAttrib_14);
    all_values.push_back(AttrbGrp_NoInstrAttrib_14);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_15;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{15}, AttrbGrp_NoInstrAttrib_15);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_2010318160"}, AttrbGrp_NoInstrAttrib_15);
    all_values.push_back(AttrbGrp_NoInstrAttrib_15);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_1361464601"}, MarketSegmentGrp_NoMarketSegments_3);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_287102598"}, MarketSegmentGrp_NoMarketSegments_3);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_5;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{2}, BaseTradingRules_5);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_5);
    FIX::MaxPriceVariation MaxPriceVariation_5;
    MaxPriceVariation_5.setString("14898877");
set_field(noMarketSegments_0_0, MaxPriceVariation_5, BaseTradingRules_5);
    FIX::MaxTradeVol MaxTradeVol_5;
    MaxTradeVol_5.setString("2047218");
set_field(noMarketSegments_0_0, MaxTradeVol_5, BaseTradingRules_5);
    FIX::MinTradeVol MinTradeVol_5;
    MinTradeVol_5.setString("20669684");
set_field(noMarketSegments_0_0, MinTradeVol_5, BaseTradingRules_5);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{2}, BaseTradingRules_5);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{4}, BaseTradingRules_5);
    set_field(noMarketSegments_0_0, FIX::PriceType{19}, BaseTradingRules_5);
    FIX::RoundLot RoundLot_5;
    RoundLot_5.setString("1776457");
set_field(noMarketSegments_0_0, RoundLot_5, BaseTradingRules_5);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"JPY"}, BaseTradingRules_5);
    all_values.push_back(BaseTradingRules_5);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_11;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_11);
      FIX::MinLotSize MinLotSize_11;
      MinLotSize_11.setString("7807337");
set_field(noLotTypeRules_0_1_0, MinLotSize_11, LotTypeRules_NoLotTypeRules_11);
      all_values.push_back(LotTypeRules_NoLotTypeRules_11);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_5;
    FIX::HighLimitPrice HighLimitPrice_5;
    HighLimitPrice_5.setString("13515298");
set_field(noMarketSegments_0_0, HighLimitPrice_5, PriceLimits_5);
    FIX::LowLimitPrice LowLimitPrice_5;
    LowLimitPrice_5.setString("19096383");
set_field(noMarketSegments_0_0, LowLimitPrice_5, PriceLimits_5);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{1}, PriceLimits_5);
    FIX::TradingReferencePrice TradingReferencePrice_5;
    TradingReferencePrice_5.setString("1441471");
set_field(noMarketSegments_0_0, TradingReferencePrice_5, PriceLimits_5);
    all_values.push_back(PriceLimits_5);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_6;
      FIX::EndTickPriceRange EndTickPriceRange_6;
      EndTickPriceRange_6.setString("1211313");
set_field(noTickRules_0_1_0, EndTickPriceRange_6, TickRules_NoTickRules_6);
      FIX::StartTickPriceRange StartTickPriceRange_6;
      StartTickPriceRange_6.setString("125850");
set_field(noTickRules_0_1_0, StartTickPriceRange_6, TickRules_NoTickRules_6);
      FIX::TickIncrement TickIncrement_6;
      TickIncrement_6.setString("17238355");
set_field(noTickRules_0_1_0, TickIncrement_6, TickRules_NoTickRules_6);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_6);
      all_values.push_back(TickRules_NoTickRules_6);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{2133186819}, NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_836966666"}, NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1757957360}, NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_1996021332"}, NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribType{1482776041}, NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribValue{"STRING_971938313"}, NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_7);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_7);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_17;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_17);
        all_values.push_back(ExecInstRules_NoExecInstRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_18;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_18);
        all_values.push_back(ExecInstRules_NoExecInstRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_18;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_18);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_770982629"}, MarketDataFeedTypes_NoMDFeedTypes_18);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{157551221}, MarketDataFeedTypes_NoMDFeedTypes_18);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_896690848"}, MatchRules_NoMatchRules_12);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_A1"}, MatchRules_NoMatchRules_12);
        all_values.push_back(MatchRules_NoMatchRules_12);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_21;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'H'}, OrdTypeRules_NoOrdTypeRules_21);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_22;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'F'}, OrdTypeRules_NoOrdTypeRules_22);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_23;
        set_field(noOrdTypeRules_0_0_2_2, FIX::OrdType{'7'}, OrdTypeRules_NoOrdTypeRules_23);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_14;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_14);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_8);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_8);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_19;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_19);
        all_values.push_back(ExecInstRules_NoExecInstRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_20;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_20);
        all_values.push_back(ExecInstRules_NoExecInstRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_19);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_683616407"}, MarketDataFeedTypes_NoMDFeedTypes_19);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{1398651193}, MarketDataFeedTypes_NoMDFeedTypes_19);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_20);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_18908800"}, MarketDataFeedTypes_NoMDFeedTypes_20);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{223105859}, MarketDataFeedTypes_NoMDFeedTypes_20);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_1794908755"}, MatchRules_NoMatchRules_13);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_13);
        all_values.push_back(MatchRules_NoMatchRules_13);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_1218190585"}, MatchRules_NoMatchRules_14);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_14);
        all_values.push_back(MatchRules_NoMatchRules_14);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        set_field(noMatchRules_0_1_2_2, FIX::MatchAlgorithm{"STRING_1560109707"}, MatchRules_NoMatchRules_15);
        set_field(noMatchRules_0_1_2_2, FIX::MatchType{"STRING_S4"}, MatchRules_NoMatchRules_15);
        all_values.push_back(MatchRules_NoMatchRules_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_24;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'1'}, OrdTypeRules_NoOrdTypeRules_24);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_15;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_15);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_16;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_16);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_17;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_17);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("6102404");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_6, StrikeRules_NoStrikeRules_6);
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("12080091");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_6, StrikeRules_NoStrikeRules_6);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1144034132}, StrikeRules_NoStrikeRules_6);
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("13204797");
set_field(noStrikeRules_0_1_0, StrikeIncrement_6, StrikeRules_NoStrikeRules_6);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_880360275"}, StrikeRules_NoStrikeRules_6);
      all_values.push_back(StrikeRules_NoStrikeRules_6);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_4366802"}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{813245079}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_205990285"}, MaturityRules_NoMaturityRules_13);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_421729693"}, MaturityRules_NoMaturityRules_13);
        all_values.push_back(MaturityRules_NoMaturityRules_13);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_534632950"}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{2026235638}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_1827747337"}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1618898218"}, MaturityRules_NoMaturityRules_14);
        all_values.push_back(MaturityRules_NoMaturityRules_14);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("2009668");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_7, StrikeRules_NoStrikeRules_7);
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("16858708");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_7, StrikeRules_NoStrikeRules_7);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{689605155}, StrikeRules_NoStrikeRules_7);
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("18291137");
set_field(noStrikeRules_0_1_1, StrikeIncrement_7, StrikeRules_NoStrikeRules_7);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_1098496947"}, StrikeRules_NoStrikeRules_7);
      all_values.push_back(StrikeRules_NoStrikeRules_7);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1329270737"}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{1095864804}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_214921524"}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_628186235"}, MaturityRules_NoMaturityRules_15);
        all_values.push_back(MaturityRules_NoMaturityRules_15);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("8902275");
set_field(noStrikeRules_0_1_2, EndStrikePxRange_8, StrikeRules_NoStrikeRules_8);
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("8251620");
set_field(noStrikeRules_0_1_2, StartStrikePxRange_8, StrikeRules_NoStrikeRules_8);
      set_field(noStrikeRules_0_1_2, FIX::StrikeExerciseStyle{1836195361}, StrikeRules_NoStrikeRules_8);
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("20342616");
set_field(noStrikeRules_0_1_2, StrikeIncrement_8, StrikeRules_NoStrikeRules_8);
      set_field(noStrikeRules_0_1_2, FIX::StrikeRuleID{"STRING_2145641790"}, StrikeRules_NoStrikeRules_8);
      all_values.push_back(StrikeRules_NoStrikeRules_8);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        set_field(noMaturityRules_0_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1077241659"}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_2_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_2_2_0, FIX::MaturityMonthYearIncrement{1134368440}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_2_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_2_2_0, FIX::MaturityRuleID{"STRING_2001025136"}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1340358725"}, MaturityRules_NoMaturityRules_16);
        all_values.push_back(MaturityRules_NoMaturityRules_16);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        set_field(noMaturityRules_0_2_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_164732784"}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_2_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_2_2_1, FIX::MaturityMonthYearIncrement{797516556}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_2_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_2_2_1, FIX::MaturityRuleID{"STRING_941716189"}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_2_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_477780245"}, MaturityRules_NoMaturityRules_17);
        all_values.push_back(MaturityRules_NoMaturityRules_17);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        set_field(noMaturityRules_0_2_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1662382993"}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_2_2_2, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_2_2_2, FIX::MaturityMonthYearIncrement{16167486}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_2_2_2, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_2_2_2, FIX::MaturityRuleID{"STRING_824313194"}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_2_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1114664433"}, MaturityRules_NoMaturityRules_18);
        all_values.push_back(MaturityRules_NoMaturityRules_18);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    set_field(noMarketSegments_0_1, FIX::MarketID{"EXCHANGE_2092205693"}, MarketSegmentGrp_NoMarketSegments_4);
    set_field(noMarketSegments_0_1, FIX::MarketSegmentID{"STRING_6100283"}, MarketSegmentGrp_NoMarketSegments_4);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_6;
    set_field(noMarketSegments_0_1, FIX::ExpirationCycle{2}, BaseTradingRules_6);
    set_field(noMarketSegments_0_1, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_6);
    FIX::MaxPriceVariation MaxPriceVariation_6;
    MaxPriceVariation_6.setString("5820490");
set_field(noMarketSegments_0_1, MaxPriceVariation_6, BaseTradingRules_6);
    FIX::MaxTradeVol MaxTradeVol_6;
    MaxTradeVol_6.setString("4642079");
set_field(noMarketSegments_0_1, MaxTradeVol_6, BaseTradingRules_6);
    FIX::MinTradeVol MinTradeVol_6;
    MinTradeVol_6.setString("16687730");
set_field(noMarketSegments_0_1, MinTradeVol_6, BaseTradingRules_6);
    set_field(noMarketSegments_0_1, FIX::MultilegModel{0}, BaseTradingRules_6);
    set_field(noMarketSegments_0_1, FIX::MultilegPriceMethod{1}, BaseTradingRules_6);
    set_field(noMarketSegments_0_1, FIX::PriceType{3}, BaseTradingRules_6);
    FIX::RoundLot RoundLot_6;
    RoundLot_6.setString("13590546");
set_field(noMarketSegments_0_1, RoundLot_6, BaseTradingRules_6);
    set_field(noMarketSegments_0_1, FIX::TradingCurrency{"CAN"}, BaseTradingRules_6);
    all_values.push_back(BaseTradingRules_6);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_12;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_12);
      FIX::MinLotSize MinLotSize_12;
      MinLotSize_12.setString("9134415");
set_field(noLotTypeRules_1_1_0, MinLotSize_12, LotTypeRules_NoLotTypeRules_12);
      all_values.push_back(LotTypeRules_NoLotTypeRules_12);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_13;
      set_field(noLotTypeRules_1_1_1, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_13);
      FIX::MinLotSize MinLotSize_13;
      MinLotSize_13.setString("11435945");
set_field(noLotTypeRules_1_1_1, MinLotSize_13, LotTypeRules_NoLotTypeRules_13);
      all_values.push_back(LotTypeRules_NoLotTypeRules_13);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_6;
    FIX::HighLimitPrice HighLimitPrice_6;
    HighLimitPrice_6.setString("1063166");
set_field(noMarketSegments_0_1, HighLimitPrice_6, PriceLimits_6);
    FIX::LowLimitPrice LowLimitPrice_6;
    LowLimitPrice_6.setString("1965485");
set_field(noMarketSegments_0_1, LowLimitPrice_6, PriceLimits_6);
    set_field(noMarketSegments_0_1, FIX::PriceLimitType{1}, PriceLimits_6);
    FIX::TradingReferencePrice TradingReferencePrice_6;
    TradingReferencePrice_6.setString("9038332");
set_field(noMarketSegments_0_1, TradingReferencePrice_6, PriceLimits_6);
    all_values.push_back(PriceLimits_6);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_7;
      FIX::EndTickPriceRange EndTickPriceRange_7;
      EndTickPriceRange_7.setString("3260015");
set_field(noTickRules_1_1_0, EndTickPriceRange_7, TickRules_NoTickRules_7);
      FIX::StartTickPriceRange StartTickPriceRange_7;
      StartTickPriceRange_7.setString("13816134");
set_field(noTickRules_1_1_0, StartTickPriceRange_7, TickRules_NoTickRules_7);
      FIX::TickIncrement TickIncrement_7;
      TickIncrement_7.setString("19024162");
set_field(noTickRules_1_1_0, TickIncrement_7, TickRules_NoTickRules_7);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_7);
      all_values.push_back(TickRules_NoTickRules_7);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("13977809");
set_field(noTickRules_1_1_1, EndTickPriceRange_8, TickRules_NoTickRules_8);
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("21069207");
set_field(noTickRules_1_1_1, StartTickPriceRange_8, TickRules_NoTickRules_8);
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("1455141");
set_field(noTickRules_1_1_1, TickIncrement_8, TickRules_NoTickRules_8);
      set_field(noTickRules_1_1_1, FIX::TickRuleType{0}, TickRules_NoTickRules_8);
      all_values.push_back(TickRules_NoTickRules_8);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_9;
      FIX::EndTickPriceRange EndTickPriceRange_9;
      EndTickPriceRange_9.setString("20516428");
set_field(noTickRules_1_1_2, EndTickPriceRange_9, TickRules_NoTickRules_9);
      FIX::StartTickPriceRange StartTickPriceRange_9;
      StartTickPriceRange_9.setString("1516143");
set_field(noTickRules_1_1_2, StartTickPriceRange_9, TickRules_NoTickRules_9);
      FIX::TickIncrement TickIncrement_9;
      TickIncrement_9.setString("6142481");
set_field(noTickRules_1_1_2, TickIncrement_9, TickRules_NoTickRules_9);
      set_field(noTickRules_1_1_2, FIX::TickRuleType{0}, TickRules_NoTickRules_9);
      all_values.push_back(TickRules_NoTickRules_9);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{1078456097}, NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_466035477"}, NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribType{58456437}, NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribValue{"STRING_220342409"}, NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      set_field(noNestedInstrAttrib_1_1_2, FIX::NestedInstrAttribType{1823520275}, NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      set_field(noNestedInstrAttrib_1_1_2, FIX::NestedInstrAttribValue{"STRING_1417511076"}, NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_9);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_9);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_21;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_21);
        all_values.push_back(ExecInstRules_NoExecInstRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        set_field(noExecInstRules_1_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_22);
        all_values.push_back(ExecInstRules_NoExecInstRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_23;
        set_field(noExecInstRules_1_0_2_2, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_23);
        all_values.push_back(ExecInstRules_NoExecInstRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_21);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1178319767"}, MarketDataFeedTypes_NoMDFeedTypes_21);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{1378701216}, MarketDataFeedTypes_NoMDFeedTypes_21);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_22);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_1504321280"}, MarketDataFeedTypes_NoMDFeedTypes_22);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{612831026}, MarketDataFeedTypes_NoMDFeedTypes_22);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_825522193"}, MatchRules_NoMatchRules_16);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_AQ"}, MatchRules_NoMatchRules_16);
        all_values.push_back(MatchRules_NoMatchRules_16);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        set_field(noMatchRules_1_0_2_1, FIX::MatchAlgorithm{"STRING_1889091081"}, MatchRules_NoMatchRules_17);
        set_field(noMatchRules_1_0_2_1, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_17);
        all_values.push_back(MatchRules_NoMatchRules_17);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        set_field(noMatchRules_1_0_2_2, FIX::MatchAlgorithm{"STRING_228090053"}, MatchRules_NoMatchRules_18);
        set_field(noMatchRules_1_0_2_2, FIX::MatchType{"STRING_8"}, MatchRules_NoMatchRules_18);
        all_values.push_back(MatchRules_NoMatchRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_25;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'5'}, OrdTypeRules_NoOrdTypeRules_25);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_26;
        set_field(noOrdTypeRules_1_0_2_1, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_26);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_18;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_18);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_10);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_10);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_24;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'7'}, ExecInstRules_NoExecInstRules_24);
        all_values.push_back(ExecInstRules_NoExecInstRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_23);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_187694534"}, MarketDataFeedTypes_NoMDFeedTypes_23);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{743638102}, MarketDataFeedTypes_NoMDFeedTypes_23);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_24);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDFeedType{"STRING_556245880"}, MarketDataFeedTypes_NoMDFeedTypes_24);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MarketDepth{334293921}, MarketDataFeedTypes_NoMDFeedTypes_24);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_25);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDFeedType{"STRING_1031113883"}, MarketDataFeedTypes_NoMDFeedTypes_25);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MarketDepth{121498265}, MarketDataFeedTypes_NoMDFeedTypes_25);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_262331451"}, MatchRules_NoMatchRules_19);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_19);
        all_values.push_back(MatchRules_NoMatchRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        set_field(noMatchRules_1_1_2_1, FIX::MatchAlgorithm{"STRING_186188028"}, MatchRules_NoMatchRules_20);
        set_field(noMatchRules_1_1_2_1, FIX::MatchType{"STRING_M3"}, MatchRules_NoMatchRules_20);
        all_values.push_back(MatchRules_NoMatchRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        set_field(noMatchRules_1_1_2_2, FIX::MatchAlgorithm{"STRING_2078389844"}, MatchRules_NoMatchRules_21);
        set_field(noMatchRules_1_1_2_2, FIX::MatchType{"STRING_A4"}, MatchRules_NoMatchRules_21);
        all_values.push_back(MatchRules_NoMatchRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_27;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_27);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_28;
        set_field(noOrdTypeRules_1_1_2_1, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_28);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_29;
        set_field(noOrdTypeRules_1_1_2_2, FIX::OrdType{'P'}, OrdTypeRules_NoOrdTypeRules_29);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_19;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_19);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("20562765");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_9, StrikeRules_NoStrikeRules_9);
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("6667440");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_9, StrikeRules_NoStrikeRules_9);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{1582029712}, StrikeRules_NoStrikeRules_9);
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("9653410");
set_field(noStrikeRules_1_1_0, StrikeIncrement_9, StrikeRules_NoStrikeRules_9);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_434031020"}, StrikeRules_NoStrikeRules_9);
      all_values.push_back(StrikeRules_NoStrikeRules_9);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1697925825"}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{929722701}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_214983498"}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_934202535"}, MaturityRules_NoMaturityRules_19);
        all_values.push_back(MaturityRules_NoMaturityRules_19);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        set_field(noMaturityRules_1_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_294382592"}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrement{585233163}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityRuleID{"STRING_670775684"}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1414583559"}, MaturityRules_NoMaturityRules_20);
        all_values.push_back(MaturityRules_NoMaturityRules_20);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        set_field(noMaturityRules_1_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1587827927"}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearIncrement{1600771587}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityRuleID{"STRING_750417789"}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_464998160"}, MaturityRules_NoMaturityRules_21);
        all_values.push_back(MaturityRules_NoMaturityRules_21);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("10537975");
set_field(noStrikeRules_1_1_1, EndStrikePxRange_10, StrikeRules_NoStrikeRules_10);
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("4229314");
set_field(noStrikeRules_1_1_1, StartStrikePxRange_10, StrikeRules_NoStrikeRules_10);
      set_field(noStrikeRules_1_1_1, FIX::StrikeExerciseStyle{300261032}, StrikeRules_NoStrikeRules_10);
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("20201784");
set_field(noStrikeRules_1_1_1, StrikeIncrement_10, StrikeRules_NoStrikeRules_10);
      set_field(noStrikeRules_1_1_1, FIX::StrikeRuleID{"STRING_1888695320"}, StrikeRules_NoStrikeRules_10);
      all_values.push_back(StrikeRules_NoStrikeRules_10);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        set_field(noMaturityRules_1_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1681413822"}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrement{1924918667}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityRuleID{"STRING_615345645"}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_211466039"}, MaturityRules_NoMaturityRules_22);
        all_values.push_back(MaturityRules_NoMaturityRules_22);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        set_field(noMaturityRules_1_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_544159014"}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrement{1830295084}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityRuleID{"STRING_2051408182"}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_1_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_2045278582"}, MaturityRules_NoMaturityRules_23);
        all_values.push_back(MaturityRules_NoMaturityRules_23);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("2606006");
set_field(noStrikeRules_1_1_2, EndStrikePxRange_11, StrikeRules_NoStrikeRules_11);
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("1983071");
set_field(noStrikeRules_1_1_2, StartStrikePxRange_11, StrikeRules_NoStrikeRules_11);
      set_field(noStrikeRules_1_1_2, FIX::StrikeExerciseStyle{447072354}, StrikeRules_NoStrikeRules_11);
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("8458337");
set_field(noStrikeRules_1_1_2, StrikeIncrement_11, StrikeRules_NoStrikeRules_11);
      set_field(noStrikeRules_1_1_2, FIX::StrikeRuleID{"STRING_1523803601"}, StrikeRules_NoStrikeRules_11);
      all_values.push_back(StrikeRules_NoStrikeRules_11);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        set_field(noMaturityRules_1_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_112933677"}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrement{1937359631}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityRuleID{"STRING_1279654637"}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_1_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_540293773"}, MaturityRules_NoMaturityRules_24);
        all_values.push_back(MaturityRules_NoMaturityRules_24);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_25;
        set_field(noMaturityRules_1_2_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_31219776"}, MaturityRules_NoMaturityRules_25);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_25);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearIncrement{963225192}, MaturityRules_NoMaturityRules_25);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_25);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityRuleID{"STRING_58663311"}, MaturityRules_NoMaturityRules_25);
        set_field(noMaturityRules_1_2_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_704436864"}, MaturityRules_NoMaturityRules_25);
        all_values.push_back(MaturityRules_NoMaturityRules_25);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_26;
        set_field(noMaturityRules_1_2_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1589655403"}, MaturityRules_NoMaturityRules_26);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_26);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearIncrement{354441452}, MaturityRules_NoMaturityRules_26);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_26);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityRuleID{"STRING_708553373"}, MaturityRules_NoMaturityRules_26);
        set_field(noMaturityRules_1_2_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_969787098"}, MaturityRules_NoMaturityRules_26);
        all_values.push_back(MaturityRules_NoMaturityRules_26);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_2);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_5;
    set_field(noMarketSegments_0_2, FIX::MarketID{"EXCHANGE_1578556461"}, MarketSegmentGrp_NoMarketSegments_5);
    set_field(noMarketSegments_0_2, FIX::MarketSegmentID{"STRING_1252712387"}, MarketSegmentGrp_NoMarketSegments_5);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_5);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_7;
    set_field(noMarketSegments_0_2, FIX::ExpirationCycle{1}, BaseTradingRules_7);
    set_field(noMarketSegments_0_2, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_7);
    FIX::MaxPriceVariation MaxPriceVariation_7;
    MaxPriceVariation_7.setString("5791104");
set_field(noMarketSegments_0_2, MaxPriceVariation_7, BaseTradingRules_7);
    FIX::MaxTradeVol MaxTradeVol_7;
    MaxTradeVol_7.setString("10394994");
set_field(noMarketSegments_0_2, MaxTradeVol_7, BaseTradingRules_7);
    FIX::MinTradeVol MinTradeVol_7;
    MinTradeVol_7.setString("11591628");
set_field(noMarketSegments_0_2, MinTradeVol_7, BaseTradingRules_7);
    set_field(noMarketSegments_0_2, FIX::MultilegModel{2}, BaseTradingRules_7);
    set_field(noMarketSegments_0_2, FIX::MultilegPriceMethod{4}, BaseTradingRules_7);
    set_field(noMarketSegments_0_2, FIX::PriceType{3}, BaseTradingRules_7);
    FIX::RoundLot RoundLot_7;
    RoundLot_7.setString("16855448");
set_field(noMarketSegments_0_2, RoundLot_7, BaseTradingRules_7);
    set_field(noMarketSegments_0_2, FIX::TradingCurrency{"GBP"}, BaseTradingRules_7);
    all_values.push_back(BaseTradingRules_7);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_14;
      set_field(noLotTypeRules_2_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_14);
      FIX::MinLotSize MinLotSize_14;
      MinLotSize_14.setString("3664755");
set_field(noLotTypeRules_2_1_0, MinLotSize_14, LotTypeRules_NoLotTypeRules_14);
      all_values.push_back(LotTypeRules_NoLotTypeRules_14);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      set_field(noLotTypeRules_2_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_15);
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("7104454");
set_field(noLotTypeRules_2_1_1, MinLotSize_15, LotTypeRules_NoLotTypeRules_15);
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_7;
    FIX::HighLimitPrice HighLimitPrice_7;
    HighLimitPrice_7.setString("9067693");
set_field(noMarketSegments_0_2, HighLimitPrice_7, PriceLimits_7);
    FIX::LowLimitPrice LowLimitPrice_7;
    LowLimitPrice_7.setString("13959198");
set_field(noMarketSegments_0_2, LowLimitPrice_7, PriceLimits_7);
    set_field(noMarketSegments_0_2, FIX::PriceLimitType{1}, PriceLimits_7);
    FIX::TradingReferencePrice TradingReferencePrice_7;
    TradingReferencePrice_7.setString("18699945");
set_field(noMarketSegments_0_2, TradingReferencePrice_7, PriceLimits_7);
    all_values.push_back(PriceLimits_7);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_10;
      FIX::EndTickPriceRange EndTickPriceRange_10;
      EndTickPriceRange_10.setString("9550772");
set_field(noTickRules_2_1_0, EndTickPriceRange_10, TickRules_NoTickRules_10);
      FIX::StartTickPriceRange StartTickPriceRange_10;
      StartTickPriceRange_10.setString("4269477");
set_field(noTickRules_2_1_0, StartTickPriceRange_10, TickRules_NoTickRules_10);
      FIX::TickIncrement TickIncrement_10;
      TickIncrement_10.setString("11695724");
set_field(noTickRules_2_1_0, TickIncrement_10, TickRules_NoTickRules_10);
      set_field(noTickRules_2_1_0, FIX::TickRuleType{4}, TickRules_NoTickRules_10);
      all_values.push_back(TickRules_NoTickRules_10);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_11;
      FIX::EndTickPriceRange EndTickPriceRange_11;
      EndTickPriceRange_11.setString("7813891");
set_field(noTickRules_2_1_1, EndTickPriceRange_11, TickRules_NoTickRules_11);
      FIX::StartTickPriceRange StartTickPriceRange_11;
      StartTickPriceRange_11.setString("3891792");
set_field(noTickRules_2_1_1, StartTickPriceRange_11, TickRules_NoTickRules_11);
      FIX::TickIncrement TickIncrement_11;
      TickIncrement_11.setString("12562241");
set_field(noTickRules_2_1_1, TickIncrement_11, TickRules_NoTickRules_11);
      set_field(noTickRules_2_1_1, FIX::TickRuleType{1}, TickRules_NoTickRules_11);
      all_values.push_back(TickRules_NoTickRules_11);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_12;
      FIX::EndTickPriceRange EndTickPriceRange_12;
      EndTickPriceRange_12.setString("19677356");
set_field(noTickRules_2_1_2, EndTickPriceRange_12, TickRules_NoTickRules_12);
      FIX::StartTickPriceRange StartTickPriceRange_12;
      StartTickPriceRange_12.setString("3614528");
set_field(noTickRules_2_1_2, StartTickPriceRange_12, TickRules_NoTickRules_12);
      FIX::TickIncrement TickIncrement_12;
      TickIncrement_12.setString("7392675");
set_field(noTickRules_2_1_2, TickIncrement_12, TickRules_NoTickRules_12);
      set_field(noTickRules_2_1_2, FIX::TickRuleType{1}, TickRules_NoTickRules_12);
      all_values.push_back(TickRules_NoTickRules_12);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribType{1778767018}, NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribValue{"STRING_93299125"}, NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_15;
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribType{1780274374}, NestedInstrumentAttribute_NoNestedInstrAttrib_15);
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribValue{"STRING_869089951"}, NestedInstrumentAttribute_NoNestedInstrAttrib_15);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_15);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_11);
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_11);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_25;
        set_field(noExecInstRules_2_0_2_0, FIX::ExecInstValue{'9'}, ExecInstRules_NoExecInstRules_25);
        all_values.push_back(ExecInstRules_NoExecInstRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_26);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDFeedType{"STRING_186546870"}, MarketDataFeedTypes_NoMDFeedTypes_26);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MarketDepth{1624452655}, MarketDataFeedTypes_NoMDFeedTypes_26);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_27);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDFeedType{"STRING_1582466763"}, MarketDataFeedTypes_NoMDFeedTypes_27);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MarketDepth{373382959}, MarketDataFeedTypes_NoMDFeedTypes_27);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        set_field(noMDFeedTypes_2_0_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_28);
        set_field(noMDFeedTypes_2_0_2_2, FIX::MDFeedType{"STRING_1162383816"}, MarketDataFeedTypes_NoMDFeedTypes_28);
        set_field(noMDFeedTypes_2_0_2_2, FIX::MarketDepth{1328460222}, MarketDataFeedTypes_NoMDFeedTypes_28);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        set_field(noMatchRules_2_0_2_0, FIX::MatchAlgorithm{"STRING_184472624"}, MatchRules_NoMatchRules_22);
        set_field(noMatchRules_2_0_2_0, FIX::MatchType{"STRING_A2"}, MatchRules_NoMatchRules_22);
        all_values.push_back(MatchRules_NoMatchRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        set_field(noMatchRules_2_0_2_1, FIX::MatchAlgorithm{"STRING_185259296"}, MatchRules_NoMatchRules_23);
        set_field(noMatchRules_2_0_2_1, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_23);
        all_values.push_back(MatchRules_NoMatchRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        set_field(noMatchRules_2_0_2_2, FIX::MatchAlgorithm{"STRING_984871445"}, MatchRules_NoMatchRules_24);
        set_field(noMatchRules_2_0_2_2, FIX::MatchType{"STRING_S4"}, MatchRules_NoMatchRules_24);
        all_values.push_back(MatchRules_NoMatchRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        set_field(noOrdTypeRules_2_0_2_0, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_30);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_20;
        set_field(noTimeInForceRules_2_0_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_20);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_21;
        set_field(noTimeInForceRules_2_0_2_1, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_21);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_22;
        set_field(noTimeInForceRules_2_0_2_2, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_22);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("19196783");
set_field(noStrikeRules_2_1_0, EndStrikePxRange_12, StrikeRules_NoStrikeRules_12);
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("10285928");
set_field(noStrikeRules_2_1_0, StartStrikePxRange_12, StrikeRules_NoStrikeRules_12);
      set_field(noStrikeRules_2_1_0, FIX::StrikeExerciseStyle{1120873626}, StrikeRules_NoStrikeRules_12);
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("10905302");
set_field(noStrikeRules_2_1_0, StrikeIncrement_12, StrikeRules_NoStrikeRules_12);
      set_field(noStrikeRules_2_1_0, FIX::StrikeRuleID{"STRING_364325662"}, StrikeRules_NoStrikeRules_12);
      all_values.push_back(StrikeRules_NoStrikeRules_12);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_27;
        set_field(noMaturityRules_2_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_2059860652"}, MaturityRules_NoMaturityRules_27);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_27);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrement{1744649665}, MaturityRules_NoMaturityRules_27);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_27);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityRuleID{"STRING_755301921"}, MaturityRules_NoMaturityRules_27);
        set_field(noMaturityRules_2_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_999061150"}, MaturityRules_NoMaturityRules_27);
        all_values.push_back(MaturityRules_NoMaturityRules_27);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_28;
        set_field(noMaturityRules_2_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1681390638"}, MaturityRules_NoMaturityRules_28);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_28);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrement{2123467159}, MaturityRules_NoMaturityRules_28);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_28);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityRuleID{"STRING_309661454"}, MaturityRules_NoMaturityRules_28);
        set_field(noMaturityRules_2_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1527337262"}, MaturityRules_NoMaturityRules_28);
        all_values.push_back(MaturityRules_NoMaturityRules_28);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("8807634");
set_field(noStrikeRules_2_1_1, EndStrikePxRange_13, StrikeRules_NoStrikeRules_13);
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("383087");
set_field(noStrikeRules_2_1_1, StartStrikePxRange_13, StrikeRules_NoStrikeRules_13);
      set_field(noStrikeRules_2_1_1, FIX::StrikeExerciseStyle{1712596558}, StrikeRules_NoStrikeRules_13);
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("14544152");
set_field(noStrikeRules_2_1_1, StrikeIncrement_13, StrikeRules_NoStrikeRules_13);
      set_field(noStrikeRules_2_1_1, FIX::StrikeRuleID{"STRING_1023180222"}, StrikeRules_NoStrikeRules_13);
      all_values.push_back(StrikeRules_NoStrikeRules_13);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_29;
        set_field(noMaturityRules_2_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1848319181"}, MaturityRules_NoMaturityRules_29);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_29);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrement{2029768001}, MaturityRules_NoMaturityRules_29);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_29);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityRuleID{"STRING_361424855"}, MaturityRules_NoMaturityRules_29);
        set_field(noMaturityRules_2_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_41787227"}, MaturityRules_NoMaturityRules_29);
        all_values.push_back(MaturityRules_NoMaturityRules_29);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_30;
        set_field(noMaturityRules_2_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_597698687"}, MaturityRules_NoMaturityRules_30);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_30);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearIncrement{1070380052}, MaturityRules_NoMaturityRules_30);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_30);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityRuleID{"STRING_1224149807"}, MaturityRules_NoMaturityRules_30);
        set_field(noMaturityRules_2_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1434705714"}, MaturityRules_NoMaturityRules_30);
        all_values.push_back(MaturityRules_NoMaturityRules_30);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_31;
        set_field(noMaturityRules_2_1_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_820612532"}, MaturityRules_NoMaturityRules_31);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_31);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearIncrement{565554979}, MaturityRules_NoMaturityRules_31);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_31);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityRuleID{"STRING_1235450686"}, MaturityRules_NoMaturityRules_31);
        set_field(noMaturityRules_2_1_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1320856900"}, MaturityRules_NoMaturityRules_31);
        all_values.push_back(MaturityRules_NoMaturityRules_31);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("14168396");
set_field(noStrikeRules_2_1_2, EndStrikePxRange_14, StrikeRules_NoStrikeRules_14);
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("7693576");
set_field(noStrikeRules_2_1_2, StartStrikePxRange_14, StrikeRules_NoStrikeRules_14);
      set_field(noStrikeRules_2_1_2, FIX::StrikeExerciseStyle{302058132}, StrikeRules_NoStrikeRules_14);
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("13928232");
set_field(noStrikeRules_2_1_2, StrikeIncrement_14, StrikeRules_NoStrikeRules_14);
      set_field(noStrikeRules_2_1_2, FIX::StrikeRuleID{"STRING_1465648482"}, StrikeRules_NoStrikeRules_14);
      all_values.push_back(StrikeRules_NoStrikeRules_14);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_32;
        set_field(noMaturityRules_2_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_772676825"}, MaturityRules_NoMaturityRules_32);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_32);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearIncrement{650028363}, MaturityRules_NoMaturityRules_32);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_32);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityRuleID{"STRING_1653343548"}, MaturityRules_NoMaturityRules_32);
        set_field(noMaturityRules_2_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1673208585"}, MaturityRules_NoMaturityRules_32);
        all_values.push_back(MaturityRules_NoMaturityRules_32);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_33;
        set_field(noMaturityRules_2_2_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1839338232"}, MaturityRules_NoMaturityRules_33);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_33);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearIncrement{1895229466}, MaturityRules_NoMaturityRules_33);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_33);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityRuleID{"STRING_383054806"}, MaturityRules_NoMaturityRules_33);
        set_field(noMaturityRules_2_2_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_109170673"}, MaturityRules_NoMaturityRules_33);
        all_values.push_back(MaturityRules_NoMaturityRules_33);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_34;
        set_field(noMaturityRules_2_2_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1763409812"}, MaturityRules_NoMaturityRules_34);
        set_field(noMaturityRules_2_2_2_2, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_34);
        set_field(noMaturityRules_2_2_2_2, FIX::MaturityMonthYearIncrement{242790230}, MaturityRules_NoMaturityRules_34);
        set_field(noMaturityRules_2_2_2_2, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_34);
        set_field(noMaturityRules_2_2_2_2, FIX::MaturityRuleID{"STRING_551842159"}, MaturityRules_NoMaturityRules_34);
        set_field(noMaturityRules_2_2_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1466940037"}, MaturityRules_NoMaturityRules_34);
        all_values.push_back(MaturityRules_NoMaturityRules_34);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_2);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_30;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_30);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EONIA"}, SpreadOrBenchmarkCurveData_30);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_539083262"}, SpreadOrBenchmarkCurveData_30);
  FIX::BenchmarkPrice BenchmarkPrice_30;
  BenchmarkPrice_30.setString("17902332");
set_field(msg, BenchmarkPrice_30, SpreadOrBenchmarkCurveData_30);
  set_field(msg, FIX::BenchmarkPriceType{1691433887}, SpreadOrBenchmarkCurveData_30);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1859940162"}, SpreadOrBenchmarkCurveData_30);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1059589292"}, SpreadOrBenchmarkCurveData_30);
  FIX::Spread Spread_30;
  Spread_30.setString("3133079");
set_field(msg, Spread_30, SpreadOrBenchmarkCurveData_30);
  all_values.push_back(SpreadOrBenchmarkCurveData_30);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_53;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_REFTRADE"}, Stipulations_NoStipulations_53);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1778956398"}, Stipulations_NoStipulations_53);
    all_values.push_back(Stipulations_NoStipulations_53);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_54;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_CPY"}, Stipulations_NoStipulations_54);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1077605680"}, Stipulations_NoStipulations_54);
    all_values.push_back(Stipulations_NoStipulations_54);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_55;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_PAYFREQ"}, Stipulations_NoStipulations_55);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1276262597"}, Stipulations_NoStipulations_55);
    all_values.push_back(Stipulations_NoStipulations_55);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_119;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1483744563"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{801987534}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1107250000"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{690439997}, UnderlyingInstrument_119);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
    UnderlyingAdjustedQuantity_119.setString("5497333");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_119, UnderlyingInstrument_119);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
    UnderlyingAllocationPercent_119.setString("89.370000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_119, UnderlyingInstrument_119);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
    UnderlyingAttachmentPoint_119.setString("48.030000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_658904026"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_297315102"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2054248296"}, UnderlyingInstrument_119);
    FIX::UnderlyingCapValue UnderlyingCapValue_119;
    UnderlyingCapValue_119.setString("9016942");
set_field(noUnderlyings_0_0, UnderlyingCapValue_119, UnderlyingInstrument_119);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
    UnderlyingCashAmount_119.setString("9836213");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_119);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
    UnderlyingContractMultiplier_119.setString("2211506");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{957149601}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1831061499"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_677133845"}, UnderlyingInstrument_119);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
    UnderlyingCouponRate_119.setString("28.630000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1473811092"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_119);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
    UnderlyingCurrentValue_119.setString("3859167");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_119, UnderlyingInstrument_119);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
    UnderlyingDetachmentPoint_119.setString("20.000000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_119, UnderlyingInstrument_119);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
    UnderlyingDirtyPrice_119.setString("12232040");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_119, UnderlyingInstrument_119);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
    UnderlyingEndPrice_119.setString("6908455");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_119, UnderlyingInstrument_119);
    FIX::UnderlyingEndValue UnderlyingEndValue_119;
    UnderlyingEndValue_119.setString("1658647");
set_field(noUnderlyings_0_0, UnderlyingEndValue_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1849438258}, UnderlyingInstrument_119);
    FIX::UnderlyingFXRate UnderlyingFXRate_119;
    UnderlyingFXRate_119.setString("17684512");
set_field(noUnderlyings_0_0, UnderlyingFXRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_119);
    FIX::UnderlyingFactor UnderlyingFactor_119;
    UnderlyingFactor_119.setString("9782172");
set_field(noUnderlyings_0_0, UnderlyingFactor_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1036363040}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1480010327"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1780204741"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2143613040"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_22966676"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_182454446"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_677518330"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1096461479"}, UnderlyingInstrument_119);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
    UnderlyingNotionalPercentageOutstanding_119.setString("84.720000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_119);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
    UnderlyingOriginalNotionalPercentageOutstanding_119.setString("61.280000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1743052728"}, UnderlyingInstrument_119);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
    UnderlyingPriceUnitOfMeasureQty_119.setString("19584547");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1461832936}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1964203373}, UnderlyingInstrument_119);
    FIX::UnderlyingPx UnderlyingPx_119;
    UnderlyingPx_119.setString("7681207");
set_field(noUnderlyings_0_0, UnderlyingPx_119, UnderlyingInstrument_119);
    FIX::UnderlyingQty UnderlyingQty_119;
    UnderlyingQty_119.setString("11454107");
set_field(noUnderlyings_0_0, UnderlyingQty_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_493853570"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_116869918"}, UnderlyingInstrument_119);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
    UnderlyingRepurchaseRate_119.setString("82.320000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{714937655}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1325559296"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_857654969"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1249329655"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_401279672"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1548500561"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1415194405"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_103234282"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1169468186"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1411460169"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_119);
    FIX::UnderlyingStartValue UnderlyingStartValue_119;
    UnderlyingStartValue_119.setString("583475");
set_field(noUnderlyings_0_0, UnderlyingStartValue_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_743986849"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_119);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
    UnderlyingStrikePrice_119.setString("7669535");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_896627029"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_731995301"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1863415005"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1737985501"}, UnderlyingInstrument_119);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
    UnderlyingUnitOfMeasureQty_119.setString("17068287");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_119, UnderlyingInstrument_119);
    all_values.push_back(UnderlyingInstrument_119);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1333554581"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1517799836"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_33506773"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1150274306"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_138436891"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1178917560"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_255306810"}, UnderlyingStipulations_NoUnderlyingStips_236);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1650655792"}, UnderlyingStipulations_NoUnderlyingStips_236);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_211581883"}, UnderlyingStipulations_NoUnderlyingStips_237);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1580866106"}, UnderlyingStipulations_NoUnderlyingStips_237);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1460911538"}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1909327675}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2085380061"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{931312213}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2140082465"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1019347902}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_989659792"}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1733520485}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1503539191"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{482663866}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1776132065"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1219470548}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_73165719"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1335477151}, UnderlyingInstrument_120);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("19386280");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_120, UnderlyingInstrument_120);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("3.000000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_120, UnderlyingInstrument_120);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("33.390000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1972134806"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_409510958"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_844230230"}, UnderlyingInstrument_120);
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("10035687");
set_field(noUnderlyings_0_1, UnderlyingCapValue_120, UnderlyingInstrument_120);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("20536388");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_120);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("5067408");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{117737070}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_532919498"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_867567977"}, UnderlyingInstrument_120);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("86.090000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_367581629"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_120);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("3054780");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_120, UnderlyingInstrument_120);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("42.170000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_120, UnderlyingInstrument_120);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("1523860");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_120, UnderlyingInstrument_120);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("13248259");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_120, UnderlyingInstrument_120);
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("4029003");
set_field(noUnderlyings_0_1, UnderlyingEndValue_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{888971739}, UnderlyingInstrument_120);
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("9108627");
set_field(noUnderlyings_0_1, UnderlyingFXRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_120);
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("2450272");
set_field(noUnderlyings_0_1, UnderlyingFactor_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1393526648}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1075685543"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1464497831"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1466692368"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_263679046"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1255642217"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_725929020"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_969472385"}, UnderlyingInstrument_120);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("33.750000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_120);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("26.160000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2083862094"}, UnderlyingInstrument_120);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("10415951");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{765756008}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{443119310}, UnderlyingInstrument_120);
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("11593322");
set_field(noUnderlyings_0_1, UnderlyingPx_120, UnderlyingInstrument_120);
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("12986755");
set_field(noUnderlyings_0_1, UnderlyingQty_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1310687287"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_590497197"}, UnderlyingInstrument_120);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("71.360000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1940099291}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_750284454"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1971735178"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1353339860"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_902670527"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1149077474"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1756240222"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1791642267"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_2059940256"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1055793700"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_120);
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("13059832");
set_field(noUnderlyings_0_1, UnderlyingStartValue_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2131479244"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_120);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("2476746");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_461842302"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1351120997"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1217147028"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1542135678"}, UnderlyingInstrument_120);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("3390773");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_120, UnderlyingInstrument_120);
    all_values.push_back(UnderlyingInstrument_120);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1478514124"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1380672494"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1921633434"}, UnderlyingStipulations_NoUnderlyingStips_238);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_392521083"}, UnderlyingStipulations_NoUnderlyingStips_238);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_800313863"}, UnderlyingStipulations_NoUnderlyingStips_239);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1084837073"}, UnderlyingStipulations_NoUnderlyingStips_239);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_983018280"}, UnderlyingStipulations_NoUnderlyingStips_240);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_319087351"}, UnderlyingStipulations_NoUnderlyingStips_240);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1733302734"}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{83308929}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1292416356"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1839549151}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_132648233"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1204872964}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_747859204"}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{363372573}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1375517868"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{988564550}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_979529442"}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{192201900}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1232012201"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{531279228}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_932558818"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{563042677}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1911951723"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{434197175}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_337192464"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{156989158}, UnderlyingInstrument_121);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("12345110");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_121, UnderlyingInstrument_121);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("95.370000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_121, UnderlyingInstrument_121);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("74.380000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1553598390"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_151998606"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_725826525"}, UnderlyingInstrument_121);
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("16969372");
set_field(noUnderlyings_0_2, UnderlyingCapValue_121, UnderlyingInstrument_121);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("2353075");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_121);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("8418699");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{2074856686}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1346964372"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2046742944"}, UnderlyingInstrument_121);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("22.420000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1368798507"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_121);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("5968327");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_121, UnderlyingInstrument_121);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("64.200000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_121, UnderlyingInstrument_121);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("2391328");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_121, UnderlyingInstrument_121);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("2867092");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_121, UnderlyingInstrument_121);
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("14433983");
set_field(noUnderlyings_0_2, UnderlyingEndValue_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{288325659}, UnderlyingInstrument_121);
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("15187214");
set_field(noUnderlyings_0_2, UnderlyingFXRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_121);
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("12208844");
set_field(noUnderlyings_0_2, UnderlyingFactor_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{2081764129}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1739145623"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1655081653"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_271472945"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1896134781"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_742109043"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1693502482"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_888658572"}, UnderlyingInstrument_121);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("37.850000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_121);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("50.970000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1845161057"}, UnderlyingInstrument_121);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("20808086");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{681317588}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{539547388}, UnderlyingInstrument_121);
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("20081816");
set_field(noUnderlyings_0_2, UnderlyingPx_121, UnderlyingInstrument_121);
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("20282819");
set_field(noUnderlyings_0_2, UnderlyingQty_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_438806684"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_535930256"}, UnderlyingInstrument_121);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("68.190000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{701438554}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1943017299"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1846429546"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1952634974"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_34666488"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_2133138797"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1248549646"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_322992147"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1504376600"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1075743546"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_121);
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("14386570");
set_field(noUnderlyings_0_2, UnderlyingStartValue_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_667405522"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_121);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("4160566");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1793583674"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1256148861"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1304715227"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1941807459"}, UnderlyingInstrument_121);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("9541663");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_121, UnderlyingInstrument_121);
    all_values.push_back(UnderlyingInstrument_121);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1639484868"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_887491277"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_31548609"}, UnderlyingStipulations_NoUnderlyingStips_241);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_748189291"}, UnderlyingStipulations_NoUnderlyingStips_241);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1333832576"}, UnderlyingStipulations_NoUnderlyingStips_242);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_470355293"}, UnderlyingStipulations_NoUnderlyingStips_242);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1284119547"}, UnderlyingStipulations_NoUnderlyingStips_243);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_435945747"}, UnderlyingStipulations_NoUnderlyingStips_243);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1079653198"}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{976945173}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_120546795"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{78011171}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1437311834"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1624923395}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_25;
  FIX::Yield Yield_25;
  Yield_25.setString("47.180000");
set_field(msg, Yield_25, YieldData_25);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_833704811"}, YieldData_25);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_916096829"}, YieldData_25);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
  YieldRedemptionPrice_25.setString("18211602");
set_field(msg, YieldRedemptionPrice_25, YieldData_25);
  set_field(msg, FIX::YieldRedemptionPriceType{1885179442}, YieldData_25);
  set_field(msg, FIX::YieldType{"STRING_MARK"}, YieldData_25);
  all_values.push_back(YieldData_25);
  all_compo_names.insert(".");

  // header
  multiset<string> header_80;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_80);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1531279468"}, header_80);
  set_header_field(msg.getHeader(), FIX::BodyLength{1734892068}, header_80);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1394448475"}, header_80);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1325603279"}, header_80);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_541574722"}, header_80);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_18681503"}, header_80);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{817604500}, header_80);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_80);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1471715768}, header_80);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_849153109"}, header_80);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_29771642"}, header_80);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_658064696"}, header_80);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 24, 2, 16, 7, 2005)}, header_80);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_80);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_80);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1398774947"}, header_80);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{650208612}, header_80);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_826888632"}, header_80);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_405046017"}, header_80);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1483913424"}, header_80);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 38, 1, 16, 11, 2001)}, header_80);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1562904331"}, header_80);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1931008317"}, header_80);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_203228163"}, header_80);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1581585835"}, header_80);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{601129169}, header_80);
  all_values.push_back(header_80);
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
