#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_0;
  set_field(msg, FIX::Account{"STRING_1391441696"}, CollateralRequest_0);
  set_field(msg, FIX::AccountType{7}, CollateralRequest_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("15929831");
set_field(msg, AccruedInterestAmt_6, CollateralRequest_0);
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("17007573");
set_field(msg, CashOutstanding_3, CollateralRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_1935986589"}, CollateralRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1823439415"}, CollateralRequest_0);
  set_field(msg, FIX::CollAsgnReason{4}, CollateralRequest_0);
  set_field(msg, FIX::CollReqID{"STRING_792727422"}, CollateralRequest_0);
  set_field(msg, FIX::Currency{"CHF"}, CollateralRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_198448501"}, CollateralRequest_0);
  set_field(msg, FIX::EncodedTextLen{1164808557}, CollateralRequest_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("19662912");
set_field(msg, EndAccruedInterestAmt_6, CollateralRequest_0);
  FIX::EndCash EndCash_6;
  EndCash_6.setString("15376630");
set_field(msg, EndCash_6, CollateralRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(11, 42, 41, 5, 10, 2011)}, CollateralRequest_0);
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("11743378");
set_field(msg, MarginExcess_3, CollateralRequest_0);
  set_field(msg, FIX::OrderID{"STRING_160503871"}, CollateralRequest_0);
  FIX::Price Price_6;
  Price_6.setString("11463068");
set_field(msg, Price_6, CollateralRequest_0);
  set_field(msg, FIX::PriceType{17}, CollateralRequest_0);
  set_field(msg, FIX::QtyType{2}, CollateralRequest_0);
  FIX::Quantity Quantity_9;
  Quantity_9.setString("14685289");
set_field(msg, Quantity_9, CollateralRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_156664294"}, CollateralRequest_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_682758324"}, CollateralRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_695076213"}, CollateralRequest_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, CollateralRequest_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2074200020"}, CollateralRequest_0);
  set_field(msg, FIX::Side{'1'}, CollateralRequest_0);
  FIX::StartCash StartCash_6;
  StartCash_6.setString("501171");
