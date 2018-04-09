#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTrade, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::DontKnowTrade msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTrade_0;
  set_field(msg, FIX::DKReason{'E'}, DontKnowTrade_0);
  set_field(msg, FIX::EncodedText{"DATA_1647422463"}, DontKnowTrade_0);
  set_field(msg, FIX::EncodedTextLen{1240759946}, DontKnowTrade_0);
  set_field(msg, FIX::ExecID{"STRING_272888535"}, DontKnowTrade_0);
  FIX::LastPx LastPx_7;
  LastPx_7.setString("13050053");
set_field(msg, LastPx_7, DontKnowTrade_0);
  FIX::LastQty LastQty_7;
  LastQty_7.setString("12903442");
set_field(msg, LastQty_7, DontKnowTrade_0);
  set_field(msg, FIX::OrderID{"STRING_1863971572"}, DontKnowTrade_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1188864455"}, DontKnowTrade_0);
  set_field(msg, FIX::Side{'C'}, DontKnowTrade_0);
  set_field(msg, FIX::Text{"STRING_742398539"}, DontKnowTrade_0);
  all_values.push_back(DontKnowTrade_0);

  all_compo_names.insert("DontKnowTrade");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_33;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1691239302"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{930523918}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_378503179"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1286385355}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1716750578"}, InstrumentLeg_33);
    FIX::LegContractMultiplier LegContractMultiplier_33;
    LegContractMultiplier_33.setString("2816811");
set_field(noLegs_0_0, LegContractMultiplier_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2081365094}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_565228470"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1544462455"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_28529758"}, InstrumentLeg_33);
    FIX::LegCouponRate LegCouponRate_33;
    LegCouponRate_33.setString("57.160000");
set_field(noLegs_0_0, LegCouponRate_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_309710635"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1620572674"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1975200956}, InstrumentLeg_33);
    FIX::LegFactor LegFactor_33;
    LegFactor_33.setString("20133925");
set_field(noLegs_0_0, LegFactor_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2054480164}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1744016318"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1587456536"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1495905002"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1243955134"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_680732834"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1768793537"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_401476838"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1971077040"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_33);
    FIX::LegOptionRatio LegOptionRatio_33;
    LegOptionRatio_33.setString("15903412");
set_field(noLegs_0_0, LegOptionRatio_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1707924683"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_80196352"}, InstrumentLeg_33);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
    LegPriceUnitOfMeasureQty_33.setString("13719316");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegProduct{1251680337}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1010720271}, InstrumentLeg_33);
    FIX::LegRatioQty LegRatioQty_33;
    LegRatioQty_33.setString("17504348");
set_field(noLegs_0_0, LegRatioQty_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_390582045"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_579987201"}, InstrumentLeg_33);
    FIX::LegRepurchaseRate LegRepurchaseRate_33;
    LegRepurchaseRate_33.setString("59.870000");
set_field(noLegs_0_0, LegRepurchaseRate_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{324463491}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1145215671"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1429094795"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_352993249"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1451401387"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1738805430"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1594662407"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSide{'3'}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1211894457"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_33);
    FIX::LegStrikePrice LegStrikePrice_33;
    LegStrikePrice_33.setString("11188909");
set_field(noLegs_0_0, LegStrikePrice_33, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1018912385"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1756709739"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_467312327"}, InstrumentLeg_33);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_115383871"}, InstrumentLeg_33);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
    LegUnitOfMeasureQty_33.setString("2899589");
set_field(noLegs_0_0, LegUnitOfMeasureQty_33, InstrumentLeg_33);
    all_values.push_back(InstrumentLeg_33);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_516860709"}, LegSecAltIDGrp_NoLegSecurityAltID_69);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_113552317"}, LegSecAltIDGrp_NoLegSecurityAltID_69);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_34;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1573903678"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{2107202002}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1821477000"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1654100031}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1331649994"}, InstrumentLeg_34);
    FIX::LegContractMultiplier LegContractMultiplier_34;
    LegContractMultiplier_34.setString("9256736");
set_field(noLegs_0_1, LegContractMultiplier_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{517336654}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_934601165"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1316255735"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1097323855"}, InstrumentLeg_34);
    FIX::LegCouponRate LegCouponRate_34;
    LegCouponRate_34.setString("35.040000");
set_field(noLegs_0_1, LegCouponRate_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1640719226"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1993712475"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1546457266}, InstrumentLeg_34);
    FIX::LegFactor LegFactor_34;
    LegFactor_34.setString("18396500");
