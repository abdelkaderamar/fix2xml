#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_0;
  set_field(msg, FIX::Account{"STRING_1187082639"}, CollateralReport_0);
  set_field(msg, FIX::AccountType{7}, CollateralReport_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("1057029");
set_field(msg, AccruedInterestAmt_5, CollateralReport_0);
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("19671230");
set_field(msg, CashOutstanding_2, CollateralReport_0);
  set_field(msg, FIX::ClOrdID{"STRING_1258679119"}, CollateralReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_811994508"}, CollateralReport_0);
  set_field(msg, FIX::CollApplType{0}, CollateralReport_0);
  set_field(msg, FIX::CollInquiryID{"STRING_1353347234"}, CollateralReport_0);
  set_field(msg, FIX::CollRptID{"STRING_48945125"}, CollateralReport_0);
  set_field(msg, FIX::CollStatus{0}, CollateralReport_0);
  set_field(msg, FIX::Currency{"GBP"}, CollateralReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1318171089"}, CollateralReport_0);
  set_field(msg, FIX::EncodedTextLen{325380903}, CollateralReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("19513511");
set_field(msg, EndAccruedInterestAmt_5, CollateralReport_0);
  FIX::EndCash EndCash_5;
  EndCash_5.setString("20194692");
set_field(msg, EndCash_5, CollateralReport_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_2"}, CollateralReport_0);
  set_field(msg, FIX::LastRptRequested{false}, CollateralReport_0);
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("6018450");
set_field(msg, MarginExcess_2, CollateralReport_0);
  set_field(msg, FIX::OrderID{"STRING_1691058973"}, CollateralReport_0);
  FIX::Price Price_5;
  Price_5.setString("20999889");
set_field(msg, Price_5, CollateralReport_0);
  set_field(msg, FIX::PriceType{7}, CollateralReport_0);
  set_field(msg, FIX::QtyType{1}, CollateralReport_0);
  FIX::Quantity Quantity_8;
  Quantity_8.setString("19130727");
set_field(msg, Quantity_8, CollateralReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_318771478"}, CollateralReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_316301663"}, CollateralReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1451324184"}, CollateralReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, CollateralReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_629344280"}, CollateralReport_0);
  set_field(msg, FIX::Side{'6'}, CollateralReport_0);
  FIX::StartCash StartCash_5;
  StartCash_5.setString("15792168");
set_field(msg, StartCash_5, CollateralReport_0);
  set_field(msg, FIX::Text{"STRING_1816426920"}, CollateralReport_0);
  set_field(msg, FIX::TotNumReports{1485905549}, CollateralReport_0);
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("16849197");
set_field(msg, TotalNetValue_2, CollateralReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_1"}, CollateralReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, CollateralReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 54, 13, 16, 7, 2003)}, CollateralReport_0);
  all_values.push_back(CollateralReport_0);

  all_compo_names.insert("CollateralReport");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_401930889"}, ExecCollGrp_NoExecs_4);
    all_values.push_back(ExecCollGrp_NoExecs_4);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_411295057"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementDesc{"STRING_1749079700"}, FinancingDetails_6);
  set_field(msg, FIX::AgreementID{"STRING_1570329248"}, FinancingDetails_6);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_6);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1701584970"}, FinancingDetails_6);
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("16.120000");
set_field(msg, MarginRatio_6, FinancingDetails_6);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1782988610"}, FinancingDetails_6);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_6);
  all_values.push_back(FinancingDetails_6);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_14;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2099290273"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{771014574}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_481876253"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{581150906}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_924821203"}, InstrumentLeg_14);
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("20610930");
set_field(noLegs_0_0, LegContractMultiplier_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{250094178}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_263243104"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1598529206"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1886160450"}, InstrumentLeg_14);
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("41.240000");
set_field(noLegs_0_0, LegCouponRate_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1947959854"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_198851979"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{903741286}, InstrumentLeg_14);
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("7398587");
set_field(noLegs_0_0, LegFactor_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1739731506}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_2000239876"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1141789607"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_936994923"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_821240402"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1553084664"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_538590976"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_244086002"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1507955047"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_14);
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("3461376");
set_field(noLegs_0_0, LegOptionRatio_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1143460010"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1559866336"}, InstrumentLeg_14);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("7669607");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegProduct{1095266635}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPutOrCall{183397262}, InstrumentLeg_14);
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("12488369");
set_field(noLegs_0_0, LegRatioQty_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1676417541"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1108218465"}, InstrumentLeg_14);
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("63.770000");
set_field(noLegs_0_0, LegRepurchaseRate_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1926511719}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1371461569"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_613491936"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1665188522"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_84322045"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_413968142"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_643118659"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_612820121"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_14);
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("2050679");
set_field(noLegs_0_0, LegStrikePrice_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1399616173"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_481795453"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1142062903"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_73372928"}, InstrumentLeg_14);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("20348801");
set_field(noLegs_0_0, LegUnitOfMeasureQty_14, InstrumentLeg_14);
    all_values.push_back(InstrumentLeg_14);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_317458930"}, LegSecAltIDGrp_NoLegSecurityAltID_29);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1395351517"}, LegSecAltIDGrp_NoLegSecurityAltID_29);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1773346177"}, LegSecAltIDGrp_NoLegSecurityAltID_30);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_663596545"}, LegSecAltIDGrp_NoLegSecurityAltID_30);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_391327879"}, LegSecAltIDGrp_NoLegSecurityAltID_31);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1185728865"}, LegSecAltIDGrp_NoLegSecurityAltID_31);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_15;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1430557249"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1486594514}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1369126127"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{531910559}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1015528408"}, InstrumentLeg_15);
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("3298609");
set_field(noLegs_0_1, LegContractMultiplier_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1694356937}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_794556479"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1701322513"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_160365225"}, InstrumentLeg_15);
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("13.530000");
set_field(noLegs_0_1, LegCouponRate_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1785644558"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_385791687"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1187153488}, InstrumentLeg_15);
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("3547563");
set_field(noLegs_0_1, LegFactor_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1873281181}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1392221467"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1754372484"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_207592986"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_386800722"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1827745412"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_94989455"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_2067454601"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_2145204342"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_15);
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("16933171");
set_field(noLegs_0_1, LegOptionRatio_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_661317239"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1881668851"}, InstrumentLeg_15);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("7315623");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegProduct{2091874489}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1220779718}, InstrumentLeg_15);
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("21006884");
set_field(noLegs_0_1, LegRatioQty_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_476301400"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_88824478"}, InstrumentLeg_15);
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("57.700000");
set_field(noLegs_0_1, LegRepurchaseRate_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{23174689}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_883380957"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1984388283"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_183539914"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1195642311"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1622549194"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_757873281"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSide{'3'}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_2008340881"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_15);
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("17341384");
set_field(noLegs_0_1, LegStrikePrice_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1189764589"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_2112667470"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1941731400"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1576565311"}, InstrumentLeg_15);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("17929292");
set_field(noLegs_0_1, LegUnitOfMeasureQty_15, InstrumentLeg_15);
    all_values.push_back(InstrumentLeg_15);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1496536265"}, LegSecAltIDGrp_NoLegSecurityAltID_32);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1790649929"}, LegSecAltIDGrp_NoLegSecurityAltID_32);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1379578180"}, LegSecAltIDGrp_NoLegSecurityAltID_33);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1042369747"}, LegSecAltIDGrp_NoLegSecurityAltID_33);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_304483520"}, LegSecAltIDGrp_NoLegSecurityAltID_34);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1113763383"}, LegSecAltIDGrp_NoLegSecurityAltID_34);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("20.950000");
