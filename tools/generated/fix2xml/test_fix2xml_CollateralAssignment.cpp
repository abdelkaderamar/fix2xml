#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralAssignment.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralAssignment, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralAssignment msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_0;
  set_field(msg, FIX::Account{"STRING_1969432605"}, CollateralAssignment_0);
  set_field(msg, FIX::AccountType{3}, CollateralAssignment_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("16589202");
set_field(msg, AccruedInterestAmt_3, CollateralAssignment_0);
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("20059766");
set_field(msg, CashOutstanding_0, CollateralAssignment_0);
  set_field(msg, FIX::ClOrdID{"STRING_1862908281"}, CollateralAssignment_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_2099042783"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnID{"STRING_744267710"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnReason{7}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnRefID{"STRING_358254999"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnTransType{4}, CollateralAssignment_0);
  set_field(msg, FIX::CollReqID{"STRING_348607453"}, CollateralAssignment_0);
  set_field(msg, FIX::Currency{"USD"}, CollateralAssignment_0);
  set_field(msg, FIX::EncodedText{"DATA_1555714690"}, CollateralAssignment_0);
  set_field(msg, FIX::EncodedTextLen{705607924}, CollateralAssignment_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("3929089");
set_field(msg, EndAccruedInterestAmt_3, CollateralAssignment_0);
  FIX::EndCash EndCash_3;
  EndCash_3.setString("691632");
set_field(msg, EndCash_3, CollateralAssignment_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(11, 1, 21, 18, 3, 2000)}, CollateralAssignment_0);
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("16134823");
set_field(msg, MarginExcess_0, CollateralAssignment_0);
  set_field(msg, FIX::OrderID{"STRING_1465100409"}, CollateralAssignment_0);
  FIX::Price Price_3;
  Price_3.setString("2079510");
set_field(msg, Price_3, CollateralAssignment_0);
  set_field(msg, FIX::PriceType{11}, CollateralAssignment_0);
  set_field(msg, FIX::QtyType{1}, CollateralAssignment_0);
  FIX::Quantity Quantity_5;
  Quantity_5.setString("13045639");
set_field(msg, Quantity_5, CollateralAssignment_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_986602614"}, CollateralAssignment_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_246560744"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1381190134"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_105053757"}, CollateralAssignment_0);
  set_field(msg, FIX::Side{'G'}, CollateralAssignment_0);
  FIX::StartCash StartCash_3;
  StartCash_3.setString("4495983");
set_field(msg, StartCash_3, CollateralAssignment_0);
  set_field(msg, FIX::Text{"STRING_849321467"}, CollateralAssignment_0);
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("13097515");
set_field(msg, TotalNetValue_0, CollateralAssignment_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, CollateralAssignment_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, CollateralAssignment_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(1, 10, 34, 22, 10, 2004)}, CollateralAssignment_0);
  all_values.push_back(CollateralAssignment_0);

  all_compo_names.insert("CollateralAssignment");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1672390148"}, ExecCollGrp_NoExecs_0);
    all_values.push_back(ExecCollGrp_NoExecs_0);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_221013566"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementDesc{"STRING_466925508"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementID{"STRING_448219760"}, FinancingDetails_3);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_3);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1932025918"}, FinancingDetails_3);
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("8.600000");
set_field(msg, MarginRatio_3, FinancingDetails_3);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1124690427"}, FinancingDetails_3);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_3);
  all_values.push_back(FinancingDetails_3);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2111293041"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{455714802}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1194441340"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{461848591}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_560768559"}, InstrumentLeg_9);
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("1435724");
set_field(noLegs_0_0, LegContractMultiplier_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{911446925}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1410090026"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1453324058"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1719300258"}, InstrumentLeg_9);
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("54.140000");
set_field(noLegs_0_0, LegCouponRate_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_964199462"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2030789556"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1338823114}, InstrumentLeg_9);
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("11051556");
set_field(noLegs_0_0, LegFactor_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1019059221}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_599945423"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_630062190"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_270766987"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1341585633"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_851075756"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_737692495"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1789805393"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_538088029"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_9);
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("2984926");
set_field(noLegs_0_0, LegOptionRatio_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1662778456"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_731388823"}, InstrumentLeg_9);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("1117438");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegProduct{1626587849}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1187103625}, InstrumentLeg_9);
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("13061851");
set_field(noLegs_0_0, LegRatioQty_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2088436440"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1747872184"}, InstrumentLeg_9);
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("76.120000");
set_field(noLegs_0_0, LegRepurchaseRate_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{852399718}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1010478562"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_755598022"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_424216328"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_566080328"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1719797484"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1600474052"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1603103392"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_9);
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("4746789");
set_field(noLegs_0_0, LegStrikePrice_9, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1391758941"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_287738817"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_745445952"}, InstrumentLeg_9);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_585860926"}, InstrumentLeg_9);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("11388145");
set_field(noLegs_0_0, LegUnitOfMeasureQty_9, InstrumentLeg_9);
    all_values.push_back(InstrumentLeg_9);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_228182672"}, LegSecAltIDGrp_NoLegSecurityAltID_18);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1676902602"}, LegSecAltIDGrp_NoLegSecurityAltID_18);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_2005373213"}, LegSecAltIDGrp_NoLegSecurityAltID_19);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_526675277"}, LegSecAltIDGrp_NoLegSecurityAltID_19);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1192197410"}, LegSecAltIDGrp_NoLegSecurityAltID_20);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_589278388"}, LegSecAltIDGrp_NoLegSecurityAltID_20);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_638419089"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{671301611}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1776382013"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1944604242}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_612254404"}, InstrumentLeg_10);
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("13767705");
set_field(noLegs_0_1, LegContractMultiplier_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1246878206}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1464654122"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_239765463"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2002476228"}, InstrumentLeg_10);
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("4.500000");
set_field(noLegs_0_1, LegCouponRate_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_805845792"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1505850377"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1030409808}, InstrumentLeg_10);
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("21336743");
set_field(noLegs_0_1, LegFactor_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1163527005}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1505088774"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1377949667"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1451265822"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_103051078"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1963810593"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_442596748"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1586189526"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_44509617"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_10);
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("14440790");
set_field(noLegs_0_1, LegOptionRatio_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_571184895"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1164213113"}, InstrumentLeg_10);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("20333574");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegProduct{1209603984}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1835514724}, InstrumentLeg_10);
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("16622558");
set_field(noLegs_0_1, LegRatioQty_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1006724578"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_300285480"}, InstrumentLeg_10);
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("27.470000");
set_field(noLegs_0_1, LegRepurchaseRate_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{106119136}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1764939602"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1131308211"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_2108595364"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1506326405"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1937154003"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1535901780"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSide{'7'}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1295520732"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_10);
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("3115640");
set_field(noLegs_0_1, LegStrikePrice_10, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1923916715"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_2064844004"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1762829912"}, InstrumentLeg_10);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2026967793"}, InstrumentLeg_10);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("18811709");
set_field(noLegs_0_1, LegUnitOfMeasureQty_10, InstrumentLeg_10);
    all_values.push_back(InstrumentLeg_10);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1465673672"}, LegSecAltIDGrp_NoLegSecurityAltID_21);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1925680567"}, LegSecAltIDGrp_NoLegSecurityAltID_21);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_29958714"}, LegSecAltIDGrp_NoLegSecurityAltID_22);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_762269116"}, LegSecAltIDGrp_NoLegSecurityAltID_22);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_11;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_349381814"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1194171827}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_648142948"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1558985799}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_882202904"}, InstrumentLeg_11);
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("1629151");
set_field(noLegs_0_2, LegContractMultiplier_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{418226729}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1182488384"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1054457894"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_524345866"}, InstrumentLeg_11);
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("43.390000");
set_field(noLegs_0_2, LegCouponRate_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_38282457"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegCurrency{"USD"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1975436460"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{2021359363}, InstrumentLeg_11);
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("8594907");
set_field(noLegs_0_2, LegFactor_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1123473544}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_292703656"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1546385045"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1435037634"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_69136723"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1463745402"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1050383898"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_2096104516"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1197432704"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_11);
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("14142945");
set_field(noLegs_0_2, LegOptionRatio_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_975629623"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1138285624"}, InstrumentLeg_11);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("290800");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegProduct{1325011438}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegPutOrCall{184973804}, InstrumentLeg_11);
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("6772229");
set_field(noLegs_0_2, LegRatioQty_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_736513589"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1067176708"}, InstrumentLeg_11);
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("81.030000");
set_field(noLegs_0_2, LegRepurchaseRate_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1154740318}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_102181444"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1894595997"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1679086184"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_902125783"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1932878454"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_17060119"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1760831266"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_11);
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("7368211");
set_field(noLegs_0_2, LegStrikePrice_11, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_183639490"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1319304985"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_24375149"}, InstrumentLeg_11);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_252776213"}, InstrumentLeg_11);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("6355667");
set_field(noLegs_0_2, LegUnitOfMeasureQty_11, InstrumentLeg_11);
    all_values.push_back(InstrumentLeg_11);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_201397081"}, LegSecAltIDGrp_NoLegSecurityAltID_23);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1832999443"}, LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_35602309"}, LegSecAltIDGrp_NoLegSecurityAltID_24);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1615691622"}, LegSecAltIDGrp_NoLegSecurityAltID_24);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_661145418"}, LegSecAltIDGrp_NoLegSecurityAltID_25);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_1173887933"}, LegSecAltIDGrp_NoLegSecurityAltID_25);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("16.300000");
