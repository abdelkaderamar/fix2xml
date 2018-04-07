#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::CollateralAssignment msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_0;
  set_field(msg, FIX::Account{"STRING_1229145610"}, CollateralAssignment_0);
  set_field(msg, FIX::AccountType{2}, CollateralAssignment_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("9292547");
set_field(msg, AccruedInterestAmt_3, CollateralAssignment_0);
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("19721107");
set_field(msg, CashOutstanding_0, CollateralAssignment_0);
  set_field(msg, FIX::ClOrdID{"STRING_1918389682"}, CollateralAssignment_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1302768198"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnID{"STRING_1912483145"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnReason{6}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnRefID{"STRING_144130076"}, CollateralAssignment_0);
  set_field(msg, FIX::CollAsgnTransType{2}, CollateralAssignment_0);
  set_field(msg, FIX::CollReqID{"STRING_1438117878"}, CollateralAssignment_0);
  set_field(msg, FIX::Currency{"USD"}, CollateralAssignment_0);
  set_field(msg, FIX::EncodedText{"DATA_1535650329"}, CollateralAssignment_0);
  set_field(msg, FIX::EncodedTextLen{400091867}, CollateralAssignment_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("18998843");
set_field(msg, EndAccruedInterestAmt_3, CollateralAssignment_0);
  FIX::EndCash EndCash_3;
  EndCash_3.setString("7543509");
set_field(msg, EndCash_3, CollateralAssignment_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(18, 1, 41, 19, 9, 2007)}, CollateralAssignment_0);
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("18810452");
set_field(msg, MarginExcess_0, CollateralAssignment_0);
  set_field(msg, FIX::OrderID{"STRING_1485786402"}, CollateralAssignment_0);
  FIX::Price Price_3;
  Price_3.setString("12542369");
set_field(msg, Price_3, CollateralAssignment_0);
  set_field(msg, FIX::PriceType{3}, CollateralAssignment_0);
  set_field(msg, FIX::QtyType{2}, CollateralAssignment_0);
  FIX::Quantity Quantity_5;
  Quantity_5.setString("6595467");
set_field(msg, Quantity_5, CollateralAssignment_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1288447992"}, CollateralAssignment_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_2137514679"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_32788154"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, CollateralAssignment_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1962141819"}, CollateralAssignment_0);
  set_field(msg, FIX::Side{'D'}, CollateralAssignment_0);
  FIX::StartCash StartCash_3;
  StartCash_3.setString("13729872");
set_field(msg, StartCash_3, CollateralAssignment_0);
  set_field(msg, FIX::Text{"STRING_1727141316"}, CollateralAssignment_0);
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("847363");
set_field(msg, TotalNetValue_0, CollateralAssignment_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, CollateralAssignment_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, CollateralAssignment_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(21, 48, 5, 1, 11, 2007)}, CollateralAssignment_0);
  all_values.push_back(CollateralAssignment_0);

  all_compo_names.insert("CollateralAssignment");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_313797644"}, ExecCollGrp_NoExecs_0);
    all_values.push_back(ExecCollGrp_NoExecs_0);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_317141106"}, ExecCollGrp_NoExecs_1);
    all_values.push_back(ExecCollGrp_NoExecs_1);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_1237194322"}, ExecCollGrp_NoExecs_2);
    all_values.push_back(ExecCollGrp_NoExecs_2);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2090898851"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementDesc{"STRING_1599200124"}, FinancingDetails_3);
  set_field(msg, FIX::AgreementID{"STRING_1818174212"}, FinancingDetails_3);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_3);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1431426426"}, FinancingDetails_3);
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("96.340000");
set_field(msg, MarginRatio_3, FinancingDetails_3);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1857198931"}, FinancingDetails_3);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_3);
  all_values.push_back(FinancingDetails_3);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1889987085"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{642609838}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_383748836"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1693681273}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2015597104"}, InstrumentLeg_10);
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("21108901");
set_field(noLegs_0_0, LegContractMultiplier_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1778417579}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1385230797"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_443761560"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1153788116"}, InstrumentLeg_10);
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("28.590000");
set_field(noLegs_0_0, LegCouponRate_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_259805500"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1975733822"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1582697166}, InstrumentLeg_10);
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("20153588");
set_field(noLegs_0_0, LegFactor_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{142047818}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1899838272"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1105069523"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_2007686374"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_84742435"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1048484727"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1459402850"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1902916647"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_98653241"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'7'}, InstrumentLeg_10);
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("3344926");
set_field(noLegs_0_0, LegOptionRatio_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1955852172"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1315736400"}, InstrumentLeg_10);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("9035832");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegProduct{1698355610}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1958346238}, InstrumentLeg_10);
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("12873321");
set_field(noLegs_0_0, LegRatioQty_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1244553235"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1826459694"}, InstrumentLeg_10);
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("86.400000");
set_field(noLegs_0_0, LegRepurchaseRate_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{875487167}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1064206844"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1694500200"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2029275283"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_307986055"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1954305700"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1946600616"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1782555874"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_10);
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("19246036");
set_field(noLegs_0_0, LegStrikePrice_10, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1134168759"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_930833919"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1784806418"}, InstrumentLeg_10);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1218911194"}, InstrumentLeg_10);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("19793186");
set_field(noLegs_0_0, LegUnitOfMeasureQty_10, InstrumentLeg_10);
    all_values.push_back(InstrumentLeg_10);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_974344194"}, LegSecAltIDGrp_NoLegSecurityAltID_21);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_2077971887"}, LegSecAltIDGrp_NoLegSecurityAltID_21);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_11;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1840071250"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1308836827}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1886340412"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1008324002}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_64936478"}, InstrumentLeg_11);
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("14372123");
set_field(noLegs_0_1, LegContractMultiplier_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{819186592}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1352268614"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_534281961"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_498162639"}, InstrumentLeg_11);
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("36.060000");
set_field(noLegs_0_1, LegCouponRate_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1409769128"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1291560763"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1870355538}, InstrumentLeg_11);
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("19568458");
set_field(noLegs_0_1, LegFactor_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1090677732}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1828244733"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1591918084"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_325008219"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1654009129"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1369038128"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1459176978"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_437359400"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1006360899"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'5'}, InstrumentLeg_11);
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("2691943");
set_field(noLegs_0_1, LegOptionRatio_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_2103086520"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1504948719"}, InstrumentLeg_11);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("1996826");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegProduct{1795674122}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegPutOrCall{666301898}, InstrumentLeg_11);
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("20860230");
set_field(noLegs_0_1, LegRatioQty_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_656514476"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_731238377"}, InstrumentLeg_11);
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("17.760000");
set_field(noLegs_0_1, LegRepurchaseRate_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1475701068}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_2083506991"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1910033738"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1973863707"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_391546949"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1172319218"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1388749542"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSide{'3'}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_316396334"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_11);
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("14070740");
set_field(noLegs_0_1, LegStrikePrice_11, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_792382517"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1795367401"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1732082285"}, InstrumentLeg_11);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_298907998"}, InstrumentLeg_11);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("10169218");
set_field(noLegs_0_1, LegUnitOfMeasureQty_11, InstrumentLeg_11);
    all_values.push_back(InstrumentLeg_11);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_736267399"}, LegSecAltIDGrp_NoLegSecurityAltID_22);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_2023282780"}, LegSecAltIDGrp_NoLegSecurityAltID_22);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("1.400000");
