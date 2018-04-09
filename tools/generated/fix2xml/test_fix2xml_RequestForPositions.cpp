#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::RequestForPositions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_0;
  set_field(msg, FIX::Account{"STRING_1059511029"}, RequestForPositions_0);
  set_field(msg, FIX::AccountType{1}, RequestForPositions_0);
  set_field(msg, FIX::AcctIDSource{99}, RequestForPositions_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_533919531"}, RequestForPositions_0);
  set_field(msg, FIX::Currency{"GBP"}, RequestForPositions_0);
  set_field(msg, FIX::EncodedText{"DATA_235503269"}, RequestForPositions_0);
  set_field(msg, FIX::EncodedTextLen{1099788961}, RequestForPositions_0);
  set_field(msg, FIX::MatchStatus{'0'}, RequestForPositions_0);
  set_field(msg, FIX::PosReqID{"STRING_1527945728"}, RequestForPositions_0);
  set_field(msg, FIX::PosReqType{3}, RequestForPositions_0);
  set_field(msg, FIX::ResponseDestination{"STRING_1051258341"}, RequestForPositions_0);
  set_field(msg, FIX::ResponseTransportType{0}, RequestForPositions_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, RequestForPositions_0);
  set_field(msg, FIX::SettlSessID{"STRING_ITD"}, RequestForPositions_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_580214981"}, RequestForPositions_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, RequestForPositions_0);
  set_field(msg, FIX::Text{"STRING_671808430"}, RequestForPositions_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 56, 45, 19, 12, 2001)}, RequestForPositions_0);
  all_values.push_back(RequestForPositions_0);

  all_compo_names.insert("RequestForPositions");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_114;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1258739391"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{974435697}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1836283952"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1473074943}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2033946726"}, InstrumentLeg_114);
    FIX::LegContractMultiplier LegContractMultiplier_114;
    LegContractMultiplier_114.setString("2590174");
set_field(noLegs_0_0, LegContractMultiplier_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{454666603}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_420382609"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1203745741"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_416021827"}, InstrumentLeg_114);
    FIX::LegCouponRate LegCouponRate_114;
    LegCouponRate_114.setString("58.780000");
set_field(noLegs_0_0, LegCouponRate_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_156051055"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_809333093"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1399748288}, InstrumentLeg_114);
    FIX::LegFactor LegFactor_114;
    LegFactor_114.setString("7264553");
set_field(noLegs_0_0, LegFactor_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1642352740}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_900301417"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_474386047"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_75084074"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1586139627"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1146194477"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_229312378"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1289752394"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1786651994"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_114);
    FIX::LegOptionRatio LegOptionRatio_114;
    LegOptionRatio_114.setString("19979371");
set_field(noLegs_0_0, LegOptionRatio_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_944524949"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_55292310"}, InstrumentLeg_114);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
    LegPriceUnitOfMeasureQty_114.setString("4041126");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegProduct{55780692}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1029728007}, InstrumentLeg_114);
    FIX::LegRatioQty LegRatioQty_114;
    LegRatioQty_114.setString("929129");
set_field(noLegs_0_0, LegRatioQty_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1528855635"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_916191085"}, InstrumentLeg_114);
    FIX::LegRepurchaseRate LegRepurchaseRate_114;
    LegRepurchaseRate_114.setString("3.710000");
set_field(noLegs_0_0, LegRepurchaseRate_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1983522238}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1336573694"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1555676113"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_252060417"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1992459572"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1711727168"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_600550364"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_373576613"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_114);
    FIX::LegStrikePrice LegStrikePrice_114;
    LegStrikePrice_114.setString("20159293");
set_field(noLegs_0_0, LegStrikePrice_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_753116422"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1082165244"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2091013428"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_191772402"}, InstrumentLeg_114);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
    LegUnitOfMeasureQty_114.setString("808760");
