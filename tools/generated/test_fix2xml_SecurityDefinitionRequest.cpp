#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::SecurityDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_0;
  set_field(msg, FIX::Currency{"CAN"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_822205427"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::EncodedTextLen{1929974311}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::ExpirationCycle{0}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_2121464193"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_486247625"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1489976434"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SecurityRequestType{1}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::Text{"STRING_1078667545"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, SecurityDefinitionRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, SecurityDefinitionRequest_0);
  all_values.push_back(SecurityDefinitionRequest_0);

  all_compo_names.insert("SecurityDefinitionRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_94;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1822240248"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1437764003}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_272493965"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1188258507}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1878301628"}, InstrumentLeg_94);
    FIX::LegContractMultiplier LegContractMultiplier_94;
    LegContractMultiplier_94.setString("19694534");
set_field(noLegs_0_0, LegContractMultiplier_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{43157505}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_331037518"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1651343378"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_691676798"}, InstrumentLeg_94);
    FIX::LegCouponRate LegCouponRate_94;
    LegCouponRate_94.setString("1.650000");
set_field(noLegs_0_0, LegCouponRate_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1718513231"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2144778173"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1066926212}, InstrumentLeg_94);
    FIX::LegFactor LegFactor_94;
    LegFactor_94.setString("19623062");
set_field(noLegs_0_0, LegFactor_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1687158014}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_751449227"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_637028043"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1469648677"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_945382817"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_611008589"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1955896302"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_287875604"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1688854480"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_94);
    FIX::LegOptionRatio LegOptionRatio_94;
    LegOptionRatio_94.setString("13665431");
set_field(noLegs_0_0, LegOptionRatio_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_943017664"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1380978633"}, InstrumentLeg_94);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
    LegPriceUnitOfMeasureQty_94.setString("2028161");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegProduct{617774264}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegPutOrCall{671258988}, InstrumentLeg_94);
    FIX::LegRatioQty LegRatioQty_94;
    LegRatioQty_94.setString("4753100");
set_field(noLegs_0_0, LegRatioQty_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1806032772"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_402076968"}, InstrumentLeg_94);
    FIX::LegRepurchaseRate LegRepurchaseRate_94;
    LegRepurchaseRate_94.setString("98.990000");
set_field(noLegs_0_0, LegRepurchaseRate_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1849190277}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_733114486"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1948623278"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_393383427"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_576661003"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1519652861"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_326442814"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSide{'6'}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1516947386"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_94);
    FIX::LegStrikePrice LegStrikePrice_94;
    LegStrikePrice_94.setString("10566217");
set_field(noLegs_0_0, LegStrikePrice_94, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_2144818253"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1113243850"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_378786782"}, InstrumentLeg_94);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_942717423"}, InstrumentLeg_94);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
    LegUnitOfMeasureQty_94.setString("17242524");
set_field(noLegs_0_0, LegUnitOfMeasureQty_94, InstrumentLeg_94);
    all_values.push_back(InstrumentLeg_94);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1230593027"}, LegSecAltIDGrp_NoLegSecurityAltID_196);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1265623271"}, LegSecAltIDGrp_NoLegSecurityAltID_196);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_95;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_621874007"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{449652528}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_61157287"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{2002852640}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_652468642"}, InstrumentLeg_95);
    FIX::LegContractMultiplier LegContractMultiplier_95;
    LegContractMultiplier_95.setString("6789315");
set_field(noLegs_0_1, LegContractMultiplier_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{526627980}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1127778721"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_337480675"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_928704949"}, InstrumentLeg_95);
    FIX::LegCouponRate LegCouponRate_95;
    LegCouponRate_95.setString("86.210000");
set_field(noLegs_0_1, LegCouponRate_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_39187304"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_432570732"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{90996791}, InstrumentLeg_95);
    FIX::LegFactor LegFactor_95;
    LegFactor_95.setString("5983674");
set_field(noLegs_0_1, LegFactor_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{759013546}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_752389981"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2115314851"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_4898925"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1228605787"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1024452955"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_2233530"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_194365989"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1403239737"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_95);
    FIX::LegOptionRatio LegOptionRatio_95;
    LegOptionRatio_95.setString("19186184");
set_field(noLegs_0_1, LegOptionRatio_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1590439174"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_28060332"}, InstrumentLeg_95);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
    LegPriceUnitOfMeasureQty_95.setString("10367580");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegProduct{64829533}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegPutOrCall{477712861}, InstrumentLeg_95);
    FIX::LegRatioQty LegRatioQty_95;
    LegRatioQty_95.setString("10979153");
