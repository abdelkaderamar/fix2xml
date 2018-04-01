#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_0;
  set_field(msg, FIX::Account{"STRING_1164404090"}, RequestForPositions_0);
  set_field(msg, FIX::AccountType{1}, RequestForPositions_0);
  set_field(msg, FIX::AcctIDSource{99}, RequestForPositions_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_854894855"}, RequestForPositions_0);
  set_field(msg, FIX::Currency{"CAN"}, RequestForPositions_0);
  set_field(msg, FIX::EncodedText{"DATA_1737700200"}, RequestForPositions_0);
  set_field(msg, FIX::EncodedTextLen{2023061392}, RequestForPositions_0);
  set_field(msg, FIX::MatchStatus{'0'}, RequestForPositions_0);
  set_field(msg, FIX::PosReqID{"STRING_1474405376"}, RequestForPositions_0);
  set_field(msg, FIX::PosReqType{6}, RequestForPositions_0);
  set_field(msg, FIX::ResponseDestination{"STRING_506993901"}, RequestForPositions_0);
  set_field(msg, FIX::ResponseTransportType{1}, RequestForPositions_0);
  set_field(msg, FIX::SettlCurrency{"JPY"}, RequestForPositions_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, RequestForPositions_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2017813915"}, RequestForPositions_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, RequestForPositions_0);
  set_field(msg, FIX::Text{"STRING_2063878759"}, RequestForPositions_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 47, 12, 22, 9, 2000)}, RequestForPositions_0);
  all_values.push_back(RequestForPositions_0);

  all_compo_names.insert("RequestForPositions");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_90;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1743973929"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{205113081}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1128190118"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1658104314}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1369517171"}, InstrumentLeg_90);
    FIX::LegContractMultiplier LegContractMultiplier_90;
    LegContractMultiplier_90.setString("5952105");
set_field(noLegs_0_0, LegContractMultiplier_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{227587629}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_76928378"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1584019824"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1930488824"}, InstrumentLeg_90);
    FIX::LegCouponRate LegCouponRate_90;
    LegCouponRate_90.setString("85.780000");
set_field(noLegs_0_0, LegCouponRate_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1459597568"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_79719177"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{532335405}, InstrumentLeg_90);
    FIX::LegFactor LegFactor_90;
    LegFactor_90.setString("9440426");
set_field(noLegs_0_0, LegFactor_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1024828327}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_694229744"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_344060687"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_895158594"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_903443580"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_260455798"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_699512264"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1419517870"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1979460525"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_90);
    FIX::LegOptionRatio LegOptionRatio_90;
    LegOptionRatio_90.setString("460988");
set_field(noLegs_0_0, LegOptionRatio_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_745206033"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_949734540"}, InstrumentLeg_90);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
    LegPriceUnitOfMeasureQty_90.setString("15733326");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegProduct{341696314}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1154847621}, InstrumentLeg_90);
    FIX::LegRatioQty LegRatioQty_90;
    LegRatioQty_90.setString("5540391");
set_field(noLegs_0_0, LegRatioQty_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1999800628"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_376881145"}, InstrumentLeg_90);
    FIX::LegRepurchaseRate LegRepurchaseRate_90;
    LegRepurchaseRate_90.setString("96.540000");
set_field(noLegs_0_0, LegRepurchaseRate_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{79904609}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_453809523"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_585785830"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2010393433"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_120954454"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2045383399"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2035734937"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_2125102576"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_90);
    FIX::LegStrikePrice LegStrikePrice_90;
    LegStrikePrice_90.setString("10024472");
set_field(noLegs_0_0, LegStrikePrice_90, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1114816439"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_403124437"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1897605850"}, InstrumentLeg_90);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2018260019"}, InstrumentLeg_90);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
    LegUnitOfMeasureQty_90.setString("6635802");
set_field(noLegs_0_0, LegUnitOfMeasureQty_90, InstrumentLeg_90);
    all_values.push_back(InstrumentLeg_90);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1290294241"}, LegSecAltIDGrp_NoLegSecurityAltID_188);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_495557112"}, LegSecAltIDGrp_NoLegSecurityAltID_188);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_2037230383"}, LegSecAltIDGrp_NoLegSecurityAltID_189);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1336393078"}, LegSecAltIDGrp_NoLegSecurityAltID_189);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_64;
  FIX::AttachmentPoint AttachmentPoint_64;
  AttachmentPoint_64.setString("31.460000");
