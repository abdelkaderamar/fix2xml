#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_73083071"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_P"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::Currency{"JPY"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedText{"DATA_869586801"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedTextLen{1830015662}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityReportID{428481075}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_953494415"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_1959347272"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityResponseType{5}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'D'}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::Text{"STRING_1844543258"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(17, 44, 50, 25, 10, 2010)}, SecurityDefinitionUpdateReport_0);
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  all_compo_names.insert("SecurityDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  set_field(msg, FIX::ApplID{"STRING_83347851"}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplLastSeqNum{1330977001}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplSeqNum{64745068}, ApplicationSequenceControl_13);
  all_values.push_back(ApplicationSequenceControl_13);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_122;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1740375950"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1971801791}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1122646380"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{457748963}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_583193432"}, InstrumentLeg_122);
    FIX::LegContractMultiplier LegContractMultiplier_122;
    LegContractMultiplier_122.setString("17117630");
set_field(noLegs_0_0, LegContractMultiplier_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{732636912}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_656276503"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_434953640"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_639051887"}, InstrumentLeg_122);
    FIX::LegCouponRate LegCouponRate_122;
    LegCouponRate_122.setString("37.170000");
set_field(noLegs_0_0, LegCouponRate_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1304540442"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_110551209"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{133447525}, InstrumentLeg_122);
    FIX::LegFactor LegFactor_122;
    LegFactor_122.setString("10469180");
set_field(noLegs_0_0, LegFactor_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{793303178}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1977990784"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1997301580"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1550462755"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2109857148"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1669357162"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1050231677"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_283933069"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_360852030"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_122);
    FIX::LegOptionRatio LegOptionRatio_122;
    LegOptionRatio_122.setString("16149100");
set_field(noLegs_0_0, LegOptionRatio_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_783544165"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1198324597"}, InstrumentLeg_122);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_122;
    LegPriceUnitOfMeasureQty_122.setString("6990633");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegProduct{376436467}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1022642740}, InstrumentLeg_122);
    FIX::LegRatioQty LegRatioQty_122;
    LegRatioQty_122.setString("18217096");
set_field(noLegs_0_0, LegRatioQty_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_834185430"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1605836172"}, InstrumentLeg_122);
    FIX::LegRepurchaseRate LegRepurchaseRate_122;
    LegRepurchaseRate_122.setString("90.880000");
set_field(noLegs_0_0, LegRepurchaseRate_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1566822342}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_114629027"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1820942729"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_58390581"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1102822744"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_977999523"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_379974482"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSide{'3'}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1088550732"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_122);
    FIX::LegStrikePrice LegStrikePrice_122;
    LegStrikePrice_122.setString("18818539");
set_field(noLegs_0_0, LegStrikePrice_122, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_343929144"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1268749848"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1284833018"}, InstrumentLeg_122);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_306302644"}, InstrumentLeg_122);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_122;
    LegUnitOfMeasureQty_122.setString("7906233");
set_field(noLegs_0_0, LegUnitOfMeasureQty_122, InstrumentLeg_122);
    all_values.push_back(InstrumentLeg_122);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_241;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_590235713"}, LegSecAltIDGrp_NoLegSecurityAltID_241);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1151475393"}, LegSecAltIDGrp_NoLegSecurityAltID_241);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_241);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_242;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1321160575"}, LegSecAltIDGrp_NoLegSecurityAltID_242);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_57662135"}, LegSecAltIDGrp_NoLegSecurityAltID_242);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_242);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_243;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1935019558"}, LegSecAltIDGrp_NoLegSecurityAltID_243);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_372001524"}, LegSecAltIDGrp_NoLegSecurityAltID_243);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_243);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_81;
  FIX::AttachmentPoint AttachmentPoint_81;
  AttachmentPoint_81.setString("54.410000");
set_field(msg, AttachmentPoint_81, Instrument_81);
  set_field(msg, FIX::CFICode{"STRING_163972377"}, Instrument_81);
  set_field(msg, FIX::CPProgram{2}, Instrument_81);
  set_field(msg, FIX::CPRegType{"STRING_430951479"}, Instrument_81);
  FIX::CapPrice CapPrice_81;
  CapPrice_81.setString("9981578");
set_field(msg, CapPrice_81, Instrument_81);
  FIX::ContractMultiplier ContractMultiplier_81;
  ContractMultiplier_81.setString("8529967");
set_field(msg, ContractMultiplier_81, Instrument_81);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_81);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_417496501"}, Instrument_81);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_967625815"}, Instrument_81);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1490399649"}, Instrument_81);
  FIX::CouponRate CouponRate_81;
  CouponRate_81.setString("70.830000");
set_field(msg, CouponRate_81, Instrument_81);
  set_field(msg, FIX::CreditRating{"STRING_2070448559"}, Instrument_81);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_320915524"}, Instrument_81);
  FIX::DetachmentPoint DetachmentPoint_81;
  DetachmentPoint_81.setString("15.650000");
set_field(msg, DetachmentPoint_81, Instrument_81);
  set_field(msg, FIX::EncodedIssuer{"DATA_294978800"}, Instrument_81);
  set_field(msg, FIX::EncodedIssuerLen{1409466256}, Instrument_81);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1369283573"}, Instrument_81);
  set_field(msg, FIX::EncodedSecurityDescLen{1713910715}, Instrument_81);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_81);
  FIX::Factor Factor_81;
  Factor_81.setString("17132127");
set_field(msg, Factor_81, Instrument_81);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_81);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_81);
  FIX::FloorPrice FloorPrice_81;
  FloorPrice_81.setString("20195153");
set_field(msg, FloorPrice_81, Instrument_81);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_81);
  set_field(msg, FIX::InstrRegistry{"STRING_468766936"}, Instrument_81);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_81);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_629792023"}, Instrument_81);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1789927511"}, Instrument_81);
  set_field(msg, FIX::Issuer{"STRING_519929561"}, Instrument_81);
  set_field(msg, FIX::ListMethod{1}, Instrument_81);
  set_field(msg, FIX::LocaleOfIssue{"STRING_14445388"}, Instrument_81);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1276655002"}, Instrument_81);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_581300310"}, Instrument_81);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1409089652"}, Instrument_81);
  FIX::MinPriceIncrement MinPriceIncrement_81;
  MinPriceIncrement_81.setString("17076064");
set_field(msg, MinPriceIncrement_81, Instrument_81);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
  MinPriceIncrementAmount_81.setString("15794581");
set_field(msg, MinPriceIncrementAmount_81, Instrument_81);
  set_field(msg, FIX::NTPositionLimit{114602793}, Instrument_81);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
  NotionalPercentageOutstanding_81.setString("34.020000");
set_field(msg, NotionalPercentageOutstanding_81, Instrument_81);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_81);
  FIX::OptPayoutAmount OptPayoutAmount_81;
  OptPayoutAmount_81.setString("10822286");
set_field(msg, OptPayoutAmount_81, Instrument_81);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_81);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
  OriginalNotionalPercentageOutstanding_81.setString("80.530000");
set_field(msg, OriginalNotionalPercentageOutstanding_81, Instrument_81);
  set_field(msg, FIX::Pool{"STRING_1005193520"}, Instrument_81);
  set_field(msg, FIX::PositionLimit{1040894927}, Instrument_81);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_81);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1300172320"}, Instrument_81);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
  PriceUnitOfMeasureQty_81.setString("3028775");
set_field(msg, PriceUnitOfMeasureQty_81, Instrument_81);
  set_field(msg, FIX::Product{6}, Instrument_81);
  set_field(msg, FIX::ProductComplex{"STRING_866599387"}, Instrument_81);
  set_field(msg, FIX::PutOrCall{0}, Instrument_81);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2116232262"}, Instrument_81);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1701776303"}, Instrument_81);
  FIX::RepurchaseRate RepurchaseRate_81;
  RepurchaseRate_81.setString("99.430000");
