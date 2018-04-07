#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataSnapshotFullRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_0;
  set_field(msg, FIX::ApplQueueDepth{403754674}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::ApplQueueResolution{0}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1131625565"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_P"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_3"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDBookType{1}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDFeedType{"STRING_798154232"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDReportID{1543857080}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDReqID{"STRING_1530376066"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDStreamID{"STRING_1445446934"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDSubBookType{742037255}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MarketDepth{2047646021}, MarketDataSnapshotFullRefresh_0);
  FIX::NetChgPrevDay NetChgPrevDay_1;
  NetChgPrevDay_1.setString("13808056");
set_field(msg, NetChgPrevDay_1, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::RefreshIndicator{true}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::TotNumReports{2112974528}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_799621785"}, MarketDataSnapshotFullRefresh_0);
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  all_compo_names.insert("MarketDataSnapshotFullRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  set_field(msg, FIX::ApplID{"STRING_240356915"}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplLastSeqNum{2578085}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplSeqNum{247236356}, ApplicationSequenceControl_7);
  all_values.push_back(ApplicationSequenceControl_7);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_47;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_994751417"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{138417033}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2015230866"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1774574772}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2124285653"}, InstrumentLeg_47);
    FIX::LegContractMultiplier LegContractMultiplier_47;
    LegContractMultiplier_47.setString("16402269");
set_field(noLegs_0_0, LegContractMultiplier_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1781836276}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_695578002"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2018951914"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_81396980"}, InstrumentLeg_47);
    FIX::LegCouponRate LegCouponRate_47;
    LegCouponRate_47.setString("26.760000");
set_field(noLegs_0_0, LegCouponRate_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1388312602"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_197965510"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1490076389}, InstrumentLeg_47);
    FIX::LegFactor LegFactor_47;
    LegFactor_47.setString("313346");
set_field(noLegs_0_0, LegFactor_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1741822590}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_872968807"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1476781588"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_336376197"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_773131181"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_710103639"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1546875906"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_738622061"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1509725425"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_47);
    FIX::LegOptionRatio LegOptionRatio_47;
    LegOptionRatio_47.setString("7412001");
set_field(noLegs_0_0, LegOptionRatio_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_945705904"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2034469177"}, InstrumentLeg_47);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_47;
    LegPriceUnitOfMeasureQty_47.setString("15394070");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegProduct{1940457321}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegPutOrCall{25402563}, InstrumentLeg_47);
    FIX::LegRatioQty LegRatioQty_47;
    LegRatioQty_47.setString("14071542");
set_field(noLegs_0_0, LegRatioQty_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1567548445"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_2204568"}, InstrumentLeg_47);
    FIX::LegRepurchaseRate LegRepurchaseRate_47;
    LegRepurchaseRate_47.setString("75.060000");
set_field(noLegs_0_0, LegRepurchaseRate_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1201901073}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_697782570"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_771365773"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1283298054"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1797115247"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_12194727"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_348836951"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_210160238"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_47);
    FIX::LegStrikePrice LegStrikePrice_47;
    LegStrikePrice_47.setString("19519828");
set_field(noLegs_0_0, LegStrikePrice_47, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_564398500"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_390928261"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_140875378"}, InstrumentLeg_47);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1337529681"}, InstrumentLeg_47);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_47;
    LegUnitOfMeasureQty_47.setString("11010319");
set_field(noLegs_0_0, LegUnitOfMeasureQty_47, InstrumentLeg_47);
    all_values.push_back(InstrumentLeg_47);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_100;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2076151742"}, LegSecAltIDGrp_NoLegSecurityAltID_100);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_463273678"}, LegSecAltIDGrp_NoLegSecurityAltID_100);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_100);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_101;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1327500457"}, LegSecAltIDGrp_NoLegSecurityAltID_101);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_669868240"}, LegSecAltIDGrp_NoLegSecurityAltID_101);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_101);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_31;
  FIX::AttachmentPoint AttachmentPoint_31;
  AttachmentPoint_31.setString("95.820000");
set_field(msg, AttachmentPoint_31, Instrument_31);
  set_field(msg, FIX::CFICode{"STRING_1214485986"}, Instrument_31);
  set_field(msg, FIX::CPProgram{1}, Instrument_31);
  set_field(msg, FIX::CPRegType{"STRING_1201953255"}, Instrument_31);
  FIX::CapPrice CapPrice_31;
  CapPrice_31.setString("12398885");
set_field(msg, CapPrice_31, Instrument_31);
  FIX::ContractMultiplier ContractMultiplier_31;
  ContractMultiplier_31.setString("14689458");
set_field(msg, ContractMultiplier_31, Instrument_31);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_31);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1242093117"}, Instrument_31);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_221359703"}, Instrument_31);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1823919126"}, Instrument_31);
  FIX::CouponRate CouponRate_31;
  CouponRate_31.setString("56.880000");
set_field(msg, CouponRate_31, Instrument_31);
  set_field(msg, FIX::CreditRating{"STRING_992725476"}, Instrument_31);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_959733532"}, Instrument_31);
  FIX::DetachmentPoint DetachmentPoint_31;
  DetachmentPoint_31.setString("72.870000");
set_field(msg, DetachmentPoint_31, Instrument_31);
  set_field(msg, FIX::EncodedIssuer{"DATA_1004920204"}, Instrument_31);
  set_field(msg, FIX::EncodedIssuerLen{1308570484}, Instrument_31);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_472319307"}, Instrument_31);
  set_field(msg, FIX::EncodedSecurityDescLen{1215080442}, Instrument_31);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_31);
  FIX::Factor Factor_31;
  Factor_31.setString("15339496");
