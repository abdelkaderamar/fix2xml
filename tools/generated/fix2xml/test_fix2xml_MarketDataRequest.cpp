#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDataRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_0;
  set_field(msg, FIX::AggregatedBook{false}, MarketDataRequest_0);
  set_field(msg, FIX::ApplQueueAction{2}, MarketDataRequest_0);
  set_field(msg, FIX::ApplQueueMax{316518020}, MarketDataRequest_0);
  set_field(msg, FIX::MDImplicitDelete{false}, MarketDataRequest_0);
  set_field(msg, FIX::MDQuoteType{1}, MarketDataRequest_0);
  set_field(msg, FIX::MDReqID{"STRING_697295854"}, MarketDataRequest_0);
  set_field(msg, FIX::MDUpdateType{0}, MarketDataRequest_0);
  set_field(msg, FIX::MarketDepth{141610159}, MarketDataRequest_0);
  set_field(msg, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_5"}, MarketDataRequest_0);
  set_field(msg, FIX::Scope{"MULTIPLECHARVALUE_1"}, MarketDataRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, MarketDataRequest_0);
  all_values.push_back(MarketDataRequest_0);

  all_compo_names.insert("MarketDataRequest");

  // InstrmtMDReqGrp
  // Group InstrmtMDReqGrp.NoRelatedSym
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_0;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"USD"}, InstrmtMDReqGrp_NoRelatedSym_0);
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("8612980");
set_field(noRelatedSym_0_0, MDEntrySize_3, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::MDStreamID{"STRING_1690902004"}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{0}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_991292368"}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_5"}, InstrmtMDReqGrp_NoRelatedSym_0);
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_51;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_481768931"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{687988462}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1491651351"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1021067621}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1938105946"}, InstrumentLeg_51);
      FIX::LegContractMultiplier LegContractMultiplier_51;
      LegContractMultiplier_51.setString("8646134");
set_field(noLegs_0_1_0, LegContractMultiplier_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1850535866}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1803918948"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_81376861"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1085723203"}, InstrumentLeg_51);
      FIX::LegCouponRate LegCouponRate_51;
      LegCouponRate_51.setString("20.910000");
set_field(noLegs_0_1_0, LegCouponRate_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_2051645852"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_105957716"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{413753970}, InstrumentLeg_51);
      FIX::LegFactor LegFactor_51;
      LegFactor_51.setString("6259023");
set_field(noLegs_0_1_0, LegFactor_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{941537186}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_555364129"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1381011575"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_76275136"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1343055686"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_625626403"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_463994494"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_155561953"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1486924468"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'7'}, InstrumentLeg_51);
      FIX::LegOptionRatio LegOptionRatio_51;
      LegOptionRatio_51.setString("10890517");
set_field(noLegs_0_1_0, LegOptionRatio_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_330733188"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_441468059"}, InstrumentLeg_51);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_51;
      LegPriceUnitOfMeasureQty_51.setString("9903468");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegProduct{812502119}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1129456521}, InstrumentLeg_51);
      FIX::LegRatioQty LegRatioQty_51;
      LegRatioQty_51.setString("3345145");
set_field(noLegs_0_1_0, LegRatioQty_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1833569740"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_920078819"}, InstrumentLeg_51);
      FIX::LegRepurchaseRate LegRepurchaseRate_51;
      LegRepurchaseRate_51.setString("80.320000");
set_field(noLegs_0_1_0, LegRepurchaseRate_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1536621959}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_576514120"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1280504893"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_474861514"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_188602563"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1184667098"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_961458176"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1290624814"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_51);
      FIX::LegStrikePrice LegStrikePrice_51;
      LegStrikePrice_51.setString("846783");
set_field(noLegs_0_1_0, LegStrikePrice_51, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_1930576275"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_2124122918"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_160953488"}, InstrumentLeg_51);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1126148314"}, InstrumentLeg_51);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_51;
      LegUnitOfMeasureQty_51.setString("6022656");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_51, InstrumentLeg_51);
      all_values.push_back(InstrumentLeg_51);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1281710267"}, LegSecAltIDGrp_NoLegSecurityAltID_102);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_2089190141"}, LegSecAltIDGrp_NoLegSecurityAltID_102);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_32;
    FIX::AttachmentPoint AttachmentPoint_32;
    AttachmentPoint_32.setString("8.320000");
set_field(noRelatedSym_0_0, AttachmentPoint_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_223278360"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1073828891"}, Instrument_32);
    FIX::CapPrice CapPrice_32;
    CapPrice_32.setString("12136251");
set_field(noRelatedSym_0_0, CapPrice_32, Instrument_32);
    FIX::ContractMultiplier ContractMultiplier_32;
    ContractMultiplier_32.setString("10849418");
set_field(noRelatedSym_0_0, ContractMultiplier_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1548139725"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_771027893"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_975880584"}, Instrument_32);
    FIX::CouponRate CouponRate_32;
    CouponRate_32.setString("41.090000");
set_field(noRelatedSym_0_0, CouponRate_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_160166204"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1552394704"}, Instrument_32);
    FIX::DetachmentPoint DetachmentPoint_32;
    DetachmentPoint_32.setString("90.030000");
set_field(noRelatedSym_0_0, DetachmentPoint_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_635027719"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1740997267}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_917472453"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1596485895}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_32);
    FIX::Factor Factor_32;
    Factor_32.setString("606136");
set_field(noRelatedSym_0_0, Factor_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_32);
    FIX::FloorPrice FloorPrice_32;
    FloorPrice_32.setString("1452919");
set_field(noRelatedSym_0_0, FloorPrice_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{1}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_430473259"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'3'}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1733455335"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1032738933"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_931193442"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_974445426"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1563554275"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1090960314"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1246885108"}, Instrument_32);
    FIX::MinPriceIncrement MinPriceIncrement_32;
    MinPriceIncrement_32.setString("4898995");