set_field(msg, AttachmentPoint_8, Instrument_8);
  set_field(msg, FIX::CFICode{"STRING_1986156856"}, Instrument_8);
  set_field(msg, FIX::CPProgram{2}, Instrument_8);
  set_field(msg, FIX::CPRegType{"STRING_174510939"}, Instrument_8);
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("5751867");
set_field(msg, CapPrice_8, Instrument_8);
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("2785547");
set_field(msg, ContractMultiplier_8, Instrument_8);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_8);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1729927116"}, Instrument_8);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_380736242"}, Instrument_8);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_761761392"}, Instrument_8);
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("96.520000");
set_field(msg, CouponRate_8, Instrument_8);
  set_field(msg, FIX::CreditRating{"STRING_1282862025"}, Instrument_8);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_547156199"}, Instrument_8);
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("97.710000");
set_field(msg, DetachmentPoint_8, Instrument_8);
  set_field(msg, FIX::EncodedIssuer{"DATA_196291257"}, Instrument_8);
  set_field(msg, FIX::EncodedIssuerLen{160503817}, Instrument_8);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1169525605"}, Instrument_8);
  set_field(msg, FIX::EncodedSecurityDescLen{2116694844}, Instrument_8);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_8);
  FIX::Factor Factor_8;
  Factor_8.setString("13531650");
