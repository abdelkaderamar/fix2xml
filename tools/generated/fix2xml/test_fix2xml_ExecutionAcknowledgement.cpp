#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ExecutionAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_0;
  FIX::AvgPx AvgPx_4;
  AvgPx_4.setString("12217443");
set_field(msg, AvgPx_4, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ClOrdID{"STRING_199366008"}, ExecutionAcknowledgement_0);
  FIX::CumQty CumQty_0;
  CumQty_0.setString("8740736");
set_field(msg, CumQty_0, ExecutionAcknowledgement_0);
  set_field(msg, FIX::DKReason{'A'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::EncodedText{"DATA_245766143"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::EncodedTextLen{153076230}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ExecAckStatus{'1'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::ExecID{"STRING_508716157"}, ExecutionAcknowledgement_0);
  FIX::LastParPx LastParPx_7;
  LastParPx_7.setString("7371489");
set_field(msg, LastParPx_7, ExecutionAcknowledgement_0);
  FIX::LastPx LastPx_8;
  LastPx_8.setString("12752208");
set_field(msg, LastPx_8, ExecutionAcknowledgement_0);
  FIX::LastQty LastQty_8;
  LastQty_8.setString("17738671");
set_field(msg, LastQty_8, ExecutionAcknowledgement_0);
  set_field(msg, FIX::OrderID{"STRING_1503107956"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::PriceType{15}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1745166080"}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::Side{'G'}, ExecutionAcknowledgement_0);
  set_field(msg, FIX::Text{"STRING_496840021"}, ExecutionAcknowledgement_0);
  all_values.push_back(ExecutionAcknowledgement_0);

  all_compo_names.insert("ExecutionAcknowledgement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_36;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_21195786"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{242834135}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2048701901"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1406941708}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1604167834"}, InstrumentLeg_36);
    FIX::LegContractMultiplier LegContractMultiplier_36;
    LegContractMultiplier_36.setString("16432993");
set_field(noLegs_0_0, LegContractMultiplier_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1061898255}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_568365359"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1325640168"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1983605220"}, InstrumentLeg_36);
    FIX::LegCouponRate LegCouponRate_36;
    LegCouponRate_36.setString("40.360000");
set_field(noLegs_0_0, LegCouponRate_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1226836750"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_301097404"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1158577231}, InstrumentLeg_36);
    FIX::LegFactor LegFactor_36;
    LegFactor_36.setString("6880070");
set_field(noLegs_0_0, LegFactor_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1547917931}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1404343375"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_841083328"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1944429486"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1913059532"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1578232297"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1072166680"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1539443045"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_933856605"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_36);
    FIX::LegOptionRatio LegOptionRatio_36;
    LegOptionRatio_36.setString("11371254");
set_field(noLegs_0_0, LegOptionRatio_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_907104060"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1915460436"}, InstrumentLeg_36);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
    LegPriceUnitOfMeasureQty_36.setString("12294812");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegProduct{928299847}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPutOrCall{10810923}, InstrumentLeg_36);
    FIX::LegRatioQty LegRatioQty_36;
    LegRatioQty_36.setString("11306994");
set_field(noLegs_0_0, LegRatioQty_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_187757907"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1614978757"}, InstrumentLeg_36);
    FIX::LegRepurchaseRate LegRepurchaseRate_36;
    LegRepurchaseRate_36.setString("51.630000");
set_field(noLegs_0_0, LegRepurchaseRate_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1249656163}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_35860468"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1952155332"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1085777735"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_51654505"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1031508434"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2044988958"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1332605839"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_36);
    FIX::LegStrikePrice LegStrikePrice_36;
    LegStrikePrice_36.setString("7330401");
set_field(noLegs_0_0, LegStrikePrice_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_312942269"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1394678341"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_529985960"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_78518153"}, InstrumentLeg_36);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
    LegUnitOfMeasureQty_36.setString("8254269");
set_field(noLegs_0_0, LegUnitOfMeasureQty_36, InstrumentLeg_36);
    all_values.push_back(InstrumentLeg_36);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1617961199"}, LegSecAltIDGrp_NoLegSecurityAltID_74);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1759283596"}, LegSecAltIDGrp_NoLegSecurityAltID_74);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_37;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_873289407"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{607603029}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_518904008"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{641266196}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1837084238"}, InstrumentLeg_37);
    FIX::LegContractMultiplier LegContractMultiplier_37;
    LegContractMultiplier_37.setString("14472038");