set_field(msg, RepurchaseRate_81, Instrument_81);
  set_field(msg, FIX::RepurchaseTerm{1988263975}, Instrument_81);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_81);
  set_field(msg, FIX::SecurityDesc{"STRING_49183231"}, Instrument_81);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_303047754"}, Instrument_81);
  set_field(msg, FIX::SecurityGroup{"STRING_1809884956"}, Instrument_81);
  set_field(msg, FIX::SecurityID{"STRING_1839110743"}, Instrument_81);
  set_field(msg, FIX::SecurityIDSource{"STRING_I"}, Instrument_81);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_81);
  set_field(msg, FIX::SecuritySubType{"STRING_1853556131"}, Instrument_81);
  set_field(msg, FIX::SecurityType{"STRING_PS"}, Instrument_81);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_81);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_81);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1659755152"}, Instrument_81);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_93004020"}, Instrument_81);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_81);
  FIX::StrikeMultiplier StrikeMultiplier_81;
  StrikeMultiplier_81.setString("20899586");
set_field(msg, StrikeMultiplier_81, Instrument_81);
  FIX::StrikePrice StrikePrice_81;
  StrikePrice_81.setString("1645098");
set_field(msg, StrikePrice_81, Instrument_81);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_81);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
  StrikePriceBoundaryPrecision_81.setString("30.440000");
set_field(msg, StrikePriceBoundaryPrecision_81, Instrument_81);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_81);
  FIX::StrikeValue StrikeValue_81;
  StrikeValue_81.setString("5027255");
set_field(msg, StrikeValue_81, Instrument_81);
  set_field(msg, FIX::Symbol{"STRING_1449052663"}, Instrument_81);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_81);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_81);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_81);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_81);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
  UnitOfMeasureQty_81.setString("1048335");
set_field(msg, UnitOfMeasureQty_81, Instrument_81);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_81);
  all_values.push_back(Instrument_81);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_166;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexEventPrice ComplexEventPrice_166;
    ComplexEventPrice_166.setString("16616011");
set_field(noComplexEvents_0_0, ComplexEventPrice_166, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
    ComplexEventPriceBoundaryPrecision_166.setString("67.050000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_166, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
    ComplexOptPayoutAmount_166.setString("15735438");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_166, ComplexEvents_NoComplexEvents_166);
    all_values.push_back(ComplexEvents_NoComplexEvents_166);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_336;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 40, 8, 2, 1, 2002)}, ComplexEventDates_NoComplexEventDates_336);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 59, 8, 3, 4, 2001)}, ComplexEventDates_NoComplexEventDates_336);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_336);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 23, 45)}, ComplexEventTimes_NoComplexEventTimes_683);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 19, 14)}, ComplexEventTimes_NoComplexEventTimes_683);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_337;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 22, 55, 15, 12, 2017)}, ComplexEventDates_NoComplexEventDates_337);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 50, 26, 5, 2, 2008)}, ComplexEventDates_NoComplexEventDates_337);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_337);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 52, 52)}, ComplexEventTimes_NoComplexEventTimes_684);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 41, 56)}, ComplexEventTimes_NoComplexEventTimes_684);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 19, 19)}, ComplexEventTimes_NoComplexEventTimes_685);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 30, 27)}, ComplexEventTimes_NoComplexEventTimes_685);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_338;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 50, 22, 5, 6, 2009)}, ComplexEventDates_NoComplexEventDates_338);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 52, 0, 14, 6, 2001)}, ComplexEventDates_NoComplexEventDates_338);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_338);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 36, 41)}, ComplexEventTimes_NoComplexEventTimes_686);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 14, 28)}, ComplexEventTimes_NoComplexEventTimes_686);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 39, 8)}, ComplexEventTimes_NoComplexEventTimes_687);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 38, 30)}, ComplexEventTimes_NoComplexEventTimes_687);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 12, 32)}, ComplexEventTimes_NoComplexEventTimes_688);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 33, 12)}, ComplexEventTimes_NoComplexEventTimes_688);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_167;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexEventPrice ComplexEventPrice_167;
    ComplexEventPrice_167.setString("10524120");
set_field(noComplexEvents_0_1, ComplexEventPrice_167, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
    ComplexEventPriceBoundaryPrecision_167.setString("87.210000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_167, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
    ComplexOptPayoutAmount_167.setString("21243543");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_167, ComplexEvents_NoComplexEvents_167);
    all_values.push_back(ComplexEvents_NoComplexEvents_167);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_339;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 52, 20, 17, 7, 2010)}, ComplexEventDates_NoComplexEventDates_339);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 20, 3, 22, 12, 2004)}, ComplexEventDates_NoComplexEventDates_339);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_339);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 32, 21)}, ComplexEventTimes_NoComplexEventTimes_689);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 55, 48)}, ComplexEventTimes_NoComplexEventTimes_689);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 52, 48)}, ComplexEventTimes_NoComplexEventTimes_690);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 45, 46)}, ComplexEventTimes_NoComplexEventTimes_690);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 39, 31)}, ComplexEventTimes_NoComplexEventTimes_691);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 12, 3)}, ComplexEventTimes_NoComplexEventTimes_691);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_340;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 59, 23, 11, 10, 2001)}, ComplexEventDates_NoComplexEventDates_340);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 7, 14, 19, 5, 2001)}, ComplexEventDates_NoComplexEventDates_340);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_340);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 56, 20)}, ComplexEventTimes_NoComplexEventTimes_692);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 57, 35)}, ComplexEventTimes_NoComplexEventTimes_692);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 6, 3)}, ComplexEventTimes_NoComplexEventTimes_693);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 15, 12)}, ComplexEventTimes_NoComplexEventTimes_693);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 11, 24)}, ComplexEventTimes_NoComplexEventTimes_694);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 59, 27)}, ComplexEventTimes_NoComplexEventTimes_694);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_158;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_445290058"}, EvntGrp_NoEvents_158);
    FIX::EventPx EventPx_158;
    EventPx_158.setString("8552906");
set_field(noEvents_0_0, EventPx_158, EvntGrp_NoEvents_158);
    set_field(noEvents_0_0, FIX::EventText{"STRING_142748671"}, EvntGrp_NoEvents_158);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 43, 33, 25, 8, 2015)}, EvntGrp_NoEvents_158);
    set_field(noEvents_0_0, FIX::EventType{19}, EvntGrp_NoEvents_158);
    all_values.push_back(EvntGrp_NoEvents_158);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_159;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1030036311"}, EvntGrp_NoEvents_159);
    FIX::EventPx EventPx_159;
    EventPx_159.setString("10334152");
set_field(noEvents_0_1, EventPx_159, EvntGrp_NoEvents_159);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1280046126"}, EvntGrp_NoEvents_159);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 4, 25, 12, 5, 2008)}, EvntGrp_NoEvents_159);
    set_field(noEvents_0_1, FIX::EventType{14}, EvntGrp_NoEvents_159);
    all_values.push_back(EvntGrp_NoEvents_159);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_148;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1835707503"}, InstrumentParties_NoInstrumentParties_148);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_148);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{842197077}, InstrumentParties_NoInstrumentParties_148);
    all_values.push_back(InstrumentParties_NoInstrumentParties_148);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_124398593"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{437461368}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_149;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_553558617"}, InstrumentParties_NoInstrumentParties_149);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_149);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{882751426}, InstrumentParties_NoInstrumentParties_149);
    all_values.push_back(InstrumentParties_NoInstrumentParties_149);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1052779180"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2001340728}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_150;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_517051755"}, InstrumentParties_NoInstrumentParties_150);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_150);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1471458734}, InstrumentParties_NoInstrumentParties_150);
    all_values.push_back(InstrumentParties_NoInstrumentParties_150);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1805592586"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{205067271}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_256664795"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{688145249}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_163;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1536710921"}, SecAltIDGrp_NoSecurityAltID_163);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1216484572"}, SecAltIDGrp_NoSecurityAltID_163);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_164;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_201891138"}, SecAltIDGrp_NoSecurityAltID_164);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1690751145"}, SecAltIDGrp_NoSecurityAltID_164);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_162;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2074433717"}, SecurityXML_162);
  set_field(msg, FIX::SecurityXMLLen{62381778}, SecurityXML_162);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2000333186"}, SecurityXML_162);
  all_values.push_back(SecurityXML_162);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_10;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_10);
  FIX::PctAtRisk PctAtRisk_10;
  PctAtRisk_10.setString("10.710000");