set_field(noLegs_0_0, LegUnitOfMeasureQty_114, InstrumentLeg_114);
    all_values.push_back(InstrumentLeg_114);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_223;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1481524796"}, LegSecAltIDGrp_NoLegSecurityAltID_223);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1867528068"}, LegSecAltIDGrp_NoLegSecurityAltID_223);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_223);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1761591261"}, LegSecAltIDGrp_NoLegSecurityAltID_224);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1331978298"}, LegSecAltIDGrp_NoLegSecurityAltID_224);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_664569369"}, LegSecAltIDGrp_NoLegSecurityAltID_225);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1816883572"}, LegSecAltIDGrp_NoLegSecurityAltID_225);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1736090937"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{720350061}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_699127931"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1829003881}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_101722048"}, InstrumentLeg_115);
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("16153190");
set_field(noLegs_0_1, LegContractMultiplier_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{33450604}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_2085244287"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_804409063"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1589126717"}, InstrumentLeg_115);
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("10.560000");
set_field(noLegs_0_1, LegCouponRate_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_649384988"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_530708871"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1526946851}, InstrumentLeg_115);
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("6431864");
set_field(noLegs_0_1, LegFactor_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1138488068}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1395392557"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1396302848"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_73169665"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1338922337"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1588075250"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_154045739"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1511764495"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_922116399"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_115);
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("11258721");
set_field(noLegs_0_1, LegOptionRatio_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_106611049"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_538659528"}, InstrumentLeg_115);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("7952720");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegProduct{1842701987}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1259009589}, InstrumentLeg_115);
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("14943999");
set_field(noLegs_0_1, LegRatioQty_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1524222220"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1360731637"}, InstrumentLeg_115);
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("53.330000");
set_field(noLegs_0_1, LegRepurchaseRate_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1557672824}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1298492276"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1766644396"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_999315894"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1488313333"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_268545736"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_5202483"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_799254607"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_115);
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("19377426");
set_field(noLegs_0_1, LegStrikePrice_115, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_780058243"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_23206732"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_2010912341"}, InstrumentLeg_115);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2118980580"}, InstrumentLeg_115);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("16112819");
set_field(noLegs_0_1, LegUnitOfMeasureQty_115, InstrumentLeg_115);
    all_values.push_back(InstrumentLeg_115);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_226;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1483261427"}, LegSecAltIDGrp_NoLegSecurityAltID_226);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_385914734"}, LegSecAltIDGrp_NoLegSecurityAltID_226);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_226);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_227;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_2039048239"}, LegSecAltIDGrp_NoLegSecurityAltID_227);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_461649888"}, LegSecAltIDGrp_NoLegSecurityAltID_227);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_227);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_228;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_492525783"}, LegSecAltIDGrp_NoLegSecurityAltID_228);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_430224119"}, LegSecAltIDGrp_NoLegSecurityAltID_228);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_228);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1256921920"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{187744122}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1689233708"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{603838236}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1711966342"}, InstrumentLeg_116);
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("9024816");
set_field(noLegs_0_2, LegContractMultiplier_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1566073569}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1122155519"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_53490326"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1185234318"}, InstrumentLeg_116);
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("14.130000");
set_field(noLegs_0_2, LegCouponRate_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1541803659"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegCurrency{"GBP"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1673004765"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{105551014}, InstrumentLeg_116);
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("15113395");
set_field(noLegs_0_2, LegFactor_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{299908649}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_2043293690"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_143914178"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_323115381"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1906722383"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_115411111"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1934397364"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1924196815"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1598672538"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_116);
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("18157614");
set_field(noLegs_0_2, LegOptionRatio_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_2060322426"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_665354234"}, InstrumentLeg_116);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("985018");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegProduct{1169760699}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegPutOrCall{853098356}, InstrumentLeg_116);
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("17877355");
set_field(noLegs_0_2, LegRatioQty_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1773598935"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_417581051"}, InstrumentLeg_116);
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("36.340000");
set_field(noLegs_0_2, LegRepurchaseRate_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1192188857}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1539736570"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_596223960"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_229939527"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1513724335"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_2138027619"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1683719581"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1663548736"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_116);
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("19634573");
set_field(noLegs_0_2, LegStrikePrice_116, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1685080637"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1000684697"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_139089119"}, InstrumentLeg_116);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1444319372"}, InstrumentLeg_116);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("11160958");
set_field(noLegs_0_2, LegUnitOfMeasureQty_116, InstrumentLeg_116);
    all_values.push_back(InstrumentLeg_116);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_229;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1221032539"}, LegSecAltIDGrp_NoLegSecurityAltID_229);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_567284698"}, LegSecAltIDGrp_NoLegSecurityAltID_229);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_229);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_77;
  FIX::AttachmentPoint AttachmentPoint_77;
  AttachmentPoint_77.setString("12.860000");