set_field(msg, Factor_8, Instrument_8);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_8);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_8);
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("16059413");
set_field(msg, FloorPrice_8, Instrument_8);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_8);
  set_field(msg, FIX::InstrRegistry{"STRING_1996459176"}, Instrument_8);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_8);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1609598715"}, Instrument_8);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2032061485"}, Instrument_8);
  set_field(msg, FIX::Issuer{"STRING_1275546364"}, Instrument_8);
  set_field(msg, FIX::ListMethod{0}, Instrument_8);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1058465771"}, Instrument_8);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_772834346"}, Instrument_8);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2109417342"}, Instrument_8);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_269843860"}, Instrument_8);
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("9473452");
set_field(msg, MinPriceIncrement_8, Instrument_8);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("5371204");
set_field(msg, MinPriceIncrementAmount_8, Instrument_8);
  set_field(msg, FIX::NTPositionLimit{548398658}, Instrument_8);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("43.290000");
set_field(msg, NotionalPercentageOutstanding_8, Instrument_8);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_8);
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("9291349");
set_field(msg, OptPayoutAmount_8, Instrument_8);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_8);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("36.120000");
set_field(msg, OriginalNotionalPercentageOutstanding_8, Instrument_8);
  set_field(msg, FIX::Pool{"STRING_64513277"}, Instrument_8);
  set_field(msg, FIX::PositionLimit{1123428272}, Instrument_8);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_8);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_260804534"}, Instrument_8);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("12839320");