set_field(msg, PctAtRisk_10, InstrumentExtension_10);
  all_values.push_back(InstrumentExtension_10);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_17;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{8}, AttrbGrp_NoInstrAttrib_17);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_286164468"}, AttrbGrp_NoInstrAttrib_17);
    all_values.push_back(AttrbGrp_NoInstrAttrib_17);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_18;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{28}, AttrbGrp_NoInstrAttrib_18);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_722993527"}, AttrbGrp_NoInstrAttrib_18);
    all_values.push_back(AttrbGrp_NoInstrAttrib_18);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_19;
    set_field(noInstrAttrib_0_2, FIX::InstrAttribType{12}, AttrbGrp_NoInstrAttrib_19);
    set_field(noInstrAttrib_0_2, FIX::InstrAttribValue{"STRING_2007062565"}, AttrbGrp_NoInstrAttrib_19);
    all_values.push_back(AttrbGrp_NoInstrAttrib_19);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_6;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_1320593570"}, MarketSegmentGrp_NoMarketSegments_6);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_742330344"}, MarketSegmentGrp_NoMarketSegments_6);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_6);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_8);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_8);
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("5961874");
set_field(noMarketSegments_0_0, MaxPriceVariation_8, BaseTradingRules_8);
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("10549695");
set_field(noMarketSegments_0_0, MaxTradeVol_8, BaseTradingRules_8);
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("11644382");
set_field(noMarketSegments_0_0, MinTradeVol_8, BaseTradingRules_8);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{0}, BaseTradingRules_8);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{2}, BaseTradingRules_8);
    set_field(noMarketSegments_0_0, FIX::PriceType{5}, BaseTradingRules_8);
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("1252297");
set_field(noMarketSegments_0_0, RoundLot_8, BaseTradingRules_8);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"JPY"}, BaseTradingRules_8);
    all_values.push_back(BaseTradingRules_8);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_16);
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("5796933");
set_field(noLotTypeRules_0_1_0, MinLotSize_16, LotTypeRules_NoLotTypeRules_16);
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("15656033");
set_field(noMarketSegments_0_0, HighLimitPrice_8, PriceLimits_8);
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("9660712");
set_field(noMarketSegments_0_0, LowLimitPrice_8, PriceLimits_8);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{0}, PriceLimits_8);
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("16279851");
set_field(noMarketSegments_0_0, TradingReferencePrice_8, PriceLimits_8);
    all_values.push_back(PriceLimits_8);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_13;
      FIX::EndTickPriceRange EndTickPriceRange_13;
      EndTickPriceRange_13.setString("10866302");
set_field(noTickRules_0_1_0, EndTickPriceRange_13, TickRules_NoTickRules_13);
      FIX::StartTickPriceRange StartTickPriceRange_13;
      StartTickPriceRange_13.setString("128025");
set_field(noTickRules_0_1_0, StartTickPriceRange_13, TickRules_NoTickRules_13);
      FIX::TickIncrement TickIncrement_13;
      TickIncrement_13.setString("15463249");
set_field(noTickRules_0_1_0, TickIncrement_13, TickRules_NoTickRules_13);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{4}, TickRules_NoTickRules_13);
      all_values.push_back(TickRules_NoTickRules_13);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_14;
      FIX::EndTickPriceRange EndTickPriceRange_14;
      EndTickPriceRange_14.setString("2989670");
set_field(noTickRules_0_1_1, EndTickPriceRange_14, TickRules_NoTickRules_14);
      FIX::StartTickPriceRange StartTickPriceRange_14;
      StartTickPriceRange_14.setString("9684424");
set_field(noTickRules_0_1_1, StartTickPriceRange_14, TickRules_NoTickRules_14);
      FIX::TickIncrement TickIncrement_14;
      TickIncrement_14.setString("20778343");
set_field(noTickRules_0_1_1, TickIncrement_14, TickRules_NoTickRules_14);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{0}, TickRules_NoTickRules_14);
      all_values.push_back(TickRules_NoTickRules_14);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_15;
      FIX::EndTickPriceRange EndTickPriceRange_15;
      EndTickPriceRange_15.setString("8280213");
set_field(noTickRules_0_1_2, EndTickPriceRange_15, TickRules_NoTickRules_15);
      FIX::StartTickPriceRange StartTickPriceRange_15;
      StartTickPriceRange_15.setString("12069028");
set_field(noTickRules_0_1_2, StartTickPriceRange_15, TickRules_NoTickRules_15);
      FIX::TickIncrement TickIncrement_15;
      TickIncrement_15.setString("20301236");
set_field(noTickRules_0_1_2, TickIncrement_15, TickRules_NoTickRules_15);
      set_field(noTickRules_0_1_2, FIX::TickRuleType{4}, TickRules_NoTickRules_15);
      all_values.push_back(TickRules_NoTickRules_15);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_16;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{108529150}, NestedInstrumentAttribute_NoNestedInstrAttrib_16);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_19055506"}, NestedInstrumentAttribute_NoNestedInstrAttrib_16);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_16);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_17;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{652306583}, NestedInstrumentAttribute_NoNestedInstrAttrib_17);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_1272967368"}, NestedInstrumentAttribute_NoNestedInstrAttrib_17);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_17);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_12);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_12);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_26;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_26);
        all_values.push_back(ExecInstRules_NoExecInstRules_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_27);
        all_values.push_back(ExecInstRules_NoExecInstRules_27);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_29);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_2038416612"}, MarketDataFeedTypes_NoMDFeedTypes_29);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{846279801}, MarketDataFeedTypes_NoMDFeedTypes_29);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_30);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_397576364"}, MarketDataFeedTypes_NoMDFeedTypes_30);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{326781326}, MarketDataFeedTypes_NoMDFeedTypes_30);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_31);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDFeedType{"STRING_1484206565"}, MarketDataFeedTypes_NoMDFeedTypes_31);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MarketDepth{339583923}, MarketDataFeedTypes_NoMDFeedTypes_31);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_691563776"}, MatchRules_NoMatchRules_25);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_M4"}, MatchRules_NoMatchRules_25);
        all_values.push_back(MatchRules_NoMatchRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_1595423390"}, MatchRules_NoMatchRules_26);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_26);
        all_values.push_back(MatchRules_NoMatchRules_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_1348081113"}, MatchRules_NoMatchRules_27);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_27);
        all_values.push_back(MatchRules_NoMatchRules_27);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_31);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'A'}, OrdTypeRules_NoOrdTypeRules_32);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_23;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_23);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_13);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_13);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_28);
        all_values.push_back(ExecInstRules_NoExecInstRules_28);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_29);
        all_values.push_back(ExecInstRules_NoExecInstRules_29);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_32);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_380539472"}, MarketDataFeedTypes_NoMDFeedTypes_32);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{1871488189}, MarketDataFeedTypes_NoMDFeedTypes_32);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_33);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_1971170710"}, MarketDataFeedTypes_NoMDFeedTypes_33);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{1762421154}, MarketDataFeedTypes_NoMDFeedTypes_33);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_232905914"}, MatchRules_NoMatchRules_28);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_S1"}, MatchRules_NoMatchRules_28);
        all_values.push_back(MatchRules_NoMatchRules_28);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'F'}, OrdTypeRules_NoOrdTypeRules_33);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_24;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_24);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_25;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_25);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_26;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_26);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_15;
      FIX::EndStrikePxRange EndStrikePxRange_15;
      EndStrikePxRange_15.setString("15359662");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_15, StrikeRules_NoStrikeRules_15);
      FIX::StartStrikePxRange StartStrikePxRange_15;
      StartStrikePxRange_15.setString("6627150");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_15, StrikeRules_NoStrikeRules_15);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{354020441}, StrikeRules_NoStrikeRules_15);
      FIX::StrikeIncrement StrikeIncrement_15;
      StrikeIncrement_15.setString("18119273");
