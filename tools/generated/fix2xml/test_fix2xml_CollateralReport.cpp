#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_0;
  set_field(msg, FIX::Account{"STRING_1631941521"}, CollateralReport_0);
  set_field(msg, FIX::AccountType{7}, CollateralReport_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("14831605");
set_field(msg, AccruedInterestAmt_5, CollateralReport_0);
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("4958544");
set_field(msg, CashOutstanding_2, CollateralReport_0);
  set_field(msg, FIX::ClOrdID{"STRING_1047626143"}, CollateralReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_631686402"}, CollateralReport_0);
  set_field(msg, FIX::CollApplType{1}, CollateralReport_0);
  set_field(msg, FIX::CollInquiryID{"STRING_1679173838"}, CollateralReport_0);
  set_field(msg, FIX::CollRptID{"STRING_2008200772"}, CollateralReport_0);
  set_field(msg, FIX::CollStatus{4}, CollateralReport_0);
  set_field(msg, FIX::Currency{"GBP"}, CollateralReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1793564999"}, CollateralReport_0);
  set_field(msg, FIX::EncodedTextLen{2103939339}, CollateralReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("1097542");
set_field(msg, EndAccruedInterestAmt_5, CollateralReport_0);
  FIX::EndCash EndCash_5;
  EndCash_5.setString("11983289");
set_field(msg, EndCash_5, CollateralReport_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_2"}, CollateralReport_0);
  set_field(msg, FIX::LastRptRequested{true}, CollateralReport_0);
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("20184604");
set_field(msg, MarginExcess_2, CollateralReport_0);
  set_field(msg, FIX::OrderID{"STRING_1943454617"}, CollateralReport_0);
  FIX::Price Price_5;
  Price_5.setString("5127873");
set_field(msg, Price_5, CollateralReport_0);
  set_field(msg, FIX::PriceType{1}, CollateralReport_0);
  set_field(msg, FIX::QtyType{0}, CollateralReport_0);
  FIX::Quantity Quantity_8;
  Quantity_8.setString("3081607");
set_field(msg, Quantity_8, CollateralReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1263595450"}, CollateralReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_972402091"}, CollateralReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_902758211"}, CollateralReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, CollateralReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1328503708"}, CollateralReport_0);
  set_field(msg, FIX::Side{'1'}, CollateralReport_0);
  FIX::StartCash StartCash_5;
  StartCash_5.setString("7866901");
set_field(msg, StartCash_5, CollateralReport_0);
  set_field(msg, FIX::Text{"STRING_812961582"}, CollateralReport_0);
  set_field(msg, FIX::TotNumReports{1571438569}, CollateralReport_0);
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("1223671");
set_field(msg, TotalNetValue_2, CollateralReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, CollateralReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, CollateralReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 55, 28, 6, 10, 2012)}, CollateralReport_0);
  all_values.push_back(CollateralReport_0);

  all_compo_names.insert("CollateralReport");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_8;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1121549764"}, ExecCollGrp_NoExecs_8);
    all_values.push_back(ExecCollGrp_NoExecs_8);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2049354782"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementDesc{"STRING_1995203334"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementID{"STRING_716517186"}, FinancingDetails_6);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_6);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_360506989"}, FinancingDetails_6);
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("35.480000");
set_field(msg, MarginRatio_6, FinancingDetails_6);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_2001606453"}, FinancingDetails_6);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_6);
  all_values.push_back(FinancingDetails_6);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_16;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_826524896"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1571425955}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1021103929"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{7544956}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_875384099"}, InstrumentLeg_16);
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("18077941");
set_field(noLegs_0_0, LegContractMultiplier_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{820506538}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_299339021"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1930161236"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2129322552"}, InstrumentLeg_16);
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("0.860000");
set_field(noLegs_0_0, LegCouponRate_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_536731112"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1151501760"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1398107024}, InstrumentLeg_16);
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("19392854");
set_field(noLegs_0_0, LegFactor_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2040425725}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1045318461"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_913351530"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_891620243"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1890858808"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_815222665"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_739339929"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_459892346"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_513064768"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_16);
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("5617958");
set_field(noLegs_0_0, LegOptionRatio_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_367187573"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1768514662"}, InstrumentLeg_16);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("19272948");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegProduct{1193712469}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1192456969}, InstrumentLeg_16);
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("8009151");
set_field(noLegs_0_0, LegRatioQty_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1201257426"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_2067841069"}, InstrumentLeg_16);
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("56.410000");
set_field(noLegs_0_0, LegRepurchaseRate_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{2021763964}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_219696442"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_243903229"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2003602868"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_990616528"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_780634341"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1253096159"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1932136101"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_16);
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("18250781");
set_field(noLegs_0_0, LegStrikePrice_16, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1549037997"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_322477518"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_569214773"}, InstrumentLeg_16);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1292413157"}, InstrumentLeg_16);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("11377001");
set_field(noLegs_0_0, LegUnitOfMeasureQty_16, InstrumentLeg_16);
    all_values.push_back(InstrumentLeg_16);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1752305503"}, LegSecAltIDGrp_NoLegSecurityAltID_32);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1650764952"}, LegSecAltIDGrp_NoLegSecurityAltID_32);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_260917974"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{166617750}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_2017952525"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{2029432636}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_2093912644"}, InstrumentLeg_17);
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("10641813");
set_field(noLegs_0_1, LegContractMultiplier_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1074405958}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_747344171"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_117955125"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_994763379"}, InstrumentLeg_17);
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("98.120000");
set_field(noLegs_0_1, LegCouponRate_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2139719089"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1995838310"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{57592701}, InstrumentLeg_17);
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("856237");
set_field(noLegs_0_1, LegFactor_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1101450821}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1822400570"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2017759835"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1605170356"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1231526558"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1695354366"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1006724705"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1554004077"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_117085491"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_17);
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("5442206");
set_field(noLegs_0_1, LegOptionRatio_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1425640194"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1903959718"}, InstrumentLeg_17);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("475019");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegProduct{1686558168}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2070577468}, InstrumentLeg_17);
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("20654544");
set_field(noLegs_0_1, LegRatioQty_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1568507157"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_2017006464"}, InstrumentLeg_17);
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("21.410000");
set_field(noLegs_0_1, LegRepurchaseRate_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{495429467}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_616866987"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1100107266"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1490192846"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1825436799"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1092342707"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_557169019"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_940697369"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_17);
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("20421481");
set_field(noLegs_0_1, LegStrikePrice_17, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_289678642"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1086326114"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1499834899"}, InstrumentLeg_17);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1521205201"}, InstrumentLeg_17);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("6341968");
set_field(noLegs_0_1, LegUnitOfMeasureQty_17, InstrumentLeg_17);
    all_values.push_back(InstrumentLeg_17);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_927725630"}, LegSecAltIDGrp_NoLegSecurityAltID_33);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_751282323"}, LegSecAltIDGrp_NoLegSecurityAltID_33);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_510730171"}, LegSecAltIDGrp_NoLegSecurityAltID_34);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1471946242"}, LegSecAltIDGrp_NoLegSecurityAltID_34);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_18;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_29438870"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{267206241}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1519448159"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1715997038}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_190300061"}, InstrumentLeg_18);
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("14374189");
set_field(noLegs_0_2, LegContractMultiplier_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1137020547}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_59822878"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_272087446"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1632450014"}, InstrumentLeg_18);
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("98.650000");
set_field(noLegs_0_2, LegCouponRate_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1372194712"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_317053771"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1532328231}, InstrumentLeg_18);
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("14850692");
set_field(noLegs_0_2, LegFactor_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1257751141}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_2147089951"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_553635488"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1152415683"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_289284946"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1639961602"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_504766934"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1810490147"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_126674786"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'8'}, InstrumentLeg_18);
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("5907321");
set_field(noLegs_0_2, LegOptionRatio_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_877957109"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1374573062"}, InstrumentLeg_18);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("20626783");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegProduct{907395979}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1641779303}, InstrumentLeg_18);
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("14346428");
set_field(noLegs_0_2, LegRatioQty_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_475909370"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1832079364"}, InstrumentLeg_18);
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("81.870000");
set_field(noLegs_0_2, LegRepurchaseRate_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1612929917}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1891902242"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_996665633"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1097896284"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_421108460"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_221376697"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_2073055496"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSide{'7'}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_538430469"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_18);
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("17961816");
set_field(noLegs_0_2, LegStrikePrice_18, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1457506383"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_666972526"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_801113645"}, InstrumentLeg_18);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1746791329"}, InstrumentLeg_18);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("1594504");
set_field(noLegs_0_2, LegUnitOfMeasureQty_18, InstrumentLeg_18);
    all_values.push_back(InstrumentLeg_18);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1409797828"}, LegSecAltIDGrp_NoLegSecurityAltID_35);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_286125266"}, LegSecAltIDGrp_NoLegSecurityAltID_35);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_22239823"}, LegSecAltIDGrp_NoLegSecurityAltID_36);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_2000529957"}, LegSecAltIDGrp_NoLegSecurityAltID_36);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_1164082376"}, LegSecAltIDGrp_NoLegSecurityAltID_37);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_1396812885"}, LegSecAltIDGrp_NoLegSecurityAltID_37);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("46.810000");
