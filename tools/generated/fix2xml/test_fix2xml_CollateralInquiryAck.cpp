#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralInquiryAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_0;
  set_field(msg, FIX::Account{"STRING_1828344313"}, CollateralInquiryAck_0);
  set_field(msg, FIX::AccountType{1}, CollateralInquiryAck_0);
  set_field(msg, FIX::ClOrdID{"STRING_462316750"}, CollateralInquiryAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1073622366"}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryID{"STRING_1945805935"}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryResult{5}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryStatus{1}, CollateralInquiryAck_0);
  set_field(msg, FIX::Currency{"JPY"}, CollateralInquiryAck_0);
  set_field(msg, FIX::EncodedText{"DATA_1019933094"}, CollateralInquiryAck_0);
  set_field(msg, FIX::EncodedTextLen{297453536}, CollateralInquiryAck_0);
  set_field(msg, FIX::OrderID{"STRING_912475905"}, CollateralInquiryAck_0);
  set_field(msg, FIX::QtyType{1}, CollateralInquiryAck_0);
  FIX::Quantity Quantity_7;
  Quantity_7.setString("19486589");
set_field(msg, Quantity_7, CollateralInquiryAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_40909575"}, CollateralInquiryAck_0);
  set_field(msg, FIX::ResponseTransportType{1}, CollateralInquiryAck_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1563525860"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_76957510"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1625681634"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_726055989"}, CollateralInquiryAck_0);
  set_field(msg, FIX::Text{"STRING_1182318821"}, CollateralInquiryAck_0);
  set_field(msg, FIX::TotNumReports{535795563}, CollateralInquiryAck_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, CollateralInquiryAck_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, CollateralInquiryAck_0);
  all_values.push_back(CollateralInquiryAck_0);

  all_compo_names.insert("CollateralInquiryAck");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_3;
    set_field(noCollInquiryQualifier_0_0, FIX::CollInquiryQualifier{4}, CollInqQualGrp_NoCollInquiryQualifier_3);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_3);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_4;
    set_field(noCollInquiryQualifier_0_1, FIX::CollInquiryQualifier{5}, CollInqQualGrp_NoCollInquiryQualifier_4);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_4);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_5;
    set_field(noCollInquiryQualifier_0_2, FIX::CollInquiryQualifier{1}, CollInqQualGrp_NoCollInquiryQualifier_5);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_5);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_675970435"}, ExecCollGrp_NoExecs_3);
    all_values.push_back(ExecCollGrp_NoExecs_3);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  set_field(msg, FIX::AgreementCurrency{"CHF"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1138287185"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementDesc{"STRING_307801545"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementID{"STRING_2124680182"}, FinancingDetails_5);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_5);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1272246466"}, FinancingDetails_5);
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("52.560000");
set_field(msg, MarginRatio_5, FinancingDetails_5);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_829456245"}, FinancingDetails_5);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_5);
  all_values.push_back(FinancingDetails_5);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_13;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1741932150"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{356654598}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2119284055"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1782841726}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1045633395"}, InstrumentLeg_13);
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("15353262");
set_field(noLegs_0_0, LegContractMultiplier_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1859799236}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_523831381"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1025841642"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_438371577"}, InstrumentLeg_13);
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("2.030000");
set_field(noLegs_0_0, LegCouponRate_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1561637205"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_428683350"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{290695124}, InstrumentLeg_13);
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("17181947");
set_field(noLegs_0_0, LegFactor_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2129485512}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_652895349"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_246681585"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1363664691"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_831769596"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1384968770"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1671466236"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_808966131"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_663754634"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'7'}, InstrumentLeg_13);
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("6821377");
set_field(noLegs_0_0, LegOptionRatio_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1493210879"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_940924966"}, InstrumentLeg_13);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("8527628");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegProduct{1087659382}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1297579564}, InstrumentLeg_13);
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("8245632");
set_field(noLegs_0_0, LegRatioQty_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_723017460"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_195729312"}, InstrumentLeg_13);
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("59.100000");
set_field(noLegs_0_0, LegRepurchaseRate_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{435333048}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_719560693"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1238247552"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_873704625"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_278227248"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_652401110"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1466159449"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSide{'6'}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1081084460"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_13);
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("10630863");
set_field(noLegs_0_0, LegStrikePrice_13, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_262266274"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_501588520"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_279267367"}, InstrumentLeg_13);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1094035871"}, InstrumentLeg_13);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("18865572");
set_field(noLegs_0_0, LegUnitOfMeasureQty_13, InstrumentLeg_13);
    all_values.push_back(InstrumentLeg_13);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1903002002"}, LegSecAltIDGrp_NoLegSecurityAltID_27);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_402828277"}, LegSecAltIDGrp_NoLegSecurityAltID_27);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_599479009"}, LegSecAltIDGrp_NoLegSecurityAltID_28);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_437656093"}, LegSecAltIDGrp_NoLegSecurityAltID_28);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("91.560000");