set_field(msg, AttachmentPoint_64, Instrument_64);
  set_field(msg, FIX::CFICode{"STRING_839481275"}, Instrument_64);
  set_field(msg, FIX::CPProgram{99}, Instrument_64);
  set_field(msg, FIX::CPRegType{"STRING_1582459460"}, Instrument_64);
  FIX::CapPrice CapPrice_64;
  CapPrice_64.setString("19943288");
set_field(msg, CapPrice_64, Instrument_64);
  FIX::ContractMultiplier ContractMultiplier_64;
  ContractMultiplier_64.setString("13162812");
set_field(msg, ContractMultiplier_64, Instrument_64);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_64);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_223726394"}, Instrument_64);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_318047214"}, Instrument_64);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1514681050"}, Instrument_64);
  FIX::CouponRate CouponRate_64;
  CouponRate_64.setString("59.170000");
set_field(msg, CouponRate_64, Instrument_64);
  set_field(msg, FIX::CreditRating{"STRING_903833045"}, Instrument_64);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1377590836"}, Instrument_64);
  FIX::DetachmentPoint DetachmentPoint_64;
  DetachmentPoint_64.setString("3.710000");
set_field(msg, DetachmentPoint_64, Instrument_64);
  set_field(msg, FIX::EncodedIssuer{"DATA_801732796"}, Instrument_64);
  set_field(msg, FIX::EncodedIssuerLen{1265842125}, Instrument_64);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2060995132"}, Instrument_64);
  set_field(msg, FIX::EncodedSecurityDescLen{779351724}, Instrument_64);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_64);
  FIX::Factor Factor_64;
  Factor_64.setString("21200588");
set_field(msg, Factor_64, Instrument_64);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_64);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_64);
  FIX::FloorPrice FloorPrice_64;
  FloorPrice_64.setString("3756996");
set_field(msg, FloorPrice_64, Instrument_64);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_64);
  set_field(msg, FIX::InstrRegistry{"STRING_524537983"}, Instrument_64);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_64);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1981555648"}, Instrument_64);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1814832224"}, Instrument_64);
  set_field(msg, FIX::Issuer{"STRING_1534837020"}, Instrument_64);
  set_field(msg, FIX::ListMethod{1}, Instrument_64);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1003741654"}, Instrument_64);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_628116518"}, Instrument_64);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_563300011"}, Instrument_64);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1765983738"}, Instrument_64);
  FIX::MinPriceIncrement MinPriceIncrement_64;
  MinPriceIncrement_64.setString("630923");
set_field(msg, MinPriceIncrement_64, Instrument_64);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
  MinPriceIncrementAmount_64.setString("4101452");
set_field(msg, MinPriceIncrementAmount_64, Instrument_64);
  set_field(msg, FIX::NTPositionLimit{934781299}, Instrument_64);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
  NotionalPercentageOutstanding_64.setString("87.710000");
set_field(msg, NotionalPercentageOutstanding_64, Instrument_64);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_64);
  FIX::OptPayoutAmount OptPayoutAmount_64;
  OptPayoutAmount_64.setString("12528285");
set_field(msg, OptPayoutAmount_64, Instrument_64);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_64);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
  OriginalNotionalPercentageOutstanding_64.setString("75.710000");
set_field(msg, OriginalNotionalPercentageOutstanding_64, Instrument_64);
  set_field(msg, FIX::Pool{"STRING_9177910"}, Instrument_64);
  set_field(msg, FIX::PositionLimit{95173362}, Instrument_64);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_64);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_810910706"}, Instrument_64);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
  PriceUnitOfMeasureQty_64.setString("13610154");
set_field(msg, PriceUnitOfMeasureQty_64, Instrument_64);
  set_field(msg, FIX::Product{1}, Instrument_64);
  set_field(msg, FIX::ProductComplex{"STRING_1590262431"}, Instrument_64);
  set_field(msg, FIX::PutOrCall{0}, Instrument_64);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1995984661"}, Instrument_64);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1224577763"}, Instrument_64);
  FIX::RepurchaseRate RepurchaseRate_64;
  RepurchaseRate_64.setString("22.710000");