set_field(msg, AttachmentPoint_11, Instrument_11);
  set_field(msg, FIX::CFICode{"STRING_2071478355"}, Instrument_11);
  set_field(msg, FIX::CPProgram{1}, Instrument_11);
  set_field(msg, FIX::CPRegType{"STRING_1202883915"}, Instrument_11);
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("3999040");
set_field(msg, CapPrice_11, Instrument_11);
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("5757042");
set_field(msg, ContractMultiplier_11, Instrument_11);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_11);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2012833995"}, Instrument_11);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_320122851"}, Instrument_11);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_776644088"}, Instrument_11);
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("66.310000");
set_field(msg, CouponRate_11, Instrument_11);
  set_field(msg, FIX::CreditRating{"STRING_741231311"}, Instrument_11);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_998020786"}, Instrument_11);
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("84.790000");
set_field(msg, DetachmentPoint_11, Instrument_11);
  set_field(msg, FIX::EncodedIssuer{"DATA_1516982788"}, Instrument_11);
  set_field(msg, FIX::EncodedIssuerLen{1536451255}, Instrument_11);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_199234911"}, Instrument_11);
  set_field(msg, FIX::EncodedSecurityDescLen{1630319826}, Instrument_11);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_11);
  FIX::Factor Factor_11;
  Factor_11.setString("16567412");
