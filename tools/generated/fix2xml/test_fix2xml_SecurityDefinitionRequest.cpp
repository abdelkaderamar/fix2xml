#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_0;
  set_field(msg, FIX::Currency{"EUR"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1450282278"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::EncodedTextLen{1662065804}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::ExpirationCycle{0}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_622307033"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_828473346"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_510409447"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SecurityRequestType{5}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::Text{"STRING_1739311537"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, SecurityDefinitionRequest_0);
  all_values.push_back(SecurityDefinitionRequest_0);

  all_compo_names.insert("SecurityDefinitionRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_119;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1538180709"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{937639477}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1768165407"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1943226726}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_274069253"}, InstrumentLeg_119);
    FIX::LegContractMultiplier LegContractMultiplier_119;
    LegContractMultiplier_119.setString("13636672");
set_field(noLegs_0_0, LegContractMultiplier_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2021949335}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1495678471"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1437912241"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_42921544"}, InstrumentLeg_119);
    FIX::LegCouponRate LegCouponRate_119;
    LegCouponRate_119.setString("35.090000");
set_field(noLegs_0_0, LegCouponRate_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1099565683"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1302793846"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1039928062}, InstrumentLeg_119);
    FIX::LegFactor LegFactor_119;
    LegFactor_119.setString("3382537");
set_field(noLegs_0_0, LegFactor_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{787604361}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1945746017"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1788535978"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_302186517"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1362145021"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_263359363"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1130659863"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1872554468"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1229484998"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_119);
    FIX::LegOptionRatio LegOptionRatio_119;
    LegOptionRatio_119.setString("14643823");
set_field(noLegs_0_0, LegOptionRatio_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1368890761"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_345141166"}, InstrumentLeg_119);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
    LegPriceUnitOfMeasureQty_119.setString("2581754");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegProduct{759587822}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1282780643}, InstrumentLeg_119);
    FIX::LegRatioQty LegRatioQty_119;
    LegRatioQty_119.setString("20263408");
set_field(noLegs_0_0, LegRatioQty_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_555330901"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1556849896"}, InstrumentLeg_119);
    FIX::LegRepurchaseRate LegRepurchaseRate_119;
    LegRepurchaseRate_119.setString("44.640000");
set_field(noLegs_0_0, LegRepurchaseRate_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{429796588}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_905044719"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_532953057"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_472718132"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_858644580"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1632518740"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2078544008"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_787828939"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_119);
    FIX::LegStrikePrice LegStrikePrice_119;
    LegStrikePrice_119.setString("15754333");
set_field(noLegs_0_0, LegStrikePrice_119, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_769250792"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_575075141"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1877619817"}, InstrumentLeg_119);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2131395813"}, InstrumentLeg_119);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
    LegUnitOfMeasureQty_119.setString("8384345");
set_field(noLegs_0_0, LegUnitOfMeasureQty_119, InstrumentLeg_119);
    all_values.push_back(InstrumentLeg_119);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_234;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1856466633"}, LegSecAltIDGrp_NoLegSecurityAltID_234);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_2067919503"}, LegSecAltIDGrp_NoLegSecurityAltID_234);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_234);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_120;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_918506334"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1173365343}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1289326616"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1263647500}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1431540828"}, InstrumentLeg_120);
    FIX::LegContractMultiplier LegContractMultiplier_120;
    LegContractMultiplier_120.setString("20489144");
set_field(noLegs_0_1, LegContractMultiplier_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{398944495}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1310398071"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_456761691"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1955794391"}, InstrumentLeg_120);
    FIX::LegCouponRate LegCouponRate_120;
    LegCouponRate_120.setString("88.870000");
set_field(noLegs_0_1, LegCouponRate_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_886558280"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1359276412"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1572000042}, InstrumentLeg_120);
    FIX::LegFactor LegFactor_120;
    LegFactor_120.setString("4234270");
set_field(noLegs_0_1, LegFactor_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1290336772}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_20285505"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1211255976"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_113841547"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_954308315"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_639205628"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_883092339"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1529383456"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_369341798"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_120);
    FIX::LegOptionRatio LegOptionRatio_120;
    LegOptionRatio_120.setString("2203343");
set_field(noLegs_0_1, LegOptionRatio_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1230137831"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_575987489"}, InstrumentLeg_120);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_120;
    LegPriceUnitOfMeasureQty_120.setString("1407701");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegProduct{1160517}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1749352833}, InstrumentLeg_120);
    FIX::LegRatioQty LegRatioQty_120;
    LegRatioQty_120.setString("14300967");