set_field(msg, AttachmentPoint_8, Instrument_8);
  set_field(msg, FIX::CFICode{"STRING_1005461798"}, Instrument_8);
  set_field(msg, FIX::CPProgram{99}, Instrument_8);
  set_field(msg, FIX::CPRegType{"STRING_931845211"}, Instrument_8);
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("12051444");
set_field(msg, CapPrice_8, Instrument_8);
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("16270761");
set_field(msg, ContractMultiplier_8, Instrument_8);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_8);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1143683839"}, Instrument_8);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_136106954"}, Instrument_8);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_181901839"}, Instrument_8);
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("19.670000");
set_field(msg, CouponRate_8, Instrument_8);
  set_field(msg, FIX::CreditRating{"STRING_1611808023"}, Instrument_8);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_117925182"}, Instrument_8);
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("20.570000");
set_field(msg, DetachmentPoint_8, Instrument_8);
  set_field(msg, FIX::EncodedIssuer{"DATA_1438188082"}, Instrument_8);
  set_field(msg, FIX::EncodedIssuerLen{509472131}, Instrument_8);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1306821276"}, Instrument_8);
  set_field(msg, FIX::EncodedSecurityDescLen{679453977}, Instrument_8);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_8);
  FIX::Factor Factor_8;
  Factor_8.setString("16232176");