set_field(msg, AttachmentPoint_11, Instrument_11);
  set_field(msg, FIX::CFICode{"STRING_248874361"}, Instrument_11);
  set_field(msg, FIX::CPProgram{1}, Instrument_11);
  set_field(msg, FIX::CPRegType{"STRING_1727136921"}, Instrument_11);
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("7251757");
set_field(msg, CapPrice_11, Instrument_11);
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("2758839");
set_field(msg, ContractMultiplier_11, Instrument_11);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_11);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_748350451"}, Instrument_11);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1159264889"}, Instrument_11);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1847107327"}, Instrument_11);
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("3.660000");
set_field(msg, CouponRate_11, Instrument_11);
  set_field(msg, FIX::CreditRating{"STRING_207423552"}, Instrument_11);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1322172873"}, Instrument_11);
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("36.470000");
set_field(msg, DetachmentPoint_11, Instrument_11);
  set_field(msg, FIX::EncodedIssuer{"DATA_210962228"}, Instrument_11);
  set_field(msg, FIX::EncodedIssuerLen{1183030106}, Instrument_11);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1487306769"}, Instrument_11);
  set_field(msg, FIX::EncodedSecurityDescLen{569257214}, Instrument_11);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_11);
  FIX::Factor Factor_11;
  Factor_11.setString("5295877");