set_field(msg, Factor_11, Instrument_11);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_11);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_11);
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("12560489");
set_field(msg, FloorPrice_11, Instrument_11);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_11);
  set_field(msg, FIX::InstrRegistry{"STRING_1144659794"}, Instrument_11);
  set_field(msg, FIX::InstrmtAssignmentMethod{'5'}, Instrument_11);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_595384452"}, Instrument_11);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1166899617"}, Instrument_11);
  set_field(msg, FIX::Issuer{"STRING_371409466"}, Instrument_11);
  set_field(msg, FIX::ListMethod{0}, Instrument_11);
  set_field(msg, FIX::LocaleOfIssue{"STRING_416228854"}, Instrument_11);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_139650499"}, Instrument_11);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1683461535"}, Instrument_11);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1307337394"}, Instrument_11);
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("13425344");
set_field(msg, MinPriceIncrement_11, Instrument_11);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("20833656");
set_field(msg, MinPriceIncrementAmount_11, Instrument_11);
  set_field(msg, FIX::NTPositionLimit{1883041651}, Instrument_11);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("28.700000");
set_field(msg, NotionalPercentageOutstanding_11, Instrument_11);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_11);
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("556808");
set_field(msg, OptPayoutAmount_11, Instrument_11);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_11);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("89.430000");
set_field(msg, OriginalNotionalPercentageOutstanding_11, Instrument_11);
  set_field(msg, FIX::Pool{"STRING_796912165"}, Instrument_11);
  set_field(msg, FIX::PositionLimit{749694096}, Instrument_11);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_11);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_166411305"}, Instrument_11);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("1386617");