set_field(noLegs_0_1, LegContractMultiplier_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{652077119}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_820300052"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1634961763"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_119572229"}, InstrumentLeg_37);
    FIX::LegCouponRate LegCouponRate_37;
    LegCouponRate_37.setString("52.150000");
set_field(noLegs_0_1, LegCouponRate_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_737134278"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1822912013"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{207087202}, InstrumentLeg_37);
    FIX::LegFactor LegFactor_37;
    LegFactor_37.setString("1355116");
set_field(noLegs_0_1, LegFactor_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1720417324}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_72675117"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1468117525"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_629016218"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_626270130"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_53673999"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_941958487"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_2020948472"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_583659959"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_37);
    FIX::LegOptionRatio LegOptionRatio_37;
    LegOptionRatio_37.setString("6988918");
set_field(noLegs_0_1, LegOptionRatio_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_38328952"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_490954191"}, InstrumentLeg_37);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
    LegPriceUnitOfMeasureQty_37.setString("3106917");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegProduct{911618359}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1098557220}, InstrumentLeg_37);
    FIX::LegRatioQty LegRatioQty_37;
    LegRatioQty_37.setString("8295957");
set_field(noLegs_0_1, LegRatioQty_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1552884555"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_788157810"}, InstrumentLeg_37);
    FIX::LegRepurchaseRate LegRepurchaseRate_37;
    LegRepurchaseRate_37.setString("59.780000");
set_field(noLegs_0_1, LegRepurchaseRate_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{57478027}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1608457862"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1764277741"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_177050256"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_907789430"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_353928371"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_332482953"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_29356737"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_37);
    FIX::LegStrikePrice LegStrikePrice_37;
    LegStrikePrice_37.setString("17497740");
set_field(noLegs_0_1, LegStrikePrice_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_612245273"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1615421892"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_231306631"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1238515404"}, InstrumentLeg_37);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
    LegUnitOfMeasureQty_37.setString("16690958");
set_field(noLegs_0_1, LegUnitOfMeasureQty_37, InstrumentLeg_37);
    all_values.push_back(InstrumentLeg_37);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1111980228"}, LegSecAltIDGrp_NoLegSecurityAltID_75);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_105272203"}, LegSecAltIDGrp_NoLegSecurityAltID_75);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_46258110"}, LegSecAltIDGrp_NoLegSecurityAltID_76);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1810872042"}, LegSecAltIDGrp_NoLegSecurityAltID_76);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_143601155"}, LegSecAltIDGrp_NoLegSecurityAltID_77);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_537212302"}, LegSecAltIDGrp_NoLegSecurityAltID_77);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_38;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_2121563805"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1055219514}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1635769522"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{803675928}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_460620422"}, InstrumentLeg_38);
    FIX::LegContractMultiplier LegContractMultiplier_38;
    LegContractMultiplier_38.setString("2764436");
set_field(noLegs_0_2, LegContractMultiplier_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{932991906}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_518098449"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1884901547"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_549786000"}, InstrumentLeg_38);
    FIX::LegCouponRate LegCouponRate_38;
    LegCouponRate_38.setString("87.050000");
set_field(noLegs_0_2, LegCouponRate_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_645207329"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCurrency{"USD"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_657000011"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{933071108}, InstrumentLeg_38);
    FIX::LegFactor LegFactor_38;
    LegFactor_38.setString("15672018");
set_field(noLegs_0_2, LegFactor_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{804304378}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_535361521"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_31963440"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_272242623"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_766668152"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1270478844"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1941338514"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1939933270"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_234975424"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'2'}, InstrumentLeg_38);
    FIX::LegOptionRatio LegOptionRatio_38;
    LegOptionRatio_38.setString("19861913");
set_field(noLegs_0_2, LegOptionRatio_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_2045847466"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_42728224"}, InstrumentLeg_38);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
    LegPriceUnitOfMeasureQty_38.setString("3759200");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegProduct{2019927623}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1097947739}, InstrumentLeg_38);
    FIX::LegRatioQty LegRatioQty_38;
    LegRatioQty_38.setString("20116895");
set_field(noLegs_0_2, LegRatioQty_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_676119903"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1558568161"}, InstrumentLeg_38);
    FIX::LegRepurchaseRate LegRepurchaseRate_38;
    LegRepurchaseRate_38.setString("95.940000");