set_field(noLegs_0_1, LegRatioQty_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_2067682173"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1130181503"}, InstrumentLeg_95);
    FIX::LegRepurchaseRate LegRepurchaseRate_95;
    LegRepurchaseRate_95.setString("68.900000");
set_field(noLegs_0_1, LegRepurchaseRate_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{446826505}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_110476577"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_2114327565"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1375531454"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1535535198"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_6031222"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_889867242"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSide{'6'}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_438601954"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_95);
    FIX::LegStrikePrice LegStrikePrice_95;
    LegStrikePrice_95.setString("11976155");
set_field(noLegs_0_1, LegStrikePrice_95, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1733254014"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1180448468"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1202514425"}, InstrumentLeg_95);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_814376153"}, InstrumentLeg_95);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
    LegUnitOfMeasureQty_95.setString("574177");
set_field(noLegs_0_1, LegUnitOfMeasureQty_95, InstrumentLeg_95);
    all_values.push_back(InstrumentLeg_95);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1008742143"}, LegSecAltIDGrp_NoLegSecurityAltID_197);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1460657513"}, LegSecAltIDGrp_NoLegSecurityAltID_197);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_96;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_2215261"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{779876923}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_903613039"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{30275594}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1816634975"}, InstrumentLeg_96);
    FIX::LegContractMultiplier LegContractMultiplier_96;
    LegContractMultiplier_96.setString("9684425");
set_field(noLegs_0_2, LegContractMultiplier_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{507988455}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_767066665"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_888641097"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1638169958"}, InstrumentLeg_96);
    FIX::LegCouponRate LegCouponRate_96;
    LegCouponRate_96.setString("99.070000");
set_field(noLegs_0_2, LegCouponRate_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1335467603"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_563515409"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1136698085}, InstrumentLeg_96);
    FIX::LegFactor LegFactor_96;
    LegFactor_96.setString("3693050");
set_field(noLegs_0_2, LegFactor_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1453382651}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1750947886"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_807907001"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_286763036"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_816081504"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_2005522501"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_2020017050"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1996529972"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1060553279"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_96);
    FIX::LegOptionRatio LegOptionRatio_96;
    LegOptionRatio_96.setString("20539477");
set_field(noLegs_0_2, LegOptionRatio_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_117817587"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1695651699"}, InstrumentLeg_96);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
    LegPriceUnitOfMeasureQty_96.setString("13671216");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegProduct{120032848}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegPutOrCall{328044974}, InstrumentLeg_96);
    FIX::LegRatioQty LegRatioQty_96;
    LegRatioQty_96.setString("1232510");
set_field(noLegs_0_2, LegRatioQty_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_150308442"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_2144679949"}, InstrumentLeg_96);
    FIX::LegRepurchaseRate LegRepurchaseRate_96;
    LegRepurchaseRate_96.setString("35.780000");
set_field(noLegs_0_2, LegRepurchaseRate_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{658296897}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_764262967"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1980334675"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_148983208"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1160692874"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1168318630"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1897629743"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1731834040"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_96);
    FIX::LegStrikePrice LegStrikePrice_96;
    LegStrikePrice_96.setString("10377330");
set_field(noLegs_0_2, LegStrikePrice_96, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_490308419"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_553695099"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1324496080"}, InstrumentLeg_96);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1306389923"}, InstrumentLeg_96);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
    LegUnitOfMeasureQty_96.setString("4117339");