set_field(noRelatedSym_0_0, MinPriceIncrement_32, Instrument_32);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_32;
    MinPriceIncrementAmount_32.setString("1571018");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{184343261}, Instrument_32);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_32;
    NotionalPercentageOutstanding_32.setString("12.830000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_32);
    FIX::OptPayoutAmount OptPayoutAmount_32;
    OptPayoutAmount_32.setString("9553711");
set_field(noRelatedSym_0_0, OptPayoutAmount_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_32);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_32;
    OriginalNotionalPercentageOutstanding_32.setString("20.440000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1115537359"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{926492924}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1750565078"}, Instrument_32);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_32;
    PriceUnitOfMeasureQty_32.setString("5200065");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::Product{9}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1199567325"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_868433471"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_2023781719"}, Instrument_32);
    FIX::RepurchaseRate RepurchaseRate_32;
    RepurchaseRate_32.setString("31.780000");
set_field(noRelatedSym_0_0, RepurchaseRate_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1013725443}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1115036438"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1319970903"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_69576780"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_291723"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_M"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_974737149"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_MLEG"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_9650843"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_37837259"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_32);
    FIX::StrikeMultiplier StrikeMultiplier_32;
    StrikeMultiplier_32.setString("17430788");
set_field(noRelatedSym_0_0, StrikeMultiplier_32, Instrument_32);
    FIX::StrikePrice StrikePrice_32;
    StrikePrice_32.setString("12138530");
set_field(noRelatedSym_0_0, StrikePrice_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_32);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_32;
    StrikePriceBoundaryPrecision_32.setString("8.860000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_32);
    FIX::StrikeValue StrikeValue_32;
    StrikeValue_32.setString("8559432");
set_field(noRelatedSym_0_0, StrikeValue_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1790968286"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_S"}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_32);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_32;
    UnitOfMeasureQty_32.setString("16066790");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_32, Instrument_32);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_32);
    all_values.push_back(Instrument_32);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_61;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexEventPrice ComplexEventPrice_61;
      ComplexEventPrice_61.setString("1859797");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_61, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
      ComplexEventPriceBoundaryPrecision_61.setString("49.730000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_61, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
      ComplexOptPayoutAmount_61.setString("12590866");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_61, ComplexEvents_NoComplexEvents_61);
      all_values.push_back(ComplexEvents_NoComplexEvents_61);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_123;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 42, 45, 27, 6, 2014)}, ComplexEventDates_NoComplexEventDates_123);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 46, 42, 22, 1, 2002)}, ComplexEventDates_NoComplexEventDates_123);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_123);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 16, 13)}, ComplexEventTimes_NoComplexEventTimes_253);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 47, 31)}, ComplexEventTimes_NoComplexEventTimes_253);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_124;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 39, 12, 12, 8, 2016)}, ComplexEventDates_NoComplexEventDates_124);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 46, 47, 12, 10, 2008)}, ComplexEventDates_NoComplexEventDates_124);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_124);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 6, 5)}, ComplexEventTimes_NoComplexEventTimes_254);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 35, 7)}, ComplexEventTimes_NoComplexEventTimes_254);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 15, 2)}, ComplexEventTimes_NoComplexEventTimes_255);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 49, 3)}, ComplexEventTimes_NoComplexEventTimes_255);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 42, 59)}, ComplexEventTimes_NoComplexEventTimes_256);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 20, 6)}, ComplexEventTimes_NoComplexEventTimes_256);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_125;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 54, 56, 27, 3, 2016)}, ComplexEventDates_NoComplexEventDates_125);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 14, 42, 8, 6, 2010)}, ComplexEventDates_NoComplexEventDates_125);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_125);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 58, 28)}, ComplexEventTimes_NoComplexEventTimes_257);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 17, 17)}, ComplexEventTimes_NoComplexEventTimes_257);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_62;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexEventPrice ComplexEventPrice_62;
      ComplexEventPrice_62.setString("21175835");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_62, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
      ComplexEventPriceBoundaryPrecision_62.setString("41.560000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_62, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
      ComplexOptPayoutAmount_62.setString("8035164");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_62, ComplexEvents_NoComplexEvents_62);
      all_values.push_back(ComplexEvents_NoComplexEvents_62);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_126;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 15, 37, 21, 11, 2016)}, ComplexEventDates_NoComplexEventDates_126);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 0, 9, 9, 6, 2013)}, ComplexEventDates_NoComplexEventDates_126);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_126);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 19, 15)}, ComplexEventTimes_NoComplexEventTimes_258);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 24, 24)}, ComplexEventTimes_NoComplexEventTimes_258);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 15, 22)}, ComplexEventTimes_NoComplexEventTimes_259);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 43, 7)}, ComplexEventTimes_NoComplexEventTimes_259);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 14, 38)}, ComplexEventTimes_NoComplexEventTimes_260);
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 24, 10)}, ComplexEventTimes_NoComplexEventTimes_260);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_63;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_63);
      FIX::ComplexEventPrice ComplexEventPrice_63;
      ComplexEventPrice_63.setString("10445662");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_63, ComplexEvents_NoComplexEvents_63);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_63);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_63;
      ComplexEventPriceBoundaryPrecision_63.setString("97.340000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_63, ComplexEvents_NoComplexEvents_63);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_63);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_63);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_63;
      ComplexOptPayoutAmount_63.setString("11197955");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_63, ComplexEvents_NoComplexEvents_63);
      all_values.push_back(ComplexEvents_NoComplexEvents_63);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_127;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 33, 16, 18, 3, 2014)}, ComplexEventDates_NoComplexEventDates_127);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 48, 47, 10, 5, 2000)}, ComplexEventDates_NoComplexEventDates_127);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_127);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 27, 55)}, ComplexEventTimes_NoComplexEventTimes_261);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 12, 16)}, ComplexEventTimes_NoComplexEventTimes_261);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 28, 11)}, ComplexEventTimes_NoComplexEventTimes_262);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 29, 25)}, ComplexEventTimes_NoComplexEventTimes_262);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_128;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 51, 7, 13, 6, 2002)}, ComplexEventDates_NoComplexEventDates_128);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 12, 45, 7, 9, 2013)}, ComplexEventDates_NoComplexEventDates_128);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_128);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 48, 32)}, ComplexEventTimes_NoComplexEventTimes_263);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 36, 9)}, ComplexEventTimes_NoComplexEventTimes_263);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 29, 0)}, ComplexEventTimes_NoComplexEventTimes_264);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 29, 22)}, ComplexEventTimes_NoComplexEventTimes_264);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
          set_field(noComplexEventTimes_0_2_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 13, 55)}, ComplexEventTimes_NoComplexEventTimes_265);
          set_field(noComplexEventTimes_0_2_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 27, 44)}, ComplexEventTimes_NoComplexEventTimes_265);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_129;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 21, 47, 11, 5, 2002)}, ComplexEventDates_NoComplexEventDates_129);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 48, 53, 19, 1, 2017)}, ComplexEventDates_NoComplexEventDates_129);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_129);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 14, 37)}, ComplexEventTimes_NoComplexEventTimes_266);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 58, 38)}, ComplexEventTimes_NoComplexEventTimes_266);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_68;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1793673027"}, EvntGrp_NoEvents_68);
      FIX::EventPx EventPx_68;
      EventPx_68.setString("6511071");