set_field(msg, PriceUnitOfMeasureQty_8, Instrument_8);
  set_field(msg, FIX::Product{11}, Instrument_8);
  set_field(msg, FIX::ProductComplex{"STRING_230015731"}, Instrument_8);
  set_field(msg, FIX::PutOrCall{0}, Instrument_8);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_887406789"}, Instrument_8);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1518531912"}, Instrument_8);
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("35.520000");
set_field(msg, RepurchaseRate_8, Instrument_8);
  set_field(msg, FIX::RepurchaseTerm{345864449}, Instrument_8);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_8);
  set_field(msg, FIX::SecurityDesc{"STRING_804449080"}, Instrument_8);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_5719191"}, Instrument_8);
  set_field(msg, FIX::SecurityGroup{"STRING_757246252"}, Instrument_8);
  set_field(msg, FIX::SecurityID{"STRING_689026918"}, Instrument_8);
  set_field(msg, FIX::SecurityIDSource{"STRING_A"}, Instrument_8);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_8);
  set_field(msg, FIX::SecuritySubType{"STRING_1747492689"}, Instrument_8);
  set_field(msg, FIX::SecurityType{"STRING_CTB"}, Instrument_8);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_8);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_8);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_853961540"}, Instrument_8);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1379560925"}, Instrument_8);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_8);
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("14991248");
set_field(msg, StrikeMultiplier_8, Instrument_8);
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("13473864");
set_field(msg, StrikePrice_8, Instrument_8);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_8);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("48.490000");
set_field(msg, StrikePriceBoundaryPrecision_8, Instrument_8);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_8);
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("2206889");
set_field(msg, StrikeValue_8, Instrument_8);
  set_field(msg, FIX::Symbol{"STRING_1244934585"}, Instrument_8);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_8);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_8);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_8);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_8);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("15383944");
set_field(msg, UnitOfMeasureQty_8, Instrument_8);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_8);
  all_values.push_back(Instrument_8);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("20124475");
set_field(noComplexEvents_0_0, ComplexEventPrice_15, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("34.160000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_15, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_15);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_15);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("18398603");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_15, ComplexEvents_NoComplexEvents_15);
    all_values.push_back(ComplexEvents_NoComplexEvents_15);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 50, 40, 16, 11, 2003)}, ComplexEventDates_NoComplexEventDates_30);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 22, 47, 10, 8, 2014)}, ComplexEventDates_NoComplexEventDates_30);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 18, 48)}, ComplexEventTimes_NoComplexEventTimes_73);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 8, 21)}, ComplexEventTimes_NoComplexEventTimes_73);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 5, 33)}, ComplexEventTimes_NoComplexEventTimes_74);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 19, 7)}, ComplexEventTimes_NoComplexEventTimes_74);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_16;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexEventPrice ComplexEventPrice_16;
    ComplexEventPrice_16.setString("11289765");
set_field(noComplexEvents_0_1, ComplexEventPrice_16, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("29.210000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_16, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_16);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_16);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("8511257");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_16, ComplexEvents_NoComplexEvents_16);
    all_values.push_back(ComplexEvents_NoComplexEvents_16);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 10, 33, 15, 7, 2008)}, ComplexEventDates_NoComplexEventDates_31);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 12, 44, 21, 11, 2008)}, ComplexEventDates_NoComplexEventDates_31);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 8, 36)}, ComplexEventTimes_NoComplexEventTimes_75);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 47, 19)}, ComplexEventTimes_NoComplexEventTimes_75);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 9, 56)}, ComplexEventTimes_NoComplexEventTimes_76);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 34, 42)}, ComplexEventTimes_NoComplexEventTimes_76);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 10)}, ComplexEventTimes_NoComplexEventTimes_77);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 12, 58)}, ComplexEventTimes_NoComplexEventTimes_77);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_20;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1818657505"}, EvntGrp_NoEvents_20);
    FIX::EventPx EventPx_20;
    EventPx_20.setString("12259463");