set_field(noLegs_0_2, LegUnitOfMeasureQty_96, InstrumentLeg_96);
    all_values.push_back(InstrumentLeg_96);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1155436248"}, LegSecAltIDGrp_NoLegSecurityAltID_198);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1472287232"}, LegSecAltIDGrp_NoLegSecurityAltID_198);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1883939038"}, LegSecAltIDGrp_NoLegSecurityAltID_199);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1061900348"}, LegSecAltIDGrp_NoLegSecurityAltID_199);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_67;
  FIX::AttachmentPoint AttachmentPoint_67;
  AttachmentPoint_67.setString("48.190000");
set_field(msg, AttachmentPoint_67, Instrument_67);
  set_field(msg, FIX::CFICode{"STRING_1432107089"}, Instrument_67);
  set_field(msg, FIX::CPProgram{99}, Instrument_67);
  set_field(msg, FIX::CPRegType{"STRING_1710137667"}, Instrument_67);
  FIX::CapPrice CapPrice_67;
  CapPrice_67.setString("17601520");
set_field(msg, CapPrice_67, Instrument_67);
  FIX::ContractMultiplier ContractMultiplier_67;
  ContractMultiplier_67.setString("4047893");
set_field(msg, ContractMultiplier_67, Instrument_67);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_67);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1757348365"}, Instrument_67);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1496482898"}, Instrument_67);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_371259359"}, Instrument_67);
  FIX::CouponRate CouponRate_67;
  CouponRate_67.setString("76.840000");
set_field(msg, CouponRate_67, Instrument_67);
  set_field(msg, FIX::CreditRating{"STRING_1329333925"}, Instrument_67);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_520242567"}, Instrument_67);
  FIX::DetachmentPoint DetachmentPoint_67;
  DetachmentPoint_67.setString("5.590000");
set_field(msg, DetachmentPoint_67, Instrument_67);
  set_field(msg, FIX::EncodedIssuer{"DATA_350168908"}, Instrument_67);
  set_field(msg, FIX::EncodedIssuerLen{270388663}, Instrument_67);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_911303610"}, Instrument_67);
  set_field(msg, FIX::EncodedSecurityDescLen{2082002948}, Instrument_67);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_67);
  FIX::Factor Factor_67;
  Factor_67.setString("6570917");
set_field(msg, Factor_67, Instrument_67);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_67);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_67);
  FIX::FloorPrice FloorPrice_67;
  FloorPrice_67.setString("12107868");
set_field(msg, FloorPrice_67, Instrument_67);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_67);
  set_field(msg, FIX::InstrRegistry{"STRING_806447539"}, Instrument_67);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_67);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1346294258"}, Instrument_67);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1961883787"}, Instrument_67);
  set_field(msg, FIX::Issuer{"STRING_947324345"}, Instrument_67);
  set_field(msg, FIX::ListMethod{0}, Instrument_67);
  set_field(msg, FIX::LocaleOfIssue{"STRING_876300487"}, Instrument_67);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_389945516"}, Instrument_67);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_367373090"}, Instrument_67);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1157838802"}, Instrument_67);
  FIX::MinPriceIncrement MinPriceIncrement_67;
  MinPriceIncrement_67.setString("21000831");
set_field(msg, MinPriceIncrement_67, Instrument_67);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
  MinPriceIncrementAmount_67.setString("21275251");
set_field(msg, MinPriceIncrementAmount_67, Instrument_67);
  set_field(msg, FIX::NTPositionLimit{1562628122}, Instrument_67);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
  NotionalPercentageOutstanding_67.setString("56.460000");
set_field(msg, NotionalPercentageOutstanding_67, Instrument_67);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_67);
  FIX::OptPayoutAmount OptPayoutAmount_67;
  OptPayoutAmount_67.setString("9116273");
set_field(msg, OptPayoutAmount_67, Instrument_67);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_67);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
  OriginalNotionalPercentageOutstanding_67.setString("75.560000");