set_field(msg, Factor_8, Instrument_8);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_8);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_8);
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("8828080");
set_field(msg, FloorPrice_8, Instrument_8);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_8);
  set_field(msg, FIX::InstrRegistry{"STRING_754892308"}, Instrument_8);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_8);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_734882277"}, Instrument_8);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1771814189"}, Instrument_8);
  set_field(msg, FIX::Issuer{"STRING_1511182280"}, Instrument_8);
  set_field(msg, FIX::ListMethod{0}, Instrument_8);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1647613322"}, Instrument_8);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_938078773"}, Instrument_8);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_329127826"}, Instrument_8);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1479015326"}, Instrument_8);
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("18699239");
set_field(msg, MinPriceIncrement_8, Instrument_8);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("15342722");
set_field(msg, MinPriceIncrementAmount_8, Instrument_8);
  set_field(msg, FIX::NTPositionLimit{958607805}, Instrument_8);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("74.460000");
set_field(msg, NotionalPercentageOutstanding_8, Instrument_8);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_8);
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("10947147");
set_field(msg, OptPayoutAmount_8, Instrument_8);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_8);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("44.210000");
set_field(msg, OriginalNotionalPercentageOutstanding_8, Instrument_8);
  set_field(msg, FIX::Pool{"STRING_559039134"}, Instrument_8);
  set_field(msg, FIX::PositionLimit{1620414467}, Instrument_8);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_8);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1997227217"}, Instrument_8);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("21298865");
set_field(msg, PriceUnitOfMeasureQty_8, Instrument_8);
  set_field(msg, FIX::Product{1}, Instrument_8);
  set_field(msg, FIX::ProductComplex{"STRING_529197546"}, Instrument_8);
  set_field(msg, FIX::PutOrCall{0}, Instrument_8);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1819481717"}, Instrument_8);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_172789307"}, Instrument_8);
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("7.430000");
set_field(msg, RepurchaseRate_8, Instrument_8);
  set_field(msg, FIX::RepurchaseTerm{554806097}, Instrument_8);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_8);
  set_field(msg, FIX::SecurityDesc{"STRING_600379403"}, Instrument_8);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1022212762"}, Instrument_8);
  set_field(msg, FIX::SecurityGroup{"STRING_1343645864"}, Instrument_8);
  set_field(msg, FIX::SecurityID{"STRING_224709945"}, Instrument_8);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_8);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_8);
  set_field(msg, FIX::SecuritySubType{"STRING_1872323267"}, Instrument_8);
  set_field(msg, FIX::SecurityType{"STRING_TLQN"}, Instrument_8);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_8);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_8);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1046430504"}, Instrument_8);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_383228334"}, Instrument_8);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_8);
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("9137007");
set_field(msg, StrikeMultiplier_8, Instrument_8);
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("11096938");
set_field(msg, StrikePrice_8, Instrument_8);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_8);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("52.090000");
set_field(msg, StrikePriceBoundaryPrecision_8, Instrument_8);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_8);
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("11949544");
set_field(msg, StrikeValue_8, Instrument_8);
  set_field(msg, FIX::Symbol{"STRING_705568040"}, Instrument_8);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_8);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_8);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_8);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_8);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("20633195");