set_field(noLegs_0_2, LegRepurchaseRate_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1609111810}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_2076666610"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_2025551142"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_11414162"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_624331667"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_523274823"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_915128533"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1180274834"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_38);
    FIX::LegStrikePrice LegStrikePrice_38;
    LegStrikePrice_38.setString("19845792");
set_field(noLegs_0_2, LegStrikePrice_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_236077515"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1103644932"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_109338188"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1002745668"}, InstrumentLeg_38);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
    LegUnitOfMeasureQty_38.setString("2266401");
set_field(noLegs_0_2, LegUnitOfMeasureQty_38, InstrumentLeg_38);
    all_values.push_back(InstrumentLeg_38);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_795195290"}, LegSecAltIDGrp_NoLegSecurityAltID_78);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_461615552"}, LegSecAltIDGrp_NoLegSecurityAltID_78);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1949803772"}, LegSecAltIDGrp_NoLegSecurityAltID_79);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_633903023"}, LegSecAltIDGrp_NoLegSecurityAltID_79);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_359979370"}, LegSecAltIDGrp_NoLegSecurityAltID_80);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_1992531996"}, LegSecAltIDGrp_NoLegSecurityAltID_80);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_24;
  FIX::AttachmentPoint AttachmentPoint_24;
  AttachmentPoint_24.setString("30.580000");
set_field(msg, AttachmentPoint_24, Instrument_24);
  set_field(msg, FIX::CFICode{"STRING_232423346"}, Instrument_24);
  set_field(msg, FIX::CPProgram{1}, Instrument_24);
  set_field(msg, FIX::CPRegType{"STRING_874028968"}, Instrument_24);
  FIX::CapPrice CapPrice_24;
  CapPrice_24.setString("9085432");
set_field(msg, CapPrice_24, Instrument_24);
  FIX::ContractMultiplier ContractMultiplier_24;
  ContractMultiplier_24.setString("3540806");
set_field(msg, ContractMultiplier_24, Instrument_24);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_24);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_370171411"}, Instrument_24);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_283263562"}, Instrument_24);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_892746056"}, Instrument_24);
  FIX::CouponRate CouponRate_24;
  CouponRate_24.setString("55.730000");
set_field(msg, CouponRate_24, Instrument_24);
  set_field(msg, FIX::CreditRating{"STRING_907595229"}, Instrument_24);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1416020880"}, Instrument_24);
  FIX::DetachmentPoint DetachmentPoint_24;
  DetachmentPoint_24.setString("41.070000");
set_field(msg, DetachmentPoint_24, Instrument_24);
  set_field(msg, FIX::EncodedIssuer{"DATA_412074907"}, Instrument_24);
  set_field(msg, FIX::EncodedIssuerLen{448812066}, Instrument_24);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_997430101"}, Instrument_24);
  set_field(msg, FIX::EncodedSecurityDescLen{1483756399}, Instrument_24);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_24);
  FIX::Factor Factor_24;
  Factor_24.setString("12335076");
set_field(msg, Factor_24, Instrument_24);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_24);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_24);
  FIX::FloorPrice FloorPrice_24;
  FloorPrice_24.setString("887696");
set_field(msg, FloorPrice_24, Instrument_24);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_24);
  set_field(msg, FIX::InstrRegistry{"STRING_298438874"}, Instrument_24);
  set_field(msg, FIX::InstrmtAssignmentMethod{'8'}, Instrument_24);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1128173363"}, Instrument_24);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_100758998"}, Instrument_24);
  set_field(msg, FIX::Issuer{"STRING_1517867950"}, Instrument_24);
  set_field(msg, FIX::ListMethod{1}, Instrument_24);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2093290994"}, Instrument_24);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_380207361"}, Instrument_24);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1720576079"}, Instrument_24);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_888803434"}, Instrument_24);
  FIX::MinPriceIncrement MinPriceIncrement_24;
  MinPriceIncrement_24.setString("12542363");
set_field(msg, MinPriceIncrement_24, Instrument_24);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
  MinPriceIncrementAmount_24.setString("4816356");
set_field(msg, MinPriceIncrementAmount_24, Instrument_24);
  set_field(msg, FIX::NTPositionLimit{1242884034}, Instrument_24);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
  NotionalPercentageOutstanding_24.setString("12.430000");