set_field(noStrikeRules_0_1_0, StrikeIncrement_15, StrikeRules_NoStrikeRules_15);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_344048829"}, StrikeRules_NoStrikeRules_15);
      all_values.push_back(StrikeRules_NoStrikeRules_15);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_35;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1510756568"}, MaturityRules_NoMaturityRules_35);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_35);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{776508264}, MaturityRules_NoMaturityRules_35);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_35);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1701180626"}, MaturityRules_NoMaturityRules_35);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1241242294"}, MaturityRules_NoMaturityRules_35);
        all_values.push_back(MaturityRules_NoMaturityRules_35);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_36;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_885744016"}, MaturityRules_NoMaturityRules_36);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_36);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{1654007201}, MaturityRules_NoMaturityRules_36);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_36);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_146948447"}, MaturityRules_NoMaturityRules_36);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1378011743"}, MaturityRules_NoMaturityRules_36);
        all_values.push_back(MaturityRules_NoMaturityRules_36);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_16;
      FIX::EndStrikePxRange EndStrikePxRange_16;
      EndStrikePxRange_16.setString("17570051");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_16, StrikeRules_NoStrikeRules_16);
      FIX::StartStrikePxRange StartStrikePxRange_16;
      StartStrikePxRange_16.setString("21181191");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_16, StrikeRules_NoStrikeRules_16);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{992949249}, StrikeRules_NoStrikeRules_16);
      FIX::StrikeIncrement StrikeIncrement_16;
      StrikeIncrement_16.setString("16055118");
set_field(noStrikeRules_0_1_1, StrikeIncrement_16, StrikeRules_NoStrikeRules_16);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_203541424"}, StrikeRules_NoStrikeRules_16);
      all_values.push_back(StrikeRules_NoStrikeRules_16);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_37;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1780799936"}, MaturityRules_NoMaturityRules_37);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_37);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{354699906}, MaturityRules_NoMaturityRules_37);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_37);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1605129831"}, MaturityRules_NoMaturityRules_37);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_395500470"}, MaturityRules_NoMaturityRules_37);
        all_values.push_back(MaturityRules_NoMaturityRules_37);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_7;
    set_field(noMarketSegments_0_1, FIX::MarketID{"EXCHANGE_1301611253"}, MarketSegmentGrp_NoMarketSegments_7);
    set_field(noMarketSegments_0_1, FIX::MarketSegmentID{"STRING_993612414"}, MarketSegmentGrp_NoMarketSegments_7);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_7);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    set_field(noMarketSegments_0_1, FIX::ExpirationCycle{1}, BaseTradingRules_9);
    set_field(noMarketSegments_0_1, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_9);
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("6580561");
set_field(noMarketSegments_0_1, MaxPriceVariation_9, BaseTradingRules_9);
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("14022643");
set_field(noMarketSegments_0_1, MaxTradeVol_9, BaseTradingRules_9);
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("10928896");
set_field(noMarketSegments_0_1, MinTradeVol_9, BaseTradingRules_9);
    set_field(noMarketSegments_0_1, FIX::MultilegModel{2}, BaseTradingRules_9);
    set_field(noMarketSegments_0_1, FIX::MultilegPriceMethod{1}, BaseTradingRules_9);
    set_field(noMarketSegments_0_1, FIX::PriceType{10}, BaseTradingRules_9);
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("12499703");
set_field(noMarketSegments_0_1, RoundLot_9, BaseTradingRules_9);
    set_field(noMarketSegments_0_1, FIX::TradingCurrency{"USD"}, BaseTradingRules_9);
    all_values.push_back(BaseTradingRules_9);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_17);
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("4696801");
set_field(noLotTypeRules_1_1_0, MinLotSize_17, LotTypeRules_NoLotTypeRules_17);
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      set_field(noLotTypeRules_1_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_18);
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("4920383");
set_field(noLotTypeRules_1_1_1, MinLotSize_18, LotTypeRules_NoLotTypeRules_18);
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      set_field(noLotTypeRules_1_1_2, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_19);
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("2050467");
set_field(noLotTypeRules_1_1_2, MinLotSize_19, LotTypeRules_NoLotTypeRules_19);
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("4626739");
set_field(noMarketSegments_0_1, HighLimitPrice_9, PriceLimits_9);
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("6931574");
set_field(noMarketSegments_0_1, LowLimitPrice_9, PriceLimits_9);
    set_field(noMarketSegments_0_1, FIX::PriceLimitType{0}, PriceLimits_9);
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("6662153");
set_field(noMarketSegments_0_1, TradingReferencePrice_9, PriceLimits_9);
    all_values.push_back(PriceLimits_9);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_16;
      FIX::EndTickPriceRange EndTickPriceRange_16;
      EndTickPriceRange_16.setString("14438748");
set_field(noTickRules_1_1_0, EndTickPriceRange_16, TickRules_NoTickRules_16);
      FIX::StartTickPriceRange StartTickPriceRange_16;
      StartTickPriceRange_16.setString("1833186");
set_field(noTickRules_1_1_0, StartTickPriceRange_16, TickRules_NoTickRules_16);
      FIX::TickIncrement TickIncrement_16;
      TickIncrement_16.setString("20533204");
set_field(noTickRules_1_1_0, TickIncrement_16, TickRules_NoTickRules_16);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{4}, TickRules_NoTickRules_16);
      all_values.push_back(TickRules_NoTickRules_16);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_18;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{301337303}, NestedInstrumentAttribute_NoNestedInstrAttrib_18);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_746190769"}, NestedInstrumentAttribute_NoNestedInstrAttrib_18);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_18);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_14);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_14);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_30);
        all_values.push_back(ExecInstRules_NoExecInstRules_30);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_34;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_34);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1639317575"}, MarketDataFeedTypes_NoMDFeedTypes_34);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{1069142726}, MarketDataFeedTypes_NoMDFeedTypes_34);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_34);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_35;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_35);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_70514896"}, MarketDataFeedTypes_NoMDFeedTypes_35);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{2032299284}, MarketDataFeedTypes_NoMDFeedTypes_35);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_35);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_415604840"}, MatchRules_NoMatchRules_29);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_29);
        all_values.push_back(MatchRules_NoMatchRules_29);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        set_field(noMatchRules_1_0_2_1, FIX::MatchAlgorithm{"STRING_1000205059"}, MatchRules_NoMatchRules_30);
        set_field(noMatchRules_1_0_2_1, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_30);
        all_values.push_back(MatchRules_NoMatchRules_30);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        set_field(noMatchRules_1_0_2_2, FIX::MatchAlgorithm{"STRING_54703954"}, MatchRules_NoMatchRules_31);
        set_field(noMatchRules_1_0_2_2, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_31);
        all_values.push_back(MatchRules_NoMatchRules_31);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_34);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_27;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_27);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_15);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_15);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_31);
        all_values.push_back(ExecInstRules_NoExecInstRules_31);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_36;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_36);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_506172473"}, MarketDataFeedTypes_NoMDFeedTypes_36);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{355488264}, MarketDataFeedTypes_NoMDFeedTypes_36);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_36);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_1865725326"}, MatchRules_NoMatchRules_32);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_AQ"}, MatchRules_NoMatchRules_32);
        all_values.push_back(MatchRules_NoMatchRules_32);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        set_field(noMatchRules_1_1_2_1, FIX::MatchAlgorithm{"STRING_1640542991"}, MatchRules_NoMatchRules_33);
        set_field(noMatchRules_1_1_2_1, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_33);
        all_values.push_back(MatchRules_NoMatchRules_33);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        set_field(noMatchRules_1_1_2_2, FIX::MatchAlgorithm{"STRING_1957055542"}, MatchRules_NoMatchRules_34);
        set_field(noMatchRules_1_1_2_2, FIX::MatchType{"STRING_6"}, MatchRules_NoMatchRules_34);
        all_values.push_back(MatchRules_NoMatchRules_34);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_35;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_35);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_36;
        set_field(noOrdTypeRules_1_1_2_1, FIX::OrdType{'2'}, OrdTypeRules_NoOrdTypeRules_36);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_28;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_28);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        set_field(noTimeInForceRules_1_1_2_1, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_29);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        set_field(noTimeInForceRules_1_1_2_2, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_30);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_17;
      FIX::EndStrikePxRange EndStrikePxRange_17;
      EndStrikePxRange_17.setString("4808721");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_17, StrikeRules_NoStrikeRules_17);
      FIX::StartStrikePxRange StartStrikePxRange_17;
      StartStrikePxRange_17.setString("12181721");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_17, StrikeRules_NoStrikeRules_17);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{1172729960}, StrikeRules_NoStrikeRules_17);
      FIX::StrikeIncrement StrikeIncrement_17;
      StrikeIncrement_17.setString("16861239");
