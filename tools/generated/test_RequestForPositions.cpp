#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositions msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositions_0;
  FIX::Account Account_40("STRING_1047624574");
  msg.set(Account_40);
  RequestForPositions_0.insert(Account_40.getString());
  FIX::AccountType AccountType_33(6);
  msg.set(AccountType_33);
  RequestForPositions_0.insert(AccountType_33.getString());
  FIX::AcctIDSource AcctIDSource_33(2);
  msg.set(AcctIDSource_33);
  RequestForPositions_0.insert(AcctIDSource_33.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_18("LOCALMKTDATE_626301895");
  msg.set(ClearingBusinessDate_18);
  RequestForPositions_0.insert(ClearingBusinessDate_18.getString());
  FIX::Currency Currency_55("USD");
  msg.set(Currency_55);
  RequestForPositions_0.insert(Currency_55.getString());
  FIX::EncodedText EncodedText_84("DATA_1481090469");
  msg.set(EncodedText_84);
  RequestForPositions_0.insert(EncodedText_84.getString());
  FIX::EncodedTextLen EncodedTextLen_84(1562999367);
  msg.set(EncodedTextLen_84);
  RequestForPositions_0.insert(EncodedTextLen_84.getString());
  FIX::MatchStatus MatchStatus_9('2');
  msg.set(MatchStatus_9);
  RequestForPositions_0.insert(MatchStatus_9.getString());
  FIX::PosReqID PosReqID_4("STRING_618425770");
  msg.set(PosReqID_4);
  RequestForPositions_0.insert(PosReqID_4.getString());
  FIX::PosReqType PosReqType_2(3);
  msg.set(PosReqType_2);
  RequestForPositions_0.insert(PosReqType_2.getString());
  FIX::ResponseDestination ResponseDestination_2("STRING_373785912");
  msg.set(ResponseDestination_2);
  RequestForPositions_0.insert(ResponseDestination_2.getString());
  FIX::ResponseTransportType ResponseTransportType_2(0);
  msg.set(ResponseTransportType_2);
  RequestForPositions_0.insert(ResponseTransportType_2.getString());
  FIX::SettlCurrency SettlCurrency_28("EUR");
  msg.set(SettlCurrency_28);
  RequestForPositions_0.insert(SettlCurrency_28.getString());
  FIX::SettlSessID SettlSessID_10("STRING_ITD");
  msg.set(SettlSessID_10);
  RequestForPositions_0.insert(SettlSessID_10.getString());
  FIX::SettlSessSubID SettlSessSubID_9("STRING_1627021129");
  msg.set(SettlSessSubID_9);
  RequestForPositions_0.insert(SettlSessSubID_9.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_7('2');
  msg.set(SubscriptionRequestType_7);
  RequestForPositions_0.insert(SubscriptionRequestType_7.getString());
  FIX::Text Text_84("STRING_181749761");
  msg.set(Text_84);
  RequestForPositions_0.insert(Text_84.getString());
  FIX::TransactTime TransactTime_54(FIX::UTCTIMESTAMP(14, 17, 52, 4, 8, 2009));
  msg.set(TransactTime_54);
  RequestForPositions_0.insert(TransactTime_54.getString());
  all_values.push_back(RequestForPositions_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_111;
    FIX::EncodedLegIssuer EncodedLegIssuer_111("DATA_1943507328");
    noLegs_0_0.set(EncodedLegIssuer_111);
    InstrumentLeg_111.insert(EncodedLegIssuer_111.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_111(700362787);
    noLegs_0_0.set(EncodedLegIssuerLen_111);
    InstrumentLeg_111.insert(EncodedLegIssuerLen_111.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_111("DATA_229435646");
    noLegs_0_0.set(EncodedLegSecurityDesc_111);
    InstrumentLeg_111.insert(EncodedLegSecurityDesc_111.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_111(1067947849);
    noLegs_0_0.set(EncodedLegSecurityDescLen_111);
    InstrumentLeg_111.insert(EncodedLegSecurityDescLen_111.getString());
    FIX::LegCFICode LegCFICode_111("STRING_1747987361");
    noLegs_0_0.set(LegCFICode_111);
    InstrumentLeg_111.insert(LegCFICode_111.getString());
    FIX::LegContractMultiplier LegContractMultiplier_111;
    LegContractMultiplier_111.setString("13541351");
    noLegs_0_0.set(LegContractMultiplier_111);
    InstrumentLeg_111.insert(LegContractMultiplier_111.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_111(1566271089);
    noLegs_0_0.set(LegContractMultiplierUnit_111);
    InstrumentLeg_111.insert(LegContractMultiplierUnit_111.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_111("MONTHYEAR_226805609");
    noLegs_0_0.set(LegContractSettlMonth_111);
    InstrumentLeg_111.insert(LegContractSettlMonth_111.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_111("COUNTRY_1351823373");
    noLegs_0_0.set(LegCountryOfIssue_111);
    InstrumentLeg_111.insert(LegCountryOfIssue_111.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_111("LOCALMKTDATE_1604142981");
    noLegs_0_0.set(LegCouponPaymentDate_111);
    InstrumentLeg_111.insert(LegCouponPaymentDate_111.getString());
    FIX::LegCouponRate LegCouponRate_111;
    LegCouponRate_111.setString("60.780000");
    noLegs_0_0.set(LegCouponRate_111);
    InstrumentLeg_111.insert(LegCouponRate_111.getString());
    FIX::LegCreditRating LegCreditRating_111("STRING_767339093");
    noLegs_0_0.set(LegCreditRating_111);
    InstrumentLeg_111.insert(LegCreditRating_111.getString());
    FIX::LegCurrency LegCurrency_111("CAN");
    noLegs_0_0.set(LegCurrency_111);
    InstrumentLeg_111.insert(LegCurrency_111.getString());
    FIX::LegDatedDate LegDatedDate_111("LOCALMKTDATE_2034758970");
    noLegs_0_0.set(LegDatedDate_111);
    InstrumentLeg_111.insert(LegDatedDate_111.getString());
    FIX::LegExerciseStyle LegExerciseStyle_111(1727321088);
    noLegs_0_0.set(LegExerciseStyle_111);
    InstrumentLeg_111.insert(LegExerciseStyle_111.getString());
    FIX::LegFactor LegFactor_111;
    LegFactor_111.setString("13081986");
    noLegs_0_0.set(LegFactor_111);
    InstrumentLeg_111.insert(LegFactor_111.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_111(2124495820);
    noLegs_0_0.set(LegFlowScheduleType_111);
    InstrumentLeg_111.insert(LegFlowScheduleType_111.getString());
    FIX::LegInstrRegistry LegInstrRegistry_111("STRING_1908976699");
    noLegs_0_0.set(LegInstrRegistry_111);
    InstrumentLeg_111.insert(LegInstrRegistry_111.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_111("LOCALMKTDATE_999948773");
    noLegs_0_0.set(LegInterestAccrualDate_111);
    InstrumentLeg_111.insert(LegInterestAccrualDate_111.getString());
    FIX::LegIssueDate LegIssueDate_111("LOCALMKTDATE_1604033302");
    noLegs_0_0.set(LegIssueDate_111);
    InstrumentLeg_111.insert(LegIssueDate_111.getString());
    FIX::LegIssuer LegIssuer_111("STRING_1289628229");
    noLegs_0_0.set(LegIssuer_111);
    InstrumentLeg_111.insert(LegIssuer_111.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_111("STRING_1181698535");
    noLegs_0_0.set(LegLocaleOfIssue_111);
    InstrumentLeg_111.insert(LegLocaleOfIssue_111.getString());
    FIX::LegMaturityDate LegMaturityDate_111("LOCALMKTDATE_826758365");
    noLegs_0_0.set(LegMaturityDate_111);
    InstrumentLeg_111.insert(LegMaturityDate_111.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_111("MONTHYEAR_1032708091");
    noLegs_0_0.set(LegMaturityMonthYear_111);
    InstrumentLeg_111.insert(LegMaturityMonthYear_111.getString());
    FIX::LegMaturityTime LegMaturityTime_111("TZTIMEONLY_1423400092");
    noLegs_0_0.set(LegMaturityTime_111);
    InstrumentLeg_111.insert(LegMaturityTime_111.getString());
    FIX::LegOptAttribute LegOptAttribute_111('1');
    noLegs_0_0.set(LegOptAttribute_111);
    InstrumentLeg_111.insert(LegOptAttribute_111.getString());
    FIX::LegOptionRatio LegOptionRatio_111;
    LegOptionRatio_111.setString("3505250");
    noLegs_0_0.set(LegOptionRatio_111);
    InstrumentLeg_111.insert(LegOptionRatio_111.getString());
    FIX::LegPool LegPool_111("STRING_1314775804");
    noLegs_0_0.set(LegPool_111);
    InstrumentLeg_111.insert(LegPool_111.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_111("STRING_2125210327");
    noLegs_0_0.set(LegPriceUnitOfMeasure_111);
    InstrumentLeg_111.insert(LegPriceUnitOfMeasure_111.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
    LegPriceUnitOfMeasureQty_111.setString("15652702");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_111);
    InstrumentLeg_111.insert(LegPriceUnitOfMeasureQty_111.getString());
    FIX::LegProduct LegProduct_111(1110799484);
    noLegs_0_0.set(LegProduct_111);
    InstrumentLeg_111.insert(LegProduct_111.getString());
    FIX::LegPutOrCall LegPutOrCall_111(678089467);
    noLegs_0_0.set(LegPutOrCall_111);
    InstrumentLeg_111.insert(LegPutOrCall_111.getString());
    FIX::LegRatioQty LegRatioQty_111;
    LegRatioQty_111.setString("17947059");
    noLegs_0_0.set(LegRatioQty_111);
    InstrumentLeg_111.insert(LegRatioQty_111.getString());
    FIX::LegRedemptionDate LegRedemptionDate_111("LOCALMKTDATE_31263686");
    noLegs_0_0.set(LegRedemptionDate_111);
    InstrumentLeg_111.insert(LegRedemptionDate_111.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_111("STRING_278593180");
    noLegs_0_0.set(LegRepoCollateralSecurityType_111);
    InstrumentLeg_111.insert(LegRepoCollateralSecurityType_111.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_111;
    LegRepurchaseRate_111.setString("73.960000");
    noLegs_0_0.set(LegRepurchaseRate_111);
    InstrumentLeg_111.insert(LegRepurchaseRate_111.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_111(1597534775);
    noLegs_0_0.set(LegRepurchaseTerm_111);
    InstrumentLeg_111.insert(LegRepurchaseTerm_111.getString());
    FIX::LegSecurityDesc LegSecurityDesc_111("STRING_505398789");
    noLegs_0_0.set(LegSecurityDesc_111);
    InstrumentLeg_111.insert(LegSecurityDesc_111.getString());
    FIX::LegSecurityExchange LegSecurityExchange_111("EXCHANGE_205697122");
    noLegs_0_0.set(LegSecurityExchange_111);
    InstrumentLeg_111.insert(LegSecurityExchange_111.getString());
    FIX::LegSecurityID LegSecurityID_111("STRING_1054194108");
    noLegs_0_0.set(LegSecurityID_111);
    InstrumentLeg_111.insert(LegSecurityID_111.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_111("STRING_65811220");
    noLegs_0_0.set(LegSecurityIDSource_111);
    InstrumentLeg_111.insert(LegSecurityIDSource_111.getString());
    FIX::LegSecuritySubType LegSecuritySubType_111("STRING_973036215");
    noLegs_0_0.set(LegSecuritySubType_111);
    InstrumentLeg_111.insert(LegSecuritySubType_111.getString());
    FIX::LegSecurityType LegSecurityType_111("STRING_260245636");
    noLegs_0_0.set(LegSecurityType_111);
    InstrumentLeg_111.insert(LegSecurityType_111.getString());
    FIX::LegSide LegSide_111('2');
    noLegs_0_0.set(LegSide_111);
    InstrumentLeg_111.insert(LegSide_111.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_111("STRING_860311537");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_111);
    InstrumentLeg_111.insert(LegStateOrProvinceOfIssue_111.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_111("USD");
    noLegs_0_0.set(LegStrikeCurrency_111);
    InstrumentLeg_111.insert(LegStrikeCurrency_111.getString());
    FIX::LegStrikePrice LegStrikePrice_111;
    LegStrikePrice_111.setString("8373237");
    noLegs_0_0.set(LegStrikePrice_111);
    InstrumentLeg_111.insert(LegStrikePrice_111.getString());
    FIX::LegSymbol LegSymbol_111("STRING_1749059776");
    noLegs_0_0.set(LegSymbol_111);
    InstrumentLeg_111.insert(LegSymbol_111.getString());
    FIX::LegSymbolSfx LegSymbolSfx_111("STRING_405313167");
    noLegs_0_0.set(LegSymbolSfx_111);
    InstrumentLeg_111.insert(LegSymbolSfx_111.getString());
    FIX::LegTimeUnit LegTimeUnit_111("STRING_293873363");
    noLegs_0_0.set(LegTimeUnit_111);
    InstrumentLeg_111.insert(LegTimeUnit_111.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_111("STRING_891204358");
    noLegs_0_0.set(LegUnitOfMeasure_111);
    InstrumentLeg_111.insert(LegUnitOfMeasure_111.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
    LegUnitOfMeasureQty_111.setString("15870117");
    noLegs_0_0.set(LegUnitOfMeasureQty_111);
    InstrumentLeg_111.insert(LegUnitOfMeasureQty_111.getString());
    all_values.push_back(InstrumentLeg_111);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_226;
      FIX::LegSecurityAltID LegSecurityAltID_226("STRING_1923912449");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_226);
      LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltID_226.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_226("STRING_862928147");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_226);
      LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltIDSource_226.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_226);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_227;
      FIX::LegSecurityAltID LegSecurityAltID_227("STRING_376419079");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_227);
      LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltID_227.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_227("STRING_126953897");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_227);
      LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltIDSource_227.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_227);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_228;
      FIX::LegSecurityAltID LegSecurityAltID_228("STRING_30220303");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_228);
      LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltID_228.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_228("STRING_354145758");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_228);
      LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltIDSource_228.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_228);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_112;
    FIX::EncodedLegIssuer EncodedLegIssuer_112("DATA_1692224174");
    noLegs_0_1.set(EncodedLegIssuer_112);
    InstrumentLeg_112.insert(EncodedLegIssuer_112.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_112(1141019787);
    noLegs_0_1.set(EncodedLegIssuerLen_112);
    InstrumentLeg_112.insert(EncodedLegIssuerLen_112.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_112("DATA_1032235225");
    noLegs_0_1.set(EncodedLegSecurityDesc_112);
    InstrumentLeg_112.insert(EncodedLegSecurityDesc_112.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_112(1339446449);
    noLegs_0_1.set(EncodedLegSecurityDescLen_112);
    InstrumentLeg_112.insert(EncodedLegSecurityDescLen_112.getString());
    FIX::LegCFICode LegCFICode_112("STRING_1172283473");
    noLegs_0_1.set(LegCFICode_112);
    InstrumentLeg_112.insert(LegCFICode_112.getString());
    FIX::LegContractMultiplier LegContractMultiplier_112;
    LegContractMultiplier_112.setString("13108284");
    noLegs_0_1.set(LegContractMultiplier_112);
    InstrumentLeg_112.insert(LegContractMultiplier_112.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_112(193320197);
    noLegs_0_1.set(LegContractMultiplierUnit_112);
    InstrumentLeg_112.insert(LegContractMultiplierUnit_112.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_112("MONTHYEAR_622334600");
    noLegs_0_1.set(LegContractSettlMonth_112);
    InstrumentLeg_112.insert(LegContractSettlMonth_112.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_112("COUNTRY_1816227195");
    noLegs_0_1.set(LegCountryOfIssue_112);
    InstrumentLeg_112.insert(LegCountryOfIssue_112.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_112("LOCALMKTDATE_399017319");
    noLegs_0_1.set(LegCouponPaymentDate_112);
    InstrumentLeg_112.insert(LegCouponPaymentDate_112.getString());
    FIX::LegCouponRate LegCouponRate_112;
    LegCouponRate_112.setString("87.080000");
    noLegs_0_1.set(LegCouponRate_112);
    InstrumentLeg_112.insert(LegCouponRate_112.getString());
    FIX::LegCreditRating LegCreditRating_112("STRING_1882038415");
    noLegs_0_1.set(LegCreditRating_112);
    InstrumentLeg_112.insert(LegCreditRating_112.getString());
    FIX::LegCurrency LegCurrency_112("EUR");
    noLegs_0_1.set(LegCurrency_112);
    InstrumentLeg_112.insert(LegCurrency_112.getString());
    FIX::LegDatedDate LegDatedDate_112("LOCALMKTDATE_2126687836");
    noLegs_0_1.set(LegDatedDate_112);
    InstrumentLeg_112.insert(LegDatedDate_112.getString());
    FIX::LegExerciseStyle LegExerciseStyle_112(84881423);
    noLegs_0_1.set(LegExerciseStyle_112);
    InstrumentLeg_112.insert(LegExerciseStyle_112.getString());
    FIX::LegFactor LegFactor_112;
    LegFactor_112.setString("17768574");
    noLegs_0_1.set(LegFactor_112);
    InstrumentLeg_112.insert(LegFactor_112.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_112(1532052230);
    noLegs_0_1.set(LegFlowScheduleType_112);
    InstrumentLeg_112.insert(LegFlowScheduleType_112.getString());
    FIX::LegInstrRegistry LegInstrRegistry_112("STRING_922205133");
    noLegs_0_1.set(LegInstrRegistry_112);
    InstrumentLeg_112.insert(LegInstrRegistry_112.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_112("LOCALMKTDATE_1378433550");
    noLegs_0_1.set(LegInterestAccrualDate_112);
    InstrumentLeg_112.insert(LegInterestAccrualDate_112.getString());
    FIX::LegIssueDate LegIssueDate_112("LOCALMKTDATE_1937365398");
    noLegs_0_1.set(LegIssueDate_112);
    InstrumentLeg_112.insert(LegIssueDate_112.getString());
    FIX::LegIssuer LegIssuer_112("STRING_1216078496");
    noLegs_0_1.set(LegIssuer_112);
    InstrumentLeg_112.insert(LegIssuer_112.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_112("STRING_122154260");
    noLegs_0_1.set(LegLocaleOfIssue_112);
    InstrumentLeg_112.insert(LegLocaleOfIssue_112.getString());
    FIX::LegMaturityDate LegMaturityDate_112("LOCALMKTDATE_1376893452");
    noLegs_0_1.set(LegMaturityDate_112);
    InstrumentLeg_112.insert(LegMaturityDate_112.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_112("MONTHYEAR_189226577");
    noLegs_0_1.set(LegMaturityMonthYear_112);
    InstrumentLeg_112.insert(LegMaturityMonthYear_112.getString());
    FIX::LegMaturityTime LegMaturityTime_112("TZTIMEONLY_2046066710");
    noLegs_0_1.set(LegMaturityTime_112);
    InstrumentLeg_112.insert(LegMaturityTime_112.getString());
    FIX::LegOptAttribute LegOptAttribute_112('9');
    noLegs_0_1.set(LegOptAttribute_112);
    InstrumentLeg_112.insert(LegOptAttribute_112.getString());
    FIX::LegOptionRatio LegOptionRatio_112;
    LegOptionRatio_112.setString("5656456");
    noLegs_0_1.set(LegOptionRatio_112);
    InstrumentLeg_112.insert(LegOptionRatio_112.getString());
    FIX::LegPool LegPool_112("STRING_25536959");
    noLegs_0_1.set(LegPool_112);
    InstrumentLeg_112.insert(LegPool_112.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_112("STRING_122558254");
    noLegs_0_1.set(LegPriceUnitOfMeasure_112);
    InstrumentLeg_112.insert(LegPriceUnitOfMeasure_112.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
    LegPriceUnitOfMeasureQty_112.setString("9197914");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_112);
    InstrumentLeg_112.insert(LegPriceUnitOfMeasureQty_112.getString());
    FIX::LegProduct LegProduct_112(1717761133);
    noLegs_0_1.set(LegProduct_112);
    InstrumentLeg_112.insert(LegProduct_112.getString());
    FIX::LegPutOrCall LegPutOrCall_112(1263578042);
    noLegs_0_1.set(LegPutOrCall_112);
    InstrumentLeg_112.insert(LegPutOrCall_112.getString());
    FIX::LegRatioQty LegRatioQty_112;
    LegRatioQty_112.setString("19520266");
    noLegs_0_1.set(LegRatioQty_112);
    InstrumentLeg_112.insert(LegRatioQty_112.getString());
    FIX::LegRedemptionDate LegRedemptionDate_112("LOCALMKTDATE_909723934");
    noLegs_0_1.set(LegRedemptionDate_112);
    InstrumentLeg_112.insert(LegRedemptionDate_112.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_112("STRING_288377867");
    noLegs_0_1.set(LegRepoCollateralSecurityType_112);
    InstrumentLeg_112.insert(LegRepoCollateralSecurityType_112.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_112;
    LegRepurchaseRate_112.setString("13.980000");
    noLegs_0_1.set(LegRepurchaseRate_112);
    InstrumentLeg_112.insert(LegRepurchaseRate_112.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_112(1103044131);
    noLegs_0_1.set(LegRepurchaseTerm_112);
    InstrumentLeg_112.insert(LegRepurchaseTerm_112.getString());
    FIX::LegSecurityDesc LegSecurityDesc_112("STRING_910712468");
    noLegs_0_1.set(LegSecurityDesc_112);
    InstrumentLeg_112.insert(LegSecurityDesc_112.getString());
    FIX::LegSecurityExchange LegSecurityExchange_112("EXCHANGE_784114946");
    noLegs_0_1.set(LegSecurityExchange_112);
    InstrumentLeg_112.insert(LegSecurityExchange_112.getString());
    FIX::LegSecurityID LegSecurityID_112("STRING_1502061451");
    noLegs_0_1.set(LegSecurityID_112);
    InstrumentLeg_112.insert(LegSecurityID_112.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_112("STRING_439757528");
    noLegs_0_1.set(LegSecurityIDSource_112);
    InstrumentLeg_112.insert(LegSecurityIDSource_112.getString());
    FIX::LegSecuritySubType LegSecuritySubType_112("STRING_518669713");
    noLegs_0_1.set(LegSecuritySubType_112);
    InstrumentLeg_112.insert(LegSecuritySubType_112.getString());
    FIX::LegSecurityType LegSecurityType_112("STRING_726631337");
    noLegs_0_1.set(LegSecurityType_112);
    InstrumentLeg_112.insert(LegSecurityType_112.getString());
    FIX::LegSide LegSide_112('2');
    noLegs_0_1.set(LegSide_112);
    InstrumentLeg_112.insert(LegSide_112.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_112("STRING_497873902");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_112);
    InstrumentLeg_112.insert(LegStateOrProvinceOfIssue_112.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_112("CAN");
    noLegs_0_1.set(LegStrikeCurrency_112);
    InstrumentLeg_112.insert(LegStrikeCurrency_112.getString());
    FIX::LegStrikePrice LegStrikePrice_112;
    LegStrikePrice_112.setString("20299261");
    noLegs_0_1.set(LegStrikePrice_112);
    InstrumentLeg_112.insert(LegStrikePrice_112.getString());
    FIX::LegSymbol LegSymbol_112("STRING_1733717894");
    noLegs_0_1.set(LegSymbol_112);
    InstrumentLeg_112.insert(LegSymbol_112.getString());
    FIX::LegSymbolSfx LegSymbolSfx_112("STRING_1236855550");
    noLegs_0_1.set(LegSymbolSfx_112);
    InstrumentLeg_112.insert(LegSymbolSfx_112.getString());
    FIX::LegTimeUnit LegTimeUnit_112("STRING_1819807882");
    noLegs_0_1.set(LegTimeUnit_112);
    InstrumentLeg_112.insert(LegTimeUnit_112.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_112("STRING_802312742");
    noLegs_0_1.set(LegUnitOfMeasure_112);
    InstrumentLeg_112.insert(LegUnitOfMeasure_112.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
    LegUnitOfMeasureQty_112.setString("13590098");
    noLegs_0_1.set(LegUnitOfMeasureQty_112);
    InstrumentLeg_112.insert(LegUnitOfMeasureQty_112.getString());
    all_values.push_back(InstrumentLeg_112);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_229;
      FIX::LegSecurityAltID LegSecurityAltID_229("STRING_991539320");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_229);
      LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltID_229.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_229("STRING_1257592872");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_229);
      LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltIDSource_229.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_229);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_71;
  FIX::AttachmentPoint AttachmentPoint_71;
  AttachmentPoint_71.setString("56.380000");
  msg.set(AttachmentPoint_71);
  Instrument_71.insert(AttachmentPoint_71.getString());
  FIX::CFICode CFICode_71("STRING_1557184976");
  msg.set(CFICode_71);
  Instrument_71.insert(CFICode_71.getString());
  FIX::CPProgram CPProgram_71(99);
  msg.set(CPProgram_71);
  Instrument_71.insert(CPProgram_71.getString());
  FIX::CPRegType CPRegType_71("STRING_1264113893");
  msg.set(CPRegType_71);
  Instrument_71.insert(CPRegType_71.getString());
  FIX::CapPrice CapPrice_71;
  CapPrice_71.setString("3294927");
  msg.set(CapPrice_71);
  Instrument_71.insert(CapPrice_71.getString());
  FIX::ContractMultiplier ContractMultiplier_71;
  ContractMultiplier_71.setString("8534073");
  msg.set(ContractMultiplier_71);
  Instrument_71.insert(ContractMultiplier_71.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_71(2);
  msg.set(ContractMultiplierUnit_71);
  Instrument_71.insert(ContractMultiplierUnit_71.getString());
  FIX::ContractSettlMonth ContractSettlMonth_71("MONTHYEAR_134035736");
  msg.set(ContractSettlMonth_71);
  Instrument_71.insert(ContractSettlMonth_71.getString());
  FIX::CountryOfIssue CountryOfIssue_71("COUNTRY_1763131250");
  msg.set(CountryOfIssue_71);
  Instrument_71.insert(CountryOfIssue_71.getString());
  FIX::CouponPaymentDate CouponPaymentDate_71("LOCALMKTDATE_668586154");
  msg.set(CouponPaymentDate_71);
  Instrument_71.insert(CouponPaymentDate_71.getString());
  FIX::CouponRate CouponRate_71;
  CouponRate_71.setString("71.340000");
  msg.set(CouponRate_71);
  Instrument_71.insert(CouponRate_71.getString());
  FIX::CreditRating CreditRating_71("STRING_718691734");
  msg.set(CreditRating_71);
  Instrument_71.insert(CreditRating_71.getString());
  FIX::DatedDate DatedDate_71("LOCALMKTDATE_1579298622");
  msg.set(DatedDate_71);
  Instrument_71.insert(DatedDate_71.getString());
  FIX::DetachmentPoint DetachmentPoint_71;
  DetachmentPoint_71.setString("20.800000");
  msg.set(DetachmentPoint_71);
  Instrument_71.insert(DetachmentPoint_71.getString());
  FIX::EncodedIssuer EncodedIssuer_71("DATA_73269537");
  msg.set(EncodedIssuer_71);
  Instrument_71.insert(EncodedIssuer_71.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_71(2019056151);
  msg.set(EncodedIssuerLen_71);
  Instrument_71.insert(EncodedIssuerLen_71.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_71("DATA_404708146");
  msg.set(EncodedSecurityDesc_71);
  Instrument_71.insert(EncodedSecurityDesc_71.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_71(799900874);
  msg.set(EncodedSecurityDescLen_71);
  Instrument_71.insert(EncodedSecurityDescLen_71.getString());
  FIX::ExerciseStyle ExerciseStyle_71(2);
  msg.set(ExerciseStyle_71);
  Instrument_71.insert(ExerciseStyle_71.getString());
  FIX::Factor Factor_71;
  Factor_71.setString("9025820");
  msg.set(Factor_71);
  Instrument_71.insert(Factor_71.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_71(false);
  msg.set(FlexProductEligibilityIndicator_71);
  Instrument_71.insert(FlexProductEligibilityIndicator_71.getString());
  FIX::FlexibleIndicator FlexibleIndicator_71(true);
  msg.set(FlexibleIndicator_71);
  Instrument_71.insert(FlexibleIndicator_71.getString());
  FIX::FloorPrice FloorPrice_71;
  FloorPrice_71.setString("7850245");
  msg.set(FloorPrice_71);
  Instrument_71.insert(FloorPrice_71.getString());
  FIX::FlowScheduleType FlowScheduleType_71(1);
  msg.set(FlowScheduleType_71);
  Instrument_71.insert(FlowScheduleType_71.getString());
  FIX::InstrRegistry InstrRegistry_71("STRING_1195898278");
  msg.set(InstrRegistry_71);
  Instrument_71.insert(InstrRegistry_71.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_71('4');
  msg.set(InstrmtAssignmentMethod_71);
  Instrument_71.insert(InstrmtAssignmentMethod_71.getString());
  FIX::InterestAccrualDate InterestAccrualDate_71("LOCALMKTDATE_1999960624");
  msg.set(InterestAccrualDate_71);
  Instrument_71.insert(InterestAccrualDate_71.getString());
  FIX::IssueDate IssueDate_71("LOCALMKTDATE_407424440");
  msg.set(IssueDate_71);
  Instrument_71.insert(IssueDate_71.getString());
  FIX::Issuer Issuer_71("STRING_1506566454");
  msg.set(Issuer_71);
  Instrument_71.insert(Issuer_71.getString());
  FIX::ListMethod ListMethod_71(0);
  msg.set(ListMethod_71);
  Instrument_71.insert(ListMethod_71.getString());
  FIX::LocaleOfIssue LocaleOfIssue_71("STRING_1665017313");
  msg.set(LocaleOfIssue_71);
  Instrument_71.insert(LocaleOfIssue_71.getString());
  FIX::MaturityDate MaturityDate_71("LOCALMKTDATE_500638444");
  msg.set(MaturityDate_71);
  Instrument_71.insert(MaturityDate_71.getString());
  FIX::MaturityMonthYear MaturityMonthYear_71("MONTHYEAR_253717624");
  msg.set(MaturityMonthYear_71);
  Instrument_71.insert(MaturityMonthYear_71.getString());
  FIX::MaturityTime MaturityTime_71("TZTIMEONLY_800663496");
  msg.set(MaturityTime_71);
  Instrument_71.insert(MaturityTime_71.getString());
  FIX::MinPriceIncrement MinPriceIncrement_71;
  MinPriceIncrement_71.setString("17647523");
  msg.set(MinPriceIncrement_71);
  Instrument_71.insert(MinPriceIncrement_71.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_71;
  MinPriceIncrementAmount_71.setString("5832103");
  msg.set(MinPriceIncrementAmount_71);
  Instrument_71.insert(MinPriceIncrementAmount_71.getString());
  FIX::NTPositionLimit NTPositionLimit_71(1654070813);
  msg.set(NTPositionLimit_71);
  Instrument_71.insert(NTPositionLimit_71.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_71;
  NotionalPercentageOutstanding_71.setString("6.240000");
  msg.set(NotionalPercentageOutstanding_71);
  Instrument_71.insert(NotionalPercentageOutstanding_71.getString());
  FIX::OptAttribute OptAttribute_71('7');
  msg.set(OptAttribute_71);
  Instrument_71.insert(OptAttribute_71.getString());
  FIX::OptPayoutAmount OptPayoutAmount_71;
  OptPayoutAmount_71.setString("12697184");
  msg.set(OptPayoutAmount_71);
  Instrument_71.insert(OptPayoutAmount_71.getString());
  FIX::OptPayoutType OptPayoutType_71(3);
  msg.set(OptPayoutType_71);
  Instrument_71.insert(OptPayoutType_71.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_71;
  OriginalNotionalPercentageOutstanding_71.setString("32.380000");
  msg.set(OriginalNotionalPercentageOutstanding_71);
  Instrument_71.insert(OriginalNotionalPercentageOutstanding_71.getString());
  FIX::Pool Pool_71("STRING_1988410149");
  msg.set(Pool_71);
  Instrument_71.insert(Pool_71.getString());
  FIX::PositionLimit PositionLimit_71(97878105);
  msg.set(PositionLimit_71);
  Instrument_71.insert(PositionLimit_71.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_71("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_71);
  Instrument_71.insert(PriceQuoteMethod_71.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_71("STRING_2061679686");
  msg.set(PriceUnitOfMeasure_71);
  Instrument_71.insert(PriceUnitOfMeasure_71.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_71;
  PriceUnitOfMeasureQty_71.setString("21169342");
  msg.set(PriceUnitOfMeasureQty_71);
  Instrument_71.insert(PriceUnitOfMeasureQty_71.getString());
  FIX::Product Product_73(13);
  msg.set(Product_73);
  Instrument_71.insert(Product_73.getString());
  FIX::ProductComplex ProductComplex_71("STRING_714096913");
  msg.set(ProductComplex_71);
  Instrument_71.insert(ProductComplex_71.getString());
  FIX::PutOrCall PutOrCall_71(1);
  msg.set(PutOrCall_71);
  Instrument_71.insert(PutOrCall_71.getString());
  FIX::RedemptionDate RedemptionDate_71("LOCALMKTDATE_1012498217");
  msg.set(RedemptionDate_71);
  Instrument_71.insert(RedemptionDate_71.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_71("STRING_178026900");
  msg.set(RepoCollateralSecurityType_71);
  Instrument_71.insert(RepoCollateralSecurityType_71.getString());
  FIX::RepurchaseRate RepurchaseRate_71;
  RepurchaseRate_71.setString("40.650000");
  msg.set(RepurchaseRate_71);
  Instrument_71.insert(RepurchaseRate_71.getString());
  FIX::RepurchaseTerm RepurchaseTerm_71(1797522749);
  msg.set(RepurchaseTerm_71);
  Instrument_71.insert(RepurchaseTerm_71.getString());
  FIX::RestructuringType RestructuringType_71("STRING_MM");
  msg.set(RestructuringType_71);
  Instrument_71.insert(RestructuringType_71.getString());
  FIX::SecurityDesc SecurityDesc_71("STRING_1225012343");
  msg.set(SecurityDesc_71);
  Instrument_71.insert(SecurityDesc_71.getString());
  FIX::SecurityExchange SecurityExchange_71("EXCHANGE_107387868");
  msg.set(SecurityExchange_71);
  Instrument_71.insert(SecurityExchange_71.getString());
  FIX::SecurityGroup SecurityGroup_71("STRING_1228151758");
  msg.set(SecurityGroup_71);
  Instrument_71.insert(SecurityGroup_71.getString());
  FIX::SecurityID SecurityID_71("STRING_1632436783");
  msg.set(SecurityID_71);
  Instrument_71.insert(SecurityID_71.getString());
  FIX::SecurityIDSource SecurityIDSource_71("STRING_3");
  msg.set(SecurityIDSource_71);
  Instrument_71.insert(SecurityIDSource_71.getString());
  FIX::SecurityStatus SecurityStatus_71("STRING_1");
  msg.set(SecurityStatus_71);
  Instrument_71.insert(SecurityStatus_71.getString());
  FIX::SecuritySubType SecuritySubType_72("STRING_1149970448");
  msg.set(SecuritySubType_72);
  Instrument_71.insert(SecuritySubType_72.getString());
  FIX::SecurityType SecurityType_73("STRING_CMB");
  msg.set(SecurityType_73);
  Instrument_71.insert(SecurityType_73.getString());
  FIX::Seniority Seniority_71("STRING_SR");
  msg.set(Seniority_71);
  Instrument_71.insert(Seniority_71.getString());
  FIX::SettlMethod SettlMethod_71('P');
  msg.set(SettlMethod_71);
  Instrument_71.insert(SettlMethod_71.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_71("STRING_1731861456");
  msg.set(SettleOnOpenFlag_71);
  Instrument_71.insert(SettleOnOpenFlag_71.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_71("STRING_761612398");
  msg.set(StateOrProvinceOfIssue_71);
  Instrument_71.insert(StateOrProvinceOfIssue_71.getString());
  FIX::StrikeCurrency StrikeCurrency_71("EUR");
  msg.set(StrikeCurrency_71);
  Instrument_71.insert(StrikeCurrency_71.getString());
  FIX::StrikeMultiplier StrikeMultiplier_71;
  StrikeMultiplier_71.setString("14788585");
  msg.set(StrikeMultiplier_71);
  Instrument_71.insert(StrikeMultiplier_71.getString());
  FIX::StrikePrice StrikePrice_71;
  StrikePrice_71.setString("5794558");
  msg.set(StrikePrice_71);
  Instrument_71.insert(StrikePrice_71.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_71(2);
  msg.set(StrikePriceBoundaryMethod_71);
  Instrument_71.insert(StrikePriceBoundaryMethod_71.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_71;
  StrikePriceBoundaryPrecision_71.setString("80.930000");
  msg.set(StrikePriceBoundaryPrecision_71);
  Instrument_71.insert(StrikePriceBoundaryPrecision_71.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_71(4);
  msg.set(StrikePriceDeterminationMethod_71);
  Instrument_71.insert(StrikePriceDeterminationMethod_71.getString());
  FIX::StrikeValue StrikeValue_71;
  StrikeValue_71.setString("3457960");
  msg.set(StrikeValue_71);
  Instrument_71.insert(StrikeValue_71.getString());
  FIX::Symbol Symbol_71("STRING_1003236116");
  msg.set(Symbol_71);
  Instrument_71.insert(Symbol_71.getString());
  FIX::SymbolSfx SymbolSfx_71("STRING_WI");
  msg.set(SymbolSfx_71);
  Instrument_71.insert(SymbolSfx_71.getString());
  FIX::TimeUnit TimeUnit_71("STRING_Yr");
  msg.set(TimeUnit_71);
  Instrument_71.insert(TimeUnit_71.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_71(2);
  msg.set(UnderlyingPriceDeterminationMethod_71);
  Instrument_71.insert(UnderlyingPriceDeterminationMethod_71.getString());
  FIX::UnitOfMeasure UnitOfMeasure_71("STRING_MMbbl");
  msg.set(UnitOfMeasure_71);
  Instrument_71.insert(UnitOfMeasure_71.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_71;
  UnitOfMeasureQty_71.setString("3853179");
  msg.set(UnitOfMeasureQty_71);
  Instrument_71.insert(UnitOfMeasureQty_71.getString());
  FIX::ValuationMethod ValuationMethod_71("STRING_FUTDA");
  msg.set(ValuationMethod_71);
  Instrument_71.insert(ValuationMethod_71.getString());
  all_values.push_back(Instrument_71);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_136;
    FIX::ComplexEventCondition ComplexEventCondition_136(1);
    noComplexEvents_0_0.set(ComplexEventCondition_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventCondition_136.getString());
    FIX::ComplexEventPrice ComplexEventPrice_136;
    ComplexEventPrice_136.setString("17756896");
    noComplexEvents_0_0.set(ComplexEventPrice_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPrice_136.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_136(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryMethod_136.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
    ComplexEventPriceBoundaryPrecision_136.setString("43.750000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryPrecision_136.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_136(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceTimeType_136.getString());
    FIX::ComplexEventType ComplexEventType_136(7);
    noComplexEvents_0_0.set(ComplexEventType_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexEventType_136.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
    ComplexOptPayoutAmount_136.setString("11243975");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_136);
    ComplexEvents_NoComplexEvents_136.insert(ComplexOptPayoutAmount_136.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_136);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_281;
      FIX::ComplexEventEndDate ComplexEventEndDate_281(FIX::UTCTIMESTAMP(7, 45, 19, 16, 3, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventEndDate_281.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_281(FIX::UTCTIMESTAMP(19, 52, 35, 19, 6, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventStartDate_281.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_281);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
        FIX::ComplexEventEndTime ComplexEventEndTime_569(FIX::UTCTIMEONLY(0, 6, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventEndTime_569.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_569(FIX::UTCTIMEONLY(1, 24, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventStartTime_569.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_137;
    FIX::ComplexEventCondition ComplexEventCondition_137(2);
    noComplexEvents_0_1.set(ComplexEventCondition_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventCondition_137.getString());
    FIX::ComplexEventPrice ComplexEventPrice_137;
    ComplexEventPrice_137.setString("6049408");
    noComplexEvents_0_1.set(ComplexEventPrice_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPrice_137.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_137(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryMethod_137.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
    ComplexEventPriceBoundaryPrecision_137.setString("11.520000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryPrecision_137.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_137(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceTimeType_137.getString());
    FIX::ComplexEventType ComplexEventType_137(8);
    noComplexEvents_0_1.set(ComplexEventType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventType_137.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
    ComplexOptPayoutAmount_137.setString("6604750");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexOptPayoutAmount_137.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_137);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_282;
      FIX::ComplexEventEndDate ComplexEventEndDate_282(FIX::UTCTIMESTAMP(14, 8, 58, 26, 11, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventEndDate_282.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_282(FIX::UTCTIMESTAMP(21, 52, 39, 12, 3, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventStartDate_282.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_282);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
        FIX::ComplexEventEndTime ComplexEventEndTime_570(FIX::UTCTIMEONLY(22, 43, 18));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_570);
        ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventEndTime_570.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_570(FIX::UTCTIMEONLY(12, 34, 26));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_570);
        ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventStartTime_570.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
        FIX::ComplexEventEndTime ComplexEventEndTime_571(FIX::UTCTIMEONLY(10, 8, 50));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_571);
        ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventEndTime_571.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_571(FIX::UTCTIMEONLY(2, 45, 21));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_571);
        ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventStartTime_571.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
        FIX::ComplexEventEndTime ComplexEventEndTime_572(FIX::UTCTIMEONLY(11, 29, 6));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_572);
        ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventEndTime_572.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_572(FIX::UTCTIMEONLY(7, 6, 41));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_572);
        ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventStartTime_572.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_138;
    FIX::ComplexEventCondition ComplexEventCondition_138(1);
    noComplexEvents_0_2.set(ComplexEventCondition_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventCondition_138.getString());
    FIX::ComplexEventPrice ComplexEventPrice_138;
    ComplexEventPrice_138.setString("5289190");
    noComplexEvents_0_2.set(ComplexEventPrice_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPrice_138.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_138(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryMethod_138.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
    ComplexEventPriceBoundaryPrecision_138.setString("33.360000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryPrecision_138.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_138(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceTimeType_138.getString());
    FIX::ComplexEventType ComplexEventType_138(9);
    noComplexEvents_0_2.set(ComplexEventType_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventType_138.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
    ComplexOptPayoutAmount_138.setString("1567089");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexOptPayoutAmount_138.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_138);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_283;
      FIX::ComplexEventEndDate ComplexEventEndDate_283(FIX::UTCTIMESTAMP(11, 10, 21, 0, 2, 2017));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventEndDate_283.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_283(FIX::UTCTIMESTAMP(11, 48, 32, 10, 3, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventStartDate_283.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_283);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
        FIX::ComplexEventEndTime ComplexEventEndTime_573(FIX::UTCTIMEONLY(21, 36, 41));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_573);
        ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventEndTime_573.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_573(FIX::UTCTIMEONLY(19, 47, 32));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_573);
        ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventStartTime_573.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_284;
      FIX::ComplexEventEndDate ComplexEventEndDate_284(FIX::UTCTIMESTAMP(2, 45, 43, 7, 9, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventEndDate_284.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_284(FIX::UTCTIMESTAMP(5, 3, 18, 23, 8, 2013));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventStartDate_284.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_284);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
        FIX::ComplexEventEndTime ComplexEventEndTime_574(FIX::UTCTIMEONLY(23, 10, 25));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_574);
        ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventEndTime_574.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_574(FIX::UTCTIMEONLY(4, 35, 8));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_574);
        ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventStartTime_574.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_139;
    FIX::EventDate EventDate_139("LOCALMKTDATE_329653549");
    noEvents_0_0.set(EventDate_139);
    EvntGrp_NoEvents_139.insert(EventDate_139.getString());
    FIX::EventPx EventPx_139;
    EventPx_139.setString("8926778");
    noEvents_0_0.set(EventPx_139);
    EvntGrp_NoEvents_139.insert(EventPx_139.getString());
    FIX::EventText EventText_139("STRING_1256028824");
    noEvents_0_0.set(EventText_139);
    EvntGrp_NoEvents_139.insert(EventText_139.getString());
    FIX::EventTime EventTime_139(FIX::UTCTIMESTAMP(7, 23, 12, 18, 7, 2004));
    noEvents_0_0.set(EventTime_139);
    EvntGrp_NoEvents_139.insert(EventTime_139.getString());
    FIX::EventType EventType_139(18);
    noEvents_0_0.set(EventType_139);
    EvntGrp_NoEvents_139.insert(EventType_139.getString());
    all_values.push_back(EvntGrp_NoEvents_139);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_137;
    FIX::InstrumentPartyID InstrumentPartyID_137("STRING_1731020574");
    noInstrumentParties_0_0.set(InstrumentPartyID_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyID_137.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_137('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyIDSource_137.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_137(399615085);
    noInstrumentParties_0_0.set(InstrumentPartyRole_137);
    InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyRole_137.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_137);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280;
      FIX::InstrumentPartySubID InstrumentPartySubID_280("STRING_90328519");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubID_280.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_280(1587511424);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubIDType_280.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281;
      FIX::InstrumentPartySubID InstrumentPartySubID_281("STRING_808669499");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubID_281.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_281(1076443058);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubIDType_281.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_138;
    FIX::InstrumentPartyID InstrumentPartyID_138("STRING_1156470331");
    noInstrumentParties_0_1.set(InstrumentPartyID_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyID_138.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_138('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyIDSource_138.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_138(670213651);
    noInstrumentParties_0_1.set(InstrumentPartyRole_138);
    InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyRole_138.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_138);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282;
      FIX::InstrumentPartySubID InstrumentPartySubID_282("STRING_793189532");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubID_282.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_282(1376479017);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubIDType_282.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283;
      FIX::InstrumentPartySubID InstrumentPartySubID_283("STRING_862773675");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubID_283.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_283(1095504360);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubIDType_283.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_139;
    FIX::InstrumentPartyID InstrumentPartyID_139("STRING_2065585592");
    noInstrumentParties_0_2.set(InstrumentPartyID_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyID_139.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_139('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyIDSource_139.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_139(1667725863);
    noInstrumentParties_0_2.set(InstrumentPartyRole_139);
    InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyRole_139.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_139);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
      FIX::InstrumentPartySubID InstrumentPartySubID_284("STRING_363828719");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_284);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubID_284.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_284(776271039);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_284);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubIDType_284.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
      FIX::InstrumentPartySubID InstrumentPartySubID_285("STRING_593055713");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_285);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubID_285.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_285(872203854);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_285);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubIDType_285.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_153;
    FIX::SecurityAltID SecurityAltID_153("STRING_1286268306");
    noSecurityAltID_0_0.set(SecurityAltID_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltID_153.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_153("STRING_570854108");
    noSecurityAltID_0_0.set(SecurityAltIDSource_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltIDSource_153.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_142;
  FIX::SecurityXML SecurityXML_143("XMLDATA_1242995457");
  msg.set(SecurityXML_143);
  FIX::SecurityXMLLen SecurityXMLLen_71(288569276);
  msg.set(SecurityXMLLen_71);
  FIX::SecurityXMLSchema SecurityXMLSchema_71("STRING_2008346465");
  msg.set(SecurityXMLSchema_71);
  SecurityXML_142.insert(SecurityXMLSchema_71.getString());
  all_values.push_back(SecurityXML_142);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_127;
    FIX::PartyID PartyID_127("STRING_2019589850");
    noPartyIDs_0_0.set(PartyID_127);
    Parties_NoPartyIDs_127.insert(PartyID_127.getString());
    FIX::PartyIDSource PartyIDSource_127('G');
    noPartyIDs_0_0.set(PartyIDSource_127);
    Parties_NoPartyIDs_127.insert(PartyIDSource_127.getString());
    FIX::PartyRole PartyRole_127(82);
    noPartyIDs_0_0.set(PartyRole_127);
    Parties_NoPartyIDs_127.insert(PartyRole_127.getString());
    all_values.push_back(Parties_NoPartyIDs_127);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      FIX::PartySubID PartySubID_253("STRING_1136751101");
      noPartySubIDs_0_1_0.set(PartySubID_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubID_253.getString());
      FIX::PartySubIDType PartySubIDType_253(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubIDType_253.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      FIX::PartySubID PartySubID_254("STRING_1560405537");
      noPartySubIDs_0_1_1.set(PartySubID_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubID_254.getString());
      FIX::PartySubIDType PartySubIDType_254(22);
      noPartySubIDs_0_1_1.set(PartySubIDType_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubIDType_254.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    FIX::TradingSessionID TradingSessionID_75("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_75);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionID_75.getString());
    FIX::TradingSessionSubID TradingSessionSubID_75("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_75);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionSubID_75.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);

    msg.addGroup(noTradingSessions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_107;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_107("DATA_344423443");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuer_107.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_107(2112403180);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuerLen_107.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_107("DATA_406096269");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDesc_107.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_107(1439927803);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDescLen_107.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
    UnderlyingAdjustedQuantity_107.setString("20305051");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_107);
    UnderlyingInstrument_107.insert(UnderlyingAdjustedQuantity_107.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
    UnderlyingAllocationPercent_107.setString("7.530000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_107);
    UnderlyingInstrument_107.insert(UnderlyingAllocationPercent_107.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
    UnderlyingAttachmentPoint_107.setString("0.190000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingAttachmentPoint_107.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_107("STRING_130776970");
    noUnderlyings_0_0.set(UnderlyingCFICode_107);
    UnderlyingInstrument_107.insert(UnderlyingCFICode_107.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_107("STRING_241075824");
    noUnderlyings_0_0.set(UnderlyingCPProgram_107);
    UnderlyingInstrument_107.insert(UnderlyingCPProgram_107.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_107("STRING_1736441058");
    noUnderlyings_0_0.set(UnderlyingCPRegType_107);
    UnderlyingInstrument_107.insert(UnderlyingCPRegType_107.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_107;
    UnderlyingCapValue_107.setString("7238326");
    noUnderlyings_0_0.set(UnderlyingCapValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCapValue_107.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
    UnderlyingCashAmount_107.setString("11132796");
    noUnderlyings_0_0.set(UnderlyingCashAmount_107);
    UnderlyingInstrument_107.insert(UnderlyingCashAmount_107.getString());
    FIX::UnderlyingCashType UnderlyingCashType_107("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_107);
    UnderlyingInstrument_107.insert(UnderlyingCashType_107.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
    UnderlyingContractMultiplier_107.setString("20101009");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplier_107.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_107(1684133787);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplierUnit_107.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_107("COUNTRY_2006168650");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingCountryOfIssue_107.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_107("LOCALMKTDATE_151186618");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponPaymentDate_107.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
    UnderlyingCouponRate_107.setString("66.050000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponRate_107.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_107("STRING_175720449");
    noUnderlyings_0_0.set(UnderlyingCreditRating_107);
    UnderlyingInstrument_107.insert(UnderlyingCreditRating_107.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_107("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrency_107.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
    UnderlyingCurrentValue_107.setString("8923709");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrentValue_107.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
    UnderlyingDetachmentPoint_107.setString("88.590000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingDetachmentPoint_107.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
    UnderlyingDirtyPrice_107.setString("15806866");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingDirtyPrice_107.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
    UnderlyingEndPrice_107.setString("10490492");
    noUnderlyings_0_0.set(UnderlyingEndPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingEndPrice_107.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_107;
    UnderlyingEndValue_107.setString("1879507");
    noUnderlyings_0_0.set(UnderlyingEndValue_107);
    UnderlyingInstrument_107.insert(UnderlyingEndValue_107.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_107(1646397152);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_107);
    UnderlyingInstrument_107.insert(UnderlyingExerciseStyle_107.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_107;
    UnderlyingFXRate_107.setString("2147142");
    noUnderlyings_0_0.set(UnderlyingFXRate_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRate_107.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_107('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRateCalc_107.getString());
    FIX::UnderlyingFactor UnderlyingFactor_107;
    UnderlyingFactor_107.setString("2348376");
    noUnderlyings_0_0.set(UnderlyingFactor_107);
    UnderlyingInstrument_107.insert(UnderlyingFactor_107.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_107(1905520522);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_107);
    UnderlyingInstrument_107.insert(UnderlyingFlowScheduleType_107.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_107("STRING_83608102");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_107);
    UnderlyingInstrument_107.insert(UnderlyingInstrRegistry_107.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_107("LOCALMKTDATE_199757200");
    noUnderlyings_0_0.set(UnderlyingIssueDate_107);
    UnderlyingInstrument_107.insert(UnderlyingIssueDate_107.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_107("STRING_164133144");
    noUnderlyings_0_0.set(UnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(UnderlyingIssuer_107.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_107("STRING_1523535906");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingLocaleOfIssue_107.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_107("LOCALMKTDATE_82778677");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityDate_107.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_107("MONTHYEAR_41380249");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityMonthYear_107.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_107("TZTIMEONLY_336222277");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityTime_107.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
    UnderlyingNotionalPercentageOutstanding_107.setString("56.480000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_107('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_107);
    UnderlyingInstrument_107.insert(UnderlyingOptAttribute_107.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
    UnderlyingOriginalNotionalPercentageOutstanding_107.setString("33.350000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingOriginalNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_107("STRING_937388332");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasure_107.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
    UnderlyingPriceUnitOfMeasureQty_107.setString("13957357");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasureQty_107.getString());
    FIX::UnderlyingProduct UnderlyingProduct_107(688352881);
    noUnderlyings_0_0.set(UnderlyingProduct_107);
    UnderlyingInstrument_107.insert(UnderlyingProduct_107.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_107(800005674);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_107);
    UnderlyingInstrument_107.insert(UnderlyingPutOrCall_107.getString());
    FIX::UnderlyingPx UnderlyingPx_107;
    UnderlyingPx_107.setString("9323858");
    noUnderlyings_0_0.set(UnderlyingPx_107);
    UnderlyingInstrument_107.insert(UnderlyingPx_107.getString());
    FIX::UnderlyingQty UnderlyingQty_107;
    UnderlyingQty_107.setString("5470378");
    noUnderlyings_0_0.set(UnderlyingQty_107);
    UnderlyingInstrument_107.insert(UnderlyingQty_107.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_107("LOCALMKTDATE_951192292");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_107);
    UnderlyingInstrument_107.insert(UnderlyingRedemptionDate_107.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_107("STRING_329898849");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingRepoCollateralSecurityType_107.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
    UnderlyingRepurchaseRate_107.setString("83.320000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseRate_107.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_107(974485112);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseTerm_107.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_107("STRING_773834388");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_107);
    UnderlyingInstrument_107.insert(UnderlyingRestructuringType_107.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_107("STRING_1615129313");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityDesc_107.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_107("EXCHANGE_1749513971");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityExchange_107.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_107("STRING_207037380");
    noUnderlyings_0_0.set(UnderlyingSecurityID_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityID_107.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_107("STRING_516694954");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityIDSource_107.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_107("STRING_1937464720");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecuritySubType_107.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_107("STRING_1853434533");
    noUnderlyings_0_0.set(UnderlyingSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityType_107.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_107("STRING_731409235");
    noUnderlyings_0_0.set(UnderlyingSeniority_107);
    UnderlyingInstrument_107.insert(UnderlyingSeniority_107.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_107("STRING_1676649379");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlMethod_107.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_107(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlementType_107.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_107;
    UnderlyingStartValue_107.setString("4894461");
    noUnderlyings_0_0.set(UnderlyingStartValue_107);
    UnderlyingInstrument_107.insert(UnderlyingStartValue_107.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_107("STRING_1760257482");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingStateOrProvinceOfIssue_107.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_107("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikeCurrency_107.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
    UnderlyingStrikePrice_107.setString("11363097");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikePrice_107.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_107("STRING_223324431");
    noUnderlyings_0_0.set(UnderlyingSymbol_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbol_107.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_107("STRING_694959502");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbolSfx_107.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_107("STRING_1472532017");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingTimeUnit_107.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_107("STRING_436880079");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasure_107.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
    UnderlyingUnitOfMeasureQty_107.setString("9774155");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasureQty_107.getString());
    all_values.push_back(UnderlyingInstrument_107);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_220("STRING_1374268411");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltID_220.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_220("STRING_225667680");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltIDSource_220.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_221("STRING_2086064585");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltID_221.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_221("STRING_26790437");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltIDSource_221.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
      FIX::UnderlyingStipType UnderlyingStipType_212("STRING_485618821");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipType_212.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_212("STRING_977982729");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipValue_212.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
      FIX::UnderlyingStipType UnderlyingStipType_213("STRING_1487952421");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipType_213.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_213("STRING_1208377153");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipValue_213.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_214("STRING_114303161");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyID_214.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_214('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyIDSource_214.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_214(1554498165);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyRole_214.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_424("STRING_1192717773");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubID_424.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_424(1344479237);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubIDType_424.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_215("STRING_27291427");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyID_215.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_215('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyIDSource_215.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_215(873644968);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyRole_215.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_425("STRING_266089470");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubID_425.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_425(486418802);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubIDType_425.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_216("STRING_108625733");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyID_216.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_216('9');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyIDSource_216.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_216(1622728542);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyRole_216.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_426("STRING_1614628226");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubID_426.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_426(947776911);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubIDType_426.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_427("STRING_768830243");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubID_427.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_427(444560154);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubIDType_427.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_428("STRING_198004968");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubID_428.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_428(2143098654);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubIDType_428.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_108("DATA_670227834");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuer_108.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_108(136585905);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuerLen_108.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_108("DATA_22405443");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDesc_108.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_108(1828281407);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDescLen_108.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("6222047");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_108);
    UnderlyingInstrument_108.insert(UnderlyingAdjustedQuantity_108.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("81.720000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_108);
    UnderlyingInstrument_108.insert(UnderlyingAllocationPercent_108.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("1.800000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingAttachmentPoint_108.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_108("STRING_1830581880");
    noUnderlyings_0_1.set(UnderlyingCFICode_108);
    UnderlyingInstrument_108.insert(UnderlyingCFICode_108.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_108("STRING_805372366");
    noUnderlyings_0_1.set(UnderlyingCPProgram_108);
    UnderlyingInstrument_108.insert(UnderlyingCPProgram_108.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_108("STRING_1283053342");
    noUnderlyings_0_1.set(UnderlyingCPRegType_108);
    UnderlyingInstrument_108.insert(UnderlyingCPRegType_108.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("3591210");
    noUnderlyings_0_1.set(UnderlyingCapValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCapValue_108.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("2123868");
    noUnderlyings_0_1.set(UnderlyingCashAmount_108);
    UnderlyingInstrument_108.insert(UnderlyingCashAmount_108.getString());
    FIX::UnderlyingCashType UnderlyingCashType_108("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_108);
    UnderlyingInstrument_108.insert(UnderlyingCashType_108.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("15518388");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplier_108.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_108(1556866120);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplierUnit_108.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_108("COUNTRY_1631685311");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingCountryOfIssue_108.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_108("LOCALMKTDATE_1328482185");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponPaymentDate_108.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("74.400000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponRate_108.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_108("STRING_1599765291");
    noUnderlyings_0_1.set(UnderlyingCreditRating_108);
    UnderlyingInstrument_108.insert(UnderlyingCreditRating_108.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_108("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrency_108.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("17083910");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrentValue_108.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("67.300000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingDetachmentPoint_108.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("2446911");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingDirtyPrice_108.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("20403411");
    noUnderlyings_0_1.set(UnderlyingEndPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingEndPrice_108.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("19813849");
    noUnderlyings_0_1.set(UnderlyingEndValue_108);
    UnderlyingInstrument_108.insert(UnderlyingEndValue_108.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_108(1192468049);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_108);
    UnderlyingInstrument_108.insert(UnderlyingExerciseStyle_108.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("6616877");
    noUnderlyings_0_1.set(UnderlyingFXRate_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRate_108.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_108('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRateCalc_108.getString());
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("13904730");
    noUnderlyings_0_1.set(UnderlyingFactor_108);
    UnderlyingInstrument_108.insert(UnderlyingFactor_108.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_108(657302791);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_108);
    UnderlyingInstrument_108.insert(UnderlyingFlowScheduleType_108.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_108("STRING_948689297");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_108);
    UnderlyingInstrument_108.insert(UnderlyingInstrRegistry_108.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_108("LOCALMKTDATE_1527058922");
    noUnderlyings_0_1.set(UnderlyingIssueDate_108);
    UnderlyingInstrument_108.insert(UnderlyingIssueDate_108.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_108("STRING_679708234");
    noUnderlyings_0_1.set(UnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(UnderlyingIssuer_108.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_108("STRING_629487056");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingLocaleOfIssue_108.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_108("LOCALMKTDATE_1780001");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityDate_108.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_108("MONTHYEAR_1680096407");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityMonthYear_108.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_108("TZTIMEONLY_1798237236");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityTime_108.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("18.810000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_108('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_108);
    UnderlyingInstrument_108.insert(UnderlyingOptAttribute_108.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("69.300000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingOriginalNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_108("STRING_43999284");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasure_108.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("5503720");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasureQty_108.getString());
    FIX::UnderlyingProduct UnderlyingProduct_108(390717166);
    noUnderlyings_0_1.set(UnderlyingProduct_108);
    UnderlyingInstrument_108.insert(UnderlyingProduct_108.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_108(1595838108);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_108);
    UnderlyingInstrument_108.insert(UnderlyingPutOrCall_108.getString());
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("21072381");
    noUnderlyings_0_1.set(UnderlyingPx_108);
    UnderlyingInstrument_108.insert(UnderlyingPx_108.getString());
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("20224024");
    noUnderlyings_0_1.set(UnderlyingQty_108);
    UnderlyingInstrument_108.insert(UnderlyingQty_108.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_108("LOCALMKTDATE_776836645");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_108);
    UnderlyingInstrument_108.insert(UnderlyingRedemptionDate_108.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_108("STRING_242781920");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingRepoCollateralSecurityType_108.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("41.200000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseRate_108.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_108(223924652);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseTerm_108.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_108("STRING_1012228163");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_108);
    UnderlyingInstrument_108.insert(UnderlyingRestructuringType_108.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_108("STRING_1035591497");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityDesc_108.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_108("EXCHANGE_590681383");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityExchange_108.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_108("STRING_1256919301");
    noUnderlyings_0_1.set(UnderlyingSecurityID_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityID_108.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_108("STRING_928449038");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityIDSource_108.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_108("STRING_424582691");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecuritySubType_108.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_108("STRING_301903702");
    noUnderlyings_0_1.set(UnderlyingSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityType_108.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_108("STRING_1590136822");
    noUnderlyings_0_1.set(UnderlyingSeniority_108);
    UnderlyingInstrument_108.insert(UnderlyingSeniority_108.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_108("STRING_703044154");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlMethod_108.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_108(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlementType_108.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("999559");
    noUnderlyings_0_1.set(UnderlyingStartValue_108);
    UnderlyingInstrument_108.insert(UnderlyingStartValue_108.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_108("STRING_1651733451");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingStateOrProvinceOfIssue_108.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_108("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikeCurrency_108.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("1337368");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikePrice_108.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_108("STRING_1073731994");
    noUnderlyings_0_1.set(UnderlyingSymbol_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbol_108.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_108("STRING_312276959");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbolSfx_108.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_108("STRING_1931974095");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingTimeUnit_108.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_108("STRING_758610227");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasure_108.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("6502620");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasureQty_108.getString());
    all_values.push_back(UnderlyingInstrument_108);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_222("STRING_802609511");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltID_222.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_222("STRING_1200634092");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltIDSource_222.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_223("STRING_1109014544");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltID_223.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_223("STRING_250963972");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltIDSource_223.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
      FIX::UnderlyingStipType UnderlyingStipType_214("STRING_983933374");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipType_214.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_214("STRING_1027800617");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipValue_214.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
      FIX::UnderlyingStipType UnderlyingStipType_215("STRING_1403170492");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipType_215.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_215("STRING_311133846");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipValue_215.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
      FIX::UnderlyingStipType UnderlyingStipType_216("STRING_1251725270");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipType_216.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_216("STRING_267915008");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipValue_216.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_217("STRING_1842406653");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyID_217.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_217('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyIDSource_217.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_217(127690733);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyRole_217.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_429("STRING_1826738011");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubID_429.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_429(1717827556);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubIDType_429.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_218("STRING_822549850");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyID_218.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_218('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyIDSource_218.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_218(1817783521);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_218);
      UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyRole_218.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_430("STRING_296099427");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubID_430.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_430(449964073);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubIDType_430.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_431("STRING_460536512");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubID_431.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_431(1369831422);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubIDType_431.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_432("STRING_762241032");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubID_432.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_432(245026960);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_432);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubIDType_432.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_219("STRING_2128441649");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyID_219.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_219('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyIDSource_219.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_219(963324338);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_219);
      UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyRole_219.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_433("STRING_465653560");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubID_433.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_433(2072338882);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubIDType_433.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_109;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_109("DATA_1034531485");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuer_109.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_109(1626042132);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuerLen_109.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_109("DATA_908788608");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDesc_109.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_109(2062332102);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDescLen_109.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
    UnderlyingAdjustedQuantity_109.setString("8817289");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_109);
    UnderlyingInstrument_109.insert(UnderlyingAdjustedQuantity_109.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
    UnderlyingAllocationPercent_109.setString("24.550000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_109);
    UnderlyingInstrument_109.insert(UnderlyingAllocationPercent_109.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
    UnderlyingAttachmentPoint_109.setString("37.240000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingAttachmentPoint_109.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_109("STRING_1149643985");
    noUnderlyings_0_2.set(UnderlyingCFICode_109);
    UnderlyingInstrument_109.insert(UnderlyingCFICode_109.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_109("STRING_419164150");
    noUnderlyings_0_2.set(UnderlyingCPProgram_109);
    UnderlyingInstrument_109.insert(UnderlyingCPProgram_109.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_109("STRING_861496729");
    noUnderlyings_0_2.set(UnderlyingCPRegType_109);
    UnderlyingInstrument_109.insert(UnderlyingCPRegType_109.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_109;
    UnderlyingCapValue_109.setString("5269946");
    noUnderlyings_0_2.set(UnderlyingCapValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCapValue_109.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
    UnderlyingCashAmount_109.setString("5468548");
    noUnderlyings_0_2.set(UnderlyingCashAmount_109);
    UnderlyingInstrument_109.insert(UnderlyingCashAmount_109.getString());
    FIX::UnderlyingCashType UnderlyingCashType_109("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_109);
    UnderlyingInstrument_109.insert(UnderlyingCashType_109.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
    UnderlyingContractMultiplier_109.setString("2062490");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplier_109.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_109(117198792);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplierUnit_109.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_109("COUNTRY_1803552276");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingCountryOfIssue_109.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_109("LOCALMKTDATE_1577880091");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponPaymentDate_109.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
    UnderlyingCouponRate_109.setString("23.130000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponRate_109.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_109("STRING_2130351930");
    noUnderlyings_0_2.set(UnderlyingCreditRating_109);
    UnderlyingInstrument_109.insert(UnderlyingCreditRating_109.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_109("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrency_109.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
    UnderlyingCurrentValue_109.setString("4434047");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrentValue_109.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
    UnderlyingDetachmentPoint_109.setString("72.920000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingDetachmentPoint_109.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
    UnderlyingDirtyPrice_109.setString("9997037");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingDirtyPrice_109.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
    UnderlyingEndPrice_109.setString("6884317");
    noUnderlyings_0_2.set(UnderlyingEndPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingEndPrice_109.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_109;
    UnderlyingEndValue_109.setString("10772852");
    noUnderlyings_0_2.set(UnderlyingEndValue_109);
    UnderlyingInstrument_109.insert(UnderlyingEndValue_109.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_109(264723240);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_109);
    UnderlyingInstrument_109.insert(UnderlyingExerciseStyle_109.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_109;
    UnderlyingFXRate_109.setString("16517560");
    noUnderlyings_0_2.set(UnderlyingFXRate_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRate_109.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_109('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRateCalc_109.getString());
    FIX::UnderlyingFactor UnderlyingFactor_109;
    UnderlyingFactor_109.setString("7303768");
    noUnderlyings_0_2.set(UnderlyingFactor_109);
    UnderlyingInstrument_109.insert(UnderlyingFactor_109.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_109(1576611327);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_109);
    UnderlyingInstrument_109.insert(UnderlyingFlowScheduleType_109.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_109("STRING_747900644");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_109);
    UnderlyingInstrument_109.insert(UnderlyingInstrRegistry_109.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_109("LOCALMKTDATE_208935285");
    noUnderlyings_0_2.set(UnderlyingIssueDate_109);
    UnderlyingInstrument_109.insert(UnderlyingIssueDate_109.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_109("STRING_337916287");
    noUnderlyings_0_2.set(UnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(UnderlyingIssuer_109.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_109("STRING_662749098");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingLocaleOfIssue_109.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_109("LOCALMKTDATE_1090664262");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityDate_109.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_109("MONTHYEAR_1557838742");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityMonthYear_109.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_109("TZTIMEONLY_1829322823");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityTime_109.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
    UnderlyingNotionalPercentageOutstanding_109.setString("45.990000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_109('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_109);
    UnderlyingInstrument_109.insert(UnderlyingOptAttribute_109.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
    UnderlyingOriginalNotionalPercentageOutstanding_109.setString("59.040000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingOriginalNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_109("STRING_619819245");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasure_109.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
    UnderlyingPriceUnitOfMeasureQty_109.setString("3763741");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasureQty_109.getString());
    FIX::UnderlyingProduct UnderlyingProduct_109(1524338330);
    noUnderlyings_0_2.set(UnderlyingProduct_109);
    UnderlyingInstrument_109.insert(UnderlyingProduct_109.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_109(826068254);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_109);
    UnderlyingInstrument_109.insert(UnderlyingPutOrCall_109.getString());
    FIX::UnderlyingPx UnderlyingPx_109;
    UnderlyingPx_109.setString("4935729");
    noUnderlyings_0_2.set(UnderlyingPx_109);
    UnderlyingInstrument_109.insert(UnderlyingPx_109.getString());
    FIX::UnderlyingQty UnderlyingQty_109;
    UnderlyingQty_109.setString("11804069");
    noUnderlyings_0_2.set(UnderlyingQty_109);
    UnderlyingInstrument_109.insert(UnderlyingQty_109.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_109("LOCALMKTDATE_256464697");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_109);
    UnderlyingInstrument_109.insert(UnderlyingRedemptionDate_109.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_109("STRING_281071586");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingRepoCollateralSecurityType_109.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
    UnderlyingRepurchaseRate_109.setString("52.410000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseRate_109.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_109(2130444215);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseTerm_109.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_109("STRING_518534325");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_109);
    UnderlyingInstrument_109.insert(UnderlyingRestructuringType_109.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_109("STRING_1606680035");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityDesc_109.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_109("EXCHANGE_1079287860");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityExchange_109.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_109("STRING_1518238097");
    noUnderlyings_0_2.set(UnderlyingSecurityID_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityID_109.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_109("STRING_147628142");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityIDSource_109.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_109("STRING_9089506");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecuritySubType_109.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_109("STRING_1782961337");
    noUnderlyings_0_2.set(UnderlyingSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityType_109.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_109("STRING_1799384234");
    noUnderlyings_0_2.set(UnderlyingSeniority_109);
    UnderlyingInstrument_109.insert(UnderlyingSeniority_109.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_109("STRING_1869942313");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlMethod_109.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_109(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlementType_109.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_109;
    UnderlyingStartValue_109.setString("12285119");
    noUnderlyings_0_2.set(UnderlyingStartValue_109);
    UnderlyingInstrument_109.insert(UnderlyingStartValue_109.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_109("STRING_470359309");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingStateOrProvinceOfIssue_109.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_109("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikeCurrency_109.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
    UnderlyingStrikePrice_109.setString("11331084");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikePrice_109.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_109("STRING_1665454036");
    noUnderlyings_0_2.set(UnderlyingSymbol_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbol_109.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_109("STRING_976783295");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbolSfx_109.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_109("STRING_814947582");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingTimeUnit_109.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_109("STRING_1758278635");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasure_109.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
    UnderlyingUnitOfMeasureQty_109.setString("8063025");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasureQty_109.getString());
    all_values.push_back(UnderlyingInstrument_109);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_224("STRING_230614232");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_224);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltID_224.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_224("STRING_1182676669");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_224);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltIDSource_224.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_225("STRING_735138169");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_225);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltID_225.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_225("STRING_1056682486");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_225);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltIDSource_225.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
      FIX::UnderlyingStipType UnderlyingStipType_217("STRING_1915545128");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipType_217.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_217("STRING_1313147183");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipValue_217.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
      FIX::UnderlyingStipType UnderlyingStipType_218("STRING_1957321177");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipType_218.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_218("STRING_931336721");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipValue_218.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_220("STRING_328371854");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyID_220.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_220('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyIDSource_220.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_220(227911963);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyRole_220.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_434("STRING_538161251");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubID_434.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_434(237001469);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubIDType_434.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_435("STRING_1482087640");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubID_435.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_435(190061837);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubIDType_435.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