set_field(msg, NotionalPercentageOutstanding_24, Instrument_24);
  set_field(msg, FIX::OptAttribute{'8'}, Instrument_24);
  FIX::OptPayoutAmount OptPayoutAmount_24;
  OptPayoutAmount_24.setString("15261475");
set_field(msg, OptPayoutAmount_24, Instrument_24);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_24);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
  OriginalNotionalPercentageOutstanding_24.setString("26.660000");
set_field(msg, OriginalNotionalPercentageOutstanding_24, Instrument_24);
  set_field(msg, FIX::Pool{"STRING_286259178"}, Instrument_24);
  set_field(msg, FIX::PositionLimit{282714532}, Instrument_24);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_24);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_698334085"}, Instrument_24);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
  PriceUnitOfMeasureQty_24.setString("7315265");
set_field(msg, PriceUnitOfMeasureQty_24, Instrument_24);
  set_field(msg, FIX::Product{7}, Instrument_24);
  set_field(msg, FIX::ProductComplex{"STRING_34606836"}, Instrument_24);
  set_field(msg, FIX::PutOrCall{0}, Instrument_24);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_466077194"}, Instrument_24);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_474524519"}, Instrument_24);
  FIX::RepurchaseRate RepurchaseRate_24;
  RepurchaseRate_24.setString("0.490000");
set_field(msg, RepurchaseRate_24, Instrument_24);
  set_field(msg, FIX::RepurchaseTerm{554846831}, Instrument_24);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_24);
  set_field(msg, FIX::SecurityDesc{"STRING_1711118923"}, Instrument_24);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1438811758"}, Instrument_24);
  set_field(msg, FIX::SecurityGroup{"STRING_121772045"}, Instrument_24);
  set_field(msg, FIX::SecurityID{"STRING_1811877921"}, Instrument_24);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_24);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_24);
  set_field(msg, FIX::SecuritySubType{"STRING_1757685268"}, Instrument_24);
  set_field(msg, FIX::SecurityType{"STRING_USTB"}, Instrument_24);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_24);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_24);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_296156102"}, Instrument_24);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1664652891"}, Instrument_24);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_24);
  FIX::StrikeMultiplier StrikeMultiplier_24;
  StrikeMultiplier_24.setString("3689763");
set_field(msg, StrikeMultiplier_24, Instrument_24);
  FIX::StrikePrice StrikePrice_24;
  StrikePrice_24.setString("11205530");
set_field(msg, StrikePrice_24, Instrument_24);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_24);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
  StrikePriceBoundaryPrecision_24.setString("90.020000");
set_field(msg, StrikePriceBoundaryPrecision_24, Instrument_24);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_24);
  FIX::StrikeValue StrikeValue_24;
  StrikeValue_24.setString("17144791");
set_field(msg, StrikeValue_24, Instrument_24);
  set_field(msg, FIX::Symbol{"STRING_1984992127"}, Instrument_24);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_24);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_24);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_24);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_24);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
  UnitOfMeasureQty_24.setString("13159563");
set_field(msg, UnitOfMeasureQty_24, Instrument_24);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_24);
  all_values.push_back(Instrument_24);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_50;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexEventPrice ComplexEventPrice_50;
    ComplexEventPrice_50.setString("910020");
set_field(noComplexEvents_0_0, ComplexEventPrice_50, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
    ComplexEventPriceBoundaryPrecision_50.setString("80.350000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_50, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
    ComplexOptPayoutAmount_50.setString("19566659");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_50, ComplexEvents_NoComplexEvents_50);
    all_values.push_back(ComplexEvents_NoComplexEvents_50);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_105;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 34, 59, 11, 2, 2014)}, ComplexEventDates_NoComplexEventDates_105);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 18, 1, 13, 9, 2005)}, ComplexEventDates_NoComplexEventDates_105);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_105);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 19, 16)}, ComplexEventTimes_NoComplexEventTimes_208);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 28, 2)}, ComplexEventTimes_NoComplexEventTimes_208);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 2, 25)}, ComplexEventTimes_NoComplexEventTimes_209);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 34, 24)}, ComplexEventTimes_NoComplexEventTimes_209);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_106;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 50, 27, 14, 8, 2015)}, ComplexEventDates_NoComplexEventDates_106);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 28, 31, 7, 5, 2016)}, ComplexEventDates_NoComplexEventDates_106);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_106);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 18, 8)}, ComplexEventTimes_NoComplexEventTimes_210);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 36, 17)}, ComplexEventTimes_NoComplexEventTimes_210);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 11, 7)}, ComplexEventTimes_NoComplexEventTimes_211);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 42, 46)}, ComplexEventTimes_NoComplexEventTimes_211);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_53;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1670830005"}, EvntGrp_NoEvents_53);
    FIX::EventPx EventPx_53;
    EventPx_53.setString("13031522");