set_field(noEvents_0_0, EventPx_20, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1007992618"}, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 0, 2, 5, 1, 2006)}, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_20);
    all_values.push_back(EvntGrp_NoEvents_20);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_21;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2033972374"}, EvntGrp_NoEvents_21);
    FIX::EventPx EventPx_21;
    EventPx_21.setString("6343653");
set_field(noEvents_0_1, EventPx_21, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1931857209"}, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 10, 17, 25, 12, 2007)}, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventType{16}, EvntGrp_NoEvents_21);
    all_values.push_back(EvntGrp_NoEvents_21);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_22;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1172453387"}, EvntGrp_NoEvents_22);
    FIX::EventPx EventPx_22;
    EventPx_22.setString("11135733");
set_field(noEvents_0_2, EventPx_22, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1141812819"}, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 30, 2, 21, 12, 2001)}, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventType{12}, EvntGrp_NoEvents_22);
    all_values.push_back(EvntGrp_NoEvents_22);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1756499050"}, InstrumentParties_NoInstrumentParties_15);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_15);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{733808129}, InstrumentParties_NoInstrumentParties_15);
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_625730287"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{472078762}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_877579166"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{534406677}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_358567488"}, InstrumentParties_NoInstrumentParties_16);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_16);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{318780238}, InstrumentParties_NoInstrumentParties_16);
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_308399421"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1391316968}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1773514167"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1853126434}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_723053523"}, SecAltIDGrp_NoSecurityAltID_20);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1722863542"}, SecAltIDGrp_NoSecurityAltID_20);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1807011718"}, SecAltIDGrp_NoSecurityAltID_21);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1836626884"}, SecAltIDGrp_NoSecurityAltID_21);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_717192713"}, SecAltIDGrp_NoSecurityAltID_22);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1755509208"}, SecAltIDGrp_NoSecurityAltID_22);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1078815771"}, SecurityXML_16);
  set_field(msg, FIX::SecurityXMLLen{1975472303}, SecurityXML_16);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1373314722"}, SecurityXML_16);
  all_values.push_back(SecurityXML_16);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("19121230");
set_field(noMiscFees_0_0, MiscFeeAmt_18, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_18);
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_19;
    FIX::MiscFeeAmt MiscFeeAmt_19;
    MiscFeeAmt_19.setString("4353456");