set_field(noStrikeRules_1_1_0, StrikeIncrement_17, StrikeRules_NoStrikeRules_17);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_441005644"}, StrikeRules_NoStrikeRules_17);
      all_values.push_back(StrikeRules_NoStrikeRules_17);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_38;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_406967002"}, MaturityRules_NoMaturityRules_38);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_38);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{72106058}, MaturityRules_NoMaturityRules_38);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_38);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_402421939"}, MaturityRules_NoMaturityRules_38);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_276941228"}, MaturityRules_NoMaturityRules_38);
        all_values.push_back(MaturityRules_NoMaturityRules_38);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_39;
        set_field(noMaturityRules_1_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_180982475"}, MaturityRules_NoMaturityRules_39);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_39);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrement{783113701}, MaturityRules_NoMaturityRules_39);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_39);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityRuleID{"STRING_463663873"}, MaturityRules_NoMaturityRules_39);
        set_field(noMaturityRules_1_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_501355379"}, MaturityRules_NoMaturityRules_39);
        all_values.push_back(MaturityRules_NoMaturityRules_39);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_8;
    set_field(noMarketSegments_0_2, FIX::MarketID{"EXCHANGE_1146297818"}, MarketSegmentGrp_NoMarketSegments_8);
    set_field(noMarketSegments_0_2, FIX::MarketSegmentID{"STRING_2104206864"}, MarketSegmentGrp_NoMarketSegments_8);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_8);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_10;
    set_field(noMarketSegments_0_2, FIX::ExpirationCycle{1}, BaseTradingRules_10);
    set_field(noMarketSegments_0_2, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_10);
    FIX::MaxPriceVariation MaxPriceVariation_10;
    MaxPriceVariation_10.setString("7637449");
set_field(noMarketSegments_0_2, MaxPriceVariation_10, BaseTradingRules_10);
    FIX::MaxTradeVol MaxTradeVol_10;
    MaxTradeVol_10.setString("6583398");
set_field(noMarketSegments_0_2, MaxTradeVol_10, BaseTradingRules_10);
    FIX::MinTradeVol MinTradeVol_10;
    MinTradeVol_10.setString("18345843");
set_field(noMarketSegments_0_2, MinTradeVol_10, BaseTradingRules_10);
    set_field(noMarketSegments_0_2, FIX::MultilegModel{2}, BaseTradingRules_10);
    set_field(noMarketSegments_0_2, FIX::MultilegPriceMethod{3}, BaseTradingRules_10);
    set_field(noMarketSegments_0_2, FIX::PriceType{8}, BaseTradingRules_10);
    FIX::RoundLot RoundLot_10;
    RoundLot_10.setString("14678829");
set_field(noMarketSegments_0_2, RoundLot_10, BaseTradingRules_10);
    set_field(noMarketSegments_0_2, FIX::TradingCurrency{"CAN"}, BaseTradingRules_10);
    all_values.push_back(BaseTradingRules_10);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      set_field(noLotTypeRules_2_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_20);
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("5939032");
set_field(noLotTypeRules_2_1_0, MinLotSize_20, LotTypeRules_NoLotTypeRules_20);
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_21;
      set_field(noLotTypeRules_2_1_1, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_21);
      FIX::MinLotSize MinLotSize_21;
      MinLotSize_21.setString("3754869");
set_field(noLotTypeRules_2_1_1, MinLotSize_21, LotTypeRules_NoLotTypeRules_21);
      all_values.push_back(LotTypeRules_NoLotTypeRules_21);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_22;
      set_field(noLotTypeRules_2_1_2, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_22);
      FIX::MinLotSize MinLotSize_22;
      MinLotSize_22.setString("18943623");
set_field(noLotTypeRules_2_1_2, MinLotSize_22, LotTypeRules_NoLotTypeRules_22);
      all_values.push_back(LotTypeRules_NoLotTypeRules_22);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_10;
    FIX::HighLimitPrice HighLimitPrice_10;
    HighLimitPrice_10.setString("7055414");
set_field(noMarketSegments_0_2, HighLimitPrice_10, PriceLimits_10);
    FIX::LowLimitPrice LowLimitPrice_10;
    LowLimitPrice_10.setString("4391170");
set_field(noMarketSegments_0_2, LowLimitPrice_10, PriceLimits_10);
    set_field(noMarketSegments_0_2, FIX::PriceLimitType{0}, PriceLimits_10);
    FIX::TradingReferencePrice TradingReferencePrice_10;
    TradingReferencePrice_10.setString("11079633");
set_field(noMarketSegments_0_2, TradingReferencePrice_10, PriceLimits_10);
    all_values.push_back(PriceLimits_10);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_17;
      FIX::EndTickPriceRange EndTickPriceRange_17;
      EndTickPriceRange_17.setString("4995461");
set_field(noTickRules_2_1_0, EndTickPriceRange_17, TickRules_NoTickRules_17);
      FIX::StartTickPriceRange StartTickPriceRange_17;
      StartTickPriceRange_17.setString("12237176");
set_field(noTickRules_2_1_0, StartTickPriceRange_17, TickRules_NoTickRules_17);
      FIX::TickIncrement TickIncrement_17;
      TickIncrement_17.setString("14991719");
set_field(noTickRules_2_1_0, TickIncrement_17, TickRules_NoTickRules_17);
      set_field(noTickRules_2_1_0, FIX::TickRuleType{1}, TickRules_NoTickRules_17);
      all_values.push_back(TickRules_NoTickRules_17);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_18;
      FIX::EndTickPriceRange EndTickPriceRange_18;
      EndTickPriceRange_18.setString("16873815");
set_field(noTickRules_2_1_1, EndTickPriceRange_18, TickRules_NoTickRules_18);
      FIX::StartTickPriceRange StartTickPriceRange_18;
      StartTickPriceRange_18.setString("20005273");
set_field(noTickRules_2_1_1, StartTickPriceRange_18, TickRules_NoTickRules_18);
      FIX::TickIncrement TickIncrement_18;
      TickIncrement_18.setString("348310");
set_field(noTickRules_2_1_1, TickIncrement_18, TickRules_NoTickRules_18);
      set_field(noTickRules_2_1_1, FIX::TickRuleType{0}, TickRules_NoTickRules_18);
      all_values.push_back(TickRules_NoTickRules_18);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("6869743");
set_field(noTickRules_2_1_2, EndTickPriceRange_19, TickRules_NoTickRules_19);
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("9907007");
set_field(noTickRules_2_1_2, StartTickPriceRange_19, TickRules_NoTickRules_19);
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("2603661");
set_field(noTickRules_2_1_2, TickIncrement_19, TickRules_NoTickRules_19);
      set_field(noTickRules_2_1_2, FIX::TickRuleType{2}, TickRules_NoTickRules_19);
      all_values.push_back(TickRules_NoTickRules_19);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_19;
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribType{100098349}, NestedInstrumentAttribute_NoNestedInstrAttrib_19);
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribValue{"STRING_1898578087"}, NestedInstrumentAttribute_NoNestedInstrAttrib_19);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_19);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_20;
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribType{1128432409}, NestedInstrumentAttribute_NoNestedInstrAttrib_20);
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribValue{"STRING_1567981307"}, NestedInstrumentAttribute_NoNestedInstrAttrib_20);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_20);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_21;
      set_field(noNestedInstrAttrib_2_1_2, FIX::NestedInstrAttribType{614887280}, NestedInstrumentAttribute_NoNestedInstrAttrib_21);
      set_field(noNestedInstrAttrib_2_1_2, FIX::NestedInstrAttribValue{"STRING_549605710"}, NestedInstrumentAttribute_NoNestedInstrAttrib_21);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_21);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_16);
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_16);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        set_field(noExecInstRules_2_0_2_0, FIX::ExecInstValue{'9'}, ExecInstRules_NoExecInstRules_32);
        all_values.push_back(ExecInstRules_NoExecInstRules_32);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_37;
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_37);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDFeedType{"STRING_1630397078"}, MarketDataFeedTypes_NoMDFeedTypes_37);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MarketDepth{1949636995}, MarketDataFeedTypes_NoMDFeedTypes_37);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_37);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_38;
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_38);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDFeedType{"STRING_590876822"}, MarketDataFeedTypes_NoMDFeedTypes_38);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MarketDepth{518211617}, MarketDataFeedTypes_NoMDFeedTypes_38);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_38);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        set_field(noMatchRules_2_0_2_0, FIX::MatchAlgorithm{"STRING_1814594487"}, MatchRules_NoMatchRules_35);
        set_field(noMatchRules_2_0_2_0, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_35);
        all_values.push_back(MatchRules_NoMatchRules_35);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_36;
        set_field(noMatchRules_2_0_2_1, FIX::MatchAlgorithm{"STRING_162686230"}, MatchRules_NoMatchRules_36);
        set_field(noMatchRules_2_0_2_1, FIX::MatchType{"STRING_S1"}, MatchRules_NoMatchRules_36);
        all_values.push_back(MatchRules_NoMatchRules_36);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_37;
        set_field(noMatchRules_2_0_2_2, FIX::MatchAlgorithm{"STRING_1870427289"}, MatchRules_NoMatchRules_37);
        set_field(noMatchRules_2_0_2_2, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_37);
        all_values.push_back(MatchRules_NoMatchRules_37);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_37;
        set_field(noOrdTypeRules_2_0_2_0, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_37);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_38;
        set_field(noOrdTypeRules_2_0_2_1, FIX::OrdType{'D'}, OrdTypeRules_NoOrdTypeRules_38);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        set_field(noTimeInForceRules_2_0_2_0, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_31);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        set_field(noTimeInForceRules_2_0_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_32);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_17;
      set_field(noTradingSessionRules_2_1_1, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_17);
      set_field(noTradingSessionRules_2_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_17);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_17);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        set_field(noExecInstRules_2_1_2_0, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_33);
        all_values.push_back(ExecInstRules_NoExecInstRules_33);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        set_field(noExecInstRules_2_1_2_1, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_34);
        all_values.push_back(ExecInstRules_NoExecInstRules_34);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_39;
        set_field(noMDFeedTypes_2_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_39);
        set_field(noMDFeedTypes_2_1_2_0, FIX::MDFeedType{"STRING_523098858"}, MarketDataFeedTypes_NoMDFeedTypes_39);
        set_field(noMDFeedTypes_2_1_2_0, FIX::MarketDepth{392599335}, MarketDataFeedTypes_NoMDFeedTypes_39);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_39);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_40;
        set_field(noMDFeedTypes_2_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_40);
        set_field(noMDFeedTypes_2_1_2_1, FIX::MDFeedType{"STRING_1447954483"}, MarketDataFeedTypes_NoMDFeedTypes_40);
        set_field(noMDFeedTypes_2_1_2_1, FIX::MarketDepth{1903119289}, MarketDataFeedTypes_NoMDFeedTypes_40);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_40);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_41;
        set_field(noMDFeedTypes_2_1_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_41);
        set_field(noMDFeedTypes_2_1_2_2, FIX::MDFeedType{"STRING_930867913"}, MarketDataFeedTypes_NoMDFeedTypes_41);
        set_field(noMDFeedTypes_2_1_2_2, FIX::MarketDepth{1705272637}, MarketDataFeedTypes_NoMDFeedTypes_41);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_41);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_38;
        set_field(noMatchRules_2_1_2_0, FIX::MatchAlgorithm{"STRING_1521744735"}, MatchRules_NoMatchRules_38);
        set_field(noMatchRules_2_1_2_0, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_38);
        all_values.push_back(MatchRules_NoMatchRules_38);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_39;
        set_field(noMatchRules_2_1_2_1, FIX::MatchAlgorithm{"STRING_920328436"}, MatchRules_NoMatchRules_39);
        set_field(noMatchRules_2_1_2_1, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_39);
        all_values.push_back(MatchRules_NoMatchRules_39);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_39;
        set_field(noOrdTypeRules_2_1_2_0, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_39);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        set_field(noTimeInForceRules_2_1_2_0, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_33);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        set_field(noTimeInForceRules_2_1_2_1, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_34);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_18;
      set_field(noTradingSessionRules_2_1_2, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_18);
      set_field(noTradingSessionRules_2_1_2, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_18);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_18);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_35;
        set_field(noExecInstRules_2_2_2_0, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_35);
        all_values.push_back(ExecInstRules_NoExecInstRules_35);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_36;
        set_field(noExecInstRules_2_2_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_36);
        all_values.push_back(ExecInstRules_NoExecInstRules_36);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_37;
        set_field(noExecInstRules_2_2_2_2, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_37);
        all_values.push_back(ExecInstRules_NoExecInstRules_37);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_42;
        set_field(noMDFeedTypes_2_2_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_42);
        set_field(noMDFeedTypes_2_2_2_0, FIX::MDFeedType{"STRING_886770586"}, MarketDataFeedTypes_NoMDFeedTypes_42);
        set_field(noMDFeedTypes_2_2_2_0, FIX::MarketDepth{2054627269}, MarketDataFeedTypes_NoMDFeedTypes_42);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_42);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_43;
        set_field(noMDFeedTypes_2_2_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_43);
        set_field(noMDFeedTypes_2_2_2_1, FIX::MDFeedType{"STRING_135860951"}, MarketDataFeedTypes_NoMDFeedTypes_43);
        set_field(noMDFeedTypes_2_2_2_1, FIX::MarketDepth{1908471962}, MarketDataFeedTypes_NoMDFeedTypes_43);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_43);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_40;
        set_field(noMatchRules_2_2_2_0, FIX::MatchAlgorithm{"STRING_528460286"}, MatchRules_NoMatchRules_40);
        set_field(noMatchRules_2_2_2_0, FIX::MatchType{"STRING_M3"}, MatchRules_NoMatchRules_40);
        all_values.push_back(MatchRules_NoMatchRules_40);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_41;
        set_field(noMatchRules_2_2_2_1, FIX::MatchAlgorithm{"STRING_990137194"}, MatchRules_NoMatchRules_41);
        set_field(noMatchRules_2_2_2_1, FIX::MatchType{"STRING_A1"}, MatchRules_NoMatchRules_41);
        all_values.push_back(MatchRules_NoMatchRules_41);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_42;
        set_field(noMatchRules_2_2_2_2, FIX::MatchAlgorithm{"STRING_1343049725"}, MatchRules_NoMatchRules_42);
        set_field(noMatchRules_2_2_2_2, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_42);
        all_values.push_back(MatchRules_NoMatchRules_42);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_40;
        set_field(noOrdTypeRules_2_2_2_0, FIX::OrdType{'K'}, OrdTypeRules_NoOrdTypeRules_40);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_2.addGroup(noOrdTypeRules_2_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        set_field(noTimeInForceRules_2_2_2_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_35);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_36;
        set_field(noTimeInForceRules_2_2_2_1, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_36);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_18;
      FIX::EndStrikePxRange EndStrikePxRange_18;
      EndStrikePxRange_18.setString("20112697");
set_field(noStrikeRules_2_1_0, EndStrikePxRange_18, StrikeRules_NoStrikeRules_18);
      FIX::StartStrikePxRange StartStrikePxRange_18;
      StartStrikePxRange_18.setString("8450846");
set_field(noStrikeRules_2_1_0, StartStrikePxRange_18, StrikeRules_NoStrikeRules_18);
      set_field(noStrikeRules_2_1_0, FIX::StrikeExerciseStyle{732502428}, StrikeRules_NoStrikeRules_18);
      FIX::StrikeIncrement StrikeIncrement_18;
      StrikeIncrement_18.setString("16801139");
set_field(noStrikeRules_2_1_0, StrikeIncrement_18, StrikeRules_NoStrikeRules_18);
      set_field(noStrikeRules_2_1_0, FIX::StrikeRuleID{"STRING_2125616595"}, StrikeRules_NoStrikeRules_18);
      all_values.push_back(StrikeRules_NoStrikeRules_18);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_40;
        set_field(noMaturityRules_2_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1758876073"}, MaturityRules_NoMaturityRules_40);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_40);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrement{42970304}, MaturityRules_NoMaturityRules_40);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_40);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityRuleID{"STRING_339201622"}, MaturityRules_NoMaturityRules_40);
        set_field(noMaturityRules_2_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1465521976"}, MaturityRules_NoMaturityRules_40);
        all_values.push_back(MaturityRules_NoMaturityRules_40);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_41;
        set_field(noMaturityRules_2_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_490740376"}, MaturityRules_NoMaturityRules_41);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_41);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrement{1372665597}, MaturityRules_NoMaturityRules_41);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_41);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityRuleID{"STRING_1361833159"}, MaturityRules_NoMaturityRules_41);
        set_field(noMaturityRules_2_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1133653911"}, MaturityRules_NoMaturityRules_41);
        all_values.push_back(MaturityRules_NoMaturityRules_41);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_42;
        set_field(noMaturityRules_2_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1199490588"}, MaturityRules_NoMaturityRules_42);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_42);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearIncrement{1457651359}, MaturityRules_NoMaturityRules_42);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_42);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityRuleID{"STRING_26905726"}, MaturityRules_NoMaturityRules_42);
        set_field(noMaturityRules_2_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_653217436"}, MaturityRules_NoMaturityRules_42);
        all_values.push_back(MaturityRules_NoMaturityRules_42);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_19;
      FIX::EndStrikePxRange EndStrikePxRange_19;
      EndStrikePxRange_19.setString("19631492");
set_field(noStrikeRules_2_1_1, EndStrikePxRange_19, StrikeRules_NoStrikeRules_19);
      FIX::StartStrikePxRange StartStrikePxRange_19;
      StartStrikePxRange_19.setString("20162742");
set_field(noStrikeRules_2_1_1, StartStrikePxRange_19, StrikeRules_NoStrikeRules_19);
      set_field(noStrikeRules_2_1_1, FIX::StrikeExerciseStyle{1642442615}, StrikeRules_NoStrikeRules_19);
      FIX::StrikeIncrement StrikeIncrement_19;
      StrikeIncrement_19.setString("11109317");
set_field(noStrikeRules_2_1_1, StrikeIncrement_19, StrikeRules_NoStrikeRules_19);
      set_field(noStrikeRules_2_1_1, FIX::StrikeRuleID{"STRING_1934159814"}, StrikeRules_NoStrikeRules_19);
      all_values.push_back(StrikeRules_NoStrikeRules_19);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_43;
        set_field(noMaturityRules_2_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1447569913"}, MaturityRules_NoMaturityRules_43);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_43);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrement{102113567}, MaturityRules_NoMaturityRules_43);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_43);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityRuleID{"STRING_1330576137"}, MaturityRules_NoMaturityRules_43);
        set_field(noMaturityRules_2_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_80246515"}, MaturityRules_NoMaturityRules_43);
        all_values.push_back(MaturityRules_NoMaturityRules_43);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_44;
        set_field(noMaturityRules_2_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_2012068912"}, MaturityRules_NoMaturityRules_44);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_44);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearIncrement{379645853}, MaturityRules_NoMaturityRules_44);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_44);
        set_field(noMaturityRules_2_1_2_1, FIX::MaturityRuleID{"STRING_239871665"}, MaturityRules_NoMaturityRules_44);
        set_field(noMaturityRules_2_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_718847475"}, MaturityRules_NoMaturityRules_44);
        all_values.push_back(MaturityRules_NoMaturityRules_44);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_45;
        set_field(noMaturityRules_2_1_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1373077545"}, MaturityRules_NoMaturityRules_45);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_45);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearIncrement{1944819683}, MaturityRules_NoMaturityRules_45);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_45);
        set_field(noMaturityRules_2_1_2_2, FIX::MaturityRuleID{"STRING_240436271"}, MaturityRules_NoMaturityRules_45);
        set_field(noMaturityRules_2_1_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1159169195"}, MaturityRules_NoMaturityRules_45);
        all_values.push_back(MaturityRules_NoMaturityRules_45);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_32;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1042081117"}, SpreadOrBenchmarkCurveData_32);
  FIX::BenchmarkPrice BenchmarkPrice_32;
  BenchmarkPrice_32.setString("14820709");
set_field(msg, BenchmarkPrice_32, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkPriceType{928884719}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1695298554"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1297736590"}, SpreadOrBenchmarkCurveData_32);
  FIX::Spread Spread_32;
  Spread_32.setString("7976753");
set_field(msg, Spread_32, SpreadOrBenchmarkCurveData_32);
  all_values.push_back(SpreadOrBenchmarkCurveData_32);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_57;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_ISSUESIZE"}, Stipulations_NoStipulations_57);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_584351528"}, Stipulations_NoStipulations_57);
    all_values.push_back(Stipulations_NoStipulations_57);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_123;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1708754645"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{234813762}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_549400023"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1741343338}, UnderlyingInstrument_123);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
    UnderlyingAdjustedQuantity_123.setString("15653899");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_123, UnderlyingInstrument_123);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
    UnderlyingAllocationPercent_123.setString("65.380000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_123, UnderlyingInstrument_123);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
    UnderlyingAttachmentPoint_123.setString("86.030000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_359874814"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1009292391"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1513484172"}, UnderlyingInstrument_123);
    FIX::UnderlyingCapValue UnderlyingCapValue_123;
    UnderlyingCapValue_123.setString("5997464");
set_field(noUnderlyings_0_0, UnderlyingCapValue_123, UnderlyingInstrument_123);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
    UnderlyingCashAmount_123.setString("17281398");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_123);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
    UnderlyingContractMultiplier_123.setString("13303585");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1525475902}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1337337563"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1570794793"}, UnderlyingInstrument_123);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
    UnderlyingCouponRate_123.setString("14.490000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_921767321"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_123);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
    UnderlyingCurrentValue_123.setString("19638484");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_123, UnderlyingInstrument_123);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
    UnderlyingDetachmentPoint_123.setString("53.520000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_123, UnderlyingInstrument_123);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
    UnderlyingDirtyPrice_123.setString("2205415");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_123, UnderlyingInstrument_123);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
    UnderlyingEndPrice_123.setString("15116633");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_123, UnderlyingInstrument_123);
    FIX::UnderlyingEndValue UnderlyingEndValue_123;
    UnderlyingEndValue_123.setString("14955619");
set_field(noUnderlyings_0_0, UnderlyingEndValue_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1018216875}, UnderlyingInstrument_123);
    FIX::UnderlyingFXRate UnderlyingFXRate_123;
    UnderlyingFXRate_123.setString("5544372");