set_field(msg, PriceUnitOfMeasureQty_11, Instrument_11);
  set_field(msg, FIX::Product{4}, Instrument_11);
  set_field(msg, FIX::ProductComplex{"STRING_1796731131"}, Instrument_11);
  set_field(msg, FIX::PutOrCall{0}, Instrument_11);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1361789981"}, Instrument_11);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1946539836"}, Instrument_11);
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("1.350000");
set_field(msg, RepurchaseRate_11, Instrument_11);
  set_field(msg, FIX::RepurchaseTerm{470355309}, Instrument_11);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_11);
  set_field(msg, FIX::SecurityDesc{"STRING_159766281"}, Instrument_11);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_988718466"}, Instrument_11);
  set_field(msg, FIX::SecurityGroup{"STRING_703699826"}, Instrument_11);
  set_field(msg, FIX::SecurityID{"STRING_1326665899"}, Instrument_11);
  set_field(msg, FIX::SecurityIDSource{"STRING_M"}, Instrument_11);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_11);
  set_field(msg, FIX::SecuritySubType{"STRING_1742894753"}, Instrument_11);
  set_field(msg, FIX::SecurityType{"STRING_IET"}, Instrument_11);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_11);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_11);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_694829199"}, Instrument_11);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1935026506"}, Instrument_11);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_11);
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("17362588");
set_field(msg, StrikeMultiplier_11, Instrument_11);
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("6939873");
set_field(msg, StrikePrice_11, Instrument_11);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_11);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("41.130000");
set_field(msg, StrikePriceBoundaryPrecision_11, Instrument_11);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_11);
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("1712258");
set_field(msg, StrikeValue_11, Instrument_11);
  set_field(msg, FIX::Symbol{"STRING_2006551536"}, Instrument_11);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_11);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_11);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_11);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_11);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("16336984");
set_field(msg, UnitOfMeasureQty_11, Instrument_11);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_11);
  all_values.push_back(Instrument_11);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("13962618");
set_field(noComplexEvents_0_0, ComplexEventPrice_23, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("12.210000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_23, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_23);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_23);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("21352371");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_23, ComplexEvents_NoComplexEvents_23);
    all_values.push_back(ComplexEvents_NoComplexEvents_23);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 0, 58, 13, 5, 2001)}, ComplexEventDates_NoComplexEventDates_49);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 27, 57, 21, 2, 2011)}, ComplexEventDates_NoComplexEventDates_49);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 14, 43)}, ComplexEventTimes_NoComplexEventTimes_90);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 30, 12)}, ComplexEventTimes_NoComplexEventTimes_90);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 37, 11)}, ComplexEventTimes_NoComplexEventTimes_91);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 23, 25)}, ComplexEventTimes_NoComplexEventTimes_91);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 26, 43)}, ComplexEventTimes_NoComplexEventTimes_92);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 12, 38)}, ComplexEventTimes_NoComplexEventTimes_92);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 28, 5, 9, 4, 2017)}, ComplexEventDates_NoComplexEventDates_50);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 13, 29, 19, 4, 2005)}, ComplexEventDates_NoComplexEventDates_50);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 24, 12)}, ComplexEventTimes_NoComplexEventTimes_93);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 35, 20)}, ComplexEventTimes_NoComplexEventTimes_93);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 38, 12)}, ComplexEventTimes_NoComplexEventTimes_94);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 17, 4)}, ComplexEventTimes_NoComplexEventTimes_94);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 32, 17)}, ComplexEventTimes_NoComplexEventTimes_95);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 16, 0)}, ComplexEventTimes_NoComplexEventTimes_95);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 21, 21, 24, 1, 2012)}, ComplexEventDates_NoComplexEventDates_51);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 16, 10, 16, 9, 2010)}, ComplexEventDates_NoComplexEventDates_51);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 23, 49)}, ComplexEventTimes_NoComplexEventTimes_96);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 6, 12)}, ComplexEventTimes_NoComplexEventTimes_96);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_24;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexEventPrice ComplexEventPrice_24;
    ComplexEventPrice_24.setString("860041");
set_field(noComplexEvents_0_1, ComplexEventPrice_24, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("72.530000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_24, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("9244170");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_24, ComplexEvents_NoComplexEvents_24);
    all_values.push_back(ComplexEvents_NoComplexEvents_24);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 6, 32, 2, 7, 2014)}, ComplexEventDates_NoComplexEventDates_52);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 48, 3, 4, 1, 2017)}, ComplexEventDates_NoComplexEventDates_52);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 13, 14)}, ComplexEventTimes_NoComplexEventTimes_97);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 21, 19)}, ComplexEventTimes_NoComplexEventTimes_97);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 56, 6, 18, 6, 2017)}, ComplexEventDates_NoComplexEventDates_53);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 17, 46, 20, 12, 2002)}, ComplexEventDates_NoComplexEventDates_53);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 32, 59)}, ComplexEventTimes_NoComplexEventTimes_98);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 40, 46)}, ComplexEventTimes_NoComplexEventTimes_98);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 59, 52)}, ComplexEventTimes_NoComplexEventTimes_99);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 5, 13)}, ComplexEventTimes_NoComplexEventTimes_99);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 2, 47)}, ComplexEventTimes_NoComplexEventTimes_100);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 22, 47)}, ComplexEventTimes_NoComplexEventTimes_100);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 33, 32, 3, 6, 2003)}, ComplexEventDates_NoComplexEventDates_54);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 41, 38, 15, 7, 2016)}, ComplexEventDates_NoComplexEventDates_54);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 41, 23)}, ComplexEventTimes_NoComplexEventTimes_101);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 28, 56)}, ComplexEventTimes_NoComplexEventTimes_101);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 50, 58)}, ComplexEventTimes_NoComplexEventTimes_102);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 21, 12)}, ComplexEventTimes_NoComplexEventTimes_102);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_28;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2096205592"}, EvntGrp_NoEvents_28);
    FIX::EventPx EventPx_28;
    EventPx_28.setString("16976970");