set_field(noMiscFees_0_1, MiscFeeAmt_19, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_6"}, MiscFeesGrp_NoMiscFees_19);
    all_values.push_back(MiscFeesGrp_NoMiscFees_19);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1595482567"}, Parties_NoPartyIDs_21);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_21);
    set_field(noPartyIDs_0_0, FIX::PartyRole{66}, Parties_NoPartyIDs_21);
    all_values.push_back(Parties_NoPartyIDs_21);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_630325213"}, PtysSubGrp_NoPartySubIDs_45);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_45);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1158096125"}, PtysSubGrp_NoPartySubIDs_46);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_46);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_2098685979"}, PtysSubGrp_NoPartySubIDs_47);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_47);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_979409256"}, Parties_NoPartyIDs_22);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_22);
    set_field(noPartyIDs_0_1, FIX::PartyRole{19}, Parties_NoPartyIDs_22);
    all_values.push_back(Parties_NoPartyIDs_22);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_243774939"}, PtysSubGrp_NoPartySubIDs_48);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_48);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1747368264"}, PtysSubGrp_NoPartySubIDs_49);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_49);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_286039160"}, PtysSubGrp_NoPartySubIDs_50);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_50);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1983886677"}, Parties_NoPartyIDs_23);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_23);
    set_field(noPartyIDs_0_2, FIX::PartyRole{70}, Parties_NoPartyIDs_23);
    all_values.push_back(Parties_NoPartyIDs_23);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1219642748"}, PtysSubGrp_NoPartySubIDs_51);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_51);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1988776821"}, PtysSubGrp_NoPartySubIDs_52);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_52);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1317484297"}, PtysSubGrp_NoPartySubIDs_53);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_53);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_8;
  set_field(msg, FIX::SettlDeliveryType{0}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbID{"STRING_765483216"}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbName{"STRING_1882716460"}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbType{0}, SettlInstructionsData_8);
  all_values.push_back(SettlInstructionsData_8);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_14;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_14);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_14);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_14);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_26;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_621913758"}, SettlParties_NoSettlPartyIDs_26);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_26);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{1335529306}, SettlParties_NoSettlPartyIDs_26);
      all_values.push_back(SettlParties_NoSettlPartyIDs_26);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_1147966402"}, SettlPtysSubGrp_NoSettlPartySubIDs_52);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{640228184}, SettlPtysSubGrp_NoSettlPartySubIDs_52);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_27;
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyID{"STRING_122391859"}, SettlParties_NoSettlPartyIDs_27);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_27);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyRole{1700436271}, SettlParties_NoSettlPartyIDs_27);
      all_values.push_back(SettlParties_NoSettlPartyIDs_27);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubID{"STRING_1463504936"}, SettlPtysSubGrp_NoSettlPartySubIDs_53);
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubIDType{1986475431}, SettlPtysSubGrp_NoSettlPartySubIDs_53);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubID{"STRING_1494327267"}, SettlPtysSubGrp_NoSettlPartySubIDs_54);
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubIDType{1299907965}, SettlPtysSubGrp_NoSettlPartySubIDs_54);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_28;
      set_field(noSettlPartyIDs_0_1_2, FIX::SettlPartyID{"STRING_787325037"}, SettlParties_NoSettlPartyIDs_28);
      set_field(noSettlPartyIDs_0_1_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_28);
      set_field(noSettlPartyIDs_0_1_2, FIX::SettlPartyRole{1845593825}, SettlParties_NoSettlPartyIDs_28);
      all_values.push_back(SettlParties_NoSettlPartyIDs_28);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
        set_field(noSettlPartySubIDs_0_2_2_0, FIX::SettlPartySubID{"STRING_1571798479"}, SettlPtysSubGrp_NoSettlPartySubIDs_55);
        set_field(noSettlPartySubIDs_0_2_2_0, FIX::SettlPartySubIDType{1686886999}, SettlPtysSubGrp_NoSettlPartySubIDs_55);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
        set_field(noSettlPartySubIDs_0_2_2_1, FIX::SettlPartySubID{"STRING_774247017"}, SettlPtysSubGrp_NoSettlPartySubIDs_56);
        set_field(noSettlPartySubIDs_0_2_2_1, FIX::SettlPartySubIDType{741799128}, SettlPtysSubGrp_NoSettlPartySubIDs_56);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
        set_field(noSettlPartySubIDs_0_2_2_2, FIX::SettlPartySubID{"STRING_1295866247"}, SettlPtysSubGrp_NoSettlPartySubIDs_57);
        set_field(noSettlPartySubIDs_0_2_2_2, FIX::SettlPartySubIDType{114225545}, SettlPtysSubGrp_NoSettlPartySubIDs_57);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_2039544717"}, SpreadOrBenchmarkCurveData_3);
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("13966570");
set_field(msg, BenchmarkPrice_3, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkPriceType{1061546043}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1582419567"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2018570843"}, SpreadOrBenchmarkCurveData_3);
  FIX::Spread Spread_3;
  Spread_3.setString("5354465");