set_field(noEvents_0_1_0, EventPx_68, EvntGrp_NoEvents_68);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1949576222"}, EvntGrp_NoEvents_68);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 22, 49, 10, 6, 2008)}, EvntGrp_NoEvents_68);
      set_field(noEvents_0_1_0, FIX::EventType{19}, EvntGrp_NoEvents_68);
      all_values.push_back(EvntGrp_NoEvents_68);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_69;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_458463997"}, EvntGrp_NoEvents_69);
      FIX::EventPx EventPx_69;
      EventPx_69.setString("21050321");
set_field(noEvents_0_1_1, EventPx_69, EvntGrp_NoEvents_69);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1575638158"}, EvntGrp_NoEvents_69);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(20, 38, 50, 20, 7, 2012)}, EvntGrp_NoEvents_69);
      set_field(noEvents_0_1_1, FIX::EventType{10}, EvntGrp_NoEvents_69);
      all_values.push_back(EvntGrp_NoEvents_69);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_59;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1530159279"}, InstrumentParties_NoInstrumentParties_59);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_59);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{818769264}, InstrumentParties_NoInstrumentParties_59);
      all_values.push_back(InstrumentParties_NoInstrumentParties_59);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_366415746"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1414853782}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1209391113"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{1172554573}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_60;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1061043161"}, InstrumentParties_NoInstrumentParties_60);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_60);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{974647148}, InstrumentParties_NoInstrumentParties_60);
      all_values.push_back(InstrumentParties_NoInstrumentParties_60);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1357828060"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{456115042}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1324033895"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{647612982}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_67;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1453693537"}, SecAltIDGrp_NoSecurityAltID_67);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_494484032"}, SecAltIDGrp_NoSecurityAltID_67);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_67);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_68;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_735024944"}, SecAltIDGrp_NoSecurityAltID_68);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1411242059"}, SecAltIDGrp_NoSecurityAltID_68);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_68);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_64;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_2070122190"}, SecurityXML_64);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{463136142}, SecurityXML_64);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_57485472"}, SecurityXML_64);
    all_values.push_back(SecurityXML_64);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_49;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1399968692"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1249569196}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2097019458"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1702507844}, UnderlyingInstrument_49);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
      UnderlyingAdjustedQuantity_49.setString("4346319");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_49, UnderlyingInstrument_49);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
      UnderlyingAllocationPercent_49.setString("31.850000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_49, UnderlyingInstrument_49);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
      UnderlyingAttachmentPoint_49.setString("34.750000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1185387772"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_372828801"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1640733670"}, UnderlyingInstrument_49);
      FIX::UnderlyingCapValue UnderlyingCapValue_49;
      UnderlyingCapValue_49.setString("15518035");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_49, UnderlyingInstrument_49);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
      UnderlyingCashAmount_49.setString("17876825");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_49);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
      UnderlyingContractMultiplier_49.setString("5768744");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{701242097}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_415655745"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1551521592"}, UnderlyingInstrument_49);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
      UnderlyingCouponRate_49.setString("95.240000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1773483805"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_49);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
      UnderlyingCurrentValue_49.setString("2736131");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_49, UnderlyingInstrument_49);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
      UnderlyingDetachmentPoint_49.setString("39.340000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_49, UnderlyingInstrument_49);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
      UnderlyingDirtyPrice_49.setString("17941833");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_49, UnderlyingInstrument_49);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
      UnderlyingEndPrice_49.setString("7680971");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_49, UnderlyingInstrument_49);
      FIX::UnderlyingEndValue UnderlyingEndValue_49;
      UnderlyingEndValue_49.setString("8717388");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1057941720}, UnderlyingInstrument_49);
      FIX::UnderlyingFXRate UnderlyingFXRate_49;
      UnderlyingFXRate_49.setString("6907357");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_49);
      FIX::UnderlyingFactor UnderlyingFactor_49;
      UnderlyingFactor_49.setString("11154271");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1705467355}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_587360065"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_217512740"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1655003166"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_142384261"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_652144697"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1209062703"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1227567737"}, UnderlyingInstrument_49);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
      UnderlyingNotionalPercentageOutstanding_49.setString("24.700000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_49);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
      UnderlyingOriginalNotionalPercentageOutstanding_49.setString("77.590000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1241852341"}, UnderlyingInstrument_49);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
      UnderlyingPriceUnitOfMeasureQty_49.setString("12220904");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1423458895}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1818726785}, UnderlyingInstrument_49);
      FIX::UnderlyingPx UnderlyingPx_49;
      UnderlyingPx_49.setString("19233325");