set_field(msg, OriginalNotionalPercentageOutstanding_67, Instrument_67);
  set_field(msg, FIX::Pool{"STRING_93477649"}, Instrument_67);
  set_field(msg, FIX::PositionLimit{557063925}, Instrument_67);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_67);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_443646557"}, Instrument_67);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
  PriceUnitOfMeasureQty_67.setString("8274525");
set_field(msg, PriceUnitOfMeasureQty_67, Instrument_67);
  set_field(msg, FIX::Product{5}, Instrument_67);
  set_field(msg, FIX::ProductComplex{"STRING_378165857"}, Instrument_67);
  set_field(msg, FIX::PutOrCall{0}, Instrument_67);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_919766138"}, Instrument_67);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1350418201"}, Instrument_67);
  FIX::RepurchaseRate RepurchaseRate_67;
  RepurchaseRate_67.setString("30.470000");
set_field(msg, RepurchaseRate_67, Instrument_67);
  set_field(msg, FIX::RepurchaseTerm{2130552947}, Instrument_67);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_67);
  set_field(msg, FIX::SecurityDesc{"STRING_143706938"}, Instrument_67);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1605590060"}, Instrument_67);
  set_field(msg, FIX::SecurityGroup{"STRING_698493586"}, Instrument_67);
  set_field(msg, FIX::SecurityID{"STRING_2105590725"}, Instrument_67);
  set_field(msg, FIX::SecurityIDSource{"STRING_J"}, Instrument_67);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_67);
  set_field(msg, FIX::SecuritySubType{"STRING_834407565"}, Instrument_67);
  set_field(msg, FIX::SecurityType{"STRING_TRAN"}, Instrument_67);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_67);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_67);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_747975810"}, Instrument_67);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2128657831"}, Instrument_67);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_67);
  FIX::StrikeMultiplier StrikeMultiplier_67;
  StrikeMultiplier_67.setString("17185640");
set_field(msg, StrikeMultiplier_67, Instrument_67);
  FIX::StrikePrice StrikePrice_67;
  StrikePrice_67.setString("1715345");
set_field(msg, StrikePrice_67, Instrument_67);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_67);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
  StrikePriceBoundaryPrecision_67.setString("79.620000");
set_field(msg, StrikePriceBoundaryPrecision_67, Instrument_67);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_67);
  FIX::StrikeValue StrikeValue_67;
  StrikeValue_67.setString("10074230");
set_field(msg, StrikeValue_67, Instrument_67);
  set_field(msg, FIX::Symbol{"STRING_1033968781"}, Instrument_67);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_67);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_67);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_67);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_67);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
  UnitOfMeasureQty_67.setString("16720774");
set_field(msg, UnitOfMeasureQty_67, Instrument_67);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_67);
  all_values.push_back(Instrument_67);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_140;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_140);
    FIX::ComplexEventPrice ComplexEventPrice_140;
    ComplexEventPrice_140.setString("519950");
set_field(noComplexEvents_0_0, ComplexEventPrice_140, ComplexEvents_NoComplexEvents_140);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_140);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
    ComplexEventPriceBoundaryPrecision_140.setString("38.010000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_140, ComplexEvents_NoComplexEvents_140);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_140);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_140);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
    ComplexOptPayoutAmount_140.setString("11111508");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_140, ComplexEvents_NoComplexEvents_140);
    all_values.push_back(ComplexEvents_NoComplexEvents_140);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_292;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 5, 49, 14, 1, 2012)}, ComplexEventDates_NoComplexEventDates_292);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 19, 20, 26, 10, 2011)}, ComplexEventDates_NoComplexEventDates_292);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_292);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 24, 38)}, ComplexEventTimes_NoComplexEventTimes_592);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 19, 31)}, ComplexEventTimes_NoComplexEventTimes_592);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 22, 35)}, ComplexEventTimes_NoComplexEventTimes_593);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 53, 4)}, ComplexEventTimes_NoComplexEventTimes_593);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_293;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 9, 25, 3, 2, 2000)}, ComplexEventDates_NoComplexEventDates_293);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 41, 51, 12, 3, 2000)}, ComplexEventDates_NoComplexEventDates_293);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_293);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 46, 11)}, ComplexEventTimes_NoComplexEventTimes_594);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 23, 29)}, ComplexEventTimes_NoComplexEventTimes_594);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_294;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 51, 15, 20, 7, 2006)}, ComplexEventDates_NoComplexEventDates_294);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 49, 13, 0, 2, 2013)}, ComplexEventDates_NoComplexEventDates_294);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_294);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 47, 47)}, ComplexEventTimes_NoComplexEventTimes_595);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 6, 15)}, ComplexEventTimes_NoComplexEventTimes_595);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_138;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_36911235"}, EvntGrp_NoEvents_138);
    FIX::EventPx EventPx_138;
    EventPx_138.setString("4246085");