set_field(noLegs_0_1, LegFactor_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1440891234}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1849801607"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_904060891"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_715787301"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_2019054810"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_2022951864"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1734699686"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1628280902"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_342780543"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_34);
    FIX::LegOptionRatio LegOptionRatio_34;
    LegOptionRatio_34.setString("19182398");
set_field(noLegs_0_1, LegOptionRatio_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_431402760"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_219460619"}, InstrumentLeg_34);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
    LegPriceUnitOfMeasureQty_34.setString("20317921");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegProduct{2005306439}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegPutOrCall{179178974}, InstrumentLeg_34);
    FIX::LegRatioQty LegRatioQty_34;
    LegRatioQty_34.setString("17057854");
set_field(noLegs_0_1, LegRatioQty_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1511922822"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1510828968"}, InstrumentLeg_34);
    FIX::LegRepurchaseRate LegRepurchaseRate_34;
    LegRepurchaseRate_34.setString("55.390000");
set_field(noLegs_0_1, LegRepurchaseRate_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2029259476}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_297946485"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1800231274"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_979099683"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1117179989"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1293466852"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1074155562"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1139695679"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_34);
    FIX::LegStrikePrice LegStrikePrice_34;
    LegStrikePrice_34.setString("4331032");
set_field(noLegs_0_1, LegStrikePrice_34, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_175447140"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1814251966"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1148890566"}, InstrumentLeg_34);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_47018302"}, InstrumentLeg_34);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
    LegUnitOfMeasureQty_34.setString("16897201");
set_field(noLegs_0_1, LegUnitOfMeasureQty_34, InstrumentLeg_34);
    all_values.push_back(InstrumentLeg_34);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1675299204"}, LegSecAltIDGrp_NoLegSecurityAltID_70);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_2032500725"}, LegSecAltIDGrp_NoLegSecurityAltID_70);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_438706515"}, LegSecAltIDGrp_NoLegSecurityAltID_71);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1446055384"}, LegSecAltIDGrp_NoLegSecurityAltID_71);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_35;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_316419838"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{658167134}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1330363881"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{174242629}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_837346108"}, InstrumentLeg_35);
    FIX::LegContractMultiplier LegContractMultiplier_35;
    LegContractMultiplier_35.setString("8886657");
set_field(noLegs_0_2, LegContractMultiplier_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1686165451}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_200691428"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1372641270"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1567941279"}, InstrumentLeg_35);
    FIX::LegCouponRate LegCouponRate_35;
    LegCouponRate_35.setString("79.130000");
set_field(noLegs_0_2, LegCouponRate_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1025388896"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_171372101"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1473712877}, InstrumentLeg_35);
    FIX::LegFactor LegFactor_35;
    LegFactor_35.setString("6863588");
set_field(noLegs_0_2, LegFactor_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1311067780}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1946842058"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1596549971"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1744171046"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_2122289198"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1263318289"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_745577964"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_21823852"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_805554823"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_35);
    FIX::LegOptionRatio LegOptionRatio_35;
    LegOptionRatio_35.setString("16971230");
set_field(noLegs_0_2, LegOptionRatio_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_690571900"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1920391084"}, InstrumentLeg_35);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
    LegPriceUnitOfMeasureQty_35.setString("9956947");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegProduct{1006991738}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegPutOrCall{431074571}, InstrumentLeg_35);
    FIX::LegRatioQty LegRatioQty_35;
    LegRatioQty_35.setString("1785750");
set_field(noLegs_0_2, LegRatioQty_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1181234367"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1268420679"}, InstrumentLeg_35);
    FIX::LegRepurchaseRate LegRepurchaseRate_35;
    LegRepurchaseRate_35.setString("7.560000");
set_field(noLegs_0_2, LegRepurchaseRate_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{719916170}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1469112108"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_292398378"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_140373801"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1967750021"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1317787275"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_539931116"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1489159376"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_35);
    FIX::LegStrikePrice LegStrikePrice_35;
    LegStrikePrice_35.setString("6527435");
set_field(noLegs_0_2, LegStrikePrice_35, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1813002403"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1571509495"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_249430906"}, InstrumentLeg_35);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1787807953"}, InstrumentLeg_35);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
    LegUnitOfMeasureQty_35.setString("6873441");