set_field(noUnderlyings_0_1_0, UnderlyingPx_49, UnderlyingInstrument_49);
      FIX::UnderlyingQty UnderlyingQty_49;
      UnderlyingQty_49.setString("18391146");
set_field(noUnderlyings_0_1_0, UnderlyingQty_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1222764730"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_939788414"}, UnderlyingInstrument_49);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
      UnderlyingRepurchaseRate_49.setString("47.980000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1082917716}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1280278186"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1738727938"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1219631650"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_926977847"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_359341463"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_2091370529"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1984919567"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1050077178"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1278761901"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_49);
      FIX::UnderlyingStartValue UnderlyingStartValue_49;
      UnderlyingStartValue_49.setString("6080608");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1866121966"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_49);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
      UnderlyingStrikePrice_49.setString("20085062");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_49, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1822520550"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1324643107"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1088590317"}, UnderlyingInstrument_49);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1512569372"}, UnderlyingInstrument_49);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
      UnderlyingUnitOfMeasureQty_49.setString("7590509");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_49, UnderlyingInstrument_49);
      all_values.push_back(UnderlyingInstrument_49);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_606938065"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1981141405"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1085383324"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_278181202"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_777014317"}, UnderlyingStipulations_NoUnderlyingStips_95);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1500945932"}, UnderlyingStipulations_NoUnderlyingStips_95);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_549295062"}, UnderlyingStipulations_NoUnderlyingStips_96);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_94645467"}, UnderlyingStipulations_NoUnderlyingStips_96);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipType{"STRING_436380001"}, UnderlyingStipulations_NoUnderlyingStips_97);
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipValue{"STRING_1829573248"}, UnderlyingStipulations_NoUnderlyingStips_97);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1656011651"}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{45231221}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_446503366"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1095308399}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_731176786"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1399366478}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1703369284"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{449815104}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_422258683"}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{310837684}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_996109147"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1399428001}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1609864957"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1755160111}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1061352430"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{69319374}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1588817868"}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{347500576}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_776266423"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1848446509}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_1;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Currency{"JPY"}, InstrmtMDReqGrp_NoRelatedSym_1);
    FIX::MDEntrySize MDEntrySize_4;
    MDEntrySize_4.setString("1373428");
set_field(noRelatedSym_0_1, MDEntrySize_4, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::MDStreamID{"STRING_1429709177"}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{0}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate{"LOCALMKTDATE_1793354513"}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlType{"STRING_0"}, InstrmtMDReqGrp_NoRelatedSym_1);
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_52;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1245769398"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{337796343}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_1697341268"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1976946184}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_1737162821"}, InstrumentLeg_52);
      FIX::LegContractMultiplier LegContractMultiplier_52;
      LegContractMultiplier_52.setString("12532269");
set_field(noLegs_1_1_0, LegContractMultiplier_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{279277640}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_11937856"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_924692945"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_590115325"}, InstrumentLeg_52);
      FIX::LegCouponRate LegCouponRate_52;
      LegCouponRate_52.setString("34.410000");
set_field(noLegs_1_1_0, LegCouponRate_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_1920802092"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1528478555"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{903412108}, InstrumentLeg_52);
      FIX::LegFactor LegFactor_52;
      LegFactor_52.setString("17884177");
set_field(noLegs_1_1_0, LegFactor_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{969812775}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_902664214"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2135918349"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_20653642"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_1678930637"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1836881210"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1768273220"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_402358880"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1974224072"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_52);
      FIX::LegOptionRatio LegOptionRatio_52;
      LegOptionRatio_52.setString("9591605");
set_field(noLegs_1_1_0, LegOptionRatio_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_1620094937"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_941791726"}, InstrumentLeg_52);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_52;
      LegPriceUnitOfMeasureQty_52.setString("15611933");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegProduct{718380687}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{1279588069}, InstrumentLeg_52);
      FIX::LegRatioQty LegRatioQty_52;
      LegRatioQty_52.setString("11110510");
set_field(noLegs_1_1_0, LegRatioQty_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_547843223"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_869267242"}, InstrumentLeg_52);
      FIX::LegRepurchaseRate LegRepurchaseRate_52;
      LegRepurchaseRate_52.setString("42.750000");
set_field(noLegs_1_1_0, LegRepurchaseRate_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{827120864}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_881205099"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_1141487220"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_1417236189"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_990438540"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_914805664"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1259295867"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSide{'5'}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_295800571"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_52);
      FIX::LegStrikePrice LegStrikePrice_52;
      LegStrikePrice_52.setString("12656133");
set_field(noLegs_1_1_0, LegStrikePrice_52, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_917888542"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_191422116"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_1286266989"}, InstrumentLeg_52);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_449335532"}, InstrumentLeg_52);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_52;
      LegUnitOfMeasureQty_52.setString("20283033");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_52, InstrumentLeg_52);
      all_values.push_back(InstrumentLeg_52);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_851694412"}, LegSecAltIDGrp_NoLegSecurityAltID_103);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1855043750"}, LegSecAltIDGrp_NoLegSecurityAltID_103);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_33;
    FIX::AttachmentPoint AttachmentPoint_33;
    AttachmentPoint_33.setString("53.100000");
set_field(noRelatedSym_0_1, AttachmentPoint_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1810854940"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CPProgram{1}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_751863388"}, Instrument_33);
    FIX::CapPrice CapPrice_33;
    CapPrice_33.setString("12245646");
set_field(noRelatedSym_0_1, CapPrice_33, Instrument_33);
    FIX::ContractMultiplier ContractMultiplier_33;
    ContractMultiplier_33.setString("20460357");
set_field(noRelatedSym_0_1, ContractMultiplier_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{2}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_188132061"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_446395303"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_753235052"}, Instrument_33);
    FIX::CouponRate CouponRate_33;
    CouponRate_33.setString("63.360000");
set_field(noRelatedSym_0_1, CouponRate_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1273516167"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1634440151"}, Instrument_33);
    FIX::DetachmentPoint DetachmentPoint_33;
    DetachmentPoint_33.setString("35.570000");