set_field(noEvents_0_0, EventPx_138, EvntGrp_NoEvents_138);
    set_field(noEvents_0_0, FIX::EventText{"STRING_956722470"}, EvntGrp_NoEvents_138);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 53, 42, 16, 1, 2001)}, EvntGrp_NoEvents_138);
    set_field(noEvents_0_0, FIX::EventType{8}, EvntGrp_NoEvents_138);
    all_values.push_back(EvntGrp_NoEvents_138);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_128;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1398305348"}, InstrumentParties_NoInstrumentParties_128);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_128);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{583040812}, InstrumentParties_NoInstrumentParties_128);
    all_values.push_back(InstrumentParties_NoInstrumentParties_128);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_262465749"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2125440486}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1497057902"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{597392914}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_335061461"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{316478340}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1379293098"}, SecAltIDGrp_NoSecurityAltID_133);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2124000647"}, SecAltIDGrp_NoSecurityAltID_133);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_134;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2082244457"}, SecurityXML_134);
  set_field(msg, FIX::SecurityXMLLen{1138465683}, SecurityXML_134);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1687370793"}, SecurityXML_134);
  all_values.push_back(SecurityXML_134);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_8;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_8);
  FIX::PctAtRisk PctAtRisk_8;
  PctAtRisk_8.setString("98.910000");
set_field(msg, PctAtRisk_8, InstrumentExtension_8);
  all_values.push_back(InstrumentExtension_8);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_12;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{2}, AttrbGrp_NoInstrAttrib_12);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1219908425"}, AttrbGrp_NoInstrAttrib_12);
    all_values.push_back(AttrbGrp_NoInstrAttrib_12);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_13;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{15}, AttrbGrp_NoInstrAttrib_13);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1180269404"}, AttrbGrp_NoInstrAttrib_13);
    all_values.push_back(AttrbGrp_NoInstrAttrib_13);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_27;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_27);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_27);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_518160469"}, SpreadOrBenchmarkCurveData_27);
  FIX::BenchmarkPrice BenchmarkPrice_27;
  BenchmarkPrice_27.setString("13170352");
set_field(msg, BenchmarkPrice_27, SpreadOrBenchmarkCurveData_27);
  set_field(msg, FIX::BenchmarkPriceType{1750239712}, SpreadOrBenchmarkCurveData_27);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1205450896"}, SpreadOrBenchmarkCurveData_27);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2008464337"}, SpreadOrBenchmarkCurveData_27);
  FIX::Spread Spread_27;
  Spread_27.setString("10010614");
set_field(msg, Spread_27, SpreadOrBenchmarkCurveData_27);
  all_values.push_back(SpreadOrBenchmarkCurveData_27);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_42;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_INTERNALQTY"}, Stipulations_NoStipulations_42);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_696750851"}, Stipulations_NoStipulations_42);
    all_values.push_back(Stipulations_NoStipulations_42);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_43;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_ORDRINCR"}, Stipulations_NoStipulations_43);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_421978339"}, Stipulations_NoStipulations_43);
    all_values.push_back(Stipulations_NoStipulations_43);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_118;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_807031218"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{757039800}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_362803446"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1603762728}, UnderlyingInstrument_118);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
    UnderlyingAdjustedQuantity_118.setString("21363328");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_118, UnderlyingInstrument_118);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
    UnderlyingAllocationPercent_118.setString("4.450000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_118, UnderlyingInstrument_118);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
    UnderlyingAttachmentPoint_118.setString("35.380000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1127314934"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2026691238"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1036779485"}, UnderlyingInstrument_118);
    FIX::UnderlyingCapValue UnderlyingCapValue_118;
    UnderlyingCapValue_118.setString("19226148");