set_field(noEvents_0_0, EventPx_53, EvntGrp_NoEvents_53);
    set_field(noEvents_0_0, FIX::EventText{"STRING_764483277"}, EvntGrp_NoEvents_53);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 7, 42, 22, 12, 2011)}, EvntGrp_NoEvents_53);
    set_field(noEvents_0_0, FIX::EventType{11}, EvntGrp_NoEvents_53);
    all_values.push_back(EvntGrp_NoEvents_53);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_54;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2110068195"}, EvntGrp_NoEvents_54);
    FIX::EventPx EventPx_54;
    EventPx_54.setString("3644626");
set_field(noEvents_0_1, EventPx_54, EvntGrp_NoEvents_54);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1347206708"}, EvntGrp_NoEvents_54);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(19, 18, 16, 26, 3, 2008)}, EvntGrp_NoEvents_54);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_54);
    all_values.push_back(EvntGrp_NoEvents_54);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_55;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_890311820"}, EvntGrp_NoEvents_55);
    FIX::EventPx EventPx_55;
    EventPx_55.setString("8245963");
set_field(noEvents_0_2, EventPx_55, EvntGrp_NoEvents_55);
    set_field(noEvents_0_2, FIX::EventText{"STRING_980874770"}, EvntGrp_NoEvents_55);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(17, 53, 2, 7, 12, 2005)}, EvntGrp_NoEvents_55);
    set_field(noEvents_0_2, FIX::EventType{17}, EvntGrp_NoEvents_55);
    all_values.push_back(EvntGrp_NoEvents_55);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_46;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1881534411"}, InstrumentParties_NoInstrumentParties_46);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_46);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{320395220}, InstrumentParties_NoInstrumentParties_46);
    all_values.push_back(InstrumentParties_NoInstrumentParties_46);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_814832006"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{84092567}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1529160390"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1302159336}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_46;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1893622995"}, SecAltIDGrp_NoSecurityAltID_46);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_501882397"}, SecAltIDGrp_NoSecurityAltID_46);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_48;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1761795002"}, SecurityXML_48);
  set_field(msg, FIX::SecurityXMLLen{285599055}, SecurityXML_48);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1805956615"}, SecurityXML_48);
  all_values.push_back(SecurityXML_48);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_4;
  FIX::CashOrderQty CashOrderQty_4;
  CashOrderQty_4.setString("15582031");
set_field(msg, CashOrderQty_4, OrderQtyData_4);
  FIX::OrderPercent OrderPercent_4;
  OrderPercent_4.setString("40.370000");
set_field(msg, OrderPercent_4, OrderQtyData_4);
  FIX::OrderQty OrderQty_12;
  OrderQty_12.setString("13323591");
set_field(msg, OrderQty_12, OrderQtyData_4);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_4);
  FIX::RoundingModulus RoundingModulus_4;
  RoundingModulus_4.setString("17267364");
set_field(msg, RoundingModulus_4, OrderQtyData_4);
  all_values.push_back(OrderQtyData_4);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_40;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_420377278"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{560127599}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1320810066"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1517720199}, UnderlyingInstrument_40);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
    UnderlyingAdjustedQuantity_40.setString("9897643");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_40, UnderlyingInstrument_40);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
    UnderlyingAllocationPercent_40.setString("76.080000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_40, UnderlyingInstrument_40);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
    UnderlyingAttachmentPoint_40.setString("40.390000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1412212096"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1647191508"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_915560095"}, UnderlyingInstrument_40);
    FIX::UnderlyingCapValue UnderlyingCapValue_40;
    UnderlyingCapValue_40.setString("4516595");