set_field(noLegs_0_1, LegRatioQty_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1264808018"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1033410013"}, InstrumentLeg_120);
    FIX::LegRepurchaseRate LegRepurchaseRate_120;
    LegRepurchaseRate_120.setString("75.740000");
set_field(noLegs_0_1, LegRepurchaseRate_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1663752513}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_196324436"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1788289266"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1472063257"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_601763324"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_527363898"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_37935071"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1886640310"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_120);
    FIX::LegStrikePrice LegStrikePrice_120;
    LegStrikePrice_120.setString("10294934");
set_field(noLegs_0_1, LegStrikePrice_120, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1630220619"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1027354635"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1143334982"}, InstrumentLeg_120);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_437045286"}, InstrumentLeg_120);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_120;
    LegUnitOfMeasureQty_120.setString("16665602");
set_field(noLegs_0_1, LegUnitOfMeasureQty_120, InstrumentLeg_120);
    all_values.push_back(InstrumentLeg_120);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_235;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1966428743"}, LegSecAltIDGrp_NoLegSecurityAltID_235);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_2035902061"}, LegSecAltIDGrp_NoLegSecurityAltID_235);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_235);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_236;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_745948177"}, LegSecAltIDGrp_NoLegSecurityAltID_236);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_39279408"}, LegSecAltIDGrp_NoLegSecurityAltID_236);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_236);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_237;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1118556244"}, LegSecAltIDGrp_NoLegSecurityAltID_237);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1321935666"}, LegSecAltIDGrp_NoLegSecurityAltID_237);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_237);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_121;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_180049576"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1119716762}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_923804851"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1610146360}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_237041132"}, InstrumentLeg_121);
    FIX::LegContractMultiplier LegContractMultiplier_121;
    LegContractMultiplier_121.setString("19572148");
set_field(noLegs_0_2, LegContractMultiplier_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{794190286}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1900793645"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_6055653"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_434995904"}, InstrumentLeg_121);
    FIX::LegCouponRate LegCouponRate_121;
    LegCouponRate_121.setString("32.540000");
set_field(noLegs_0_2, LegCouponRate_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_607818977"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegCurrency{"JPY"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_490598"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{701516465}, InstrumentLeg_121);
    FIX::LegFactor LegFactor_121;
    LegFactor_121.setString("7257597");
set_field(noLegs_0_2, LegFactor_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1964072904}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1731009900"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_208496763"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_843943891"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_726861234"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_645542049"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_363020507"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_605804907"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_464487144"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'2'}, InstrumentLeg_121);
    FIX::LegOptionRatio LegOptionRatio_121;
    LegOptionRatio_121.setString("13517530");
set_field(noLegs_0_2, LegOptionRatio_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_503766552"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1369995165"}, InstrumentLeg_121);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_121;
    LegPriceUnitOfMeasureQty_121.setString("5262051");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegProduct{683816128}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegPutOrCall{342228279}, InstrumentLeg_121);
    FIX::LegRatioQty LegRatioQty_121;
    LegRatioQty_121.setString("14500099");
set_field(noLegs_0_2, LegRatioQty_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_146478840"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_579269411"}, InstrumentLeg_121);
    FIX::LegRepurchaseRate LegRepurchaseRate_121;
    LegRepurchaseRate_121.setString("11.700000");
set_field(noLegs_0_2, LegRepurchaseRate_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{940669127}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_332579408"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1265796823"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1375665031"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1557952663"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1873615800"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_190541186"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSide{'6'}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1874106398"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_121);
    FIX::LegStrikePrice LegStrikePrice_121;
    LegStrikePrice_121.setString("16906956");
set_field(noLegs_0_2, LegStrikePrice_121, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_475583903"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1608033896"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_387155898"}, InstrumentLeg_121);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1202445137"}, InstrumentLeg_121);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_121;
    LegUnitOfMeasureQty_121.setString("1060922");