set_field(msg, UnitOfMeasureQty_8, Instrument_8);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_8);
  all_values.push_back(Instrument_8);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_17;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("11286363");
set_field(noComplexEvents_0_0, ComplexEventPrice_17, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("23.970000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_17, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("5864123");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_17, ComplexEvents_NoComplexEvents_17);
    all_values.push_back(ComplexEvents_NoComplexEvents_17);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 49, 25, 27, 6, 2007)}, ComplexEventDates_NoComplexEventDates_37);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 39, 3, 24, 1, 2014)}, ComplexEventDates_NoComplexEventDates_37);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 25, 8)}, ComplexEventTimes_NoComplexEventTimes_66);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 57, 32)}, ComplexEventTimes_NoComplexEventTimes_66);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 41, 35)}, ComplexEventTimes_NoComplexEventTimes_67);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 38, 40)}, ComplexEventTimes_NoComplexEventTimes_67);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 21, 46, 14, 4, 2009)}, ComplexEventDates_NoComplexEventDates_38);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 28, 23, 3, 5, 2001)}, ComplexEventDates_NoComplexEventDates_38);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 48, 50)}, ComplexEventTimes_NoComplexEventTimes_68);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 47, 30)}, ComplexEventTimes_NoComplexEventTimes_68);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 11, 57)}, ComplexEventTimes_NoComplexEventTimes_69);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 35, 51)}, ComplexEventTimes_NoComplexEventTimes_69);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 13, 45, 25, 9, 2004)}, ComplexEventDates_NoComplexEventDates_39);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 2, 21, 22, 8, 2010)}, ComplexEventDates_NoComplexEventDates_39);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 28, 54)}, ComplexEventTimes_NoComplexEventTimes_70);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 33, 41)}, ComplexEventTimes_NoComplexEventTimes_70);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 53, 52)}, ComplexEventTimes_NoComplexEventTimes_71);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 19, 26)}, ComplexEventTimes_NoComplexEventTimes_71);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("6992092");
set_field(noComplexEvents_0_1, ComplexEventPrice_18, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("38.560000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_18, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("19118369");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_18, ComplexEvents_NoComplexEvents_18);
    all_values.push_back(ComplexEvents_NoComplexEvents_18);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 46, 4, 8, 8, 2008)}, ComplexEventDates_NoComplexEventDates_40);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 5, 7, 20, 2, 2011)}, ComplexEventDates_NoComplexEventDates_40);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 46, 8)}, ComplexEventTimes_NoComplexEventTimes_72);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 27, 48)}, ComplexEventTimes_NoComplexEventTimes_72);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 11, 5)}, ComplexEventTimes_NoComplexEventTimes_73);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 48, 19)}, ComplexEventTimes_NoComplexEventTimes_73);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
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
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2053151194"}, EvntGrp_NoEvents_20);
    FIX::EventPx EventPx_20;
    EventPx_20.setString("4351977");
set_field(noEvents_0_0, EventPx_20, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventText{"STRING_976199868"}, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(13, 33, 47, 17, 7, 2013)}, EvntGrp_NoEvents_20);
    set_field(noEvents_0_0, FIX::EventType{10}, EvntGrp_NoEvents_20);
    all_values.push_back(EvntGrp_NoEvents_20);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_21;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1801441447"}, EvntGrp_NoEvents_21);
    FIX::EventPx EventPx_21;
    EventPx_21.setString("16054674");