set_field(noUnderlyings_0_0, UnderlyingFXRate_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_123);
    FIX::UnderlyingFactor UnderlyingFactor_123;
    UnderlyingFactor_123.setString("16025684");
set_field(noUnderlyings_0_0, UnderlyingFactor_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1001723674}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1318017672"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1837382165"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1551123698"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_911877363"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1255288417"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_33286588"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_370322318"}, UnderlyingInstrument_123);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
    UnderlyingNotionalPercentageOutstanding_123.setString("32.320000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_123);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
    UnderlyingOriginalNotionalPercentageOutstanding_123.setString("64.900000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_67426064"}, UnderlyingInstrument_123);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
    UnderlyingPriceUnitOfMeasureQty_123.setString("6232351");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{475400911}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1397784586}, UnderlyingInstrument_123);
    FIX::UnderlyingPx UnderlyingPx_123;
    UnderlyingPx_123.setString("12274");
set_field(noUnderlyings_0_0, UnderlyingPx_123, UnderlyingInstrument_123);
    FIX::UnderlyingQty UnderlyingQty_123;
    UnderlyingQty_123.setString("18127384");
set_field(noUnderlyings_0_0, UnderlyingQty_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_821095731"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_538388901"}, UnderlyingInstrument_123);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
    UnderlyingRepurchaseRate_123.setString("21.480000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1684333737}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1977529343"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_403386939"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1882159089"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_50587208"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1915050284"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1230237384"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1068804083"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_322003854"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_839500411"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_123);
    FIX::UnderlyingStartValue UnderlyingStartValue_123;
    UnderlyingStartValue_123.setString("13237275");