set_field(msg, AttachmentPoint_10, Instrument_10);
  set_field(msg, FIX::CFICode{"STRING_1540403975"}, Instrument_10);
  set_field(msg, FIX::CPProgram{99}, Instrument_10);
  set_field(msg, FIX::CPRegType{"STRING_836214890"}, Instrument_10);
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("6904998");
set_field(msg, CapPrice_10, Instrument_10);
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("21149822");
set_field(msg, ContractMultiplier_10, Instrument_10);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_10);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_886229204"}, Instrument_10);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_179904528"}, Instrument_10);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1994565398"}, Instrument_10);
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("98.970000");
set_field(msg, CouponRate_10, Instrument_10);
  set_field(msg, FIX::CreditRating{"STRING_1418152081"}, Instrument_10);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_720786375"}, Instrument_10);
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("71.460000");
set_field(msg, DetachmentPoint_10, Instrument_10);
  set_field(msg, FIX::EncodedIssuer{"DATA_2070553191"}, Instrument_10);
  set_field(msg, FIX::EncodedIssuerLen{39462176}, Instrument_10);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_420729283"}, Instrument_10);
  set_field(msg, FIX::EncodedSecurityDescLen{1004154003}, Instrument_10);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_10);
  FIX::Factor Factor_10;
  Factor_10.setString("6756362");
set_field(msg, Factor_10, Instrument_10);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_10);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_10);
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("11772247");
set_field(msg, FloorPrice_10, Instrument_10);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_10);
  set_field(msg, FIX::InstrRegistry{"STRING_1005135247"}, Instrument_10);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_10);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2274003"}, Instrument_10);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_760653601"}, Instrument_10);
  set_field(msg, FIX::Issuer{"STRING_1319126659"}, Instrument_10);
  set_field(msg, FIX::ListMethod{0}, Instrument_10);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1198309694"}, Instrument_10);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1067682168"}, Instrument_10);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2142156988"}, Instrument_10);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_341245022"}, Instrument_10);
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("19038970");
set_field(msg, MinPriceIncrement_10, Instrument_10);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("6851732");
set_field(msg, MinPriceIncrementAmount_10, Instrument_10);
  set_field(msg, FIX::NTPositionLimit{308743641}, Instrument_10);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("57.610000");
set_field(msg, NotionalPercentageOutstanding_10, Instrument_10);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_10);
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("4886481");
set_field(msg, OptPayoutAmount_10, Instrument_10);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_10);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("86.850000");
set_field(msg, OriginalNotionalPercentageOutstanding_10, Instrument_10);
  set_field(msg, FIX::Pool{"STRING_1906800250"}, Instrument_10);
  set_field(msg, FIX::PositionLimit{1883513887}, Instrument_10);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_10);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1829869793"}, Instrument_10);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("19229760");