set_field(msg, RepurchaseRate_64, Instrument_64);
  set_field(msg, FIX::RepurchaseTerm{224200685}, Instrument_64);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_64);
  set_field(msg, FIX::SecurityDesc{"STRING_2078260254"}, Instrument_64);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1263480593"}, Instrument_64);
  set_field(msg, FIX::SecurityGroup{"STRING_443087297"}, Instrument_64);
  set_field(msg, FIX::SecurityID{"STRING_1745608831"}, Instrument_64);
  set_field(msg, FIX::SecurityIDSource{"STRING_2"}, Instrument_64);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_64);
  set_field(msg, FIX::SecuritySubType{"STRING_601866837"}, Instrument_64);
  set_field(msg, FIX::SecurityType{"STRING_LOFC"}, Instrument_64);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_64);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_64);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1342042813"}, Instrument_64);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1140351304"}, Instrument_64);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_64);
  FIX::StrikeMultiplier StrikeMultiplier_64;
  StrikeMultiplier_64.setString("17742229");
set_field(msg, StrikeMultiplier_64, Instrument_64);
  FIX::StrikePrice StrikePrice_64;
  StrikePrice_64.setString("2604930");
set_field(msg, StrikePrice_64, Instrument_64);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_64);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
  StrikePriceBoundaryPrecision_64.setString("68.810000");
set_field(msg, StrikePriceBoundaryPrecision_64, Instrument_64);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_64);
  FIX::StrikeValue StrikeValue_64;
  StrikeValue_64.setString("16526674");
set_field(msg, StrikeValue_64, Instrument_64);
  set_field(msg, FIX::Symbol{"STRING_900561176"}, Instrument_64);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_64);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_64);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_64);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_64);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
  UnitOfMeasureQty_64.setString("17661599");
set_field(msg, UnitOfMeasureQty_64, Instrument_64);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_64);
  all_values.push_back(Instrument_64);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_134;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_134);
    FIX::ComplexEventPrice ComplexEventPrice_134;
    ComplexEventPrice_134.setString("8491886");
set_field(noComplexEvents_0_0, ComplexEventPrice_134, ComplexEvents_NoComplexEvents_134);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_134);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
    ComplexEventPriceBoundaryPrecision_134.setString("52.020000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_134, ComplexEvents_NoComplexEvents_134);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_134);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_134);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
    ComplexOptPayoutAmount_134.setString("7013003");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_134, ComplexEvents_NoComplexEvents_134);
    all_values.push_back(ComplexEvents_NoComplexEvents_134);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_279;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 7, 19, 27, 2, 2015)}, ComplexEventDates_NoComplexEventDates_279);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 45, 42, 25, 7, 2007)}, ComplexEventDates_NoComplexEventDates_279);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_279);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 50, 10)}, ComplexEventTimes_NoComplexEventTimes_562);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 19, 27)}, ComplexEventTimes_NoComplexEventTimes_562);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 31, 5)}, ComplexEventTimes_NoComplexEventTimes_563);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 51, 10)}, ComplexEventTimes_NoComplexEventTimes_563);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 9, 39)}, ComplexEventTimes_NoComplexEventTimes_564);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 54, 19)}, ComplexEventTimes_NoComplexEventTimes_564);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_280;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 1, 49, 10, 8, 2009)}, ComplexEventDates_NoComplexEventDates_280);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 10, 43, 17, 2, 2013)}, ComplexEventDates_NoComplexEventDates_280);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_280);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 4, 5)}, ComplexEventTimes_NoComplexEventTimes_565);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 48, 56)}, ComplexEventTimes_NoComplexEventTimes_565);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 6, 49)}, ComplexEventTimes_NoComplexEventTimes_566);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 36, 34)}, ComplexEventTimes_NoComplexEventTimes_566);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 28, 14)}, ComplexEventTimes_NoComplexEventTimes_567);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 34, 10)}, ComplexEventTimes_NoComplexEventTimes_567);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_281;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 54, 30, 21, 2, 2001)}, ComplexEventDates_NoComplexEventDates_281);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 51, 14, 8, 5, 2001)}, ComplexEventDates_NoComplexEventDates_281);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_281);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 43, 32)}, ComplexEventTimes_NoComplexEventTimes_568);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 8, 51)}, ComplexEventTimes_NoComplexEventTimes_568);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_131;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_233390287"}, EvntGrp_NoEvents_131);
    FIX::EventPx EventPx_131;
    EventPx_131.setString("355795");