set_field(noRelatedSym_0_1, DetachmentPoint_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_543268708"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{477395043}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_313735573"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1802564575}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{0}, Instrument_33);
    FIX::Factor Factor_33;
    Factor_33.setString("6095361");
set_field(noRelatedSym_0_1, Factor_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_33);
    FIX::FloorPrice FloorPrice_33;
    FloorPrice_33.setString("18751494");
set_field(noRelatedSym_0_1, FloorPrice_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{3}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1433857866"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1037529330"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1314677545"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1920989393"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1022237647"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1731061056"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1552595034"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_202409039"}, Instrument_33);
    FIX::MinPriceIncrement MinPriceIncrement_33;
    MinPriceIncrement_33.setString("3354407");
set_field(noRelatedSym_0_1, MinPriceIncrement_33, Instrument_33);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
    MinPriceIncrementAmount_33.setString("6296760");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{100961119}, Instrument_33);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
    NotionalPercentageOutstanding_33.setString("86.060000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'8'}, Instrument_33);
    FIX::OptPayoutAmount OptPayoutAmount_33;
    OptPayoutAmount_33.setString("5473564");
set_field(noRelatedSym_0_1, OptPayoutAmount_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_33);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
    OriginalNotionalPercentageOutstanding_33.setString("44.740000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_1820872589"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{459600161}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_216657649"}, Instrument_33);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
    PriceUnitOfMeasureQty_33.setString("9369952");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::Product{12}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_2019222224"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1544936102"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1689527480"}, Instrument_33);
    FIX::RepurchaseRate RepurchaseRate_33;
    RepurchaseRate_33.setString("56.410000");
set_field(noRelatedSym_0_1, RepurchaseRate_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{1272601945}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_357769859"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_139051130"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1167766960"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1672447404"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_E"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_547201404"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_BOX"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1979058728"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_944294517"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"USD"}, Instrument_33);
    FIX::StrikeMultiplier StrikeMultiplier_33;
    StrikeMultiplier_33.setString("17621026");
set_field(noRelatedSym_0_1, StrikeMultiplier_33, Instrument_33);
    FIX::StrikePrice StrikePrice_33;
    StrikePrice_33.setString("13979279");
set_field(noRelatedSym_0_1, StrikePrice_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{5}, Instrument_33);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
    StrikePriceBoundaryPrecision_33.setString("34.820000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_33);
    FIX::StrikeValue StrikeValue_33;
    StrikeValue_33.setString("14832275");
set_field(noRelatedSym_0_1, StrikeValue_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1459017865"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_H"}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_33);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
    UnitOfMeasureQty_33.setString("1016989");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_33, Instrument_33);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_33);
    all_values.push_back(Instrument_33);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_64;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_64);
      FIX::ComplexEventPrice ComplexEventPrice_64;
      ComplexEventPrice_64.setString("9169885");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_64, ComplexEvents_NoComplexEvents_64);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_64);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_64;
      ComplexEventPriceBoundaryPrecision_64.setString("44.530000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_64, ComplexEvents_NoComplexEvents_64);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_64);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_64);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_64;
      ComplexOptPayoutAmount_64.setString("10558282");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_64, ComplexEvents_NoComplexEvents_64);
      all_values.push_back(ComplexEvents_NoComplexEvents_64);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_130;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 23, 59, 17, 12, 2009)}, ComplexEventDates_NoComplexEventDates_130);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 24, 48, 13, 3, 2011)}, ComplexEventDates_NoComplexEventDates_130);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_130);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 31, 38)}, ComplexEventTimes_NoComplexEventTimes_267);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 7, 46)}, ComplexEventTimes_NoComplexEventTimes_267);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_131;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 39, 2, 17, 5, 2008)}, ComplexEventDates_NoComplexEventDates_131);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 49, 11, 2, 7, 2010)}, ComplexEventDates_NoComplexEventDates_131);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_131);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 28, 18)}, ComplexEventTimes_NoComplexEventTimes_268);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 3, 38)}, ComplexEventTimes_NoComplexEventTimes_268);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_65;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_65);
      FIX::ComplexEventPrice ComplexEventPrice_65;
      ComplexEventPrice_65.setString("13165072");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_65, ComplexEvents_NoComplexEvents_65);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_65);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_65;
      ComplexEventPriceBoundaryPrecision_65.setString("81.130000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_65, ComplexEvents_NoComplexEvents_65);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_65);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_65);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_65;
      ComplexOptPayoutAmount_65.setString("14890799");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_65, ComplexEvents_NoComplexEvents_65);
      all_values.push_back(ComplexEvents_NoComplexEvents_65);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_132;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 11, 30, 10, 8, 2008)}, ComplexEventDates_NoComplexEventDates_132);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 3, 46, 25, 11, 2002)}, ComplexEventDates_NoComplexEventDates_132);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_132);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 0, 54)}, ComplexEventTimes_NoComplexEventTimes_269);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 57, 55)}, ComplexEventTimes_NoComplexEventTimes_269);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 57, 18)}, ComplexEventTimes_NoComplexEventTimes_270);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 42, 52)}, ComplexEventTimes_NoComplexEventTimes_270);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_133;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 55, 0, 17, 8, 2006)}, ComplexEventDates_NoComplexEventDates_133);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 2, 14, 18, 5, 2014)}, ComplexEventDates_NoComplexEventDates_133);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_133);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 19, 54)}, ComplexEventTimes_NoComplexEventTimes_271);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 51, 54)}, ComplexEventTimes_NoComplexEventTimes_271);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_134;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 51, 14, 4, 11, 2001)}, ComplexEventDates_NoComplexEventDates_134);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 48, 7, 9, 11, 2014)}, ComplexEventDates_NoComplexEventDates_134);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_134);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_272;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 1, 8)}, ComplexEventTimes_NoComplexEventTimes_272);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 26, 17)}, ComplexEventTimes_NoComplexEventTimes_272);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_272);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_273;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 37, 11)}, ComplexEventTimes_NoComplexEventTimes_273);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 55, 54)}, ComplexEventTimes_NoComplexEventTimes_273);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_273);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_70;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1775606291"}, EvntGrp_NoEvents_70);
      FIX::EventPx EventPx_70;
      EventPx_70.setString("11587592");