set_field(msg, Factor_31, Instrument_31);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_31);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_31);
  FIX::FloorPrice FloorPrice_31;
  FloorPrice_31.setString("19248778");
set_field(msg, FloorPrice_31, Instrument_31);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_31);
  set_field(msg, FIX::InstrRegistry{"STRING_754444709"}, Instrument_31);
  set_field(msg, FIX::InstrmtAssignmentMethod{'8'}, Instrument_31);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_700722636"}, Instrument_31);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_683112803"}, Instrument_31);
  set_field(msg, FIX::Issuer{"STRING_1341699821"}, Instrument_31);
  set_field(msg, FIX::ListMethod{1}, Instrument_31);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1352981043"}, Instrument_31);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_603195755"}, Instrument_31);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1095225432"}, Instrument_31);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1414772653"}, Instrument_31);
  FIX::MinPriceIncrement MinPriceIncrement_31;
  MinPriceIncrement_31.setString("18051490");
set_field(msg, MinPriceIncrement_31, Instrument_31);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_31;
  MinPriceIncrementAmount_31.setString("1876303");
set_field(msg, MinPriceIncrementAmount_31, Instrument_31);
  set_field(msg, FIX::NTPositionLimit{736234850}, Instrument_31);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_31;
  NotionalPercentageOutstanding_31.setString("34.150000");
set_field(msg, NotionalPercentageOutstanding_31, Instrument_31);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_31);
  FIX::OptPayoutAmount OptPayoutAmount_31;
  OptPayoutAmount_31.setString("9575945");
set_field(msg, OptPayoutAmount_31, Instrument_31);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_31);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_31;
  OriginalNotionalPercentageOutstanding_31.setString("54.910000");
set_field(msg, OriginalNotionalPercentageOutstanding_31, Instrument_31);
  set_field(msg, FIX::Pool{"STRING_1950320030"}, Instrument_31);
  set_field(msg, FIX::PositionLimit{915852426}, Instrument_31);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_31);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_807756586"}, Instrument_31);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_31;
  PriceUnitOfMeasureQty_31.setString("769392");
set_field(msg, PriceUnitOfMeasureQty_31, Instrument_31);
  set_field(msg, FIX::Product{11}, Instrument_31);
  set_field(msg, FIX::ProductComplex{"STRING_2022837028"}, Instrument_31);
  set_field(msg, FIX::PutOrCall{1}, Instrument_31);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_522924417"}, Instrument_31);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_894933002"}, Instrument_31);
  FIX::RepurchaseRate RepurchaseRate_31;
  RepurchaseRate_31.setString("44.670000");
set_field(msg, RepurchaseRate_31, Instrument_31);
  set_field(msg, FIX::RepurchaseTerm{300318659}, Instrument_31);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_31);
  set_field(msg, FIX::SecurityDesc{"STRING_1248299177"}, Instrument_31);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1178744802"}, Instrument_31);
  set_field(msg, FIX::SecurityGroup{"STRING_608626991"}, Instrument_31);
  set_field(msg, FIX::SecurityID{"STRING_1931411980"}, Instrument_31);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_31);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_31);
  set_field(msg, FIX::SecuritySubType{"STRING_1136909376"}, Instrument_31);
  set_field(msg, FIX::SecurityType{"STRING_XCN"}, Instrument_31);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_31);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_31);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_633822093"}, Instrument_31);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1772222202"}, Instrument_31);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_31);
  FIX::StrikeMultiplier StrikeMultiplier_31;
  StrikeMultiplier_31.setString("10544620");
set_field(msg, StrikeMultiplier_31, Instrument_31);
  FIX::StrikePrice StrikePrice_31;
  StrikePrice_31.setString("20980277");
set_field(msg, StrikePrice_31, Instrument_31);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_31);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_31;
  StrikePriceBoundaryPrecision_31.setString("38.480000");
set_field(msg, StrikePriceBoundaryPrecision_31, Instrument_31);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_31);
  FIX::StrikeValue StrikeValue_31;
  StrikeValue_31.setString("17854768");
set_field(msg, StrikeValue_31, Instrument_31);
  set_field(msg, FIX::Symbol{"STRING_793232978"}, Instrument_31);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_31);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_31);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_31);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_31);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_31;
  UnitOfMeasureQty_31.setString("7918718");
set_field(msg, UnitOfMeasureQty_31, Instrument_31);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_31);
  all_values.push_back(Instrument_31);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_63;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_63);
    FIX::ComplexEventPrice ComplexEventPrice_63;
    ComplexEventPrice_63.setString("6054508");