set_field(noEvents_0_0, EventPx_28, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1686250138"}, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 7, 58, 5, 6, 2016)}, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventType{9}, EvntGrp_NoEvents_28);
    all_values.push_back(EvntGrp_NoEvents_28);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_813284727"}, EvntGrp_NoEvents_29);
    FIX::EventPx EventPx_29;
    EventPx_29.setString("1432172");
set_field(noEvents_0_1, EventPx_29, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventText{"STRING_439633909"}, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 30, 14, 14, 1, 2004)}, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_29);
    all_values.push_back(EvntGrp_NoEvents_29);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_553014420"}, InstrumentParties_NoInstrumentParties_20);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_20);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1899292397}, InstrumentParties_NoInstrumentParties_20);
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_550683055"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1704794670}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2007986266"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{280972101}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1653516615"}, InstrumentParties_NoInstrumentParties_21);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_21);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1967222240}, InstrumentParties_NoInstrumentParties_21);
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_533841323"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1744830319}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1835822253"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{2038895676}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_406746773"}, SecAltIDGrp_NoSecurityAltID_20);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_857298576"}, SecAltIDGrp_NoSecurityAltID_20);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1993977199"}, SecAltIDGrp_NoSecurityAltID_21);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_549963984"}, SecAltIDGrp_NoSecurityAltID_21);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1296932485"}, SecurityXML_22);
  set_field(msg, FIX::SecurityXMLLen{1728162130}, SecurityXML_22);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1214381983"}, SecurityXML_22);
  all_values.push_back(SecurityXML_22);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_10;
    FIX::MiscFeeAmt MiscFeeAmt_10;
    MiscFeeAmt_10.setString("9078031");
set_field(noMiscFees_0_0, MiscFeeAmt_10, MiscFeesGrp_NoMiscFees_10);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_10);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_10);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_10);
    all_values.push_back(MiscFeesGrp_NoMiscFees_10);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_11;
    FIX::MiscFeeAmt MiscFeeAmt_11;
    MiscFeeAmt_11.setString("18041719");
set_field(noMiscFees_0_1, MiscFeeAmt_11, MiscFeesGrp_NoMiscFees_11);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_11);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_11);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_11);
    all_values.push_back(MiscFeesGrp_NoMiscFees_11);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_12;
    FIX::MiscFeeAmt MiscFeeAmt_12;
    MiscFeeAmt_12.setString("11971818");