set_field(noEvents_1_1_0, EventPx_70, EvntGrp_NoEvents_70);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1897261310"}, EvntGrp_NoEvents_70);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 31, 59, 7, 8, 2013)}, EvntGrp_NoEvents_70);
      set_field(noEvents_1_1_0, FIX::EventType{5}, EvntGrp_NoEvents_70);
      all_values.push_back(EvntGrp_NoEvents_70);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_71;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_261460425"}, EvntGrp_NoEvents_71);
      FIX::EventPx EventPx_71;
      EventPx_71.setString("13386631");
set_field(noEvents_1_1_1, EventPx_71, EvntGrp_NoEvents_71);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1267847304"}, EvntGrp_NoEvents_71);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 25, 39, 12, 8, 2006)}, EvntGrp_NoEvents_71);
      set_field(noEvents_1_1_1, FIX::EventType{2}, EvntGrp_NoEvents_71);
      all_values.push_back(EvntGrp_NoEvents_71);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_72;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_802590232"}, EvntGrp_NoEvents_72);
      FIX::EventPx EventPx_72;
      EventPx_72.setString("7683151");
set_field(noEvents_1_1_2, EventPx_72, EvntGrp_NoEvents_72);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_49645010"}, EvntGrp_NoEvents_72);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 38, 43, 5, 6, 2010)}, EvntGrp_NoEvents_72);
      set_field(noEvents_1_1_2, FIX::EventType{11}, EvntGrp_NoEvents_72);
      all_values.push_back(EvntGrp_NoEvents_72);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_61;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_603555506"}, InstrumentParties_NoInstrumentParties_61);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_61);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{38537058}, InstrumentParties_NoInstrumentParties_61);
      all_values.push_back(InstrumentParties_NoInstrumentParties_61);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_1380219840"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1472394158}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1738623204"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{845599097}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_62;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1733854583"}, InstrumentParties_NoInstrumentParties_62);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_62);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{2113446401}, InstrumentParties_NoInstrumentParties_62);
      all_values.push_back(InstrumentParties_NoInstrumentParties_62);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_728494583"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1479988378}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_341857054"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{1290396747}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_69;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1196029600"}, SecAltIDGrp_NoSecurityAltID_69);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_5282681"}, SecAltIDGrp_NoSecurityAltID_69);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_66;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_1963433006"}, SecurityXML_66);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1964344787}, SecurityXML_66);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_54927691"}, SecurityXML_66);
    all_values.push_back(SecurityXML_66);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_50;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1083227506"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{2116352589}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1026259137"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1766688219}, UnderlyingInstrument_50);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
      UnderlyingAdjustedQuantity_50.setString("21442393");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_50, UnderlyingInstrument_50);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
      UnderlyingAllocationPercent_50.setString("85.830000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_50, UnderlyingInstrument_50);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
      UnderlyingAttachmentPoint_50.setString("45.610000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1921903742"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1723654089"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_1710374618"}, UnderlyingInstrument_50);
      FIX::UnderlyingCapValue UnderlyingCapValue_50;
      UnderlyingCapValue_50.setString("19604408");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_50, UnderlyingInstrument_50);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
      UnderlyingCashAmount_50.setString("14768298");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_50);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
      UnderlyingContractMultiplier_50.setString("12853513");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1067969443}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1788709908"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_871722246"}, UnderlyingInstrument_50);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
      UnderlyingCouponRate_50.setString("21.210000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_1754672661"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_50);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
      UnderlyingCurrentValue_50.setString("10871773");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_50, UnderlyingInstrument_50);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
      UnderlyingDetachmentPoint_50.setString("62.360000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_50, UnderlyingInstrument_50);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
      UnderlyingDirtyPrice_50.setString("18691798");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_50, UnderlyingInstrument_50);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
      UnderlyingEndPrice_50.setString("1005365");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_50, UnderlyingInstrument_50);
      FIX::UnderlyingEndValue UnderlyingEndValue_50;
      UnderlyingEndValue_50.setString("3495421");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{1874462485}, UnderlyingInstrument_50);
      FIX::UnderlyingFXRate UnderlyingFXRate_50;
      UnderlyingFXRate_50.setString("20639695");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_50);
      FIX::UnderlyingFactor UnderlyingFactor_50;
      UnderlyingFactor_50.setString("19293901");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{477028209}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1249630834"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1898259118"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1503287346"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_868835406"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1895014805"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_475902281"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_182776319"}, UnderlyingInstrument_50);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
      UnderlyingNotionalPercentageOutstanding_50.setString("49.000000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_50);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
      UnderlyingOriginalNotionalPercentageOutstanding_50.setString("9.380000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1482392053"}, UnderlyingInstrument_50);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
      UnderlyingPriceUnitOfMeasureQty_50.setString("15289026");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{688778101}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{620259716}, UnderlyingInstrument_50);
      FIX::UnderlyingPx UnderlyingPx_50;
      UnderlyingPx_50.setString("4493884");
set_field(noUnderlyings_1_1_0, UnderlyingPx_50, UnderlyingInstrument_50);
      FIX::UnderlyingQty UnderlyingQty_50;
      UnderlyingQty_50.setString("3300043");