set_field(msg, AttachmentPoint_77, Instrument_77);
  set_field(msg, FIX::CFICode{"STRING_889310297"}, Instrument_77);
  set_field(msg, FIX::CPProgram{1}, Instrument_77);
  set_field(msg, FIX::CPRegType{"STRING_764185520"}, Instrument_77);
  FIX::CapPrice CapPrice_77;
  CapPrice_77.setString("9878121");
set_field(msg, CapPrice_77, Instrument_77);
  FIX::ContractMultiplier ContractMultiplier_77;
  ContractMultiplier_77.setString("16498841");
set_field(msg, ContractMultiplier_77, Instrument_77);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_77);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_628064111"}, Instrument_77);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1275999463"}, Instrument_77);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2034864927"}, Instrument_77);
  FIX::CouponRate CouponRate_77;
  CouponRate_77.setString("77.460000");
set_field(msg, CouponRate_77, Instrument_77);
  set_field(msg, FIX::CreditRating{"STRING_320704672"}, Instrument_77);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1427117849"}, Instrument_77);
  FIX::DetachmentPoint DetachmentPoint_77;
  DetachmentPoint_77.setString("17.060000");
set_field(msg, DetachmentPoint_77, Instrument_77);
  set_field(msg, FIX::EncodedIssuer{"DATA_550644199"}, Instrument_77);
  set_field(msg, FIX::EncodedIssuerLen{793358536}, Instrument_77);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1757565678"}, Instrument_77);
  set_field(msg, FIX::EncodedSecurityDescLen{86880133}, Instrument_77);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_77);
  FIX::Factor Factor_77;
  Factor_77.setString("12736307");
set_field(msg, Factor_77, Instrument_77);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_77);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_77);
  FIX::FloorPrice FloorPrice_77;
  FloorPrice_77.setString("10896045");
set_field(msg, FloorPrice_77, Instrument_77);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_77);
  set_field(msg, FIX::InstrRegistry{"STRING_1996244687"}, Instrument_77);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_77);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_710583442"}, Instrument_77);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_964856847"}, Instrument_77);
  set_field(msg, FIX::Issuer{"STRING_1154696458"}, Instrument_77);
  set_field(msg, FIX::ListMethod{0}, Instrument_77);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1532141546"}, Instrument_77);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1253527744"}, Instrument_77);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_673442631"}, Instrument_77);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2012265023"}, Instrument_77);
  FIX::MinPriceIncrement MinPriceIncrement_77;
  MinPriceIncrement_77.setString("20177132");
set_field(msg, MinPriceIncrement_77, Instrument_77);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
  MinPriceIncrementAmount_77.setString("16612548");
set_field(msg, MinPriceIncrementAmount_77, Instrument_77);
  set_field(msg, FIX::NTPositionLimit{1514665551}, Instrument_77);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
  NotionalPercentageOutstanding_77.setString("34.930000");
set_field(msg, NotionalPercentageOutstanding_77, Instrument_77);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_77);
  FIX::OptPayoutAmount OptPayoutAmount_77;
  OptPayoutAmount_77.setString("6431813");
set_field(msg, OptPayoutAmount_77, Instrument_77);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_77);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
  OriginalNotionalPercentageOutstanding_77.setString("30.150000");
set_field(msg, OriginalNotionalPercentageOutstanding_77, Instrument_77);
  set_field(msg, FIX::Pool{"STRING_963886039"}, Instrument_77);
  set_field(msg, FIX::PositionLimit{654528974}, Instrument_77);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_77);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1514530238"}, Instrument_77);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
  PriceUnitOfMeasureQty_77.setString("14478875");
