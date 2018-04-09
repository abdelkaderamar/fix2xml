#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AssignmentReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_0;
  set_field(msg, FIX::Account{"STRING_105309059"}, AssignmentReport_0);
  set_field(msg, FIX::AccountType{4}, AssignmentReport_0);
  set_field(msg, FIX::AsgnRptID{"STRING_365922173"}, AssignmentReport_0);
  set_field(msg, FIX::AssignmentMethod{'R'}, AssignmentReport_0);
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("11470160");
set_field(msg, AssignmentUnit_0, AssignmentReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1482463361"}, AssignmentReport_0);
  set_field(msg, FIX::Currency{"USD"}, AssignmentReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1684843889"}, AssignmentReport_0);
  set_field(msg, FIX::EncodedTextLen{951043233}, AssignmentReport_0);
  set_field(msg, FIX::ExerciseMethod{'M'}, AssignmentReport_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1053991999"}, AssignmentReport_0);
  set_field(msg, FIX::LastRptRequested{false}, AssignmentReport_0);
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("6080025");
set_field(msg, OpenInterest_0, AssignmentReport_0);
  set_field(msg, FIX::PosReqID{"STRING_1418090076"}, AssignmentReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("13150286");
set_field(msg, PriorSettlPrice_1, AssignmentReport_0);
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("19420561");
set_field(msg, SettlPrice_1, AssignmentReport_0);
  set_field(msg, FIX::SettlPriceType{1}, AssignmentReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_ITD"}, AssignmentReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1830330261"}, AssignmentReport_0);
  set_field(msg, FIX::Text{"STRING_1247924907"}, AssignmentReport_0);
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("10370411");
set_field(msg, ThresholdAmount_0, AssignmentReport_0);
  set_field(msg, FIX::TotNumAssignmentReports{2001750507}, AssignmentReport_0);
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("14304213");
set_field(msg, UnderlyingSettlPrice_0, AssignmentReport_0);
  all_values.push_back(AssignmentReport_0);

  all_compo_names.insert("AssignmentReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  set_field(msg, FIX::ApplID{"STRING_773617391"}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplLastSeqNum{829997612}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_0);
  set_field(msg, FIX::ApplSeqNum{106449599}, ApplicationSequenceControl_0);
  all_values.push_back(ApplicationSequenceControl_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_759412718"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1414668059}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_95871732"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{875669925}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1780590232"}, InstrumentLeg_8);
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("5857590");
set_field(noLegs_0_0, LegContractMultiplier_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2022686004}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1115569946"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1871672176"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_184754728"}, InstrumentLeg_8);
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("1.870000");
set_field(noLegs_0_0, LegCouponRate_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_675231761"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1693294109"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{714450019}, InstrumentLeg_8);
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("9775286");
set_field(noLegs_0_0, LegFactor_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{860839093}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_509022501"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1902841846"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_2015831265"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_191869114"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1003283106"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_905388780"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_46135974"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_286220850"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_8);
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("8761335");
set_field(noLegs_0_0, LegOptionRatio_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_364459027"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1785455770"}, InstrumentLeg_8);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("8666962");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegProduct{1123871745}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1052640181}, InstrumentLeg_8);
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("9625679");
set_field(noLegs_0_0, LegRatioQty_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1999541670"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_685746766"}, InstrumentLeg_8);
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("70.320000");
set_field(noLegs_0_0, LegRepurchaseRate_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1874744026}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1801316712"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1272515561"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2059498755"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_306763251"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1947747322"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_18462625"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1493557783"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_8);
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("2069132");
set_field(noLegs_0_0, LegStrikePrice_8, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1241935145"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_599088602"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_75260845"}, InstrumentLeg_8);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1433804260"}, InstrumentLeg_8);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("16023717");
set_field(noLegs_0_0, LegUnitOfMeasureQty_8, InstrumentLeg_8);
    all_values.push_back(InstrumentLeg_8);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1479940234"}, LegSecAltIDGrp_NoLegSecurityAltID_15);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1888592559"}, LegSecAltIDGrp_NoLegSecurityAltID_15);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_512172149"}, LegSecAltIDGrp_NoLegSecurityAltID_16);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_208590172"}, LegSecAltIDGrp_NoLegSecurityAltID_16);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_105567938"}, LegSecAltIDGrp_NoLegSecurityAltID_17);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_150144272"}, LegSecAltIDGrp_NoLegSecurityAltID_17);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("64.320000");