set_field(noEvents_0_1, EventPx_21, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1620231751"}, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 17, 31, 2, 4, 2017)}, EvntGrp_NoEvents_21);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_21);
    all_values.push_back(EvntGrp_NoEvents_21);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_22;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_417637936"}, EvntGrp_NoEvents_22);
    FIX::EventPx EventPx_22;
    EventPx_22.setString("101236");
set_field(noEvents_0_2, EventPx_22, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1179421230"}, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(15, 29, 2, 14, 2, 2004)}, EvntGrp_NoEvents_22);
    set_field(noEvents_0_2, FIX::EventType{9}, EvntGrp_NoEvents_22);
    all_values.push_back(EvntGrp_NoEvents_22);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1196598963"}, InstrumentParties_NoInstrumentParties_12);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_12);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1039545447}, InstrumentParties_NoInstrumentParties_12);
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1143158191"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1307572737}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1773002857"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{20676472}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_961530536"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1230986697}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1640908223"}, InstrumentParties_NoInstrumentParties_13);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_13);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{339438845}, InstrumentParties_NoInstrumentParties_13);
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1419639411"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1912572704}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1343201880"}, InstrumentParties_NoInstrumentParties_14);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_14);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{658067095}, InstrumentParties_NoInstrumentParties_14);
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1232584251"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1837488325}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1321732471"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{111980746}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1884220434"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1937716773}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2065398308"}, SecAltIDGrp_NoSecurityAltID_15);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_311884974"}, SecAltIDGrp_NoSecurityAltID_15);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  set_field(msg, FIX::SecurityXML{"XMLDATA_667133549"}, SecurityXML_16);
  set_field(msg, FIX::SecurityXMLLen{1075292402}, SecurityXML_16);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1508483937"}, SecurityXML_16);
  all_values.push_back(SecurityXML_16);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_9;
    FIX::MiscFeeAmt MiscFeeAmt_9;
    MiscFeeAmt_9.setString("21148378");
set_field(noMiscFees_0_0, MiscFeeAmt_9, MiscFeesGrp_NoMiscFees_9);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_9);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_9);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_2"}, MiscFeesGrp_NoMiscFees_9);
    all_values.push_back(MiscFeesGrp_NoMiscFees_9);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_88973826"}, Parties_NoPartyIDs_18);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_18);
    set_field(noPartyIDs_0_0, FIX::PartyRole{32}, Parties_NoPartyIDs_18);
    all_values.push_back(Parties_NoPartyIDs_18);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_424333084"}, PtysSubGrp_NoPartySubIDs_37);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_37);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_486040930"}, PtysSubGrp_NoPartySubIDs_38);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_38);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1832520715"}, PtysSubGrp_NoPartySubIDs_39);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_39);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_847489235"}, Parties_NoPartyIDs_19);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_19);
    set_field(noPartyIDs_0_1, FIX::PartyRole{62}, Parties_NoPartyIDs_19);
    all_values.push_back(Parties_NoPartyIDs_19);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_620125707"}, PtysSubGrp_NoPartySubIDs_40);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_40);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_274230699"}, PtysSubGrp_NoPartySubIDs_41);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_41);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_3799343"}, Parties_NoPartyIDs_20);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_20);
    set_field(noPartyIDs_0_2, FIX::PartyRole{49}, Parties_NoPartyIDs_20);
    all_values.push_back(Parties_NoPartyIDs_20);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1267437761"}, PtysSubGrp_NoPartySubIDs_42);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_42);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1437557684"}, PtysSubGrp_NoPartySubIDs_43);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_43);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1459116075"}, PtysSubGrp_NoPartySubIDs_44);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_44);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_5;
  set_field(msg, FIX::SettlDeliveryType{0}, SettlInstructionsData_5);
  set_field(msg, FIX::StandInstDbID{"STRING_313023616"}, SettlInstructionsData_5);
  set_field(msg, FIX::StandInstDbName{"STRING_982832824"}, SettlInstructionsData_5);
  set_field(msg, FIX::StandInstDbType{3}, SettlInstructionsData_5);
  all_values.push_back(SettlInstructionsData_5);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_12;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_12);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_12);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_12);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_20;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_748552041"}, SettlParties_NoSettlPartyIDs_20);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_20);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{1011673079}, SettlParties_NoSettlPartyIDs_20);
      all_values.push_back(SettlParties_NoSettlPartyIDs_20);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_1712153079"}, SettlPtysSubGrp_NoSettlPartySubIDs_43);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{1859162314}, SettlPtysSubGrp_NoSettlPartySubIDs_43);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_21;
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyID{"STRING_1879465993"}, SettlParties_NoSettlPartyIDs_21);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_21);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyRole{249172578}, SettlParties_NoSettlPartyIDs_21);
      all_values.push_back(SettlParties_NoSettlPartyIDs_21);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubID{"STRING_1263854490"}, SettlPtysSubGrp_NoSettlPartySubIDs_44);
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubIDType{523403277}, SettlPtysSubGrp_NoSettlPartySubIDs_44);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EONIA"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1484710693"}, SpreadOrBenchmarkCurveData_3);
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("19385867");
set_field(msg, BenchmarkPrice_3, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkPriceType{1982986397}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1567954789"}, SpreadOrBenchmarkCurveData_3);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1228660762"}, SpreadOrBenchmarkCurveData_3);
  FIX::Spread Spread_3;
  Spread_3.setString("10702947");