set_field(msg, Factor_11, Instrument_11);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_11);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_11);
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("21061530");
set_field(msg, FloorPrice_11, Instrument_11);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_11);
  set_field(msg, FIX::InstrRegistry{"STRING_453169832"}, Instrument_11);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_11);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1970536552"}, Instrument_11);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1832748012"}, Instrument_11);
  set_field(msg, FIX::Issuer{"STRING_350091738"}, Instrument_11);
  set_field(msg, FIX::ListMethod{1}, Instrument_11);
  set_field(msg, FIX::LocaleOfIssue{"STRING_799027747"}, Instrument_11);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2124023833"}, Instrument_11);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_376410786"}, Instrument_11);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_986087201"}, Instrument_11);
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("17036771");
set_field(msg, MinPriceIncrement_11, Instrument_11);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("11015865");
set_field(msg, MinPriceIncrementAmount_11, Instrument_11);
  set_field(msg, FIX::NTPositionLimit{1261971132}, Instrument_11);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("61.500000");
set_field(msg, NotionalPercentageOutstanding_11, Instrument_11);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_11);
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("2737523");
set_field(msg, OptPayoutAmount_11, Instrument_11);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_11);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("37.180000");
set_field(msg, OriginalNotionalPercentageOutstanding_11, Instrument_11);
  set_field(msg, FIX::Pool{"STRING_481175925"}, Instrument_11);
  set_field(msg, FIX::PositionLimit{440709055}, Instrument_11);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_11);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_692138153"}, Instrument_11);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("16237391");
set_field(msg, PriceUnitOfMeasureQty_11, Instrument_11);
  set_field(msg, FIX::Product{11}, Instrument_11);
  set_field(msg, FIX::ProductComplex{"STRING_1261395368"}, Instrument_11);
  set_field(msg, FIX::PutOrCall{0}, Instrument_11);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_46034548"}, Instrument_11);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1795836405"}, Instrument_11);
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("30.110000");
set_field(msg, RepurchaseRate_11, Instrument_11);
  set_field(msg, FIX::RepurchaseTerm{4703922}, Instrument_11);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_11);
  set_field(msg, FIX::SecurityDesc{"STRING_1263042843"}, Instrument_11);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1459909560"}, Instrument_11);
  set_field(msg, FIX::SecurityGroup{"STRING_1798775933"}, Instrument_11);
  set_field(msg, FIX::SecurityID{"STRING_948307207"}, Instrument_11);
  set_field(msg, FIX::SecurityIDSource{"STRING_7"}, Instrument_11);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_11);
  set_field(msg, FIX::SecuritySubType{"STRING_1747334954"}, Instrument_11);
  set_field(msg, FIX::SecurityType{"STRING_CORP"}, Instrument_11);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_11);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_11);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1342734942"}, Instrument_11);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1256826045"}, Instrument_11);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_11);
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("9592793");
set_field(msg, StrikeMultiplier_11, Instrument_11);
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("21216620");
set_field(msg, StrikePrice_11, Instrument_11);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_11);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("31.150000");
set_field(msg, StrikePriceBoundaryPrecision_11, Instrument_11);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_11);
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("3208926");
set_field(msg, StrikeValue_11, Instrument_11);
  set_field(msg, FIX::Symbol{"STRING_1770246832"}, Instrument_11);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_11);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_11);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_11);
  set_field(msg, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_11);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("430885");