set_field(msg, AttachmentPoint_7, Instrument_7);
  set_field(msg, FIX::CFICode{"STRING_1229439684"}, Instrument_7);
  set_field(msg, FIX::CPProgram{1}, Instrument_7);
  set_field(msg, FIX::CPRegType{"STRING_2037854425"}, Instrument_7);
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("10814977");
set_field(msg, CapPrice_7, Instrument_7);
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("18885312");
set_field(msg, ContractMultiplier_7, Instrument_7);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_7);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_808758085"}, Instrument_7);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1542364283"}, Instrument_7);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_563729722"}, Instrument_7);
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("31.920000");
set_field(msg, CouponRate_7, Instrument_7);
  set_field(msg, FIX::CreditRating{"STRING_1849127534"}, Instrument_7);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_363993397"}, Instrument_7);
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("58.170000");
set_field(msg, DetachmentPoint_7, Instrument_7);
  set_field(msg, FIX::EncodedIssuer{"DATA_1715329324"}, Instrument_7);
  set_field(msg, FIX::EncodedIssuerLen{1857551180}, Instrument_7);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1472148461"}, Instrument_7);
  set_field(msg, FIX::EncodedSecurityDescLen{411576080}, Instrument_7);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_7);
  FIX::Factor Factor_7;
  Factor_7.setString("5665999");
set_field(msg, Factor_7, Instrument_7);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_7);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_7);
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("20004042");
set_field(msg, FloorPrice_7, Instrument_7);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_7);
  set_field(msg, FIX::InstrRegistry{"STRING_972891232"}, Instrument_7);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_7);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_206661654"}, Instrument_7);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1485063382"}, Instrument_7);
  set_field(msg, FIX::Issuer{"STRING_1541450977"}, Instrument_7);
  set_field(msg, FIX::ListMethod{0}, Instrument_7);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1635207654"}, Instrument_7);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_469253761"}, Instrument_7);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1541669276"}, Instrument_7);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_690508459"}, Instrument_7);
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("3596245");
set_field(msg, MinPriceIncrement_7, Instrument_7);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("4756833");
set_field(msg, MinPriceIncrementAmount_7, Instrument_7);
  set_field(msg, FIX::NTPositionLimit{431556031}, Instrument_7);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("23.480000");
set_field(msg, NotionalPercentageOutstanding_7, Instrument_7);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_7);
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("19739203");
set_field(msg, OptPayoutAmount_7, Instrument_7);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_7);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("46.120000");
set_field(msg, OriginalNotionalPercentageOutstanding_7, Instrument_7);
  set_field(msg, FIX::Pool{"STRING_1675564201"}, Instrument_7);
  set_field(msg, FIX::PositionLimit{578561819}, Instrument_7);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_7);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1243409877"}, Instrument_7);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("2886293");
set_field(msg, PriceUnitOfMeasureQty_7, Instrument_7);
  set_field(msg, FIX::Product{13}, Instrument_7);
  set_field(msg, FIX::ProductComplex{"STRING_1654985957"}, Instrument_7);
  set_field(msg, FIX::PutOrCall{1}, Instrument_7);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_488231552"}, Instrument_7);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_518166991"}, Instrument_7);
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("17.190000");
set_field(msg, RepurchaseRate_7, Instrument_7);
  set_field(msg, FIX::RepurchaseTerm{341152123}, Instrument_7);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_7);
  set_field(msg, FIX::SecurityDesc{"STRING_1170742952"}, Instrument_7);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1674012927"}, Instrument_7);
  set_field(msg, FIX::SecurityGroup{"STRING_1190381388"}, Instrument_7);
  set_field(msg, FIX::SecurityID{"STRING_508322686"}, Instrument_7);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_7);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_7);
  set_field(msg, FIX::SecuritySubType{"STRING_2143530340"}, Instrument_7);
  set_field(msg, FIX::SecurityType{"STRING_MLEG"}, Instrument_7);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_7);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_7);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1896858556"}, Instrument_7);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1372479944"}, Instrument_7);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_7);
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("5094377");
set_field(msg, StrikeMultiplier_7, Instrument_7);
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("9445478");
set_field(msg, StrikePrice_7, Instrument_7);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_7);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("86.800000");
set_field(msg, StrikePriceBoundaryPrecision_7, Instrument_7);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_7);
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("1933438");
set_field(msg, StrikeValue_7, Instrument_7);
  set_field(msg, FIX::Symbol{"STRING_964135461"}, Instrument_7);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_7);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_7);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_7);
  set_field(msg, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_7);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("6875833");