set_field(noEvents_0_0, EventPx_131, EvntGrp_NoEvents_131);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2072953355"}, EvntGrp_NoEvents_131);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 1, 3, 27, 10, 2007)}, EvntGrp_NoEvents_131);
    set_field(noEvents_0_0, FIX::EventType{7}, EvntGrp_NoEvents_131);
    all_values.push_back(EvntGrp_NoEvents_131);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_132;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2042131434"}, EvntGrp_NoEvents_132);
    FIX::EventPx EventPx_132;
    EventPx_132.setString("15757424");
set_field(noEvents_0_1, EventPx_132, EvntGrp_NoEvents_132);
    set_field(noEvents_0_1, FIX::EventText{"STRING_368766333"}, EvntGrp_NoEvents_132);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(8, 24, 1, 25, 5, 2002)}, EvntGrp_NoEvents_132);
    set_field(noEvents_0_1, FIX::EventType{11}, EvntGrp_NoEvents_132);
    all_values.push_back(EvntGrp_NoEvents_132);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_133;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1080262247"}, EvntGrp_NoEvents_133);
    FIX::EventPx EventPx_133;
    EventPx_133.setString("7477451");
set_field(noEvents_0_2, EventPx_133, EvntGrp_NoEvents_133);
    set_field(noEvents_0_2, FIX::EventText{"STRING_960718773"}, EvntGrp_NoEvents_133);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(3, 28, 19, 14, 2, 2014)}, EvntGrp_NoEvents_133);
    set_field(noEvents_0_2, FIX::EventType{19}, EvntGrp_NoEvents_133);
    all_values.push_back(EvntGrp_NoEvents_133);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_121;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1076676731"}, InstrumentParties_NoInstrumentParties_121);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_121);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{574668557}, InstrumentParties_NoInstrumentParties_121);
    all_values.push_back(InstrumentParties_NoInstrumentParties_121);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1610864604"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{949350662}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_543719148"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1072518902}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_122;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_843998448"}, InstrumentParties_NoInstrumentParties_122);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_122);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1441285235}, InstrumentParties_NoInstrumentParties_122);
    all_values.push_back(InstrumentParties_NoInstrumentParties_122);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1955472523"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{160421871}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_312243216"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{429983448}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_126;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1200734253"}, SecAltIDGrp_NoSecurityAltID_126);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_613595378"}, SecAltIDGrp_NoSecurityAltID_126);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_127;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1028719714"}, SecAltIDGrp_NoSecurityAltID_127);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1948479391"}, SecAltIDGrp_NoSecurityAltID_127);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_128;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1574314151"}, SecurityXML_128);
  set_field(msg, FIX::SecurityXMLLen{531520965}, SecurityXML_128);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_560178218"}, SecurityXML_128);
  all_values.push_back(SecurityXML_128);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_119;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1626629764"}, Parties_NoPartyIDs_119);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_119);
    set_field(noPartyIDs_0_0, FIX::PartyRole{47}, Parties_NoPartyIDs_119);
    all_values.push_back(Parties_NoPartyIDs_119);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_246;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_295097446"}, PtysSubGrp_NoPartySubIDs_246);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_246);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_246);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_247;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1884321934"}, PtysSubGrp_NoPartySubIDs_247);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_247);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_247);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1139341194"}, PtysSubGrp_NoPartySubIDs_248);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_248);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_120;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1404321071"}, Parties_NoPartyIDs_120);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_120);
    set_field(noPartyIDs_0_1, FIX::PartyRole{36}, Parties_NoPartyIDs_120);
    all_values.push_back(Parties_NoPartyIDs_120);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_785206656"}, PtysSubGrp_NoPartySubIDs_249);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_249);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1770641560"}, PtysSubGrp_NoPartySubIDs_250);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_250);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1134371288"}, PtysSubGrp_NoPartySubIDs_251);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_251);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_20;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_20);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_20);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_20);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_21);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_21);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_22;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_22);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_22);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_22);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_113;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1292277930"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{185849173}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1071860291"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{771424047}, UnderlyingInstrument_113);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
    UnderlyingAdjustedQuantity_113.setString("5956972");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_113, UnderlyingInstrument_113);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
    UnderlyingAllocationPercent_113.setString("15.920000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_113, UnderlyingInstrument_113);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
    UnderlyingAttachmentPoint_113.setString("92.500000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_890794656"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1689674229"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1315907536"}, UnderlyingInstrument_113);
    FIX::UnderlyingCapValue UnderlyingCapValue_113;
    UnderlyingCapValue_113.setString("6842511");