set_field(msg, StartCash_6, CollateralRequest_0);
  set_field(msg, FIX::Text{"STRING_1627473735"}, CollateralRequest_0);
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("9510051");
set_field(msg, TotalNetValue_3, CollateralRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, CollateralRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, CollateralRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 44, 4, 4, 11, 2005)}, CollateralRequest_0);
  all_values.push_back(CollateralRequest_0);

  all_compo_names.insert("CollateralRequest");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1901102493"}, ExecCollGrp_NoExecs_5);
    all_values.push_back(ExecCollGrp_NoExecs_5);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_81703059"}, ExecCollGrp_NoExecs_6);
    all_values.push_back(ExecCollGrp_NoExecs_6);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_660582337"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementDesc{"STRING_1716855812"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementID{"STRING_546239484"}, FinancingDetails_7);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_7);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_715679048"}, FinancingDetails_7);
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("70.070000");
set_field(msg, MarginRatio_7, FinancingDetails_7);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1882439287"}, FinancingDetails_7);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_7);
  all_values.push_back(FinancingDetails_7);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_16;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_417713963"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{731800607}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_616225326"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{344430336}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1894302847"}, InstrumentLeg_16);
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("6663424");
set_field(noLegs_0_0, LegContractMultiplier_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1971904071}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_697824381"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_392415349"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1006507706"}, InstrumentLeg_16);
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("33.360000");
set_field(noLegs_0_0, LegCouponRate_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1948774269"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_374974449"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{587768676}, InstrumentLeg_16);
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("14211313");
set_field(noLegs_0_0, LegFactor_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2107125166}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_341387522"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1502834397"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1684851229"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1860772809"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_15933086"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1254223393"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_259528645"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_837019295"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_16);
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("1144720");
set_field(noLegs_0_0, LegOptionRatio_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_571974934"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2006626835"}, InstrumentLeg_16);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("1260796");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegProduct{989688898}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPutOrCall{590943794}, InstrumentLeg_16);
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("7423049");
set_field(noLegs_0_0, LegRatioQty_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1334119234"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_337762994"}, InstrumentLeg_16);
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("74.390000");
set_field(noLegs_0_0, LegRepurchaseRate_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1158539657}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1035587375"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1801062789"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_17563715"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1329660711"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1602353410"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1979039925"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1977327859"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_16);
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("19369693");
set_field(noLegs_0_0, LegStrikePrice_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_760712476"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_47429944"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1474336959"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_474001637"}, InstrumentLeg_16);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("633630");
set_field(noLegs_0_0, LegUnitOfMeasureQty_16, InstrumentLeg_16);
    all_values.push_back(InstrumentLeg_16);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_733530282"}, LegSecAltIDGrp_NoLegSecurityAltID_35);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_900382325"}, LegSecAltIDGrp_NoLegSecurityAltID_35);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_403495497"}, LegSecAltIDGrp_NoLegSecurityAltID_36);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_848002287"}, LegSecAltIDGrp_NoLegSecurityAltID_36);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1472357260"}, LegSecAltIDGrp_NoLegSecurityAltID_37);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_262638685"}, LegSecAltIDGrp_NoLegSecurityAltID_37);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_974081946"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{314562510}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_853582479"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1716386931}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1648681744"}, InstrumentLeg_17);
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("11913454");
set_field(noLegs_0_1, LegContractMultiplier_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{977550722}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_659737753"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_79449200"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_631129863"}, InstrumentLeg_17);
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("14.680000");
set_field(noLegs_0_1, LegCouponRate_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1409109912"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_680057768"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{2063327485}, InstrumentLeg_17);
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("9281826");
set_field(noLegs_0_1, LegFactor_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1372136963}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1852813215"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1688895175"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1419566907"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1179666526"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_15413164"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1482929937"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1760743230"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_748943447"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_17);
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("167550");
set_field(noLegs_0_1, LegOptionRatio_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1596945734"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1708185875"}, InstrumentLeg_17);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("2793937");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegProduct{423544032}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2022748385}, InstrumentLeg_17);
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("11329762");
set_field(noLegs_0_1, LegRatioQty_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_2139930963"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1523946481"}, InstrumentLeg_17);
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("80.690000");
set_field(noLegs_0_1, LegRepurchaseRate_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{969998038}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_36200586"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_256287270"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1601127901"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_713502054"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1665397182"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1687127527"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_197971302"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_17);
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("15701082");
set_field(noLegs_0_1, LegStrikePrice_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1308300931"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1691954026"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_842191524"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_340483809"}, InstrumentLeg_17);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("17073671");
set_field(noLegs_0_1, LegUnitOfMeasureQty_17, InstrumentLeg_17);
    all_values.push_back(InstrumentLeg_17);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_2101227039"}, LegSecAltIDGrp_NoLegSecurityAltID_38);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_308826990"}, LegSecAltIDGrp_NoLegSecurityAltID_38);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_413466429"}, LegSecAltIDGrp_NoLegSecurityAltID_39);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_2117982118"}, LegSecAltIDGrp_NoLegSecurityAltID_39);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1905772724"}, LegSecAltIDGrp_NoLegSecurityAltID_40);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_2121652304"}, LegSecAltIDGrp_NoLegSecurityAltID_40);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_18;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_249892235"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{181833109}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1996917041"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1382868479}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_174280424"}, InstrumentLeg_18);
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("13733798");
set_field(noLegs_0_2, LegContractMultiplier_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1559706548}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1144278462"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1409580460"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1815993818"}, InstrumentLeg_18);
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("27.160000");
set_field(noLegs_0_2, LegCouponRate_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_2123082514"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1197958665"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1531878655}, InstrumentLeg_18);
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("17405379");
set_field(noLegs_0_2, LegFactor_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1201017516}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_954503272"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_901355242"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_745487895"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1796694797"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1241839051"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_305371438"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1974332611"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1195582442"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_18);
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("2403153");
set_field(noLegs_0_2, LegOptionRatio_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1166080912"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_372487504"}, InstrumentLeg_18);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("2144840");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegProduct{1415973147}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPutOrCall{554320613}, InstrumentLeg_18);
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("639174");
set_field(noLegs_0_2, LegRatioQty_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_651357978"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_728601038"}, InstrumentLeg_18);
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("73.150000");
set_field(noLegs_0_2, LegRepurchaseRate_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{63580879}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1872879500"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_699394127"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1879574697"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_323318568"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_674992993"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1065998402"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSide{'4'}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1872951658"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_18);
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("9264855");
set_field(noLegs_0_2, LegStrikePrice_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1404896681"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_955294716"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1671973422"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1054107830"}, InstrumentLeg_18);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("496501");
set_field(noLegs_0_2, LegUnitOfMeasureQty_18, InstrumentLeg_18);
    all_values.push_back(InstrumentLeg_18);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_880956793"}, LegSecAltIDGrp_NoLegSecurityAltID_41);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1245232561"}, LegSecAltIDGrp_NoLegSecurityAltID_41);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_444059640"}, LegSecAltIDGrp_NoLegSecurityAltID_42);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1121272185"}, LegSecAltIDGrp_NoLegSecurityAltID_42);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("98.260000");