set_field(noLegs_0_2, LegUnitOfMeasureQty_121, InstrumentLeg_121);
    all_values.push_back(InstrumentLeg_121);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_238;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1808250044"}, LegSecAltIDGrp_NoLegSecurityAltID_238);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_570579442"}, LegSecAltIDGrp_NoLegSecurityAltID_238);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_238);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_239;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1001615326"}, LegSecAltIDGrp_NoLegSecurityAltID_239);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1012519480"}, LegSecAltIDGrp_NoLegSecurityAltID_239);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_239);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_240;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_1074345994"}, LegSecAltIDGrp_NoLegSecurityAltID_240);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_224126843"}, LegSecAltIDGrp_NoLegSecurityAltID_240);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_240);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_80;
  FIX::AttachmentPoint AttachmentPoint_80;
  AttachmentPoint_80.setString("45.820000");
set_field(msg, AttachmentPoint_80, Instrument_80);
  set_field(msg, FIX::CFICode{"STRING_1758162123"}, Instrument_80);
  set_field(msg, FIX::CPProgram{99}, Instrument_80);
  set_field(msg, FIX::CPRegType{"STRING_841250888"}, Instrument_80);
  FIX::CapPrice CapPrice_80;
  CapPrice_80.setString("19046409");
set_field(msg, CapPrice_80, Instrument_80);
  FIX::ContractMultiplier ContractMultiplier_80;
  ContractMultiplier_80.setString("11456245");
set_field(msg, ContractMultiplier_80, Instrument_80);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_80);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_697826442"}, Instrument_80);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1478203941"}, Instrument_80);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1219305234"}, Instrument_80);
  FIX::CouponRate CouponRate_80;
  CouponRate_80.setString("14.740000");
set_field(msg, CouponRate_80, Instrument_80);
  set_field(msg, FIX::CreditRating{"STRING_888672956"}, Instrument_80);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_945437387"}, Instrument_80);
  FIX::DetachmentPoint DetachmentPoint_80;
  DetachmentPoint_80.setString("90.120000");
set_field(msg, DetachmentPoint_80, Instrument_80);
  set_field(msg, FIX::EncodedIssuer{"DATA_1562450297"}, Instrument_80);
  set_field(msg, FIX::EncodedIssuerLen{672060137}, Instrument_80);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1008606663"}, Instrument_80);
  set_field(msg, FIX::EncodedSecurityDescLen{814503782}, Instrument_80);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_80);
  FIX::Factor Factor_80;
  Factor_80.setString("14841905");
set_field(msg, Factor_80, Instrument_80);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_80);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_80);
  FIX::FloorPrice FloorPrice_80;
  FloorPrice_80.setString("5391520");
set_field(msg, FloorPrice_80, Instrument_80);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_80);
  set_field(msg, FIX::InstrRegistry{"STRING_1352604448"}, Instrument_80);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_80);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_951725770"}, Instrument_80);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_206736126"}, Instrument_80);
  set_field(msg, FIX::Issuer{"STRING_1212437931"}, Instrument_80);
  set_field(msg, FIX::ListMethod{0}, Instrument_80);
  set_field(msg, FIX::LocaleOfIssue{"STRING_430862969"}, Instrument_80);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_603678865"}, Instrument_80);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1636750239"}, Instrument_80);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_997218091"}, Instrument_80);
  FIX::MinPriceIncrement MinPriceIncrement_80;
  MinPriceIncrement_80.setString("14449297");
set_field(msg, MinPriceIncrement_80, Instrument_80);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
  MinPriceIncrementAmount_80.setString("13939075");
set_field(msg, MinPriceIncrementAmount_80, Instrument_80);
  set_field(msg, FIX::NTPositionLimit{2142842624}, Instrument_80);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
  NotionalPercentageOutstanding_80.setString("81.650000");
set_field(msg, NotionalPercentageOutstanding_80, Instrument_80);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_80);
  FIX::OptPayoutAmount OptPayoutAmount_80;
  OptPayoutAmount_80.setString("14735629");
set_field(msg, OptPayoutAmount_80, Instrument_80);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_80);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
  OriginalNotionalPercentageOutstanding_80.setString("18.230000");
set_field(msg, OriginalNotionalPercentageOutstanding_80, Instrument_80);
  set_field(msg, FIX::Pool{"STRING_214752226"}, Instrument_80);
  set_field(msg, FIX::PositionLimit{1415697138}, Instrument_80);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_80);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1777202524"}, Instrument_80);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
  PriceUnitOfMeasureQty_80.setString("20877572");
set_field(msg, PriceUnitOfMeasureQty_80, Instrument_80);
  set_field(msg, FIX::Product{3}, Instrument_80);
  set_field(msg, FIX::ProductComplex{"STRING_444222658"}, Instrument_80);
  set_field(msg, FIX::PutOrCall{0}, Instrument_80);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_332120768"}, Instrument_80);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_719276689"}, Instrument_80);
  FIX::RepurchaseRate RepurchaseRate_80;
  RepurchaseRate_80.setString("38.150000");