set_field(noComplexEvents_0_0, ComplexEventPrice_63, ComplexEvents_NoComplexEvents_63);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_63);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_63;
    ComplexEventPriceBoundaryPrecision_63.setString("18.790000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_63, ComplexEvents_NoComplexEvents_63);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_63);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_63);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_63;
    ComplexOptPayoutAmount_63.setString("1704702");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_63, ComplexEvents_NoComplexEvents_63);
    all_values.push_back(ComplexEvents_NoComplexEvents_63);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_129;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 5, 51, 16, 3, 2002)}, ComplexEventDates_NoComplexEventDates_129);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 3, 28, 17, 1, 2004)}, ComplexEventDates_NoComplexEventDates_129);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_129);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 25, 18)}, ComplexEventTimes_NoComplexEventTimes_262);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 43, 34)}, ComplexEventTimes_NoComplexEventTimes_262);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 36, 9)}, ComplexEventTimes_NoComplexEventTimes_263);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 20, 21)}, ComplexEventTimes_NoComplexEventTimes_263);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_130;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 18, 48, 24, 9, 2006)}, ComplexEventDates_NoComplexEventDates_130);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 9, 40, 23, 10, 2002)}, ComplexEventDates_NoComplexEventDates_130);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_130);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 7, 22)}, ComplexEventTimes_NoComplexEventTimes_264);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 57, 51)}, ComplexEventTimes_NoComplexEventTimes_264);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 28, 46)}, ComplexEventTimes_NoComplexEventTimes_265);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 58, 16)}, ComplexEventTimes_NoComplexEventTimes_265);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 34, 38)}, ComplexEventTimes_NoComplexEventTimes_266);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 44, 31)}, ComplexEventTimes_NoComplexEventTimes_266);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_131;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 3, 48, 11, 6, 2017)}, ComplexEventDates_NoComplexEventDates_131);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 28, 25, 0, 12, 2004)}, ComplexEventDates_NoComplexEventDates_131);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_131);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 7, 50)}, ComplexEventTimes_NoComplexEventTimes_267);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 49, 22)}, ComplexEventTimes_NoComplexEventTimes_267);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 48, 30)}, ComplexEventTimes_NoComplexEventTimes_268);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 15, 29)}, ComplexEventTimes_NoComplexEventTimes_268);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 32, 10)}, ComplexEventTimes_NoComplexEventTimes_269);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 32, 12)}, ComplexEventTimes_NoComplexEventTimes_269);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_65;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_373994460"}, EvntGrp_NoEvents_65);
    FIX::EventPx EventPx_65;
    EventPx_65.setString("17091204");
set_field(noEvents_0_0, EventPx_65, EvntGrp_NoEvents_65);
    set_field(noEvents_0_0, FIX::EventText{"STRING_895444513"}, EvntGrp_NoEvents_65);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 52, 48, 23, 5, 2007)}, EvntGrp_NoEvents_65);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_65);
    all_values.push_back(EvntGrp_NoEvents_65);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_66;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2072359493"}, EvntGrp_NoEvents_66);
    FIX::EventPx EventPx_66;
    EventPx_66.setString("11893277");
