#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_0;
  FIX::Account Account_32("STRING_1376990361");
  msg.set(Account_32);
  PositionReport_0.insert(Account_32.getString());
  FIX::AccountType AccountType_27(6);
  msg.set(AccountType_27);
  PositionReport_0.insert(AccountType_27.getString());
  FIX::AcctIDSource AcctIDSource_25(1);
  msg.set(AcctIDSource_25);
  PositionReport_0.insert(AcctIDSource_25.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_17("LOCALMKTDATE_2004987639");
  msg.set(ClearingBusinessDate_17);
  PositionReport_0.insert(ClearingBusinessDate_17.getString());
  FIX::Currency Currency_54("EUR");
  msg.set(Currency_54);
  PositionReport_0.insert(Currency_54.getString());
  FIX::DeliveryDate DeliveryDate_0("LOCALMKTDATE_2138844104");
  msg.set(DeliveryDate_0);
  PositionReport_0.insert(DeliveryDate_0.getString());
  FIX::EncodedText EncodedText_74("DATA_382236792");
  msg.set(EncodedText_74);
  PositionReport_0.insert(EncodedText_74.getString());
  FIX::EncodedTextLen EncodedTextLen_74(1867997594);
  msg.set(EncodedTextLen_74);
  PositionReport_0.insert(EncodedTextLen_74.getString());
  FIX::MatchStatus MatchStatus_7('2');
  msg.set(MatchStatus_7);
  PositionReport_0.insert(MatchStatus_7.getString());
  FIX::MessageEventSource MessageEventSource_3("STRING_142370254");
  msg.set(MessageEventSource_3);
  PositionReport_0.insert(MessageEventSource_3.getString());
  FIX::ModelType ModelType_0(1);
  msg.set(ModelType_0);
  PositionReport_0.insert(ModelType_0.getString());
  FIX::PosMaintRptID PosMaintRptID_2("STRING_2142376687");
  msg.set(PosMaintRptID_2);
  PositionReport_0.insert(PosMaintRptID_2.getString());
  FIX::PosReqID PosReqID_3("STRING_1826433018");
  msg.set(PosReqID_3);
  PositionReport_0.insert(PosReqID_3.getString());
  FIX::PosReqResult PosReqResult_0(2);
  msg.set(PosReqResult_0);
  PositionReport_0.insert(PosReqResult_0.getString());
  FIX::PosReqType PosReqType_1(6);
  msg.set(PosReqType_1);
  PositionReport_0.insert(PosReqType_1.getString());
  FIX::PriceDelta PriceDelta_4;
  PriceDelta_4.setString("4621728");
  msg.set(PriceDelta_4);
  PositionReport_0.insert(PriceDelta_4.getString());
  FIX::PriceType PriceType_35(10);
  msg.set(PriceType_35);
  PositionReport_0.insert(PriceType_35.getString());
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("15927256");
  msg.set(PriorSettlPrice_2);
  PositionReport_0.insert(PriorSettlPrice_2.getString());
  FIX::RegistStatus RegistStatus_0('A');
  msg.set(RegistStatus_0);
  PositionReport_0.insert(RegistStatus_0.getString());
  FIX::SettlCurrency SettlCurrency_24("USD");
  msg.set(SettlCurrency_24);
  PositionReport_0.insert(SettlCurrency_24.getString());
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("7757978");
  msg.set(SettlPrice_2);
  PositionReport_0.insert(SettlPrice_2.getString());
  FIX::SettlPriceType SettlPriceType_1(2);
  msg.set(SettlPriceType_1);
  PositionReport_0.insert(SettlPriceType_1.getString());
  FIX::SettlSessID SettlSessID_9("STRING_ETH");
  msg.set(SettlSessID_9);
  PositionReport_0.insert(SettlSessID_9.getString());
  FIX::SettlSessSubID SettlSessSubID_8("STRING_1249725984");
  msg.set(SettlSessSubID_8);
  PositionReport_0.insert(SettlSessSubID_8.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_4('0');
  msg.set(SubscriptionRequestType_4);
  PositionReport_0.insert(SubscriptionRequestType_4.getString());
  FIX::Text Text_74("STRING_1363231945");
  msg.set(Text_74);
  PositionReport_0.insert(Text_74.getString());
  FIX::TotalNumPosReports TotalNumPosReports_0(813067996);
  msg.set(TotalNumPosReports_0);
  PositionReport_0.insert(TotalNumPosReports_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_0(false);
  msg.set(UnsolicitedIndicator_0);
  PositionReport_0.insert(UnsolicitedIndicator_0.getString());
  all_values.push_back(PositionReport_0);

  all_compo_names.insert("PositionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  FIX::ApplID ApplID_11("STRING_534025097");
  msg.set(ApplID_11);
  ApplicationSequenceControl_11.insert(ApplID_11.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_11(42574709);
  msg.set(ApplLastSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplLastSeqNum_11.getString());
  FIX::ApplResendFlag ApplResendFlag_11(true);
  msg.set(ApplResendFlag_11);
  ApplicationSequenceControl_11.insert(ApplResendFlag_11.getString());
  FIX::ApplSeqNum ApplSeqNum_11(1885261728);
  msg.set(ApplSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplSeqNum_11.getString());
  all_values.push_back(ApplicationSequenceControl_11);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_96;
    FIX::EncodedLegIssuer EncodedLegIssuer_96("DATA_75611244");
    noLegs_0_0.set(EncodedLegIssuer_96);
    InstrumentLeg_96.insert(EncodedLegIssuer_96.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_96(167051159);
    noLegs_0_0.set(EncodedLegIssuerLen_96);
    InstrumentLeg_96.insert(EncodedLegIssuerLen_96.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_96("DATA_2038922805");
    noLegs_0_0.set(EncodedLegSecurityDesc_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDesc_96.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_96(457848036);
    noLegs_0_0.set(EncodedLegSecurityDescLen_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDescLen_96.getString());
    FIX::LegCFICode LegCFICode_96("STRING_2035048753");
    noLegs_0_0.set(LegCFICode_96);
    InstrumentLeg_96.insert(LegCFICode_96.getString());
    FIX::LegContractMultiplier LegContractMultiplier_96;
    LegContractMultiplier_96.setString("14208324");
    noLegs_0_0.set(LegContractMultiplier_96);
    InstrumentLeg_96.insert(LegContractMultiplier_96.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_96(600218290);
    noLegs_0_0.set(LegContractMultiplierUnit_96);
    InstrumentLeg_96.insert(LegContractMultiplierUnit_96.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_96("MONTHYEAR_1165182315");
    noLegs_0_0.set(LegContractSettlMonth_96);
    InstrumentLeg_96.insert(LegContractSettlMonth_96.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_96("COUNTRY_1415725538");
    noLegs_0_0.set(LegCountryOfIssue_96);
    InstrumentLeg_96.insert(LegCountryOfIssue_96.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_96("LOCALMKTDATE_279167660");
    noLegs_0_0.set(LegCouponPaymentDate_96);
    InstrumentLeg_96.insert(LegCouponPaymentDate_96.getString());
    FIX::LegCouponRate LegCouponRate_96;
    LegCouponRate_96.setString("57.250000");
    noLegs_0_0.set(LegCouponRate_96);
    InstrumentLeg_96.insert(LegCouponRate_96.getString());
    FIX::LegCreditRating LegCreditRating_96("STRING_927825528");
    noLegs_0_0.set(LegCreditRating_96);
    InstrumentLeg_96.insert(LegCreditRating_96.getString());
    FIX::LegCurrency LegCurrency_96("USD");
    noLegs_0_0.set(LegCurrency_96);
    InstrumentLeg_96.insert(LegCurrency_96.getString());
    FIX::LegDatedDate LegDatedDate_96("LOCALMKTDATE_373067491");
    noLegs_0_0.set(LegDatedDate_96);
    InstrumentLeg_96.insert(LegDatedDate_96.getString());
    FIX::LegExerciseStyle LegExerciseStyle_96(1931021816);
    noLegs_0_0.set(LegExerciseStyle_96);
    InstrumentLeg_96.insert(LegExerciseStyle_96.getString());
    FIX::LegFactor LegFactor_96;
    LegFactor_96.setString("15148584");
    noLegs_0_0.set(LegFactor_96);
    InstrumentLeg_96.insert(LegFactor_96.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_96(482373092);
    noLegs_0_0.set(LegFlowScheduleType_96);
    InstrumentLeg_96.insert(LegFlowScheduleType_96.getString());
    FIX::LegInstrRegistry LegInstrRegistry_96("STRING_559336007");
    noLegs_0_0.set(LegInstrRegistry_96);
    InstrumentLeg_96.insert(LegInstrRegistry_96.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_96("LOCALMKTDATE_1845575042");
    noLegs_0_0.set(LegInterestAccrualDate_96);
    InstrumentLeg_96.insert(LegInterestAccrualDate_96.getString());
    FIX::LegIssueDate LegIssueDate_96("LOCALMKTDATE_185512842");
    noLegs_0_0.set(LegIssueDate_96);
    InstrumentLeg_96.insert(LegIssueDate_96.getString());
    FIX::LegIssuer LegIssuer_96("STRING_1809061992");
    noLegs_0_0.set(LegIssuer_96);
    InstrumentLeg_96.insert(LegIssuer_96.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_96("STRING_1013169358");
    noLegs_0_0.set(LegLocaleOfIssue_96);
    InstrumentLeg_96.insert(LegLocaleOfIssue_96.getString());
    FIX::LegMaturityDate LegMaturityDate_96("LOCALMKTDATE_1548744788");
    noLegs_0_0.set(LegMaturityDate_96);
    InstrumentLeg_96.insert(LegMaturityDate_96.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_96("MONTHYEAR_474646340");
    noLegs_0_0.set(LegMaturityMonthYear_96);
    InstrumentLeg_96.insert(LegMaturityMonthYear_96.getString());
    FIX::LegMaturityTime LegMaturityTime_96("TZTIMEONLY_1503136625");
    noLegs_0_0.set(LegMaturityTime_96);
    InstrumentLeg_96.insert(LegMaturityTime_96.getString());
    FIX::LegOptAttribute LegOptAttribute_96('2');
    noLegs_0_0.set(LegOptAttribute_96);
    InstrumentLeg_96.insert(LegOptAttribute_96.getString());
    FIX::LegOptionRatio LegOptionRatio_96;
    LegOptionRatio_96.setString("5172210");
    noLegs_0_0.set(LegOptionRatio_96);
    InstrumentLeg_96.insert(LegOptionRatio_96.getString());
    FIX::LegPool LegPool_96("STRING_58403721");
    noLegs_0_0.set(LegPool_96);
    InstrumentLeg_96.insert(LegPool_96.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_96("STRING_1820547965");
    noLegs_0_0.set(LegPriceUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasure_96.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
    LegPriceUnitOfMeasureQty_96.setString("4172997");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasureQty_96.getString());
    FIX::LegProduct LegProduct_96(134014965);
    noLegs_0_0.set(LegProduct_96);
    InstrumentLeg_96.insert(LegProduct_96.getString());
    FIX::LegPutOrCall LegPutOrCall_96(1987599124);
    noLegs_0_0.set(LegPutOrCall_96);
    InstrumentLeg_96.insert(LegPutOrCall_96.getString());
    FIX::LegRatioQty LegRatioQty_96;
    LegRatioQty_96.setString("3087389");
    noLegs_0_0.set(LegRatioQty_96);
    InstrumentLeg_96.insert(LegRatioQty_96.getString());
    FIX::LegRedemptionDate LegRedemptionDate_96("LOCALMKTDATE_591863001");
    noLegs_0_0.set(LegRedemptionDate_96);
    InstrumentLeg_96.insert(LegRedemptionDate_96.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_96("STRING_1875164230");
    noLegs_0_0.set(LegRepoCollateralSecurityType_96);
    InstrumentLeg_96.insert(LegRepoCollateralSecurityType_96.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_96;
    LegRepurchaseRate_96.setString("14.050000");
    noLegs_0_0.set(LegRepurchaseRate_96);
    InstrumentLeg_96.insert(LegRepurchaseRate_96.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_96(1192081291);
    noLegs_0_0.set(LegRepurchaseTerm_96);
    InstrumentLeg_96.insert(LegRepurchaseTerm_96.getString());
    FIX::LegSecurityDesc LegSecurityDesc_96("STRING_892862897");
    noLegs_0_0.set(LegSecurityDesc_96);
    InstrumentLeg_96.insert(LegSecurityDesc_96.getString());
    FIX::LegSecurityExchange LegSecurityExchange_96("EXCHANGE_997813295");
    noLegs_0_0.set(LegSecurityExchange_96);
    InstrumentLeg_96.insert(LegSecurityExchange_96.getString());
    FIX::LegSecurityID LegSecurityID_96("STRING_1471248951");
    noLegs_0_0.set(LegSecurityID_96);
    InstrumentLeg_96.insert(LegSecurityID_96.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_96("STRING_2014378622");
    noLegs_0_0.set(LegSecurityIDSource_96);
    InstrumentLeg_96.insert(LegSecurityIDSource_96.getString());
    FIX::LegSecuritySubType LegSecuritySubType_96("STRING_1925638824");
    noLegs_0_0.set(LegSecuritySubType_96);
    InstrumentLeg_96.insert(LegSecuritySubType_96.getString());
    FIX::LegSecurityType LegSecurityType_96("STRING_65105847");
    noLegs_0_0.set(LegSecurityType_96);
    InstrumentLeg_96.insert(LegSecurityType_96.getString());
    FIX::LegSide LegSide_96('1');
    noLegs_0_0.set(LegSide_96);
    InstrumentLeg_96.insert(LegSide_96.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_96("STRING_151222667");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_96);
    InstrumentLeg_96.insert(LegStateOrProvinceOfIssue_96.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_96("GBP");
    noLegs_0_0.set(LegStrikeCurrency_96);
    InstrumentLeg_96.insert(LegStrikeCurrency_96.getString());
    FIX::LegStrikePrice LegStrikePrice_96;
    LegStrikePrice_96.setString("6335957");
    noLegs_0_0.set(LegStrikePrice_96);
    InstrumentLeg_96.insert(LegStrikePrice_96.getString());
    FIX::LegSymbol LegSymbol_96("STRING_407980023");
    noLegs_0_0.set(LegSymbol_96);
    InstrumentLeg_96.insert(LegSymbol_96.getString());
    FIX::LegSymbolSfx LegSymbolSfx_96("STRING_334473440");
    noLegs_0_0.set(LegSymbolSfx_96);
    InstrumentLeg_96.insert(LegSymbolSfx_96.getString());
    FIX::LegTimeUnit LegTimeUnit_96("STRING_819108602");
    noLegs_0_0.set(LegTimeUnit_96);
    InstrumentLeg_96.insert(LegTimeUnit_96.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_96("STRING_69558367");
    noLegs_0_0.set(LegUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegUnitOfMeasure_96.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
    LegUnitOfMeasureQty_96.setString("13476427");
    noLegs_0_0.set(LegUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegUnitOfMeasureQty_96.getString());
    all_values.push_back(InstrumentLeg_96);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
      FIX::LegSecurityAltID LegSecurityAltID_196("STRING_544204707");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_196);
      LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltID_196.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_196("STRING_703295775");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_196);
      LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltIDSource_196.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
      FIX::LegSecurityAltID LegSecurityAltID_197("STRING_155655979");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_197);
      LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltID_197.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_197("STRING_1061425756");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_197);
      LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltIDSource_197.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
      FIX::LegSecurityAltID LegSecurityAltID_198("STRING_761699497");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_198);
      LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltID_198.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_198("STRING_1976203945");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_198);
      LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltIDSource_198.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_97;
    FIX::EncodedLegIssuer EncodedLegIssuer_97("DATA_1478725506");
    noLegs_0_1.set(EncodedLegIssuer_97);
    InstrumentLeg_97.insert(EncodedLegIssuer_97.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_97(895714462);
    noLegs_0_1.set(EncodedLegIssuerLen_97);
    InstrumentLeg_97.insert(EncodedLegIssuerLen_97.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_97("DATA_1816319421");
    noLegs_0_1.set(EncodedLegSecurityDesc_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDesc_97.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_97(1787464412);
    noLegs_0_1.set(EncodedLegSecurityDescLen_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDescLen_97.getString());
    FIX::LegCFICode LegCFICode_97("STRING_1487577464");
    noLegs_0_1.set(LegCFICode_97);
    InstrumentLeg_97.insert(LegCFICode_97.getString());
    FIX::LegContractMultiplier LegContractMultiplier_97;
    LegContractMultiplier_97.setString("15440000");
    noLegs_0_1.set(LegContractMultiplier_97);
    InstrumentLeg_97.insert(LegContractMultiplier_97.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_97(1369552170);
    noLegs_0_1.set(LegContractMultiplierUnit_97);
    InstrumentLeg_97.insert(LegContractMultiplierUnit_97.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_97("MONTHYEAR_532175107");
    noLegs_0_1.set(LegContractSettlMonth_97);
    InstrumentLeg_97.insert(LegContractSettlMonth_97.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_97("COUNTRY_289379252");
    noLegs_0_1.set(LegCountryOfIssue_97);
    InstrumentLeg_97.insert(LegCountryOfIssue_97.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_97("LOCALMKTDATE_219881817");
    noLegs_0_1.set(LegCouponPaymentDate_97);
    InstrumentLeg_97.insert(LegCouponPaymentDate_97.getString());
    FIX::LegCouponRate LegCouponRate_97;
    LegCouponRate_97.setString("40.590000");
    noLegs_0_1.set(LegCouponRate_97);
    InstrumentLeg_97.insert(LegCouponRate_97.getString());
    FIX::LegCreditRating LegCreditRating_97("STRING_156274227");
    noLegs_0_1.set(LegCreditRating_97);
    InstrumentLeg_97.insert(LegCreditRating_97.getString());
    FIX::LegCurrency LegCurrency_97("GBP");
    noLegs_0_1.set(LegCurrency_97);
    InstrumentLeg_97.insert(LegCurrency_97.getString());
    FIX::LegDatedDate LegDatedDate_97("LOCALMKTDATE_1425281464");
    noLegs_0_1.set(LegDatedDate_97);
    InstrumentLeg_97.insert(LegDatedDate_97.getString());
    FIX::LegExerciseStyle LegExerciseStyle_97(149259661);
    noLegs_0_1.set(LegExerciseStyle_97);
    InstrumentLeg_97.insert(LegExerciseStyle_97.getString());
    FIX::LegFactor LegFactor_97;
    LegFactor_97.setString("19171739");
    noLegs_0_1.set(LegFactor_97);
    InstrumentLeg_97.insert(LegFactor_97.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_97(2061663510);
    noLegs_0_1.set(LegFlowScheduleType_97);
    InstrumentLeg_97.insert(LegFlowScheduleType_97.getString());
    FIX::LegInstrRegistry LegInstrRegistry_97("STRING_782855420");
    noLegs_0_1.set(LegInstrRegistry_97);
    InstrumentLeg_97.insert(LegInstrRegistry_97.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_97("LOCALMKTDATE_177670298");
    noLegs_0_1.set(LegInterestAccrualDate_97);
    InstrumentLeg_97.insert(LegInterestAccrualDate_97.getString());
    FIX::LegIssueDate LegIssueDate_97("LOCALMKTDATE_248653302");
    noLegs_0_1.set(LegIssueDate_97);
    InstrumentLeg_97.insert(LegIssueDate_97.getString());
    FIX::LegIssuer LegIssuer_97("STRING_1601964022");
    noLegs_0_1.set(LegIssuer_97);
    InstrumentLeg_97.insert(LegIssuer_97.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_97("STRING_247228665");
    noLegs_0_1.set(LegLocaleOfIssue_97);
    InstrumentLeg_97.insert(LegLocaleOfIssue_97.getString());
    FIX::LegMaturityDate LegMaturityDate_97("LOCALMKTDATE_1596296101");
    noLegs_0_1.set(LegMaturityDate_97);
    InstrumentLeg_97.insert(LegMaturityDate_97.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_97("MONTHYEAR_1822333764");
    noLegs_0_1.set(LegMaturityMonthYear_97);
    InstrumentLeg_97.insert(LegMaturityMonthYear_97.getString());
    FIX::LegMaturityTime LegMaturityTime_97("TZTIMEONLY_791433373");
    noLegs_0_1.set(LegMaturityTime_97);
    InstrumentLeg_97.insert(LegMaturityTime_97.getString());
    FIX::LegOptAttribute LegOptAttribute_97('1');
    noLegs_0_1.set(LegOptAttribute_97);
    InstrumentLeg_97.insert(LegOptAttribute_97.getString());
    FIX::LegOptionRatio LegOptionRatio_97;
    LegOptionRatio_97.setString("19779897");
    noLegs_0_1.set(LegOptionRatio_97);
    InstrumentLeg_97.insert(LegOptionRatio_97.getString());
    FIX::LegPool LegPool_97("STRING_1852859129");
    noLegs_0_1.set(LegPool_97);
    InstrumentLeg_97.insert(LegPool_97.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_97("STRING_913807725");
    noLegs_0_1.set(LegPriceUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasure_97.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
    LegPriceUnitOfMeasureQty_97.setString("18067100");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasureQty_97.getString());
    FIX::LegProduct LegProduct_97(1184100987);
    noLegs_0_1.set(LegProduct_97);
    InstrumentLeg_97.insert(LegProduct_97.getString());
    FIX::LegPutOrCall LegPutOrCall_97(1809522188);
    noLegs_0_1.set(LegPutOrCall_97);
    InstrumentLeg_97.insert(LegPutOrCall_97.getString());
    FIX::LegRatioQty LegRatioQty_97;
    LegRatioQty_97.setString("14755458");
    noLegs_0_1.set(LegRatioQty_97);
    InstrumentLeg_97.insert(LegRatioQty_97.getString());
    FIX::LegRedemptionDate LegRedemptionDate_97("LOCALMKTDATE_824081752");
    noLegs_0_1.set(LegRedemptionDate_97);
    InstrumentLeg_97.insert(LegRedemptionDate_97.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_97("STRING_1149616004");
    noLegs_0_1.set(LegRepoCollateralSecurityType_97);
    InstrumentLeg_97.insert(LegRepoCollateralSecurityType_97.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_97;
    LegRepurchaseRate_97.setString("21.700000");
    noLegs_0_1.set(LegRepurchaseRate_97);
    InstrumentLeg_97.insert(LegRepurchaseRate_97.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_97(46150274);
    noLegs_0_1.set(LegRepurchaseTerm_97);
    InstrumentLeg_97.insert(LegRepurchaseTerm_97.getString());
    FIX::LegSecurityDesc LegSecurityDesc_97("STRING_1681791111");
    noLegs_0_1.set(LegSecurityDesc_97);
    InstrumentLeg_97.insert(LegSecurityDesc_97.getString());
    FIX::LegSecurityExchange LegSecurityExchange_97("EXCHANGE_1161441422");
    noLegs_0_1.set(LegSecurityExchange_97);
    InstrumentLeg_97.insert(LegSecurityExchange_97.getString());
    FIX::LegSecurityID LegSecurityID_97("STRING_266032091");
    noLegs_0_1.set(LegSecurityID_97);
    InstrumentLeg_97.insert(LegSecurityID_97.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_97("STRING_1537731522");
    noLegs_0_1.set(LegSecurityIDSource_97);
    InstrumentLeg_97.insert(LegSecurityIDSource_97.getString());
    FIX::LegSecuritySubType LegSecuritySubType_97("STRING_1317715649");
    noLegs_0_1.set(LegSecuritySubType_97);
    InstrumentLeg_97.insert(LegSecuritySubType_97.getString());
    FIX::LegSecurityType LegSecurityType_97("STRING_264069085");
    noLegs_0_1.set(LegSecurityType_97);
    InstrumentLeg_97.insert(LegSecurityType_97.getString());
    FIX::LegSide LegSide_97('1');
    noLegs_0_1.set(LegSide_97);
    InstrumentLeg_97.insert(LegSide_97.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_97("STRING_595513465");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_97);
    InstrumentLeg_97.insert(LegStateOrProvinceOfIssue_97.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_97("CAN");
    noLegs_0_1.set(LegStrikeCurrency_97);
    InstrumentLeg_97.insert(LegStrikeCurrency_97.getString());
    FIX::LegStrikePrice LegStrikePrice_97;
    LegStrikePrice_97.setString("5096933");
    noLegs_0_1.set(LegStrikePrice_97);
    InstrumentLeg_97.insert(LegStrikePrice_97.getString());
    FIX::LegSymbol LegSymbol_97("STRING_1196184166");
    noLegs_0_1.set(LegSymbol_97);
    InstrumentLeg_97.insert(LegSymbol_97.getString());
    FIX::LegSymbolSfx LegSymbolSfx_97("STRING_1406138353");
    noLegs_0_1.set(LegSymbolSfx_97);
    InstrumentLeg_97.insert(LegSymbolSfx_97.getString());
    FIX::LegTimeUnit LegTimeUnit_97("STRING_758346630");
    noLegs_0_1.set(LegTimeUnit_97);
    InstrumentLeg_97.insert(LegTimeUnit_97.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_97("STRING_650664541");
    noLegs_0_1.set(LegUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegUnitOfMeasure_97.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
    LegUnitOfMeasureQty_97.setString("16533670");
    noLegs_0_1.set(LegUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegUnitOfMeasureQty_97.getString());
    all_values.push_back(InstrumentLeg_97);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
      FIX::LegSecurityAltID LegSecurityAltID_199("STRING_325514657");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_199);
      LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltID_199.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_199("STRING_297316744");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_199);
      LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltIDSource_199.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
      FIX::LegSecurityAltID LegSecurityAltID_200("STRING_359267311");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_200);
      LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltID_200.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_200("STRING_156020753");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_200);
      LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltIDSource_200.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
      FIX::LegSecurityAltID LegSecurityAltID_201("STRING_2692225");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_201);
      LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltID_201.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_201("STRING_1273075037");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_201);
      LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltIDSource_201.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_98;
    FIX::EncodedLegIssuer EncodedLegIssuer_98("DATA_1962730794");
    noLegs_0_2.set(EncodedLegIssuer_98);
    InstrumentLeg_98.insert(EncodedLegIssuer_98.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_98(1186793213);
    noLegs_0_2.set(EncodedLegIssuerLen_98);
    InstrumentLeg_98.insert(EncodedLegIssuerLen_98.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_98("DATA_935113577");
    noLegs_0_2.set(EncodedLegSecurityDesc_98);
    InstrumentLeg_98.insert(EncodedLegSecurityDesc_98.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_98(1290792961);
    noLegs_0_2.set(EncodedLegSecurityDescLen_98);
    InstrumentLeg_98.insert(EncodedLegSecurityDescLen_98.getString());
    FIX::LegCFICode LegCFICode_98("STRING_2010874965");
    noLegs_0_2.set(LegCFICode_98);
    InstrumentLeg_98.insert(LegCFICode_98.getString());
    FIX::LegContractMultiplier LegContractMultiplier_98;
    LegContractMultiplier_98.setString("20847295");
    noLegs_0_2.set(LegContractMultiplier_98);
    InstrumentLeg_98.insert(LegContractMultiplier_98.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_98(15371483);
    noLegs_0_2.set(LegContractMultiplierUnit_98);
    InstrumentLeg_98.insert(LegContractMultiplierUnit_98.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_98("MONTHYEAR_2057025239");
    noLegs_0_2.set(LegContractSettlMonth_98);
    InstrumentLeg_98.insert(LegContractSettlMonth_98.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_98("COUNTRY_1619037044");
    noLegs_0_2.set(LegCountryOfIssue_98);
    InstrumentLeg_98.insert(LegCountryOfIssue_98.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_98("LOCALMKTDATE_1176812905");
    noLegs_0_2.set(LegCouponPaymentDate_98);
    InstrumentLeg_98.insert(LegCouponPaymentDate_98.getString());
    FIX::LegCouponRate LegCouponRate_98;
    LegCouponRate_98.setString("36.820000");
    noLegs_0_2.set(LegCouponRate_98);
    InstrumentLeg_98.insert(LegCouponRate_98.getString());
    FIX::LegCreditRating LegCreditRating_98("STRING_1009284919");
    noLegs_0_2.set(LegCreditRating_98);
    InstrumentLeg_98.insert(LegCreditRating_98.getString());
    FIX::LegCurrency LegCurrency_98("CHF");
    noLegs_0_2.set(LegCurrency_98);
    InstrumentLeg_98.insert(LegCurrency_98.getString());
    FIX::LegDatedDate LegDatedDate_98("LOCALMKTDATE_320579052");
    noLegs_0_2.set(LegDatedDate_98);
    InstrumentLeg_98.insert(LegDatedDate_98.getString());
    FIX::LegExerciseStyle LegExerciseStyle_98(942558372);
    noLegs_0_2.set(LegExerciseStyle_98);
    InstrumentLeg_98.insert(LegExerciseStyle_98.getString());
    FIX::LegFactor LegFactor_98;
    LegFactor_98.setString("8529715");
    noLegs_0_2.set(LegFactor_98);
    InstrumentLeg_98.insert(LegFactor_98.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_98(1549047107);
    noLegs_0_2.set(LegFlowScheduleType_98);
    InstrumentLeg_98.insert(LegFlowScheduleType_98.getString());
    FIX::LegInstrRegistry LegInstrRegistry_98("STRING_1452251700");
    noLegs_0_2.set(LegInstrRegistry_98);
    InstrumentLeg_98.insert(LegInstrRegistry_98.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_98("LOCALMKTDATE_2049155680");
    noLegs_0_2.set(LegInterestAccrualDate_98);
    InstrumentLeg_98.insert(LegInterestAccrualDate_98.getString());
    FIX::LegIssueDate LegIssueDate_98("LOCALMKTDATE_807701813");
    noLegs_0_2.set(LegIssueDate_98);
    InstrumentLeg_98.insert(LegIssueDate_98.getString());
    FIX::LegIssuer LegIssuer_98("STRING_63114682");
    noLegs_0_2.set(LegIssuer_98);
    InstrumentLeg_98.insert(LegIssuer_98.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_98("STRING_552336573");
    noLegs_0_2.set(LegLocaleOfIssue_98);
    InstrumentLeg_98.insert(LegLocaleOfIssue_98.getString());
    FIX::LegMaturityDate LegMaturityDate_98("LOCALMKTDATE_313585184");
    noLegs_0_2.set(LegMaturityDate_98);
    InstrumentLeg_98.insert(LegMaturityDate_98.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_98("MONTHYEAR_270273765");
    noLegs_0_2.set(LegMaturityMonthYear_98);
    InstrumentLeg_98.insert(LegMaturityMonthYear_98.getString());
    FIX::LegMaturityTime LegMaturityTime_98("TZTIMEONLY_877851230");
    noLegs_0_2.set(LegMaturityTime_98);
    InstrumentLeg_98.insert(LegMaturityTime_98.getString());
    FIX::LegOptAttribute LegOptAttribute_98('6');
    noLegs_0_2.set(LegOptAttribute_98);
    InstrumentLeg_98.insert(LegOptAttribute_98.getString());
    FIX::LegOptionRatio LegOptionRatio_98;
    LegOptionRatio_98.setString("6295410");
    noLegs_0_2.set(LegOptionRatio_98);
    InstrumentLeg_98.insert(LegOptionRatio_98.getString());
    FIX::LegPool LegPool_98("STRING_1033871984");
    noLegs_0_2.set(LegPool_98);
    InstrumentLeg_98.insert(LegPool_98.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_98("STRING_613594153");
    noLegs_0_2.set(LegPriceUnitOfMeasure_98);
    InstrumentLeg_98.insert(LegPriceUnitOfMeasure_98.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
    LegPriceUnitOfMeasureQty_98.setString("19026161");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_98);
    InstrumentLeg_98.insert(LegPriceUnitOfMeasureQty_98.getString());
    FIX::LegProduct LegProduct_98(849119130);
    noLegs_0_2.set(LegProduct_98);
    InstrumentLeg_98.insert(LegProduct_98.getString());
    FIX::LegPutOrCall LegPutOrCall_98(1800387366);
    noLegs_0_2.set(LegPutOrCall_98);
    InstrumentLeg_98.insert(LegPutOrCall_98.getString());
    FIX::LegRatioQty LegRatioQty_98;
    LegRatioQty_98.setString("6902460");
    noLegs_0_2.set(LegRatioQty_98);
    InstrumentLeg_98.insert(LegRatioQty_98.getString());
    FIX::LegRedemptionDate LegRedemptionDate_98("LOCALMKTDATE_2139912091");
    noLegs_0_2.set(LegRedemptionDate_98);
    InstrumentLeg_98.insert(LegRedemptionDate_98.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_98("STRING_1663778683");
    noLegs_0_2.set(LegRepoCollateralSecurityType_98);
    InstrumentLeg_98.insert(LegRepoCollateralSecurityType_98.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_98;
    LegRepurchaseRate_98.setString("19.750000");
    noLegs_0_2.set(LegRepurchaseRate_98);
    InstrumentLeg_98.insert(LegRepurchaseRate_98.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_98(7799926);
    noLegs_0_2.set(LegRepurchaseTerm_98);
    InstrumentLeg_98.insert(LegRepurchaseTerm_98.getString());
    FIX::LegSecurityDesc LegSecurityDesc_98("STRING_1573320274");
    noLegs_0_2.set(LegSecurityDesc_98);
    InstrumentLeg_98.insert(LegSecurityDesc_98.getString());
    FIX::LegSecurityExchange LegSecurityExchange_98("EXCHANGE_99045372");
    noLegs_0_2.set(LegSecurityExchange_98);
    InstrumentLeg_98.insert(LegSecurityExchange_98.getString());
    FIX::LegSecurityID LegSecurityID_98("STRING_1184612832");
    noLegs_0_2.set(LegSecurityID_98);
    InstrumentLeg_98.insert(LegSecurityID_98.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_98("STRING_1748893957");
    noLegs_0_2.set(LegSecurityIDSource_98);
    InstrumentLeg_98.insert(LegSecurityIDSource_98.getString());
    FIX::LegSecuritySubType LegSecuritySubType_98("STRING_1108330291");
    noLegs_0_2.set(LegSecuritySubType_98);
    InstrumentLeg_98.insert(LegSecuritySubType_98.getString());
    FIX::LegSecurityType LegSecurityType_98("STRING_1531657739");
    noLegs_0_2.set(LegSecurityType_98);
    InstrumentLeg_98.insert(LegSecurityType_98.getString());
    FIX::LegSide LegSide_98('4');
    noLegs_0_2.set(LegSide_98);
    InstrumentLeg_98.insert(LegSide_98.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_98("STRING_1428909343");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_98);
    InstrumentLeg_98.insert(LegStateOrProvinceOfIssue_98.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_98("GBP");
    noLegs_0_2.set(LegStrikeCurrency_98);
    InstrumentLeg_98.insert(LegStrikeCurrency_98.getString());
    FIX::LegStrikePrice LegStrikePrice_98;
    LegStrikePrice_98.setString("8304728");
    noLegs_0_2.set(LegStrikePrice_98);
    InstrumentLeg_98.insert(LegStrikePrice_98.getString());
    FIX::LegSymbol LegSymbol_98("STRING_1778984163");
    noLegs_0_2.set(LegSymbol_98);
    InstrumentLeg_98.insert(LegSymbol_98.getString());
    FIX::LegSymbolSfx LegSymbolSfx_98("STRING_795696622");
    noLegs_0_2.set(LegSymbolSfx_98);
    InstrumentLeg_98.insert(LegSymbolSfx_98.getString());
    FIX::LegTimeUnit LegTimeUnit_98("STRING_1638174615");
    noLegs_0_2.set(LegTimeUnit_98);
    InstrumentLeg_98.insert(LegTimeUnit_98.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_98("STRING_1842098845");
    noLegs_0_2.set(LegUnitOfMeasure_98);
    InstrumentLeg_98.insert(LegUnitOfMeasure_98.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
    LegUnitOfMeasureQty_98.setString("13480331");
    noLegs_0_2.set(LegUnitOfMeasureQty_98);
    InstrumentLeg_98.insert(LegUnitOfMeasureQty_98.getString());
    all_values.push_back(InstrumentLeg_98);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
      FIX::LegSecurityAltID LegSecurityAltID_202("STRING_2112372610");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_202);
      LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltID_202.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_202("STRING_78400777");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_202);
      LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltIDSource_202.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
      FIX::LegSecurityAltID LegSecurityAltID_203("STRING_415178079");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_203);
      LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltID_203.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_203("STRING_594430039");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_203);
      LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltIDSource_203.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
      FIX::LegSecurityAltID LegSecurityAltID_204("STRING_1112272761");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_204);
      LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltID_204.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_204("STRING_1028772233");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_204);
      LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltIDSource_204.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("25.040000");
  msg.set(AttachmentPoint_65);
  Instrument_65.insert(AttachmentPoint_65.getString());
  FIX::CFICode CFICode_65("STRING_1961391892");
  msg.set(CFICode_65);
  Instrument_65.insert(CFICode_65.getString());
  FIX::CPProgram CPProgram_65(1);
  msg.set(CPProgram_65);
  Instrument_65.insert(CPProgram_65.getString());
  FIX::CPRegType CPRegType_65("STRING_1039808547");
  msg.set(CPRegType_65);
  Instrument_65.insert(CPRegType_65.getString());
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("19538203");
  msg.set(CapPrice_65);
  Instrument_65.insert(CapPrice_65.getString());
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("1979709");
  msg.set(ContractMultiplier_65);
  Instrument_65.insert(ContractMultiplier_65.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_65(2);
  msg.set(ContractMultiplierUnit_65);
  Instrument_65.insert(ContractMultiplierUnit_65.getString());
  FIX::ContractSettlMonth ContractSettlMonth_65("MONTHYEAR_1961620262");
  msg.set(ContractSettlMonth_65);
  Instrument_65.insert(ContractSettlMonth_65.getString());
  FIX::CountryOfIssue CountryOfIssue_65("COUNTRY_1771291261");
  msg.set(CountryOfIssue_65);
  Instrument_65.insert(CountryOfIssue_65.getString());
  FIX::CouponPaymentDate CouponPaymentDate_65("LOCALMKTDATE_1766345894");
  msg.set(CouponPaymentDate_65);
  Instrument_65.insert(CouponPaymentDate_65.getString());
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("94.460000");
  msg.set(CouponRate_65);
  Instrument_65.insert(CouponRate_65.getString());
  FIX::CreditRating CreditRating_65("STRING_1372701570");
  msg.set(CreditRating_65);
  Instrument_65.insert(CreditRating_65.getString());
  FIX::DatedDate DatedDate_65("LOCALMKTDATE_727192537");
  msg.set(DatedDate_65);
  Instrument_65.insert(DatedDate_65.getString());
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("35.370000");
  msg.set(DetachmentPoint_65);
  Instrument_65.insert(DetachmentPoint_65.getString());
  FIX::EncodedIssuer EncodedIssuer_65("DATA_1413754647");
  msg.set(EncodedIssuer_65);
  Instrument_65.insert(EncodedIssuer_65.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_65(8618232);
  msg.set(EncodedIssuerLen_65);
  Instrument_65.insert(EncodedIssuerLen_65.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_65("DATA_709656000");
  msg.set(EncodedSecurityDesc_65);
  Instrument_65.insert(EncodedSecurityDesc_65.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_65(160295589);
  msg.set(EncodedSecurityDescLen_65);
  Instrument_65.insert(EncodedSecurityDescLen_65.getString());
  FIX::ExerciseStyle ExerciseStyle_65(2);
  msg.set(ExerciseStyle_65);
  Instrument_65.insert(ExerciseStyle_65.getString());
  FIX::Factor Factor_65;
  Factor_65.setString("3411565");
  msg.set(Factor_65);
  Instrument_65.insert(Factor_65.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_65(false);
  msg.set(FlexProductEligibilityIndicator_65);
  Instrument_65.insert(FlexProductEligibilityIndicator_65.getString());
  FIX::FlexibleIndicator FlexibleIndicator_65(true);
  msg.set(FlexibleIndicator_65);
  Instrument_65.insert(FlexibleIndicator_65.getString());
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("357717");
  msg.set(FloorPrice_65);
  Instrument_65.insert(FloorPrice_65.getString());
  FIX::FlowScheduleType FlowScheduleType_65(3);
  msg.set(FlowScheduleType_65);
  Instrument_65.insert(FlowScheduleType_65.getString());
  FIX::InstrRegistry InstrRegistry_65("STRING_134058154");
  msg.set(InstrRegistry_65);
  Instrument_65.insert(InstrRegistry_65.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_65('6');
  msg.set(InstrmtAssignmentMethod_65);
  Instrument_65.insert(InstrmtAssignmentMethod_65.getString());
  FIX::InterestAccrualDate InterestAccrualDate_65("LOCALMKTDATE_234942535");
  msg.set(InterestAccrualDate_65);
  Instrument_65.insert(InterestAccrualDate_65.getString());
  FIX::IssueDate IssueDate_65("LOCALMKTDATE_549236233");
  msg.set(IssueDate_65);
  Instrument_65.insert(IssueDate_65.getString());
  FIX::Issuer Issuer_65("STRING_595090715");
  msg.set(Issuer_65);
  Instrument_65.insert(Issuer_65.getString());
  FIX::ListMethod ListMethod_65(1);
  msg.set(ListMethod_65);
  Instrument_65.insert(ListMethod_65.getString());
  FIX::LocaleOfIssue LocaleOfIssue_65("STRING_1578008466");
  msg.set(LocaleOfIssue_65);
  Instrument_65.insert(LocaleOfIssue_65.getString());
  FIX::MaturityDate MaturityDate_65("LOCALMKTDATE_944653219");
  msg.set(MaturityDate_65);
  Instrument_65.insert(MaturityDate_65.getString());
  FIX::MaturityMonthYear MaturityMonthYear_65("MONTHYEAR_1161123541");
  msg.set(MaturityMonthYear_65);
  Instrument_65.insert(MaturityMonthYear_65.getString());
  FIX::MaturityTime MaturityTime_65("TZTIMEONLY_112200770");
  msg.set(MaturityTime_65);
  Instrument_65.insert(MaturityTime_65.getString());
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("19844617");
  msg.set(MinPriceIncrement_65);
  Instrument_65.insert(MinPriceIncrement_65.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("9674602");
  msg.set(MinPriceIncrementAmount_65);
  Instrument_65.insert(MinPriceIncrementAmount_65.getString());
  FIX::NTPositionLimit NTPositionLimit_65(310171757);
  msg.set(NTPositionLimit_65);
  Instrument_65.insert(NTPositionLimit_65.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("86.410000");
  msg.set(NotionalPercentageOutstanding_65);
  Instrument_65.insert(NotionalPercentageOutstanding_65.getString());
  FIX::OptAttribute OptAttribute_65('7');
  msg.set(OptAttribute_65);
  Instrument_65.insert(OptAttribute_65.getString());
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("20814630");
  msg.set(OptPayoutAmount_65);
  Instrument_65.insert(OptPayoutAmount_65.getString());
  FIX::OptPayoutType OptPayoutType_65(3);
  msg.set(OptPayoutType_65);
  Instrument_65.insert(OptPayoutType_65.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("62.880000");
  msg.set(OriginalNotionalPercentageOutstanding_65);
  Instrument_65.insert(OriginalNotionalPercentageOutstanding_65.getString());
  FIX::Pool Pool_65("STRING_1306680941");
  msg.set(Pool_65);
  Instrument_65.insert(Pool_65.getString());
  FIX::PositionLimit PositionLimit_65(1850333425);
  msg.set(PositionLimit_65);
  Instrument_65.insert(PositionLimit_65.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_65("STRING_INX");
  msg.set(PriceQuoteMethod_65);
  Instrument_65.insert(PriceQuoteMethod_65.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_65("STRING_572951940");
  msg.set(PriceUnitOfMeasure_65);
  Instrument_65.insert(PriceUnitOfMeasure_65.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("18589516");
  msg.set(PriceUnitOfMeasureQty_65);
  Instrument_65.insert(PriceUnitOfMeasureQty_65.getString());
  FIX::Product Product_67(7);
  msg.set(Product_67);
  Instrument_65.insert(Product_67.getString());
  FIX::ProductComplex ProductComplex_65("STRING_733247529");
  msg.set(ProductComplex_65);
  Instrument_65.insert(ProductComplex_65.getString());
  FIX::PutOrCall PutOrCall_65(0);
  msg.set(PutOrCall_65);
  Instrument_65.insert(PutOrCall_65.getString());
  FIX::RedemptionDate RedemptionDate_65("LOCALMKTDATE_1066598694");
  msg.set(RedemptionDate_65);
  Instrument_65.insert(RedemptionDate_65.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_65("STRING_1689239740");
  msg.set(RepoCollateralSecurityType_65);
  Instrument_65.insert(RepoCollateralSecurityType_65.getString());
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("10.470000");
  msg.set(RepurchaseRate_65);
  Instrument_65.insert(RepurchaseRate_65.getString());
  FIX::RepurchaseTerm RepurchaseTerm_65(1102370407);
  msg.set(RepurchaseTerm_65);
  Instrument_65.insert(RepurchaseTerm_65.getString());
  FIX::RestructuringType RestructuringType_65("STRING_MM");
  msg.set(RestructuringType_65);
  Instrument_65.insert(RestructuringType_65.getString());
  FIX::SecurityDesc SecurityDesc_65("STRING_1014399201");
  msg.set(SecurityDesc_65);
  Instrument_65.insert(SecurityDesc_65.getString());
  FIX::SecurityExchange SecurityExchange_65("EXCHANGE_1103031083");
  msg.set(SecurityExchange_65);
  Instrument_65.insert(SecurityExchange_65.getString());
  FIX::SecurityGroup SecurityGroup_65("STRING_2080724033");
  msg.set(SecurityGroup_65);
  Instrument_65.insert(SecurityGroup_65.getString());
  FIX::SecurityID SecurityID_65("STRING_1563635434");
  msg.set(SecurityID_65);
  Instrument_65.insert(SecurityID_65.getString());
  FIX::SecurityIDSource SecurityIDSource_65("STRING_B");
  msg.set(SecurityIDSource_65);
  Instrument_65.insert(SecurityIDSource_65.getString());
  FIX::SecurityStatus SecurityStatus_65("STRING_1");
  msg.set(SecurityStatus_65);
  Instrument_65.insert(SecurityStatus_65.getString());
  FIX::SecuritySubType SecuritySubType_66("STRING_994160253");
  msg.set(SecuritySubType_66);
  Instrument_65.insert(SecuritySubType_66.getString());
  FIX::SecurityType SecurityType_67("STRING_BA");
  msg.set(SecurityType_67);
  Instrument_65.insert(SecurityType_67.getString());
  FIX::Seniority Seniority_65("STRING_SR");
  msg.set(Seniority_65);
  Instrument_65.insert(Seniority_65.getString());
  FIX::SettlMethod SettlMethod_65('P');
  msg.set(SettlMethod_65);
  Instrument_65.insert(SettlMethod_65.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_65("STRING_332269488");
  msg.set(SettleOnOpenFlag_65);
  Instrument_65.insert(SettleOnOpenFlag_65.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_65("STRING_1261555804");
  msg.set(StateOrProvinceOfIssue_65);
  Instrument_65.insert(StateOrProvinceOfIssue_65.getString());
  FIX::StrikeCurrency StrikeCurrency_65("CAN");
  msg.set(StrikeCurrency_65);
  Instrument_65.insert(StrikeCurrency_65.getString());
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("20431526");
  msg.set(StrikeMultiplier_65);
  Instrument_65.insert(StrikeMultiplier_65.getString());
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("13505121");
  msg.set(StrikePrice_65);
  Instrument_65.insert(StrikePrice_65.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_65(5);
  msg.set(StrikePriceBoundaryMethod_65);
  Instrument_65.insert(StrikePriceBoundaryMethod_65.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("52.870000");
  msg.set(StrikePriceBoundaryPrecision_65);
  Instrument_65.insert(StrikePriceBoundaryPrecision_65.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_65(4);
  msg.set(StrikePriceDeterminationMethod_65);
  Instrument_65.insert(StrikePriceDeterminationMethod_65.getString());
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("5150551");
  msg.set(StrikeValue_65);
  Instrument_65.insert(StrikeValue_65.getString());
  FIX::Symbol Symbol_65("STRING_1691801464");
  msg.set(Symbol_65);
  Instrument_65.insert(Symbol_65.getString());
  FIX::SymbolSfx SymbolSfx_65("STRING_WI");
  msg.set(SymbolSfx_65);
  Instrument_65.insert(SymbolSfx_65.getString());
  FIX::TimeUnit TimeUnit_65("STRING_Mo");
  msg.set(TimeUnit_65);
  Instrument_65.insert(TimeUnit_65.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_65(3);
  msg.set(UnderlyingPriceDeterminationMethod_65);
  Instrument_65.insert(UnderlyingPriceDeterminationMethod_65.getString());
  FIX::UnitOfMeasure UnitOfMeasure_65("STRING_Alw");
  msg.set(UnitOfMeasure_65);
  Instrument_65.insert(UnitOfMeasure_65.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("7770822");
  msg.set(UnitOfMeasureQty_65);
  Instrument_65.insert(UnitOfMeasureQty_65.getString());
  FIX::ValuationMethod ValuationMethod_65("STRING_CDS");
  msg.set(ValuationMethod_65);
  Instrument_65.insert(ValuationMethod_65.getString());
  all_values.push_back(Instrument_65);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_135;
    FIX::ComplexEventCondition ComplexEventCondition_135(2);
    noComplexEvents_0_0.set(ComplexEventCondition_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventCondition_135.getString());
    FIX::ComplexEventPrice ComplexEventPrice_135;
    ComplexEventPrice_135.setString("2912454");
    noComplexEvents_0_0.set(ComplexEventPrice_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPrice_135.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_135(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryMethod_135.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
    ComplexEventPriceBoundaryPrecision_135.setString("88.000000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryPrecision_135.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_135(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceTimeType_135.getString());
    FIX::ComplexEventType ComplexEventType_135(2);
    noComplexEvents_0_0.set(ComplexEventType_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventType_135.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
    ComplexOptPayoutAmount_135.setString("20879742");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexOptPayoutAmount_135.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_135);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_273;
      FIX::ComplexEventEndDate ComplexEventEndDate_273(FIX::UTCTIMESTAMP(23, 12, 30, 22, 1, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_273);
      ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventEndDate_273.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_273(FIX::UTCTIMESTAMP(22, 32, 37, 27, 8, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_273);
      ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventStartDate_273.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_273);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
        FIX::ComplexEventEndTime ComplexEventEndTime_557(FIX::UTCTIMEONLY(12, 44, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_557);
        ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventEndTime_557.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_557(FIX::UTCTIMEONLY(20, 3, 45));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_557);
        ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventStartTime_557.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
        FIX::ComplexEventEndTime ComplexEventEndTime_558(FIX::UTCTIMEONLY(15, 39, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_558);
        ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventEndTime_558.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_558(FIX::UTCTIMEONLY(23, 50, 56));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_558);
        ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventStartTime_558.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_274;
      FIX::ComplexEventEndDate ComplexEventEndDate_274(FIX::UTCTIMESTAMP(5, 8, 16, 4, 2, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_274);
      ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventEndDate_274.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_274(FIX::UTCTIMESTAMP(3, 6, 27, 22, 3, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_274);
      ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventStartDate_274.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_274);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
        FIX::ComplexEventEndTime ComplexEventEndTime_559(FIX::UTCTIMEONLY(0, 3, 20));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_559);
        ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventEndTime_559.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_559(FIX::UTCTIMEONLY(12, 23, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_559);
        ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventStartTime_559.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_275;
      FIX::ComplexEventEndDate ComplexEventEndDate_275(FIX::UTCTIMESTAMP(2, 33, 19, 25, 1, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_275);
      ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventEndDate_275.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_275(FIX::UTCTIMESTAMP(22, 42, 6, 22, 3, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_275);
      ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventStartDate_275.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_275);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
        FIX::ComplexEventEndTime ComplexEventEndTime_560(FIX::UTCTIMEONLY(2, 19, 40));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_560);
        ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventEndTime_560.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_560(FIX::UTCTIMEONLY(13, 0, 3));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_560);
        ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventStartTime_560.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_136;
    FIX::ComplexEventCondition ComplexEventCondition_136(2);
    noComplexEvents_0_1.set(ComplexEventCondition_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventCondition_136.getString());
    FIX::ComplexEventPrice ComplexEventPrice_136;
    ComplexEventPrice_136.setString("658079");
    noComplexEvents_0_1.set(ComplexEventPrice_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPrice_136.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_136(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryMethod_136.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
    ComplexEventPriceBoundaryPrecision_136.setString("32.870000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryPrecision_136.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_136(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceTimeType_136.getString());
    FIX::ComplexEventType ComplexEventType_136(2);
    noComplexEvents_0_1.set(ComplexEventType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventType_136.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
    ComplexOptPayoutAmount_136.setString("8509541");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexOptPayoutAmount_136.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_136);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_276;
      FIX::ComplexEventEndDate ComplexEventEndDate_276(FIX::UTCTIMESTAMP(5, 11, 1, 14, 1, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_276);
      ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventEndDate_276.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_276(FIX::UTCTIMESTAMP(14, 44, 42, 25, 12, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_276);
      ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventStartDate_276.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_276);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
        FIX::ComplexEventEndTime ComplexEventEndTime_561(FIX::UTCTIMEONLY(15, 48, 16));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_561);
        ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventEndTime_561.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_561(FIX::UTCTIMEONLY(13, 17, 18));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_561);
        ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventStartTime_561.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
        FIX::ComplexEventEndTime ComplexEventEndTime_562(FIX::UTCTIMEONLY(9, 24, 16));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_562);
        ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventEndTime_562.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_562(FIX::UTCTIMEONLY(11, 39, 1));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_562);
        ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventStartTime_562.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_277;
      FIX::ComplexEventEndDate ComplexEventEndDate_277(FIX::UTCTIMESTAMP(8, 12, 46, 23, 5, 2000));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_277);
      ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventEndDate_277.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_277(FIX::UTCTIMESTAMP(19, 32, 49, 20, 12, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_277);
      ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventStartDate_277.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_277);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
        FIX::ComplexEventEndTime ComplexEventEndTime_563(FIX::UTCTIMEONLY(17, 46, 32));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_563);
        ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventEndTime_563.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_563(FIX::UTCTIMEONLY(15, 49, 34));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_563);
        ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventStartTime_563.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_278;
      FIX::ComplexEventEndDate ComplexEventEndDate_278(FIX::UTCTIMESTAMP(2, 50, 48, 1, 6, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_278);
      ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventEndDate_278.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_278(FIX::UTCTIMESTAMP(14, 27, 54, 24, 7, 2003));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_278);
      ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventStartDate_278.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_278);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
        FIX::ComplexEventEndTime ComplexEventEndTime_564(FIX::UTCTIMEONLY(2, 37, 2));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_564);
        ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventEndTime_564.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_564(FIX::UTCTIMEONLY(16, 24, 35));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_564);
        ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventStartTime_564.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_128;
    FIX::EventDate EventDate_128("LOCALMKTDATE_247302909");
    noEvents_0_0.set(EventDate_128);
    EvntGrp_NoEvents_128.insert(EventDate_128.getString());
    FIX::EventPx EventPx_128;
    EventPx_128.setString("11514190");
    noEvents_0_0.set(EventPx_128);
    EvntGrp_NoEvents_128.insert(EventPx_128.getString());
    FIX::EventText EventText_128("STRING_1295587984");
    noEvents_0_0.set(EventText_128);
    EvntGrp_NoEvents_128.insert(EventText_128.getString());
    FIX::EventTime EventTime_128(FIX::UTCTIMESTAMP(9, 45, 43, 13, 4, 2016));
    noEvents_0_0.set(EventTime_128);
    EvntGrp_NoEvents_128.insert(EventTime_128.getString());
    FIX::EventType EventType_128(14);
    noEvents_0_0.set(EventType_128);
    EvntGrp_NoEvents_128.insert(EventType_128.getString());
    all_values.push_back(EvntGrp_NoEvents_128);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_129;
    FIX::EventDate EventDate_129("LOCALMKTDATE_1573163272");
    noEvents_0_1.set(EventDate_129);
    EvntGrp_NoEvents_129.insert(EventDate_129.getString());
    FIX::EventPx EventPx_129;
    EventPx_129.setString("20934268");
    noEvents_0_1.set(EventPx_129);
    EvntGrp_NoEvents_129.insert(EventPx_129.getString());
    FIX::EventText EventText_129("STRING_899960452");
    noEvents_0_1.set(EventText_129);
    EvntGrp_NoEvents_129.insert(EventText_129.getString());
    FIX::EventTime EventTime_129(FIX::UTCTIMESTAMP(22, 11, 21, 26, 7, 2006));
    noEvents_0_1.set(EventTime_129);
    EvntGrp_NoEvents_129.insert(EventTime_129.getString());
    FIX::EventType EventType_129(8);
    noEvents_0_1.set(EventType_129);
    EvntGrp_NoEvents_129.insert(EventType_129.getString());
    all_values.push_back(EvntGrp_NoEvents_129);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_130;
    FIX::EventDate EventDate_130("LOCALMKTDATE_1245157171");
    noEvents_0_2.set(EventDate_130);
    EvntGrp_NoEvents_130.insert(EventDate_130.getString());
    FIX::EventPx EventPx_130;
    EventPx_130.setString("15446873");
    noEvents_0_2.set(EventPx_130);
    EvntGrp_NoEvents_130.insert(EventPx_130.getString());
    FIX::EventText EventText_130("STRING_574178996");
    noEvents_0_2.set(EventText_130);
    EvntGrp_NoEvents_130.insert(EventText_130.getString());
    FIX::EventTime EventTime_130(FIX::UTCTIMESTAMP(16, 12, 50, 3, 1, 2006));
    noEvents_0_2.set(EventTime_130);
    EvntGrp_NoEvents_130.insert(EventTime_130.getString());
    FIX::EventType EventType_130(6);
    noEvents_0_2.set(EventType_130);
    EvntGrp_NoEvents_130.insert(EventType_130.getString());
    all_values.push_back(EvntGrp_NoEvents_130);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_132;
    FIX::InstrumentPartyID InstrumentPartyID_132("STRING_2069897057");
    noInstrumentParties_0_0.set(InstrumentPartyID_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyID_132.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_132('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyIDSource_132.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_132(971564297);
    noInstrumentParties_0_0.set(InstrumentPartyRole_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyRole_132.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_132);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
      FIX::InstrumentPartySubID InstrumentPartySubID_249("STRING_880256451");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_249);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubID_249.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_249(1054035261);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_249);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubIDType_249.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
      FIX::InstrumentPartySubID InstrumentPartySubID_250("STRING_1223895687");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_250);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubID_250.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_250(1542090924);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_250);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubIDType_250.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
      FIX::InstrumentPartySubID InstrumentPartySubID_251("STRING_479714885");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_251);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubID_251.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_251(1169838886);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_251);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubIDType_251.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_133;
    FIX::InstrumentPartyID InstrumentPartyID_133("STRING_294567728");
    noInstrumentParties_0_1.set(InstrumentPartyID_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyID_133.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_133('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyIDSource_133.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_133(1753784684);
    noInstrumentParties_0_1.set(InstrumentPartyRole_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyRole_133.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_133);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
      FIX::InstrumentPartySubID InstrumentPartySubID_252("STRING_2043725341");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_252);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubID_252.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_252(1074627419);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_252);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubIDType_252.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
      FIX::InstrumentPartySubID InstrumentPartySubID_253("STRING_1733112877");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_253);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubID_253.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_253(875745773);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_253);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubIDType_253.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_134;
    FIX::InstrumentPartyID InstrumentPartyID_134("STRING_9295698");
    noInstrumentParties_0_2.set(InstrumentPartyID_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyID_134.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_134('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyIDSource_134.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_134(272949431);
    noInstrumentParties_0_2.set(InstrumentPartyRole_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyRole_134.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_134);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
      FIX::InstrumentPartySubID InstrumentPartySubID_254("STRING_416822607");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubID_254.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_254(1461047535);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubIDType_254.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
      FIX::InstrumentPartySubID InstrumentPartySubID_255("STRING_347747778");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubID_255.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_255(2109778097);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubIDType_255.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
      FIX::InstrumentPartySubID InstrumentPartySubID_256("STRING_1888689886");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubID_256.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_256(1249087675);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubIDType_256.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_121;
    FIX::SecurityAltID SecurityAltID_121("STRING_1320267623");
    noSecurityAltID_0_0.set(SecurityAltID_121);
    SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltID_121.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_121("STRING_1298531907");
    noSecurityAltID_0_0.set(SecurityAltIDSource_121);
    SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltIDSource_121.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  FIX::SecurityXML SecurityXML_131("XMLDATA_1824966259");
  msg.set(SecurityXML_131);
  FIX::SecurityXMLLen SecurityXMLLen_65(817359201);
  msg.set(SecurityXMLLen_65);
  FIX::SecurityXMLSchema SecurityXMLSchema_65("STRING_122612557");
  msg.set(SecurityXMLSchema_65);
  SecurityXML_130.insert(SecurityXMLSchema_65.getString());
  all_values.push_back(SecurityXML_130);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_99;
    FIX::PartyID PartyID_99("STRING_1697615652");
    noPartyIDs_0_0.set(PartyID_99);
    Parties_NoPartyIDs_99.insert(PartyID_99.getString());
    FIX::PartyIDSource PartyIDSource_99('A');
    noPartyIDs_0_0.set(PartyIDSource_99);
    Parties_NoPartyIDs_99.insert(PartyIDSource_99.getString());
    FIX::PartyRole PartyRole_99(57);
    noPartyIDs_0_0.set(PartyRole_99);
    Parties_NoPartyIDs_99.insert(PartyRole_99.getString());
    all_values.push_back(Parties_NoPartyIDs_99);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_219;
      FIX::PartySubID PartySubID_219("STRING_1656362703");
      noPartySubIDs_0_1_0.set(PartySubID_219);
      PtysSubGrp_NoPartySubIDs_219.insert(PartySubID_219.getString());
      FIX::PartySubIDType PartySubIDType_219(27);
      noPartySubIDs_0_1_0.set(PartySubIDType_219);
      PtysSubGrp_NoPartySubIDs_219.insert(PartySubIDType_219.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_219);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_220;
      FIX::PartySubID PartySubID_220("STRING_1386790656");
      noPartySubIDs_0_1_1.set(PartySubID_220);
      PtysSubGrp_NoPartySubIDs_220.insert(PartySubID_220.getString());
      FIX::PartySubIDType PartySubIDType_220(21);
      noPartySubIDs_0_1_1.set(PartySubIDType_220);
      PtysSubGrp_NoPartySubIDs_220.insert(PartySubIDType_220.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_220);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("17296381");
    noUnderlyings_0_0.set(UnderlyingDeliveryAmount_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingDeliveryAmount_0.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("10529186");
    noUnderlyings_0_0.set(UnderlyingSettlPrice_1);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPrice_1.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_0(645958545);
    noUnderlyings_0_0.set(UnderlyingSettlPriceType_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPriceType_0.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);
    all_compo_names.insert("PosUndInstrmtGrp.NoUnderlyings");

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("19286643");
      noUnderlyingAmounts_0_1_0.set(UnderlyingCollectAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingCollectAmount_0.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("6552542");
      noUnderlyingAmounts_0_1_0.set(UnderlyingPayAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingPayAmount_0.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_0("LOCALMKTDATE_2146053806");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementDate_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementDate_0.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_0("STRING_54130164");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementStatus_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementStatus_0.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);
      all_compo_names.insert("UnderlyingAmount.NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("12387289");
      noUnderlyingAmounts_0_1_1.set(UnderlyingCollectAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingCollectAmount_1.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("4153927");
      noUnderlyingAmounts_0_1_1.set(UnderlyingPayAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingPayAmount_1.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_1("LOCALMKTDATE_1515177699");
      noUnderlyingAmounts_0_1_1.set(UnderlyingSettlementDate_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementDate_1.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_1("STRING_1586476715");
      noUnderlyingAmounts_0_1_1.set(UnderlyingSettlementStatus_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementStatus_1.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);
      all_compo_names.insert("UnderlyingAmount.NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_95;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_95("DATA_377687215");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_95);
    UnderlyingInstrument_95.insert(EncodedUnderlyingIssuer_95.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_95(1256383938);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_95);
    UnderlyingInstrument_95.insert(EncodedUnderlyingIssuerLen_95.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_95("DATA_688080742");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_95);
    UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDesc_95.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_95(132756416);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_95);
    UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDescLen_95.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
    UnderlyingAdjustedQuantity_95.setString("4291679");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_95);
    UnderlyingInstrument_95.insert(UnderlyingAdjustedQuantity_95.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
    UnderlyingAllocationPercent_95.setString("26.500000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_95);
    UnderlyingInstrument_95.insert(UnderlyingAllocationPercent_95.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
    UnderlyingAttachmentPoint_95.setString("26.750000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_95);
    UnderlyingInstrument_95.insert(UnderlyingAttachmentPoint_95.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_95("STRING_1246527115");
    noUnderlyings_0_0.set(UnderlyingCFICode_95);
    UnderlyingInstrument_95.insert(UnderlyingCFICode_95.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_95("STRING_2109225207");
    noUnderlyings_0_0.set(UnderlyingCPProgram_95);
    UnderlyingInstrument_95.insert(UnderlyingCPProgram_95.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_95("STRING_1676501839");
    noUnderlyings_0_0.set(UnderlyingCPRegType_95);
    UnderlyingInstrument_95.insert(UnderlyingCPRegType_95.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_95;
    UnderlyingCapValue_95.setString("7966591");
    noUnderlyings_0_0.set(UnderlyingCapValue_95);
    UnderlyingInstrument_95.insert(UnderlyingCapValue_95.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
    UnderlyingCashAmount_95.setString("11383893");
    noUnderlyings_0_0.set(UnderlyingCashAmount_95);
    UnderlyingInstrument_95.insert(UnderlyingCashAmount_95.getString());
    FIX::UnderlyingCashType UnderlyingCashType_95("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_95);
    UnderlyingInstrument_95.insert(UnderlyingCashType_95.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
    UnderlyingContractMultiplier_95.setString("18888820");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_95);
    UnderlyingInstrument_95.insert(UnderlyingContractMultiplier_95.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_95(647268432);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_95);
    UnderlyingInstrument_95.insert(UnderlyingContractMultiplierUnit_95.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_95("COUNTRY_436723132");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_95);
    UnderlyingInstrument_95.insert(UnderlyingCountryOfIssue_95.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_95("LOCALMKTDATE_1128189056");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_95);
    UnderlyingInstrument_95.insert(UnderlyingCouponPaymentDate_95.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
    UnderlyingCouponRate_95.setString("53.480000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_95);
    UnderlyingInstrument_95.insert(UnderlyingCouponRate_95.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_95("STRING_8054258");
    noUnderlyings_0_0.set(UnderlyingCreditRating_95);
    UnderlyingInstrument_95.insert(UnderlyingCreditRating_95.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_95("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_95);
    UnderlyingInstrument_95.insert(UnderlyingCurrency_95.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
    UnderlyingCurrentValue_95.setString("6540128");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_95);
    UnderlyingInstrument_95.insert(UnderlyingCurrentValue_95.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
    UnderlyingDetachmentPoint_95.setString("9.900000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_95);
    UnderlyingInstrument_95.insert(UnderlyingDetachmentPoint_95.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
    UnderlyingDirtyPrice_95.setString("4905610");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_95);
    UnderlyingInstrument_95.insert(UnderlyingDirtyPrice_95.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
    UnderlyingEndPrice_95.setString("13092670");
    noUnderlyings_0_0.set(UnderlyingEndPrice_95);
    UnderlyingInstrument_95.insert(UnderlyingEndPrice_95.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_95;
    UnderlyingEndValue_95.setString("20241811");
    noUnderlyings_0_0.set(UnderlyingEndValue_95);
    UnderlyingInstrument_95.insert(UnderlyingEndValue_95.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_95(544691206);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_95);
    UnderlyingInstrument_95.insert(UnderlyingExerciseStyle_95.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_95;
    UnderlyingFXRate_95.setString("4005123");
    noUnderlyings_0_0.set(UnderlyingFXRate_95);
    UnderlyingInstrument_95.insert(UnderlyingFXRate_95.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_95('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_95);
    UnderlyingInstrument_95.insert(UnderlyingFXRateCalc_95.getString());
    FIX::UnderlyingFactor UnderlyingFactor_95;
    UnderlyingFactor_95.setString("20598689");
    noUnderlyings_0_0.set(UnderlyingFactor_95);
    UnderlyingInstrument_95.insert(UnderlyingFactor_95.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_95(1986989050);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_95);
    UnderlyingInstrument_95.insert(UnderlyingFlowScheduleType_95.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_95("STRING_669777481");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_95);
    UnderlyingInstrument_95.insert(UnderlyingInstrRegistry_95.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_95("LOCALMKTDATE_1168769196");
    noUnderlyings_0_0.set(UnderlyingIssueDate_95);
    UnderlyingInstrument_95.insert(UnderlyingIssueDate_95.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_95("STRING_527586145");
    noUnderlyings_0_0.set(UnderlyingIssuer_95);
    UnderlyingInstrument_95.insert(UnderlyingIssuer_95.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_95("STRING_802533897");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_95);
    UnderlyingInstrument_95.insert(UnderlyingLocaleOfIssue_95.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_95("LOCALMKTDATE_1597937109");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_95);
    UnderlyingInstrument_95.insert(UnderlyingMaturityDate_95.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_95("MONTHYEAR_366715147");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_95);
    UnderlyingInstrument_95.insert(UnderlyingMaturityMonthYear_95.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_95("TZTIMEONLY_612772925");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_95);
    UnderlyingInstrument_95.insert(UnderlyingMaturityTime_95.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
    UnderlyingNotionalPercentageOutstanding_95.setString("5.760000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_95);
    UnderlyingInstrument_95.insert(UnderlyingNotionalPercentageOutstanding_95.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_95('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_95);
    UnderlyingInstrument_95.insert(UnderlyingOptAttribute_95.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
    UnderlyingOriginalNotionalPercentageOutstanding_95.setString("11.160000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_95);
    UnderlyingInstrument_95.insert(UnderlyingOriginalNotionalPercentageOutstanding_95.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_95("STRING_1493639696");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_95);
    UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasure_95.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
    UnderlyingPriceUnitOfMeasureQty_95.setString("14668460");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_95);
    UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasureQty_95.getString());
    FIX::UnderlyingProduct UnderlyingProduct_95(613484159);
    noUnderlyings_0_0.set(UnderlyingProduct_95);
    UnderlyingInstrument_95.insert(UnderlyingProduct_95.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_95(1235038096);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_95);
    UnderlyingInstrument_95.insert(UnderlyingPutOrCall_95.getString());
    FIX::UnderlyingPx UnderlyingPx_95;
    UnderlyingPx_95.setString("21141145");
    noUnderlyings_0_0.set(UnderlyingPx_95);
    UnderlyingInstrument_95.insert(UnderlyingPx_95.getString());
    FIX::UnderlyingQty UnderlyingQty_95;
    UnderlyingQty_95.setString("10502072");
    noUnderlyings_0_0.set(UnderlyingQty_95);
    UnderlyingInstrument_95.insert(UnderlyingQty_95.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_95("LOCALMKTDATE_215743504");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_95);
    UnderlyingInstrument_95.insert(UnderlyingRedemptionDate_95.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_95("STRING_1770576215");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_95);
    UnderlyingInstrument_95.insert(UnderlyingRepoCollateralSecurityType_95.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
    UnderlyingRepurchaseRate_95.setString("15.490000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_95);
    UnderlyingInstrument_95.insert(UnderlyingRepurchaseRate_95.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_95(926087089);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_95);
    UnderlyingInstrument_95.insert(UnderlyingRepurchaseTerm_95.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_95("STRING_332472876");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_95);
    UnderlyingInstrument_95.insert(UnderlyingRestructuringType_95.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_95("STRING_1712274352");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_95);
    UnderlyingInstrument_95.insert(UnderlyingSecurityDesc_95.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_95("EXCHANGE_804214431");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_95);
    UnderlyingInstrument_95.insert(UnderlyingSecurityExchange_95.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_95("STRING_823033918");
    noUnderlyings_0_0.set(UnderlyingSecurityID_95);
    UnderlyingInstrument_95.insert(UnderlyingSecurityID_95.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_95("STRING_874057750");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_95);
    UnderlyingInstrument_95.insert(UnderlyingSecurityIDSource_95.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_95("STRING_680911931");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_95);
    UnderlyingInstrument_95.insert(UnderlyingSecuritySubType_95.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_95("STRING_1367725124");
    noUnderlyings_0_0.set(UnderlyingSecurityType_95);
    UnderlyingInstrument_95.insert(UnderlyingSecurityType_95.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_95("STRING_1274570085");
    noUnderlyings_0_0.set(UnderlyingSeniority_95);
    UnderlyingInstrument_95.insert(UnderlyingSeniority_95.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_95("STRING_973002197");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_95);
    UnderlyingInstrument_95.insert(UnderlyingSettlMethod_95.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_95(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_95);
    UnderlyingInstrument_95.insert(UnderlyingSettlementType_95.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_95;
    UnderlyingStartValue_95.setString("11140754");
    noUnderlyings_0_0.set(UnderlyingStartValue_95);
    UnderlyingInstrument_95.insert(UnderlyingStartValue_95.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_95("STRING_1642779678");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_95);
    UnderlyingInstrument_95.insert(UnderlyingStateOrProvinceOfIssue_95.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_95("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_95);
    UnderlyingInstrument_95.insert(UnderlyingStrikeCurrency_95.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
    UnderlyingStrikePrice_95.setString("2978299");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_95);
    UnderlyingInstrument_95.insert(UnderlyingStrikePrice_95.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_95("STRING_1899333040");
    noUnderlyings_0_0.set(UnderlyingSymbol_95);
    UnderlyingInstrument_95.insert(UnderlyingSymbol_95.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_95("STRING_2008376779");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_95);
    UnderlyingInstrument_95.insert(UnderlyingSymbolSfx_95.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_95("STRING_910602853");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_95);
    UnderlyingInstrument_95.insert(UnderlyingTimeUnit_95.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_95("STRING_448829968");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_95);
    UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasure_95.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
    UnderlyingUnitOfMeasureQty_95.setString("1893498");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_95);
    UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasureQty_95.getString());
    all_values.push_back(UnderlyingInstrument_95);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_189("STRING_1942469664");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_189);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltID_189.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_189("STRING_1656195920");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_189);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltIDSource_189.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_190("STRING_1665878128");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_190);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltID_190.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_190("STRING_1030024112");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_190);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltIDSource_190.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_191("STRING_1622826788");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_191);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltID_191.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_191("STRING_568601771");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_191);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltIDSource_191.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
      FIX::UnderlyingStipType UnderlyingStipType_191("STRING_1245919355");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_191);
      UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipType_191.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_191("STRING_1626863320");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_191);
      UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipValue_191.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_191);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
      FIX::UnderlyingStipType UnderlyingStipType_192("STRING_24371058");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_192);
      UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipType_192.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_192("STRING_1578392231");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_192);
      UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipValue_192.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_177("STRING_828585489");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyID_177.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_177('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyIDSource_177.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_177(2065711774);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyRole_177.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_352("STRING_1621667626");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubID_352.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_352(1192798211);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubIDType_352.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_353("STRING_335015970");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubID_353.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_353(754294360);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubIDType_353.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_354("STRING_159390051");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubID_354.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_354(1977795648);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubIDType_354.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_9;
    FIX::PosAmt PosAmt_9;
    PosAmt_9.setString("18010516");
    noPosAmt_0_0.set(PosAmt_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmt_9.getString());
    FIX::PosAmtType PosAmtType_9("STRING_CASH");
    noPosAmt_0_0.set(PosAmtType_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmtType_9.getString());
    FIX::PositionCurrency PositionCurrency_9("STRING_807539683");
    noPosAmt_0_0.set(PositionCurrency_9);
    PositionAmountData_NoPosAmt_9.insert(PositionCurrency_9.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_9);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("16619448");
    noPosAmt_0_1.set(PosAmt_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmt_10.getString());
    FIX::PosAmtType PosAmtType_10("STRING_VADJ");
    noPosAmt_0_1.set(PosAmtType_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmtType_10.getString());
    FIX::PositionCurrency PositionCurrency_10("STRING_1256369651");
    noPosAmt_0_1.set(PositionCurrency_10);
    PositionAmountData_NoPosAmt_10.insert(PositionCurrency_10.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_10);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("18512946");
    noPosAmt_0_2.set(PosAmt_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmt_11.getString());
    FIX::PosAmtType PosAmtType_11("STRING_CRES");
    noPosAmt_0_2.set(PosAmtType_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmtType_11.getString());
    FIX::PositionCurrency PositionCurrency_11("STRING_1051355668");
    noPosAmt_0_2.set(PositionCurrency_11);
    PositionAmountData_NoPosAmt_11.insert(PositionCurrency_11.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_11);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_8;
    FIX::LongQty LongQty_8;
    LongQty_8.setString("16095332");
    noPositions_0_0.set(LongQty_8);
    PositionQty_NoPositions_8.insert(LongQty_8.getString());
    FIX::PosQtyStatus PosQtyStatus_8(0);
    noPositions_0_0.set(PosQtyStatus_8);
    PositionQty_NoPositions_8.insert(PosQtyStatus_8.getString());
    FIX::PosType PosType_8("STRING_IES");
    noPositions_0_0.set(PosType_8);
    PositionQty_NoPositions_8.insert(PosType_8.getString());
    FIX::QuantityDate QuantityDate_8("LOCALMKTDATE_30651355");
    noPositions_0_0.set(QuantityDate_8);
    PositionQty_NoPositions_8.insert(QuantityDate_8.getString());
    FIX::ShortQty ShortQty_8;
    ShortQty_8.setString("11796637");
    noPositions_0_0.set(ShortQty_8);
    PositionQty_NoPositions_8.insert(ShortQty_8.getString());
    all_values.push_back(PositionQty_NoPositions_8);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      FIX::NestedPartyID NestedPartyID_92("STRING_1657514675");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyID_92.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_92('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyIDSource_92.getString());
      FIX::NestedPartyRole NestedPartyRole_92(1512178004);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyRole_92.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
        FIX::NestedPartySubID NestedPartySubID_198("STRING_2032620296");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_198);
        NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubID_198.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_198(1766120505);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_198);
        NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubIDType_198.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
        FIX::NestedPartySubID NestedPartySubID_199("STRING_619913178");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_199);
        NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubID_199.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_199(1394634069);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_199);
        NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubIDType_199.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      FIX::NestedPartyID NestedPartyID_93("STRING_1240304483");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyID_93.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_93('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyIDSource_93.getString());
      FIX::NestedPartyRole NestedPartyRole_93(1729650039);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyRole_93.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
        FIX::NestedPartySubID NestedPartySubID_200("STRING_1972101441");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_200);
        NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubID_200.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_200(1559962039);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_200);
        NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubIDType_200.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
        FIX::NestedPartySubID NestedPartySubID_201("STRING_902805487");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_201);
        NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubID_201.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_201(1625669476);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_201);
        NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubIDType_201.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_9;
    FIX::LongQty LongQty_9;
    LongQty_9.setString("16881039");
    noPositions_0_1.set(LongQty_9);
    PositionQty_NoPositions_9.insert(LongQty_9.getString());
    FIX::PosQtyStatus PosQtyStatus_9(2);
    noPositions_0_1.set(PosQtyStatus_9);
    PositionQty_NoPositions_9.insert(PosQtyStatus_9.getString());
    FIX::PosType PosType_9("STRING_PNTN");
    noPositions_0_1.set(PosType_9);
    PositionQty_NoPositions_9.insert(PosType_9.getString());
    FIX::QuantityDate QuantityDate_9("LOCALMKTDATE_579365101");
    noPositions_0_1.set(QuantityDate_9);
    PositionQty_NoPositions_9.insert(QuantityDate_9.getString());
    FIX::ShortQty ShortQty_9;
    ShortQty_9.setString("8192311");
    noPositions_0_1.set(ShortQty_9);
    PositionQty_NoPositions_9.insert(ShortQty_9.getString());
    all_values.push_back(PositionQty_NoPositions_9);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      FIX::NestedPartyID NestedPartyID_94("STRING_523020204");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyID_94.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_94('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyIDSource_94.getString());
      FIX::NestedPartyRole NestedPartyRole_94(56464925);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyRole_94.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
        FIX::NestedPartySubID NestedPartySubID_202("STRING_1804482974");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_202);
        NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubID_202.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_202(891814990);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_202);
        NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubIDType_202.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
        FIX::NestedPartySubID NestedPartySubID_203("STRING_15721143");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_203);
        NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubID_203.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_203(836663075);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_203);
        NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubIDType_203.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      FIX::NestedPartyID NestedPartyID_95("STRING_825600762");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyID_95.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_95('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyIDSource_95.getString());
      FIX::NestedPartyRole NestedPartyRole_95(2040697883);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyRole_95.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
        FIX::NestedPartySubID NestedPartySubID_204("STRING_227437222");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_204);
        NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubID_204.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_204(1925834531);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_204);
        NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubIDType_204.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_96;
      FIX::NestedPartyID NestedPartyID_96("STRING_1956415624");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyID_96.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_96('8');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyIDSource_96.getString());
      FIX::NestedPartyRole NestedPartyRole_96(1172984952);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyRole_96.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_96);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
        FIX::NestedPartySubID NestedPartySubID_205("STRING_512578143");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_205);
        NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubID_205.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_205(755151343);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_205);
        NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubIDType_205.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
        FIX::NestedPartySubID NestedPartySubID_206("STRING_896351655");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_206);
        NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubID_206.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_206(337195936);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_206);
        NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubIDType_206.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_10;
    FIX::LongQty LongQty_10;
    LongQty_10.setString("1676297");
    noPositions_0_2.set(LongQty_10);
    PositionQty_NoPositions_10.insert(LongQty_10.getString());
    FIX::PosQtyStatus PosQtyStatus_10(1);
    noPositions_0_2.set(PosQtyStatus_10);
    PositionQty_NoPositions_10.insert(PosQtyStatus_10.getString());
    FIX::PosType PosType_10("STRING_SEA");
    noPositions_0_2.set(PosType_10);
    PositionQty_NoPositions_10.insert(PosType_10.getString());
    FIX::QuantityDate QuantityDate_10("LOCALMKTDATE_1855733703");
    noPositions_0_2.set(QuantityDate_10);
    PositionQty_NoPositions_10.insert(QuantityDate_10.getString());
    FIX::ShortQty ShortQty_10;
    ShortQty_10.setString("13620186");
    noPositions_0_2.set(ShortQty_10);
    PositionQty_NoPositions_10.insert(ShortQty_10.getString());
    all_values.push_back(PositionQty_NoPositions_10);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_97;
      FIX::NestedPartyID NestedPartyID_97("STRING_287615156");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyID_97.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_97('3');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyIDSource_97.getString());
      FIX::NestedPartyRole NestedPartyRole_97(1799454056);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyRole_97.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_97);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
        FIX::NestedPartySubID NestedPartySubID_207("STRING_1904353031");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_207);
        NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubID_207.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_207(1855918981);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_207);
        NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubIDType_207.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noPositions_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