set_field(msg, RepurchaseRate_80, Instrument_80);
  set_field(msg, FIX::RepurchaseTerm{871272823}, Instrument_80);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_80);
  set_field(msg, FIX::SecurityDesc{"STRING_2110578264"}, Instrument_80);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1071191274"}, Instrument_80);
  set_field(msg, FIX::SecurityGroup{"STRING_2052148787"}, Instrument_80);
  set_field(msg, FIX::SecurityID{"STRING_169830742"}, Instrument_80);
  set_field(msg, FIX::SecurityIDSource{"STRING_A"}, Instrument_80);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_80);
  set_field(msg, FIX::SecuritySubType{"STRING_600693712"}, Instrument_80);
  set_field(msg, FIX::SecurityType{"STRING_BDN"}, Instrument_80);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_80);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_80);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_37270529"}, Instrument_80);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_666427402"}, Instrument_80);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_80);
  FIX::StrikeMultiplier StrikeMultiplier_80;
  StrikeMultiplier_80.setString("6106777");
set_field(msg, StrikeMultiplier_80, Instrument_80);
  FIX::StrikePrice StrikePrice_80;
  StrikePrice_80.setString("9193500");
set_field(msg, StrikePrice_80, Instrument_80);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_80);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
  StrikePriceBoundaryPrecision_80.setString("59.270000");
set_field(msg, StrikePriceBoundaryPrecision_80, Instrument_80);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_80);
  FIX::StrikeValue StrikeValue_80;
  StrikeValue_80.setString("11741819");
set_field(msg, StrikeValue_80, Instrument_80);
  set_field(msg, FIX::Symbol{"STRING_467743114"}, Instrument_80);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_80);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_80);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_80);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_80);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
  UnitOfMeasureQty_80.setString("12700013");
set_field(msg, UnitOfMeasureQty_80, Instrument_80);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_80);
  all_values.push_back(Instrument_80);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_163;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_163);
    FIX::ComplexEventPrice ComplexEventPrice_163;
    ComplexEventPrice_163.setString("5190669");
set_field(noComplexEvents_0_0, ComplexEventPrice_163, ComplexEvents_NoComplexEvents_163);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_163);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
    ComplexEventPriceBoundaryPrecision_163.setString("97.680000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_163, ComplexEvents_NoComplexEvents_163);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_163);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_163);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
    ComplexOptPayoutAmount_163.setString("134168");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_163, ComplexEvents_NoComplexEvents_163);
    all_values.push_back(ComplexEvents_NoComplexEvents_163);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_328;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 36, 38, 18, 6, 2010)}, ComplexEventDates_NoComplexEventDates_328);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 24, 12, 16, 12, 2000)}, ComplexEventDates_NoComplexEventDates_328);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_328);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 8, 2)}, ComplexEventTimes_NoComplexEventTimes_670);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 28, 56)}, ComplexEventTimes_NoComplexEventTimes_670);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 45, 41)}, ComplexEventTimes_NoComplexEventTimes_671);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 3, 5)}, ComplexEventTimes_NoComplexEventTimes_671);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 41, 19)}, ComplexEventTimes_NoComplexEventTimes_672);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 11, 10)}, ComplexEventTimes_NoComplexEventTimes_672);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_329;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 22, 46, 22, 3, 2012)}, ComplexEventDates_NoComplexEventDates_329);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 31, 10, 11, 5, 2000)}, ComplexEventDates_NoComplexEventDates_329);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_329);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 24, 42)}, ComplexEventTimes_NoComplexEventTimes_673);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 45, 37)}, ComplexEventTimes_NoComplexEventTimes_673);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 19, 29)}, ComplexEventTimes_NoComplexEventTimes_674);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 32, 53)}, ComplexEventTimes_NoComplexEventTimes_674);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 7, 33)}, ComplexEventTimes_NoComplexEventTimes_675);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 3, 38)}, ComplexEventTimes_NoComplexEventTimes_675);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_330;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 41, 9, 14, 12, 2002)}, ComplexEventDates_NoComplexEventDates_330);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 13, 37, 3, 7, 2011)}, ComplexEventDates_NoComplexEventDates_330);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_330);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 23, 5)}, ComplexEventTimes_NoComplexEventTimes_676);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 38, 39)}, ComplexEventTimes_NoComplexEventTimes_676);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_164;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_164);
    FIX::ComplexEventPrice ComplexEventPrice_164;
    ComplexEventPrice_164.setString("17453096");