set_field(msg, UnitOfMeasureQty_11, Instrument_11);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_11);
  all_values.push_back(Instrument_11);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("13374321");
set_field(noComplexEvents_0_0, ComplexEventPrice_20, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("44.360000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_20, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("9168279");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_20, ComplexEvents_NoComplexEvents_20);
    all_values.push_back(ComplexEvents_NoComplexEvents_20);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 8, 21, 13, 7, 2016)}, ComplexEventDates_NoComplexEventDates_37);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 55, 47, 5, 3, 2016)}, ComplexEventDates_NoComplexEventDates_37);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 11, 18)}, ComplexEventTimes_NoComplexEventTimes_87);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 9, 40)}, ComplexEventTimes_NoComplexEventTimes_87);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 22, 7, 25, 10, 2001)}, ComplexEventDates_NoComplexEventDates_38);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 17, 1, 16, 11, 2005)}, ComplexEventDates_NoComplexEventDates_38);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 14, 47)}, ComplexEventTimes_NoComplexEventTimes_88);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 45, 46)}, ComplexEventTimes_NoComplexEventTimes_88);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 49, 13)}, ComplexEventTimes_NoComplexEventTimes_89);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 15, 11)}, ComplexEventTimes_NoComplexEventTimes_89);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 33, 41)}, ComplexEventTimes_NoComplexEventTimes_90);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 16, 8)}, ComplexEventTimes_NoComplexEventTimes_90);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 10, 5, 27, 2, 2006)}, ComplexEventDates_NoComplexEventDates_39);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 38, 58, 14, 7, 2005)}, ComplexEventDates_NoComplexEventDates_39);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 45, 55)}, ComplexEventTimes_NoComplexEventTimes_91);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 10, 48)}, ComplexEventTimes_NoComplexEventTimes_91);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 14, 46)}, ComplexEventTimes_NoComplexEventTimes_92);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 2, 24)}, ComplexEventTimes_NoComplexEventTimes_92);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 26, 12)}, ComplexEventTimes_NoComplexEventTimes_93);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 36, 50)}, ComplexEventTimes_NoComplexEventTimes_93);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("16871047");