set_field(noLegs_0_2, LegUnitOfMeasureQty_35, InstrumentLeg_35);
    all_values.push_back(InstrumentLeg_35);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1809631805"}, LegSecAltIDGrp_NoLegSecurityAltID_72);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1492898959"}, LegSecAltIDGrp_NoLegSecurityAltID_72);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_329209792"}, LegSecAltIDGrp_NoLegSecurityAltID_73);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1359271214"}, LegSecAltIDGrp_NoLegSecurityAltID_73);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_35987212"}, LegSecAltIDGrp_NoLegSecurityAltID_74);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_102117229"}, LegSecAltIDGrp_NoLegSecurityAltID_74);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_22;
  FIX::AttachmentPoint AttachmentPoint_22;
  AttachmentPoint_22.setString("23.590000");
set_field(msg, AttachmentPoint_22, Instrument_22);
  set_field(msg, FIX::CFICode{"STRING_1042978950"}, Instrument_22);
  set_field(msg, FIX::CPProgram{1}, Instrument_22);
  set_field(msg, FIX::CPRegType{"STRING_386057385"}, Instrument_22);
  FIX::CapPrice CapPrice_22;
  CapPrice_22.setString("767296");
set_field(msg, CapPrice_22, Instrument_22);
  FIX::ContractMultiplier ContractMultiplier_22;
  ContractMultiplier_22.setString("18016124");
set_field(msg, ContractMultiplier_22, Instrument_22);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_22);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_796645840"}, Instrument_22);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1123240939"}, Instrument_22);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1745696520"}, Instrument_22);
  FIX::CouponRate CouponRate_22;
  CouponRate_22.setString("96.420000");
set_field(msg, CouponRate_22, Instrument_22);
  set_field(msg, FIX::CreditRating{"STRING_943507313"}, Instrument_22);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_916000147"}, Instrument_22);
  FIX::DetachmentPoint DetachmentPoint_22;
  DetachmentPoint_22.setString("7.580000");
set_field(msg, DetachmentPoint_22, Instrument_22);
  set_field(msg, FIX::EncodedIssuer{"DATA_232107941"}, Instrument_22);
  set_field(msg, FIX::EncodedIssuerLen{257675875}, Instrument_22);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1343111103"}, Instrument_22);
  set_field(msg, FIX::EncodedSecurityDescLen{207067466}, Instrument_22);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_22);
  FIX::Factor Factor_22;
  Factor_22.setString("10086298");
set_field(msg, Factor_22, Instrument_22);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_22);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_22);
  FIX::FloorPrice FloorPrice_22;
  FloorPrice_22.setString("6489541");
set_field(msg, FloorPrice_22, Instrument_22);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_22);
  set_field(msg, FIX::InstrRegistry{"STRING_7375513"}, Instrument_22);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_22);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1811336409"}, Instrument_22);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_336585306"}, Instrument_22);
  set_field(msg, FIX::Issuer{"STRING_1670373535"}, Instrument_22);
  set_field(msg, FIX::ListMethod{1}, Instrument_22);
  set_field(msg, FIX::LocaleOfIssue{"STRING_438702535"}, Instrument_22);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1877855894"}, Instrument_22);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_742818924"}, Instrument_22);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_971894335"}, Instrument_22);
  FIX::MinPriceIncrement MinPriceIncrement_22;
  MinPriceIncrement_22.setString("1164296");
set_field(msg, MinPriceIncrement_22, Instrument_22);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
  MinPriceIncrementAmount_22.setString("8195485");
set_field(msg, MinPriceIncrementAmount_22, Instrument_22);
  set_field(msg, FIX::NTPositionLimit{626023166}, Instrument_22);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
  NotionalPercentageOutstanding_22.setString("77.740000");
set_field(msg, NotionalPercentageOutstanding_22, Instrument_22);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_22);
  FIX::OptPayoutAmount OptPayoutAmount_22;
  OptPayoutAmount_22.setString("17492641");
set_field(msg, OptPayoutAmount_22, Instrument_22);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_22);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
  OriginalNotionalPercentageOutstanding_22.setString("4.280000");
set_field(msg, OriginalNotionalPercentageOutstanding_22, Instrument_22);
  set_field(msg, FIX::Pool{"STRING_545287771"}, Instrument_22);
  set_field(msg, FIX::PositionLimit{2083940794}, Instrument_22);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_22);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_777395712"}, Instrument_22);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
  PriceUnitOfMeasureQty_22.setString("1941330");