set_field(noComplexEvents_0_1, ComplexEventPrice_164, ComplexEvents_NoComplexEvents_164);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_164);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
    ComplexEventPriceBoundaryPrecision_164.setString("37.010000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_164, ComplexEvents_NoComplexEvents_164);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_164);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_164);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
    ComplexOptPayoutAmount_164.setString("6500689");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_164, ComplexEvents_NoComplexEvents_164);
    all_values.push_back(ComplexEvents_NoComplexEvents_164);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_331;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 56, 15, 13, 8, 2006)}, ComplexEventDates_NoComplexEventDates_331);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 25, 30, 21, 12, 2009)}, ComplexEventDates_NoComplexEventDates_331);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_331);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 21, 41)}, ComplexEventTimes_NoComplexEventTimes_677);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 11, 29)}, ComplexEventTimes_NoComplexEventTimes_677);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 16, 15)}, ComplexEventTimes_NoComplexEventTimes_678);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 44, 41)}, ComplexEventTimes_NoComplexEventTimes_678);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_332;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 37, 19, 4, 1, 2007)}, ComplexEventDates_NoComplexEventDates_332);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 48, 0, 24, 5, 2015)}, ComplexEventDates_NoComplexEventDates_332);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_332);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 44, 57)}, ComplexEventTimes_NoComplexEventTimes_679);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 1, 53)}, ComplexEventTimes_NoComplexEventTimes_679);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_333;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 9, 0, 8, 8, 2008)}, ComplexEventDates_NoComplexEventDates_333);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 31, 10, 22, 5, 2003)}, ComplexEventDates_NoComplexEventDates_333);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_333);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 34, 45)}, ComplexEventTimes_NoComplexEventTimes_680);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 23, 13)}, ComplexEventTimes_NoComplexEventTimes_680);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_165;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_165);
    FIX::ComplexEventPrice ComplexEventPrice_165;
    ComplexEventPrice_165.setString("8093664");
set_field(noComplexEvents_0_2, ComplexEventPrice_165, ComplexEvents_NoComplexEvents_165);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_165);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
    ComplexEventPriceBoundaryPrecision_165.setString("97.320000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_165, ComplexEvents_NoComplexEvents_165);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_165);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_165);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
    ComplexOptPayoutAmount_165.setString("14247373");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_165, ComplexEvents_NoComplexEvents_165);
    all_values.push_back(ComplexEvents_NoComplexEvents_165);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_334;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 14, 53, 12, 2, 2007)}, ComplexEventDates_NoComplexEventDates_334);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 9, 8, 19, 6, 2017)}, ComplexEventDates_NoComplexEventDates_334);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_334);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 7, 40)}, ComplexEventTimes_NoComplexEventTimes_681);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 55, 0)}, ComplexEventTimes_NoComplexEventTimes_681);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_335;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 49, 32, 19, 2, 2015)}, ComplexEventDates_NoComplexEventDates_335);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 25, 23, 2, 10, 2006)}, ComplexEventDates_NoComplexEventDates_335);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_335);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 13, 10)}, ComplexEventTimes_NoComplexEventTimes_682);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 57, 57)}, ComplexEventTimes_NoComplexEventTimes_682);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_156;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_241778394"}, EvntGrp_NoEvents_156);
    FIX::EventPx EventPx_156;
    EventPx_156.setString("642622");
set_field(noEvents_0_0, EventPx_156, EvntGrp_NoEvents_156);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1493321396"}, EvntGrp_NoEvents_156);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 51, 42, 3, 12, 2012)}, EvntGrp_NoEvents_156);
    set_field(noEvents_0_0, FIX::EventType{4}, EvntGrp_NoEvents_156);
    all_values.push_back(EvntGrp_NoEvents_156);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_157;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_806187398"}, EvntGrp_NoEvents_157);
    FIX::EventPx EventPx_157;
    EventPx_157.setString("9249384");