set_field(noComplexEvents_0_1, ComplexEventPrice_21, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("44.050000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_21, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("2743826");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_21, ComplexEvents_NoComplexEvents_21);
    all_values.push_back(ComplexEvents_NoComplexEvents_21);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 38, 1, 15, 1, 2007)}, ComplexEventDates_NoComplexEventDates_40);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 3, 11, 24, 9, 2006)}, ComplexEventDates_NoComplexEventDates_40);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 46, 51)}, ComplexEventTimes_NoComplexEventTimes_94);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 19, 55)}, ComplexEventTimes_NoComplexEventTimes_94);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 36, 26)}, ComplexEventTimes_NoComplexEventTimes_95);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 20, 8)}, ComplexEventTimes_NoComplexEventTimes_95);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 46, 17)}, ComplexEventTimes_NoComplexEventTimes_96);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 58, 36)}, ComplexEventTimes_NoComplexEventTimes_96);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 48, 20, 6, 11, 2004)}, ComplexEventDates_NoComplexEventDates_41);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 19, 48, 8, 2, 2007)}, ComplexEventDates_NoComplexEventDates_41);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 39, 56)}, ComplexEventTimes_NoComplexEventTimes_97);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 17, 50)}, ComplexEventTimes_NoComplexEventTimes_97);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 28, 56)}, ComplexEventTimes_NoComplexEventTimes_98);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 55, 57)}, ComplexEventTimes_NoComplexEventTimes_98);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 37, 30)}, ComplexEventTimes_NoComplexEventTimes_99);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 10, 5)}, ComplexEventTimes_NoComplexEventTimes_99);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 53, 50, 26, 6, 2005)}, ComplexEventDates_NoComplexEventDates_42);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 32, 41, 15, 9, 2010)}, ComplexEventDates_NoComplexEventDates_42);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 9, 32)}, ComplexEventTimes_NoComplexEventTimes_100);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 19, 16)}, ComplexEventTimes_NoComplexEventTimes_100);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 53, 44)}, ComplexEventTimes_NoComplexEventTimes_101);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 46, 4)}, ComplexEventTimes_NoComplexEventTimes_101);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 50, 25)}, ComplexEventTimes_NoComplexEventTimes_102);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 11, 23)}, ComplexEventTimes_NoComplexEventTimes_102);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
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
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_565102175"}, EvntGrp_NoEvents_28);
    FIX::EventPx EventPx_28;
    EventPx_28.setString("16795677");
set_field(noEvents_0_0, EventPx_28, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2028448544"}, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(6, 17, 59, 1, 8, 2017)}, EvntGrp_NoEvents_28);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_28);
    all_values.push_back(EvntGrp_NoEvents_28);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1315690643"}, EvntGrp_NoEvents_29);
    FIX::EventPx EventPx_29;
    EventPx_29.setString("3895428");
set_field(noEvents_0_1, EventPx_29, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventText{"STRING_682507761"}, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(10, 6, 13, 9, 4, 2017)}, EvntGrp_NoEvents_29);
    set_field(noEvents_0_1, FIX::EventType{11}, EvntGrp_NoEvents_29);
    all_values.push_back(EvntGrp_NoEvents_29);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1936881367"}, InstrumentParties_NoInstrumentParties_21);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_21);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1133136427}, InstrumentParties_NoInstrumentParties_21);
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1609494175"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1769202378}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1206971153"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1544931279}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_186820906"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{739055209}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1425896175"}, InstrumentParties_NoInstrumentParties_22);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_22);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1963213543}, InstrumentParties_NoInstrumentParties_22);
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1034307008"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{883603528}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_284819384"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{2042805031}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_134803832"}, InstrumentParties_NoInstrumentParties_23);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_23);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{284864217}, InstrumentParties_NoInstrumentParties_23);
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1798864236"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{51880163}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1489115820"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1267234481}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_317723989"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1125649207}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_28;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1575382339"}, SecAltIDGrp_NoSecurityAltID_28);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_770088289"}, SecAltIDGrp_NoSecurityAltID_28);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_29;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1032273392"}, SecAltIDGrp_NoSecurityAltID_29);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1133552791"}, SecAltIDGrp_NoSecurityAltID_29);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_30;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1903224716"}, SecAltIDGrp_NoSecurityAltID_30);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_861992942"}, SecAltIDGrp_NoSecurityAltID_30);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  set_field(msg, FIX::SecurityXML{"XMLDATA_595563318"}, SecurityXML_22);
  set_field(msg, FIX::SecurityXMLLen{1524943447}, SecurityXML_22);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2068964095"}, SecurityXML_22);
  all_values.push_back(SecurityXML_22);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_20;
    FIX::MiscFeeAmt MiscFeeAmt_20;
    MiscFeeAmt_20.setString("17117643");