set_field(noUnderlyings_0_0, UnderlyingCapValue_40, UnderlyingInstrument_40);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
    UnderlyingCashAmount_40.setString("13812422");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_40);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
    UnderlyingContractMultiplier_40.setString("7720547");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{723114829}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1971826505"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_856147296"}, UnderlyingInstrument_40);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
    UnderlyingCouponRate_40.setString("15.710000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1126502194"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_40);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
    UnderlyingCurrentValue_40.setString("16283845");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_40, UnderlyingInstrument_40);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
    UnderlyingDetachmentPoint_40.setString("57.640000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_40, UnderlyingInstrument_40);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
    UnderlyingDirtyPrice_40.setString("1365299");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_40, UnderlyingInstrument_40);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
    UnderlyingEndPrice_40.setString("12868575");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_40, UnderlyingInstrument_40);
    FIX::UnderlyingEndValue UnderlyingEndValue_40;
    UnderlyingEndValue_40.setString("20753388");
set_field(noUnderlyings_0_0, UnderlyingEndValue_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{979194011}, UnderlyingInstrument_40);
    FIX::UnderlyingFXRate UnderlyingFXRate_40;
    UnderlyingFXRate_40.setString("4717330");
set_field(noUnderlyings_0_0, UnderlyingFXRate_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_40);
    FIX::UnderlyingFactor UnderlyingFactor_40;
    UnderlyingFactor_40.setString("5584468");
set_field(noUnderlyings_0_0, UnderlyingFactor_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{546920455}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2091497119"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1118574440"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1867730521"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1461733670"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2108338752"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1442574482"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2026797709"}, UnderlyingInstrument_40);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
    UnderlyingNotionalPercentageOutstanding_40.setString("72.000000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_40);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
    UnderlyingOriginalNotionalPercentageOutstanding_40.setString("41.560000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1824726709"}, UnderlyingInstrument_40);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
    UnderlyingPriceUnitOfMeasureQty_40.setString("1760409");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1951868655}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{449297790}, UnderlyingInstrument_40);
    FIX::UnderlyingPx UnderlyingPx_40;
    UnderlyingPx_40.setString("8991557");
set_field(noUnderlyings_0_0, UnderlyingPx_40, UnderlyingInstrument_40);
    FIX::UnderlyingQty UnderlyingQty_40;
    UnderlyingQty_40.setString("17762115");
set_field(noUnderlyings_0_0, UnderlyingQty_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1305445086"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1003947366"}, UnderlyingInstrument_40);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
    UnderlyingRepurchaseRate_40.setString("0.590000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{60785849}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_854878285"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_236131002"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_577921613"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_991408259"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1522988560"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_505776860"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1970602270"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1994721657"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_29413053"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_40);
    FIX::UnderlyingStartValue UnderlyingStartValue_40;
    UnderlyingStartValue_40.setString("3941584");
set_field(noUnderlyings_0_0, UnderlyingStartValue_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2120910172"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_40);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
    UnderlyingStrikePrice_40.setString("14351601");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_40, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1460995007"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1556979819"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1314474256"}, UnderlyingInstrument_40);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_686578560"}, UnderlyingInstrument_40);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
    UnderlyingUnitOfMeasureQty_40.setString("3517785");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_40, UnderlyingInstrument_40);
    all_values.push_back(UnderlyingInstrument_40);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_363821621"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_527819479"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_85;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1913733420"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_813119412"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_81;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1542461285"}, UnderlyingStipulations_NoUnderlyingStips_81);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2118564498"}, UnderlyingStipulations_NoUnderlyingStips_81);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_81);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_82;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_283438991"}, UnderlyingStipulations_NoUnderlyingStips_82);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_150207696"}, UnderlyingStipulations_NoUnderlyingStips_82);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_82);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1138317276"}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{609788313}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1909327258"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1115565173}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1952844158"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1756565267}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1144978226"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{186925973}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_41;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_3240083"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1118404750}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1687065876"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{117645421}, UnderlyingInstrument_41);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_41;
    UnderlyingAdjustedQuantity_41.setString("4060812");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_41, UnderlyingInstrument_41);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_41;
    UnderlyingAllocationPercent_41.setString("72.350000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_41, UnderlyingInstrument_41);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_41;
    UnderlyingAttachmentPoint_41.setString("52.400000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1720555552"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1687155795"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2026403754"}, UnderlyingInstrument_41);
    FIX::UnderlyingCapValue UnderlyingCapValue_41;
    UnderlyingCapValue_41.setString("16824203");