set_field(msg, PriceUnitOfMeasureQty_77, Instrument_77);
  set_field(msg, FIX::Product{4}, Instrument_77);
  set_field(msg, FIX::ProductComplex{"STRING_1601410371"}, Instrument_77);
  set_field(msg, FIX::PutOrCall{0}, Instrument_77);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1815883870"}, Instrument_77);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1330077452"}, Instrument_77);
  FIX::RepurchaseRate RepurchaseRate_77;
  RepurchaseRate_77.setString("33.250000");
set_field(msg, RepurchaseRate_77, Instrument_77);
  set_field(msg, FIX::RepurchaseTerm{758004726}, Instrument_77);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_77);
  set_field(msg, FIX::SecurityDesc{"STRING_283514364"}, Instrument_77);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1986698349"}, Instrument_77);
  set_field(msg, FIX::SecurityGroup{"STRING_1306924964"}, Instrument_77);
  set_field(msg, FIX::SecurityID{"STRING_1248371212"}, Instrument_77);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_77);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_77);
  set_field(msg, FIX::SecuritySubType{"STRING_633029110"}, Instrument_77);
  set_field(msg, FIX::SecurityType{"STRING_DEFLTED"}, Instrument_77);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_77);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_77);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2117668521"}, Instrument_77);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1278271088"}, Instrument_77);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_77);
  FIX::StrikeMultiplier StrikeMultiplier_77;
  StrikeMultiplier_77.setString("14201063");
set_field(msg, StrikeMultiplier_77, Instrument_77);
  FIX::StrikePrice StrikePrice_77;
  StrikePrice_77.setString("5081737");
set_field(msg, StrikePrice_77, Instrument_77);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_77);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
  StrikePriceBoundaryPrecision_77.setString("57.250000");
set_field(msg, StrikePriceBoundaryPrecision_77, Instrument_77);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_77);
  FIX::StrikeValue StrikeValue_77;
  StrikeValue_77.setString("13396384");
set_field(msg, StrikeValue_77, Instrument_77);
  set_field(msg, FIX::Symbol{"STRING_1517426799"}, Instrument_77);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_77);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_77);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_77);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_77);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
  UnitOfMeasureQty_77.setString("792356");
set_field(msg, UnitOfMeasureQty_77, Instrument_77);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_77);
  all_values.push_back(Instrument_77);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_157;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_157);
    FIX::ComplexEventPrice ComplexEventPrice_157;
    ComplexEventPrice_157.setString("3386012");
set_field(noComplexEvents_0_0, ComplexEventPrice_157, ComplexEvents_NoComplexEvents_157);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_157);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
    ComplexEventPriceBoundaryPrecision_157.setString("33.510000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_157, ComplexEvents_NoComplexEvents_157);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_157);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_157);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
    ComplexOptPayoutAmount_157.setString("20458745");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_157, ComplexEvents_NoComplexEvents_157);
    all_values.push_back(ComplexEvents_NoComplexEvents_157);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_316;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 22, 58, 14, 12, 2004)}, ComplexEventDates_NoComplexEventDates_316);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 8, 32, 7, 2, 2012)}, ComplexEventDates_NoComplexEventDates_316);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_316);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 27, 59)}, ComplexEventTimes_NoComplexEventTimes_648);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 24, 21)}, ComplexEventTimes_NoComplexEventTimes_648);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 14, 18)}, ComplexEventTimes_NoComplexEventTimes_649);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 33, 31)}, ComplexEventTimes_NoComplexEventTimes_649);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 45, 23)}, ComplexEventTimes_NoComplexEventTimes_650);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 22, 38)}, ComplexEventTimes_NoComplexEventTimes_650);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_317;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 10, 9, 23, 9, 2017)}, ComplexEventDates_NoComplexEventDates_317);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 48, 10, 0, 1, 2002)}, ComplexEventDates_NoComplexEventDates_317);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_317);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 3, 41)}, ComplexEventTimes_NoComplexEventTimes_651);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 6, 36)}, ComplexEventTimes_NoComplexEventTimes_651);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_152;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_767990224"}, EvntGrp_NoEvents_152);
    FIX::EventPx EventPx_152;
    EventPx_152.setString("10920785");