set_field(noMiscFees_0_0, MiscFeeAmt_20, MiscFeesGrp_NoMiscFees_20);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_20);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_20);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_14"}, MiscFeesGrp_NoMiscFees_20);
    all_values.push_back(MiscFeesGrp_NoMiscFees_20);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_587247543"}, Parties_NoPartyIDs_27);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_27);
    set_field(noPartyIDs_0_0, FIX::PartyRole{40}, Parties_NoPartyIDs_27);
    all_values.push_back(Parties_NoPartyIDs_27);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1494672911"}, PtysSubGrp_NoPartySubIDs_59);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_59);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_767433144"}, PtysSubGrp_NoPartySubIDs_60);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_60);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1033303961"}, PtysSubGrp_NoPartySubIDs_61);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_61);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_10;
  set_field(msg, FIX::SettlDeliveryType{1}, SettlInstructionsData_10);
  set_field(msg, FIX::StandInstDbID{"STRING_153054794"}, SettlInstructionsData_10);
  set_field(msg, FIX::StandInstDbName{"STRING_1137037296"}, SettlInstructionsData_10);
  set_field(msg, FIX::StandInstDbType{1}, SettlInstructionsData_10);
  all_values.push_back(SettlInstructionsData_10);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_16;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_16);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_16);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_16);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_30;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_1698488778"}, SettlParties_NoSettlPartyIDs_30);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_30);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{1142713152}, SettlParties_NoSettlPartyIDs_30);
      all_values.push_back(SettlParties_NoSettlPartyIDs_30);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_535071392"}, SettlPtysSubGrp_NoSettlPartySubIDs_60);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{1064193599}, SettlPtysSubGrp_NoSettlPartySubIDs_60);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubID{"STRING_139579398"}, SettlPtysSubGrp_NoSettlPartySubIDs_61);
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubIDType{99352097}, SettlPtysSubGrp_NoSettlPartySubIDs_61);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_31;
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyID{"STRING_1724729255"}, SettlParties_NoSettlPartyIDs_31);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_31);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyRole{1799776280}, SettlParties_NoSettlPartyIDs_31);
      all_values.push_back(SettlParties_NoSettlPartyIDs_31);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubID{"STRING_1055080485"}, SettlPtysSubGrp_NoSettlPartySubIDs_62);
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubIDType{239540175}, SettlPtysSubGrp_NoSettlPartySubIDs_62);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubID{"STRING_1413380237"}, SettlPtysSubGrp_NoSettlPartySubIDs_63);
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubIDType{836493831}, SettlPtysSubGrp_NoSettlPartySubIDs_63);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
        set_field(noSettlPartySubIDs_0_1_2_2, FIX::SettlPartySubID{"STRING_722109101"}, SettlPtysSubGrp_NoSettlPartySubIDs_64);
        set_field(noSettlPartySubIDs_0_1_2_2, FIX::SettlPartySubIDType{760569501}, SettlPtysSubGrp_NoSettlPartySubIDs_64);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_17;
    set_field(noDlvyInst_0_1, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_17);
    set_field(noDlvyInst_0_1, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_17);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_17);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_32;
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyID{"STRING_1104237517"}, SettlParties_NoSettlPartyIDs_32);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_32);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyRole{431203387}, SettlParties_NoSettlPartyIDs_32);
      all_values.push_back(SettlParties_NoSettlPartyIDs_32);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubID{"STRING_1298409201"}, SettlPtysSubGrp_NoSettlPartySubIDs_65);
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubIDType{1062985623}, SettlPtysSubGrp_NoSettlPartySubIDs_65);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_5;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_786459340"}, SpreadOrBenchmarkCurveData_5);
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("14143503");
set_field(msg, BenchmarkPrice_5, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkPriceType{1474984093}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1929172492"}, SpreadOrBenchmarkCurveData_5);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1560918768"}, SpreadOrBenchmarkCurveData_5);
  FIX::Spread Spread_5;
  Spread_5.setString("20100554");