set_field(noUnderlyings_0_0, UnderlyingCapValue_118, UnderlyingInstrument_118);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
    UnderlyingCashAmount_118.setString("11299620");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_118);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
    UnderlyingContractMultiplier_118.setString("9950396");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1189955357}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1752216073"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1654553759"}, UnderlyingInstrument_118);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
    UnderlyingCouponRate_118.setString("35.770000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1167861812"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_118);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
    UnderlyingCurrentValue_118.setString("7706178");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_118, UnderlyingInstrument_118);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
    UnderlyingDetachmentPoint_118.setString("14.760000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_118, UnderlyingInstrument_118);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
    UnderlyingDirtyPrice_118.setString("19453094");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_118, UnderlyingInstrument_118);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
    UnderlyingEndPrice_118.setString("17716792");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_118, UnderlyingInstrument_118);
    FIX::UnderlyingEndValue UnderlyingEndValue_118;
    UnderlyingEndValue_118.setString("11778540");
set_field(noUnderlyings_0_0, UnderlyingEndValue_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{241847328}, UnderlyingInstrument_118);
    FIX::UnderlyingFXRate UnderlyingFXRate_118;
    UnderlyingFXRate_118.setString("3209464");
set_field(noUnderlyings_0_0, UnderlyingFXRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_118);
    FIX::UnderlyingFactor UnderlyingFactor_118;
    UnderlyingFactor_118.setString("6638256");
set_field(noUnderlyings_0_0, UnderlyingFactor_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{367271597}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_47039906"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1420865468"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_730075043"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1650802635"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1409714718"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1069395489"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1041842525"}, UnderlyingInstrument_118);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
    UnderlyingNotionalPercentageOutstanding_118.setString("60.040000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_118);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
    UnderlyingOriginalNotionalPercentageOutstanding_118.setString("20.100000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_164677181"}, UnderlyingInstrument_118);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
    UnderlyingPriceUnitOfMeasureQty_118.setString("20785651");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{503085031}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1159716783}, UnderlyingInstrument_118);
    FIX::UnderlyingPx UnderlyingPx_118;
    UnderlyingPx_118.setString("11210368");
set_field(noUnderlyings_0_0, UnderlyingPx_118, UnderlyingInstrument_118);
    FIX::UnderlyingQty UnderlyingQty_118;
    UnderlyingQty_118.setString("1078174");
set_field(noUnderlyings_0_0, UnderlyingQty_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_666786894"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1888330428"}, UnderlyingInstrument_118);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
    UnderlyingRepurchaseRate_118.setString("92.680000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{692017474}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1825175565"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2046297144"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1922698950"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1623001392"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1670492785"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_953069334"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1864848720"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1991439277"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_193078022"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_118);
    FIX::UnderlyingStartValue UnderlyingStartValue_118;
    UnderlyingStartValue_118.setString("2112272");