set_field(msg, UnitOfMeasureQty_7, Instrument_7);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_7);
  all_values.push_back(Instrument_7);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("17151507");
set_field(noComplexEvents_0_0, ComplexEventPrice_14, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("79.870000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_14, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_14);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_14);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("4170170");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_14, ComplexEvents_NoComplexEvents_14);
    all_values.push_back(ComplexEvents_NoComplexEvents_14);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 37, 37, 12, 10, 2001)}, ComplexEventDates_NoComplexEventDates_29);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 50, 32, 21, 3, 2016)}, ComplexEventDates_NoComplexEventDates_29);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 38, 19)}, ComplexEventTimes_NoComplexEventTimes_71);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 59, 4)}, ComplexEventTimes_NoComplexEventTimes_71);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 22, 59)}, ComplexEventTimes_NoComplexEventTimes_72);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 44, 52)}, ComplexEventTimes_NoComplexEventTimes_72);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1303408021"}, EvntGrp_NoEvents_17);
    FIX::EventPx EventPx_17;
    EventPx_17.setString("15742362");
set_field(noEvents_0_0, EventPx_17, EvntGrp_NoEvents_17);
    set_field(noEvents_0_0, FIX::EventText{"STRING_921260965"}, EvntGrp_NoEvents_17);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 31, 25, 24, 10, 2003)}, EvntGrp_NoEvents_17);
    set_field(noEvents_0_0, FIX::EventType{10}, EvntGrp_NoEvents_17);
    all_values.push_back(EvntGrp_NoEvents_17);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1748073663"}, EvntGrp_NoEvents_18);
    FIX::EventPx EventPx_18;
    EventPx_18.setString("6805229");
set_field(noEvents_0_1, EventPx_18, EvntGrp_NoEvents_18);
    set_field(noEvents_0_1, FIX::EventText{"STRING_697959845"}, EvntGrp_NoEvents_18);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 43, 11, 25, 9, 2010)}, EvntGrp_NoEvents_18);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_18);
    all_values.push_back(EvntGrp_NoEvents_18);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_2080888929"}, EvntGrp_NoEvents_19);
    FIX::EventPx EventPx_19;
    EventPx_19.setString("18851185");