set_field(msg, Spread_3, SpreadOrBenchmarkCurveData_3);
  all_values.push_back(SpreadOrBenchmarkCurveData_3);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_AVFICO"}, Stipulations_NoStipulations_6);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1683412975"}, Stipulations_NoStipulations_6);
    all_values.push_back(Stipulations_NoStipulations_6);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_YIELD"}, Stipulations_NoStipulations_7);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1594802069"}, Stipulations_NoStipulations_7);
    all_values.push_back(Stipulations_NoStipulations_7);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_PRICE"}, Stipulations_NoStipulations_8);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_963646032"}, Stipulations_NoStipulations_8);
    all_values.push_back(Stipulations_NoStipulations_8);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_0;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_243691956"}, TrdCollGrp_NoTrades_0);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_802637816"}, TrdCollGrp_NoTrades_0);
    all_values.push_back(TrdCollGrp_NoTrades_0);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_663922163"}, TrdCollGrp_NoTrades_1);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1543599921"}, TrdCollGrp_NoTrades_1);
    all_values.push_back(TrdCollGrp_NoTrades_1);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_0;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_DIR"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_IN"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(18, 39, 14, 9, 10, 2000)}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_960595109"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IOC"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_S"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(5, 19, 43, 27, 7, 2007)}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1000584372"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_AON"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(8, 44, 18, 27, 8, 2001)}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_2069557086"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_2);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_0;
    set_field(noUnderlyings_0_0, FIX::CollAction{0}, UndInstrmtCollGrp_NoUnderlyings_0);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_0);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_11;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1087036895"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1643269525}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1425240875"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2047632004}, UnderlyingInstrument_11);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("12250696");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_11, UnderlyingInstrument_11);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("31.860000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_11, UnderlyingInstrument_11);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("69.020000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1868415775"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1507265065"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_190772643"}, UnderlyingInstrument_11);
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("8997248");
set_field(noUnderlyings_0_0, UnderlyingCapValue_11, UnderlyingInstrument_11);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("9624685");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_11);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("16144468");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1828365385}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_597139319"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1109355958"}, UnderlyingInstrument_11);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("46.350000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_767318588"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_11);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("16014200");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_11, UnderlyingInstrument_11);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("79.260000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_11, UnderlyingInstrument_11);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("19222979");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_11, UnderlyingInstrument_11);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("1198663");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_11, UnderlyingInstrument_11);
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("3591016");
set_field(noUnderlyings_0_0, UnderlyingEndValue_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1151437584}, UnderlyingInstrument_11);
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("419398");
set_field(noUnderlyings_0_0, UnderlyingFXRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_11);
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("4567875");
set_field(noUnderlyings_0_0, UnderlyingFactor_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2109439462}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_456195766"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2100057082"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1387196689"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_356344122"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1177643062"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2062239875"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_466261024"}, UnderlyingInstrument_11);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("51.890000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_11);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("36.670000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1798300035"}, UnderlyingInstrument_11);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("2370061");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{253588614}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1265263279}, UnderlyingInstrument_11);
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("20653715");
set_field(noUnderlyings_0_0, UnderlyingPx_11, UnderlyingInstrument_11);
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("8507279");
set_field(noUnderlyings_0_0, UnderlyingQty_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_227135590"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1428312537"}, UnderlyingInstrument_11);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("65.220000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1075092571}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1275950590"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1071982894"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1057766849"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1050764913"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1191849285"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1416868523"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_54718849"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1233789115"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_786027394"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_11);
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("11957449");
set_field(noUnderlyings_0_0, UnderlyingStartValue_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1242223160"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_11);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("15985672");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_11, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1641722902"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_350214197"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2064828306"}, UnderlyingInstrument_11);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_392814443"}, UnderlyingInstrument_11);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("17722354");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_11, UnderlyingInstrument_11);
    all_values.push_back(UnderlyingInstrument_11);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_43630831"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2009241655"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_827966940"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1308894110"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1927129557"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1678694874"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1207958447"}, UnderlyingStipulations_NoUnderlyingStips_19);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1149257748"}, UnderlyingStipulations_NoUnderlyingStips_19);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_336425389"}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1521405473}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1265606279"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{790790348}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1441909151"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{351911746}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_1;
    set_field(noUnderlyings_0_1, FIX::CollAction{0}, UndInstrmtCollGrp_NoUnderlyings_1);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_1);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_12;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1953415556"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1547656675}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_671557254"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{270011748}, UnderlyingInstrument_12);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("19831146");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_12, UnderlyingInstrument_12);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("8.880000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_12, UnderlyingInstrument_12);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("46.500000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_185845195"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_39985546"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_157065445"}, UnderlyingInstrument_12);
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("19580806");
set_field(noUnderlyings_0_1, UnderlyingCapValue_12, UnderlyingInstrument_12);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("6143638");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_12);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("18198386");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1442330812}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1509590387"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1599484601"}, UnderlyingInstrument_12);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("20.380000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_898136439"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_12);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("13617750");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_12, UnderlyingInstrument_12);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("47.890000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_12, UnderlyingInstrument_12);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("490731");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_12, UnderlyingInstrument_12);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("7356968");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_12, UnderlyingInstrument_12);
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("2360914");
set_field(noUnderlyings_0_1, UnderlyingEndValue_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1314679411}, UnderlyingInstrument_12);
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("15264872");
set_field(noUnderlyings_0_1, UnderlyingFXRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_12);
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("16665911");
set_field(noUnderlyings_0_1, UnderlyingFactor_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{955821332}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1483932503"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1066764185"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1627378586"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1753944251"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_902395183"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1750019475"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1518195253"}, UnderlyingInstrument_12);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("3.780000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_12);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("6.980000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_898837415"}, UnderlyingInstrument_12);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("2568852");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1875956975}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{571192459}, UnderlyingInstrument_12);
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("16992160");
set_field(noUnderlyings_0_1, UnderlyingPx_12, UnderlyingInstrument_12);
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("12380637");
set_field(noUnderlyings_0_1, UnderlyingQty_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_23193412"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_525274447"}, UnderlyingInstrument_12);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("1.530000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{683152813}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_500590585"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1350491569"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1679537602"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_549663717"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_2086188458"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1915629046"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1864343129"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1465192047"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1446145992"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_12);
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("2735297");
set_field(noUnderlyings_0_1, UnderlyingStartValue_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_782594847"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_12);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("3890554");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1205126359"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1503444145"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1907250703"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_145883089"}, UnderlyingInstrument_12);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("11459655");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_12, UnderlyingInstrument_12);
    all_values.push_back(UnderlyingInstrument_12);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1044720504"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1402850764"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1163501081"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1615912963"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_954583173"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_254081147"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1479857621"}, UnderlyingStipulations_NoUnderlyingStips_20);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_242797652"}, UnderlyingStipulations_NoUnderlyingStips_20);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1980448206"}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1854313143}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1531994031"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1622458541}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_99487757"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{849702431}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_921120886"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1482938396}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1123232162"}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1785669572}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2092771184"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{843312284}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_232617329"}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{989195373}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1140082345"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2033915878}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_14;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_14);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_156099778"}, header_14);
  set_header_field(msg.getHeader(), FIX::BodyLength{1502345193}, header_14);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1588533137"}, header_14);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_410180925"}, header_14);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_993967921"}, header_14);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_920907110"}, header_14);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{652978578}, header_14);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_14);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{753871669}, header_14);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_98784151"}, header_14);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_875572958"}, header_14);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1136499945"}, header_14);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(11, 2, 26, 17, 3, 2004)}, header_14);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_14);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_14);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_185402313"}, header_14);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{773188359}, header_14);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1052940658"}, header_14);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_418019642"}, header_14);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_478242950"}, header_14);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 16, 22, 6, 3, 2017)}, header_14);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1871601944"}, header_14);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_37122352"}, header_14);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_129914081"}, header_14);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_645025406"}, header_14);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{690100930}, header_14);
  all_values.push_back(header_14);
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