set_field(noMiscFees_0_2, MiscFeeAmt_12, MiscFeesGrp_NoMiscFees_12);
    set_field(noMiscFees_0_2, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_12);
    set_field(noMiscFees_0_2, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_12);
    set_field(noMiscFees_0_2, FIX::MiscFeeType{"STRING_7"}, MiscFeesGrp_NoMiscFees_12);
    all_values.push_back(MiscFeesGrp_NoMiscFees_12);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1297892551"}, Parties_NoPartyIDs_25);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_25);
    set_field(noPartyIDs_0_0, FIX::PartyRole{84}, Parties_NoPartyIDs_25);
    all_values.push_back(Parties_NoPartyIDs_25);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1379782245"}, PtysSubGrp_NoPartySubIDs_54);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_54);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2075931695"}, PtysSubGrp_NoPartySubIDs_55);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_55);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_514906470"}, Parties_NoPartyIDs_26);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_26);
    set_field(noPartyIDs_0_1, FIX::PartyRole{33}, Parties_NoPartyIDs_26);
    all_values.push_back(Parties_NoPartyIDs_26);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1503103729"}, PtysSubGrp_NoPartySubIDs_56);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_56);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1537589204"}, PtysSubGrp_NoPartySubIDs_57);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_57);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1854235216"}, PtysSubGrp_NoPartySubIDs_58);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_58);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_2137189427"}, Parties_NoPartyIDs_27);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_27);
    set_field(noPartyIDs_0_2, FIX::PartyRole{57}, Parties_NoPartyIDs_27);
    all_values.push_back(Parties_NoPartyIDs_27);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1882714360"}, PtysSubGrp_NoPartySubIDs_59);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_59);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_230138671"}, PtysSubGrp_NoPartySubIDs_60);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_60);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_7;
  set_field(msg, FIX::SettlDeliveryType{2}, SettlInstructionsData_7);
  set_field(msg, FIX::StandInstDbID{"STRING_51777199"}, SettlInstructionsData_7);
  set_field(msg, FIX::StandInstDbName{"STRING_263082881"}, SettlInstructionsData_7);
  set_field(msg, FIX::StandInstDbType{1}, SettlInstructionsData_7);
  all_values.push_back(SettlInstructionsData_7);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_16;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_16);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_16);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_16);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_30;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_308731008"}, SettlParties_NoSettlPartyIDs_30);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_30);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{855419151}, SettlParties_NoSettlPartyIDs_30);
      all_values.push_back(SettlParties_NoSettlPartyIDs_30);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_669952585"}, SettlPtysSubGrp_NoSettlPartySubIDs_58);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{1370325622}, SettlPtysSubGrp_NoSettlPartySubIDs_58);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_5;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1515224383"}, SpreadOrBenchmarkCurveData_5);
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("1148696");
set_field(msg, BenchmarkPrice_5, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkPriceType{424786486}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1778647600"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1969104847"}, SpreadOrBenchmarkCurveData_5);
  FIX::Spread Spread_5;
  Spread_5.setString("18816331");