set_field(noEvents_0_2, EventPx_19, EvntGrp_NoEvents_19);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1898994392"}, EvntGrp_NoEvents_19);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(14, 1, 45, 22, 2, 2008)}, EvntGrp_NoEvents_19);
    set_field(noEvents_0_2, FIX::EventType{16}, EvntGrp_NoEvents_19);
    all_values.push_back(EvntGrp_NoEvents_19);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_708544480"}, InstrumentParties_NoInstrumentParties_14);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_14);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1665333166}, InstrumentParties_NoInstrumentParties_14);
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1351937418"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1291555139}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_227434374"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1392772227}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_892145154"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{907957277}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1431238674"}, SecAltIDGrp_NoSecurityAltID_17);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_496973817"}, SecAltIDGrp_NoSecurityAltID_17);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1780306507"}, SecAltIDGrp_NoSecurityAltID_18);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1647119105"}, SecAltIDGrp_NoSecurityAltID_18);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_19;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_218024582"}, SecAltIDGrp_NoSecurityAltID_19);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1149078848"}, SecAltIDGrp_NoSecurityAltID_19);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  set_field(msg, FIX::SecurityXML{"XMLDATA_766301407"}, SecurityXML_14);
  set_field(msg, FIX::SecurityXMLLen{1812817152}, SecurityXML_14);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1082484129"}, SecurityXML_14);
  all_values.push_back(SecurityXML_14);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1564327896"}, Parties_NoPartyIDs_18);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_18);
    set_field(noPartyIDs_0_0, FIX::PartyRole{60}, Parties_NoPartyIDs_18);
    all_values.push_back(Parties_NoPartyIDs_18);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_638809906"}, PtysSubGrp_NoPartySubIDs_40);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_40);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1965931458"}, PtysSubGrp_NoPartySubIDs_41);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_41);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_178675311"}, PtysSubGrp_NoPartySubIDs_42);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_42);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1800355625"}, Parties_NoPartyIDs_19);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_19);
    set_field(noPartyIDs_0_1, FIX::PartyRole{77}, Parties_NoPartyIDs_19);
    all_values.push_back(Parties_NoPartyIDs_19);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1158012875"}, PtysSubGrp_NoPartySubIDs_43);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_43);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_914640477"}, Parties_NoPartyIDs_20);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_20);
    set_field(noPartyIDs_0_2, FIX::PartyRole{39}, Parties_NoPartyIDs_20);
    all_values.push_back(Parties_NoPartyIDs_20);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_346549879"}, PtysSubGrp_NoPartySubIDs_44);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_44);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("21268563");
set_field(noPosAmt_0_0, PosAmt_7, PositionAmountData_NoPosAmt_7);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_PREM"}, PositionAmountData_NoPosAmt_7);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_390112507"}, PositionAmountData_NoPosAmt_7);
    all_values.push_back(PositionAmountData_NoPosAmt_7);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_8;
    FIX::PosAmt PosAmt_8;
    PosAmt_8.setString("11284515");
set_field(noPosAmt_0_1, PosAmt_8, PositionAmountData_NoPosAmt_8);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_8);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_55446011"}, PositionAmountData_NoPosAmt_8);
    all_values.push_back(PositionAmountData_NoPosAmt_8);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("10724527");