set_field(noUnderlyings_1_1_0, UnderlyingQty_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1491981962"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_299676879"}, UnderlyingInstrument_50);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
      UnderlyingRepurchaseRate_50.setString("70.220000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{303637496}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_878459936"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_1024370765"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1604633732"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_600156092"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1124907282"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_1954175920"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_327134930"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1041393157"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_2120579248"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_50);
      FIX::UnderlyingStartValue UnderlyingStartValue_50;
      UnderlyingStartValue_50.setString("15184213");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1222726435"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_50);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
      UnderlyingStrikePrice_50.setString("20915618");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_1754831735"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_1350127346"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_126854512"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1276782987"}, UnderlyingInstrument_50);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
      UnderlyingUnitOfMeasureQty_50.setString("14022000");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_50, UnderlyingInstrument_50);
      all_values.push_back(UnderlyingInstrument_50);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_611691392"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_783619031"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1231951108"}, UnderlyingStipulations_NoUnderlyingStips_98);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1233007436"}, UnderlyingStipulations_NoUnderlyingStips_98);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_891304264"}, UnderlyingStipulations_NoUnderlyingStips_99);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_576449422"}, UnderlyingStipulations_NoUnderlyingStips_99);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipType{"STRING_1532684315"}, UnderlyingStipulations_NoUnderlyingStips_100);
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipValue{"STRING_828497638"}, UnderlyingStipulations_NoUnderlyingStips_100);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_263660603"}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{337237002}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_830292038"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{143929275}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1190951626"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1871685196}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_117024875"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1299993085}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_51;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1242622914"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1339751310}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1159810014"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{2116847979}, UnderlyingInstrument_51);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
      UnderlyingAdjustedQuantity_51.setString("12838295");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_51, UnderlyingInstrument_51);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
      UnderlyingAllocationPercent_51.setString("81.010000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_51, UnderlyingInstrument_51);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
      UnderlyingAttachmentPoint_51.setString("16.770000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1410684016"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_2043941088"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_574208098"}, UnderlyingInstrument_51);
      FIX::UnderlyingCapValue UnderlyingCapValue_51;
      UnderlyingCapValue_51.setString("12832058");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_51, UnderlyingInstrument_51);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
      UnderlyingCashAmount_51.setString("5081488");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_51);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
      UnderlyingContractMultiplier_51.setString("18445057");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{1740099940}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_443350917"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_588326338"}, UnderlyingInstrument_51);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
      UnderlyingCouponRate_51.setString("57.150000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_1976035233"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_51);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
      UnderlyingCurrentValue_51.setString("922121");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_51, UnderlyingInstrument_51);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
      UnderlyingDetachmentPoint_51.setString("87.330000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_51, UnderlyingInstrument_51);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
      UnderlyingDirtyPrice_51.setString("13863896");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_51, UnderlyingInstrument_51);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
      UnderlyingEndPrice_51.setString("9560288");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_51, UnderlyingInstrument_51);
      FIX::UnderlyingEndValue UnderlyingEndValue_51;
      UnderlyingEndValue_51.setString("19525007");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1530318911}, UnderlyingInstrument_51);
      FIX::UnderlyingFXRate UnderlyingFXRate_51;
      UnderlyingFXRate_51.setString("21469805");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_51);
      FIX::UnderlyingFactor UnderlyingFactor_51;
      UnderlyingFactor_51.setString("16473437");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1299489947}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_771841586"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_839611449"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_311816314"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_741205917"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2123440952"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1078974415"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2060697594"}, UnderlyingInstrument_51);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
      UnderlyingNotionalPercentageOutstanding_51.setString("13.200000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_51);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
      UnderlyingOriginalNotionalPercentageOutstanding_51.setString("20.440000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_522363491"}, UnderlyingInstrument_51);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
      UnderlyingPriceUnitOfMeasureQty_51.setString("14835806");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{1845249173}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{219385565}, UnderlyingInstrument_51);
      FIX::UnderlyingPx UnderlyingPx_51;
      UnderlyingPx_51.setString("10761969");
set_field(noUnderlyings_1_1_1, UnderlyingPx_51, UnderlyingInstrument_51);
      FIX::UnderlyingQty UnderlyingQty_51;
      UnderlyingQty_51.setString("1411164");
