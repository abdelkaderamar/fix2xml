#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityStatusRequest_0;
  FIX::Currency Currency_67("EUR");
  msg.set(Currency_67);
  SecurityStatusRequest_0.insert(Currency_67.getString());
  FIX::MarketID MarketID_20("EXCHANGE_1480016519");
  msg.set(MarketID_20);
  SecurityStatusRequest_0.insert(MarketID_20.getString());
  FIX::MarketSegmentID MarketSegmentID_20("STRING_1296817182");
  msg.set(MarketSegmentID_20);
  SecurityStatusRequest_0.insert(MarketSegmentID_20.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_1("STRING_667902215");
  msg.set(SecurityStatusReqID_1);
  SecurityStatusRequest_0.insert(SecurityStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_11('1');
  msg.set(SubscriptionRequestType_11);
  SecurityStatusRequest_0.insert(SubscriptionRequestType_11.getString());
  FIX::TradingSessionID TradingSessionID_87("STRING_5");
  msg.set(TradingSessionID_87);
  SecurityStatusRequest_0.insert(TradingSessionID_87.getString());
  FIX::TradingSessionSubID TradingSessionSubID_87("STRING_7");
  msg.set(TradingSessionSubID_87);
  SecurityStatusRequest_0.insert(TradingSessionSubID_87.getString());
  all_values.push_back(SecurityStatusRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_139;
    FIX::EncodedLegIssuer EncodedLegIssuer_139("DATA_97214532");
    noLegs_0_0.set(EncodedLegIssuer_139);
    InstrumentLeg_139.insert(EncodedLegIssuer_139.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_139(823146512);
    noLegs_0_0.set(EncodedLegIssuerLen_139);
    InstrumentLeg_139.insert(EncodedLegIssuerLen_139.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_139("DATA_1980186703");
    noLegs_0_0.set(EncodedLegSecurityDesc_139);
    InstrumentLeg_139.insert(EncodedLegSecurityDesc_139.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_139(93132023);
    noLegs_0_0.set(EncodedLegSecurityDescLen_139);
    InstrumentLeg_139.insert(EncodedLegSecurityDescLen_139.getString());
    FIX::LegCFICode LegCFICode_139("STRING_1762467831");
    noLegs_0_0.set(LegCFICode_139);
    InstrumentLeg_139.insert(LegCFICode_139.getString());
    FIX::LegContractMultiplier LegContractMultiplier_139;
    LegContractMultiplier_139.setString("1163112");
    noLegs_0_0.set(LegContractMultiplier_139);
    InstrumentLeg_139.insert(LegContractMultiplier_139.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_139(1832780499);
    noLegs_0_0.set(LegContractMultiplierUnit_139);
    InstrumentLeg_139.insert(LegContractMultiplierUnit_139.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_139("MONTHYEAR_1918190335");
    noLegs_0_0.set(LegContractSettlMonth_139);
    InstrumentLeg_139.insert(LegContractSettlMonth_139.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_139("COUNTRY_147164024");
    noLegs_0_0.set(LegCountryOfIssue_139);
    InstrumentLeg_139.insert(LegCountryOfIssue_139.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_139("LOCALMKTDATE_889368098");
    noLegs_0_0.set(LegCouponPaymentDate_139);
    InstrumentLeg_139.insert(LegCouponPaymentDate_139.getString());
    FIX::LegCouponRate LegCouponRate_139;
    LegCouponRate_139.setString("19.520000");
    noLegs_0_0.set(LegCouponRate_139);
    InstrumentLeg_139.insert(LegCouponRate_139.getString());
    FIX::LegCreditRating LegCreditRating_139("STRING_2089900987");
    noLegs_0_0.set(LegCreditRating_139);
    InstrumentLeg_139.insert(LegCreditRating_139.getString());
    FIX::LegCurrency LegCurrency_139("USD");
    noLegs_0_0.set(LegCurrency_139);
    InstrumentLeg_139.insert(LegCurrency_139.getString());
    FIX::LegDatedDate LegDatedDate_139("LOCALMKTDATE_730063003");
    noLegs_0_0.set(LegDatedDate_139);
    InstrumentLeg_139.insert(LegDatedDate_139.getString());
    FIX::LegExerciseStyle LegExerciseStyle_139(1565736927);
    noLegs_0_0.set(LegExerciseStyle_139);
    InstrumentLeg_139.insert(LegExerciseStyle_139.getString());
    FIX::LegFactor LegFactor_139;
    LegFactor_139.setString("1465353");
    noLegs_0_0.set(LegFactor_139);
    InstrumentLeg_139.insert(LegFactor_139.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_139(557700862);
    noLegs_0_0.set(LegFlowScheduleType_139);
    InstrumentLeg_139.insert(LegFlowScheduleType_139.getString());
    FIX::LegInstrRegistry LegInstrRegistry_139("STRING_180082608");
    noLegs_0_0.set(LegInstrRegistry_139);
    InstrumentLeg_139.insert(LegInstrRegistry_139.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_139("LOCALMKTDATE_1311256710");
    noLegs_0_0.set(LegInterestAccrualDate_139);
    InstrumentLeg_139.insert(LegInterestAccrualDate_139.getString());
    FIX::LegIssueDate LegIssueDate_139("LOCALMKTDATE_1608245110");
    noLegs_0_0.set(LegIssueDate_139);
    InstrumentLeg_139.insert(LegIssueDate_139.getString());
    FIX::LegIssuer LegIssuer_139("STRING_1406406650");
    noLegs_0_0.set(LegIssuer_139);
    InstrumentLeg_139.insert(LegIssuer_139.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_139("STRING_1946104915");
    noLegs_0_0.set(LegLocaleOfIssue_139);
    InstrumentLeg_139.insert(LegLocaleOfIssue_139.getString());
    FIX::LegMaturityDate LegMaturityDate_139("LOCALMKTDATE_968351115");
    noLegs_0_0.set(LegMaturityDate_139);
    InstrumentLeg_139.insert(LegMaturityDate_139.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_139("MONTHYEAR_738939521");
    noLegs_0_0.set(LegMaturityMonthYear_139);
    InstrumentLeg_139.insert(LegMaturityMonthYear_139.getString());
    FIX::LegMaturityTime LegMaturityTime_139("TZTIMEONLY_1095438449");
    noLegs_0_0.set(LegMaturityTime_139);
    InstrumentLeg_139.insert(LegMaturityTime_139.getString());
    FIX::LegOptAttribute LegOptAttribute_139('1');
    noLegs_0_0.set(LegOptAttribute_139);
    InstrumentLeg_139.insert(LegOptAttribute_139.getString());
    FIX::LegOptionRatio LegOptionRatio_139;
    LegOptionRatio_139.setString("15812104");
    noLegs_0_0.set(LegOptionRatio_139);
    InstrumentLeg_139.insert(LegOptionRatio_139.getString());
    FIX::LegPool LegPool_139("STRING_946007293");
    noLegs_0_0.set(LegPool_139);
    InstrumentLeg_139.insert(LegPool_139.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_139("STRING_590412413");
    noLegs_0_0.set(LegPriceUnitOfMeasure_139);
    InstrumentLeg_139.insert(LegPriceUnitOfMeasure_139.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_139;
    LegPriceUnitOfMeasureQty_139.setString("15747020");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_139);
    InstrumentLeg_139.insert(LegPriceUnitOfMeasureQty_139.getString());
    FIX::LegProduct LegProduct_139(1043221825);
    noLegs_0_0.set(LegProduct_139);
    InstrumentLeg_139.insert(LegProduct_139.getString());
    FIX::LegPutOrCall LegPutOrCall_139(1413558925);
    noLegs_0_0.set(LegPutOrCall_139);
    InstrumentLeg_139.insert(LegPutOrCall_139.getString());
    FIX::LegRatioQty LegRatioQty_139;
    LegRatioQty_139.setString("14074051");
    noLegs_0_0.set(LegRatioQty_139);
    InstrumentLeg_139.insert(LegRatioQty_139.getString());
    FIX::LegRedemptionDate LegRedemptionDate_139("LOCALMKTDATE_1136353849");
    noLegs_0_0.set(LegRedemptionDate_139);
    InstrumentLeg_139.insert(LegRedemptionDate_139.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_139("STRING_1028543108");
    noLegs_0_0.set(LegRepoCollateralSecurityType_139);
    InstrumentLeg_139.insert(LegRepoCollateralSecurityType_139.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_139;
    LegRepurchaseRate_139.setString("63.620000");
    noLegs_0_0.set(LegRepurchaseRate_139);
    InstrumentLeg_139.insert(LegRepurchaseRate_139.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_139(821650700);
    noLegs_0_0.set(LegRepurchaseTerm_139);
    InstrumentLeg_139.insert(LegRepurchaseTerm_139.getString());
    FIX::LegSecurityDesc LegSecurityDesc_139("STRING_799249796");
    noLegs_0_0.set(LegSecurityDesc_139);
    InstrumentLeg_139.insert(LegSecurityDesc_139.getString());
    FIX::LegSecurityExchange LegSecurityExchange_139("EXCHANGE_1670880386");
    noLegs_0_0.set(LegSecurityExchange_139);
    InstrumentLeg_139.insert(LegSecurityExchange_139.getString());
    FIX::LegSecurityID LegSecurityID_139("STRING_1711018798");
    noLegs_0_0.set(LegSecurityID_139);
    InstrumentLeg_139.insert(LegSecurityID_139.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_139("STRING_1217351748");
    noLegs_0_0.set(LegSecurityIDSource_139);
    InstrumentLeg_139.insert(LegSecurityIDSource_139.getString());
    FIX::LegSecuritySubType LegSecuritySubType_139("STRING_1613297726");
    noLegs_0_0.set(LegSecuritySubType_139);
    InstrumentLeg_139.insert(LegSecuritySubType_139.getString());
    FIX::LegSecurityType LegSecurityType_139("STRING_1084396429");
    noLegs_0_0.set(LegSecurityType_139);
    InstrumentLeg_139.insert(LegSecurityType_139.getString());
    FIX::LegSide LegSide_139('4');
    noLegs_0_0.set(LegSide_139);
    InstrumentLeg_139.insert(LegSide_139.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_139("STRING_195877081");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_139);
    InstrumentLeg_139.insert(LegStateOrProvinceOfIssue_139.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_139("CHF");
    noLegs_0_0.set(LegStrikeCurrency_139);
    InstrumentLeg_139.insert(LegStrikeCurrency_139.getString());
    FIX::LegStrikePrice LegStrikePrice_139;
    LegStrikePrice_139.setString("7535779");
    noLegs_0_0.set(LegStrikePrice_139);
    InstrumentLeg_139.insert(LegStrikePrice_139.getString());
    FIX::LegSymbol LegSymbol_139("STRING_682732317");
    noLegs_0_0.set(LegSymbol_139);
    InstrumentLeg_139.insert(LegSymbol_139.getString());
    FIX::LegSymbolSfx LegSymbolSfx_139("STRING_1934204007");
    noLegs_0_0.set(LegSymbolSfx_139);
    InstrumentLeg_139.insert(LegSymbolSfx_139.getString());
    FIX::LegTimeUnit LegTimeUnit_139("STRING_214339405");
    noLegs_0_0.set(LegTimeUnit_139);
    InstrumentLeg_139.insert(LegTimeUnit_139.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_139("STRING_2089138967");
    noLegs_0_0.set(LegUnitOfMeasure_139);
    InstrumentLeg_139.insert(LegUnitOfMeasure_139.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_139;
    LegUnitOfMeasureQty_139.setString("17328252");
    noLegs_0_0.set(LegUnitOfMeasureQty_139);
    InstrumentLeg_139.insert(LegUnitOfMeasureQty_139.getString());
    all_values.push_back(InstrumentLeg_139);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_270;
      FIX::LegSecurityAltID LegSecurityAltID_270("STRING_680594841");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_270);
      LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltID_270.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_270("STRING_680780075");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_270);
      LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltIDSource_270.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_270);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_271;
      FIX::LegSecurityAltID LegSecurityAltID_271("STRING_671460203");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_271);
      LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltID_271.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_271("STRING_114321685");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_271);
      LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltIDSource_271.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_271);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_140;
    FIX::EncodedLegIssuer EncodedLegIssuer_140("DATA_1626787368");
    noLegs_0_1.set(EncodedLegIssuer_140);
    InstrumentLeg_140.insert(EncodedLegIssuer_140.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_140(1261872616);
    noLegs_0_1.set(EncodedLegIssuerLen_140);
    InstrumentLeg_140.insert(EncodedLegIssuerLen_140.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_140("DATA_1689023770");
    noLegs_0_1.set(EncodedLegSecurityDesc_140);
    InstrumentLeg_140.insert(EncodedLegSecurityDesc_140.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_140(522525546);
    noLegs_0_1.set(EncodedLegSecurityDescLen_140);
    InstrumentLeg_140.insert(EncodedLegSecurityDescLen_140.getString());
    FIX::LegCFICode LegCFICode_140("STRING_527947894");
    noLegs_0_1.set(LegCFICode_140);
    InstrumentLeg_140.insert(LegCFICode_140.getString());
    FIX::LegContractMultiplier LegContractMultiplier_140;
    LegContractMultiplier_140.setString("9489452");
    noLegs_0_1.set(LegContractMultiplier_140);
    InstrumentLeg_140.insert(LegContractMultiplier_140.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_140(1658879395);
    noLegs_0_1.set(LegContractMultiplierUnit_140);
    InstrumentLeg_140.insert(LegContractMultiplierUnit_140.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_140("MONTHYEAR_1556491002");
    noLegs_0_1.set(LegContractSettlMonth_140);
    InstrumentLeg_140.insert(LegContractSettlMonth_140.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_140("COUNTRY_325177977");
    noLegs_0_1.set(LegCountryOfIssue_140);
    InstrumentLeg_140.insert(LegCountryOfIssue_140.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_140("LOCALMKTDATE_333046447");
    noLegs_0_1.set(LegCouponPaymentDate_140);
    InstrumentLeg_140.insert(LegCouponPaymentDate_140.getString());
    FIX::LegCouponRate LegCouponRate_140;
    LegCouponRate_140.setString("71.500000");
    noLegs_0_1.set(LegCouponRate_140);
    InstrumentLeg_140.insert(LegCouponRate_140.getString());
    FIX::LegCreditRating LegCreditRating_140("STRING_1996058363");
    noLegs_0_1.set(LegCreditRating_140);
    InstrumentLeg_140.insert(LegCreditRating_140.getString());
    FIX::LegCurrency LegCurrency_140("EUR");
    noLegs_0_1.set(LegCurrency_140);
    InstrumentLeg_140.insert(LegCurrency_140.getString());
    FIX::LegDatedDate LegDatedDate_140("LOCALMKTDATE_1461872441");
    noLegs_0_1.set(LegDatedDate_140);
    InstrumentLeg_140.insert(LegDatedDate_140.getString());
    FIX::LegExerciseStyle LegExerciseStyle_140(980978027);
    noLegs_0_1.set(LegExerciseStyle_140);
    InstrumentLeg_140.insert(LegExerciseStyle_140.getString());
    FIX::LegFactor LegFactor_140;
    LegFactor_140.setString("19020208");
    noLegs_0_1.set(LegFactor_140);
    InstrumentLeg_140.insert(LegFactor_140.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_140(1657749522);
    noLegs_0_1.set(LegFlowScheduleType_140);
    InstrumentLeg_140.insert(LegFlowScheduleType_140.getString());
    FIX::LegInstrRegistry LegInstrRegistry_140("STRING_1483627735");
    noLegs_0_1.set(LegInstrRegistry_140);
    InstrumentLeg_140.insert(LegInstrRegistry_140.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_140("LOCALMKTDATE_377484475");
    noLegs_0_1.set(LegInterestAccrualDate_140);
    InstrumentLeg_140.insert(LegInterestAccrualDate_140.getString());
    FIX::LegIssueDate LegIssueDate_140("LOCALMKTDATE_263843817");
    noLegs_0_1.set(LegIssueDate_140);
    InstrumentLeg_140.insert(LegIssueDate_140.getString());
    FIX::LegIssuer LegIssuer_140("STRING_18876404");
    noLegs_0_1.set(LegIssuer_140);
    InstrumentLeg_140.insert(LegIssuer_140.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_140("STRING_164204834");
    noLegs_0_1.set(LegLocaleOfIssue_140);
    InstrumentLeg_140.insert(LegLocaleOfIssue_140.getString());
    FIX::LegMaturityDate LegMaturityDate_140("LOCALMKTDATE_478183222");
    noLegs_0_1.set(LegMaturityDate_140);
    InstrumentLeg_140.insert(LegMaturityDate_140.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_140("MONTHYEAR_2108015372");
    noLegs_0_1.set(LegMaturityMonthYear_140);
    InstrumentLeg_140.insert(LegMaturityMonthYear_140.getString());
    FIX::LegMaturityTime LegMaturityTime_140("TZTIMEONLY_1897030109");
    noLegs_0_1.set(LegMaturityTime_140);
    InstrumentLeg_140.insert(LegMaturityTime_140.getString());
    FIX::LegOptAttribute LegOptAttribute_140('1');
    noLegs_0_1.set(LegOptAttribute_140);
    InstrumentLeg_140.insert(LegOptAttribute_140.getString());
    FIX::LegOptionRatio LegOptionRatio_140;
    LegOptionRatio_140.setString("6411265");
    noLegs_0_1.set(LegOptionRatio_140);
    InstrumentLeg_140.insert(LegOptionRatio_140.getString());
    FIX::LegPool LegPool_140("STRING_430326536");
    noLegs_0_1.set(LegPool_140);
    InstrumentLeg_140.insert(LegPool_140.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_140("STRING_184850298");
    noLegs_0_1.set(LegPriceUnitOfMeasure_140);
    InstrumentLeg_140.insert(LegPriceUnitOfMeasure_140.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_140;
    LegPriceUnitOfMeasureQty_140.setString("7554482");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_140);
    InstrumentLeg_140.insert(LegPriceUnitOfMeasureQty_140.getString());
    FIX::LegProduct LegProduct_140(2057113905);
    noLegs_0_1.set(LegProduct_140);
    InstrumentLeg_140.insert(LegProduct_140.getString());
    FIX::LegPutOrCall LegPutOrCall_140(1446722915);
    noLegs_0_1.set(LegPutOrCall_140);
    InstrumentLeg_140.insert(LegPutOrCall_140.getString());
    FIX::LegRatioQty LegRatioQty_140;
    LegRatioQty_140.setString("2969883");
    noLegs_0_1.set(LegRatioQty_140);
    InstrumentLeg_140.insert(LegRatioQty_140.getString());
    FIX::LegRedemptionDate LegRedemptionDate_140("LOCALMKTDATE_432155803");
    noLegs_0_1.set(LegRedemptionDate_140);
    InstrumentLeg_140.insert(LegRedemptionDate_140.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_140("STRING_1974670809");
    noLegs_0_1.set(LegRepoCollateralSecurityType_140);
    InstrumentLeg_140.insert(LegRepoCollateralSecurityType_140.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_140;
    LegRepurchaseRate_140.setString("36.360000");
    noLegs_0_1.set(LegRepurchaseRate_140);
    InstrumentLeg_140.insert(LegRepurchaseRate_140.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_140(2091035198);
    noLegs_0_1.set(LegRepurchaseTerm_140);
    InstrumentLeg_140.insert(LegRepurchaseTerm_140.getString());
    FIX::LegSecurityDesc LegSecurityDesc_140("STRING_1383678163");
    noLegs_0_1.set(LegSecurityDesc_140);
    InstrumentLeg_140.insert(LegSecurityDesc_140.getString());
    FIX::LegSecurityExchange LegSecurityExchange_140("EXCHANGE_1571111613");
    noLegs_0_1.set(LegSecurityExchange_140);
    InstrumentLeg_140.insert(LegSecurityExchange_140.getString());
    FIX::LegSecurityID LegSecurityID_140("STRING_276597997");
    noLegs_0_1.set(LegSecurityID_140);
    InstrumentLeg_140.insert(LegSecurityID_140.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_140("STRING_1591935314");
    noLegs_0_1.set(LegSecurityIDSource_140);
    InstrumentLeg_140.insert(LegSecurityIDSource_140.getString());
    FIX::LegSecuritySubType LegSecuritySubType_140("STRING_1419686328");
    noLegs_0_1.set(LegSecuritySubType_140);
    InstrumentLeg_140.insert(LegSecuritySubType_140.getString());
    FIX::LegSecurityType LegSecurityType_140("STRING_173179595");
    noLegs_0_1.set(LegSecurityType_140);
    InstrumentLeg_140.insert(LegSecurityType_140.getString());
    FIX::LegSide LegSide_140('8');
    noLegs_0_1.set(LegSide_140);
    InstrumentLeg_140.insert(LegSide_140.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_140("STRING_734075122");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_140);
    InstrumentLeg_140.insert(LegStateOrProvinceOfIssue_140.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_140("JPY");
    noLegs_0_1.set(LegStrikeCurrency_140);
    InstrumentLeg_140.insert(LegStrikeCurrency_140.getString());
    FIX::LegStrikePrice LegStrikePrice_140;
    LegStrikePrice_140.setString("2443409");
    noLegs_0_1.set(LegStrikePrice_140);
    InstrumentLeg_140.insert(LegStrikePrice_140.getString());
    FIX::LegSymbol LegSymbol_140("STRING_490301710");
    noLegs_0_1.set(LegSymbol_140);
    InstrumentLeg_140.insert(LegSymbol_140.getString());
    FIX::LegSymbolSfx LegSymbolSfx_140("STRING_1002082217");
    noLegs_0_1.set(LegSymbolSfx_140);
    InstrumentLeg_140.insert(LegSymbolSfx_140.getString());
    FIX::LegTimeUnit LegTimeUnit_140("STRING_508184814");
    noLegs_0_1.set(LegTimeUnit_140);
    InstrumentLeg_140.insert(LegTimeUnit_140.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_140("STRING_509178114");
    noLegs_0_1.set(LegUnitOfMeasure_140);
    InstrumentLeg_140.insert(LegUnitOfMeasure_140.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_140;
    LegUnitOfMeasureQty_140.setString("11662870");
    noLegs_0_1.set(LegUnitOfMeasureQty_140);
    InstrumentLeg_140.insert(LegUnitOfMeasureQty_140.getString());
    all_values.push_back(InstrumentLeg_140);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_272;
      FIX::LegSecurityAltID LegSecurityAltID_272("STRING_469709838");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_272);
      LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltID_272.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_272("STRING_915833513");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_272);
      LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltIDSource_272.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_272);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_273;
      FIX::LegSecurityAltID LegSecurityAltID_273("STRING_499758131");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltID_273.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_273("STRING_1110836403");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltIDSource_273.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_273);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_87;
  FIX::AttachmentPoint AttachmentPoint_87;
  AttachmentPoint_87.setString("0.490000");
  msg.set(AttachmentPoint_87);
  Instrument_87.insert(AttachmentPoint_87.getString());
  FIX::CFICode CFICode_87("STRING_684608430");
  msg.set(CFICode_87);
  Instrument_87.insert(CFICode_87.getString());
  FIX::CPProgram CPProgram_87(99);
  msg.set(CPProgram_87);
  Instrument_87.insert(CPProgram_87.getString());
  FIX::CPRegType CPRegType_87("STRING_1255790306");
  msg.set(CPRegType_87);
  Instrument_87.insert(CPRegType_87.getString());
  FIX::CapPrice CapPrice_87;
  CapPrice_87.setString("21313313");
  msg.set(CapPrice_87);
  Instrument_87.insert(CapPrice_87.getString());
  FIX::ContractMultiplier ContractMultiplier_87;
  ContractMultiplier_87.setString("157893");
  msg.set(ContractMultiplier_87);
  Instrument_87.insert(ContractMultiplier_87.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_87(0);
  msg.set(ContractMultiplierUnit_87);
  Instrument_87.insert(ContractMultiplierUnit_87.getString());
  FIX::ContractSettlMonth ContractSettlMonth_87("MONTHYEAR_1958518506");
  msg.set(ContractSettlMonth_87);
  Instrument_87.insert(ContractSettlMonth_87.getString());
  FIX::CountryOfIssue CountryOfIssue_87("COUNTRY_1261723015");
  msg.set(CountryOfIssue_87);
  Instrument_87.insert(CountryOfIssue_87.getString());
  FIX::CouponPaymentDate CouponPaymentDate_87("LOCALMKTDATE_1631497659");
  msg.set(CouponPaymentDate_87);
  Instrument_87.insert(CouponPaymentDate_87.getString());
  FIX::CouponRate CouponRate_87;
  CouponRate_87.setString("30.210000");
  msg.set(CouponRate_87);
  Instrument_87.insert(CouponRate_87.getString());
  FIX::CreditRating CreditRating_87("STRING_685350980");
  msg.set(CreditRating_87);
  Instrument_87.insert(CreditRating_87.getString());
  FIX::DatedDate DatedDate_87("LOCALMKTDATE_1908095657");
  msg.set(DatedDate_87);
  Instrument_87.insert(DatedDate_87.getString());
  FIX::DetachmentPoint DetachmentPoint_87;
  DetachmentPoint_87.setString("46.870000");
  msg.set(DetachmentPoint_87);
  Instrument_87.insert(DetachmentPoint_87.getString());
  FIX::EncodedIssuer EncodedIssuer_87("DATA_2105037308");
  msg.set(EncodedIssuer_87);
  Instrument_87.insert(EncodedIssuer_87.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_87(2081275252);
  msg.set(EncodedIssuerLen_87);
  Instrument_87.insert(EncodedIssuerLen_87.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_87("DATA_1509225252");
  msg.set(EncodedSecurityDesc_87);
  Instrument_87.insert(EncodedSecurityDesc_87.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_87(691628782);
  msg.set(EncodedSecurityDescLen_87);
  Instrument_87.insert(EncodedSecurityDescLen_87.getString());
  FIX::ExerciseStyle ExerciseStyle_87(1);
  msg.set(ExerciseStyle_87);
  Instrument_87.insert(ExerciseStyle_87.getString());
  FIX::Factor Factor_87;
  Factor_87.setString("21338229");
  msg.set(Factor_87);
  Instrument_87.insert(Factor_87.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_87(false);
  msg.set(FlexProductEligibilityIndicator_87);
  Instrument_87.insert(FlexProductEligibilityIndicator_87.getString());
  FIX::FlexibleIndicator FlexibleIndicator_87(false);
  msg.set(FlexibleIndicator_87);
  Instrument_87.insert(FlexibleIndicator_87.getString());
  FIX::FloorPrice FloorPrice_87;
  FloorPrice_87.setString("9884215");
  msg.set(FloorPrice_87);
  Instrument_87.insert(FloorPrice_87.getString());
  FIX::FlowScheduleType FlowScheduleType_87(3);
  msg.set(FlowScheduleType_87);
  Instrument_87.insert(FlowScheduleType_87.getString());
  FIX::InstrRegistry InstrRegistry_87("STRING_2087429051");
  msg.set(InstrRegistry_87);
  Instrument_87.insert(InstrRegistry_87.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_87('7');
  msg.set(InstrmtAssignmentMethod_87);
  Instrument_87.insert(InstrmtAssignmentMethod_87.getString());
  FIX::InterestAccrualDate InterestAccrualDate_87("LOCALMKTDATE_283038981");
  msg.set(InterestAccrualDate_87);
  Instrument_87.insert(InterestAccrualDate_87.getString());
  FIX::IssueDate IssueDate_87("LOCALMKTDATE_409655242");
  msg.set(IssueDate_87);
  Instrument_87.insert(IssueDate_87.getString());
  FIX::Issuer Issuer_87("STRING_923058481");
  msg.set(Issuer_87);
  Instrument_87.insert(Issuer_87.getString());
  FIX::ListMethod ListMethod_87(1);
  msg.set(ListMethod_87);
  Instrument_87.insert(ListMethod_87.getString());
  FIX::LocaleOfIssue LocaleOfIssue_87("STRING_1520491645");
  msg.set(LocaleOfIssue_87);
  Instrument_87.insert(LocaleOfIssue_87.getString());
  FIX::MaturityDate MaturityDate_87("LOCALMKTDATE_121734883");
  msg.set(MaturityDate_87);
  Instrument_87.insert(MaturityDate_87.getString());
  FIX::MaturityMonthYear MaturityMonthYear_87("MONTHYEAR_1467405543");
  msg.set(MaturityMonthYear_87);
  Instrument_87.insert(MaturityMonthYear_87.getString());
  FIX::MaturityTime MaturityTime_87("TZTIMEONLY_1239292651");
  msg.set(MaturityTime_87);
  Instrument_87.insert(MaturityTime_87.getString());
  FIX::MinPriceIncrement MinPriceIncrement_87;
  MinPriceIncrement_87.setString("13775251");
  msg.set(MinPriceIncrement_87);
  Instrument_87.insert(MinPriceIncrement_87.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_87;
  MinPriceIncrementAmount_87.setString("14512532");
  msg.set(MinPriceIncrementAmount_87);
  Instrument_87.insert(MinPriceIncrementAmount_87.getString());
  FIX::NTPositionLimit NTPositionLimit_87(1255082030);
  msg.set(NTPositionLimit_87);
  Instrument_87.insert(NTPositionLimit_87.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_87;
  NotionalPercentageOutstanding_87.setString("76.510000");
  msg.set(NotionalPercentageOutstanding_87);
  Instrument_87.insert(NotionalPercentageOutstanding_87.getString());
  FIX::OptAttribute OptAttribute_87('1');
  msg.set(OptAttribute_87);
  Instrument_87.insert(OptAttribute_87.getString());
  FIX::OptPayoutAmount OptPayoutAmount_87;
  OptPayoutAmount_87.setString("3693213");
  msg.set(OptPayoutAmount_87);
  Instrument_87.insert(OptPayoutAmount_87.getString());
  FIX::OptPayoutType OptPayoutType_87(1);
  msg.set(OptPayoutType_87);
  Instrument_87.insert(OptPayoutType_87.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_87;
  OriginalNotionalPercentageOutstanding_87.setString("74.710000");
  msg.set(OriginalNotionalPercentageOutstanding_87);
  Instrument_87.insert(OriginalNotionalPercentageOutstanding_87.getString());
  FIX::Pool Pool_87("STRING_1054672377");
  msg.set(Pool_87);
  Instrument_87.insert(Pool_87.getString());
  FIX::PositionLimit PositionLimit_87(162613671);
  msg.set(PositionLimit_87);
  Instrument_87.insert(PositionLimit_87.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_87("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_87);
  Instrument_87.insert(PriceQuoteMethod_87.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_87("STRING_1012226038");
  msg.set(PriceUnitOfMeasure_87);
  Instrument_87.insert(PriceUnitOfMeasure_87.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_87;
  PriceUnitOfMeasureQty_87.setString("964052");
  msg.set(PriceUnitOfMeasureQty_87);
  Instrument_87.insert(PriceUnitOfMeasureQty_87.getString());
  FIX::Product Product_89(1);
  msg.set(Product_89);
  Instrument_87.insert(Product_89.getString());
  FIX::ProductComplex ProductComplex_87("STRING_1703854820");
  msg.set(ProductComplex_87);
  Instrument_87.insert(ProductComplex_87.getString());
  FIX::PutOrCall PutOrCall_87(1);
  msg.set(PutOrCall_87);
  Instrument_87.insert(PutOrCall_87.getString());
  FIX::RedemptionDate RedemptionDate_87("LOCALMKTDATE_296763110");
  msg.set(RedemptionDate_87);
  Instrument_87.insert(RedemptionDate_87.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_87("STRING_492340951");
  msg.set(RepoCollateralSecurityType_87);
  Instrument_87.insert(RepoCollateralSecurityType_87.getString());
  FIX::RepurchaseRate RepurchaseRate_87;
  RepurchaseRate_87.setString("17.920000");
  msg.set(RepurchaseRate_87);
  Instrument_87.insert(RepurchaseRate_87.getString());
  FIX::RepurchaseTerm RepurchaseTerm_87(1285184675);
  msg.set(RepurchaseTerm_87);
  Instrument_87.insert(RepurchaseTerm_87.getString());
  FIX::RestructuringType RestructuringType_87("STRING_FR");
  msg.set(RestructuringType_87);
  Instrument_87.insert(RestructuringType_87.getString());
  FIX::SecurityDesc SecurityDesc_87("STRING_555067195");
  msg.set(SecurityDesc_87);
  Instrument_87.insert(SecurityDesc_87.getString());
  FIX::SecurityExchange SecurityExchange_87("EXCHANGE_1292409643");
  msg.set(SecurityExchange_87);
  Instrument_87.insert(SecurityExchange_87.getString());
  FIX::SecurityGroup SecurityGroup_87("STRING_72050878");
  msg.set(SecurityGroup_87);
  Instrument_87.insert(SecurityGroup_87.getString());
  FIX::SecurityID SecurityID_87("STRING_964722437");
  msg.set(SecurityID_87);
  Instrument_87.insert(SecurityID_87.getString());
  FIX::SecurityIDSource SecurityIDSource_87("STRING_C");
  msg.set(SecurityIDSource_87);
  Instrument_87.insert(SecurityIDSource_87.getString());
  FIX::SecurityStatus SecurityStatus_88("STRING_2");
  msg.set(SecurityStatus_88);
  Instrument_87.insert(SecurityStatus_88.getString());
  FIX::SecuritySubType SecuritySubType_88("STRING_337730435");
  msg.set(SecuritySubType_88);
  Instrument_87.insert(SecuritySubType_88.getString());
  FIX::SecurityType SecurityType_89("STRING_OOP");
  msg.set(SecurityType_89);
  Instrument_87.insert(SecurityType_89.getString());
  FIX::Seniority Seniority_87("STRING_SB");
  msg.set(Seniority_87);
  Instrument_87.insert(Seniority_87.getString());
  FIX::SettlMethod SettlMethod_87('C');
  msg.set(SettlMethod_87);
  Instrument_87.insert(SettlMethod_87.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_87("STRING_1567244549");
  msg.set(SettleOnOpenFlag_87);
  Instrument_87.insert(SettleOnOpenFlag_87.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_87("STRING_1626023126");
  msg.set(StateOrProvinceOfIssue_87);
  Instrument_87.insert(StateOrProvinceOfIssue_87.getString());
  FIX::StrikeCurrency StrikeCurrency_87("GBP");
  msg.set(StrikeCurrency_87);
  Instrument_87.insert(StrikeCurrency_87.getString());
  FIX::StrikeMultiplier StrikeMultiplier_87;
  StrikeMultiplier_87.setString("7408275");
  msg.set(StrikeMultiplier_87);
  Instrument_87.insert(StrikeMultiplier_87.getString());
  FIX::StrikePrice StrikePrice_87;
  StrikePrice_87.setString("10539428");
  msg.set(StrikePrice_87);
  Instrument_87.insert(StrikePrice_87.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_87(1);
  msg.set(StrikePriceBoundaryMethod_87);
  Instrument_87.insert(StrikePriceBoundaryMethod_87.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_87;
  StrikePriceBoundaryPrecision_87.setString("50.470000");
  msg.set(StrikePriceBoundaryPrecision_87);
  Instrument_87.insert(StrikePriceBoundaryPrecision_87.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_87(1);
  msg.set(StrikePriceDeterminationMethod_87);
  Instrument_87.insert(StrikePriceDeterminationMethod_87.getString());
  FIX::StrikeValue StrikeValue_87;
  StrikeValue_87.setString("9023638");
  msg.set(StrikeValue_87);
  Instrument_87.insert(StrikeValue_87.getString());
  FIX::Symbol Symbol_87("STRING_1999027206");
  msg.set(Symbol_87);
  Instrument_87.insert(Symbol_87.getString());
  FIX::SymbolSfx SymbolSfx_87("STRING_CD");
  msg.set(SymbolSfx_87);
  Instrument_87.insert(SymbolSfx_87.getString());
  FIX::TimeUnit TimeUnit_87("STRING_Yr");
  msg.set(TimeUnit_87);
  Instrument_87.insert(TimeUnit_87.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_87(3);
  msg.set(UnderlyingPriceDeterminationMethod_87);
  Instrument_87.insert(UnderlyingPriceDeterminationMethod_87.getString());
  FIX::UnitOfMeasure UnitOfMeasure_87("STRING_t");
  msg.set(UnitOfMeasure_87);
  Instrument_87.insert(UnitOfMeasure_87.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_87;
  UnitOfMeasureQty_87.setString("356400");
  msg.set(UnitOfMeasureQty_87);
  Instrument_87.insert(UnitOfMeasureQty_87.getString());
  FIX::ValuationMethod ValuationMethod_87("STRING_FUTDA");
  msg.set(ValuationMethod_87);
  Instrument_87.insert(ValuationMethod_87.getString());
  all_values.push_back(Instrument_87);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_164;
    FIX::ComplexEventCondition ComplexEventCondition_164(2);
    noComplexEvents_0_0.set(ComplexEventCondition_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventCondition_164.getString());
    FIX::ComplexEventPrice ComplexEventPrice_164;
    ComplexEventPrice_164.setString("17439151");
    noComplexEvents_0_0.set(ComplexEventPrice_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPrice_164.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_164(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryMethod_164.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
    ComplexEventPriceBoundaryPrecision_164.setString("90.050000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryPrecision_164.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_164(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceTimeType_164.getString());
    FIX::ComplexEventType ComplexEventType_164(9);
    noComplexEvents_0_0.set(ComplexEventType_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventType_164.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
    ComplexOptPayoutAmount_164.setString("230677");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexOptPayoutAmount_164.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_164);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_330;
      FIX::ComplexEventEndDate ComplexEventEndDate_330(FIX::UTCTIMESTAMP(13, 20, 29, 4, 6, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_330);
      ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventEndDate_330.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_330(FIX::UTCTIMESTAMP(2, 3, 3, 13, 8, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_330);
      ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventStartDate_330.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_330);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
        FIX::ComplexEventEndTime ComplexEventEndTime_662(FIX::UTCTIMEONLY(1, 10, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_662);
        ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventEndTime_662.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_662(FIX::UTCTIMEONLY(3, 16, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_662);
        ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventStartTime_662.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_165;
    FIX::ComplexEventCondition ComplexEventCondition_165(2);
    noComplexEvents_0_1.set(ComplexEventCondition_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventCondition_165.getString());
    FIX::ComplexEventPrice ComplexEventPrice_165;
    ComplexEventPrice_165.setString("11036516");
    noComplexEvents_0_1.set(ComplexEventPrice_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPrice_165.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_165(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryMethod_165.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
    ComplexEventPriceBoundaryPrecision_165.setString("11.940000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryPrecision_165.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_165(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceTimeType_165.getString());
    FIX::ComplexEventType ComplexEventType_165(2);
    noComplexEvents_0_1.set(ComplexEventType_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventType_165.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
    ComplexOptPayoutAmount_165.setString("11652689");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexOptPayoutAmount_165.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_165);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_331;
      FIX::ComplexEventEndDate ComplexEventEndDate_331(FIX::UTCTIMESTAMP(2, 30, 6, 6, 5, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_331);
      ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventEndDate_331.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_331(FIX::UTCTIMESTAMP(6, 49, 58, 27, 1, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_331);
      ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventStartDate_331.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_331);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
        FIX::ComplexEventEndTime ComplexEventEndTime_663(FIX::UTCTIMEONLY(11, 8, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_663);
        ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventEndTime_663.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_663(FIX::UTCTIMEONLY(12, 9, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_663);
        ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventStartTime_663.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_332;
      FIX::ComplexEventEndDate ComplexEventEndDate_332(FIX::UTCTIMESTAMP(4, 26, 31, 11, 8, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_332);
      ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventEndDate_332.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_332(FIX::UTCTIMESTAMP(19, 49, 48, 9, 8, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_332);
      ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventStartDate_332.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_332);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
        FIX::ComplexEventEndTime ComplexEventEndTime_664(FIX::UTCTIMEONLY(2, 16, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_664);
        ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventEndTime_664.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_664(FIX::UTCTIMEONLY(16, 11, 39));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_664);
        ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventStartTime_664.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
        FIX::ComplexEventEndTime ComplexEventEndTime_665(FIX::UTCTIMEONLY(14, 48, 30));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_665);
        ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventEndTime_665.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_665(FIX::UTCTIMEONLY(4, 39, 7));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_665);
        ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventStartTime_665.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
        FIX::ComplexEventEndTime ComplexEventEndTime_666(FIX::UTCTIMEONLY(8, 25, 44));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_666);
        ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventEndTime_666.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_666(FIX::UTCTIMEONLY(0, 55, 8));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_666);
        ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventStartTime_666.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    FIX::EventDate EventDate_173("LOCALMKTDATE_521298217");
    noEvents_0_0.set(EventDate_173);
    EvntGrp_NoEvents_173.insert(EventDate_173.getString());
    FIX::EventPx EventPx_173;
    EventPx_173.setString("1317641");
    noEvents_0_0.set(EventPx_173);
    EvntGrp_NoEvents_173.insert(EventPx_173.getString());
    FIX::EventText EventText_173("STRING_1140036597");
    noEvents_0_0.set(EventText_173);
    EvntGrp_NoEvents_173.insert(EventText_173.getString());
    FIX::EventTime EventTime_173(FIX::UTCTIMESTAMP(8, 32, 47, 26, 5, 2010));
    noEvents_0_0.set(EventTime_173);
    EvntGrp_NoEvents_173.insert(EventTime_173.getString());
    FIX::EventType EventType_173(8);
    noEvents_0_0.set(EventType_173);
    EvntGrp_NoEvents_173.insert(EventType_173.getString());
    all_values.push_back(EvntGrp_NoEvents_173);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_174;
    FIX::EventDate EventDate_174("LOCALMKTDATE_387007752");
    noEvents_0_1.set(EventDate_174);
    EvntGrp_NoEvents_174.insert(EventDate_174.getString());
    FIX::EventPx EventPx_174;
    EventPx_174.setString("21391124");
    noEvents_0_1.set(EventPx_174);
    EvntGrp_NoEvents_174.insert(EventPx_174.getString());
    FIX::EventText EventText_174("STRING_12473379");
    noEvents_0_1.set(EventText_174);
    EvntGrp_NoEvents_174.insert(EventText_174.getString());
    FIX::EventTime EventTime_174(FIX::UTCTIMESTAMP(9, 27, 12, 15, 12, 2016));
    noEvents_0_1.set(EventTime_174);
    EvntGrp_NoEvents_174.insert(EventTime_174.getString());
    FIX::EventType EventType_174(8);
    noEvents_0_1.set(EventType_174);
    EvntGrp_NoEvents_174.insert(EventType_174.getString());
    all_values.push_back(EvntGrp_NoEvents_174);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_175;
    FIX::EventDate EventDate_175("LOCALMKTDATE_1184403828");
    noEvents_0_2.set(EventDate_175);
    EvntGrp_NoEvents_175.insert(EventDate_175.getString());
    FIX::EventPx EventPx_175;
    EventPx_175.setString("3270591");
    noEvents_0_2.set(EventPx_175);
    EvntGrp_NoEvents_175.insert(EventPx_175.getString());
    FIX::EventText EventText_175("STRING_1043205224");
    noEvents_0_2.set(EventText_175);
    EvntGrp_NoEvents_175.insert(EventText_175.getString());
    FIX::EventTime EventTime_175(FIX::UTCTIMESTAMP(7, 9, 19, 23, 6, 2012));
    noEvents_0_2.set(EventTime_175);
    EvntGrp_NoEvents_175.insert(EventTime_175.getString());
    FIX::EventType EventType_175(17);
    noEvents_0_2.set(EventType_175);
    EvntGrp_NoEvents_175.insert(EventType_175.getString());
    all_values.push_back(EvntGrp_NoEvents_175);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_176;
    FIX::InstrumentPartyID InstrumentPartyID_176("STRING_1316047773");
    noInstrumentParties_0_0.set(InstrumentPartyID_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyID_176.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_176('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyIDSource_176.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_176(446578711);
    noInstrumentParties_0_0.set(InstrumentPartyRole_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyRole_176.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_176);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372;
      FIX::InstrumentPartySubID InstrumentPartySubID_372("STRING_1012153995");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_372);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubID_372.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_372(1111797671);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_372);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubIDType_372.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_195;
    FIX::SecurityAltID SecurityAltID_195("STRING_15021854");
    noSecurityAltID_0_0.set(SecurityAltID_195);
    SecAltIDGrp_NoSecurityAltID_195.insert(SecurityAltID_195.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_195("STRING_1498805424");
    noSecurityAltID_0_0.set(SecurityAltIDSource_195);
    SecAltIDGrp_NoSecurityAltID_195.insert(SecurityAltIDSource_195.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_195);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_196;
    FIX::SecurityAltID SecurityAltID_196("STRING_625678895");
    noSecurityAltID_0_1.set(SecurityAltID_196);
    SecAltIDGrp_NoSecurityAltID_196.insert(SecurityAltID_196.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_196("STRING_27495233");
    noSecurityAltID_0_1.set(SecurityAltIDSource_196);
    SecAltIDGrp_NoSecurityAltID_196.insert(SecurityAltIDSource_196.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_196);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_174;
  FIX::SecurityXML SecurityXML_175("XMLDATA_1380259986");
  msg.set(SecurityXML_175);
  FIX::SecurityXMLLen SecurityXMLLen_87(1126249016);
  msg.set(SecurityXMLLen_87);
  FIX::SecurityXMLSchema SecurityXMLSchema_87("STRING_1465806500");
  msg.set(SecurityXMLSchema_87);
  SecurityXML_174.insert(SecurityXMLSchema_87.getString());
  all_values.push_back(SecurityXML_174);

  // InstrumentExtension
  multiset<string> InstrumentExtension_17;
  FIX::DeliveryForm DeliveryForm_17(1);
  msg.set(DeliveryForm_17);
  InstrumentExtension_17.insert(DeliveryForm_17.getString());
  FIX::PctAtRisk PctAtRisk_17;
  PctAtRisk_17.setString("30.760000");
  msg.set(PctAtRisk_17);
  InstrumentExtension_17.insert(PctAtRisk_17.getString());
  all_values.push_back(InstrumentExtension_17);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_35;
    FIX::InstrAttribType InstrAttribType_35(3);
    noInstrAttrib_0_0.set(InstrAttribType_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribType_35.getString());
    FIX::InstrAttribValue InstrAttribValue_35("STRING_1492006235");
    noInstrAttrib_0_0.set(InstrAttribValue_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribValue_35.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_35);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_36;
    FIX::InstrAttribType InstrAttribType_36(6);
    noInstrAttrib_0_1.set(InstrAttribType_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribType_36.getString());
    FIX::InstrAttribValue InstrAttribValue_36("STRING_450412590");
    noInstrAttrib_0_1.set(InstrAttribValue_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribValue_36.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_36);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_136;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_136("DATA_1504466819");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuer_136.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_136(1540547869);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuerLen_136.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_136("DATA_1695157460");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDesc_136.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_136(1284728231);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDescLen_136.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
    UnderlyingAdjustedQuantity_136.setString("10301716");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_136);
    UnderlyingInstrument_136.insert(UnderlyingAdjustedQuantity_136.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
    UnderlyingAllocationPercent_136.setString("38.090000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_136);
    UnderlyingInstrument_136.insert(UnderlyingAllocationPercent_136.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
    UnderlyingAttachmentPoint_136.setString("78.590000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingAttachmentPoint_136.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_136("STRING_651559697");
    noUnderlyings_0_0.set(UnderlyingCFICode_136);
    UnderlyingInstrument_136.insert(UnderlyingCFICode_136.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_136("STRING_1789146756");
    noUnderlyings_0_0.set(UnderlyingCPProgram_136);
    UnderlyingInstrument_136.insert(UnderlyingCPProgram_136.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_136("STRING_754851984");
    noUnderlyings_0_0.set(UnderlyingCPRegType_136);
    UnderlyingInstrument_136.insert(UnderlyingCPRegType_136.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_136;
    UnderlyingCapValue_136.setString("3567056");
    noUnderlyings_0_0.set(UnderlyingCapValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCapValue_136.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
    UnderlyingCashAmount_136.setString("882418");
    noUnderlyings_0_0.set(UnderlyingCashAmount_136);
    UnderlyingInstrument_136.insert(UnderlyingCashAmount_136.getString());
    FIX::UnderlyingCashType UnderlyingCashType_136("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_136);
    UnderlyingInstrument_136.insert(UnderlyingCashType_136.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
    UnderlyingContractMultiplier_136.setString("13688596");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplier_136.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_136(1200039490);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplierUnit_136.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_136("COUNTRY_1709024608");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingCountryOfIssue_136.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_136("LOCALMKTDATE_1383881547");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponPaymentDate_136.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
    UnderlyingCouponRate_136.setString("12.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponRate_136.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_136("STRING_187219855");
    noUnderlyings_0_0.set(UnderlyingCreditRating_136);
    UnderlyingInstrument_136.insert(UnderlyingCreditRating_136.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_136("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrency_136.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
    UnderlyingCurrentValue_136.setString("13134688");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrentValue_136.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
    UnderlyingDetachmentPoint_136.setString("96.330000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingDetachmentPoint_136.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
    UnderlyingDirtyPrice_136.setString("13614467");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingDirtyPrice_136.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
    UnderlyingEndPrice_136.setString("8311383");
    noUnderlyings_0_0.set(UnderlyingEndPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingEndPrice_136.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_136;
    UnderlyingEndValue_136.setString("4665307");
    noUnderlyings_0_0.set(UnderlyingEndValue_136);
    UnderlyingInstrument_136.insert(UnderlyingEndValue_136.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_136(1484800185);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_136);
    UnderlyingInstrument_136.insert(UnderlyingExerciseStyle_136.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_136;
    UnderlyingFXRate_136.setString("1756608");
    noUnderlyings_0_0.set(UnderlyingFXRate_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRate_136.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_136('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRateCalc_136.getString());
    FIX::UnderlyingFactor UnderlyingFactor_136;
    UnderlyingFactor_136.setString("19352127");
    noUnderlyings_0_0.set(UnderlyingFactor_136);
    UnderlyingInstrument_136.insert(UnderlyingFactor_136.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_136(563388698);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_136);
    UnderlyingInstrument_136.insert(UnderlyingFlowScheduleType_136.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_136("STRING_744748847");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_136);
    UnderlyingInstrument_136.insert(UnderlyingInstrRegistry_136.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_136("LOCALMKTDATE_1328276997");
    noUnderlyings_0_0.set(UnderlyingIssueDate_136);
    UnderlyingInstrument_136.insert(UnderlyingIssueDate_136.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_136("STRING_111062511");
    noUnderlyings_0_0.set(UnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(UnderlyingIssuer_136.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_136("STRING_2029477078");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingLocaleOfIssue_136.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_136("LOCALMKTDATE_210965038");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityDate_136.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_136("MONTHYEAR_1283196320");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityMonthYear_136.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_136("TZTIMEONLY_1468281290");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityTime_136.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
    UnderlyingNotionalPercentageOutstanding_136.setString("47.350000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_136('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_136);
    UnderlyingInstrument_136.insert(UnderlyingOptAttribute_136.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
    UnderlyingOriginalNotionalPercentageOutstanding_136.setString("96.260000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingOriginalNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_136("STRING_1219230433");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasure_136.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
    UnderlyingPriceUnitOfMeasureQty_136.setString("10131012");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasureQty_136.getString());
    FIX::UnderlyingProduct UnderlyingProduct_136(1150624183);
    noUnderlyings_0_0.set(UnderlyingProduct_136);
    UnderlyingInstrument_136.insert(UnderlyingProduct_136.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_136(440606477);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_136);
    UnderlyingInstrument_136.insert(UnderlyingPutOrCall_136.getString());
    FIX::UnderlyingPx UnderlyingPx_136;
    UnderlyingPx_136.setString("656570");
    noUnderlyings_0_0.set(UnderlyingPx_136);
    UnderlyingInstrument_136.insert(UnderlyingPx_136.getString());
    FIX::UnderlyingQty UnderlyingQty_136;
    UnderlyingQty_136.setString("7121651");
    noUnderlyings_0_0.set(UnderlyingQty_136);
    UnderlyingInstrument_136.insert(UnderlyingQty_136.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_136("LOCALMKTDATE_1824488024");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_136);
    UnderlyingInstrument_136.insert(UnderlyingRedemptionDate_136.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_136("STRING_617018356");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingRepoCollateralSecurityType_136.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
    UnderlyingRepurchaseRate_136.setString("49.990000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseRate_136.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_136(1088381157);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseTerm_136.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_136("STRING_401155961");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_136);
    UnderlyingInstrument_136.insert(UnderlyingRestructuringType_136.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_136("STRING_65370223");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityDesc_136.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_136("EXCHANGE_1818080790");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityExchange_136.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_136("STRING_1762602684");
    noUnderlyings_0_0.set(UnderlyingSecurityID_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityID_136.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_136("STRING_896508523");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityIDSource_136.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_136("STRING_137127882");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecuritySubType_136.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_136("STRING_1099919221");
    noUnderlyings_0_0.set(UnderlyingSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityType_136.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_136("STRING_1072169410");
    noUnderlyings_0_0.set(UnderlyingSeniority_136);
    UnderlyingInstrument_136.insert(UnderlyingSeniority_136.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_136("STRING_1524893558");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlMethod_136.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_136(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlementType_136.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_136;
    UnderlyingStartValue_136.setString("16355581");
    noUnderlyings_0_0.set(UnderlyingStartValue_136);
    UnderlyingInstrument_136.insert(UnderlyingStartValue_136.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_136("STRING_122158758");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingStateOrProvinceOfIssue_136.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_136("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikeCurrency_136.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
    UnderlyingStrikePrice_136.setString("41521");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikePrice_136.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_136("STRING_279406737");
    noUnderlyings_0_0.set(UnderlyingSymbol_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbol_136.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_136("STRING_882333292");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbolSfx_136.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_136("STRING_1472433478");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingTimeUnit_136.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_136("STRING_1141931473");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasure_136.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
    UnderlyingUnitOfMeasureQty_136.setString("18071927");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasureQty_136.getString());
    all_values.push_back(UnderlyingInstrument_136);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_277("STRING_213678258");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltID_277.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_277("STRING_672810320");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltIDSource_277.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_278("STRING_551223640");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltID_278.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_278("STRING_654284735");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltIDSource_278.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_279("STRING_738467410");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltID_279.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_279("STRING_1263388783");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltIDSource_279.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
      FIX::UnderlyingStipType UnderlyingStipType_255("STRING_1355485766");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipType_255.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_255("STRING_15290134");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipValue_255.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_279;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_279("STRING_1756641727");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyID_279.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_279('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyIDSource_279.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_279(1090267411);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyRole_279.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_279);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_526("STRING_977168880");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubID_526.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_526(1227395293);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubIDType_526.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_527("STRING_324196337");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubID_527.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_527(2049338290);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubIDType_527.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_528("STRING_604805204");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubID_528.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_528(1211844686);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubIDType_528.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_137;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_137("DATA_1537412751");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuer_137.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_137(726963962);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuerLen_137.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_137("DATA_1280286385");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDesc_137.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_137(1136549722);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDescLen_137.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_137;
    UnderlyingAdjustedQuantity_137.setString("7311161");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_137);
    UnderlyingInstrument_137.insert(UnderlyingAdjustedQuantity_137.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_137;
    UnderlyingAllocationPercent_137.setString("31.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_137);
    UnderlyingInstrument_137.insert(UnderlyingAllocationPercent_137.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_137;
    UnderlyingAttachmentPoint_137.setString("30.140000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingAttachmentPoint_137.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_137("STRING_56065981");
    noUnderlyings_0_1.set(UnderlyingCFICode_137);
    UnderlyingInstrument_137.insert(UnderlyingCFICode_137.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_137("STRING_554140948");
    noUnderlyings_0_1.set(UnderlyingCPProgram_137);
    UnderlyingInstrument_137.insert(UnderlyingCPProgram_137.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_137("STRING_1678592087");
    noUnderlyings_0_1.set(UnderlyingCPRegType_137);
    UnderlyingInstrument_137.insert(UnderlyingCPRegType_137.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_137;
    UnderlyingCapValue_137.setString("16041490");
    noUnderlyings_0_1.set(UnderlyingCapValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCapValue_137.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_137;
    UnderlyingCashAmount_137.setString("7678192");
    noUnderlyings_0_1.set(UnderlyingCashAmount_137);
    UnderlyingInstrument_137.insert(UnderlyingCashAmount_137.getString());
    FIX::UnderlyingCashType UnderlyingCashType_137("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_137);
    UnderlyingInstrument_137.insert(UnderlyingCashType_137.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_137;
    UnderlyingContractMultiplier_137.setString("78890");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplier_137.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_137(1422103941);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplierUnit_137.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_137("COUNTRY_942386169");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingCountryOfIssue_137.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_137("LOCALMKTDATE_1271277861");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponPaymentDate_137.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_137;
    UnderlyingCouponRate_137.setString("30.530000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponRate_137.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_137("STRING_150388287");
    noUnderlyings_0_1.set(UnderlyingCreditRating_137);
    UnderlyingInstrument_137.insert(UnderlyingCreditRating_137.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_137("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrency_137.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_137;
    UnderlyingCurrentValue_137.setString("19070300");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrentValue_137.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_137;
    UnderlyingDetachmentPoint_137.setString("83.530000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingDetachmentPoint_137.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_137;
    UnderlyingDirtyPrice_137.setString("21158470");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingDirtyPrice_137.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_137;
    UnderlyingEndPrice_137.setString("11313071");
    noUnderlyings_0_1.set(UnderlyingEndPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingEndPrice_137.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_137;
    UnderlyingEndValue_137.setString("1969135");
    noUnderlyings_0_1.set(UnderlyingEndValue_137);
    UnderlyingInstrument_137.insert(UnderlyingEndValue_137.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_137(1195758731);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_137);
    UnderlyingInstrument_137.insert(UnderlyingExerciseStyle_137.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_137;
    UnderlyingFXRate_137.setString("14555034");
    noUnderlyings_0_1.set(UnderlyingFXRate_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRate_137.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_137('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRateCalc_137.getString());
    FIX::UnderlyingFactor UnderlyingFactor_137;
    UnderlyingFactor_137.setString("18005639");
    noUnderlyings_0_1.set(UnderlyingFactor_137);
    UnderlyingInstrument_137.insert(UnderlyingFactor_137.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_137(519864506);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_137);
    UnderlyingInstrument_137.insert(UnderlyingFlowScheduleType_137.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_137("STRING_1636180979");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_137);
    UnderlyingInstrument_137.insert(UnderlyingInstrRegistry_137.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_137("LOCALMKTDATE_380044249");
    noUnderlyings_0_1.set(UnderlyingIssueDate_137);
    UnderlyingInstrument_137.insert(UnderlyingIssueDate_137.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_137("STRING_1800150891");
    noUnderlyings_0_1.set(UnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(UnderlyingIssuer_137.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_137("STRING_625247054");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingLocaleOfIssue_137.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_137("LOCALMKTDATE_1111160399");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityDate_137.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_137("MONTHYEAR_1212360366");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityMonthYear_137.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_137("TZTIMEONLY_496646420");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityTime_137.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_137;
    UnderlyingNotionalPercentageOutstanding_137.setString("63.800000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_137('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_137);
    UnderlyingInstrument_137.insert(UnderlyingOptAttribute_137.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_137;
    UnderlyingOriginalNotionalPercentageOutstanding_137.setString("48.590000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingOriginalNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_137("STRING_623891818");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasure_137.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_137;
    UnderlyingPriceUnitOfMeasureQty_137.setString("3868368");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasureQty_137.getString());
    FIX::UnderlyingProduct UnderlyingProduct_137(231673618);
    noUnderlyings_0_1.set(UnderlyingProduct_137);
    UnderlyingInstrument_137.insert(UnderlyingProduct_137.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_137(631780896);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_137);
    UnderlyingInstrument_137.insert(UnderlyingPutOrCall_137.getString());
    FIX::UnderlyingPx UnderlyingPx_137;
    UnderlyingPx_137.setString("18089408");
    noUnderlyings_0_1.set(UnderlyingPx_137);
    UnderlyingInstrument_137.insert(UnderlyingPx_137.getString());
    FIX::UnderlyingQty UnderlyingQty_137;
    UnderlyingQty_137.setString("11740597");
    noUnderlyings_0_1.set(UnderlyingQty_137);
    UnderlyingInstrument_137.insert(UnderlyingQty_137.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_137("LOCALMKTDATE_1903058758");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_137);
    UnderlyingInstrument_137.insert(UnderlyingRedemptionDate_137.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_137("STRING_1414850219");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingRepoCollateralSecurityType_137.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_137;
    UnderlyingRepurchaseRate_137.setString("80.750000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseRate_137.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_137(1042143106);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseTerm_137.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_137("STRING_292946246");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_137);
    UnderlyingInstrument_137.insert(UnderlyingRestructuringType_137.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_137("STRING_1083994442");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityDesc_137.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_137("EXCHANGE_261887811");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityExchange_137.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_137("STRING_261309683");
    noUnderlyings_0_1.set(UnderlyingSecurityID_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityID_137.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_137("STRING_67817924");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityIDSource_137.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_137("STRING_458801397");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecuritySubType_137.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_137("STRING_1457068414");
    noUnderlyings_0_1.set(UnderlyingSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityType_137.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_137("STRING_1523321392");
    noUnderlyings_0_1.set(UnderlyingSeniority_137);
    UnderlyingInstrument_137.insert(UnderlyingSeniority_137.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_137("STRING_557569626");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlMethod_137.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_137(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlementType_137.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_137;
    UnderlyingStartValue_137.setString("20431858");
    noUnderlyings_0_1.set(UnderlyingStartValue_137);
    UnderlyingInstrument_137.insert(UnderlyingStartValue_137.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_137("STRING_46266957");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingStateOrProvinceOfIssue_137.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_137("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikeCurrency_137.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_137;
    UnderlyingStrikePrice_137.setString("6715140");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikePrice_137.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_137("STRING_453869702");
    noUnderlyings_0_1.set(UnderlyingSymbol_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbol_137.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_137("STRING_760729860");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbolSfx_137.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_137("STRING_1168160432");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingTimeUnit_137.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_137("STRING_1621096082");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasure_137.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_137;
    UnderlyingUnitOfMeasureQty_137.setString("3797475");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasureQty_137.getString());
    all_values.push_back(UnderlyingInstrument_137);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_280("STRING_97504253");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltID_280.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_280("STRING_766584399");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltIDSource_280.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_281("STRING_1427588910");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltID_281.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_281("STRING_729285149");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltIDSource_281.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
      FIX::UnderlyingStipType UnderlyingStipType_256("STRING_454165049");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipType_256.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_256("STRING_484860259");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipValue_256.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
      FIX::UnderlyingStipType UnderlyingStipType_257("STRING_1842891784");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipType_257.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_257("STRING_1778613124");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipValue_257.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
      FIX::UnderlyingStipType UnderlyingStipType_258("STRING_1527003365");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_258);
      UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipType_258.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_258("STRING_2135838030");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_258);
      UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipValue_258.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_280;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_280("STRING_1788891177");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyID_280.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_280('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyIDSource_280.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_280(782941843);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyRole_280.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_280);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_529("STRING_1706732480");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubID_529.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_529(158779587);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubIDType_529.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_530("STRING_657778552");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubID_530.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_530(669397534);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubIDType_530.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_281;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_281("STRING_54481837");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyID_281.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_281('7');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyIDSource_281.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_281(12106836);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyRole_281.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_281);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_531("STRING_1375559521");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubID_531.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_531(465976538);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubIDType_531.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_532("STRING_363581190");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubID_532.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_532(396236305);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubIDType_532.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_533("STRING_2087072621");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubID_533.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_533(743328717);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubIDType_533.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_138;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_138("DATA_1592151597");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuer_138.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_138(37093226);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuerLen_138.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_138("DATA_1509913116");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDesc_138.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_138(872256859);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDescLen_138.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_138;
    UnderlyingAdjustedQuantity_138.setString("7663783");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_138);
    UnderlyingInstrument_138.insert(UnderlyingAdjustedQuantity_138.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_138;
    UnderlyingAllocationPercent_138.setString("46.810000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_138);
    UnderlyingInstrument_138.insert(UnderlyingAllocationPercent_138.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_138;
    UnderlyingAttachmentPoint_138.setString("19.080000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingAttachmentPoint_138.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_138("STRING_1251238635");
    noUnderlyings_0_2.set(UnderlyingCFICode_138);
    UnderlyingInstrument_138.insert(UnderlyingCFICode_138.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_138("STRING_1633362817");
    noUnderlyings_0_2.set(UnderlyingCPProgram_138);
    UnderlyingInstrument_138.insert(UnderlyingCPProgram_138.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_138("STRING_957551385");
    noUnderlyings_0_2.set(UnderlyingCPRegType_138);
    UnderlyingInstrument_138.insert(UnderlyingCPRegType_138.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_138;
    UnderlyingCapValue_138.setString("6307583");
    noUnderlyings_0_2.set(UnderlyingCapValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCapValue_138.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_138;
    UnderlyingCashAmount_138.setString("16217172");
    noUnderlyings_0_2.set(UnderlyingCashAmount_138);
    UnderlyingInstrument_138.insert(UnderlyingCashAmount_138.getString());
    FIX::UnderlyingCashType UnderlyingCashType_138("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_138);
    UnderlyingInstrument_138.insert(UnderlyingCashType_138.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_138;
    UnderlyingContractMultiplier_138.setString("2721658");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplier_138.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_138(1871381266);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplierUnit_138.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_138("COUNTRY_308133498");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingCountryOfIssue_138.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_138("LOCALMKTDATE_372374808");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponPaymentDate_138.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_138;
    UnderlyingCouponRate_138.setString("0.980000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponRate_138.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_138("STRING_466913085");
    noUnderlyings_0_2.set(UnderlyingCreditRating_138);
    UnderlyingInstrument_138.insert(UnderlyingCreditRating_138.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_138("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrency_138.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_138;
    UnderlyingCurrentValue_138.setString("5213949");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrentValue_138.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_138;
    UnderlyingDetachmentPoint_138.setString("88.700000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingDetachmentPoint_138.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_138;
    UnderlyingDirtyPrice_138.setString("21121344");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingDirtyPrice_138.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_138;
    UnderlyingEndPrice_138.setString("1242462");
    noUnderlyings_0_2.set(UnderlyingEndPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingEndPrice_138.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_138;
    UnderlyingEndValue_138.setString("9622747");
    noUnderlyings_0_2.set(UnderlyingEndValue_138);
    UnderlyingInstrument_138.insert(UnderlyingEndValue_138.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_138(430627359);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_138);
    UnderlyingInstrument_138.insert(UnderlyingExerciseStyle_138.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_138;
    UnderlyingFXRate_138.setString("4878274");
    noUnderlyings_0_2.set(UnderlyingFXRate_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRate_138.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_138('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRateCalc_138.getString());
    FIX::UnderlyingFactor UnderlyingFactor_138;
    UnderlyingFactor_138.setString("3702163");
    noUnderlyings_0_2.set(UnderlyingFactor_138);
    UnderlyingInstrument_138.insert(UnderlyingFactor_138.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_138(1231156160);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_138);
    UnderlyingInstrument_138.insert(UnderlyingFlowScheduleType_138.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_138("STRING_803178998");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_138);
    UnderlyingInstrument_138.insert(UnderlyingInstrRegistry_138.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_138("LOCALMKTDATE_407309558");
    noUnderlyings_0_2.set(UnderlyingIssueDate_138);
    UnderlyingInstrument_138.insert(UnderlyingIssueDate_138.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_138("STRING_593585628");
    noUnderlyings_0_2.set(UnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(UnderlyingIssuer_138.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_138("STRING_1675435857");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingLocaleOfIssue_138.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_138("LOCALMKTDATE_1173687934");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityDate_138.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_138("MONTHYEAR_384056661");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityMonthYear_138.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_138("TZTIMEONLY_854374118");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityTime_138.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_138;
    UnderlyingNotionalPercentageOutstanding_138.setString("29.210000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_138('2');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_138);
    UnderlyingInstrument_138.insert(UnderlyingOptAttribute_138.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_138;
    UnderlyingOriginalNotionalPercentageOutstanding_138.setString("55.030000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingOriginalNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_138("STRING_908201273");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasure_138.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_138;
    UnderlyingPriceUnitOfMeasureQty_138.setString("14916530");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasureQty_138.getString());
    FIX::UnderlyingProduct UnderlyingProduct_138(1337117158);
    noUnderlyings_0_2.set(UnderlyingProduct_138);
    UnderlyingInstrument_138.insert(UnderlyingProduct_138.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_138(1180367155);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_138);
    UnderlyingInstrument_138.insert(UnderlyingPutOrCall_138.getString());
    FIX::UnderlyingPx UnderlyingPx_138;
    UnderlyingPx_138.setString("12155506");
    noUnderlyings_0_2.set(UnderlyingPx_138);
    UnderlyingInstrument_138.insert(UnderlyingPx_138.getString());
    FIX::UnderlyingQty UnderlyingQty_138;
    UnderlyingQty_138.setString("16452506");
    noUnderlyings_0_2.set(UnderlyingQty_138);
    UnderlyingInstrument_138.insert(UnderlyingQty_138.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_138("LOCALMKTDATE_1552741963");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_138);
    UnderlyingInstrument_138.insert(UnderlyingRedemptionDate_138.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_138("STRING_498697099");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingRepoCollateralSecurityType_138.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_138;
    UnderlyingRepurchaseRate_138.setString("37.420000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseRate_138.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_138(435411675);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseTerm_138.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_138("STRING_451241084");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_138);
    UnderlyingInstrument_138.insert(UnderlyingRestructuringType_138.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_138("STRING_486075017");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityDesc_138.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_138("EXCHANGE_22126898");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityExchange_138.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_138("STRING_415891905");
    noUnderlyings_0_2.set(UnderlyingSecurityID_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityID_138.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_138("STRING_610321270");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityIDSource_138.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_138("STRING_984401642");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecuritySubType_138.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_138("STRING_846519264");
    noUnderlyings_0_2.set(UnderlyingSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityType_138.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_138("STRING_1098148713");
    noUnderlyings_0_2.set(UnderlyingSeniority_138);
    UnderlyingInstrument_138.insert(UnderlyingSeniority_138.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_138("STRING_195429043");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlMethod_138.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_138(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlementType_138.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_138;
    UnderlyingStartValue_138.setString("1818212");
    noUnderlyings_0_2.set(UnderlyingStartValue_138);
    UnderlyingInstrument_138.insert(UnderlyingStartValue_138.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_138("STRING_998608042");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingStateOrProvinceOfIssue_138.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_138("JPY");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikeCurrency_138.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_138;
    UnderlyingStrikePrice_138.setString("5265602");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikePrice_138.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_138("STRING_650249441");
    noUnderlyings_0_2.set(UnderlyingSymbol_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbol_138.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_138("STRING_1159463516");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbolSfx_138.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_138("STRING_1380934369");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingTimeUnit_138.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_138("STRING_927692362");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasure_138.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_138;
    UnderlyingUnitOfMeasureQty_138.setString("10293993");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasureQty_138.getString());
    all_values.push_back(UnderlyingInstrument_138);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_282("STRING_1835893636");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltID_282.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_282("STRING_373568730");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltIDSource_282.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_283("STRING_235009735");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltID_283.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_283("STRING_868777143");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltIDSource_283.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
      FIX::UnderlyingStipType UnderlyingStipType_259("STRING_1880260392");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_259);
      UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipType_259.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_259("STRING_274035458");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_259);
      UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipValue_259.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
      FIX::UnderlyingStipType UnderlyingStipType_260("STRING_2087816478");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_260);
      UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipType_260.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_260("STRING_1844940486");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_260);
      UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipValue_260.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
      FIX::UnderlyingStipType UnderlyingStipType_261("STRING_709447133");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_261);
      UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipType_261.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_261("STRING_391573914");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_261);
      UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipValue_261.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_282;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_282("STRING_731574031");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyID_282.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_282('8');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyIDSource_282.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_282(793853125);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyRole_282.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_282);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_534("STRING_1653985084");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubID_534.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_534(1892001839);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubIDType_534.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
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
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