set_field(noUnderlyings_0_0, UnderlyingStartValue_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_240117928"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_118);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
    UnderlyingStrikePrice_118.setString("18909205");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_118, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1064287278"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2010697759"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_785279440"}, UnderlyingInstrument_118);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1453833282"}, UnderlyingInstrument_118);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
    UnderlyingUnitOfMeasureQty_118.setString("8118171");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_118, UnderlyingInstrument_118);
    all_values.push_back(UnderlyingInstrument_118);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1618510464"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_742898685"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1219502834"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_630743599"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1327320290"}, UnderlyingStipulations_NoUnderlyingStips_240);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1297530494"}, UnderlyingStipulations_NoUnderlyingStips_240);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1604782316"}, UnderlyingStipulations_NoUnderlyingStips_241);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_455515910"}, UnderlyingStipulations_NoUnderlyingStips_241);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1282474233"}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1764763271}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2024822192"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{570348957}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_475357049"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1868777821}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_119;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_763426979"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{856547789}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_2080005048"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1003544907}, UnderlyingInstrument_119);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
    UnderlyingAdjustedQuantity_119.setString("5111203");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_119, UnderlyingInstrument_119);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
    UnderlyingAllocationPercent_119.setString("36.710000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_119, UnderlyingInstrument_119);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
    UnderlyingAttachmentPoint_119.setString("18.230000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1575407626"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_737037782"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1532261263"}, UnderlyingInstrument_119);
    FIX::UnderlyingCapValue UnderlyingCapValue_119;
    UnderlyingCapValue_119.setString("8817572");
set_field(noUnderlyings_0_1, UnderlyingCapValue_119, UnderlyingInstrument_119);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
    UnderlyingCashAmount_119.setString("15488549");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_119);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
    UnderlyingContractMultiplier_119.setString("3527840");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{144270010}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1320698252"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_983527676"}, UnderlyingInstrument_119);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
    UnderlyingCouponRate_119.setString("55.460000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_500534894"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_119);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
    UnderlyingCurrentValue_119.setString("9560508");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_119, UnderlyingInstrument_119);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
    UnderlyingDetachmentPoint_119.setString("24.910000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_119, UnderlyingInstrument_119);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
    UnderlyingDirtyPrice_119.setString("6004948");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_119, UnderlyingInstrument_119);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
    UnderlyingEndPrice_119.setString("13103802");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_119, UnderlyingInstrument_119);
    FIX::UnderlyingEndValue UnderlyingEndValue_119;
    UnderlyingEndValue_119.setString("17404021");
set_field(noUnderlyings_0_1, UnderlyingEndValue_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1358486777}, UnderlyingInstrument_119);
    FIX::UnderlyingFXRate UnderlyingFXRate_119;
    UnderlyingFXRate_119.setString("11877187");
set_field(noUnderlyings_0_1, UnderlyingFXRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_119);
    FIX::UnderlyingFactor UnderlyingFactor_119;
    UnderlyingFactor_119.setString("18338438");
set_field(noUnderlyings_0_1, UnderlyingFactor_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{909012928}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_926694402"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_542907968"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_841534329"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1930239309"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1054028316"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1715358000"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_529737484"}, UnderlyingInstrument_119);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
    UnderlyingNotionalPercentageOutstanding_119.setString("22.950000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_119);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
    UnderlyingOriginalNotionalPercentageOutstanding_119.setString("87.480000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1363709556"}, UnderlyingInstrument_119);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
    UnderlyingPriceUnitOfMeasureQty_119.setString("18537671");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{15710518}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1716493633}, UnderlyingInstrument_119);
    FIX::UnderlyingPx UnderlyingPx_119;
    UnderlyingPx_119.setString("19980371");
set_field(noUnderlyings_0_1, UnderlyingPx_119, UnderlyingInstrument_119);
    FIX::UnderlyingQty UnderlyingQty_119;
    UnderlyingQty_119.setString("13364087");
set_field(noUnderlyings_0_1, UnderlyingQty_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_552537661"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1858759017"}, UnderlyingInstrument_119);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
    UnderlyingRepurchaseRate_119.setString("36.650000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{686112184}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1176779583"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_645510822"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_661751027"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1777274383"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1955891033"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_254669493"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_988277513"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_996126140"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_417936916"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_119);
    FIX::UnderlyingStartValue UnderlyingStartValue_119;
    UnderlyingStartValue_119.setString("19051390");