set_field(msg, PriceUnitOfMeasureQty_22, Instrument_22);
  set_field(msg, FIX::Product{8}, Instrument_22);
  set_field(msg, FIX::ProductComplex{"STRING_984463178"}, Instrument_22);
  set_field(msg, FIX::PutOrCall{1}, Instrument_22);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2086938499"}, Instrument_22);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_615556492"}, Instrument_22);
  FIX::RepurchaseRate RepurchaseRate_22;
  RepurchaseRate_22.setString("90.480000");
set_field(msg, RepurchaseRate_22, Instrument_22);
  set_field(msg, FIX::RepurchaseTerm{588409014}, Instrument_22);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_22);
  set_field(msg, FIX::SecurityDesc{"STRING_124294561"}, Instrument_22);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_899511335"}, Instrument_22);
  set_field(msg, FIX::SecurityGroup{"STRING_597846703"}, Instrument_22);
  set_field(msg, FIX::SecurityID{"STRING_460879867"}, Instrument_22);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_22);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_22);
  set_field(msg, FIX::SecuritySubType{"STRING_899582402"}, Instrument_22);
  set_field(msg, FIX::SecurityType{"STRING_BRIDGE"}, Instrument_22);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_22);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_22);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_269203100"}, Instrument_22);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1860054195"}, Instrument_22);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_22);
  FIX::StrikeMultiplier StrikeMultiplier_22;
  StrikeMultiplier_22.setString("13287649");
set_field(msg, StrikeMultiplier_22, Instrument_22);
  FIX::StrikePrice StrikePrice_22;
  StrikePrice_22.setString("20992803");
set_field(msg, StrikePrice_22, Instrument_22);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_22);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
  StrikePriceBoundaryPrecision_22.setString("54.100000");
set_field(msg, StrikePriceBoundaryPrecision_22, Instrument_22);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_22);
  FIX::StrikeValue StrikeValue_22;
  StrikeValue_22.setString("7958450");
set_field(msg, StrikeValue_22, Instrument_22);
  set_field(msg, FIX::Symbol{"STRING_1469692948"}, Instrument_22);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_22);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_22);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_22);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_22);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
  UnitOfMeasureQty_22.setString("20945304");
set_field(msg, UnitOfMeasureQty_22, Instrument_22);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_22);
  all_values.push_back(Instrument_22);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_41;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_41);
    FIX::ComplexEventPrice ComplexEventPrice_41;
    ComplexEventPrice_41.setString("9283818");
set_field(noComplexEvents_0_0, ComplexEventPrice_41, ComplexEvents_NoComplexEvents_41);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_41);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
    ComplexEventPriceBoundaryPrecision_41.setString("4.070000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_41, ComplexEvents_NoComplexEvents_41);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_41);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_41);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
    ComplexOptPayoutAmount_41.setString("6491402");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_41, ComplexEvents_NoComplexEvents_41);
    all_values.push_back(ComplexEvents_NoComplexEvents_41);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_84;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 25, 55, 15, 11, 2008)}, ComplexEventDates_NoComplexEventDates_84);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 56, 37, 5, 11, 2008)}, ComplexEventDates_NoComplexEventDates_84);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_84);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 17, 8)}, ComplexEventTimes_NoComplexEventTimes_180);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 22, 39)}, ComplexEventTimes_NoComplexEventTimes_180);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_49;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_921510982"}, EvntGrp_NoEvents_49);
    FIX::EventPx EventPx_49;
    EventPx_49.setString("15506122");
set_field(noEvents_0_0, EventPx_49, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventText{"STRING_913234848"}, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 23, 54, 5, 6, 2007)}, EvntGrp_NoEvents_49);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_49);
    all_values.push_back(EvntGrp_NoEvents_49);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_43;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1485102665"}, InstrumentParties_NoInstrumentParties_43);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_43);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1711578295}, InstrumentParties_NoInstrumentParties_43);
    all_values.push_back(InstrumentParties_NoInstrumentParties_43);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_731196963"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1138623384}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_629475915"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{661626101}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1062752958"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{353459672}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_50;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_113879081"}, SecAltIDGrp_NoSecurityAltID_50);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1067421469"}, SecAltIDGrp_NoSecurityAltID_50);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_44;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1714904568"}, SecurityXML_44);
  set_field(msg, FIX::SecurityXMLLen{1423948581}, SecurityXML_44);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1728430064"}, SecurityXML_44);
  all_values.push_back(SecurityXML_44);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("17080337");