set_field(noUnderlyings_0_1, UnderlyingCapValue_41, UnderlyingInstrument_41);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_41;
    UnderlyingCashAmount_41.setString("20509774");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_41);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_41;
    UnderlyingContractMultiplier_41.setString("14486700");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{716613181}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1833714858"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_843647726"}, UnderlyingInstrument_41);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_41;
    UnderlyingCouponRate_41.setString("40.310000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_2117153850"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_41);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_41;
    UnderlyingCurrentValue_41.setString("11079874");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_41, UnderlyingInstrument_41);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_41;
    UnderlyingDetachmentPoint_41.setString("41.200000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_41, UnderlyingInstrument_41);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_41;
    UnderlyingDirtyPrice_41.setString("13293490");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_41, UnderlyingInstrument_41);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_41;
    UnderlyingEndPrice_41.setString("10902293");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_41, UnderlyingInstrument_41);
    FIX::UnderlyingEndValue UnderlyingEndValue_41;
    UnderlyingEndValue_41.setString("11420377");
set_field(noUnderlyings_0_1, UnderlyingEndValue_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{297430569}, UnderlyingInstrument_41);
    FIX::UnderlyingFXRate UnderlyingFXRate_41;
    UnderlyingFXRate_41.setString("8955898");
set_field(noUnderlyings_0_1, UnderlyingFXRate_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_41);
    FIX::UnderlyingFactor UnderlyingFactor_41;
    UnderlyingFactor_41.setString("14424087");
set_field(noUnderlyings_0_1, UnderlyingFactor_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1082515849}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_754359433"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_413329897"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_622098077"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_872004854"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_819411193"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1622675312"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_399146447"}, UnderlyingInstrument_41);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_41;
    UnderlyingNotionalPercentageOutstanding_41.setString("30.980000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_41);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_41;
    UnderlyingOriginalNotionalPercentageOutstanding_41.setString("65.530000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2074903415"}, UnderlyingInstrument_41);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_41;
    UnderlyingPriceUnitOfMeasureQty_41.setString("10658412");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{684806138}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1376089856}, UnderlyingInstrument_41);
    FIX::UnderlyingPx UnderlyingPx_41;
    UnderlyingPx_41.setString("17824544");
set_field(noUnderlyings_0_1, UnderlyingPx_41, UnderlyingInstrument_41);
    FIX::UnderlyingQty UnderlyingQty_41;
    UnderlyingQty_41.setString("3710373");
set_field(noUnderlyings_0_1, UnderlyingQty_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_72253934"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_322664793"}, UnderlyingInstrument_41);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_41;
    UnderlyingRepurchaseRate_41.setString("75.500000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1066109356}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1042225524"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1448695029"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_298819828"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_224090920"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_391440747"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1440857558"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_521521489"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1287030623"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_44493260"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_41);
    FIX::UnderlyingStartValue UnderlyingStartValue_41;
    UnderlyingStartValue_41.setString("2220628");
set_field(noUnderlyings_0_1, UnderlyingStartValue_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_798852694"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_41);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_41;
    UnderlyingStrikePrice_41.setString("16708575");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_41, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1049187727"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_319352565"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2070003995"}, UnderlyingInstrument_41);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1441670825"}, UnderlyingInstrument_41);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_41;
    UnderlyingUnitOfMeasureQty_41.setString("14817000");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_41, UnderlyingInstrument_41);
    all_values.push_back(UnderlyingInstrument_41);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_86;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1369090592"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_400057606"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_83;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_597696800"}, UnderlyingStipulations_NoUnderlyingStips_83);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_35028368"}, UnderlyingStipulations_NoUnderlyingStips_83);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_83);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_84;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1256430387"}, UnderlyingStipulations_NoUnderlyingStips_84);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_669950734"}, UnderlyingStipulations_NoUnderlyingStips_84);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_84);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_85;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_357693162"}, UnderlyingStipulations_NoUnderlyingStips_85);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1597137937"}, UnderlyingStipulations_NoUnderlyingStips_85);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_85);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1399918686"}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2034879918}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1289790065"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1328253828}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2145531096"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{429337040}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1372747089"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1961977733}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_651399864"}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{44270618}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1694973683"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1093458345}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1814913331"}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{387645522}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1818080931"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1756736114}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_42;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1549187315"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{555990322}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_206949266"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1584215683}, UnderlyingInstrument_42);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_42;
    UnderlyingAdjustedQuantity_42.setString("18124207");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_42, UnderlyingInstrument_42);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_42;
    UnderlyingAllocationPercent_42.setString("0.000000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_42, UnderlyingInstrument_42);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_42;
    UnderlyingAttachmentPoint_42.setString("88.450000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1262074998"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_465476442"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1194343884"}, UnderlyingInstrument_42);
    FIX::UnderlyingCapValue UnderlyingCapValue_42;
    UnderlyingCapValue_42.setString("129406");