set_field(noEvents_0_0, EventPx_152, EvntGrp_NoEvents_152);
    set_field(noEvents_0_0, FIX::EventText{"STRING_575772696"}, EvntGrp_NoEvents_152);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 50, 22, 12, 1, 2001)}, EvntGrp_NoEvents_152);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_152);
    all_values.push_back(EvntGrp_NoEvents_152);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_143;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1184220525"}, InstrumentParties_NoInstrumentParties_143);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_143);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{230132630}, InstrumentParties_NoInstrumentParties_143);
    all_values.push_back(InstrumentParties_NoInstrumentParties_143);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1723086070"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{422345760}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_733639036"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1709846198}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_156;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1698901813"}, SecAltIDGrp_NoSecurityAltID_156);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1211735874"}, SecAltIDGrp_NoSecurityAltID_156);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_154;
  set_field(msg, FIX::SecurityXML{"XMLDATA_960479434"}, SecurityXML_154);
  set_field(msg, FIX::SecurityXMLLen{1923388576}, SecurityXML_154);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1026258447"}, SecurityXML_154);
  all_values.push_back(SecurityXML_154);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_134;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_638509076"}, Parties_NoPartyIDs_134);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_134);
    set_field(noPartyIDs_0_0, FIX::PartyRole{65}, Parties_NoPartyIDs_134);
    all_values.push_back(Parties_NoPartyIDs_134);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_268;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1819795058"}, PtysSubGrp_NoPartySubIDs_268);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_268);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_268);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_135;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_889986706"}, Parties_NoPartyIDs_135);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_135);
    set_field(noPartyIDs_0_1, FIX::PartyRole{26}, Parties_NoPartyIDs_135);
    all_values.push_back(Parties_NoPartyIDs_135);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_269;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_975086857"}, PtysSubGrp_NoPartySubIDs_269);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_269);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_269);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_136;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_295441181"}, Parties_NoPartyIDs_136);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_136);
    set_field(noPartyIDs_0_2, FIX::PartyRole{67}, Parties_NoPartyIDs_136);
    all_values.push_back(Parties_NoPartyIDs_136);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_270;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_695744860"}, PtysSubGrp_NoPartySubIDs_270);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_270);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_270);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_271;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_921265571"}, PtysSubGrp_NoPartySubIDs_271);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_271);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_271);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_272;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_219640281"}, PtysSubGrp_NoPartySubIDs_272);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_272);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_272);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_22;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_22);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_22);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_22);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_23;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_23);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_23);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_23);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_115;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1859822449"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2019997153}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_384868183"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{350847878}, UnderlyingInstrument_115);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
    UnderlyingAdjustedQuantity_115.setString("9243183");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_115, UnderlyingInstrument_115);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
    UnderlyingAllocationPercent_115.setString("85.390000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_115, UnderlyingInstrument_115);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
    UnderlyingAttachmentPoint_115.setString("18.870000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_596629749"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1510347396"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1555048593"}, UnderlyingInstrument_115);
    FIX::UnderlyingCapValue UnderlyingCapValue_115;
    UnderlyingCapValue_115.setString("6611220");
set_field(noUnderlyings_0_0, UnderlyingCapValue_115, UnderlyingInstrument_115);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
    UnderlyingCashAmount_115.setString("14088162");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_115);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
    UnderlyingContractMultiplier_115.setString("16362089");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{494152116}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1139104063"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1147733276"}, UnderlyingInstrument_115);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
    UnderlyingCouponRate_115.setString("34.730000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1830237003"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_115);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
    UnderlyingCurrentValue_115.setString("6040189");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_115, UnderlyingInstrument_115);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
    UnderlyingDetachmentPoint_115.setString("48.080000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_115, UnderlyingInstrument_115);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
    UnderlyingDirtyPrice_115.setString("12644016");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_115, UnderlyingInstrument_115);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
    UnderlyingEndPrice_115.setString("19476302");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_115, UnderlyingInstrument_115);
    FIX::UnderlyingEndValue UnderlyingEndValue_115;
    UnderlyingEndValue_115.setString("18798705");