set_field(noUnderlyings_0_0, UnderlyingCapValue_113, UnderlyingInstrument_113);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
    UnderlyingCashAmount_113.setString("6815317");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_113);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
    UnderlyingContractMultiplier_113.setString("20885721");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{622739983}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1333513624"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_270444871"}, UnderlyingInstrument_113);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
    UnderlyingCouponRate_113.setString("66.390000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_512412389"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_113);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
    UnderlyingCurrentValue_113.setString("16467836");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_113, UnderlyingInstrument_113);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
    UnderlyingDetachmentPoint_113.setString("62.140000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_113, UnderlyingInstrument_113);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
    UnderlyingDirtyPrice_113.setString("4910689");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_113, UnderlyingInstrument_113);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
    UnderlyingEndPrice_113.setString("10636547");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_113, UnderlyingInstrument_113);
    FIX::UnderlyingEndValue UnderlyingEndValue_113;
    UnderlyingEndValue_113.setString("15567034");
set_field(noUnderlyings_0_0, UnderlyingEndValue_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{315744202}, UnderlyingInstrument_113);
    FIX::UnderlyingFXRate UnderlyingFXRate_113;
    UnderlyingFXRate_113.setString("10941212");
set_field(noUnderlyings_0_0, UnderlyingFXRate_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_113);
    FIX::UnderlyingFactor UnderlyingFactor_113;
    UnderlyingFactor_113.setString("20888988");
set_field(noUnderlyings_0_0, UnderlyingFactor_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{551418205}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1462254712"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_127264331"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1623278496"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_86195111"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_722961541"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_600796440"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1665264361"}, UnderlyingInstrument_113);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
    UnderlyingNotionalPercentageOutstanding_113.setString("61.970000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_113);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
    UnderlyingOriginalNotionalPercentageOutstanding_113.setString("82.500000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_150523673"}, UnderlyingInstrument_113);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
    UnderlyingPriceUnitOfMeasureQty_113.setString("8245187");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{812797432}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{91612219}, UnderlyingInstrument_113);
    FIX::UnderlyingPx UnderlyingPx_113;
    UnderlyingPx_113.setString("14472587");
set_field(noUnderlyings_0_0, UnderlyingPx_113, UnderlyingInstrument_113);
    FIX::UnderlyingQty UnderlyingQty_113;
    UnderlyingQty_113.setString("21463110");
set_field(noUnderlyings_0_0, UnderlyingQty_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_362057091"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_707721770"}, UnderlyingInstrument_113);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
    UnderlyingRepurchaseRate_113.setString("97.970000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{255659874}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_427366152"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_10539826"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2080326089"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_918435141"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1074194593"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1489545906"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1234179343"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_20832179"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1659522688"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_113);
    FIX::UnderlyingStartValue UnderlyingStartValue_113;
    UnderlyingStartValue_113.setString("5722503");
set_field(noUnderlyings_0_0, UnderlyingStartValue_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_974293752"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_113);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
    UnderlyingStrikePrice_113.setString("10604888");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_113, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2025820373"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_648841672"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_578269577"}, UnderlyingInstrument_113);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1492092922"}, UnderlyingInstrument_113);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
    UnderlyingUnitOfMeasureQty_113.setString("7918286");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_113, UnderlyingInstrument_113);
    all_values.push_back(UnderlyingInstrument_113);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1642616595"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1616347489"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1734228815"}, UnderlyingStipulations_NoUnderlyingStips_228);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_916122620"}, UnderlyingStipulations_NoUnderlyingStips_228);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_76099019"}, UnderlyingStipulations_NoUnderlyingStips_229);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2096285906"}, UnderlyingStipulations_NoUnderlyingStips_229);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1623844390"}, UnderlyingStipulations_NoUnderlyingStips_230);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_587338816"}, UnderlyingStipulations_NoUnderlyingStips_230);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2051210542"}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{137304573}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1672073236"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1626850479}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2056341379"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1692905415}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1138889519"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1084452232}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
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