set_field(noPositions_0_0, LongQty_2, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::PosQtyStatus{2}, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::PosType{"STRING_IAS"}, PositionQty_NoPositions_2);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_1026672914"}, PositionQty_NoPositions_2);
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("7131721");
set_field(noPositions_0_0, ShortQty_2, PositionQty_NoPositions_2);
    all_values.push_back(PositionQty_NoPositions_2);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_42;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_306002551"}, NestedParties_NoNestedPartyIDs_42);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_42);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1135806160}, NestedParties_NoNestedPartyIDs_42);
      all_values.push_back(NestedParties_NoNestedPartyIDs_42);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1996378304"}, NstdPtysSubGrp_NoNestedPartySubIDs_89);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{788678138}, NstdPtysSubGrp_NoNestedPartySubIDs_89);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_290753319"}, NstdPtysSubGrp_NoNestedPartySubIDs_90);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{831502539}, NstdPtysSubGrp_NoNestedPartySubIDs_90);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1448766194"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{958181914}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_243041070"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1852067649}, UnderlyingInstrument_8);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("19770064");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_8, UnderlyingInstrument_8);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("88.250000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_8, UnderlyingInstrument_8);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("38.800000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_132102350"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_90243102"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_30506618"}, UnderlyingInstrument_8);
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("20818010");
set_field(noUnderlyings_0_0, UnderlyingCapValue_8, UnderlyingInstrument_8);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("4803556");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_8);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("5028337");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{535801620}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1222410272"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1575286513"}, UnderlyingInstrument_8);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("18.790000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_627595381"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_8);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("6715903");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_8, UnderlyingInstrument_8);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("83.310000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_8, UnderlyingInstrument_8);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("12528839");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_8, UnderlyingInstrument_8);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("18073965");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_8, UnderlyingInstrument_8);
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("12451561");
set_field(noUnderlyings_0_0, UnderlyingEndValue_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1101778601}, UnderlyingInstrument_8);
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("4485910");
set_field(noUnderlyings_0_0, UnderlyingFXRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_8);
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("19332811");
set_field(noUnderlyings_0_0, UnderlyingFactor_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1924475288}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_837192059"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_743979407"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_20032711"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_541776060"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_573502202"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2085671536"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_592909940"}, UnderlyingInstrument_8);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("45.520000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_8);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("65.590000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_639921914"}, UnderlyingInstrument_8);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("5087865");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1782374764}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1142755695}, UnderlyingInstrument_8);
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("10445882");
set_field(noUnderlyings_0_0, UnderlyingPx_8, UnderlyingInstrument_8);
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("8573013");
set_field(noUnderlyings_0_0, UnderlyingQty_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_570558561"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1052680098"}, UnderlyingInstrument_8);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("67.700000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1025034341}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1773944105"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_9003519"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1785512672"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_879344403"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1816400076"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_883185217"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1981123004"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_117507476"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_271611082"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_8);
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("20419827");
set_field(noUnderlyings_0_0, UnderlyingStartValue_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1108803142"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_8);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("16505792");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_936918458"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2000203364"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_96005495"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1642523010"}, UnderlyingInstrument_8);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("20286343");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_8, UnderlyingInstrument_8);
    all_values.push_back(UnderlyingInstrument_8);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_134961276"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_389937306"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_354313170"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1277716972"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1211614558"}, UnderlyingStipulations_NoUnderlyingStips_16);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1848275533"}, UnderlyingStipulations_NoUnderlyingStips_16);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_549027680"}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{2113666081}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_363855250"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{845526836}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_226947628"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1247040467}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_679166193"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{344455104}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1518651550"}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{238954220}, UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_662019299"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{153486048}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_2130550246"}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{6205764}, UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1093977120"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2034840118}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_798494147"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1228938396}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_277293776"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1152807317}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_359171720"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1711819302}, UnderlyingInstrument_9);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("2169382");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_9, UnderlyingInstrument_9);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("36.050000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_9, UnderlyingInstrument_9);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("12.780000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_765965908"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_785789831"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2017723711"}, UnderlyingInstrument_9);
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("13239971");
set_field(noUnderlyings_0_1, UnderlyingCapValue_9, UnderlyingInstrument_9);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("11496450");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_9);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("15509447");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{249201901}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1394933093"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1895399840"}, UnderlyingInstrument_9);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("34.510000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1693536135"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_9);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("2080717");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_9, UnderlyingInstrument_9);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("64.600000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_9, UnderlyingInstrument_9);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("834074");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_9, UnderlyingInstrument_9);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("18070095");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_9, UnderlyingInstrument_9);
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("1465622");
set_field(noUnderlyings_0_1, UnderlyingEndValue_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{162479539}, UnderlyingInstrument_9);
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("7535030");
set_field(noUnderlyings_0_1, UnderlyingFXRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_9);
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("9609736");
set_field(noUnderlyings_0_1, UnderlyingFactor_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1982441412}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_311212471"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2113781004"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_194129485"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_2023031773"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_183235584"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_254093090"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1927089403"}, UnderlyingInstrument_9);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("14.920000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_9);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("94.670000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_125714952"}, UnderlyingInstrument_9);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("420443");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{365612719}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1676659688}, UnderlyingInstrument_9);
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("2912462");
set_field(noUnderlyings_0_1, UnderlyingPx_9, UnderlyingInstrument_9);
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("17605458");
set_field(noUnderlyings_0_1, UnderlyingQty_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1424575880"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2059099707"}, UnderlyingInstrument_9);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("82.990000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1411446293}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_11956906"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1514670086"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1551802753"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_95364352"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1174195982"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1698364978"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_257843891"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1927698998"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1732283673"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_9);
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("17626567");
set_field(noUnderlyings_0_1, UnderlyingStartValue_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2043496144"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_9);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("19190442");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1368350517"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_63395690"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1698650025"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_170068362"}, UnderlyingInstrument_9);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("11032786");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_9, UnderlyingInstrument_9);
    all_values.push_back(UnderlyingInstrument_9);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_295783314"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1145322967"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1714108563"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1972443003"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1436569224"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1327170727"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1348185283"}, UnderlyingStipulations_NoUnderlyingStips_17);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_486285379"}, UnderlyingStipulations_NoUnderlyingStips_17);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1360142190"}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2065300634}, UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1027667799"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1616181964}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1713350433"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{807883149}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_10;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1200981989"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{784684362}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_423056263"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1096994485}, UnderlyingInstrument_10);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("19697992");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_10, UnderlyingInstrument_10);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("88.630000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_10, UnderlyingInstrument_10);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("51.070000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1190666165"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_295754553"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_419721485"}, UnderlyingInstrument_10);
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("13607345");
set_field(noUnderlyings_0_2, UnderlyingCapValue_10, UnderlyingInstrument_10);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("13990331");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_10);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("16565178");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{396872484}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1334842245"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1481477197"}, UnderlyingInstrument_10);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("17.080000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_514529324"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_10);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("10008147");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_10, UnderlyingInstrument_10);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("66.650000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_10, UnderlyingInstrument_10);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("2468018");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_10, UnderlyingInstrument_10);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("8542865");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_10, UnderlyingInstrument_10);
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("10148436");
set_field(noUnderlyings_0_2, UnderlyingEndValue_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1702308428}, UnderlyingInstrument_10);
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("18819543");
set_field(noUnderlyings_0_2, UnderlyingFXRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_10);
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("12681752");
set_field(noUnderlyings_0_2, UnderlyingFactor_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{542353820}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1684523956"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2052859575"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_965410084"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_634034793"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1875175223"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1197768947"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1502589901"}, UnderlyingInstrument_10);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("77.410000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_10);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("13.860000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_131608620"}, UnderlyingInstrument_10);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("7450730");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1543045067}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1788126462}, UnderlyingInstrument_10);
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("11419455");
set_field(noUnderlyings_0_2, UnderlyingPx_10, UnderlyingInstrument_10);
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("7304036");
set_field(noUnderlyings_0_2, UnderlyingQty_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1122120011"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_827903562"}, UnderlyingInstrument_10);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("29.890000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1705648796}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1862046906"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_98264044"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_655191813"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_2108848792"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_952550565"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1670035464"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1663673572"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_687021236"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_6093783"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_10);
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("12293750");
set_field(noUnderlyings_0_2, UnderlyingStartValue_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1690617739"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_10);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("1771688");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_10, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_417432640"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1245070440"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1679758785"}, UnderlyingInstrument_10);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1335790381"}, UnderlyingInstrument_10);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("5911102");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_10, UnderlyingInstrument_10);
    all_values.push_back(UnderlyingInstrument_10);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1467399001"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1336183309"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_850147943"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1108041816"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1580551607"}, UnderlyingStipulations_NoUnderlyingStips_18);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_82678179"}, UnderlyingStipulations_NoUnderlyingStips_18);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_678000948"}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{873111982}, UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_296035140"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{834477126}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1728815558"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1966070604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_350667050"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{268353146}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_10;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_10);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1135032187"}, header_10);
  set_header_field(msg.getHeader(), FIX::BodyLength{1497728203}, header_10);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1515298478"}, header_10);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1824773252"}, header_10);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1545029696"}, header_10);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1692467363"}, header_10);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{94722244}, header_10);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_10);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1224742500}, header_10);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1430512625"}, header_10);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1233726780"}, header_10);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_531845376"}, header_10);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(17, 59, 34, 12, 3, 2002)}, header_10);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_10);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_10);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1581991301"}, header_10);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{637248663}, header_10);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_121843572"}, header_10);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1878026442"}, header_10);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1471725789"}, header_10);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(22, 0, 16, 14, 12, 2010)}, header_10);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_889108968"}, header_10);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_487230983"}, header_10);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_866802880"}, header_10);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_434092683"}, header_10);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{581953227}, header_10);
  all_values.push_back(header_10);
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