set_field(noUnderlyings_0_0, UnderlyingEndValue_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1046404445}, UnderlyingInstrument_115);
    FIX::UnderlyingFXRate UnderlyingFXRate_115;
    UnderlyingFXRate_115.setString("16966855");
set_field(noUnderlyings_0_0, UnderlyingFXRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_115);
    FIX::UnderlyingFactor UnderlyingFactor_115;
    UnderlyingFactor_115.setString("20401431");
set_field(noUnderlyings_0_0, UnderlyingFactor_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{258736665}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1528643191"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1912656655"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_643604848"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1879491069"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_689491346"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1045173387"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_397069308"}, UnderlyingInstrument_115);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
    UnderlyingNotionalPercentageOutstanding_115.setString("10.960000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_115);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
    UnderlyingOriginalNotionalPercentageOutstanding_115.setString("79.020000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1947243180"}, UnderlyingInstrument_115);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
    UnderlyingPriceUnitOfMeasureQty_115.setString("18168533");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{648297136}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1435968474}, UnderlyingInstrument_115);
    FIX::UnderlyingPx UnderlyingPx_115;
    UnderlyingPx_115.setString("1635218");
set_field(noUnderlyings_0_0, UnderlyingPx_115, UnderlyingInstrument_115);
    FIX::UnderlyingQty UnderlyingQty_115;
    UnderlyingQty_115.setString("17874011");
set_field(noUnderlyings_0_0, UnderlyingQty_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_436218103"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_564245318"}, UnderlyingInstrument_115);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
    UnderlyingRepurchaseRate_115.setString("45.540000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{132212591}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1609006651"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2074173481"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1627067400"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_725924616"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1874320091"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1359454268"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1772329061"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1423522011"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1028275010"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_115);
    FIX::UnderlyingStartValue UnderlyingStartValue_115;
    UnderlyingStartValue_115.setString("16822586");
set_field(noUnderlyings_0_0, UnderlyingStartValue_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_409434553"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_115);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
    UnderlyingStrikePrice_115.setString("1414419");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2119652918"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1223553264"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_538511282"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1258290366"}, UnderlyingInstrument_115);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
    UnderlyingUnitOfMeasureQty_115.setString("16315904");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_115, UnderlyingInstrument_115);
    all_values.push_back(UnderlyingInstrument_115);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1058049898"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1300960129"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_991442672"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_346534725"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_631360223"}, UnderlyingStipulations_NoUnderlyingStips_230);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_782752828"}, UnderlyingStipulations_NoUnderlyingStips_230);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2101514778"}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1490250295}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_394549171"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{68691264}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1755041054"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1754003440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1841020325"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1031079417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_634794802"}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{565854446}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_641203165"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{744234323}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1185671329"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{613372435}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1967787587"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1724182611}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1871662801"}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{2067328148}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_605370821"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{911287172}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_116;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1128763776"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{2069852795}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1542647396"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1911516604}, UnderlyingInstrument_116);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
    UnderlyingAdjustedQuantity_116.setString("19510964");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_116, UnderlyingInstrument_116);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
    UnderlyingAllocationPercent_116.setString("85.260000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_116, UnderlyingInstrument_116);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
    UnderlyingAttachmentPoint_116.setString("83.760000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1293863087"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1377399489"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1073547547"}, UnderlyingInstrument_116);
    FIX::UnderlyingCapValue UnderlyingCapValue_116;
    UnderlyingCapValue_116.setString("13625543");
set_field(noUnderlyings_0_1, UnderlyingCapValue_116, UnderlyingInstrument_116);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
    UnderlyingCashAmount_116.setString("9849568");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_116);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
    UnderlyingContractMultiplier_116.setString("10560910");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{2016036312}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1314862141"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_267132622"}, UnderlyingInstrument_116);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
    UnderlyingCouponRate_116.setString("71.100000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_211607848"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_116);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
    UnderlyingCurrentValue_116.setString("13972791");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_116, UnderlyingInstrument_116);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
    UnderlyingDetachmentPoint_116.setString("82.220000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_116, UnderlyingInstrument_116);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
    UnderlyingDirtyPrice_116.setString("9989453");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_116, UnderlyingInstrument_116);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
    UnderlyingEndPrice_116.setString("9739781");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_116, UnderlyingInstrument_116);
    FIX::UnderlyingEndValue UnderlyingEndValue_116;
    UnderlyingEndValue_116.setString("12458873");