set_field(noEvents_0_1, EventPx_157, EvntGrp_NoEvents_157);
    set_field(noEvents_0_1, FIX::EventText{"STRING_139259501"}, EvntGrp_NoEvents_157);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 6, 10, 9, 4, 2002)}, EvntGrp_NoEvents_157);
    set_field(noEvents_0_1, FIX::EventType{14}, EvntGrp_NoEvents_157);
    all_values.push_back(EvntGrp_NoEvents_157);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_147;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1994835391"}, InstrumentParties_NoInstrumentParties_147);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_147);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{737539628}, InstrumentParties_NoInstrumentParties_147);
    all_values.push_back(InstrumentParties_NoInstrumentParties_147);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_278561100"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{67984017}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1388409772"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{416870656}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_161;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1452671989"}, SecAltIDGrp_NoSecurityAltID_161);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1910192053"}, SecAltIDGrp_NoSecurityAltID_161);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_162;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_771862654"}, SecAltIDGrp_NoSecurityAltID_162);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1279321671"}, SecAltIDGrp_NoSecurityAltID_162);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_160;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1613081456"}, SecurityXML_160);
  set_field(msg, FIX::SecurityXMLLen{498639788}, SecurityXML_160);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2130939322"}, SecurityXML_160);
  all_values.push_back(SecurityXML_160);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_9);
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("70.520000");
set_field(msg, PctAtRisk_9, InstrumentExtension_9);
  all_values.push_back(InstrumentExtension_9);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_16;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{3}, AttrbGrp_NoInstrAttrib_16);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_185301877"}, AttrbGrp_NoInstrAttrib_16);
    all_values.push_back(AttrbGrp_NoInstrAttrib_16);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_31;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_31);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Pfandbriefe"}, SpreadOrBenchmarkCurveData_31);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_5240037"}, SpreadOrBenchmarkCurveData_31);
  FIX::BenchmarkPrice BenchmarkPrice_31;
  BenchmarkPrice_31.setString("21326327");
set_field(msg, BenchmarkPrice_31, SpreadOrBenchmarkCurveData_31);
  set_field(msg, FIX::BenchmarkPriceType{183884993}, SpreadOrBenchmarkCurveData_31);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1635252900"}, SpreadOrBenchmarkCurveData_31);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_289020149"}, SpreadOrBenchmarkCurveData_31);
  FIX::Spread Spread_31;
  Spread_31.setString("8908258");
set_field(msg, Spread_31, SpreadOrBenchmarkCurveData_31);
  all_values.push_back(SpreadOrBenchmarkCurveData_31);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_56;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_POOL"}, Stipulations_NoStipulations_56);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_797335324"}, Stipulations_NoStipulations_56);
    all_values.push_back(Stipulations_NoStipulations_56);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_122;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1297571208"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1075896424}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_383234155"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{538497333}, UnderlyingInstrument_122);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
    UnderlyingAdjustedQuantity_122.setString("14927670");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_122, UnderlyingInstrument_122);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
    UnderlyingAllocationPercent_122.setString("65.670000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_122, UnderlyingInstrument_122);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
    UnderlyingAttachmentPoint_122.setString("93.220000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1255475485"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1464859221"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1123007345"}, UnderlyingInstrument_122);
    FIX::UnderlyingCapValue UnderlyingCapValue_122;
    UnderlyingCapValue_122.setString("7210732");
set_field(noUnderlyings_0_0, UnderlyingCapValue_122, UnderlyingInstrument_122);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
    UnderlyingCashAmount_122.setString("19634990");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_122);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
    UnderlyingContractMultiplier_122.setString("10559786");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1223862414}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1946730398"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_49587691"}, UnderlyingInstrument_122);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
    UnderlyingCouponRate_122.setString("42.910000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_778773629"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_122);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
    UnderlyingCurrentValue_122.setString("7840136");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_122, UnderlyingInstrument_122);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
    UnderlyingDetachmentPoint_122.setString("91.510000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_122, UnderlyingInstrument_122);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
    UnderlyingDirtyPrice_122.setString("4946077");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_122, UnderlyingInstrument_122);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
    UnderlyingEndPrice_122.setString("2717829");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_122, UnderlyingInstrument_122);
    FIX::UnderlyingEndValue UnderlyingEndValue_122;
    UnderlyingEndValue_122.setString("15895693");
set_field(noUnderlyings_0_0, UnderlyingEndValue_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1385433614}, UnderlyingInstrument_122);
    FIX::UnderlyingFXRate UnderlyingFXRate_122;
    UnderlyingFXRate_122.setString("19969770");