set_field(msg, AttachmentPoint_12, Instrument_12);
  set_field(msg, FIX::CFICode{"STRING_816547144"}, Instrument_12);
  set_field(msg, FIX::CPProgram{99}, Instrument_12);
  set_field(msg, FIX::CPRegType{"STRING_1679802973"}, Instrument_12);
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("13708677");
set_field(msg, CapPrice_12, Instrument_12);
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("13996736");
set_field(msg, ContractMultiplier_12, Instrument_12);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_12);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2099468796"}, Instrument_12);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_689487341"}, Instrument_12);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_247258183"}, Instrument_12);
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("46.480000");
set_field(msg, CouponRate_12, Instrument_12);
  set_field(msg, FIX::CreditRating{"STRING_1388881468"}, Instrument_12);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2126832880"}, Instrument_12);
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("95.690000");
set_field(msg, DetachmentPoint_12, Instrument_12);
  set_field(msg, FIX::EncodedIssuer{"DATA_2063874461"}, Instrument_12);
  set_field(msg, FIX::EncodedIssuerLen{1045347634}, Instrument_12);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_461584732"}, Instrument_12);
  set_field(msg, FIX::EncodedSecurityDescLen{1789342472}, Instrument_12);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_12);
  FIX::Factor Factor_12;
  Factor_12.setString("5155242");
set_field(msg, Factor_12, Instrument_12);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_12);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_12);
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("14708189");
set_field(msg, FloorPrice_12, Instrument_12);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_12);
  set_field(msg, FIX::InstrRegistry{"STRING_1807261907"}, Instrument_12);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_12);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2070178985"}, Instrument_12);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_540735053"}, Instrument_12);
  set_field(msg, FIX::Issuer{"STRING_618217956"}, Instrument_12);
  set_field(msg, FIX::ListMethod{1}, Instrument_12);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1662007238"}, Instrument_12);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_882047782"}, Instrument_12);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1183302121"}, Instrument_12);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_850279824"}, Instrument_12);
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("4143671");
set_field(msg, MinPriceIncrement_12, Instrument_12);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("4066862");
set_field(msg, MinPriceIncrementAmount_12, Instrument_12);
  set_field(msg, FIX::NTPositionLimit{102469850}, Instrument_12);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("44.120000");
set_field(msg, NotionalPercentageOutstanding_12, Instrument_12);
  set_field(msg, FIX::OptAttribute{'3'}, Instrument_12);
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("7919571");
set_field(msg, OptPayoutAmount_12, Instrument_12);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_12);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("23.800000");
set_field(msg, OriginalNotionalPercentageOutstanding_12, Instrument_12);
  set_field(msg, FIX::Pool{"STRING_33355012"}, Instrument_12);
  set_field(msg, FIX::PositionLimit{824651827}, Instrument_12);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_12);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2097229474"}, Instrument_12);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("18699994");