set_field(msg, Spread_5, SpreadOrBenchmarkCurveData_5);
  all_values.push_back(SpreadOrBenchmarkCurveData_5);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_CUSTOMDATE"}, Stipulations_NoStipulations_11);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_2109407583"}, Stipulations_NoStipulations_11);
    all_values.push_back(Stipulations_NoStipulations_11);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_AVSIZE"}, Stipulations_NoStipulations_12);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1111501041"}, Stipulations_NoStipulations_12);
    all_values.push_back(Stipulations_NoStipulations_12);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_REFTRADE"}, Stipulations_NoStipulations_13);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_476639210"}, Stipulations_NoStipulations_13);
    all_values.push_back(Stipulations_NoStipulations_13);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_2001240390"}, TrdCollGrp_NoTrades_7);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_1890019447"}, TrdCollGrp_NoTrades_7);
    all_values.push_back(TrdCollGrp_NoTrades_7);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_8;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_855591709"}, TrdCollGrp_NoTrades_8);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_575865844"}, TrdCollGrp_NoTrades_8);
    all_values.push_back(TrdCollGrp_NoTrades_8);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_LOC"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(10, 45, 5, 16, 5, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1093567089"}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{2}, TrdRegTimestamps_NoTrdRegTimestamps_6);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_6);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_O"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(8, 4, 35, 26, 12, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_438384439"}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_7);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_ADD"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(18, 33, 56, 11, 12, 2009)}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_2122878425"}, TrdRegTimestamps_NoTrdRegTimestamps_8);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_8);
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
    multiset<string> UnderlyingInstrument_17;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1115966222"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1663015229}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1825734345"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{614793149}, UnderlyingInstrument_17);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("6090986");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_17, UnderlyingInstrument_17);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("42.170000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_17, UnderlyingInstrument_17);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("94.150000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_969532431"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1190258183"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_967054526"}, UnderlyingInstrument_17);
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("7434013");
set_field(noUnderlyings_0_0, UnderlyingCapValue_17, UnderlyingInstrument_17);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("14725839");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_17);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("702847");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1716833727}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1068414040"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_508669149"}, UnderlyingInstrument_17);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("0.340000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_733555208"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_17);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("1412321");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_17, UnderlyingInstrument_17);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("18.450000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_17, UnderlyingInstrument_17);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("15756119");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_17, UnderlyingInstrument_17);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("520144");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_17, UnderlyingInstrument_17);
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("2238574");
set_field(noUnderlyings_0_0, UnderlyingEndValue_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1781625312}, UnderlyingInstrument_17);
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("13909723");
set_field(noUnderlyings_0_0, UnderlyingFXRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_17);
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("20669349");
set_field(noUnderlyings_0_0, UnderlyingFactor_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{294342048}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1315218489"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1582466575"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2120076393"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1930011638"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_44081597"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_743096963"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_682607405"}, UnderlyingInstrument_17);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("40.280000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_17);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("19.320000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1757015340"}, UnderlyingInstrument_17);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("12584554");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1382090365}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1827300050}, UnderlyingInstrument_17);
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("8278055");
set_field(noUnderlyings_0_0, UnderlyingPx_17, UnderlyingInstrument_17);
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("3030207");
set_field(noUnderlyings_0_0, UnderlyingQty_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_188485551"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_255621951"}, UnderlyingInstrument_17);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("59.660000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1154637018}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1543145034"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1177808142"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1286378864"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_971273363"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1229822587"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1510236353"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_605415027"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_473311311"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1709488619"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_17);
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("7676533");
set_field(noUnderlyings_0_0, UnderlyingStartValue_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_877223460"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_17);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("6597514");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_3930897"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1483343068"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1342358856"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1017544926"}, UnderlyingInstrument_17);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("12692145");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_17, UnderlyingInstrument_17);
    all_values.push_back(UnderlyingInstrument_17);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_627076618"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_380186405"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_306893020"}, UnderlyingStipulations_NoUnderlyingStips_29);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1207991970"}, UnderlyingStipulations_NoUnderlyingStips_29);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_382164615"}, UnderlyingStipulations_NoUnderlyingStips_30);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_495378571"}, UnderlyingStipulations_NoUnderlyingStips_30);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1463613921"}, UnderlyingStipulations_NoUnderlyingStips_31);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1418740581"}, UnderlyingStipulations_NoUnderlyingStips_31);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_859275307"}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{788910806}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1678887663"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{151663511}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_288480050"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{4715326}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1861152130"}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{772368686}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_773195723"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1512614792}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1250643393"}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{848474212}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1794671547"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2117688779}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1290055741"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{274264517}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
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
    multiset<string> UnderlyingInstrument_18;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_350391536"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1369199599}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_581157537"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1558383506}, UnderlyingInstrument_18);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("17513642");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_18, UnderlyingInstrument_18);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("61.080000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_18, UnderlyingInstrument_18);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("37.790000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1022621147"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_579068050"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1733789087"}, UnderlyingInstrument_18);
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("14716862");
set_field(noUnderlyings_0_1, UnderlyingCapValue_18, UnderlyingInstrument_18);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("13679788");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_18);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("10030902");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1519642367}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1705334160"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1007805564"}, UnderlyingInstrument_18);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("8.500000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_371196936"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_18);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("11443926");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_18, UnderlyingInstrument_18);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("53.940000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_18, UnderlyingInstrument_18);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("9273625");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_18, UnderlyingInstrument_18);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("19215192");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_18, UnderlyingInstrument_18);
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("19937796");
set_field(noUnderlyings_0_1, UnderlyingEndValue_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1372881140}, UnderlyingInstrument_18);
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("15687071");
set_field(noUnderlyings_0_1, UnderlyingFXRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_18);
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("5154532");
set_field(noUnderlyings_0_1, UnderlyingFactor_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1842971696}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_166892627"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1884652832"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_276645585"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1725276133"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1488533398"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1353181694"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_452306265"}, UnderlyingInstrument_18);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("8.970000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_18);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("17.040000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1835357120"}, UnderlyingInstrument_18);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("11527449");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1455465814}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{690963709}, UnderlyingInstrument_18);
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("5249036");
set_field(noUnderlyings_0_1, UnderlyingPx_18, UnderlyingInstrument_18);
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("10133163");
set_field(noUnderlyings_0_1, UnderlyingQty_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1698769273"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1758214522"}, UnderlyingInstrument_18);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("32.620000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1331459876}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1434933667"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_381422274"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_329281622"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_214812558"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_155457906"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_175577581"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1587693698"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1724165086"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2139562320"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_18);
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("14196531");
set_field(noUnderlyings_0_1, UnderlyingStartValue_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_158971299"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_18);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("18842474");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1181365866"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_901996766"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_189070049"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1545036764"}, UnderlyingInstrument_18);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("6867628");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_18, UnderlyingInstrument_18);
    all_values.push_back(UnderlyingInstrument_18);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1232910236"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1839507815"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1683147567"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1923873945"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_216927840"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_548980246"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1975142362"}, UnderlyingStipulations_NoUnderlyingStips_32);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1933493508"}, UnderlyingStipulations_NoUnderlyingStips_32);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1262592382"}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{988417421}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_322890041"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1163995003}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_917614990"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2047055127}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_17;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_17);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_873278273"}, header_17);
  set_header_field(msg.getHeader(), FIX::BodyLength{1319224613}, header_17);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1315044974"}, header_17);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_566110741"}, header_17);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_868039685"}, header_17);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1051808758"}, header_17);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1747476608}, header_17);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_17);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1240878808}, header_17);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1145029724"}, header_17);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_309315666"}, header_17);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1468560561"}, header_17);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(9, 41, 9, 1, 4, 2012)}, header_17);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_17);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_17);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2141141979"}, header_17);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1308518770}, header_17);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1506646722"}, header_17);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_982075753"}, header_17);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_638440062"}, header_17);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(20, 52, 42, 3, 2, 2003)}, header_17);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_322222109"}, header_17);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_847960419"}, header_17);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1768888893"}, header_17);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1374030867"}, header_17);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{447953379}, header_17);
  all_values.push_back(header_17);
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