set_field(noEvents_0_1, EventPx_66, EvntGrp_NoEvents_66);
    set_field(noEvents_0_1, FIX::EventText{"STRING_119803171"}, EvntGrp_NoEvents_66);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(11, 19, 8, 14, 10, 2005)}, EvntGrp_NoEvents_66);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_66);
    all_values.push_back(EvntGrp_NoEvents_66);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_59;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_762309496"}, InstrumentParties_NoInstrumentParties_59);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_59);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{207306294}, InstrumentParties_NoInstrumentParties_59);
    all_values.push_back(InstrumentParties_NoInstrumentParties_59);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1060164038"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{319434206}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1542853528"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{123850315}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_64;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1104490318"}, SecAltIDGrp_NoSecurityAltID_64);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1019294828"}, SecAltIDGrp_NoSecurityAltID_64);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_64);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_65;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1455067802"}, SecAltIDGrp_NoSecurityAltID_65);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1906319390"}, SecAltIDGrp_NoSecurityAltID_65);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_65);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_66;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1857127440"}, SecAltIDGrp_NoSecurityAltID_66);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1120984363"}, SecAltIDGrp_NoSecurityAltID_66);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_66);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_62;
  set_field(msg, FIX::SecurityXML{"XMLDATA_26827125"}, SecurityXML_62);
  set_field(msg, FIX::SecurityXMLLen{429841844}, SecurityXML_62);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1280174894"}, SecurityXML_62);
  all_values.push_back(SecurityXML_62);
  all_compo_names.insert("..");

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    set_field(noMDEntries_0_0, FIX::Currency{"GBP"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DealingCapacity{'A'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DeskID{"STRING_526239967"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedText{"DATA_1186109905"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedTextLen{2143826752}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_h"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireDate{"LOCALMKTDATE_188930475"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(18, 35, 56, 18, 8, 2008)}, MDFullGrp_NoMDEntries_0);
    FIX::FirstPx FirstPx_1;
    FirstPx_1.setString("1134530");
set_field(noMDEntries_0_0, FirstPx_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::HaltReasonInt{3}, MDFullGrp_NoMDEntries_0);
    FIX::HighPx HighPx_1;
    HighPx_1.setString("386549");
set_field(noMDEntries_0_0, HighPx_1, MDFullGrp_NoMDEntries_0);
    FIX::LastPx LastPx_11;
    LastPx_11.setString("16563066");
set_field(noMDEntries_0_0, LastPx_11, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LocationID{"STRING_1662471892"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LotType{'4'}, MDFullGrp_NoMDEntries_0);
    FIX::LowPx LowPx_1;
    LowPx_1.setString("6133132");
set_field(noMDEntries_0_0, LowPx_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryBuyer{"STRING_534283072"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryDate{FIX::UTCDATEONLY(27, 9, 2000)}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_1;
    MDEntryForwardPoints_1.setString("3989761");
set_field(noMDEntries_0_0, MDEntryForwardPoints_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryID{"STRING_673768709"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryOriginator{"STRING_293343378"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryPositionNo{2091386682}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntryPx MDEntryPx_1;
    MDEntryPx_1.setString("10284863");
set_field(noMDEntries_0_0, MDEntryPx_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntrySeller{"STRING_615362384"}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("17561167");
set_field(noMDEntries_0_0, MDEntrySize_3, MDFullGrp_NoMDEntries_0);
    FIX::MDEntrySpotRate MDEntrySpotRate_1;
    MDEntrySpotRate_1.setString("15547263");
set_field(noMDEntries_0_0, MDEntrySpotRate_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryTime{FIX::UTCTIMEONLY(15, 14, 25)}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryType{'Z'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDMkt{"EXCHANGE_1617113684"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDOriginType{1}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDPriceLevel{1292410005}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDQuoteType{3}, MDFullGrp_NoMDEntries_0);
    FIX::MinQty MinQty_3;
    MinQty_3.setString("9346593");
set_field(noMDEntries_0_0, MinQty_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::NumberOfOrders{1011630747}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_0"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrdType{'D'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderCapacity{'A'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderID{"STRING_878590773"}, MDFullGrp_NoMDEntries_0);
    FIX::PriceDelta PriceDelta_2;
    PriceDelta_2.setString("19882691");
set_field(noMDEntries_0_0, PriceDelta_2, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::PriceType{6}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_v"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteEntryID{"STRING_375068616"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::RptSeq{1822037080}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Scope{"MULTIPLECHARVALUE_1"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecondaryOrderID{"STRING_618995481"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecurityTradingStatus{17}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SellerDays{115545615}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlCurrency{"CHF"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlDate{"LOCALMKTDATE_59448649"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlType{"STRING_5"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Text{"STRING_1743911328"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TickDirection{'1'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TimeInForce{'7'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradeCondition{"MULTIPLESTRINGVALUE_F"}, MDFullGrp_NoMDEntries_0);
    FIX::TradeVolume TradeVolume_1;
    TradeVolume_1.setString("14205415");
set_field(noMDEntries_0_0, TradeVolume_1, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionID{"STRING_6"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionSubID{"STRING_5"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TrdType{27}, MDFullGrp_NoMDEntries_0);
    all_values.push_back(MDFullGrp_NoMDEntries_0);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_58;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1697020920"}, Parties_NoPartyIDs_58);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_58);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{79}, Parties_NoPartyIDs_58);
      all_values.push_back(Parties_NoPartyIDs_58);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_117;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1210110573"}, PtysSubGrp_NoPartySubIDs_117);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_117);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_117);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_59;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_809993944"}, Parties_NoPartyIDs_59);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_59);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{74}, Parties_NoPartyIDs_59);
      all_values.push_back(Parties_NoPartyIDs_59);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_118;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1895281932"}, PtysSubGrp_NoPartySubIDs_118);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_118);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_118);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_60;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_1025848105"}, Parties_NoPartyIDs_60);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_60);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{76}, Parties_NoPartyIDs_60);
      all_values.push_back(Parties_NoPartyIDs_60);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_119;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_257557282"}, PtysSubGrp_NoPartySubIDs_119);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_119);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_119);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_120;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_790124128"}, PtysSubGrp_NoPartySubIDs_120);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_120);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_120);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_9;
      set_field(noRateSources_0_1_0, FIX::RateSource{1}, RateSource_NoRateSources_9);
      set_field(noRateSources_0_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_9);
      set_field(noRateSources_0_1_0, FIX::ReferencePage{"STRING_2052117351"}, RateSource_NoRateSources_9);
      all_values.push_back(RateSource_NoRateSources_9);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_3;
      FIX::MDSecSize MDSecSize_3;
      MDSecSize_3.setString("2329502");
set_field(noOfSecSizes_0_1_0, MDSecSize_3, SecSizesGrp_NoOfSecSizes_3);
      set_field(noOfSecSizes_0_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_3);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_3);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_13;
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_13);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveName{"STRING_SONIA"}, SpreadOrBenchmarkCurveData_13);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurvePoint{"STRING_362027112"}, SpreadOrBenchmarkCurveData_13);
    FIX::BenchmarkPrice BenchmarkPrice_13;
    BenchmarkPrice_13.setString("10233065");
set_field(noMDEntries_0_0, BenchmarkPrice_13, SpreadOrBenchmarkCurveData_13);
    set_field(noMDEntries_0_0, FIX::BenchmarkPriceType{429724911}, SpreadOrBenchmarkCurveData_13);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityID{"STRING_1261720025"}, SpreadOrBenchmarkCurveData_13);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1507503230"}, SpreadOrBenchmarkCurveData_13);
    FIX::Spread Spread_13;
    Spread_13.setString("16398354");
set_field(noMDEntries_0_0, Spread_13, SpreadOrBenchmarkCurveData_13);
    all_values.push_back(SpreadOrBenchmarkCurveData_13);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_8;
    FIX::Yield Yield_8;
    Yield_8.setString("70.880000");
set_field(noMDEntries_0_0, Yield_8, YieldData_8);
    set_field(noMDEntries_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_170013526"}, YieldData_8);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_1752748106"}, YieldData_8);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_8;
    YieldRedemptionPrice_8.setString("2367812");