set_field(msg, PriceUnitOfMeasureQty_12, Instrument_12);
  set_field(msg, FIX::Product{12}, Instrument_12);
  set_field(msg, FIX::ProductComplex{"STRING_1739088298"}, Instrument_12);
  set_field(msg, FIX::PutOrCall{1}, Instrument_12);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1013860888"}, Instrument_12);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_159949001"}, Instrument_12);
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("9.340000");
set_field(msg, RepurchaseRate_12, Instrument_12);
  set_field(msg, FIX::RepurchaseTerm{337196164}, Instrument_12);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_12);
  set_field(msg, FIX::SecurityDesc{"STRING_1631189194"}, Instrument_12);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1857665207"}, Instrument_12);
  set_field(msg, FIX::SecurityGroup{"STRING_175478463"}, Instrument_12);
  set_field(msg, FIX::SecurityID{"STRING_24440599"}, Instrument_12);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_12);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_12);
  set_field(msg, FIX::SecuritySubType{"STRING_1686447837"}, Instrument_12);
  set_field(msg, FIX::SecurityType{"STRING_?"}, Instrument_12);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_12);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_12);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1624814406"}, Instrument_12);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2132221793"}, Instrument_12);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_12);
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("3434095");
set_field(msg, StrikeMultiplier_12, Instrument_12);
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("12836710");
set_field(msg, StrikePrice_12, Instrument_12);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_12);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("19.040000");
set_field(msg, StrikePriceBoundaryPrecision_12, Instrument_12);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_12);
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("17453295");
set_field(msg, StrikeValue_12, Instrument_12);
  set_field(msg, FIX::Symbol{"STRING_416213853"}, Instrument_12);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_12);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_12);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_12);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_12);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("5386186");
set_field(msg, UnitOfMeasureQty_12, Instrument_12);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_12);
  all_values.push_back(Instrument_12);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("1181239");
set_field(noComplexEvents_0_0, ComplexEventPrice_22, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("50.960000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_22, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("20181756");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_22, ComplexEvents_NoComplexEvents_22);
    all_values.push_back(ComplexEvents_NoComplexEvents_22);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 52, 28, 18, 3, 2013)}, ComplexEventDates_NoComplexEventDates_43);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 17, 10, 21, 3, 2001)}, ComplexEventDates_NoComplexEventDates_43);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 28, 42)}, ComplexEventTimes_NoComplexEventTimes_103);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 58, 27)}, ComplexEventTimes_NoComplexEventTimes_103);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 51, 15)}, ComplexEventTimes_NoComplexEventTimes_104);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 42, 30)}, ComplexEventTimes_NoComplexEventTimes_104);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 14, 12)}, ComplexEventTimes_NoComplexEventTimes_105);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 17, 4)}, ComplexEventTimes_NoComplexEventTimes_105);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 7, 41, 16, 3, 2002)}, ComplexEventDates_NoComplexEventDates_44);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 30, 2, 13, 11, 2006)}, ComplexEventDates_NoComplexEventDates_44);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 8, 52)}, ComplexEventTimes_NoComplexEventTimes_106);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 34, 48)}, ComplexEventTimes_NoComplexEventTimes_106);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 2, 13)}, ComplexEventTimes_NoComplexEventTimes_107);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 22, 0)}, ComplexEventTimes_NoComplexEventTimes_107);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 7, 7)}, ComplexEventTimes_NoComplexEventTimes_108);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 1, 49)}, ComplexEventTimes_NoComplexEventTimes_108);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 52, 22, 18, 9, 2013)}, ComplexEventDates_NoComplexEventDates_45);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 31, 39, 0, 2, 2014)}, ComplexEventDates_NoComplexEventDates_45);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 38, 4)}, ComplexEventTimes_NoComplexEventTimes_109);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 18, 28)}, ComplexEventTimes_NoComplexEventTimes_109);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 28, 1)}, ComplexEventTimes_NoComplexEventTimes_110);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 3, 10)}, ComplexEventTimes_NoComplexEventTimes_110);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 54, 45)}, ComplexEventTimes_NoComplexEventTimes_111);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 16, 17)}, ComplexEventTimes_NoComplexEventTimes_111);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("15100102");