set_field(msg, Spread_3, SpreadOrBenchmarkCurveData_3);
  all_values.push_back(SpreadOrBenchmarkCurveData_3);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_MAXBAL"}, Stipulations_NoStipulations_6);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1432529963"}, Stipulations_NoStipulations_6);
    all_values.push_back(Stipulations_NoStipulations_6);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PXSOURCE"}, Stipulations_NoStipulations_7);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1263866957"}, Stipulations_NoStipulations_7);
    all_values.push_back(Stipulations_NoStipulations_7);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_BANKQUAL"}, Stipulations_NoStipulations_8);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1590528688"}, Stipulations_NoStipulations_8);
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
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_1401349639"}, TrdCollGrp_NoTrades_0);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_265295979"}, TrdCollGrp_NoTrades_0);
    all_values.push_back(TrdCollGrp_NoTrades_0);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_124168557"}, TrdCollGrp_NoTrades_1);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1405001166"}, TrdCollGrp_NoTrades_1);
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
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_O"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(9, 22, 44, 11, 9, 2004)}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1711966860"}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_0);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_DIR"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(5, 9, 53, 14, 2, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_2129148143"}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_1);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_CNH"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_AR"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(7, 16, 35, 9, 6, 2015)}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_328947245"}, TrdRegTimestamps_NoTrdRegTimestamps_2);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_2);
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
    set_field(noUnderlyings_0_0, FIX::CollAction{1}, UndInstrmtCollGrp_NoUnderlyings_0);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_0);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_12;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1509697057"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{764761925}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_227626612"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1074180270}, UnderlyingInstrument_12);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("10940504");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_12, UnderlyingInstrument_12);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("86.070000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_12, UnderlyingInstrument_12);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("65.610000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1258841812"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1131181744"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1014013614"}, UnderlyingInstrument_12);
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("3464441");
set_field(noUnderlyings_0_0, UnderlyingCapValue_12, UnderlyingInstrument_12);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("252984");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_12);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("8665765");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{112025987}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1860959295"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1122964277"}, UnderlyingInstrument_12);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("22.130000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1218240306"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_12);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("6996898");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_12, UnderlyingInstrument_12);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("29.030000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_12, UnderlyingInstrument_12);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("5089047");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_12, UnderlyingInstrument_12);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("7388971");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_12, UnderlyingInstrument_12);
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("12859147");
set_field(noUnderlyings_0_0, UnderlyingEndValue_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{422106428}, UnderlyingInstrument_12);
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("10678443");
set_field(noUnderlyings_0_0, UnderlyingFXRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_12);
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("15731284");
set_field(noUnderlyings_0_0, UnderlyingFactor_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2038639661}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1713512189"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_190406699"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_118782625"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_640208811"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1284457193"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1087951233"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1069975372"}, UnderlyingInstrument_12);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("53.570000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_12);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("89.860000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_742259550"}, UnderlyingInstrument_12);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("969477");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1815800139}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1608836089}, UnderlyingInstrument_12);
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("2089737");
set_field(noUnderlyings_0_0, UnderlyingPx_12, UnderlyingInstrument_12);
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("15292757");
set_field(noUnderlyings_0_0, UnderlyingQty_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_584316718"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1998255978"}, UnderlyingInstrument_12);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("24.440000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1217534726}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1435123100"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1299722318"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_618523981"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1944027837"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2038619425"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1904438730"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_218650617"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_958980129"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2108253862"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_12);
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("8501361");
set_field(noUnderlyings_0_0, UnderlyingStartValue_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1674282403"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_12);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("1670075");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_12, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1119159282"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2056870001"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1236982938"}, UnderlyingInstrument_12);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1514974639"}, UnderlyingInstrument_12);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("21285193");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_12, UnderlyingInstrument_12);
    all_values.push_back(UnderlyingInstrument_12);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_109750542"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_77983460"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_841804767"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1718586631"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_286957225"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_223596906"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_137729555"}, UnderlyingStipulations_NoUnderlyingStips_24);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_823629350"}, UnderlyingStipulations_NoUnderlyingStips_24);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1572852655"}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1991478409}, UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2014487445"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1748433491}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1588047461"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{825983926}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1709203705"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1232342851}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1676120069"}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1067044941}, UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1403010026"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{38720575}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_406941542"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{492509316}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1553695215"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{387977224}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1665997593"}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{465960684}, UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1234548740"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{752917909}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_583915618"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1389968441}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
    multiset<string> UnderlyingInstrument_13;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1407544969"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{615439221}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_316016471"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1383412989}, UnderlyingInstrument_13);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("4594339");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_13, UnderlyingInstrument_13);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("33.150000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_13, UnderlyingInstrument_13);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("67.870000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_60383825"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1125977128"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2076400713"}, UnderlyingInstrument_13);
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("17695875");
set_field(noUnderlyings_0_1, UnderlyingCapValue_13, UnderlyingInstrument_13);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("2108363");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_13);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("8581063");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1277881272}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_2102592323"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_113632722"}, UnderlyingInstrument_13);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("18.480000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_362050217"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_13);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("7500274");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_13, UnderlyingInstrument_13);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("59.830000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_13, UnderlyingInstrument_13);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("2387755");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_13, UnderlyingInstrument_13);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("12159881");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_13, UnderlyingInstrument_13);
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("4849746");
set_field(noUnderlyings_0_1, UnderlyingEndValue_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1473324264}, UnderlyingInstrument_13);
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("19689060");
set_field(noUnderlyings_0_1, UnderlyingFXRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_13);
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("7158090");
set_field(noUnderlyings_0_1, UnderlyingFactor_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{712069850}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_328951635"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1331248278"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1028086321"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1712364625"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1790682260"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_566015988"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_815297764"}, UnderlyingInstrument_13);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("60.860000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_13);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("48.290000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1473169969"}, UnderlyingInstrument_13);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("19028294");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{201768316}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{183792664}, UnderlyingInstrument_13);
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("10332270");
set_field(noUnderlyings_0_1, UnderlyingPx_13, UnderlyingInstrument_13);
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("1568769");
set_field(noUnderlyings_0_1, UnderlyingQty_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_297425386"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_202345272"}, UnderlyingInstrument_13);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("72.090000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{903567425}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_925158687"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1268954650"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1028223408"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1163934211"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_337459128"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1513198104"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_489774827"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_158881514"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_434604771"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_13);
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("8709513");
set_field(noUnderlyings_0_1, UnderlyingStartValue_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_763556406"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_13);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("3284373");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_32547128"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_317570027"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1143735147"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1883613214"}, UnderlyingInstrument_13);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("20095631");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_13, UnderlyingInstrument_13);
    all_values.push_back(UnderlyingInstrument_13);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1209299535"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1764908943"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1393092199"}, UnderlyingStipulations_NoUnderlyingStips_25);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_650652368"}, UnderlyingStipulations_NoUnderlyingStips_25);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_99111636"}, UnderlyingStipulations_NoUnderlyingStips_26);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1690517586"}, UnderlyingStipulations_NoUnderlyingStips_26);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_618038845"}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1778156328}, UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1474824771"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{794606891}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_76968976"}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1284381719}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1275143999"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{342481956}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1106801855"}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{731830471}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_219654141"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{764377599}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1175925921"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1363389288}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    set_field(noUnderlyings_0_2, FIX::CollAction{2}, UndInstrmtCollGrp_NoUnderlyings_2);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1038005416"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1103855617}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1709806700"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{655430712}, UnderlyingInstrument_14);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("10460902");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_14, UnderlyingInstrument_14);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("52.520000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_14, UnderlyingInstrument_14);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("30.800000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1145201899"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_498449190"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_11597072"}, UnderlyingInstrument_14);
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("17632407");
set_field(noUnderlyings_0_2, UnderlyingCapValue_14, UnderlyingInstrument_14);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("9450505");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_14);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("15027505");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{272391676}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_436876644"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1579719568"}, UnderlyingInstrument_14);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("9.040000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1721258363"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_14);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("20637403");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_14, UnderlyingInstrument_14);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("82.660000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_14, UnderlyingInstrument_14);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("1318080");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_14, UnderlyingInstrument_14);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("6480871");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_14, UnderlyingInstrument_14);
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("16332441");
set_field(noUnderlyings_0_2, UnderlyingEndValue_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{351462154}, UnderlyingInstrument_14);
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("14124647");
set_field(noUnderlyings_0_2, UnderlyingFXRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_14);
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("17148514");
set_field(noUnderlyings_0_2, UnderlyingFactor_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1912971907}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1699691850"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_671223412"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1475294960"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_207638914"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1717313674"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_283226564"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1513721994"}, UnderlyingInstrument_14);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("19.250000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_14);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("90.660000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_330789022"}, UnderlyingInstrument_14);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("17267263");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1167588819}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1833539614}, UnderlyingInstrument_14);
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("19991179");
set_field(noUnderlyings_0_2, UnderlyingPx_14, UnderlyingInstrument_14);
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("16044654");
set_field(noUnderlyings_0_2, UnderlyingQty_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1265775535"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_964565240"}, UnderlyingInstrument_14);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("1.780000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{933861946}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1205156495"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1094496849"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1708750212"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1336964508"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1742583991"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1194510725"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1688426662"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1007565085"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1856197158"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_14);
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("7730533");
set_field(noUnderlyings_0_2, UnderlyingStartValue_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1408405360"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_14);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("16160442");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1496847895"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_384091221"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_982282620"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_64396173"}, UnderlyingInstrument_14);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("11657669");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_14, UnderlyingInstrument_14);
    all_values.push_back(UnderlyingInstrument_14);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_395185195"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_745009634"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1527706858"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_81241161"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_984688673"}, UnderlyingStipulations_NoUnderlyingStips_27);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1347016696"}, UnderlyingStipulations_NoUnderlyingStips_27);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_15445203"}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{618882057}, UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1842145207"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1955846565}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_705042395"}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1496789580}, UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_597885794"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{605100389}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_338177178"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2006291155}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_384634610"}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{1474851781}, UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_823133056"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{309650754}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
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