set_field(noUnderlyings_0_0, UnderlyingFXRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_122);
    FIX::UnderlyingFactor UnderlyingFactor_122;
    UnderlyingFactor_122.setString("352852");
set_field(noUnderlyings_0_0, UnderlyingFactor_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{164743565}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_876028754"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1111181714"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_547977720"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1414526087"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_456465147"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1240974287"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1258211761"}, UnderlyingInstrument_122);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
    UnderlyingNotionalPercentageOutstanding_122.setString("6.320000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_122);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
    UnderlyingOriginalNotionalPercentageOutstanding_122.setString("54.590000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_285530278"}, UnderlyingInstrument_122);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
    UnderlyingPriceUnitOfMeasureQty_122.setString("3743652");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1340198479}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1341508896}, UnderlyingInstrument_122);
    FIX::UnderlyingPx UnderlyingPx_122;
    UnderlyingPx_122.setString("15982276");
set_field(noUnderlyings_0_0, UnderlyingPx_122, UnderlyingInstrument_122);
    FIX::UnderlyingQty UnderlyingQty_122;
    UnderlyingQty_122.setString("11394452");
set_field(noUnderlyings_0_0, UnderlyingQty_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1391096587"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_859908279"}, UnderlyingInstrument_122);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
    UnderlyingRepurchaseRate_122.setString("88.580000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{559012940}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1170631054"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_554748876"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1859562091"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1665238823"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_826531794"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1301647744"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_903188789"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_676025221"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_880105290"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_122);
    FIX::UnderlyingStartValue UnderlyingStartValue_122;
    UnderlyingStartValue_122.setString("8407687");
set_field(noUnderlyings_0_0, UnderlyingStartValue_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1756134045"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_122);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
    UnderlyingStrikePrice_122.setString("10231764");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_358637293"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_482237145"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_133904598"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_2070577926"}, UnderlyingInstrument_122);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
    UnderlyingUnitOfMeasureQty_122.setString("10405870");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_122, UnderlyingInstrument_122);
    all_values.push_back(UnderlyingInstrument_122);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_208624556"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1414952227"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1707838536"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1550133452"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_865696214"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_699800117"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1725604493"}, UnderlyingStipulations_NoUnderlyingStips_244);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_470535327"}, UnderlyingStipulations_NoUnderlyingStips_244);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1352759332"}, UnderlyingStipulations_NoUnderlyingStips_245);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_748751900"}, UnderlyingStipulations_NoUnderlyingStips_245);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1025284203"}, UnderlyingStipulations_NoUnderlyingStips_246);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1064837775"}, UnderlyingStipulations_NoUnderlyingStips_246);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1851815997"}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1169695864}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1099107162"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2108169944}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1221126357"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{707757559}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2010342091"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{462389215}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1730934044"}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{944626361}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_144590014"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1985213366}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_84995051"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{353214571}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1252681945"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1792833587}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1903348023"}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{345150056}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1696499005"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{815685383}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_26;
  FIX::Yield Yield_26;
  Yield_26.setString("0.990000");
set_field(msg, Yield_26, YieldData_26);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_297767257"}, YieldData_26);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1840969586"}, YieldData_26);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
  YieldRedemptionPrice_26.setString("8197242");
set_field(msg, YieldRedemptionPrice_26, YieldData_26);
  set_field(msg, FIX::YieldRedemptionPriceType{564274332}, YieldData_26);
  set_field(msg, FIX::YieldType{"STRING_TRUE"}, YieldData_26);
  all_values.push_back(YieldData_26);
  all_compo_names.insert(".");

  // header
  multiset<string> header_81;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_81);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1733970197"}, header_81);
  set_header_field(msg.getHeader(), FIX::BodyLength{1925659505}, header_81);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2137833261"}, header_81);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1694656493"}, header_81);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_999302214"}, header_81);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_698107173"}, header_81);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1557514936}, header_81);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_81);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{281557569}, header_81);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1779010673"}, header_81);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_258834143"}, header_81);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2146396211"}, header_81);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 14, 50, 7, 2, 2006)}, header_81);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_81);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_81);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_434806753"}, header_81);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{869155676}, header_81);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_890092992"}, header_81);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_189693205"}, header_81);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1166922934"}, header_81);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(16, 46, 45, 7, 8, 2012)}, header_81);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2038493144"}, header_81);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_864856661"}, header_81);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_758875289"}, header_81);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_589116669"}, header_81);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{274887949}, header_81);
  all_values.push_back(header_81);
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