set_field(noComplexEvents_0_1, ComplexEventPrice_23, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("16.220000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_23, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("3727271");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_23, ComplexEvents_NoComplexEvents_23);
    all_values.push_back(ComplexEvents_NoComplexEvents_23);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 23, 2, 13, 11, 2017)}, ComplexEventDates_NoComplexEventDates_46);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 43, 9, 10, 5, 2004)}, ComplexEventDates_NoComplexEventDates_46);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 59, 40)}, ComplexEventTimes_NoComplexEventTimes_112);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 56, 10)}, ComplexEventTimes_NoComplexEventTimes_112);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 58, 2)}, ComplexEventTimes_NoComplexEventTimes_113);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 52, 25)}, ComplexEventTimes_NoComplexEventTimes_113);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 40, 22)}, ComplexEventTimes_NoComplexEventTimes_114);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 37, 35)}, ComplexEventTimes_NoComplexEventTimes_114);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 44, 42, 16, 6, 2005)}, ComplexEventDates_NoComplexEventDates_47);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 47, 27, 1, 6, 2006)}, ComplexEventDates_NoComplexEventDates_47);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 58, 51)}, ComplexEventTimes_NoComplexEventTimes_115);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 44, 15)}, ComplexEventTimes_NoComplexEventTimes_115);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 55, 32)}, ComplexEventTimes_NoComplexEventTimes_116);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 9, 7)}, ComplexEventTimes_NoComplexEventTimes_116);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);
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
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_30;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_609611061"}, EvntGrp_NoEvents_30);
    FIX::EventPx EventPx_30;
    EventPx_30.setString("2303522");
set_field(noEvents_0_0, EventPx_30, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventText{"STRING_930934652"}, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 20, 1, 9, 8, 2017)}, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventType{8}, EvntGrp_NoEvents_30);
    all_values.push_back(EvntGrp_NoEvents_30);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_31;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1798692616"}, EvntGrp_NoEvents_31);
    FIX::EventPx EventPx_31;
    EventPx_31.setString("10898465");
set_field(noEvents_0_1, EventPx_31, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventText{"STRING_783481706"}, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 24, 49, 27, 8, 2007)}, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventType{3}, EvntGrp_NoEvents_31);
    all_values.push_back(EvntGrp_NoEvents_31);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_32;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1870760838"}, EvntGrp_NoEvents_32);
    FIX::EventPx EventPx_32;
    EventPx_32.setString("16412984");
set_field(noEvents_0_2, EventPx_32, EvntGrp_NoEvents_32);
    set_field(noEvents_0_2, FIX::EventText{"STRING_387463770"}, EvntGrp_NoEvents_32);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(15, 32, 44, 15, 11, 2005)}, EvntGrp_NoEvents_32);
    set_field(noEvents_0_2, FIX::EventType{16}, EvntGrp_NoEvents_32);
    all_values.push_back(EvntGrp_NoEvents_32);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_197782511"}, InstrumentParties_NoInstrumentParties_24);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_24);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{875989926}, InstrumentParties_NoInstrumentParties_24);
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_872113061"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{810580865}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_371462974"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1672422008}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_31;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1461309499"}, SecAltIDGrp_NoSecurityAltID_31);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_308420067"}, SecAltIDGrp_NoSecurityAltID_31);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_32;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1904081060"}, SecAltIDGrp_NoSecurityAltID_32);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1288871628"}, SecAltIDGrp_NoSecurityAltID_32);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_33;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_89832223"}, SecAltIDGrp_NoSecurityAltID_33);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_749125801"}, SecAltIDGrp_NoSecurityAltID_33);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  set_field(msg, FIX::SecurityXML{"XMLDATA_573559028"}, SecurityXML_24);
  set_field(msg, FIX::SecurityXMLLen{1307096751}, SecurityXML_24);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1571257107"}, SecurityXML_24);
  all_values.push_back(SecurityXML_24);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_21;
    FIX::MiscFeeAmt MiscFeeAmt_21;
    MiscFeeAmt_21.setString("10303739");