set_field(noMDEntries_0_0, YieldRedemptionPrice_8, YieldData_8);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionPriceType{820793015}, YieldData_8);
    set_field(noMDEntries_0_0, FIX::YieldType{"STRING_INFLATION"}, YieldData_8);
    all_values.push_back(YieldData_8);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_1;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_1;
    set_field(noMDEntries_0_1, FIX::Currency{"USD"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::DealingCapacity{'P'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::DeskID{"STRING_643327242"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::EncodedText{"DATA_1344001058"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::EncodedTextLen{1180455389}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_l"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExpireDate{"LOCALMKTDATE_2134125186"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(5, 7, 52, 9, 8, 2010)}, MDFullGrp_NoMDEntries_1);
    FIX::FirstPx FirstPx_2;
    FirstPx_2.setString("1393078");
set_field(noMDEntries_0_1, FirstPx_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::HaltReasonInt{5}, MDFullGrp_NoMDEntries_1);
    FIX::HighPx HighPx_2;
    HighPx_2.setString("9608477");
set_field(noMDEntries_0_1, HighPx_2, MDFullGrp_NoMDEntries_1);
    FIX::LastPx LastPx_12;
    LastPx_12.setString("3705529");
set_field(noMDEntries_0_1, LastPx_12, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::LocationID{"STRING_428625701"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::LotType{'3'}, MDFullGrp_NoMDEntries_1);
    FIX::LowPx LowPx_2;
    LowPx_2.setString("8002778");
set_field(noMDEntries_0_1, LowPx_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryBuyer{"STRING_1690345726"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryDate{FIX::UTCDATEONLY(13, 11, 2013)}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_2;
    MDEntryForwardPoints_2.setString("20453777");
set_field(noMDEntries_0_1, MDEntryForwardPoints_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryID{"STRING_1163340443"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryOriginator{"STRING_187496830"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryPositionNo{1398440542}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntryPx MDEntryPx_2;
    MDEntryPx_2.setString("17451099");
set_field(noMDEntries_0_1, MDEntryPx_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntrySeller{"STRING_2034137950"}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntrySize MDEntrySize_4;
    MDEntrySize_4.setString("1738550");
set_field(noMDEntries_0_1, MDEntrySize_4, MDFullGrp_NoMDEntries_1);
    FIX::MDEntrySpotRate MDEntrySpotRate_2;
    MDEntrySpotRate_2.setString("2409535");
set_field(noMDEntries_0_1, MDEntrySpotRate_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryTime{FIX::UTCTIMEONLY(15, 36, 38)}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryType{'S'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDMkt{"EXCHANGE_2118366677"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDOriginType{1}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDPriceLevel{1027516582}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDQuoteType{4}, MDFullGrp_NoMDEntries_1);
    FIX::MinQty MinQty_4;
    MinQty_4.setString("15157791");
set_field(noMDEntries_0_1, MinQty_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::NumberOfOrders{514595034}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_3"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrdType{'F'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrderCapacity{'P'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrderID{"STRING_1442360081"}, MDFullGrp_NoMDEntries_1);
    FIX::PriceDelta PriceDelta_3;
    PriceDelta_3.setString("20110034");
set_field(noMDEntries_0_1, PriceDelta_3, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::PriceType{17}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_y"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::QuoteEntryID{"STRING_1553865562"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::RptSeq{508803796}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::Scope{"MULTIPLECHARVALUE_1"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SecondaryOrderID{"STRING_332941080"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SecurityTradingStatus{10}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SellerDays{285678135}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlCurrency{"EUR"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlDate{"LOCALMKTDATE_1684118677"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlType{"STRING_6"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::Text{"STRING_2097142391"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TickDirection{'3'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TimeInForce{'9'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradeCondition{"MULTIPLESTRINGVALUE_u"}, MDFullGrp_NoMDEntries_1);
    FIX::TradeVolume TradeVolume_2;
    TradeVolume_2.setString("10648004");
set_field(noMDEntries_0_1, TradeVolume_2, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradingSessionID{"STRING_6"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradingSessionSubID{"STRING_1"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TrdType{7}, MDFullGrp_NoMDEntries_1);
    all_values.push_back(MDFullGrp_NoMDEntries_1);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_61;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_270473210"}, Parties_NoPartyIDs_61);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_61);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{45}, Parties_NoPartyIDs_61);
      all_values.push_back(Parties_NoPartyIDs_61);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_121;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_85333101"}, PtysSubGrp_NoPartySubIDs_121);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_121);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_121);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_122;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1221146536"}, PtysSubGrp_NoPartySubIDs_122);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_122);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_122);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_10;
      set_field(noRateSources_1_1_0, FIX::RateSource{0}, RateSource_NoRateSources_10);
      set_field(noRateSources_1_1_0, FIX::RateSourceType{0}, RateSource_NoRateSources_10);
      set_field(noRateSources_1_1_0, FIX::ReferencePage{"STRING_1613982071"}, RateSource_NoRateSources_10);
      all_values.push_back(RateSource_NoRateSources_10);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_1.addGroup(noRateSources_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_11;
      set_field(noRateSources_1_1_1, FIX::RateSource{2}, RateSource_NoRateSources_11);
      set_field(noRateSources_1_1_1, FIX::RateSourceType{0}, RateSource_NoRateSources_11);
      set_field(noRateSources_1_1_1, FIX::ReferencePage{"STRING_2001766055"}, RateSource_NoRateSources_11);
      all_values.push_back(RateSource_NoRateSources_11);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_1.addGroup(noRateSources_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_12;
      set_field(noRateSources_1_1_2, FIX::RateSource{2}, RateSource_NoRateSources_12);
      set_field(noRateSources_1_1_2, FIX::RateSourceType{1}, RateSource_NoRateSources_12);
      set_field(noRateSources_1_1_2, FIX::ReferencePage{"STRING_139960542"}, RateSource_NoRateSources_12);
      all_values.push_back(RateSource_NoRateSources_12);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_1.addGroup(noRateSources_1_1_2);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_4;
      FIX::MDSecSize MDSecSize_4;
      MDSecSize_4.setString("11727216");
set_field(noOfSecSizes_1_1_0, MDSecSize_4, SecSizesGrp_NoOfSecSizes_4);
      set_field(noOfSecSizes_1_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_4);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_4);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_5;
      FIX::MDSecSize MDSecSize_5;
      MDSecSize_5.setString("12666950");
set_field(noOfSecSizes_1_1_1, MDSecSize_5, SecSizesGrp_NoOfSecSizes_5);
      set_field(noOfSecSizes_1_1_1, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_5);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_5);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_14;
    set_field(noMDEntries_0_1, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_14);
    set_field(noMDEntries_0_1, FIX::BenchmarkCurveName{"STRING_EONIA"}, SpreadOrBenchmarkCurveData_14);
    set_field(noMDEntries_0_1, FIX::BenchmarkCurvePoint{"STRING_451886025"}, SpreadOrBenchmarkCurveData_14);
    FIX::BenchmarkPrice BenchmarkPrice_14;
    BenchmarkPrice_14.setString("7028347");
set_field(noMDEntries_0_1, BenchmarkPrice_14, SpreadOrBenchmarkCurveData_14);
    set_field(noMDEntries_0_1, FIX::BenchmarkPriceType{405338161}, SpreadOrBenchmarkCurveData_14);
    set_field(noMDEntries_0_1, FIX::BenchmarkSecurityID{"STRING_1142591157"}, SpreadOrBenchmarkCurveData_14);
    set_field(noMDEntries_0_1, FIX::BenchmarkSecurityIDSource{"STRING_922479708"}, SpreadOrBenchmarkCurveData_14);
    FIX::Spread Spread_14;
    Spread_14.setString("6758113");
set_field(noMDEntries_0_1, Spread_14, SpreadOrBenchmarkCurveData_14);
    all_values.push_back(SpreadOrBenchmarkCurveData_14);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_9;
    FIX::Yield Yield_9;
    Yield_9.setString("92.230000");
set_field(noMDEntries_0_1, Yield_9, YieldData_9);
    set_field(noMDEntries_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_2074623920"}, YieldData_9);
    set_field(noMDEntries_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_314580125"}, YieldData_9);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_9;
    YieldRedemptionPrice_9.setString("7986623");
set_field(noMDEntries_0_1, YieldRedemptionPrice_9, YieldData_9);
    set_field(noMDEntries_0_1, FIX::YieldRedemptionPriceType{3607971}, YieldData_9);
    set_field(noMDEntries_0_1, FIX::YieldType{"STRING_COMPOUND"}, YieldData_9);
    all_values.push_back(YieldData_9);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_2;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_2;
    set_field(noMDEntries_0_2, FIX::Currency{"CAN"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::DealingCapacity{'A'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::DeskID{"STRING_937360341"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::EncodedText{"DATA_988934174"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::EncodedTextLen{963957672}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExecInst{"MULTIPLECHARVALUE_Z"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExpireDate{"LOCALMKTDATE_843216581"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExpireTime{FIX::UTCTIMESTAMP(4, 24, 40, 10, 1, 2013)}, MDFullGrp_NoMDEntries_2);
    FIX::FirstPx FirstPx_3;
    FirstPx_3.setString("12814217");
set_field(noMDEntries_0_2, FirstPx_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::HaltReasonInt{3}, MDFullGrp_NoMDEntries_2);
    FIX::HighPx HighPx_3;
    HighPx_3.setString("15340185");
set_field(noMDEntries_0_2, HighPx_3, MDFullGrp_NoMDEntries_2);
    FIX::LastPx LastPx_13;
    LastPx_13.setString("14366325");
set_field(noMDEntries_0_2, LastPx_13, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::LocationID{"STRING_498744324"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::LotType{'1'}, MDFullGrp_NoMDEntries_2);
    FIX::LowPx LowPx_3;
    LowPx_3.setString("18419707");
set_field(noMDEntries_0_2, LowPx_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryBuyer{"STRING_1641335481"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryDate{FIX::UTCDATEONLY(23, 1, 2001)}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_3;
    MDEntryForwardPoints_3.setString("6848785");
set_field(noMDEntries_0_2, MDEntryForwardPoints_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryID{"STRING_1005843381"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryOriginator{"STRING_942597664"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryPositionNo{73121566}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntryPx MDEntryPx_3;
    MDEntryPx_3.setString("12177979");
set_field(noMDEntries_0_2, MDEntryPx_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntrySeller{"STRING_317549767"}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntrySize MDEntrySize_5;
    MDEntrySize_5.setString("5460309");
set_field(noMDEntries_0_2, MDEntrySize_5, MDFullGrp_NoMDEntries_2);
    FIX::MDEntrySpotRate MDEntrySpotRate_3;
    MDEntrySpotRate_3.setString("76746");
set_field(noMDEntries_0_2, MDEntrySpotRate_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryTime{FIX::UTCTIMEONLY(16, 24, 55)}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryType{'F'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDMkt{"EXCHANGE_1165564324"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDOriginType{1}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDPriceLevel{963702647}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDQuoteType{1}, MDFullGrp_NoMDEntries_2);
    FIX::MinQty MinQty_5;
    MinQty_5.setString("16451666");
set_field(noMDEntries_0_2, MinQty_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::NumberOfOrders{2043648372}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_3"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrdType{'B'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrderCapacity{'P'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrderID{"STRING_1895176336"}, MDFullGrp_NoMDEntries_2);
    FIX::PriceDelta PriceDelta_4;
    PriceDelta_4.setString("432856");
set_field(noMDEntries_0_2, PriceDelta_4, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::PriceType{11}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_0"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::QuoteEntryID{"STRING_1684621151"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::RptSeq{383918799}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::Scope{"MULTIPLECHARVALUE_2"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SecondaryOrderID{"STRING_1891802208"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SecurityTradingStatus{19}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SellerDays{497356723}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlCurrency{"USD"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlDate{"LOCALMKTDATE_570478290"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlType{"STRING_5"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::Text{"STRING_435572275"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TickDirection{'2'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TimeInForce{'4'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradeCondition{"MULTIPLESTRINGVALUE_AE"}, MDFullGrp_NoMDEntries_2);
    FIX::TradeVolume TradeVolume_3;
    TradeVolume_3.setString("4790142");
set_field(noMDEntries_0_2, TradeVolume_3, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradingSessionID{"STRING_5"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradingSessionSubID{"STRING_4"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TrdType{37}, MDFullGrp_NoMDEntries_2);
    all_values.push_back(MDFullGrp_NoMDEntries_2);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_62;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_582183444"}, Parties_NoPartyIDs_62);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_62);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{21}, Parties_NoPartyIDs_62);
      all_values.push_back(Parties_NoPartyIDs_62);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_123;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_341849958"}, PtysSubGrp_NoPartySubIDs_123);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_123);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_123);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noMDEntries_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_13;
      set_field(noRateSources_2_1_0, FIX::RateSource{99}, RateSource_NoRateSources_13);
      set_field(noRateSources_2_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_13);
      set_field(noRateSources_2_1_0, FIX::ReferencePage{"STRING_1815177157"}, RateSource_NoRateSources_13);
      all_values.push_back(RateSource_NoRateSources_13);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_2.addGroup(noRateSources_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_14;
      set_field(noRateSources_2_1_1, FIX::RateSource{1}, RateSource_NoRateSources_14);
      set_field(noRateSources_2_1_1, FIX::RateSourceType{1}, RateSource_NoRateSources_14);
      set_field(noRateSources_2_1_1, FIX::ReferencePage{"STRING_1352314660"}, RateSource_NoRateSources_14);
      all_values.push_back(RateSource_NoRateSources_14);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_2.addGroup(noRateSources_2_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_6;
      FIX::MDSecSize MDSecSize_6;
      MDSecSize_6.setString("18109762");
set_field(noOfSecSizes_2_1_0, MDSecSize_6, SecSizesGrp_NoOfSecSizes_6);
      set_field(noOfSecSizes_2_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_6);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_6);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_7;
      FIX::MDSecSize MDSecSize_7;
      MDSecSize_7.setString("7034462");
set_field(noOfSecSizes_2_1_1, MDSecSize_7, SecSizesGrp_NoOfSecSizes_7);
      set_field(noOfSecSizes_2_1_1, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_7);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_7);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_2;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_8;
      FIX::MDSecSize MDSecSize_8;
      MDSecSize_8.setString("18467951");
set_field(noOfSecSizes_2_1_2, MDSecSize_8, SecSizesGrp_NoOfSecSizes_8);
      set_field(noOfSecSizes_2_1_2, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_8);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_8);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_15;
    set_field(noMDEntries_0_2, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_2, FIX::BenchmarkCurveName{"STRING_EONIA"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_2, FIX::BenchmarkCurvePoint{"STRING_1847836844"}, SpreadOrBenchmarkCurveData_15);
    FIX::BenchmarkPrice BenchmarkPrice_15;
    BenchmarkPrice_15.setString("14954223");
set_field(noMDEntries_0_2, BenchmarkPrice_15, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_2, FIX::BenchmarkPriceType{851613645}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_2, FIX::BenchmarkSecurityID{"STRING_179367415"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_2, FIX::BenchmarkSecurityIDSource{"STRING_1355334130"}, SpreadOrBenchmarkCurveData_15);
    FIX::Spread Spread_15;
    Spread_15.setString("4484030");
set_field(noMDEntries_0_2, Spread_15, SpreadOrBenchmarkCurveData_15);
    all_values.push_back(SpreadOrBenchmarkCurveData_15);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_10;
    FIX::Yield Yield_10;
    Yield_10.setString("36.490000");
set_field(noMDEntries_0_2, Yield_10, YieldData_10);
    set_field(noMDEntries_0_2, FIX::YieldCalcDate{"LOCALMKTDATE_233326616"}, YieldData_10);
    set_field(noMDEntries_0_2, FIX::YieldRedemptionDate{"LOCALMKTDATE_1030586535"}, YieldData_10);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
    YieldRedemptionPrice_10.setString("1070352");
set_field(noMDEntries_0_2, YieldRedemptionPrice_10, YieldData_10);
    set_field(noMDEntries_0_2, FIX::YieldRedemptionPriceType{435924808}, YieldData_10);
    set_field(noMDEntries_0_2, FIX::YieldType{"STRING_CALL"}, YieldData_10);
    all_values.push_back(YieldData_10);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_3;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_1097066793"}, RoutingGrp_NoRoutingIDs_3);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{2}, RoutingGrp_NoRoutingIDs_3);
    all_values.push_back(RoutingGrp_NoRoutingIDs_3);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_4;
    set_field(noRoutingIDs_0_1, FIX::RoutingID{"STRING_73434816"}, RoutingGrp_NoRoutingIDs_4);
    set_field(noRoutingIDs_0_1, FIX::RoutingType{3}, RoutingGrp_NoRoutingIDs_4);
    all_values.push_back(RoutingGrp_NoRoutingIDs_4);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_57;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1217537465"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1356915883}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1754869035"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{598075266}, UnderlyingInstrument_57);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("10204084");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_57, UnderlyingInstrument_57);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("86.070000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_57, UnderlyingInstrument_57);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("15.580000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1181257783"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_403330121"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2122990359"}, UnderlyingInstrument_57);
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("19125853");
set_field(noUnderlyings_0_0, UnderlyingCapValue_57, UnderlyingInstrument_57);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("20706015");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_57);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("16129385");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1418540208}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2084161432"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1792305995"}, UnderlyingInstrument_57);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("6.900000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_385080875"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_57);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("14156674");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_57, UnderlyingInstrument_57);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("12.310000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_57, UnderlyingInstrument_57);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("12956421");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_57, UnderlyingInstrument_57);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("3786367");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_57, UnderlyingInstrument_57);
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("20095764");
set_field(noUnderlyings_0_0, UnderlyingEndValue_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{245225261}, UnderlyingInstrument_57);
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("11134976");
set_field(noUnderlyings_0_0, UnderlyingFXRate_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_57);
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("17511267");
set_field(noUnderlyings_0_0, UnderlyingFactor_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1516052029}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1153065057"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_960558963"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1123437416"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1751140323"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1980967434"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1827456023"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_905178233"}, UnderlyingInstrument_57);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("15.690000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_57);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("49.440000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_779843306"}, UnderlyingInstrument_57);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("64203");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{2113232731}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{245298238}, UnderlyingInstrument_57);
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("14249605");
set_field(noUnderlyings_0_0, UnderlyingPx_57, UnderlyingInstrument_57);
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("20499105");
set_field(noUnderlyings_0_0, UnderlyingQty_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2037604234"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2051351282"}, UnderlyingInstrument_57);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("77.430000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1343776582}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_763584941"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1703175153"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_756984165"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2059227057"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2081811942"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_619076941"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_156968670"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1047825948"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_554604532"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_57);
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("4163943");
set_field(noUnderlyings_0_0, UnderlyingStartValue_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1707669589"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_57);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("13113262");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_57, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_554654499"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1219804121"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_69020850"}, UnderlyingInstrument_57);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1569396068"}, UnderlyingInstrument_57);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("13031066");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_57, UnderlyingInstrument_57);
    all_values.push_back(UnderlyingInstrument_57);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_201755726"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1309527001"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_447053965"}, UnderlyingStipulations_NoUnderlyingStips_111);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_587003945"}, UnderlyingStipulations_NoUnderlyingStips_111);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_337174551"}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1105389489}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1254456521"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{661080994}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_290451651"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1166199930}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_595409288"}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1323168600}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1464133124"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1083780350}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2059629566"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1024319066}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1804951062"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1451977663}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_188161682"}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{524298136}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1781517982"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1827404754}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1206888327"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1983273708}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_989448107"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{2122343205}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_282844025"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1576452053}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_792741303"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{620018576}, UnderlyingInstrument_58);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("20673236");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_58, UnderlyingInstrument_58);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("7.920000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_58, UnderlyingInstrument_58);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("60.620000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1174296506"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_411728138"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_443937713"}, UnderlyingInstrument_58);
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("1930127");
set_field(noUnderlyings_0_1, UnderlyingCapValue_58, UnderlyingInstrument_58);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("10071374");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_58);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("15161813");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{502889014}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_670115781"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_452478091"}, UnderlyingInstrument_58);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("49.320000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1694434847"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_58);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("18825965");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_58, UnderlyingInstrument_58);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("74.190000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_58, UnderlyingInstrument_58);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("2438270");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_58, UnderlyingInstrument_58);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("21397790");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_58, UnderlyingInstrument_58);
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("21035854");
set_field(noUnderlyings_0_1, UnderlyingEndValue_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{2071231838}, UnderlyingInstrument_58);
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("11991837");
set_field(noUnderlyings_0_1, UnderlyingFXRate_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_58);
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("9131962");
set_field(noUnderlyings_0_1, UnderlyingFactor_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1174043298}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_74735839"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_342164703"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1966784601"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_694754416"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_262004688"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1717431745"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_848240478"}, UnderlyingInstrument_58);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("11.940000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_58);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("81.910000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1629313983"}, UnderlyingInstrument_58);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("9888136");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{498160848}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{998011725}, UnderlyingInstrument_58);
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("14917026");
set_field(noUnderlyings_0_1, UnderlyingPx_58, UnderlyingInstrument_58);
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("11682766");
set_field(noUnderlyings_0_1, UnderlyingQty_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1450489816"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1906737608"}, UnderlyingInstrument_58);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("78.290000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1560435322}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1626266556"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_450340711"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1882502742"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1870093641"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_442636125"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1838604495"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1793841831"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1641819867"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1630496309"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_58);
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("6683795");
set_field(noUnderlyings_0_1, UnderlyingStartValue_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1705232149"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_58);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("2525029");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_58, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1163723872"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_57628568"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1100743395"}, UnderlyingInstrument_58);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_452541419"}, UnderlyingInstrument_58);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("393048");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_58, UnderlyingInstrument_58);
    all_values.push_back(UnderlyingInstrument_58);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_2081855402"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1028118465"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_932383479"}, UnderlyingStipulations_NoUnderlyingStips_112);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_372337493"}, UnderlyingStipulations_NoUnderlyingStips_112);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_235389648"}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{479619596}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1757858010"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{929960307}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1530844064"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1480468003}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
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