set_field(noUnderlyings_0_1, UnderlyingStartValue_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1344631318"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_119);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
    UnderlyingStrikePrice_119.setString("11273869");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_119, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_124090328"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_167064101"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1657124464"}, UnderlyingInstrument_119);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_606042623"}, UnderlyingInstrument_119);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
    UnderlyingUnitOfMeasureQty_119.setString("4719762");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_119, UnderlyingInstrument_119);
    all_values.push_back(UnderlyingInstrument_119);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1969752179"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_178259696"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1587350082"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1538762164"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_28813166"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_776275205"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1887572183"}, UnderlyingStipulations_NoUnderlyingStips_242);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_465735223"}, UnderlyingStipulations_NoUnderlyingStips_242);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_916868119"}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1291679389}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_919653430"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1546348882}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1534936367"}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1964285798}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1673434990"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1161433468}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1279636071"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{125141092}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_141336799"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1403726400}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_292205193"}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{2009769023}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1222617179"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1832037555}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_942441125"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{662483614}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1223316071"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{971254292}, UnderlyingInstrument_120);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("14387588");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_120, UnderlyingInstrument_120);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("22.490000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_120, UnderlyingInstrument_120);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("28.270000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1904494042"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1797060611"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1628210946"}, UnderlyingInstrument_120);
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("8682564");
set_field(noUnderlyings_0_2, UnderlyingCapValue_120, UnderlyingInstrument_120);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("9412563");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_120);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("17879098");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{340121586}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1562322520"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1556205791"}, UnderlyingInstrument_120);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("37.360000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1624412932"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_120);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("7565653");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_120, UnderlyingInstrument_120);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("82.260000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_120, UnderlyingInstrument_120);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("14596940");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_120, UnderlyingInstrument_120);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("128081");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_120, UnderlyingInstrument_120);
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("14995034");
set_field(noUnderlyings_0_2, UnderlyingEndValue_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1110671619}, UnderlyingInstrument_120);
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("20225771");
set_field(noUnderlyings_0_2, UnderlyingFXRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_120);
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("1858051");
set_field(noUnderlyings_0_2, UnderlyingFactor_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1707131038}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1058642326"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_848288765"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_782963461"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_2029896618"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_139563936"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1950095711"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_593755798"}, UnderlyingInstrument_120);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("79.790000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_120);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("30.960000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_764830770"}, UnderlyingInstrument_120);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("3934453");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{101869249}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{405256992}, UnderlyingInstrument_120);
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("7335669");
set_field(noUnderlyings_0_2, UnderlyingPx_120, UnderlyingInstrument_120);
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("16641917");
set_field(noUnderlyings_0_2, UnderlyingQty_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1961462783"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_890490702"}, UnderlyingInstrument_120);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("10.540000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{896136269}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_61364258"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1897686409"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_2103434495"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1521058262"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1910494517"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1455454267"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_484246234"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1785588000"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1571655468"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_120);
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("13452353");
set_field(noUnderlyings_0_2, UnderlyingStartValue_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_482814146"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_120);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("3652271");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_120, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1657904086"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1930810914"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_958982915"}, UnderlyingInstrument_120);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1554478417"}, UnderlyingInstrument_120);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("13829999");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_120, UnderlyingInstrument_120);
    all_values.push_back(UnderlyingInstrument_120);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_171825540"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1776445320"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1135335261"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_577082532"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_652043383"}, UnderlyingStipulations_NoUnderlyingStips_243);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_391061667"}, UnderlyingStipulations_NoUnderlyingStips_243);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1793164437"}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1314383598}, UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1243148784"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{687958212}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1306378067"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{551119403}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1172204446"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{944482419}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_22;
  FIX::Yield Yield_22;
  Yield_22.setString("48.710000");
set_field(msg, Yield_22, YieldData_22);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1842255831"}, YieldData_22);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_142234161"}, YieldData_22);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
  YieldRedemptionPrice_22.setString("4581053");
set_field(msg, YieldRedemptionPrice_22, YieldData_22);
  set_field(msg, FIX::YieldRedemptionPriceType{1213112333}, YieldData_22);
  set_field(msg, FIX::YieldType{"STRING_SHORTAVGLIFE"}, YieldData_22);
  all_values.push_back(YieldData_22);
  all_compo_names.insert(".");


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
