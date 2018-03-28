#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositionsAck msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositionsAck_0;
  FIX::Account Account_41("STRING_2106943782");
  msg.set(Account_41);
  RequestForPositionsAck_0.insert(Account_41.getString());
  FIX::AccountType AccountType_34(8);
  msg.set(AccountType_34);
  RequestForPositionsAck_0.insert(AccountType_34.getString());
  FIX::AcctIDSource AcctIDSource_34(4);
  msg.set(AcctIDSource_34);
  RequestForPositionsAck_0.insert(AcctIDSource_34.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_19("LOCALMKTDATE_429819443");
  msg.set(ClearingBusinessDate_19);
  RequestForPositionsAck_0.insert(ClearingBusinessDate_19.getString());
  FIX::Currency Currency_56("USD");
  msg.set(Currency_56);
  RequestForPositionsAck_0.insert(Currency_56.getString());
  FIX::EncodedText EncodedText_85("DATA_1562927850");
  msg.set(EncodedText_85);
  RequestForPositionsAck_0.insert(EncodedText_85.getString());
  FIX::EncodedTextLen EncodedTextLen_85(1940702293);
  msg.set(EncodedTextLen_85);
  RequestForPositionsAck_0.insert(EncodedTextLen_85.getString());
  FIX::MatchStatus MatchStatus_10('2');
  msg.set(MatchStatus_10);
  RequestForPositionsAck_0.insert(MatchStatus_10.getString());
  FIX::PosMaintRptID PosMaintRptID_3("STRING_230391785");
  msg.set(PosMaintRptID_3);
  RequestForPositionsAck_0.insert(PosMaintRptID_3.getString());
  FIX::PosReqID PosReqID_5("STRING_1551497280");
  msg.set(PosReqID_5);
  RequestForPositionsAck_0.insert(PosReqID_5.getString());
  FIX::PosReqResult PosReqResult_1(2);
  msg.set(PosReqResult_1);
  RequestForPositionsAck_0.insert(PosReqResult_1.getString());
  FIX::PosReqStatus PosReqStatus_0(0);
  msg.set(PosReqStatus_0);
  RequestForPositionsAck_0.insert(PosReqStatus_0.getString());
  FIX::PosReqType PosReqType_3(0);
  msg.set(PosReqType_3);
  RequestForPositionsAck_0.insert(PosReqType_3.getString());
  FIX::ResponseDestination ResponseDestination_3("STRING_1655797161");
  msg.set(ResponseDestination_3);
  RequestForPositionsAck_0.insert(ResponseDestination_3.getString());
  FIX::ResponseTransportType ResponseTransportType_3(1);
  msg.set(ResponseTransportType_3);
  RequestForPositionsAck_0.insert(ResponseTransportType_3.getString());
  FIX::SettlCurrency SettlCurrency_29("USD");
  msg.set(SettlCurrency_29);
  RequestForPositionsAck_0.insert(SettlCurrency_29.getString());
  FIX::SettlSessID SettlSessID_11("STRING_ETH");
  msg.set(SettlSessID_11);
  RequestForPositionsAck_0.insert(SettlSessID_11.getString());
  FIX::SettlSessSubID SettlSessSubID_10("STRING_2004457535");
  msg.set(SettlSessSubID_10);
  RequestForPositionsAck_0.insert(SettlSessSubID_10.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_8('2');
  msg.set(SubscriptionRequestType_8);
  RequestForPositionsAck_0.insert(SubscriptionRequestType_8.getString());
  FIX::Text Text_85("STRING_875727995");
  msg.set(Text_85);
  RequestForPositionsAck_0.insert(Text_85.getString());
  FIX::TotalNumPosReports TotalNumPosReports_1(1153081638);
  msg.set(TotalNumPosReports_1);
  RequestForPositionsAck_0.insert(TotalNumPosReports_1.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_1(false);
  msg.set(UnsolicitedIndicator_1);
  RequestForPositionsAck_0.insert(UnsolicitedIndicator_1.getString());
  all_values.push_back(RequestForPositionsAck_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_113;
    FIX::EncodedLegIssuer EncodedLegIssuer_113("DATA_1380993601");
    noLegs_0_0.set(EncodedLegIssuer_113);
    InstrumentLeg_113.insert(EncodedLegIssuer_113.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_113(1021898791);
    noLegs_0_0.set(EncodedLegIssuerLen_113);
    InstrumentLeg_113.insert(EncodedLegIssuerLen_113.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_113("DATA_1804422355");
    noLegs_0_0.set(EncodedLegSecurityDesc_113);
    InstrumentLeg_113.insert(EncodedLegSecurityDesc_113.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_113(1617995070);
    noLegs_0_0.set(EncodedLegSecurityDescLen_113);
    InstrumentLeg_113.insert(EncodedLegSecurityDescLen_113.getString());
    FIX::LegCFICode LegCFICode_113("STRING_356502783");
    noLegs_0_0.set(LegCFICode_113);
    InstrumentLeg_113.insert(LegCFICode_113.getString());
    FIX::LegContractMultiplier LegContractMultiplier_113;
    LegContractMultiplier_113.setString("19944841");
    noLegs_0_0.set(LegContractMultiplier_113);
    InstrumentLeg_113.insert(LegContractMultiplier_113.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_113(1577455204);
    noLegs_0_0.set(LegContractMultiplierUnit_113);
    InstrumentLeg_113.insert(LegContractMultiplierUnit_113.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_113("MONTHYEAR_56961265");
    noLegs_0_0.set(LegContractSettlMonth_113);
    InstrumentLeg_113.insert(LegContractSettlMonth_113.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_113("COUNTRY_1265574296");
    noLegs_0_0.set(LegCountryOfIssue_113);
    InstrumentLeg_113.insert(LegCountryOfIssue_113.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_113("LOCALMKTDATE_2007274647");
    noLegs_0_0.set(LegCouponPaymentDate_113);
    InstrumentLeg_113.insert(LegCouponPaymentDate_113.getString());
    FIX::LegCouponRate LegCouponRate_113;
    LegCouponRate_113.setString("95.220000");
    noLegs_0_0.set(LegCouponRate_113);
    InstrumentLeg_113.insert(LegCouponRate_113.getString());
    FIX::LegCreditRating LegCreditRating_113("STRING_2103092600");
    noLegs_0_0.set(LegCreditRating_113);
    InstrumentLeg_113.insert(LegCreditRating_113.getString());
    FIX::LegCurrency LegCurrency_113("CHF");
    noLegs_0_0.set(LegCurrency_113);
    InstrumentLeg_113.insert(LegCurrency_113.getString());
    FIX::LegDatedDate LegDatedDate_113("LOCALMKTDATE_1769910551");
    noLegs_0_0.set(LegDatedDate_113);
    InstrumentLeg_113.insert(LegDatedDate_113.getString());
    FIX::LegExerciseStyle LegExerciseStyle_113(1653110634);
    noLegs_0_0.set(LegExerciseStyle_113);
    InstrumentLeg_113.insert(LegExerciseStyle_113.getString());
    FIX::LegFactor LegFactor_113;
    LegFactor_113.setString("16769254");
    noLegs_0_0.set(LegFactor_113);
    InstrumentLeg_113.insert(LegFactor_113.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_113(95547395);
    noLegs_0_0.set(LegFlowScheduleType_113);
    InstrumentLeg_113.insert(LegFlowScheduleType_113.getString());
    FIX::LegInstrRegistry LegInstrRegistry_113("STRING_1094302258");
    noLegs_0_0.set(LegInstrRegistry_113);
    InstrumentLeg_113.insert(LegInstrRegistry_113.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_113("LOCALMKTDATE_1311553312");
    noLegs_0_0.set(LegInterestAccrualDate_113);
    InstrumentLeg_113.insert(LegInterestAccrualDate_113.getString());
    FIX::LegIssueDate LegIssueDate_113("LOCALMKTDATE_1751344557");
    noLegs_0_0.set(LegIssueDate_113);
    InstrumentLeg_113.insert(LegIssueDate_113.getString());
    FIX::LegIssuer LegIssuer_113("STRING_1270632052");
    noLegs_0_0.set(LegIssuer_113);
    InstrumentLeg_113.insert(LegIssuer_113.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_113("STRING_2002863664");
    noLegs_0_0.set(LegLocaleOfIssue_113);
    InstrumentLeg_113.insert(LegLocaleOfIssue_113.getString());
    FIX::LegMaturityDate LegMaturityDate_113("LOCALMKTDATE_788424013");
    noLegs_0_0.set(LegMaturityDate_113);
    InstrumentLeg_113.insert(LegMaturityDate_113.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_113("MONTHYEAR_1215023326");
    noLegs_0_0.set(LegMaturityMonthYear_113);
    InstrumentLeg_113.insert(LegMaturityMonthYear_113.getString());
    FIX::LegMaturityTime LegMaturityTime_113("TZTIMEONLY_1859837551");
    noLegs_0_0.set(LegMaturityTime_113);
    InstrumentLeg_113.insert(LegMaturityTime_113.getString());
    FIX::LegOptAttribute LegOptAttribute_113('1');
    noLegs_0_0.set(LegOptAttribute_113);
    InstrumentLeg_113.insert(LegOptAttribute_113.getString());
    FIX::LegOptionRatio LegOptionRatio_113;
    LegOptionRatio_113.setString("20907513");
    noLegs_0_0.set(LegOptionRatio_113);
    InstrumentLeg_113.insert(LegOptionRatio_113.getString());
    FIX::LegPool LegPool_113("STRING_865435541");
    noLegs_0_0.set(LegPool_113);
    InstrumentLeg_113.insert(LegPool_113.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_113("STRING_958113485");
    noLegs_0_0.set(LegPriceUnitOfMeasure_113);
    InstrumentLeg_113.insert(LegPriceUnitOfMeasure_113.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
    LegPriceUnitOfMeasureQty_113.setString("12095287");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_113);
    InstrumentLeg_113.insert(LegPriceUnitOfMeasureQty_113.getString());
    FIX::LegProduct LegProduct_113(98945494);
    noLegs_0_0.set(LegProduct_113);
    InstrumentLeg_113.insert(LegProduct_113.getString());
    FIX::LegPutOrCall LegPutOrCall_113(1980012276);
    noLegs_0_0.set(LegPutOrCall_113);
    InstrumentLeg_113.insert(LegPutOrCall_113.getString());
    FIX::LegRatioQty LegRatioQty_113;
    LegRatioQty_113.setString("8664674");
    noLegs_0_0.set(LegRatioQty_113);
    InstrumentLeg_113.insert(LegRatioQty_113.getString());
    FIX::LegRedemptionDate LegRedemptionDate_113("LOCALMKTDATE_1716940564");
    noLegs_0_0.set(LegRedemptionDate_113);
    InstrumentLeg_113.insert(LegRedemptionDate_113.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_113("STRING_189031412");
    noLegs_0_0.set(LegRepoCollateralSecurityType_113);
    InstrumentLeg_113.insert(LegRepoCollateralSecurityType_113.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_113;
    LegRepurchaseRate_113.setString("80.300000");
    noLegs_0_0.set(LegRepurchaseRate_113);
    InstrumentLeg_113.insert(LegRepurchaseRate_113.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_113(1146912120);
    noLegs_0_0.set(LegRepurchaseTerm_113);
    InstrumentLeg_113.insert(LegRepurchaseTerm_113.getString());
    FIX::LegSecurityDesc LegSecurityDesc_113("STRING_245992677");
    noLegs_0_0.set(LegSecurityDesc_113);
    InstrumentLeg_113.insert(LegSecurityDesc_113.getString());
    FIX::LegSecurityExchange LegSecurityExchange_113("EXCHANGE_1979042326");
    noLegs_0_0.set(LegSecurityExchange_113);
    InstrumentLeg_113.insert(LegSecurityExchange_113.getString());
    FIX::LegSecurityID LegSecurityID_113("STRING_1006703119");
    noLegs_0_0.set(LegSecurityID_113);
    InstrumentLeg_113.insert(LegSecurityID_113.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_113("STRING_578202199");
    noLegs_0_0.set(LegSecurityIDSource_113);
    InstrumentLeg_113.insert(LegSecurityIDSource_113.getString());
    FIX::LegSecuritySubType LegSecuritySubType_113("STRING_1934651278");
    noLegs_0_0.set(LegSecuritySubType_113);
    InstrumentLeg_113.insert(LegSecuritySubType_113.getString());
    FIX::LegSecurityType LegSecurityType_113("STRING_281938320");
    noLegs_0_0.set(LegSecurityType_113);
    InstrumentLeg_113.insert(LegSecurityType_113.getString());
    FIX::LegSide LegSide_113('7');
    noLegs_0_0.set(LegSide_113);
    InstrumentLeg_113.insert(LegSide_113.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_113("STRING_1557078182");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_113);
    InstrumentLeg_113.insert(LegStateOrProvinceOfIssue_113.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_113("USD");
    noLegs_0_0.set(LegStrikeCurrency_113);
    InstrumentLeg_113.insert(LegStrikeCurrency_113.getString());
    FIX::LegStrikePrice LegStrikePrice_113;
    LegStrikePrice_113.setString("16526255");
    noLegs_0_0.set(LegStrikePrice_113);
    InstrumentLeg_113.insert(LegStrikePrice_113.getString());
    FIX::LegSymbol LegSymbol_113("STRING_881867565");
    noLegs_0_0.set(LegSymbol_113);
    InstrumentLeg_113.insert(LegSymbol_113.getString());
    FIX::LegSymbolSfx LegSymbolSfx_113("STRING_1544625478");
    noLegs_0_0.set(LegSymbolSfx_113);
    InstrumentLeg_113.insert(LegSymbolSfx_113.getString());
    FIX::LegTimeUnit LegTimeUnit_113("STRING_1256486486");
    noLegs_0_0.set(LegTimeUnit_113);
    InstrumentLeg_113.insert(LegTimeUnit_113.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_113("STRING_5015969");
    noLegs_0_0.set(LegUnitOfMeasure_113);
    InstrumentLeg_113.insert(LegUnitOfMeasure_113.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
    LegUnitOfMeasureQty_113.setString("14000054");
    noLegs_0_0.set(LegUnitOfMeasureQty_113);
    InstrumentLeg_113.insert(LegUnitOfMeasureQty_113.getString());
    all_values.push_back(InstrumentLeg_113);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_230;
      FIX::LegSecurityAltID LegSecurityAltID_230("STRING_1220039295");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_230);
      LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltID_230.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_230("STRING_1112359397");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_230);
      LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltIDSource_230.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_230);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_114;
    FIX::EncodedLegIssuer EncodedLegIssuer_114("DATA_1680251497");
    noLegs_0_1.set(EncodedLegIssuer_114);
    InstrumentLeg_114.insert(EncodedLegIssuer_114.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_114(1163306969);
    noLegs_0_1.set(EncodedLegIssuerLen_114);
    InstrumentLeg_114.insert(EncodedLegIssuerLen_114.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_114("DATA_1977794938");
    noLegs_0_1.set(EncodedLegSecurityDesc_114);
    InstrumentLeg_114.insert(EncodedLegSecurityDesc_114.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_114(490881335);
    noLegs_0_1.set(EncodedLegSecurityDescLen_114);
    InstrumentLeg_114.insert(EncodedLegSecurityDescLen_114.getString());
    FIX::LegCFICode LegCFICode_114("STRING_225352099");
    noLegs_0_1.set(LegCFICode_114);
    InstrumentLeg_114.insert(LegCFICode_114.getString());
    FIX::LegContractMultiplier LegContractMultiplier_114;
    LegContractMultiplier_114.setString("20767404");
    noLegs_0_1.set(LegContractMultiplier_114);
    InstrumentLeg_114.insert(LegContractMultiplier_114.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_114(323409963);
    noLegs_0_1.set(LegContractMultiplierUnit_114);
    InstrumentLeg_114.insert(LegContractMultiplierUnit_114.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_114("MONTHYEAR_1091819584");
    noLegs_0_1.set(LegContractSettlMonth_114);
    InstrumentLeg_114.insert(LegContractSettlMonth_114.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_114("COUNTRY_1646197348");
    noLegs_0_1.set(LegCountryOfIssue_114);
    InstrumentLeg_114.insert(LegCountryOfIssue_114.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_114("LOCALMKTDATE_512441375");
    noLegs_0_1.set(LegCouponPaymentDate_114);
    InstrumentLeg_114.insert(LegCouponPaymentDate_114.getString());
    FIX::LegCouponRate LegCouponRate_114;
    LegCouponRate_114.setString("76.150000");
    noLegs_0_1.set(LegCouponRate_114);
    InstrumentLeg_114.insert(LegCouponRate_114.getString());
    FIX::LegCreditRating LegCreditRating_114("STRING_645625820");
    noLegs_0_1.set(LegCreditRating_114);
    InstrumentLeg_114.insert(LegCreditRating_114.getString());
    FIX::LegCurrency LegCurrency_114("CHF");
    noLegs_0_1.set(LegCurrency_114);
    InstrumentLeg_114.insert(LegCurrency_114.getString());
    FIX::LegDatedDate LegDatedDate_114("LOCALMKTDATE_1652328939");
    noLegs_0_1.set(LegDatedDate_114);
    InstrumentLeg_114.insert(LegDatedDate_114.getString());
    FIX::LegExerciseStyle LegExerciseStyle_114(1336636252);
    noLegs_0_1.set(LegExerciseStyle_114);
    InstrumentLeg_114.insert(LegExerciseStyle_114.getString());
    FIX::LegFactor LegFactor_114;
    LegFactor_114.setString("14240139");
    noLegs_0_1.set(LegFactor_114);
    InstrumentLeg_114.insert(LegFactor_114.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_114(1934267260);
    noLegs_0_1.set(LegFlowScheduleType_114);
    InstrumentLeg_114.insert(LegFlowScheduleType_114.getString());
    FIX::LegInstrRegistry LegInstrRegistry_114("STRING_2040266619");
    noLegs_0_1.set(LegInstrRegistry_114);
    InstrumentLeg_114.insert(LegInstrRegistry_114.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_114("LOCALMKTDATE_833608458");
    noLegs_0_1.set(LegInterestAccrualDate_114);
    InstrumentLeg_114.insert(LegInterestAccrualDate_114.getString());
    FIX::LegIssueDate LegIssueDate_114("LOCALMKTDATE_1721832567");
    noLegs_0_1.set(LegIssueDate_114);
    InstrumentLeg_114.insert(LegIssueDate_114.getString());
    FIX::LegIssuer LegIssuer_114("STRING_125855137");
    noLegs_0_1.set(LegIssuer_114);
    InstrumentLeg_114.insert(LegIssuer_114.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_114("STRING_338750387");
    noLegs_0_1.set(LegLocaleOfIssue_114);
    InstrumentLeg_114.insert(LegLocaleOfIssue_114.getString());
    FIX::LegMaturityDate LegMaturityDate_114("LOCALMKTDATE_456216484");
    noLegs_0_1.set(LegMaturityDate_114);
    InstrumentLeg_114.insert(LegMaturityDate_114.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_114("MONTHYEAR_1670480615");
    noLegs_0_1.set(LegMaturityMonthYear_114);
    InstrumentLeg_114.insert(LegMaturityMonthYear_114.getString());
    FIX::LegMaturityTime LegMaturityTime_114("TZTIMEONLY_1595236874");
    noLegs_0_1.set(LegMaturityTime_114);
    InstrumentLeg_114.insert(LegMaturityTime_114.getString());
    FIX::LegOptAttribute LegOptAttribute_114('4');
    noLegs_0_1.set(LegOptAttribute_114);
    InstrumentLeg_114.insert(LegOptAttribute_114.getString());
    FIX::LegOptionRatio LegOptionRatio_114;
    LegOptionRatio_114.setString("9230024");
    noLegs_0_1.set(LegOptionRatio_114);
    InstrumentLeg_114.insert(LegOptionRatio_114.getString());
    FIX::LegPool LegPool_114("STRING_1492663725");
    noLegs_0_1.set(LegPool_114);
    InstrumentLeg_114.insert(LegPool_114.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_114("STRING_1681271749");
    noLegs_0_1.set(LegPriceUnitOfMeasure_114);
    InstrumentLeg_114.insert(LegPriceUnitOfMeasure_114.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
    LegPriceUnitOfMeasureQty_114.setString("20353618");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_114);
    InstrumentLeg_114.insert(LegPriceUnitOfMeasureQty_114.getString());
    FIX::LegProduct LegProduct_114(1025431575);
    noLegs_0_1.set(LegProduct_114);
    InstrumentLeg_114.insert(LegProduct_114.getString());
    FIX::LegPutOrCall LegPutOrCall_114(697095070);
    noLegs_0_1.set(LegPutOrCall_114);
    InstrumentLeg_114.insert(LegPutOrCall_114.getString());
    FIX::LegRatioQty LegRatioQty_114;
    LegRatioQty_114.setString("18656731");
    noLegs_0_1.set(LegRatioQty_114);
    InstrumentLeg_114.insert(LegRatioQty_114.getString());
    FIX::LegRedemptionDate LegRedemptionDate_114("LOCALMKTDATE_1516312910");
    noLegs_0_1.set(LegRedemptionDate_114);
    InstrumentLeg_114.insert(LegRedemptionDate_114.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_114("STRING_922447169");
    noLegs_0_1.set(LegRepoCollateralSecurityType_114);
    InstrumentLeg_114.insert(LegRepoCollateralSecurityType_114.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_114;
    LegRepurchaseRate_114.setString("99.340000");
    noLegs_0_1.set(LegRepurchaseRate_114);
    InstrumentLeg_114.insert(LegRepurchaseRate_114.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_114(1839722873);
    noLegs_0_1.set(LegRepurchaseTerm_114);
    InstrumentLeg_114.insert(LegRepurchaseTerm_114.getString());
    FIX::LegSecurityDesc LegSecurityDesc_114("STRING_2014266754");
    noLegs_0_1.set(LegSecurityDesc_114);
    InstrumentLeg_114.insert(LegSecurityDesc_114.getString());
    FIX::LegSecurityExchange LegSecurityExchange_114("EXCHANGE_1293643635");
    noLegs_0_1.set(LegSecurityExchange_114);
    InstrumentLeg_114.insert(LegSecurityExchange_114.getString());
    FIX::LegSecurityID LegSecurityID_114("STRING_204680601");
    noLegs_0_1.set(LegSecurityID_114);
    InstrumentLeg_114.insert(LegSecurityID_114.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_114("STRING_1672070721");
    noLegs_0_1.set(LegSecurityIDSource_114);
    InstrumentLeg_114.insert(LegSecurityIDSource_114.getString());
    FIX::LegSecuritySubType LegSecuritySubType_114("STRING_1939269455");
    noLegs_0_1.set(LegSecuritySubType_114);
    InstrumentLeg_114.insert(LegSecuritySubType_114.getString());
    FIX::LegSecurityType LegSecurityType_114("STRING_963114654");
    noLegs_0_1.set(LegSecurityType_114);
    InstrumentLeg_114.insert(LegSecurityType_114.getString());
    FIX::LegSide LegSide_114('1');
    noLegs_0_1.set(LegSide_114);
    InstrumentLeg_114.insert(LegSide_114.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_114("STRING_1444114747");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_114);
    InstrumentLeg_114.insert(LegStateOrProvinceOfIssue_114.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_114("GBP");
    noLegs_0_1.set(LegStrikeCurrency_114);
    InstrumentLeg_114.insert(LegStrikeCurrency_114.getString());
    FIX::LegStrikePrice LegStrikePrice_114;
    LegStrikePrice_114.setString("12308983");
    noLegs_0_1.set(LegStrikePrice_114);
    InstrumentLeg_114.insert(LegStrikePrice_114.getString());
    FIX::LegSymbol LegSymbol_114("STRING_45050229");
    noLegs_0_1.set(LegSymbol_114);
    InstrumentLeg_114.insert(LegSymbol_114.getString());
    FIX::LegSymbolSfx LegSymbolSfx_114("STRING_1271572100");
    noLegs_0_1.set(LegSymbolSfx_114);
    InstrumentLeg_114.insert(LegSymbolSfx_114.getString());
    FIX::LegTimeUnit LegTimeUnit_114("STRING_805247278");
    noLegs_0_1.set(LegTimeUnit_114);
    InstrumentLeg_114.insert(LegTimeUnit_114.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_114("STRING_170905366");
    noLegs_0_1.set(LegUnitOfMeasure_114);
    InstrumentLeg_114.insert(LegUnitOfMeasure_114.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
    LegUnitOfMeasureQty_114.setString("16103224");
    noLegs_0_1.set(LegUnitOfMeasureQty_114);
    InstrumentLeg_114.insert(LegUnitOfMeasureQty_114.getString());
    all_values.push_back(InstrumentLeg_114);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_231;
      FIX::LegSecurityAltID LegSecurityAltID_231("STRING_1841385982");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_231);
      LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltID_231.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_231("STRING_1058075714");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_231);
      LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltIDSource_231.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_231);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_232;
      FIX::LegSecurityAltID LegSecurityAltID_232("STRING_1722696216");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_232);
      LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltID_232.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_232("STRING_616904796");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_232);
      LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltIDSource_232.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_232);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_233;
      FIX::LegSecurityAltID LegSecurityAltID_233("STRING_403255791");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_233);
      LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltID_233.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_233("STRING_1256484318");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_233);
      LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltIDSource_233.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_233);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    FIX::EncodedLegIssuer EncodedLegIssuer_115("DATA_504783007");
    noLegs_0_2.set(EncodedLegIssuer_115);
    InstrumentLeg_115.insert(EncodedLegIssuer_115.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_115(1428687366);
    noLegs_0_2.set(EncodedLegIssuerLen_115);
    InstrumentLeg_115.insert(EncodedLegIssuerLen_115.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_115("DATA_1953579388");
    noLegs_0_2.set(EncodedLegSecurityDesc_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDesc_115.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_115(222972509);
    noLegs_0_2.set(EncodedLegSecurityDescLen_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDescLen_115.getString());
    FIX::LegCFICode LegCFICode_115("STRING_797516628");
    noLegs_0_2.set(LegCFICode_115);
    InstrumentLeg_115.insert(LegCFICode_115.getString());
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("7285429");
    noLegs_0_2.set(LegContractMultiplier_115);
    InstrumentLeg_115.insert(LegContractMultiplier_115.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_115(2017902444);
    noLegs_0_2.set(LegContractMultiplierUnit_115);
    InstrumentLeg_115.insert(LegContractMultiplierUnit_115.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_115("MONTHYEAR_489755854");
    noLegs_0_2.set(LegContractSettlMonth_115);
    InstrumentLeg_115.insert(LegContractSettlMonth_115.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_115("COUNTRY_595326016");
    noLegs_0_2.set(LegCountryOfIssue_115);
    InstrumentLeg_115.insert(LegCountryOfIssue_115.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_115("LOCALMKTDATE_1164062431");
    noLegs_0_2.set(LegCouponPaymentDate_115);
    InstrumentLeg_115.insert(LegCouponPaymentDate_115.getString());
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("64.550000");
    noLegs_0_2.set(LegCouponRate_115);
    InstrumentLeg_115.insert(LegCouponRate_115.getString());
    FIX::LegCreditRating LegCreditRating_115("STRING_119913089");
    noLegs_0_2.set(LegCreditRating_115);
    InstrumentLeg_115.insert(LegCreditRating_115.getString());
    FIX::LegCurrency LegCurrency_115("EUR");
    noLegs_0_2.set(LegCurrency_115);
    InstrumentLeg_115.insert(LegCurrency_115.getString());
    FIX::LegDatedDate LegDatedDate_115("LOCALMKTDATE_1281346455");
    noLegs_0_2.set(LegDatedDate_115);
    InstrumentLeg_115.insert(LegDatedDate_115.getString());
    FIX::LegExerciseStyle LegExerciseStyle_115(252479337);
    noLegs_0_2.set(LegExerciseStyle_115);
    InstrumentLeg_115.insert(LegExerciseStyle_115.getString());
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("18098183");
    noLegs_0_2.set(LegFactor_115);
    InstrumentLeg_115.insert(LegFactor_115.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_115(1719310098);
    noLegs_0_2.set(LegFlowScheduleType_115);
    InstrumentLeg_115.insert(LegFlowScheduleType_115.getString());
    FIX::LegInstrRegistry LegInstrRegistry_115("STRING_1483377696");
    noLegs_0_2.set(LegInstrRegistry_115);
    InstrumentLeg_115.insert(LegInstrRegistry_115.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_115("LOCALMKTDATE_1854868597");
    noLegs_0_2.set(LegInterestAccrualDate_115);
    InstrumentLeg_115.insert(LegInterestAccrualDate_115.getString());
    FIX::LegIssueDate LegIssueDate_115("LOCALMKTDATE_843398550");
    noLegs_0_2.set(LegIssueDate_115);
    InstrumentLeg_115.insert(LegIssueDate_115.getString());
    FIX::LegIssuer LegIssuer_115("STRING_141141326");
    noLegs_0_2.set(LegIssuer_115);
    InstrumentLeg_115.insert(LegIssuer_115.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_115("STRING_2025773963");
    noLegs_0_2.set(LegLocaleOfIssue_115);
    InstrumentLeg_115.insert(LegLocaleOfIssue_115.getString());
    FIX::LegMaturityDate LegMaturityDate_115("LOCALMKTDATE_306237390");
    noLegs_0_2.set(LegMaturityDate_115);
    InstrumentLeg_115.insert(LegMaturityDate_115.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_115("MONTHYEAR_1402605089");
    noLegs_0_2.set(LegMaturityMonthYear_115);
    InstrumentLeg_115.insert(LegMaturityMonthYear_115.getString());
    FIX::LegMaturityTime LegMaturityTime_115("TZTIMEONLY_1719676297");
    noLegs_0_2.set(LegMaturityTime_115);
    InstrumentLeg_115.insert(LegMaturityTime_115.getString());
    FIX::LegOptAttribute LegOptAttribute_115('1');
    noLegs_0_2.set(LegOptAttribute_115);
    InstrumentLeg_115.insert(LegOptAttribute_115.getString());
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("9778176");
    noLegs_0_2.set(LegOptionRatio_115);
    InstrumentLeg_115.insert(LegOptionRatio_115.getString());
    FIX::LegPool LegPool_115("STRING_189097445");
    noLegs_0_2.set(LegPool_115);
    InstrumentLeg_115.insert(LegPool_115.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_115("STRING_1767568896");
    noLegs_0_2.set(LegPriceUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasure_115.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("868183");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasureQty_115.getString());
    FIX::LegProduct LegProduct_115(693880453);
    noLegs_0_2.set(LegProduct_115);
    InstrumentLeg_115.insert(LegProduct_115.getString());
    FIX::LegPutOrCall LegPutOrCall_115(1048772614);
    noLegs_0_2.set(LegPutOrCall_115);
    InstrumentLeg_115.insert(LegPutOrCall_115.getString());
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("20403977");
    noLegs_0_2.set(LegRatioQty_115);
    InstrumentLeg_115.insert(LegRatioQty_115.getString());
    FIX::LegRedemptionDate LegRedemptionDate_115("LOCALMKTDATE_916852962");
    noLegs_0_2.set(LegRedemptionDate_115);
    InstrumentLeg_115.insert(LegRedemptionDate_115.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_115("STRING_1846289243");
    noLegs_0_2.set(LegRepoCollateralSecurityType_115);
    InstrumentLeg_115.insert(LegRepoCollateralSecurityType_115.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("69.780000");
    noLegs_0_2.set(LegRepurchaseRate_115);
    InstrumentLeg_115.insert(LegRepurchaseRate_115.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_115(787271758);
    noLegs_0_2.set(LegRepurchaseTerm_115);
    InstrumentLeg_115.insert(LegRepurchaseTerm_115.getString());
    FIX::LegSecurityDesc LegSecurityDesc_115("STRING_188561449");
    noLegs_0_2.set(LegSecurityDesc_115);
    InstrumentLeg_115.insert(LegSecurityDesc_115.getString());
    FIX::LegSecurityExchange LegSecurityExchange_115("EXCHANGE_1216782994");
    noLegs_0_2.set(LegSecurityExchange_115);
    InstrumentLeg_115.insert(LegSecurityExchange_115.getString());
    FIX::LegSecurityID LegSecurityID_115("STRING_1951334189");
    noLegs_0_2.set(LegSecurityID_115);
    InstrumentLeg_115.insert(LegSecurityID_115.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_115("STRING_882997904");
    noLegs_0_2.set(LegSecurityIDSource_115);
    InstrumentLeg_115.insert(LegSecurityIDSource_115.getString());
    FIX::LegSecuritySubType LegSecuritySubType_115("STRING_1336696083");
    noLegs_0_2.set(LegSecuritySubType_115);
    InstrumentLeg_115.insert(LegSecuritySubType_115.getString());
    FIX::LegSecurityType LegSecurityType_115("STRING_759698780");
    noLegs_0_2.set(LegSecurityType_115);
    InstrumentLeg_115.insert(LegSecurityType_115.getString());
    FIX::LegSide LegSide_115('3');
    noLegs_0_2.set(LegSide_115);
    InstrumentLeg_115.insert(LegSide_115.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_115("STRING_470558890");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_115);
    InstrumentLeg_115.insert(LegStateOrProvinceOfIssue_115.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_115("GBP");
    noLegs_0_2.set(LegStrikeCurrency_115);
    InstrumentLeg_115.insert(LegStrikeCurrency_115.getString());
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("423853");
    noLegs_0_2.set(LegStrikePrice_115);
    InstrumentLeg_115.insert(LegStrikePrice_115.getString());
    FIX::LegSymbol LegSymbol_115("STRING_348072166");
    noLegs_0_2.set(LegSymbol_115);
    InstrumentLeg_115.insert(LegSymbol_115.getString());
    FIX::LegSymbolSfx LegSymbolSfx_115("STRING_1910268681");
    noLegs_0_2.set(LegSymbolSfx_115);
    InstrumentLeg_115.insert(LegSymbolSfx_115.getString());
    FIX::LegTimeUnit LegTimeUnit_115("STRING_885783891");
    noLegs_0_2.set(LegTimeUnit_115);
    InstrumentLeg_115.insert(LegTimeUnit_115.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_115("STRING_489213492");
    noLegs_0_2.set(LegUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegUnitOfMeasure_115.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("17885589");
    noLegs_0_2.set(LegUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegUnitOfMeasureQty_115.getString());
    all_values.push_back(InstrumentLeg_115);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_234;
      FIX::LegSecurityAltID LegSecurityAltID_234("STRING_1891818581");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_234);
      LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltID_234.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_234("STRING_1360751646");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_234);
      LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltIDSource_234.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_234);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_72;
  FIX::AttachmentPoint AttachmentPoint_72;
  AttachmentPoint_72.setString("7.380000");
  msg.set(AttachmentPoint_72);
  Instrument_72.insert(AttachmentPoint_72.getString());
  FIX::CFICode CFICode_72("STRING_722152591");
  msg.set(CFICode_72);
  Instrument_72.insert(CFICode_72.getString());
  FIX::CPProgram CPProgram_72(1);
  msg.set(CPProgram_72);
  Instrument_72.insert(CPProgram_72.getString());
  FIX::CPRegType CPRegType_72("STRING_28935986");
  msg.set(CPRegType_72);
  Instrument_72.insert(CPRegType_72.getString());
  FIX::CapPrice CapPrice_72;
  CapPrice_72.setString("8089709");
  msg.set(CapPrice_72);
  Instrument_72.insert(CapPrice_72.getString());
  FIX::ContractMultiplier ContractMultiplier_72;
  ContractMultiplier_72.setString("962458");
  msg.set(ContractMultiplier_72);
  Instrument_72.insert(ContractMultiplier_72.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_72(0);
  msg.set(ContractMultiplierUnit_72);
  Instrument_72.insert(ContractMultiplierUnit_72.getString());
  FIX::ContractSettlMonth ContractSettlMonth_72("MONTHYEAR_701884986");
  msg.set(ContractSettlMonth_72);
  Instrument_72.insert(ContractSettlMonth_72.getString());
  FIX::CountryOfIssue CountryOfIssue_72("COUNTRY_1013098859");
  msg.set(CountryOfIssue_72);
  Instrument_72.insert(CountryOfIssue_72.getString());
  FIX::CouponPaymentDate CouponPaymentDate_72("LOCALMKTDATE_776514195");
  msg.set(CouponPaymentDate_72);
  Instrument_72.insert(CouponPaymentDate_72.getString());
  FIX::CouponRate CouponRate_72;
  CouponRate_72.setString("19.640000");
  msg.set(CouponRate_72);
  Instrument_72.insert(CouponRate_72.getString());
  FIX::CreditRating CreditRating_72("STRING_1800370618");
  msg.set(CreditRating_72);
  Instrument_72.insert(CreditRating_72.getString());
  FIX::DatedDate DatedDate_72("LOCALMKTDATE_965075644");
  msg.set(DatedDate_72);
  Instrument_72.insert(DatedDate_72.getString());
  FIX::DetachmentPoint DetachmentPoint_72;
  DetachmentPoint_72.setString("13.100000");
  msg.set(DetachmentPoint_72);
  Instrument_72.insert(DetachmentPoint_72.getString());
  FIX::EncodedIssuer EncodedIssuer_72("DATA_1604221159");
  msg.set(EncodedIssuer_72);
  Instrument_72.insert(EncodedIssuer_72.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_72(1848073548);
  msg.set(EncodedIssuerLen_72);
  Instrument_72.insert(EncodedIssuerLen_72.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_72("DATA_1729337393");
  msg.set(EncodedSecurityDesc_72);
  Instrument_72.insert(EncodedSecurityDesc_72.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_72(216436291);
  msg.set(EncodedSecurityDescLen_72);
  Instrument_72.insert(EncodedSecurityDescLen_72.getString());
  FIX::ExerciseStyle ExerciseStyle_72(2);
  msg.set(ExerciseStyle_72);
  Instrument_72.insert(ExerciseStyle_72.getString());
  FIX::Factor Factor_72;
  Factor_72.setString("524126");
  msg.set(Factor_72);
  Instrument_72.insert(Factor_72.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_72(false);
  msg.set(FlexProductEligibilityIndicator_72);
  Instrument_72.insert(FlexProductEligibilityIndicator_72.getString());
  FIX::FlexibleIndicator FlexibleIndicator_72(true);
  msg.set(FlexibleIndicator_72);
  Instrument_72.insert(FlexibleIndicator_72.getString());
  FIX::FloorPrice FloorPrice_72;
  FloorPrice_72.setString("947979");
  msg.set(FloorPrice_72);
  Instrument_72.insert(FloorPrice_72.getString());
  FIX::FlowScheduleType FlowScheduleType_72(0);
  msg.set(FlowScheduleType_72);
  Instrument_72.insert(FlowScheduleType_72.getString());
  FIX::InstrRegistry InstrRegistry_72("STRING_2059324031");
  msg.set(InstrRegistry_72);
  Instrument_72.insert(InstrRegistry_72.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_72('9');
  msg.set(InstrmtAssignmentMethod_72);
  Instrument_72.insert(InstrmtAssignmentMethod_72.getString());
  FIX::InterestAccrualDate InterestAccrualDate_72("LOCALMKTDATE_2065900067");
  msg.set(InterestAccrualDate_72);
  Instrument_72.insert(InterestAccrualDate_72.getString());
  FIX::IssueDate IssueDate_72("LOCALMKTDATE_1700399380");
  msg.set(IssueDate_72);
  Instrument_72.insert(IssueDate_72.getString());
  FIX::Issuer Issuer_72("STRING_25119501");
  msg.set(Issuer_72);
  Instrument_72.insert(Issuer_72.getString());
  FIX::ListMethod ListMethod_72(1);
  msg.set(ListMethod_72);
  Instrument_72.insert(ListMethod_72.getString());
  FIX::LocaleOfIssue LocaleOfIssue_72("STRING_913667379");
  msg.set(LocaleOfIssue_72);
  Instrument_72.insert(LocaleOfIssue_72.getString());
  FIX::MaturityDate MaturityDate_72("LOCALMKTDATE_433970239");
  msg.set(MaturityDate_72);
  Instrument_72.insert(MaturityDate_72.getString());
  FIX::MaturityMonthYear MaturityMonthYear_72("MONTHYEAR_384903944");
  msg.set(MaturityMonthYear_72);
  Instrument_72.insert(MaturityMonthYear_72.getString());
  FIX::MaturityTime MaturityTime_72("TZTIMEONLY_316032823");
  msg.set(MaturityTime_72);
  Instrument_72.insert(MaturityTime_72.getString());
  FIX::MinPriceIncrement MinPriceIncrement_72;
  MinPriceIncrement_72.setString("4629062");
  msg.set(MinPriceIncrement_72);
  Instrument_72.insert(MinPriceIncrement_72.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
  MinPriceIncrementAmount_72.setString("11938748");
  msg.set(MinPriceIncrementAmount_72);
  Instrument_72.insert(MinPriceIncrementAmount_72.getString());
  FIX::NTPositionLimit NTPositionLimit_72(412278720);
  msg.set(NTPositionLimit_72);
  Instrument_72.insert(NTPositionLimit_72.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
  NotionalPercentageOutstanding_72.setString("48.250000");
  msg.set(NotionalPercentageOutstanding_72);
  Instrument_72.insert(NotionalPercentageOutstanding_72.getString());
  FIX::OptAttribute OptAttribute_72('1');
  msg.set(OptAttribute_72);
  Instrument_72.insert(OptAttribute_72.getString());
  FIX::OptPayoutAmount OptPayoutAmount_72;
  OptPayoutAmount_72.setString("14253775");
  msg.set(OptPayoutAmount_72);
  Instrument_72.insert(OptPayoutAmount_72.getString());
  FIX::OptPayoutType OptPayoutType_72(3);
  msg.set(OptPayoutType_72);
  Instrument_72.insert(OptPayoutType_72.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
  OriginalNotionalPercentageOutstanding_72.setString("81.650000");
  msg.set(OriginalNotionalPercentageOutstanding_72);
  Instrument_72.insert(OriginalNotionalPercentageOutstanding_72.getString());
  FIX::Pool Pool_72("STRING_1078264549");
  msg.set(Pool_72);
  Instrument_72.insert(Pool_72.getString());
  FIX::PositionLimit PositionLimit_72(1134721017);
  msg.set(PositionLimit_72);
  Instrument_72.insert(PositionLimit_72.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_72("STRING_STD");
  msg.set(PriceQuoteMethod_72);
  Instrument_72.insert(PriceQuoteMethod_72.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_72("STRING_535002061");
  msg.set(PriceUnitOfMeasure_72);
  Instrument_72.insert(PriceUnitOfMeasure_72.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
  PriceUnitOfMeasureQty_72.setString("8353109");
  msg.set(PriceUnitOfMeasureQty_72);
  Instrument_72.insert(PriceUnitOfMeasureQty_72.getString());
  FIX::Product Product_74(11);
  msg.set(Product_74);
  Instrument_72.insert(Product_74.getString());
  FIX::ProductComplex ProductComplex_72("STRING_751438352");
  msg.set(ProductComplex_72);
  Instrument_72.insert(ProductComplex_72.getString());
  FIX::PutOrCall PutOrCall_72(1);
  msg.set(PutOrCall_72);
  Instrument_72.insert(PutOrCall_72.getString());
  FIX::RedemptionDate RedemptionDate_72("LOCALMKTDATE_1098525857");
  msg.set(RedemptionDate_72);
  Instrument_72.insert(RedemptionDate_72.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_72("STRING_1980052761");
  msg.set(RepoCollateralSecurityType_72);
  Instrument_72.insert(RepoCollateralSecurityType_72.getString());
  FIX::RepurchaseRate RepurchaseRate_72;
  RepurchaseRate_72.setString("15.330000");
  msg.set(RepurchaseRate_72);
  Instrument_72.insert(RepurchaseRate_72.getString());
  FIX::RepurchaseTerm RepurchaseTerm_72(1193323834);
  msg.set(RepurchaseTerm_72);
  Instrument_72.insert(RepurchaseTerm_72.getString());
  FIX::RestructuringType RestructuringType_72("STRING_FR");
  msg.set(RestructuringType_72);
  Instrument_72.insert(RestructuringType_72.getString());
  FIX::SecurityDesc SecurityDesc_72("STRING_989861917");
  msg.set(SecurityDesc_72);
  Instrument_72.insert(SecurityDesc_72.getString());
  FIX::SecurityExchange SecurityExchange_72("EXCHANGE_26422053");
  msg.set(SecurityExchange_72);
  Instrument_72.insert(SecurityExchange_72.getString());
  FIX::SecurityGroup SecurityGroup_72("STRING_1327672108");
  msg.set(SecurityGroup_72);
  Instrument_72.insert(SecurityGroup_72.getString());
  FIX::SecurityID SecurityID_72("STRING_542777649");
  msg.set(SecurityID_72);
  Instrument_72.insert(SecurityID_72.getString());
  FIX::SecurityIDSource SecurityIDSource_72("STRING_L");
  msg.set(SecurityIDSource_72);
  Instrument_72.insert(SecurityIDSource_72.getString());
  FIX::SecurityStatus SecurityStatus_72("STRING_2");
  msg.set(SecurityStatus_72);
  Instrument_72.insert(SecurityStatus_72.getString());
  FIX::SecuritySubType SecuritySubType_73("STRING_1456445028");
  msg.set(SecuritySubType_73);
  Instrument_72.insert(SecuritySubType_73.getString());
  FIX::SecurityType SecurityType_74("STRING_MBS");
  msg.set(SecurityType_74);
  Instrument_72.insert(SecurityType_74.getString());
  FIX::Seniority Seniority_72("STRING_SR");
  msg.set(Seniority_72);
  Instrument_72.insert(Seniority_72.getString());
  FIX::SettlMethod SettlMethod_72('P');
  msg.set(SettlMethod_72);
  Instrument_72.insert(SettlMethod_72.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_72("STRING_948418018");
  msg.set(SettleOnOpenFlag_72);
  Instrument_72.insert(SettleOnOpenFlag_72.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_72("STRING_421718619");
  msg.set(StateOrProvinceOfIssue_72);
  Instrument_72.insert(StateOrProvinceOfIssue_72.getString());
  FIX::StrikeCurrency StrikeCurrency_72("USD");
  msg.set(StrikeCurrency_72);
  Instrument_72.insert(StrikeCurrency_72.getString());
  FIX::StrikeMultiplier StrikeMultiplier_72;
  StrikeMultiplier_72.setString("1699948");
  msg.set(StrikeMultiplier_72);
  Instrument_72.insert(StrikeMultiplier_72.getString());
  FIX::StrikePrice StrikePrice_72;
  StrikePrice_72.setString("14626505");
  msg.set(StrikePrice_72);
  Instrument_72.insert(StrikePrice_72.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_72(5);
  msg.set(StrikePriceBoundaryMethod_72);
  Instrument_72.insert(StrikePriceBoundaryMethod_72.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
  StrikePriceBoundaryPrecision_72.setString("29.860000");
  msg.set(StrikePriceBoundaryPrecision_72);
  Instrument_72.insert(StrikePriceBoundaryPrecision_72.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_72(1);
  msg.set(StrikePriceDeterminationMethod_72);
  Instrument_72.insert(StrikePriceDeterminationMethod_72.getString());
  FIX::StrikeValue StrikeValue_72;
  StrikeValue_72.setString("16459155");
  msg.set(StrikeValue_72);
  Instrument_72.insert(StrikeValue_72.getString());
  FIX::Symbol Symbol_72("STRING_558388814");
  msg.set(Symbol_72);
  Instrument_72.insert(Symbol_72.getString());
  FIX::SymbolSfx SymbolSfx_72("STRING_WI");
  msg.set(SymbolSfx_72);
  Instrument_72.insert(SymbolSfx_72.getString());
  FIX::TimeUnit TimeUnit_72("STRING_Yr");
  msg.set(TimeUnit_72);
  Instrument_72.insert(TimeUnit_72.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_72(4);
  msg.set(UnderlyingPriceDeterminationMethod_72);
  Instrument_72.insert(UnderlyingPriceDeterminationMethod_72.getString());
  FIX::UnitOfMeasure UnitOfMeasure_72("STRING_MMbbl");
  msg.set(UnitOfMeasure_72);
  Instrument_72.insert(UnitOfMeasure_72.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
  UnitOfMeasureQty_72.setString("12627090");
  msg.set(UnitOfMeasureQty_72);
  Instrument_72.insert(UnitOfMeasureQty_72.getString());
  FIX::ValuationMethod ValuationMethod_72("STRING_EQTY");
  msg.set(ValuationMethod_72);
  Instrument_72.insert(ValuationMethod_72.getString());
  all_values.push_back(Instrument_72);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_139;
    FIX::ComplexEventCondition ComplexEventCondition_139(2);
    noComplexEvents_0_0.set(ComplexEventCondition_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventCondition_139.getString());
    FIX::ComplexEventPrice ComplexEventPrice_139;
    ComplexEventPrice_139.setString("17488680");
    noComplexEvents_0_0.set(ComplexEventPrice_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventPrice_139.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_139(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryMethod_139.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
    ComplexEventPriceBoundaryPrecision_139.setString("88.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryPrecision_139.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_139(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceTimeType_139.getString());
    FIX::ComplexEventType ComplexEventType_139(7);
    noComplexEvents_0_0.set(ComplexEventType_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexEventType_139.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
    ComplexOptPayoutAmount_139.setString("17258864");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_139);
    ComplexEvents_NoComplexEvents_139.insert(ComplexOptPayoutAmount_139.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_139);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_285;
      FIX::ComplexEventEndDate ComplexEventEndDate_285(FIX::UTCTIMESTAMP(8, 52, 50, 12, 4, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_285);
      ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventEndDate_285.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_285(FIX::UTCTIMESTAMP(15, 30, 34, 20, 5, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_285);
      ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventStartDate_285.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_285);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
        FIX::ComplexEventEndTime ComplexEventEndTime_575(FIX::UTCTIMEONLY(20, 11, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_575);
        ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventEndTime_575.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_575(FIX::UTCTIMEONLY(19, 34, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_575);
        ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventStartTime_575.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
        FIX::ComplexEventEndTime ComplexEventEndTime_576(FIX::UTCTIMEONLY(9, 30, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_576);
        ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventEndTime_576.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_576(FIX::UTCTIMEONLY(22, 15, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_576);
        ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventStartTime_576.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
        FIX::ComplexEventEndTime ComplexEventEndTime_577(FIX::UTCTIMEONLY(15, 9, 45));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_577);
        ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventEndTime_577.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_577(FIX::UTCTIMEONLY(16, 6, 55));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_577);
        ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventStartTime_577.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_286;
      FIX::ComplexEventEndDate ComplexEventEndDate_286(FIX::UTCTIMESTAMP(12, 29, 7, 20, 1, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_286);
      ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventEndDate_286.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_286(FIX::UTCTIMESTAMP(9, 17, 56, 19, 1, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_286);
      ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventStartDate_286.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_286);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
        FIX::ComplexEventEndTime ComplexEventEndTime_578(FIX::UTCTIMEONLY(4, 19, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_578);
        ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventEndTime_578.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_578(FIX::UTCTIMEONLY(21, 10, 55));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_578);
        ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventStartTime_578.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
        FIX::ComplexEventEndTime ComplexEventEndTime_579(FIX::UTCTIMEONLY(2, 56, 57));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_579);
        ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventEndTime_579.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_579(FIX::UTCTIMEONLY(13, 4, 4));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_579);
        ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventStartTime_579.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_287;
      FIX::ComplexEventEndDate ComplexEventEndDate_287(FIX::UTCTIMESTAMP(4, 26, 0, 25, 3, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_287);
      ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventEndDate_287.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_287(FIX::UTCTIMESTAMP(15, 23, 11, 19, 4, 2016));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_287);
      ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventStartDate_287.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_287);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
        FIX::ComplexEventEndTime ComplexEventEndTime_580(FIX::UTCTIMEONLY(6, 56, 59));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_580);
        ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventEndTime_580.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_580(FIX::UTCTIMEONLY(5, 1, 15));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_580);
        ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventStartTime_580.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
        FIX::ComplexEventEndTime ComplexEventEndTime_581(FIX::UTCTIMEONLY(3, 11, 47));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_581);
        ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventEndTime_581.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_581(FIX::UTCTIMEONLY(16, 43, 5));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_581);
        ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventStartTime_581.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
        FIX::ComplexEventEndTime ComplexEventEndTime_582(FIX::UTCTIMEONLY(16, 31, 45));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_582);
        ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventEndTime_582.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_582(FIX::UTCTIMEONLY(2, 51, 48));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_582);
        ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventStartTime_582.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_140;
    FIX::EventDate EventDate_140("LOCALMKTDATE_687200234");
    noEvents_0_0.set(EventDate_140);
    EvntGrp_NoEvents_140.insert(EventDate_140.getString());
    FIX::EventPx EventPx_140;
    EventPx_140.setString("15193600");
    noEvents_0_0.set(EventPx_140);
    EvntGrp_NoEvents_140.insert(EventPx_140.getString());
    FIX::EventText EventText_140("STRING_1475823648");
    noEvents_0_0.set(EventText_140);
    EvntGrp_NoEvents_140.insert(EventText_140.getString());
    FIX::EventTime EventTime_140(FIX::UTCTIMESTAMP(6, 25, 24, 12, 10, 2015));
    noEvents_0_0.set(EventTime_140);
    EvntGrp_NoEvents_140.insert(EventTime_140.getString());
    FIX::EventType EventType_140(13);
    noEvents_0_0.set(EventType_140);
    EvntGrp_NoEvents_140.insert(EventType_140.getString());
    all_values.push_back(EvntGrp_NoEvents_140);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_141;
    FIX::EventDate EventDate_141("LOCALMKTDATE_1564200582");
    noEvents_0_1.set(EventDate_141);
    EvntGrp_NoEvents_141.insert(EventDate_141.getString());
    FIX::EventPx EventPx_141;
    EventPx_141.setString("17945368");
    noEvents_0_1.set(EventPx_141);
    EvntGrp_NoEvents_141.insert(EventPx_141.getString());
    FIX::EventText EventText_141("STRING_293109019");
    noEvents_0_1.set(EventText_141);
    EvntGrp_NoEvents_141.insert(EventText_141.getString());
    FIX::EventTime EventTime_141(FIX::UTCTIMESTAMP(12, 22, 4, 9, 4, 2017));
    noEvents_0_1.set(EventTime_141);
    EvntGrp_NoEvents_141.insert(EventTime_141.getString());
    FIX::EventType EventType_141(8);
    noEvents_0_1.set(EventType_141);
    EvntGrp_NoEvents_141.insert(EventType_141.getString());
    all_values.push_back(EvntGrp_NoEvents_141);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_142;
    FIX::EventDate EventDate_142("LOCALMKTDATE_717473460");
    noEvents_0_2.set(EventDate_142);
    EvntGrp_NoEvents_142.insert(EventDate_142.getString());
    FIX::EventPx EventPx_142;
    EventPx_142.setString("656295");
    noEvents_0_2.set(EventPx_142);
    EvntGrp_NoEvents_142.insert(EventPx_142.getString());
    FIX::EventText EventText_142("STRING_1084879050");
    noEvents_0_2.set(EventText_142);
    EvntGrp_NoEvents_142.insert(EventText_142.getString());
    FIX::EventTime EventTime_142(FIX::UTCTIMESTAMP(16, 20, 36, 5, 3, 2002));
    noEvents_0_2.set(EventTime_142);
    EvntGrp_NoEvents_142.insert(EventTime_142.getString());
    FIX::EventType EventType_142(14);
    noEvents_0_2.set(EventType_142);
    EvntGrp_NoEvents_142.insert(EventType_142.getString());
    all_values.push_back(EvntGrp_NoEvents_142);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_140;
    FIX::InstrumentPartyID InstrumentPartyID_140("STRING_607373531");
    noInstrumentParties_0_0.set(InstrumentPartyID_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyID_140.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_140('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyIDSource_140.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_140(1902218719);
    noInstrumentParties_0_0.set(InstrumentPartyRole_140);
    InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyRole_140.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_140);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
      FIX::InstrumentPartySubID InstrumentPartySubID_286("STRING_1569823563");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_286);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubID_286.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_286(1839308672);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_286);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubIDType_286.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_154;
    FIX::SecurityAltID SecurityAltID_154("STRING_244887247");
    noSecurityAltID_0_0.set(SecurityAltID_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltID_154.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_154("STRING_1256025607");
    noSecurityAltID_0_0.set(SecurityAltIDSource_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltIDSource_154.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_155;
    FIX::SecurityAltID SecurityAltID_155("STRING_1490281372");
    noSecurityAltID_0_1.set(SecurityAltID_155);
    SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltID_155.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_155("STRING_537996266");
    noSecurityAltID_0_1.set(SecurityAltIDSource_155);
    SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltIDSource_155.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_144;
  FIX::SecurityXML SecurityXML_145("XMLDATA_395848763");
  msg.set(SecurityXML_145);
  FIX::SecurityXMLLen SecurityXMLLen_72(604353824);
  msg.set(SecurityXMLLen_72);
  FIX::SecurityXMLSchema SecurityXMLSchema_72("STRING_699710568");
  msg.set(SecurityXMLSchema_72);
  SecurityXML_144.insert(SecurityXMLSchema_72.getString());
  all_values.push_back(SecurityXML_144);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_128;
    FIX::PartyID PartyID_128("STRING_1949161606");
    noPartyIDs_0_0.set(PartyID_128);
    Parties_NoPartyIDs_128.insert(PartyID_128.getString());
    FIX::PartyIDSource PartyIDSource_128('F');
    noPartyIDs_0_0.set(PartyIDSource_128);
    Parties_NoPartyIDs_128.insert(PartyIDSource_128.getString());
    FIX::PartyRole PartyRole_128(20);
    noPartyIDs_0_0.set(PartyRole_128);
    Parties_NoPartyIDs_128.insert(PartyRole_128.getString());
    all_values.push_back(Parties_NoPartyIDs_128);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      FIX::PartySubID PartySubID_255("STRING_314203075");
      noPartySubIDs_0_1_0.set(PartySubID_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubID_255.getString());
      FIX::PartySubIDType PartySubIDType_255(3);
      noPartySubIDs_0_1_0.set(PartySubIDType_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubIDType_255.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_110;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_110("DATA_1384334200");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuer_110.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_110(616161443);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuerLen_110.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_110("DATA_1850395108");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDesc_110.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_110(398317028);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDescLen_110.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
    UnderlyingAdjustedQuantity_110.setString("17804240");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_110);
    UnderlyingInstrument_110.insert(UnderlyingAdjustedQuantity_110.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
    UnderlyingAllocationPercent_110.setString("57.940000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_110);
    UnderlyingInstrument_110.insert(UnderlyingAllocationPercent_110.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
    UnderlyingAttachmentPoint_110.setString("0.900000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingAttachmentPoint_110.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_110("STRING_169079417");
    noUnderlyings_0_0.set(UnderlyingCFICode_110);
    UnderlyingInstrument_110.insert(UnderlyingCFICode_110.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_110("STRING_144536480");
    noUnderlyings_0_0.set(UnderlyingCPProgram_110);
    UnderlyingInstrument_110.insert(UnderlyingCPProgram_110.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_110("STRING_706873621");
    noUnderlyings_0_0.set(UnderlyingCPRegType_110);
    UnderlyingInstrument_110.insert(UnderlyingCPRegType_110.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_110;
    UnderlyingCapValue_110.setString("16392190");
    noUnderlyings_0_0.set(UnderlyingCapValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCapValue_110.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
    UnderlyingCashAmount_110.setString("20467552");
    noUnderlyings_0_0.set(UnderlyingCashAmount_110);
    UnderlyingInstrument_110.insert(UnderlyingCashAmount_110.getString());
    FIX::UnderlyingCashType UnderlyingCashType_110("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_110);
    UnderlyingInstrument_110.insert(UnderlyingCashType_110.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
    UnderlyingContractMultiplier_110.setString("10615589");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplier_110.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_110(1738580224);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplierUnit_110.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_110("COUNTRY_717482764");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingCountryOfIssue_110.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_110("LOCALMKTDATE_1306446210");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponPaymentDate_110.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
    UnderlyingCouponRate_110.setString("21.830000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponRate_110.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_110("STRING_60280488");
    noUnderlyings_0_0.set(UnderlyingCreditRating_110);
    UnderlyingInstrument_110.insert(UnderlyingCreditRating_110.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_110("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrency_110.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
    UnderlyingCurrentValue_110.setString("6646343");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrentValue_110.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
    UnderlyingDetachmentPoint_110.setString("93.960000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingDetachmentPoint_110.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
    UnderlyingDirtyPrice_110.setString("6753448");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingDirtyPrice_110.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
    UnderlyingEndPrice_110.setString("4663122");
    noUnderlyings_0_0.set(UnderlyingEndPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingEndPrice_110.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_110;
    UnderlyingEndValue_110.setString("21408826");
    noUnderlyings_0_0.set(UnderlyingEndValue_110);
    UnderlyingInstrument_110.insert(UnderlyingEndValue_110.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_110(1886528813);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_110);
    UnderlyingInstrument_110.insert(UnderlyingExerciseStyle_110.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_110;
    UnderlyingFXRate_110.setString("1298165");
    noUnderlyings_0_0.set(UnderlyingFXRate_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRate_110.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_110('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRateCalc_110.getString());
    FIX::UnderlyingFactor UnderlyingFactor_110;
    UnderlyingFactor_110.setString("10158587");
    noUnderlyings_0_0.set(UnderlyingFactor_110);
    UnderlyingInstrument_110.insert(UnderlyingFactor_110.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_110(878199955);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_110);
    UnderlyingInstrument_110.insert(UnderlyingFlowScheduleType_110.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_110("STRING_1691936288");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_110);
    UnderlyingInstrument_110.insert(UnderlyingInstrRegistry_110.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_110("LOCALMKTDATE_1632020171");
    noUnderlyings_0_0.set(UnderlyingIssueDate_110);
    UnderlyingInstrument_110.insert(UnderlyingIssueDate_110.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_110("STRING_581111415");
    noUnderlyings_0_0.set(UnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(UnderlyingIssuer_110.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_110("STRING_2090253316");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingLocaleOfIssue_110.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_110("LOCALMKTDATE_1264960595");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityDate_110.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_110("MONTHYEAR_1914407209");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityMonthYear_110.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_110("TZTIMEONLY_42269759");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityTime_110.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
    UnderlyingNotionalPercentageOutstanding_110.setString("0.120000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_110('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_110);
    UnderlyingInstrument_110.insert(UnderlyingOptAttribute_110.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
    UnderlyingOriginalNotionalPercentageOutstanding_110.setString("33.800000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingOriginalNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_110("STRING_925775412");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasure_110.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
    UnderlyingPriceUnitOfMeasureQty_110.setString("19582152");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasureQty_110.getString());
    FIX::UnderlyingProduct UnderlyingProduct_110(1770881669);
    noUnderlyings_0_0.set(UnderlyingProduct_110);
    UnderlyingInstrument_110.insert(UnderlyingProduct_110.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_110(1987334375);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_110);
    UnderlyingInstrument_110.insert(UnderlyingPutOrCall_110.getString());
    FIX::UnderlyingPx UnderlyingPx_110;
    UnderlyingPx_110.setString("15493118");
    noUnderlyings_0_0.set(UnderlyingPx_110);
    UnderlyingInstrument_110.insert(UnderlyingPx_110.getString());
    FIX::UnderlyingQty UnderlyingQty_110;
    UnderlyingQty_110.setString("3408807");
    noUnderlyings_0_0.set(UnderlyingQty_110);
    UnderlyingInstrument_110.insert(UnderlyingQty_110.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_110("LOCALMKTDATE_1146296937");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_110);
    UnderlyingInstrument_110.insert(UnderlyingRedemptionDate_110.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_110("STRING_248950353");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingRepoCollateralSecurityType_110.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
    UnderlyingRepurchaseRate_110.setString("12.730000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseRate_110.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_110(843255765);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseTerm_110.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_110("STRING_1491921300");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_110);
    UnderlyingInstrument_110.insert(UnderlyingRestructuringType_110.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_110("STRING_1065795586");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityDesc_110.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_110("EXCHANGE_1239925161");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityExchange_110.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_110("STRING_19782459");
    noUnderlyings_0_0.set(UnderlyingSecurityID_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityID_110.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_110("STRING_1532107856");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityIDSource_110.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_110("STRING_1233324173");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecuritySubType_110.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_110("STRING_1906311272");
    noUnderlyings_0_0.set(UnderlyingSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityType_110.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_110("STRING_1661924444");
    noUnderlyings_0_0.set(UnderlyingSeniority_110);
    UnderlyingInstrument_110.insert(UnderlyingSeniority_110.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_110("STRING_1540926261");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlMethod_110.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_110(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlementType_110.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_110;
    UnderlyingStartValue_110.setString("3926407");
    noUnderlyings_0_0.set(UnderlyingStartValue_110);
    UnderlyingInstrument_110.insert(UnderlyingStartValue_110.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_110("STRING_1085378901");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingStateOrProvinceOfIssue_110.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_110("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikeCurrency_110.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
    UnderlyingStrikePrice_110.setString("10281485");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikePrice_110.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_110("STRING_1524183470");
    noUnderlyings_0_0.set(UnderlyingSymbol_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbol_110.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_110("STRING_740675727");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbolSfx_110.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_110("STRING_1070418328");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingTimeUnit_110.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_110("STRING_810739834");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasure_110.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
    UnderlyingUnitOfMeasureQty_110.setString("6521357");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasureQty_110.getString());
    all_values.push_back(UnderlyingInstrument_110);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_226("STRING_1736515246");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_226);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltID_226.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_226("STRING_462867362");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_226);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltIDSource_226.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_227("STRING_1442959730");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_227);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltID_227.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_227("STRING_1576365973");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_227);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltIDSource_227.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_228("STRING_2012179180");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_228);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltID_228.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_228("STRING_1783840516");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_228);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltIDSource_228.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
      FIX::UnderlyingStipType UnderlyingStipType_219("STRING_113645885");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipType_219.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_219("STRING_37518141");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipValue_219.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
      FIX::UnderlyingStipType UnderlyingStipType_220("STRING_1418435027");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipType_220.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_220("STRING_1605567186");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipValue_220.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
      FIX::UnderlyingStipType UnderlyingStipType_221("STRING_1103313727");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipType_221.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_221("STRING_510876541");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipValue_221.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_221("STRING_487937936");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyID_221.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_221('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyIDSource_221.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_221(1384177269);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyRole_221.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_436("STRING_1137643327");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubID_436.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_436(11379974);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubIDType_436.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_437("STRING_395019483");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubID_437.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_437(75538580);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubIDType_437.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_438("STRING_270602849");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubID_438.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_438(1368771649);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubIDType_438.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_111;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_111("DATA_1103687150");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuer_111.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_111(1794786320);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuerLen_111.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_111("DATA_2109447376");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDesc_111.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_111(26621830);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDescLen_111.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
    UnderlyingAdjustedQuantity_111.setString("4580425");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_111);
    UnderlyingInstrument_111.insert(UnderlyingAdjustedQuantity_111.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
    UnderlyingAllocationPercent_111.setString("94.960000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_111);
    UnderlyingInstrument_111.insert(UnderlyingAllocationPercent_111.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
    UnderlyingAttachmentPoint_111.setString("35.390000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingAttachmentPoint_111.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_111("STRING_47074105");
    noUnderlyings_0_1.set(UnderlyingCFICode_111);
    UnderlyingInstrument_111.insert(UnderlyingCFICode_111.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_111("STRING_1076966858");
    noUnderlyings_0_1.set(UnderlyingCPProgram_111);
    UnderlyingInstrument_111.insert(UnderlyingCPProgram_111.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_111("STRING_1141659622");
    noUnderlyings_0_1.set(UnderlyingCPRegType_111);
    UnderlyingInstrument_111.insert(UnderlyingCPRegType_111.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_111;
    UnderlyingCapValue_111.setString("16234400");
    noUnderlyings_0_1.set(UnderlyingCapValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCapValue_111.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
    UnderlyingCashAmount_111.setString("9416623");
    noUnderlyings_0_1.set(UnderlyingCashAmount_111);
    UnderlyingInstrument_111.insert(UnderlyingCashAmount_111.getString());
    FIX::UnderlyingCashType UnderlyingCashType_111("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_111);
    UnderlyingInstrument_111.insert(UnderlyingCashType_111.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
    UnderlyingContractMultiplier_111.setString("511356");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplier_111.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_111(1055308276);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplierUnit_111.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_111("COUNTRY_815534631");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingCountryOfIssue_111.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_111("LOCALMKTDATE_1469570720");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponPaymentDate_111.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
    UnderlyingCouponRate_111.setString("18.140000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponRate_111.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_111("STRING_1918848359");
    noUnderlyings_0_1.set(UnderlyingCreditRating_111);
    UnderlyingInstrument_111.insert(UnderlyingCreditRating_111.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_111("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrency_111.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
    UnderlyingCurrentValue_111.setString("2593026");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrentValue_111.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
    UnderlyingDetachmentPoint_111.setString("43.280000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingDetachmentPoint_111.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
    UnderlyingDirtyPrice_111.setString("13754350");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingDirtyPrice_111.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
    UnderlyingEndPrice_111.setString("2616813");
    noUnderlyings_0_1.set(UnderlyingEndPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingEndPrice_111.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_111;
    UnderlyingEndValue_111.setString("5673240");
    noUnderlyings_0_1.set(UnderlyingEndValue_111);
    UnderlyingInstrument_111.insert(UnderlyingEndValue_111.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_111(1386815054);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_111);
    UnderlyingInstrument_111.insert(UnderlyingExerciseStyle_111.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_111;
    UnderlyingFXRate_111.setString("6567008");
    noUnderlyings_0_1.set(UnderlyingFXRate_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRate_111.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_111('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRateCalc_111.getString());
    FIX::UnderlyingFactor UnderlyingFactor_111;
    UnderlyingFactor_111.setString("16574179");
    noUnderlyings_0_1.set(UnderlyingFactor_111);
    UnderlyingInstrument_111.insert(UnderlyingFactor_111.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_111(2025472511);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_111);
    UnderlyingInstrument_111.insert(UnderlyingFlowScheduleType_111.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_111("STRING_1746549738");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_111);
    UnderlyingInstrument_111.insert(UnderlyingInstrRegistry_111.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_111("LOCALMKTDATE_1304720576");
    noUnderlyings_0_1.set(UnderlyingIssueDate_111);
    UnderlyingInstrument_111.insert(UnderlyingIssueDate_111.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_111("STRING_1987436239");
    noUnderlyings_0_1.set(UnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(UnderlyingIssuer_111.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_111("STRING_1773171568");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingLocaleOfIssue_111.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_111("LOCALMKTDATE_1762763082");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityDate_111.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_111("MONTHYEAR_454052087");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityMonthYear_111.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_111("TZTIMEONLY_1471871460");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityTime_111.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
    UnderlyingNotionalPercentageOutstanding_111.setString("71.870000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_111('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_111);
    UnderlyingInstrument_111.insert(UnderlyingOptAttribute_111.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
    UnderlyingOriginalNotionalPercentageOutstanding_111.setString("74.340000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingOriginalNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_111("STRING_1285793618");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasure_111.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
    UnderlyingPriceUnitOfMeasureQty_111.setString("3251976");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasureQty_111.getString());
    FIX::UnderlyingProduct UnderlyingProduct_111(1244063924);
    noUnderlyings_0_1.set(UnderlyingProduct_111);
    UnderlyingInstrument_111.insert(UnderlyingProduct_111.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_111(1336929311);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_111);
    UnderlyingInstrument_111.insert(UnderlyingPutOrCall_111.getString());
    FIX::UnderlyingPx UnderlyingPx_111;
    UnderlyingPx_111.setString("13805059");
    noUnderlyings_0_1.set(UnderlyingPx_111);
    UnderlyingInstrument_111.insert(UnderlyingPx_111.getString());
    FIX::UnderlyingQty UnderlyingQty_111;
    UnderlyingQty_111.setString("20595985");
    noUnderlyings_0_1.set(UnderlyingQty_111);
    UnderlyingInstrument_111.insert(UnderlyingQty_111.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_111("LOCALMKTDATE_659016383");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_111);
    UnderlyingInstrument_111.insert(UnderlyingRedemptionDate_111.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_111("STRING_1893897778");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingRepoCollateralSecurityType_111.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
    UnderlyingRepurchaseRate_111.setString("32.660000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseRate_111.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_111(491979997);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseTerm_111.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_111("STRING_1885155589");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_111);
    UnderlyingInstrument_111.insert(UnderlyingRestructuringType_111.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_111("STRING_2090265913");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityDesc_111.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_111("EXCHANGE_2069144325");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityExchange_111.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_111("STRING_1113107022");
    noUnderlyings_0_1.set(UnderlyingSecurityID_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityID_111.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_111("STRING_204463644");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityIDSource_111.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_111("STRING_488984684");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecuritySubType_111.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_111("STRING_352438428");
    noUnderlyings_0_1.set(UnderlyingSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityType_111.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_111("STRING_861164506");
    noUnderlyings_0_1.set(UnderlyingSeniority_111);
    UnderlyingInstrument_111.insert(UnderlyingSeniority_111.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_111("STRING_1131847272");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlMethod_111.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_111(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlementType_111.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_111;
    UnderlyingStartValue_111.setString("7391533");
    noUnderlyings_0_1.set(UnderlyingStartValue_111);
    UnderlyingInstrument_111.insert(UnderlyingStartValue_111.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_111("STRING_730913362");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingStateOrProvinceOfIssue_111.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_111("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikeCurrency_111.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
    UnderlyingStrikePrice_111.setString("3566012");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikePrice_111.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_111("STRING_782372695");
    noUnderlyings_0_1.set(UnderlyingSymbol_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbol_111.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_111("STRING_1033158048");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbolSfx_111.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_111("STRING_1828472743");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingTimeUnit_111.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_111("STRING_444726234");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasure_111.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
    UnderlyingUnitOfMeasureQty_111.setString("4166933");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasureQty_111.getString());
    all_values.push_back(UnderlyingInstrument_111);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_229("STRING_1730519852");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_229);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltID_229.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_229("STRING_741891034");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_229);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltIDSource_229.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_230("STRING_1391100453");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_230);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltID_230.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_230("STRING_919965515");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_230);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltIDSource_230.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
      FIX::UnderlyingStipType UnderlyingStipType_222("STRING_1303215360");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipType_222.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_222("STRING_1578981899");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipValue_222.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
      FIX::UnderlyingStipType UnderlyingStipType_223("STRING_1868811129");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipType_223.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_223("STRING_986694979");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipValue_223.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_222("STRING_1606483071");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyID_222.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_222('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyIDSource_222.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_222(1992622573);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyRole_222.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_439("STRING_1133940889");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubID_439.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_439(334123609);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubIDType_439.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_440("STRING_924544873");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubID_440.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_440(1995105395);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubIDType_440.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