set_field(noUnderlyings_0_2, UnderlyingCapValue_42, UnderlyingInstrument_42);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_42;
    UnderlyingCashAmount_42.setString("3528727");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_42);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_42;
    UnderlyingContractMultiplier_42.setString("13027307");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1681126541}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_668917291"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1732067775"}, UnderlyingInstrument_42);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_42;
    UnderlyingCouponRate_42.setString("99.820000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_483411376"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_42);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_42;
    UnderlyingCurrentValue_42.setString("5276819");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_42, UnderlyingInstrument_42);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_42;
    UnderlyingDetachmentPoint_42.setString("47.570000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_42, UnderlyingInstrument_42);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_42;
    UnderlyingDirtyPrice_42.setString("4779961");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_42, UnderlyingInstrument_42);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_42;
    UnderlyingEndPrice_42.setString("16211403");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_42, UnderlyingInstrument_42);
    FIX::UnderlyingEndValue UnderlyingEndValue_42;
    UnderlyingEndValue_42.setString("13989744");
set_field(noUnderlyings_0_2, UnderlyingEndValue_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{2095490183}, UnderlyingInstrument_42);
    FIX::UnderlyingFXRate UnderlyingFXRate_42;
    UnderlyingFXRate_42.setString("20087858");
set_field(noUnderlyings_0_2, UnderlyingFXRate_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_42);
    FIX::UnderlyingFactor UnderlyingFactor_42;
    UnderlyingFactor_42.setString("17660874");
set_field(noUnderlyings_0_2, UnderlyingFactor_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1618038329}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1949807815"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_174594141"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1824987596"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1386539851"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1987014850"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_554403948"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1180965048"}, UnderlyingInstrument_42);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_42;
    UnderlyingNotionalPercentageOutstanding_42.setString("62.000000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_42);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_42;
    UnderlyingOriginalNotionalPercentageOutstanding_42.setString("52.840000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1114546869"}, UnderlyingInstrument_42);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_42;
    UnderlyingPriceUnitOfMeasureQty_42.setString("13727531");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{898695127}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{269793956}, UnderlyingInstrument_42);
    FIX::UnderlyingPx UnderlyingPx_42;
    UnderlyingPx_42.setString("9063959");
set_field(noUnderlyings_0_2, UnderlyingPx_42, UnderlyingInstrument_42);
    FIX::UnderlyingQty UnderlyingQty_42;
    UnderlyingQty_42.setString("15676124");
set_field(noUnderlyings_0_2, UnderlyingQty_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2001861731"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1812785978"}, UnderlyingInstrument_42);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_42;
    UnderlyingRepurchaseRate_42.setString("37.950000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{90362074}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_595808447"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_431222142"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1821906831"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1073804600"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_2052362483"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1073397623"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1021811135"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1913664698"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1474018124"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_42);
    FIX::UnderlyingStartValue UnderlyingStartValue_42;
    UnderlyingStartValue_42.setString("13842193");
set_field(noUnderlyings_0_2, UnderlyingStartValue_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1276342291"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_42);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_42;
    UnderlyingStrikePrice_42.setString("5153984");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_42, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_654540297"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1616127276"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1696363543"}, UnderlyingInstrument_42);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1756146498"}, UnderlyingInstrument_42);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_42;
    UnderlyingUnitOfMeasureQty_42.setString("4885240");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_42, UnderlyingInstrument_42);
    all_values.push_back(UnderlyingInstrument_42);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_87;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_723209719"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1861277122"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_88;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_675400307"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_993003675"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_89;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_620189471"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_95529078"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_86;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_285491801"}, UnderlyingStipulations_NoUnderlyingStips_86);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_2146552873"}, UnderlyingStipulations_NoUnderlyingStips_86);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_86);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_881300249"}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{612167016}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_335170203"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1685564640}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_829432336"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{101351253}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1012099116"}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1485570632}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_137372738"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{399810312}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_656356254"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{791913036}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2015937588"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{205236149}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_400575886"}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{2129424976}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_70771433"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{657341635}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2116789281"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{690960904}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_752870713"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{816687391}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
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