set_field(noUnderlyings_0_0, UnderlyingStartValue_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_10034435"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_123);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
    UnderlyingStrikePrice_123.setString("9219117");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_123, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1469075773"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_760654167"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1292234116"}, UnderlyingInstrument_123);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_936755357"}, UnderlyingInstrument_123);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
    UnderlyingUnitOfMeasureQty_123.setString("18032331");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_123, UnderlyingInstrument_123);
    all_values.push_back(UnderlyingInstrument_123);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1004181421"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_278984698"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1503957869"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_254482359"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1169212696"}, UnderlyingStipulations_NoUnderlyingStips_247);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1075578091"}, UnderlyingStipulations_NoUnderlyingStips_247);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1756234844"}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{648646747}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_347103621"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{699233956}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1927188419"}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1768038039}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_269357768"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{144443230}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_124;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1425436154"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{279392204}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_358230586"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{5320085}, UnderlyingInstrument_124);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
    UnderlyingAdjustedQuantity_124.setString("12013040");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_124, UnderlyingInstrument_124);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
    UnderlyingAllocationPercent_124.setString("63.590000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_124, UnderlyingInstrument_124);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
    UnderlyingAttachmentPoint_124.setString("42.530000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_346054471"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_616578069"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_421723752"}, UnderlyingInstrument_124);
    FIX::UnderlyingCapValue UnderlyingCapValue_124;
    UnderlyingCapValue_124.setString("13746114");