set_field(noMiscFees_0_0, MiscFeeAmt_21, MiscFeesGrp_NoMiscFees_21);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_21);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_21);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_4"}, MiscFeesGrp_NoMiscFees_21);
    all_values.push_back(MiscFeesGrp_NoMiscFees_21);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_597129979"}, Parties_NoPartyIDs_28);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_28);
    set_field(noPartyIDs_0_0, FIX::PartyRole{56}, Parties_NoPartyIDs_28);
    all_values.push_back(Parties_NoPartyIDs_28);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_160546895"}, PtysSubGrp_NoPartySubIDs_62);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_62);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1959854856"}, PtysSubGrp_NoPartySubIDs_63);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_63);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2137884299"}, Parties_NoPartyIDs_29);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_29);
    set_field(noPartyIDs_0_1, FIX::PartyRole{43}, Parties_NoPartyIDs_29);
    all_values.push_back(Parties_NoPartyIDs_29);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1421363775"}, PtysSubGrp_NoPartySubIDs_64);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_64);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1262771351"}, Parties_NoPartyIDs_30);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_30);
    set_field(noPartyIDs_0_2, FIX::PartyRole{21}, Parties_NoPartyIDs_30);
    all_values.push_back(Parties_NoPartyIDs_30);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_2024061255"}, PtysSubGrp_NoPartySubIDs_65);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_65);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1768494564"}, PtysSubGrp_NoPartySubIDs_66);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_66);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_67;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_590255783"}, PtysSubGrp_NoPartySubIDs_67);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_67);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_67);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_964635730"}, SpreadOrBenchmarkCurveData_6);
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("16624283");
set_field(msg, BenchmarkPrice_6, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkPriceType{580555811}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1608913974"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_112074731"}, SpreadOrBenchmarkCurveData_6);
  FIX::Spread Spread_6;
  Spread_6.setString("7810028");