set_field(msg, PriceUnitOfMeasureQty_10, Instrument_10);
  set_field(msg, FIX::Product{7}, Instrument_10);
  set_field(msg, FIX::ProductComplex{"STRING_686540149"}, Instrument_10);
  set_field(msg, FIX::PutOrCall{1}, Instrument_10);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1862607686"}, Instrument_10);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_606296829"}, Instrument_10);
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("85.420000");
set_field(msg, RepurchaseRate_10, Instrument_10);
  set_field(msg, FIX::RepurchaseTerm{892348777}, Instrument_10);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_10);
  set_field(msg, FIX::SecurityDesc{"STRING_340560141"}, Instrument_10);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1808647160"}, Instrument_10);
  set_field(msg, FIX::SecurityGroup{"STRING_807594879"}, Instrument_10);
  set_field(msg, FIX::SecurityID{"STRING_1101213743"}, Instrument_10);
  set_field(msg, FIX::SecurityIDSource{"STRING_4"}, Instrument_10);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_10);
  set_field(msg, FIX::SecuritySubType{"STRING_152039789"}, Instrument_10);
  set_field(msg, FIX::SecurityType{"STRING_COFO"}, Instrument_10);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_10);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_10);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1804385750"}, Instrument_10);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2089194464"}, Instrument_10);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_10);
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("15131132");
set_field(msg, StrikeMultiplier_10, Instrument_10);
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("12906766");
set_field(msg, StrikePrice_10, Instrument_10);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_10);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("82.890000");
set_field(msg, StrikePriceBoundaryPrecision_10, Instrument_10);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_10);
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("18713056");
set_field(msg, StrikeValue_10, Instrument_10);
  set_field(msg, FIX::Symbol{"STRING_1161580473"}, Instrument_10);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_10);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_10);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_10);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_10);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("10711235");
set_field(msg, UnitOfMeasureQty_10, Instrument_10);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_10);
  all_values.push_back(Instrument_10);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("8085411");
set_field(noComplexEvents_0_0, ComplexEventPrice_19, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("85.820000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_19, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("18483223");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_19, ComplexEvents_NoComplexEvents_19);
    all_values.push_back(ComplexEvents_NoComplexEvents_19);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 2, 4, 6, 9, 2012)}, ComplexEventDates_NoComplexEventDates_36);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 52, 46, 2, 11, 2003)}, ComplexEventDates_NoComplexEventDates_36);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 0, 59)}, ComplexEventTimes_NoComplexEventTimes_85);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 29, 53)}, ComplexEventTimes_NoComplexEventTimes_85);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 10, 1)}, ComplexEventTimes_NoComplexEventTimes_86);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 58, 39)}, ComplexEventTimes_NoComplexEventTimes_86);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);
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
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_821875585"}, EvntGrp_NoEvents_26);
    FIX::EventPx EventPx_26;
    EventPx_26.setString("7743267");