set_field(noUnderlyings_0_1, UnderlyingEndValue_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{303356065}, UnderlyingInstrument_116);
    FIX::UnderlyingFXRate UnderlyingFXRate_116;
    UnderlyingFXRate_116.setString("8938226");
set_field(noUnderlyings_0_1, UnderlyingFXRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_116);
    FIX::UnderlyingFactor UnderlyingFactor_116;
    UnderlyingFactor_116.setString("9087268");
set_field(noUnderlyings_0_1, UnderlyingFactor_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1805109813}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1009396555"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_831096033"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1200273561"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_773429511"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_634708824"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_549468439"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1452427887"}, UnderlyingInstrument_116);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
    UnderlyingNotionalPercentageOutstanding_116.setString("19.110000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_116);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
    UnderlyingOriginalNotionalPercentageOutstanding_116.setString("17.870000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1143642614"}, UnderlyingInstrument_116);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
    UnderlyingPriceUnitOfMeasureQty_116.setString("7643411");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1058559126}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{52249995}, UnderlyingInstrument_116);
    FIX::UnderlyingPx UnderlyingPx_116;
    UnderlyingPx_116.setString("6328938");
set_field(noUnderlyings_0_1, UnderlyingPx_116, UnderlyingInstrument_116);
    FIX::UnderlyingQty UnderlyingQty_116;
    UnderlyingQty_116.setString("2259376");
set_field(noUnderlyings_0_1, UnderlyingQty_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_319382617"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1067300950"}, UnderlyingInstrument_116);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
    UnderlyingRepurchaseRate_116.setString("54.680000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1227718404}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_98458736"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1834824646"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_601942978"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1097404109"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_661319139"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1847830353"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1400760174"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1555141780"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1728463131"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_116);
    FIX::UnderlyingStartValue UnderlyingStartValue_116;
    UnderlyingStartValue_116.setString("12127679");
set_field(noUnderlyings_0_1, UnderlyingStartValue_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_590376038"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_116);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
    UnderlyingStrikePrice_116.setString("13638055");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_116, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1627808269"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_815026298"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_668749789"}, UnderlyingInstrument_116);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1408896533"}, UnderlyingInstrument_116);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
    UnderlyingUnitOfMeasureQty_116.setString("5944105");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_116, UnderlyingInstrument_116);
    all_values.push_back(UnderlyingInstrument_116);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_405055499"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1358751754"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_2105800703"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_457305494"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_184254675"}, UnderlyingStipulations_NoUnderlyingStips_231);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_776688111"}, UnderlyingStipulations_NoUnderlyingStips_231);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_911462897"}, UnderlyingStipulations_NoUnderlyingStips_232);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_621800143"}, UnderlyingStipulations_NoUnderlyingStips_232);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_2004406515"}, UnderlyingStipulations_NoUnderlyingStips_233);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1009921633"}, UnderlyingStipulations_NoUnderlyingStips_233);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_458865845"}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{970460280}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1360602268"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{378118412}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_78;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_78);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1522605680"}, header_78);
  set_header_field(msg.getHeader(), FIX::BodyLength{1590886358}, header_78);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_330568072"}, header_78);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_368221477"}, header_78);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1856444217"}, header_78);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1694373622"}, header_78);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1996029746}, header_78);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_78);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{215639764}, header_78);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1257442631"}, header_78);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1118397446"}, header_78);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1262881340"}, header_78);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(17, 35, 25, 27, 3, 2009)}, header_78);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_78);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_78);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_605930956"}, header_78);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{2095212029}, header_78);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_188910707"}, header_78);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1064796802"}, header_78);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2055054123"}, header_78);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(16, 23, 20, 22, 12, 2002)}, header_78);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1294769459"}, header_78);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1011516252"}, header_78);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_689852679"}, header_78);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_841659433"}, header_78);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{860062351}, header_78);
  all_values.push_back(header_78);
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