set_field(msg, Spread_6, SpreadOrBenchmarkCurveData_6);
  all_values.push_back(SpreadOrBenchmarkCurveData_6);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_RESTRICTED"}, Stipulations_NoStipulations_14);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_941549795"}, Stipulations_NoStipulations_14);
    all_values.push_back(Stipulations_NoStipulations_14);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_MAXSUBS"}, Stipulations_NoStipulations_15);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1686518284"}, Stipulations_NoStipulations_15);
    all_values.push_back(Stipulations_NoStipulations_15);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_TEXT"}, Stipulations_NoStipulations_16);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_127602509"}, Stipulations_NoStipulations_16);
    all_values.push_back(Stipulations_NoStipulations_16);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_936857143"}, TrdCollGrp_NoTrades_9);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_928584026"}, TrdCollGrp_NoTrades_9);
    all_values.push_back(TrdCollGrp_NoTrades_9);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_10;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_2010299213"}, TrdCollGrp_NoTrades_10);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1969247533"}, TrdCollGrp_NoTrades_10);
    all_values.push_back(TrdCollGrp_NoTrades_10);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_11;
    set_field(noTrades_0_2, FIX::SecondaryTradeReportID{"STRING_43871729"}, TrdCollGrp_NoTrades_11);
    set_field(noTrades_0_2, FIX::TradeReportID{"STRING_598005192"}, TrdCollGrp_NoTrades_11);
    all_values.push_back(TrdCollGrp_NoTrades_11);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_S"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(10, 56, 52, 11, 1, 2012)}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_255525813"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{6}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_TMO"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_D"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(1, 51, 55, 23, 12, 2004)}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1004551640"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    set_field(noUnderlyings_0_0, FIX::CollAction{2}, UndInstrmtCollGrp_NoUnderlyings_2);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_2001087431"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{182543090}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1977007396"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{451608975}, UnderlyingInstrument_19);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("13451174");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_19, UnderlyingInstrument_19);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("42.410000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_19, UnderlyingInstrument_19);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("17.740000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1790850805"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1577015650"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1850911208"}, UnderlyingInstrument_19);
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("6793563");
set_field(noUnderlyings_0_0, UnderlyingCapValue_19, UnderlyingInstrument_19);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("13060514");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_19);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("11884915");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1144943524}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1397327105"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1212571530"}, UnderlyingInstrument_19);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("14.250000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1114283245"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_19);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("18540305");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_19, UnderlyingInstrument_19);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("43.880000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_19, UnderlyingInstrument_19);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("6118755");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_19, UnderlyingInstrument_19);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("5834960");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_19, UnderlyingInstrument_19);
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("6133971");
set_field(noUnderlyings_0_0, UnderlyingEndValue_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{35797587}, UnderlyingInstrument_19);
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("15880476");
set_field(noUnderlyings_0_0, UnderlyingFXRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_19);
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("3965767");
set_field(noUnderlyings_0_0, UnderlyingFactor_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1373699660}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_457789168"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_579119883"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1203223409"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_909398143"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1924237315"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2095987650"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1835589917"}, UnderlyingInstrument_19);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("44.730000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_19);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("74.770000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_99477139"}, UnderlyingInstrument_19);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("6840874");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{533335121}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1287968685}, UnderlyingInstrument_19);
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("18290309");
set_field(noUnderlyings_0_0, UnderlyingPx_19, UnderlyingInstrument_19);
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("19306622");
set_field(noUnderlyings_0_0, UnderlyingQty_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_353056568"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1245938740"}, UnderlyingInstrument_19);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("18.230000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1701782813}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1863297318"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_604008693"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_765843554"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_327689196"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1187504694"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1379240722"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_363486783"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_628068687"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1983426107"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_19);
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("20017683");
set_field(noUnderlyings_0_0, UnderlyingStartValue_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_293731628"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_19);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("12031297");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1115937127"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1006012111"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_891236041"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_536057952"}, UnderlyingInstrument_19);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("3840481");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_19, UnderlyingInstrument_19);
    all_values.push_back(UnderlyingInstrument_19);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_635535091"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1068135553"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_816104991"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1923503777"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_599283569"}, UnderlyingStipulations_NoUnderlyingStips_33);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_129076697"}, UnderlyingStipulations_NoUnderlyingStips_33);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_33);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1995621609"}, UnderlyingStipulations_NoUnderlyingStips_34);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1496745392"}, UnderlyingStipulations_NoUnderlyingStips_34);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1711435279"}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{449219416}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1140775131"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1828460138}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_255127611"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1768843819}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1664402598"}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1623128519}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_206890999"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{533152980}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1013780349"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1322828127}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1539165091"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1905016390}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_18;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_18);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1923213206"}, header_18);
  set_header_field(msg.getHeader(), FIX::BodyLength{40302613}, header_18);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_346937523"}, header_18);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_843865111"}, header_18);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_856407604"}, header_18);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_122957652"}, header_18);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1593547980}, header_18);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_18);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{252034349}, header_18);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1441685941"}, header_18);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_804952918"}, header_18);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2082893859"}, header_18);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(20, 48, 0, 15, 7, 2003)}, header_18);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_18);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_18);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_20113550"}, header_18);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{996003529}, header_18);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1540659294"}, header_18);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_227004550"}, header_18);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1529156509"}, header_18);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 12, 58, 0, 7, 2005)}, header_18);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1608172631"}, header_18);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1540432622"}, header_18);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1061198956"}, header_18);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1731130283"}, header_18);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{986496954}, header_18);
  all_values.push_back(header_18);
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