set_field(msg, Spread_5, SpreadOrBenchmarkCurveData_5);
  all_values.push_back(SpreadOrBenchmarkCurveData_5);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_SECTOR"}, Stipulations_NoStipulations_12);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_847684601"}, Stipulations_NoStipulations_12);
    all_values.push_back(Stipulations_NoStipulations_12);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_LEAVEQTY"}, Stipulations_NoStipulations_13);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_793067469"}, Stipulations_NoStipulations_13);
    all_values.push_back(Stipulations_NoStipulations_13);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_MININCR"}, Stipulations_NoStipulations_14);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_120011166"}, Stipulations_NoStipulations_14);
    all_values.push_back(Stipulations_NoStipulations_14);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_857556991"}, TrdCollGrp_NoTrades_7);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_171788365"}, TrdCollGrp_NoTrades_7);
    all_values.push_back(TrdCollGrp_NoTrades_7);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_NH"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(20, 13, 31, 20, 6, 2012)}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_731992490"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_6);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_TMO"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(2, 31, 59, 8, 8, 2000)}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_625810409"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{6}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MOC"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_A"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(12, 49, 21, 16, 1, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_138685748"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_8);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1785439899"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{232850209}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_853009993"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1954662988}, UnderlyingInstrument_21);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("9648426");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_21, UnderlyingInstrument_21);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("17.680000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_21, UnderlyingInstrument_21);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("43.690000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_584032471"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1993437927"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1978419029"}, UnderlyingInstrument_21);
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("6280087");
set_field(noUnderlyings_0_0, UnderlyingCapValue_21, UnderlyingInstrument_21);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("8049443");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_21);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("4061345");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1384804234}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_670640209"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1031944946"}, UnderlyingInstrument_21);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("65.720000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1338736646"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_21);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("15848294");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_21, UnderlyingInstrument_21);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("89.400000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_21, UnderlyingInstrument_21);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("10583282");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_21, UnderlyingInstrument_21);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("16720015");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_21, UnderlyingInstrument_21);
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("11084277");
set_field(noUnderlyings_0_0, UnderlyingEndValue_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1275780274}, UnderlyingInstrument_21);
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("10137447");
set_field(noUnderlyings_0_0, UnderlyingFXRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_21);
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("21469636");
set_field(noUnderlyings_0_0, UnderlyingFactor_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2066273606}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_885069752"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_232330176"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_771799951"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_692249092"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1197172875"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1437411720"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1527613461"}, UnderlyingInstrument_21);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("53.460000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_21);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("88.420000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_261730427"}, UnderlyingInstrument_21);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("20883103");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{6676434}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{667864964}, UnderlyingInstrument_21);
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("13256309");
set_field(noUnderlyings_0_0, UnderlyingPx_21, UnderlyingInstrument_21);
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("6773166");
set_field(noUnderlyings_0_0, UnderlyingQty_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1699809910"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1032683901"}, UnderlyingInstrument_21);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("32.900000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{432314709}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1329480330"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1453399117"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2017903649"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_240324979"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_977917045"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_978847753"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1516105253"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1991661779"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_78477606"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_21);
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("19104517");
set_field(noUnderlyings_0_0, UnderlyingStartValue_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_963547358"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_21);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("16557964");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_797604623"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1972179761"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1035926263"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_431326321"}, UnderlyingInstrument_21);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("11080621");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_21, UnderlyingInstrument_21);
    all_values.push_back(UnderlyingInstrument_21);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_693056748"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1048888855"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_253667891"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1360921712"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_227036184"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_930984535"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1259720086"}, UnderlyingStipulations_NoUnderlyingStips_42);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_799554177"}, UnderlyingStipulations_NoUnderlyingStips_42);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1345562684"}, UnderlyingStipulations_NoUnderlyingStips_43);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_441716768"}, UnderlyingStipulations_NoUnderlyingStips_43);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1215982685"}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1083386691}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_50663353"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{927564822}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_125824397"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1566248573}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_690532912"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1089371755}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1166680322"}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{597684557}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1049997067"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1633610820}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_248127619"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{10575532}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1880602277"}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1059464388}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_154622432"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1286500572}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_917771055"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1067870406}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_398737010"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1717325232}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_265949442"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{840453778}, UnderlyingInstrument_22);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("18227948");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_22, UnderlyingInstrument_22);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("21.280000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_22, UnderlyingInstrument_22);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("55.260000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_758697921"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1529278919"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1573158879"}, UnderlyingInstrument_22);
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("16862627");
set_field(noUnderlyings_0_1, UnderlyingCapValue_22, UnderlyingInstrument_22);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("16551033");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_22);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("2293120");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{596991423}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_11120478"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1454612962"}, UnderlyingInstrument_22);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("59.800000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1975405424"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_22);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("760493");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_22, UnderlyingInstrument_22);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("19.140000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_22, UnderlyingInstrument_22);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("4139217");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_22, UnderlyingInstrument_22);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("10172337");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_22, UnderlyingInstrument_22);
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("14271663");
set_field(noUnderlyings_0_1, UnderlyingEndValue_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{400708301}, UnderlyingInstrument_22);
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("11718561");
set_field(noUnderlyings_0_1, UnderlyingFXRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_22);
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("13184793");
set_field(noUnderlyings_0_1, UnderlyingFactor_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{92242953}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_964920237"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_888320941"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_358192395"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1805374016"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_563632172"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1840124523"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1180385894"}, UnderlyingInstrument_22);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("0.930000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_22);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("11.250000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_861109189"}, UnderlyingInstrument_22);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("7295394");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1597984929}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1090421198}, UnderlyingInstrument_22);
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("13265308");
set_field(noUnderlyings_0_1, UnderlyingPx_22, UnderlyingInstrument_22);
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("16091054");
set_field(noUnderlyings_0_1, UnderlyingQty_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_397550512"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_373723217"}, UnderlyingInstrument_22);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("71.840000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{754676894}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1054526369"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1513076579"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1122378809"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1468448150"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_382826693"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_402061463"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1869156452"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1554682888"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_968244690"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_22);
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("16469258");
set_field(noUnderlyings_0_1, UnderlyingStartValue_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1933164928"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_22);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("15910552");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_344621626"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1697759112"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_623957542"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1666951720"}, UnderlyingInstrument_22);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("7721952");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_22, UnderlyingInstrument_22);
    all_values.push_back(UnderlyingInstrument_22);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_380577261"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1501734721"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_680519948"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1470998459"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_142141708"}, UnderlyingStipulations_NoUnderlyingStips_44);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1868548972"}, UnderlyingStipulations_NoUnderlyingStips_44);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1054505176"}, UnderlyingStipulations_NoUnderlyingStips_45);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1579168892"}, UnderlyingStipulations_NoUnderlyingStips_45);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2109031545"}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1598121027}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1327588517"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2000182491}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1151668852"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{734787757}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_820943533"}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{234229950}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1972810467"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{91864538}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
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