set_field(noEvents_0_0, EventPx_26, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2010707244"}, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 4, 7, 5, 2, 2011)}, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventType{4}, EvntGrp_NoEvents_26);
    all_values.push_back(EvntGrp_NoEvents_26);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_27;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_989588043"}, EvntGrp_NoEvents_27);
    FIX::EventPx EventPx_27;
    EventPx_27.setString("18015095");
set_field(noEvents_0_1, EventPx_27, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventText{"STRING_978467195"}, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(5, 27, 41, 26, 3, 2016)}, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventType{9}, EvntGrp_NoEvents_27);
    all_values.push_back(EvntGrp_NoEvents_27);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1431989258"}, InstrumentParties_NoInstrumentParties_19);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_19);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1925554787}, InstrumentParties_NoInstrumentParties_19);
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1008575049"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{747068258}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_977164737"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{862748361}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1568943843"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1751491531}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_725971957"}, InstrumentParties_NoInstrumentParties_20);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_20);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1385720261}, InstrumentParties_NoInstrumentParties_20);
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_758246005"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{852398790}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1218377658"}, SecAltIDGrp_NoSecurityAltID_26);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_139318846"}, SecAltIDGrp_NoSecurityAltID_26);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_659920097"}, SecAltIDGrp_NoSecurityAltID_27);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_872403594"}, SecAltIDGrp_NoSecurityAltID_27);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1117786041"}, SecurityXML_20);
  set_field(msg, FIX::SecurityXMLLen{375333959}, SecurityXML_20);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_452703184"}, SecurityXML_20);
  all_values.push_back(SecurityXML_20);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1165125580"}, Parties_NoPartyIDs_26);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_26);
    set_field(noPartyIDs_0_0, FIX::PartyRole{41}, Parties_NoPartyIDs_26);
    all_values.push_back(Parties_NoPartyIDs_26);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1379130934"}, PtysSubGrp_NoPartySubIDs_58);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_58);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_1138561725"}, TrdCollGrp_NoTrades_5);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_1711445080"}, TrdCollGrp_NoTrades_5);
    all_values.push_back(TrdCollGrp_NoTrades_5);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_1635830679"}, TrdCollGrp_NoTrades_6);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_2147136774"}, TrdCollGrp_NoTrades_6);
    all_values.push_back(TrdCollGrp_NoTrades_6);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_15;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_465511769"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{862401487}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1879973533"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{69519652}, UnderlyingInstrument_15);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("15883734");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_15, UnderlyingInstrument_15);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("89.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_15, UnderlyingInstrument_15);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("99.130000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_2128330098"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1080234949"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_160155055"}, UnderlyingInstrument_15);
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("17986621");
set_field(noUnderlyings_0_0, UnderlyingCapValue_15, UnderlyingInstrument_15);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("1511289");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_15);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("3110986");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1023532554}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1417259942"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_686432561"}, UnderlyingInstrument_15);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("57.380000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_409407403"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_15);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("16853849");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_15, UnderlyingInstrument_15);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("81.360000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_15, UnderlyingInstrument_15);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("20860789");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_15, UnderlyingInstrument_15);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("14712752");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_15, UnderlyingInstrument_15);
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("5845873");
set_field(noUnderlyings_0_0, UnderlyingEndValue_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1077157048}, UnderlyingInstrument_15);
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("10352367");
set_field(noUnderlyings_0_0, UnderlyingFXRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_15);
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("10768101");
set_field(noUnderlyings_0_0, UnderlyingFactor_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1346266414}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_538446190"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1939211662"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1078756299"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_607965842"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1380101459"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1400745243"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2063205755"}, UnderlyingInstrument_15);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("79.090000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_15);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("71.620000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1012126413"}, UnderlyingInstrument_15);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("4846255");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{375351064}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1323225015}, UnderlyingInstrument_15);
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("15081580");
set_field(noUnderlyings_0_0, UnderlyingPx_15, UnderlyingInstrument_15);
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("17926110");
set_field(noUnderlyings_0_0, UnderlyingQty_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2009657577"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_836910150"}, UnderlyingInstrument_15);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("47.610000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1713732071}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1543858187"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1739919759"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_68326559"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1482453510"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1063711402"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_652913949"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_412126911"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_2098948126"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_725848370"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_15);
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("12977308");
set_field(noUnderlyings_0_0, UnderlyingStartValue_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1264294560"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_15);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("18722604");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_513282911"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1629748787"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1787982509"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1874230820"}, UnderlyingInstrument_15);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("19632453");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_15, UnderlyingInstrument_15);
    all_values.push_back(UnderlyingInstrument_15);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_738873586"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_300387189"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2062098601"}, UnderlyingStipulations_NoUnderlyingStips_25);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1808545248"}, UnderlyingStipulations_NoUnderlyingStips_25);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1884338094"}, UnderlyingStipulations_NoUnderlyingStips_26);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1924272530"}, UnderlyingStipulations_NoUnderlyingStips_26);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_497971750"}, UnderlyingStipulations_NoUnderlyingStips_27);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1938872855"}, UnderlyingStipulations_NoUnderlyingStips_27);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2041829937"}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1558847513}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_447536721"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{64277814}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1788926711"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{399001199}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_790126184"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1130380149}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1696732091"}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{263561601}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1779197498"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{776844513}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1408000774"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1419696359}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_503591685"}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1136072382}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1524149647"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1227799470}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1157080225"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1185211247}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_964653916"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{933869107}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1683182998"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{756043123}, UnderlyingInstrument_16);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("2769064");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_16, UnderlyingInstrument_16);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("92.870000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_16, UnderlyingInstrument_16);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("84.420000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1835753926"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_806845439"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_587405164"}, UnderlyingInstrument_16);
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("19000317");
set_field(noUnderlyings_0_1, UnderlyingCapValue_16, UnderlyingInstrument_16);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("4482885");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_16);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("5426742");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1578668651}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_535654807"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_449611372"}, UnderlyingInstrument_16);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("2.530000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_313906794"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_16);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("17219075");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_16, UnderlyingInstrument_16);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("15.810000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_16, UnderlyingInstrument_16);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("9751828");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_16, UnderlyingInstrument_16);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("7981863");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_16, UnderlyingInstrument_16);
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("4896103");
set_field(noUnderlyings_0_1, UnderlyingEndValue_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{70164427}, UnderlyingInstrument_16);
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("1748523");
set_field(noUnderlyings_0_1, UnderlyingFXRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_16);
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("12272446");
set_field(noUnderlyings_0_1, UnderlyingFactor_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1360063624}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_534580053"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_13630111"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_895762974"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1290623177"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_290536524"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_325808614"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1430491619"}, UnderlyingInstrument_16);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("4.500000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_16);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("67.830000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1878838542"}, UnderlyingInstrument_16);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("15809425");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{856819499}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{274029170}, UnderlyingInstrument_16);
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("10121275");
set_field(noUnderlyings_0_1, UnderlyingPx_16, UnderlyingInstrument_16);
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("13924743");
set_field(noUnderlyings_0_1, UnderlyingQty_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_723640542"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_706874164"}, UnderlyingInstrument_16);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("11.000000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{804965764}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1178465282"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1280805020"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_158503697"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_6164438"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_2078991398"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_648114013"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_76328865"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_106360127"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_218040150"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_16);
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("14664237");
set_field(noUnderlyings_0_1, UnderlyingStartValue_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_752620204"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_16);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("20432433");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1607740153"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_540511692"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1326251352"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1586546955"}, UnderlyingInstrument_16);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("16731657");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_16, UnderlyingInstrument_16);
    all_values.push_back(UnderlyingInstrument_16);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1317901850"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1106624653"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_2053483987"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1591931020"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_2118752213"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1298474645"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_678142729"}, UnderlyingStipulations_NoUnderlyingStips_28);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_857372097"}, UnderlyingStipulations_NoUnderlyingStips_28);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1856608012"}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1131557377}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2069684867"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1779671390}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1939101315"}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1997711540}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1494985097"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{602848096}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_16;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_16);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1709688175"}, header_16);
  set_header_field(msg.getHeader(), FIX::BodyLength{498607829}, header_16);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1872651317"}, header_16);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_102716219"}, header_16);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1824859182"}, header_16);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1311714625"}, header_16);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1775881965}, header_16);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_16);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{482132827}, header_16);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_735022970"}, header_16);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_780040361"}, header_16);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2074063847"}, header_16);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 54, 25, 7, 3, 2003)}, header_16);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_16);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_16);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_808847431"}, header_16);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{701298143}, header_16);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1831466913"}, header_16);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_600465098"}, header_16);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_729859489"}, header_16);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 58, 54, 26, 7, 2017)}, header_16);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1685735116"}, header_16);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1889765333"}, header_16);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_313042617"}, header_16);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_849966093"}, header_16);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1518163650}, header_16);
  all_values.push_back(header_16);
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