set_field(noUnderlyings_0_1, UnderlyingCapValue_124, UnderlyingInstrument_124);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
    UnderlyingCashAmount_124.setString("16207594");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_124);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
    UnderlyingContractMultiplier_124.setString("7310856");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1875241850}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_980920601"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1900298347"}, UnderlyingInstrument_124);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
    UnderlyingCouponRate_124.setString("62.930000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1799521653"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_124);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
    UnderlyingCurrentValue_124.setString("3006847");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_124, UnderlyingInstrument_124);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
    UnderlyingDetachmentPoint_124.setString("76.780000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_124, UnderlyingInstrument_124);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
    UnderlyingDirtyPrice_124.setString("17628680");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_124, UnderlyingInstrument_124);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
    UnderlyingEndPrice_124.setString("9999187");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_124, UnderlyingInstrument_124);
    FIX::UnderlyingEndValue UnderlyingEndValue_124;
    UnderlyingEndValue_124.setString("13008924");
set_field(noUnderlyings_0_1, UnderlyingEndValue_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1192725452}, UnderlyingInstrument_124);
    FIX::UnderlyingFXRate UnderlyingFXRate_124;
    UnderlyingFXRate_124.setString("6204731");
set_field(noUnderlyings_0_1, UnderlyingFXRate_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_124);
    FIX::UnderlyingFactor UnderlyingFactor_124;
    UnderlyingFactor_124.setString("14620832");
set_field(noUnderlyings_0_1, UnderlyingFactor_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{764916330}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_680553581"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1741475424"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1123146916"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_685873666"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_795295779"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_802969627"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1451847919"}, UnderlyingInstrument_124);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
    UnderlyingNotionalPercentageOutstanding_124.setString("2.500000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_124);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
    UnderlyingOriginalNotionalPercentageOutstanding_124.setString("16.720000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_368478031"}, UnderlyingInstrument_124);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
    UnderlyingPriceUnitOfMeasureQty_124.setString("8928235");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{426796474}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1099563682}, UnderlyingInstrument_124);
    FIX::UnderlyingPx UnderlyingPx_124;
    UnderlyingPx_124.setString("6205817");
set_field(noUnderlyings_0_1, UnderlyingPx_124, UnderlyingInstrument_124);
    FIX::UnderlyingQty UnderlyingQty_124;
    UnderlyingQty_124.setString("14077170");
set_field(noUnderlyings_0_1, UnderlyingQty_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_852378381"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1423918034"}, UnderlyingInstrument_124);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
    UnderlyingRepurchaseRate_124.setString("50.800000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{213944276}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_692198859"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1360439833"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1735131954"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_307583305"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_212874893"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_888540755"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1500308757"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_833347993"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_143658182"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_124);
    FIX::UnderlyingStartValue UnderlyingStartValue_124;
    UnderlyingStartValue_124.setString("15982643");
set_field(noUnderlyings_0_1, UnderlyingStartValue_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_824211763"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_124);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
    UnderlyingStrikePrice_124.setString("15100854");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_124, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1204195885"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1376897219"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_814449701"}, UnderlyingInstrument_124);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_198062487"}, UnderlyingInstrument_124);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
    UnderlyingUnitOfMeasureQty_124.setString("6489612");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_124, UnderlyingInstrument_124);
    all_values.push_back(UnderlyingInstrument_124);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_566540519"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1541784806"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_967334199"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1666104201"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_14882899"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_227567627"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1438800933"}, UnderlyingStipulations_NoUnderlyingStips_248);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1287322707"}, UnderlyingStipulations_NoUnderlyingStips_248);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_584943211"}, UnderlyingStipulations_NoUnderlyingStips_249);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_2130999792"}, UnderlyingStipulations_NoUnderlyingStips_249);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_500278892"}, UnderlyingStipulations_NoUnderlyingStips_250);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_172591518"}, UnderlyingStipulations_NoUnderlyingStips_250);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_713153786"}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1791408207}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1204790455"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{458832889}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_27;
  FIX::Yield Yield_27;
  Yield_27.setString("24.550000");
set_field(msg, Yield_27, YieldData_27);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_2029002218"}, YieldData_27);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_867732996"}, YieldData_27);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
  YieldRedemptionPrice_27.setString("15712100");
set_field(msg, YieldRedemptionPrice_27, YieldData_27);
  set_field(msg, FIX::YieldRedemptionPriceType{1391604000}, YieldData_27);
  set_field(msg, FIX::YieldType{"STRING_PUT"}, YieldData_27);
  all_values.push_back(YieldData_27);
  all_compo_names.insert(".");

  // header
  multiset<string> header_82;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_82);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_58570053"}, header_82);
  set_header_field(msg.getHeader(), FIX::BodyLength{122507721}, header_82);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1449584885"}, header_82);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_599107778"}, header_82);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_689048240"}, header_82);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_843886043"}, header_82);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1566441977}, header_82);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_82);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{858768943}, header_82);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1794009604"}, header_82);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_578667728"}, header_82);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_150086228"}, header_82);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(4, 13, 56, 10, 8, 2016)}, header_82);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_82);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_82);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1546299474"}, header_82);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1454641539}, header_82);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_527459272"}, header_82);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_396098281"}, header_82);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1336160109"}, header_82);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(7, 1, 21, 21, 11, 2000)}, header_82);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2070033182"}, header_82);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1237958292"}, header_82);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2131193462"}, header_82);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_766435577"}, header_82);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{656916622}, header_82);
  all_values.push_back(header_82);
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