set_field(noUnderlyings_1_1_1, UnderlyingQty_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_807711903"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1245262696"}, UnderlyingInstrument_51);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
      UnderlyingRepurchaseRate_51.setString("16.750000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{77052232}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_146931681"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_61880216"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1199260965"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_1533321317"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1017909100"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_1004278089"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_916156580"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1017405963"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_533496760"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_51);
      FIX::UnderlyingStartValue UnderlyingStartValue_51;
      UnderlyingStartValue_51.setString("1694122");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1305338346"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_51);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
      UnderlyingStrikePrice_51.setString("20465442");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1231585472"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_1560202992"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_1959758209"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_470743145"}, UnderlyingInstrument_51);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
      UnderlyingUnitOfMeasureQty_51.setString("3881512");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_51, UnderlyingInstrument_51);
      all_values.push_back(UnderlyingInstrument_51);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_993106636"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1871731888"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_2144945778"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1212492201"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_138578573"}, UnderlyingStipulations_NoUnderlyingStips_101);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_2020204104"}, UnderlyingStipulations_NoUnderlyingStips_101);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_2045707917"}, UnderlyingStipulations_NoUnderlyingStips_102);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_108246600"}, UnderlyingStipulations_NoUnderlyingStips_102);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_2097256337"}, UnderlyingStipulations_NoUnderlyingStips_103);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_45155951"}, UnderlyingStipulations_NoUnderlyingStips_103);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1149033654"}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{1188035917}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_347150201"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{57958232}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_539324856"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{763166920}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_227370494"}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{2018795088}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1743723818"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1102896912}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_121318415"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1555998379}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1573640057"}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyRole{1855694985}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_233717855"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1853157115}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1631755246"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1034163077}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_52;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1991735688"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1504475703}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_932387346"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{2099982289}, UnderlyingInstrument_52);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
      UnderlyingAdjustedQuantity_52.setString("14542483");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_52, UnderlyingInstrument_52);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
      UnderlyingAllocationPercent_52.setString("32.970000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_52, UnderlyingInstrument_52);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
      UnderlyingAttachmentPoint_52.setString("54.570000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_455798398"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_408536918"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1310661374"}, UnderlyingInstrument_52);
      FIX::UnderlyingCapValue UnderlyingCapValue_52;
      UnderlyingCapValue_52.setString("4616264");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_52, UnderlyingInstrument_52);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
      UnderlyingCashAmount_52.setString("7556871");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_52);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
      UnderlyingContractMultiplier_52.setString("10009513");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{1518854039}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1595990101"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_698130904"}, UnderlyingInstrument_52);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
      UnderlyingCouponRate_52.setString("54.790000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_157105524"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_52);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
      UnderlyingCurrentValue_52.setString("2784239");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_52, UnderlyingInstrument_52);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
      UnderlyingDetachmentPoint_52.setString("94.540000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_52, UnderlyingInstrument_52);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
      UnderlyingDirtyPrice_52.setString("19192188");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_52, UnderlyingInstrument_52);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
      UnderlyingEndPrice_52.setString("7878935");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_52, UnderlyingInstrument_52);
      FIX::UnderlyingEndValue UnderlyingEndValue_52;
      UnderlyingEndValue_52.setString("15585807");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{190998198}, UnderlyingInstrument_52);
      FIX::UnderlyingFXRate UnderlyingFXRate_52;
      UnderlyingFXRate_52.setString("10216114");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_52);
      FIX::UnderlyingFactor UnderlyingFactor_52;
      UnderlyingFactor_52.setString("18227534");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{2055774486}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_1108506299"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1179745500"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_840678185"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1061004940"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_486510244"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1818221482"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1183630397"}, UnderlyingInstrument_52);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
      UnderlyingNotionalPercentageOutstanding_52.setString("86.420000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_52);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
      UnderlyingOriginalNotionalPercentageOutstanding_52.setString("81.240000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1403935136"}, UnderlyingInstrument_52);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
      UnderlyingPriceUnitOfMeasureQty_52.setString("8349618");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{1715427730}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{257402838}, UnderlyingInstrument_52);
      FIX::UnderlyingPx UnderlyingPx_52;
      UnderlyingPx_52.setString("2063322");
set_field(noUnderlyings_1_1_2, UnderlyingPx_52, UnderlyingInstrument_52);
      FIX::UnderlyingQty UnderlyingQty_52;
      UnderlyingQty_52.setString("11639341");
set_field(noUnderlyings_1_1_2, UnderlyingQty_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_955533743"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1596497741"}, UnderlyingInstrument_52);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
      UnderlyingRepurchaseRate_52.setString("97.070000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{1249904817}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_1942076485"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_1599463646"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_952790623"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_1713811638"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_239873552"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_363887766"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_1904809836"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_1261484962"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_1628142025"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_52);
      FIX::UnderlyingStartValue UnderlyingStartValue_52;
      UnderlyingStartValue_52.setString("11697758");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_589164676"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_52);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
      UnderlyingStrikePrice_52.setString("16501696");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_1098851729"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_1681191820"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_686316365"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_2041160372"}, UnderlyingInstrument_52);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
      UnderlyingUnitOfMeasureQty_52.setString("17604665");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_52, UnderlyingInstrument_52);
      all_values.push_back(UnderlyingInstrument_52);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1297611860"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_447944796"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_601068572"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1555014699"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_654277058"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1765002755"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_103291152"}, UnderlyingStipulations_NoUnderlyingStips_104);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_938558815"}, UnderlyingStipulations_NoUnderlyingStips_104);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_2045367637"}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{418276587}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_630412366"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{782164353}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1369021815"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1891897328}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_262822730"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{801617801}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // MDReqGrp
  // Group MDReqGrp.NoMDEntryTypes
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_0;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_0;
    set_field(noMDEntryTypes_0_0, FIX::MDEntryType{'V'}, MDReqGrp_NoMDEntryTypes_0);
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);
    all_compo_names.insert("...NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_1;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_1;
    set_field(noMDEntryTypes_0_1, FIX::MDEntryType{'V'}, MDReqGrp_NoMDEntryTypes_1);
    all_values.push_back(MDReqGrp_NoMDEntryTypes_1);
    all_compo_names.insert("...NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_2;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_2;
    set_field(noMDEntryTypes_0_2, FIX::MDEntryType{'S'}, MDReqGrp_NoMDEntryTypes_2);
    all_values.push_back(MDReqGrp_NoMDEntryTypes_2);
    all_compo_names.insert("...NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_60;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_365327368"}, Parties_NoPartyIDs_60);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_60);
    set_field(noPartyIDs_0_0, FIX::PartyRole{1}, Parties_NoPartyIDs_60);
    all_values.push_back(Parties_NoPartyIDs_60);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_126;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_2071334562"}, PtysSubGrp_NoPartySubIDs_126);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_126);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_126);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_127;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1556615952"}, PtysSubGrp_NoPartySubIDs_127);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_127);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_127);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_1);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_2);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_3;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_3);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_3);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // header
  multiset<string> header_40;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_40);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1027247910"}, header_40);
  set_header_field(msg.getHeader(), FIX::BodyLength{1474315889}, header_40);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1210974348"}, header_40);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_491459889"}, header_40);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2104728255"}, header_40);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1993138701"}, header_40);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1860481704}, header_40);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_40);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{108477784}, header_40);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_514615857"}, header_40);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_615847768"}, header_40);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_960465190"}, header_40);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(18, 5, 24, 4, 10, 2010)}, header_40);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_40);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_40);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1962038908"}, header_40);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1999522201}, header_40);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_662974392"}, header_40);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_778702264"}, header_40);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_878111322"}, header_40);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(5, 43, 49, 6, 6, 2010)}, header_40);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1962102522"}, header_40);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1378699394"}, header_40);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1176046578"}, header_40);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1807757576"}, header_40);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1091697450}, header_40);
  all_values.push_back(header_40);
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