set_field(msg, CashOrderQty_6, OrderQtyData_6);
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("6.520000");
set_field(msg, OrderPercent_6, OrderQtyData_6);
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("3059208");
set_field(msg, OrderQty_15, OrderQtyData_6);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_6);
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("7166792");
set_field(msg, RoundingModulus_6, OrderQtyData_6);
  all_values.push_back(OrderQtyData_6);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_30;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1083981553"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{231181041}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_634047181"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1788712747}, UnderlyingInstrument_30);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("1547427");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_30, UnderlyingInstrument_30);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("13.340000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_30, UnderlyingInstrument_30);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("44.790000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1527869931"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1686507606"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2086647144"}, UnderlyingInstrument_30);
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("19156495");
set_field(noUnderlyings_0_0, UnderlyingCapValue_30, UnderlyingInstrument_30);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("12506022");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_30);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("4993628");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{241741989}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_122492942"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1160988936"}, UnderlyingInstrument_30);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("49.470000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_475952614"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_30);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("15433740");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_30, UnderlyingInstrument_30);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("43.960000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_30, UnderlyingInstrument_30);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("6948389");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_30, UnderlyingInstrument_30);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("11243204");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_30, UnderlyingInstrument_30);
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("2032244");
set_field(noUnderlyings_0_0, UnderlyingEndValue_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2008389614}, UnderlyingInstrument_30);
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("14302413");
set_field(noUnderlyings_0_0, UnderlyingFXRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_30);
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("5775852");
set_field(noUnderlyings_0_0, UnderlyingFactor_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{501913413}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1769267121"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_808766245"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1135960594"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1410496220"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_963508983"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_586138280"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2012040699"}, UnderlyingInstrument_30);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("52.670000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_30);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("41.960000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_112061138"}, UnderlyingInstrument_30);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("13757644");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1444221222}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{611423972}, UnderlyingInstrument_30);
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("16175064");
set_field(noUnderlyings_0_0, UnderlyingPx_30, UnderlyingInstrument_30);
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("15667141");
set_field(noUnderlyings_0_0, UnderlyingQty_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1772412908"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_774517779"}, UnderlyingInstrument_30);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("67.780000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{700182736}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_45408160"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1438557213"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1342857133"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_740247121"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_415394064"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1546081624"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_601153087"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1845635420"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_83883543"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_30);
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("2000651");
set_field(noUnderlyings_0_0, UnderlyingStartValue_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1853150664"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_30);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("11161632");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_803529872"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1922164061"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_980720288"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1147425139"}, UnderlyingInstrument_30);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("20473262");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_30, UnderlyingInstrument_30);
    all_values.push_back(UnderlyingInstrument_30);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1259486277"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1275607143"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_81178411"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1870910249"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_745629975"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1647892575"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1520147755"}, UnderlyingStipulations_NoUnderlyingStips_53);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1543075706"}, UnderlyingStipulations_NoUnderlyingStips_53);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1565555915"}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1391395731}, UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1249543336"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{789993707}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_759472476"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{947695108}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_873877251"}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1147760294}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1778231656"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{336302427}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1695707504"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{434277880}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_110982840"}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1581703019}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1313384981"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{693705648}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_29;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_29);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1394563392"}, header_29);
  set_header_field(msg.getHeader(), FIX::BodyLength{417132249}, header_29);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2032062610"}, header_29);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_894972320"}, header_29);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1912971759"}, header_29);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1404726717"}, header_29);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{290564378}, header_29);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_29);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{822798984}, header_29);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1124713649"}, header_29);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1205422441"}, header_29);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_981118372"}, header_29);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(13, 28, 6, 20, 9, 2012)}, header_29);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_29);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_29);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_511047519"}, header_29);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{849577876}, header_29);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1596343856"}, header_29);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_622030359"}, header_29);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1378522021"}, header_29);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 34, 35, 9, 12, 2002)}, header_29);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1803867447"}, header_29);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_686475419"}, header_29);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1906889236"}, header_29);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1061110516"}, header_29);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{977039797}, header_29);
  all_values.push_back(header_29);
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
