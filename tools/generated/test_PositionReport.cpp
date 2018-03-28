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
  multiset<string> PositionReport_0;
  FIX::Account Account_26("STRING_120241097");
  msg.set(Account_26);
  PositionReport_0.insert(Account_26.getString());
  FIX::AccountType AccountType_23(7);
  msg.set(AccountType_23);
  PositionReport_0.insert(AccountType_23.getString());
  FIX::AcctIDSource AcctIDSource_19(3);
  msg.set(AcctIDSource_19);
  PositionReport_0.insert(AcctIDSource_19.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_17("LOCALMKTDATE_19246878");
  msg.set(ClearingBusinessDate_17);
  PositionReport_0.insert(ClearingBusinessDate_17.getString());
  FIX::Currency Currency_49("CAN");
  msg.set(Currency_49);
  PositionReport_0.insert(Currency_49.getString());
  FIX::DeliveryDate DeliveryDate_0("LOCALMKTDATE_1040355403");
  msg.set(DeliveryDate_0);
  PositionReport_0.insert(DeliveryDate_0.getString());
  FIX::EncodedText EncodedText_67("DATA_1426558502");
  msg.set(EncodedText_67);
  PositionReport_0.insert(EncodedText_67.getString());
  FIX::EncodedTextLen EncodedTextLen_67(750116649);
  msg.set(EncodedTextLen_67);
  PositionReport_0.insert(EncodedTextLen_67.getString());
  FIX::MatchStatus MatchStatus_9('1');
  msg.set(MatchStatus_9);
  PositionReport_0.insert(MatchStatus_9.getString());
  FIX::MessageEventSource MessageEventSource_3("STRING_1913475435");
  msg.set(MessageEventSource_3);
  PositionReport_0.insert(MessageEventSource_3.getString());
  FIX::ModelType ModelType_0(1);
  msg.set(ModelType_0);
  PositionReport_0.insert(ModelType_0.getString());
  FIX::PosMaintRptID PosMaintRptID_2("STRING_1553373622");
  msg.set(PosMaintRptID_2);
  PositionReport_0.insert(PosMaintRptID_2.getString());
  FIX::PosReqID PosReqID_3("STRING_1297019469");
  msg.set(PosReqID_3);
  PositionReport_0.insert(PosReqID_3.getString());
  FIX::PosReqResult PosReqResult_0(0);
  msg.set(PosReqResult_0);
  PositionReport_0.insert(PosReqResult_0.getString());
  FIX::PosReqType PosReqType_1(5);
  msg.set(PosReqType_1);
  PositionReport_0.insert(PosReqType_1.getString());
  FIX::PriceDelta PriceDelta_3;
  PriceDelta_3.setString("695587");
  msg.set(PriceDelta_3);
  PositionReport_0.insert(PriceDelta_3.getString());
  FIX::PriceType PriceType_28(14);
  msg.set(PriceType_28);
  PositionReport_0.insert(PriceType_28.getString());
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("10606333");
  msg.set(PriorSettlPrice_2);
  PositionReport_0.insert(PriorSettlPrice_2.getString());
  FIX::RegistStatus RegistStatus_0('A');
  msg.set(RegistStatus_0);
  PositionReport_0.insert(RegistStatus_0.getString());
  FIX::SettlCurrency SettlCurrency_21("USD");
  msg.set(SettlCurrency_21);
  PositionReport_0.insert(SettlCurrency_21.getString());
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("18792168");
  msg.set(SettlPrice_2);
  PositionReport_0.insert(SettlPrice_2.getString());
  FIX::SettlPriceType SettlPriceType_1(1);
  msg.set(SettlPriceType_1);
  PositionReport_0.insert(SettlPriceType_1.getString());
  FIX::SettlSessID SettlSessID_9("STRING_ETH");
  msg.set(SettlSessID_9);
  PositionReport_0.insert(SettlSessID_9.getString());
  FIX::SettlSessSubID SettlSessSubID_8("STRING_1122264715");
  msg.set(SettlSessSubID_8);
  PositionReport_0.insert(SettlSessSubID_8.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_4('0');
  msg.set(SubscriptionRequestType_4);
  PositionReport_0.insert(SubscriptionRequestType_4.getString());
  FIX::Text Text_67("STRING_407001258");
  msg.set(Text_67);
  PositionReport_0.insert(Text_67.getString());
  FIX::TotalNumPosReports TotalNumPosReports_0(1250859626);
  msg.set(TotalNumPosReports_0);
  PositionReport_0.insert(TotalNumPosReports_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_0(false);
  msg.set(UnsolicitedIndicator_0);
  PositionReport_0.insert(UnsolicitedIndicator_0.getString());
  all_values.push_back(PositionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  FIX::ApplID ApplID_11("STRING_258912626");
  msg.set(ApplID_11);
  ApplicationSequenceControl_11.insert(ApplID_11.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_11(1371100723);
  msg.set(ApplLastSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplLastSeqNum_11.getString());
  FIX::ApplResendFlag ApplResendFlag_11(true);
  msg.set(ApplResendFlag_11);
  ApplicationSequenceControl_11.insert(ApplResendFlag_11.getString());
  FIX::ApplSeqNum ApplSeqNum_11(2093749018);
  msg.set(ApplSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplSeqNum_11.getString());
  all_values.push_back(ApplicationSequenceControl_11);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_94;
    FIX::EncodedLegIssuer EncodedLegIssuer_94("DATA_745138631");
    noLegs_0_0.set(EncodedLegIssuer_94);
    InstrumentLeg_94.insert(EncodedLegIssuer_94.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_94(1753450213);
    noLegs_0_0.set(EncodedLegIssuerLen_94);
    InstrumentLeg_94.insert(EncodedLegIssuerLen_94.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_94("DATA_283219357");
    noLegs_0_0.set(EncodedLegSecurityDesc_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDesc_94.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_94(24213486);
    noLegs_0_0.set(EncodedLegSecurityDescLen_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDescLen_94.getString());
    FIX::LegCFICode LegCFICode_94("STRING_356083215");
    noLegs_0_0.set(LegCFICode_94);
    InstrumentLeg_94.insert(LegCFICode_94.getString());
    FIX::LegContractMultiplier LegContractMultiplier_94;
    LegContractMultiplier_94.setString("18675598");
    noLegs_0_0.set(LegContractMultiplier_94);
    InstrumentLeg_94.insert(LegContractMultiplier_94.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_94(1937688921);
    noLegs_0_0.set(LegContractMultiplierUnit_94);
    InstrumentLeg_94.insert(LegContractMultiplierUnit_94.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_94("MONTHYEAR_1338418138");
    noLegs_0_0.set(LegContractSettlMonth_94);
    InstrumentLeg_94.insert(LegContractSettlMonth_94.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_94("COUNTRY_1273449857");
    noLegs_0_0.set(LegCountryOfIssue_94);
    InstrumentLeg_94.insert(LegCountryOfIssue_94.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_94("LOCALMKTDATE_1087224742");
    noLegs_0_0.set(LegCouponPaymentDate_94);
    InstrumentLeg_94.insert(LegCouponPaymentDate_94.getString());
    FIX::LegCouponRate LegCouponRate_94;
    LegCouponRate_94.setString("46.560000");
    noLegs_0_0.set(LegCouponRate_94);
    InstrumentLeg_94.insert(LegCouponRate_94.getString());
    FIX::LegCreditRating LegCreditRating_94("STRING_382543718");
    noLegs_0_0.set(LegCreditRating_94);
    InstrumentLeg_94.insert(LegCreditRating_94.getString());
    FIX::LegCurrency LegCurrency_94("GBP");
    noLegs_0_0.set(LegCurrency_94);
    InstrumentLeg_94.insert(LegCurrency_94.getString());
    FIX::LegDatedDate LegDatedDate_94("LOCALMKTDATE_1443177018");
    noLegs_0_0.set(LegDatedDate_94);
    InstrumentLeg_94.insert(LegDatedDate_94.getString());
    FIX::LegExerciseStyle LegExerciseStyle_94(1054061008);
    noLegs_0_0.set(LegExerciseStyle_94);
    InstrumentLeg_94.insert(LegExerciseStyle_94.getString());
    FIX::LegFactor LegFactor_94;
    LegFactor_94.setString("5306686");
    noLegs_0_0.set(LegFactor_94);
    InstrumentLeg_94.insert(LegFactor_94.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_94(982165493);
    noLegs_0_0.set(LegFlowScheduleType_94);
    InstrumentLeg_94.insert(LegFlowScheduleType_94.getString());
    FIX::LegInstrRegistry LegInstrRegistry_94("STRING_785794166");
    noLegs_0_0.set(LegInstrRegistry_94);
    InstrumentLeg_94.insert(LegInstrRegistry_94.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_94("LOCALMKTDATE_1604561897");
    noLegs_0_0.set(LegInterestAccrualDate_94);
    InstrumentLeg_94.insert(LegInterestAccrualDate_94.getString());
    FIX::LegIssueDate LegIssueDate_94("LOCALMKTDATE_961211411");
    noLegs_0_0.set(LegIssueDate_94);
    InstrumentLeg_94.insert(LegIssueDate_94.getString());
    FIX::LegIssuer LegIssuer_94("STRING_1908058881");
    noLegs_0_0.set(LegIssuer_94);
    InstrumentLeg_94.insert(LegIssuer_94.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_94("STRING_611338515");
    noLegs_0_0.set(LegLocaleOfIssue_94);
    InstrumentLeg_94.insert(LegLocaleOfIssue_94.getString());
    FIX::LegMaturityDate LegMaturityDate_94("LOCALMKTDATE_1368212670");
    noLegs_0_0.set(LegMaturityDate_94);
    InstrumentLeg_94.insert(LegMaturityDate_94.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_94("MONTHYEAR_1011434859");
    noLegs_0_0.set(LegMaturityMonthYear_94);
    InstrumentLeg_94.insert(LegMaturityMonthYear_94.getString());
    FIX::LegMaturityTime LegMaturityTime_94("TZTIMEONLY_1571133687");
    noLegs_0_0.set(LegMaturityTime_94);
    InstrumentLeg_94.insert(LegMaturityTime_94.getString());
    FIX::LegOptAttribute LegOptAttribute_94('1');
    noLegs_0_0.set(LegOptAttribute_94);
    InstrumentLeg_94.insert(LegOptAttribute_94.getString());
    FIX::LegOptionRatio LegOptionRatio_94;
    LegOptionRatio_94.setString("2350519");
    noLegs_0_0.set(LegOptionRatio_94);
    InstrumentLeg_94.insert(LegOptionRatio_94.getString());
    FIX::LegPool LegPool_94("STRING_1432498767");
    noLegs_0_0.set(LegPool_94);
    InstrumentLeg_94.insert(LegPool_94.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_94("STRING_1573390666");
    noLegs_0_0.set(LegPriceUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasure_94.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
    LegPriceUnitOfMeasureQty_94.setString("16253995");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasureQty_94.getString());
    FIX::LegProduct LegProduct_94(30153750);
    noLegs_0_0.set(LegProduct_94);
    InstrumentLeg_94.insert(LegProduct_94.getString());
    FIX::LegPutOrCall LegPutOrCall_94(1179357231);
    noLegs_0_0.set(LegPutOrCall_94);
    InstrumentLeg_94.insert(LegPutOrCall_94.getString());
    FIX::LegRatioQty LegRatioQty_94;
    LegRatioQty_94.setString("19086188");
    noLegs_0_0.set(LegRatioQty_94);
    InstrumentLeg_94.insert(LegRatioQty_94.getString());
    FIX::LegRedemptionDate LegRedemptionDate_94("LOCALMKTDATE_54367236");
    noLegs_0_0.set(LegRedemptionDate_94);
    InstrumentLeg_94.insert(LegRedemptionDate_94.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_94("STRING_1535440446");
    noLegs_0_0.set(LegRepoCollateralSecurityType_94);
    InstrumentLeg_94.insert(LegRepoCollateralSecurityType_94.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_94;
    LegRepurchaseRate_94.setString("51.280000");
    noLegs_0_0.set(LegRepurchaseRate_94);
    InstrumentLeg_94.insert(LegRepurchaseRate_94.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_94(1992056157);
    noLegs_0_0.set(LegRepurchaseTerm_94);
    InstrumentLeg_94.insert(LegRepurchaseTerm_94.getString());
    FIX::LegSecurityDesc LegSecurityDesc_94("STRING_726374936");
    noLegs_0_0.set(LegSecurityDesc_94);
    InstrumentLeg_94.insert(LegSecurityDesc_94.getString());
    FIX::LegSecurityExchange LegSecurityExchange_94("EXCHANGE_754661337");
    noLegs_0_0.set(LegSecurityExchange_94);
    InstrumentLeg_94.insert(LegSecurityExchange_94.getString());
    FIX::LegSecurityID LegSecurityID_94("STRING_931797251");
    noLegs_0_0.set(LegSecurityID_94);
    InstrumentLeg_94.insert(LegSecurityID_94.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_94("STRING_483725944");
    noLegs_0_0.set(LegSecurityIDSource_94);
    InstrumentLeg_94.insert(LegSecurityIDSource_94.getString());
    FIX::LegSecuritySubType LegSecuritySubType_94("STRING_1137205055");
    noLegs_0_0.set(LegSecuritySubType_94);
    InstrumentLeg_94.insert(LegSecuritySubType_94.getString());
    FIX::LegSecurityType LegSecurityType_94("STRING_2088580711");
    noLegs_0_0.set(LegSecurityType_94);
    InstrumentLeg_94.insert(LegSecurityType_94.getString());
    FIX::LegSide LegSide_94('1');
    noLegs_0_0.set(LegSide_94);
    InstrumentLeg_94.insert(LegSide_94.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_94("STRING_432898425");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_94);
    InstrumentLeg_94.insert(LegStateOrProvinceOfIssue_94.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_94("CHF");
    noLegs_0_0.set(LegStrikeCurrency_94);
    InstrumentLeg_94.insert(LegStrikeCurrency_94.getString());
    FIX::LegStrikePrice LegStrikePrice_94;
    LegStrikePrice_94.setString("14150639");
    noLegs_0_0.set(LegStrikePrice_94);
    InstrumentLeg_94.insert(LegStrikePrice_94.getString());
    FIX::LegSymbol LegSymbol_94("STRING_1780952238");
    noLegs_0_0.set(LegSymbol_94);
    InstrumentLeg_94.insert(LegSymbol_94.getString());
    FIX::LegSymbolSfx LegSymbolSfx_94("STRING_1327063386");
    noLegs_0_0.set(LegSymbolSfx_94);
    InstrumentLeg_94.insert(LegSymbolSfx_94.getString());
    FIX::LegTimeUnit LegTimeUnit_94("STRING_228791682");
    noLegs_0_0.set(LegTimeUnit_94);
    InstrumentLeg_94.insert(LegTimeUnit_94.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_94("STRING_1541527471");
    noLegs_0_0.set(LegUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegUnitOfMeasure_94.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
    LegUnitOfMeasureQty_94.setString("19384019");
    noLegs_0_0.set(LegUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegUnitOfMeasureQty_94.getString());
    all_values.push_back(InstrumentLeg_94);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
      FIX::LegSecurityAltID LegSecurityAltID_183("STRING_405478682");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltID_183.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_183("STRING_1362051941");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_183);
      LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltIDSource_183.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_95;
    FIX::EncodedLegIssuer EncodedLegIssuer_95("DATA_1076646000");
    noLegs_0_1.set(EncodedLegIssuer_95);
    InstrumentLeg_95.insert(EncodedLegIssuer_95.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_95(640530617);
    noLegs_0_1.set(EncodedLegIssuerLen_95);
    InstrumentLeg_95.insert(EncodedLegIssuerLen_95.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_95("DATA_647067060");
    noLegs_0_1.set(EncodedLegSecurityDesc_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDesc_95.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_95(502553018);
    noLegs_0_1.set(EncodedLegSecurityDescLen_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDescLen_95.getString());
    FIX::LegCFICode LegCFICode_95("STRING_118446506");
    noLegs_0_1.set(LegCFICode_95);
    InstrumentLeg_95.insert(LegCFICode_95.getString());
    FIX::LegContractMultiplier LegContractMultiplier_95;
    LegContractMultiplier_95.setString("6772208");
    noLegs_0_1.set(LegContractMultiplier_95);
    InstrumentLeg_95.insert(LegContractMultiplier_95.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_95(1681910249);
    noLegs_0_1.set(LegContractMultiplierUnit_95);
    InstrumentLeg_95.insert(LegContractMultiplierUnit_95.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_95("MONTHYEAR_2027065399");
    noLegs_0_1.set(LegContractSettlMonth_95);
    InstrumentLeg_95.insert(LegContractSettlMonth_95.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_95("COUNTRY_731588047");
    noLegs_0_1.set(LegCountryOfIssue_95);
    InstrumentLeg_95.insert(LegCountryOfIssue_95.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_95("LOCALMKTDATE_1069867048");
    noLegs_0_1.set(LegCouponPaymentDate_95);
    InstrumentLeg_95.insert(LegCouponPaymentDate_95.getString());
    FIX::LegCouponRate LegCouponRate_95;
    LegCouponRate_95.setString("68.790000");
    noLegs_0_1.set(LegCouponRate_95);
    InstrumentLeg_95.insert(LegCouponRate_95.getString());
    FIX::LegCreditRating LegCreditRating_95("STRING_576160556");
    noLegs_0_1.set(LegCreditRating_95);
    InstrumentLeg_95.insert(LegCreditRating_95.getString());
    FIX::LegCurrency LegCurrency_95("USD");
    noLegs_0_1.set(LegCurrency_95);
    InstrumentLeg_95.insert(LegCurrency_95.getString());
    FIX::LegDatedDate LegDatedDate_95("LOCALMKTDATE_1507957808");
    noLegs_0_1.set(LegDatedDate_95);
    InstrumentLeg_95.insert(LegDatedDate_95.getString());
    FIX::LegExerciseStyle LegExerciseStyle_95(132484281);
    noLegs_0_1.set(LegExerciseStyle_95);
    InstrumentLeg_95.insert(LegExerciseStyle_95.getString());
    FIX::LegFactor LegFactor_95;
    LegFactor_95.setString("12526596");
    noLegs_0_1.set(LegFactor_95);
    InstrumentLeg_95.insert(LegFactor_95.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_95(1449054871);
    noLegs_0_1.set(LegFlowScheduleType_95);
    InstrumentLeg_95.insert(LegFlowScheduleType_95.getString());
    FIX::LegInstrRegistry LegInstrRegistry_95("STRING_1471800789");
    noLegs_0_1.set(LegInstrRegistry_95);
    InstrumentLeg_95.insert(LegInstrRegistry_95.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_95("LOCALMKTDATE_1685558049");
    noLegs_0_1.set(LegInterestAccrualDate_95);
    InstrumentLeg_95.insert(LegInterestAccrualDate_95.getString());
    FIX::LegIssueDate LegIssueDate_95("LOCALMKTDATE_296729295");
    noLegs_0_1.set(LegIssueDate_95);
    InstrumentLeg_95.insert(LegIssueDate_95.getString());
    FIX::LegIssuer LegIssuer_95("STRING_1194302279");
    noLegs_0_1.set(LegIssuer_95);
    InstrumentLeg_95.insert(LegIssuer_95.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_95("STRING_953138319");
    noLegs_0_1.set(LegLocaleOfIssue_95);
    InstrumentLeg_95.insert(LegLocaleOfIssue_95.getString());
    FIX::LegMaturityDate LegMaturityDate_95("LOCALMKTDATE_2077681533");
    noLegs_0_1.set(LegMaturityDate_95);
    InstrumentLeg_95.insert(LegMaturityDate_95.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_95("MONTHYEAR_373882017");
    noLegs_0_1.set(LegMaturityMonthYear_95);
    InstrumentLeg_95.insert(LegMaturityMonthYear_95.getString());
    FIX::LegMaturityTime LegMaturityTime_95("TZTIMEONLY_1181930001");
    noLegs_0_1.set(LegMaturityTime_95);
    InstrumentLeg_95.insert(LegMaturityTime_95.getString());
    FIX::LegOptAttribute LegOptAttribute_95('1');
    noLegs_0_1.set(LegOptAttribute_95);
    InstrumentLeg_95.insert(LegOptAttribute_95.getString());
    FIX::LegOptionRatio LegOptionRatio_95;
    LegOptionRatio_95.setString("1648002");
    noLegs_0_1.set(LegOptionRatio_95);
    InstrumentLeg_95.insert(LegOptionRatio_95.getString());
    FIX::LegPool LegPool_95("STRING_631450705");
    noLegs_0_1.set(LegPool_95);
    InstrumentLeg_95.insert(LegPool_95.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_95("STRING_1877204039");
    noLegs_0_1.set(LegPriceUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasure_95.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
    LegPriceUnitOfMeasureQty_95.setString("15268522");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasureQty_95.getString());
    FIX::LegProduct LegProduct_95(1708096705);
    noLegs_0_1.set(LegProduct_95);
    InstrumentLeg_95.insert(LegProduct_95.getString());
    FIX::LegPutOrCall LegPutOrCall_95(370251008);
    noLegs_0_1.set(LegPutOrCall_95);
    InstrumentLeg_95.insert(LegPutOrCall_95.getString());
    FIX::LegRatioQty LegRatioQty_95;
    LegRatioQty_95.setString("264356");
    noLegs_0_1.set(LegRatioQty_95);
    InstrumentLeg_95.insert(LegRatioQty_95.getString());
    FIX::LegRedemptionDate LegRedemptionDate_95("LOCALMKTDATE_63166075");
    noLegs_0_1.set(LegRedemptionDate_95);
    InstrumentLeg_95.insert(LegRedemptionDate_95.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_95("STRING_488697514");
    noLegs_0_1.set(LegRepoCollateralSecurityType_95);
    InstrumentLeg_95.insert(LegRepoCollateralSecurityType_95.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_95;
    LegRepurchaseRate_95.setString("64.350000");
    noLegs_0_1.set(LegRepurchaseRate_95);
    InstrumentLeg_95.insert(LegRepurchaseRate_95.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_95(1745076325);
    noLegs_0_1.set(LegRepurchaseTerm_95);
    InstrumentLeg_95.insert(LegRepurchaseTerm_95.getString());
    FIX::LegSecurityDesc LegSecurityDesc_95("STRING_368279266");
    noLegs_0_1.set(LegSecurityDesc_95);
    InstrumentLeg_95.insert(LegSecurityDesc_95.getString());
    FIX::LegSecurityExchange LegSecurityExchange_95("EXCHANGE_1435244482");
    noLegs_0_1.set(LegSecurityExchange_95);
    InstrumentLeg_95.insert(LegSecurityExchange_95.getString());
    FIX::LegSecurityID LegSecurityID_95("STRING_667459725");
    noLegs_0_1.set(LegSecurityID_95);
    InstrumentLeg_95.insert(LegSecurityID_95.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_95("STRING_1876556145");
    noLegs_0_1.set(LegSecurityIDSource_95);
    InstrumentLeg_95.insert(LegSecurityIDSource_95.getString());
    FIX::LegSecuritySubType LegSecuritySubType_95("STRING_2011405038");
    noLegs_0_1.set(LegSecuritySubType_95);
    InstrumentLeg_95.insert(LegSecuritySubType_95.getString());
    FIX::LegSecurityType LegSecurityType_95("STRING_316218061");
    noLegs_0_1.set(LegSecurityType_95);
    InstrumentLeg_95.insert(LegSecurityType_95.getString());
    FIX::LegSide LegSide_95('1');
    noLegs_0_1.set(LegSide_95);
    InstrumentLeg_95.insert(LegSide_95.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_95("STRING_1371879198");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_95);
    InstrumentLeg_95.insert(LegStateOrProvinceOfIssue_95.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_95("EUR");
    noLegs_0_1.set(LegStrikeCurrency_95);
    InstrumentLeg_95.insert(LegStrikeCurrency_95.getString());
    FIX::LegStrikePrice LegStrikePrice_95;
    LegStrikePrice_95.setString("6734504");
    noLegs_0_1.set(LegStrikePrice_95);
    InstrumentLeg_95.insert(LegStrikePrice_95.getString());
    FIX::LegSymbol LegSymbol_95("STRING_1920503132");
    noLegs_0_1.set(LegSymbol_95);
    InstrumentLeg_95.insert(LegSymbol_95.getString());
    FIX::LegSymbolSfx LegSymbolSfx_95("STRING_635261090");
    noLegs_0_1.set(LegSymbolSfx_95);
    InstrumentLeg_95.insert(LegSymbolSfx_95.getString());
    FIX::LegTimeUnit LegTimeUnit_95("STRING_970179717");
    noLegs_0_1.set(LegTimeUnit_95);
    InstrumentLeg_95.insert(LegTimeUnit_95.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_95("STRING_967321763");
    noLegs_0_1.set(LegUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegUnitOfMeasure_95.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
    LegUnitOfMeasureQty_95.setString("15883994");
    noLegs_0_1.set(LegUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegUnitOfMeasureQty_95.getString());
    all_values.push_back(InstrumentLeg_95);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
      FIX::LegSecurityAltID LegSecurityAltID_184("STRING_1341203780");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltID_184.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_184("STRING_622845763");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltIDSource_184.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
      FIX::LegSecurityAltID LegSecurityAltID_185("STRING_224619311");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_185);
      LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltID_185.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_185("STRING_1506004052");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_185);
      LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltIDSource_185.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
      FIX::LegSecurityAltID LegSecurityAltID_186("STRING_1254296469");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_186);
      LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltID_186.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_186("STRING_2101823350");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_186);
      LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltIDSource_186.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_64;
  FIX::AttachmentPoint AttachmentPoint_64;
  AttachmentPoint_64.setString("26.160000");
  msg.set(AttachmentPoint_64);
  Instrument_64.insert(AttachmentPoint_64.getString());
  FIX::CFICode CFICode_64("STRING_814909526");
  msg.set(CFICode_64);
  Instrument_64.insert(CFICode_64.getString());
  FIX::CPProgram CPProgram_64(99);
  msg.set(CPProgram_64);
  Instrument_64.insert(CPProgram_64.getString());
  FIX::CPRegType CPRegType_64("STRING_911808241");
  msg.set(CPRegType_64);
  Instrument_64.insert(CPRegType_64.getString());
  FIX::CapPrice CapPrice_64;
  CapPrice_64.setString("8780756");
  msg.set(CapPrice_64);
  Instrument_64.insert(CapPrice_64.getString());
  FIX::ContractMultiplier ContractMultiplier_64;
  ContractMultiplier_64.setString("8132882");
  msg.set(ContractMultiplier_64);
  Instrument_64.insert(ContractMultiplier_64.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_64(1);
  msg.set(ContractMultiplierUnit_64);
  Instrument_64.insert(ContractMultiplierUnit_64.getString());
  FIX::ContractSettlMonth ContractSettlMonth_64("MONTHYEAR_475668279");
  msg.set(ContractSettlMonth_64);
  Instrument_64.insert(ContractSettlMonth_64.getString());
  FIX::CountryOfIssue CountryOfIssue_64("COUNTRY_1181567491");
  msg.set(CountryOfIssue_64);
  Instrument_64.insert(CountryOfIssue_64.getString());
  FIX::CouponPaymentDate CouponPaymentDate_64("LOCALMKTDATE_903225510");
  msg.set(CouponPaymentDate_64);
  Instrument_64.insert(CouponPaymentDate_64.getString());
  FIX::CouponRate CouponRate_64;
  CouponRate_64.setString("80.040000");
  msg.set(CouponRate_64);
  Instrument_64.insert(CouponRate_64.getString());
  FIX::CreditRating CreditRating_64("STRING_910639989");
  msg.set(CreditRating_64);
  Instrument_64.insert(CreditRating_64.getString());
  FIX::DatedDate DatedDate_64("LOCALMKTDATE_767146900");
  msg.set(DatedDate_64);
  Instrument_64.insert(DatedDate_64.getString());
  FIX::DetachmentPoint DetachmentPoint_64;
  DetachmentPoint_64.setString("60.650000");
  msg.set(DetachmentPoint_64);
  Instrument_64.insert(DetachmentPoint_64.getString());
  FIX::EncodedIssuer EncodedIssuer_64("DATA_755167055");
  msg.set(EncodedIssuer_64);
  Instrument_64.insert(EncodedIssuer_64.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_64(2139026099);
  msg.set(EncodedIssuerLen_64);
  Instrument_64.insert(EncodedIssuerLen_64.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_64("DATA_1908048408");
  msg.set(EncodedSecurityDesc_64);
  Instrument_64.insert(EncodedSecurityDesc_64.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_64(1852353744);
  msg.set(EncodedSecurityDescLen_64);
  Instrument_64.insert(EncodedSecurityDescLen_64.getString());
  FIX::ExerciseStyle ExerciseStyle_64(0);
  msg.set(ExerciseStyle_64);
  Instrument_64.insert(ExerciseStyle_64.getString());
  FIX::Factor Factor_64;
  Factor_64.setString("16810678");
  msg.set(Factor_64);
  Instrument_64.insert(Factor_64.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_64(false);
  msg.set(FlexProductEligibilityIndicator_64);
  Instrument_64.insert(FlexProductEligibilityIndicator_64.getString());
  FIX::FlexibleIndicator FlexibleIndicator_64(true);
  msg.set(FlexibleIndicator_64);
  Instrument_64.insert(FlexibleIndicator_64.getString());
  FIX::FloorPrice FloorPrice_64;
  FloorPrice_64.setString("5009060");
  msg.set(FloorPrice_64);
  Instrument_64.insert(FloorPrice_64.getString());
  FIX::FlowScheduleType FlowScheduleType_64(2);
  msg.set(FlowScheduleType_64);
  Instrument_64.insert(FlowScheduleType_64.getString());
  FIX::InstrRegistry InstrRegistry_64("STRING_388066545");
  msg.set(InstrRegistry_64);
  Instrument_64.insert(InstrRegistry_64.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_64('1');
  msg.set(InstrmtAssignmentMethod_64);
  Instrument_64.insert(InstrmtAssignmentMethod_64.getString());
  FIX::InterestAccrualDate InterestAccrualDate_64("LOCALMKTDATE_403892712");
  msg.set(InterestAccrualDate_64);
  Instrument_64.insert(InterestAccrualDate_64.getString());
  FIX::IssueDate IssueDate_64("LOCALMKTDATE_612685857");
  msg.set(IssueDate_64);
  Instrument_64.insert(IssueDate_64.getString());
  FIX::Issuer Issuer_64("STRING_1200630191");
  msg.set(Issuer_64);
  Instrument_64.insert(Issuer_64.getString());
  FIX::ListMethod ListMethod_64(1);
  msg.set(ListMethod_64);
  Instrument_64.insert(ListMethod_64.getString());
  FIX::LocaleOfIssue LocaleOfIssue_64("STRING_567025559");
  msg.set(LocaleOfIssue_64);
  Instrument_64.insert(LocaleOfIssue_64.getString());
  FIX::MaturityDate MaturityDate_64("LOCALMKTDATE_2086002808");
  msg.set(MaturityDate_64);
  Instrument_64.insert(MaturityDate_64.getString());
  FIX::MaturityMonthYear MaturityMonthYear_64("MONTHYEAR_325615060");
  msg.set(MaturityMonthYear_64);
  Instrument_64.insert(MaturityMonthYear_64.getString());
  FIX::MaturityTime MaturityTime_64("TZTIMEONLY_891616270");
  msg.set(MaturityTime_64);
  Instrument_64.insert(MaturityTime_64.getString());
  FIX::MinPriceIncrement MinPriceIncrement_64;
  MinPriceIncrement_64.setString("8503274");
  msg.set(MinPriceIncrement_64);
  Instrument_64.insert(MinPriceIncrement_64.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
  MinPriceIncrementAmount_64.setString("12036906");
  msg.set(MinPriceIncrementAmount_64);
  Instrument_64.insert(MinPriceIncrementAmount_64.getString());
  FIX::NTPositionLimit NTPositionLimit_64(1704904496);
  msg.set(NTPositionLimit_64);
  Instrument_64.insert(NTPositionLimit_64.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
  NotionalPercentageOutstanding_64.setString("84.290000");
  msg.set(NotionalPercentageOutstanding_64);
  Instrument_64.insert(NotionalPercentageOutstanding_64.getString());
  FIX::OptAttribute OptAttribute_64('1');
  msg.set(OptAttribute_64);
  Instrument_64.insert(OptAttribute_64.getString());
  FIX::OptPayoutAmount OptPayoutAmount_64;
  OptPayoutAmount_64.setString("7389883");
  msg.set(OptPayoutAmount_64);
  Instrument_64.insert(OptPayoutAmount_64.getString());
  FIX::OptPayoutType OptPayoutType_64(3);
  msg.set(OptPayoutType_64);
  Instrument_64.insert(OptPayoutType_64.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
  OriginalNotionalPercentageOutstanding_64.setString("32.970000");
  msg.set(OriginalNotionalPercentageOutstanding_64);
  Instrument_64.insert(OriginalNotionalPercentageOutstanding_64.getString());
  FIX::Pool Pool_64("STRING_1649628328");
  msg.set(Pool_64);
  Instrument_64.insert(Pool_64.getString());
  FIX::PositionLimit PositionLimit_64(1988680839);
  msg.set(PositionLimit_64);
  Instrument_64.insert(PositionLimit_64.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_64("STRING_INT");
  msg.set(PriceQuoteMethod_64);
  Instrument_64.insert(PriceQuoteMethod_64.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_64("STRING_257311735");
  msg.set(PriceUnitOfMeasure_64);
  Instrument_64.insert(PriceUnitOfMeasure_64.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
  PriceUnitOfMeasureQty_64.setString("19802232");
  msg.set(PriceUnitOfMeasureQty_64);
  Instrument_64.insert(PriceUnitOfMeasureQty_64.getString());
  FIX::Product Product_66(11);
  msg.set(Product_66);
  Instrument_64.insert(Product_66.getString());
  FIX::ProductComplex ProductComplex_64("STRING_2109665480");
  msg.set(ProductComplex_64);
  Instrument_64.insert(ProductComplex_64.getString());
  FIX::PutOrCall PutOrCall_64(1);
  msg.set(PutOrCall_64);
  Instrument_64.insert(PutOrCall_64.getString());
  FIX::RedemptionDate RedemptionDate_64("LOCALMKTDATE_1428498366");
  msg.set(RedemptionDate_64);
  Instrument_64.insert(RedemptionDate_64.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_64("STRING_302313019");
  msg.set(RepoCollateralSecurityType_64);
  Instrument_64.insert(RepoCollateralSecurityType_64.getString());
  FIX::RepurchaseRate RepurchaseRate_64;
  RepurchaseRate_64.setString("51.060000");
  msg.set(RepurchaseRate_64);
  Instrument_64.insert(RepurchaseRate_64.getString());
  FIX::RepurchaseTerm RepurchaseTerm_64(1929404373);
  msg.set(RepurchaseTerm_64);
  Instrument_64.insert(RepurchaseTerm_64.getString());
  FIX::RestructuringType RestructuringType_64("STRING_FR");
  msg.set(RestructuringType_64);
  Instrument_64.insert(RestructuringType_64.getString());
  FIX::SecurityDesc SecurityDesc_64("STRING_373488003");
  msg.set(SecurityDesc_64);
  Instrument_64.insert(SecurityDesc_64.getString());
  FIX::SecurityExchange SecurityExchange_64("EXCHANGE_1624030513");
  msg.set(SecurityExchange_64);
  Instrument_64.insert(SecurityExchange_64.getString());
  FIX::SecurityGroup SecurityGroup_64("STRING_487252680");
  msg.set(SecurityGroup_64);
  Instrument_64.insert(SecurityGroup_64.getString());
  FIX::SecurityID SecurityID_64("STRING_986173860");
  msg.set(SecurityID_64);
  Instrument_64.insert(SecurityID_64.getString());
  FIX::SecurityIDSource SecurityIDSource_64("STRING_7");
  msg.set(SecurityIDSource_64);
  Instrument_64.insert(SecurityIDSource_64.getString());
  FIX::SecurityStatus SecurityStatus_64("STRING_1");
  msg.set(SecurityStatus_64);
  Instrument_64.insert(SecurityStatus_64.getString());
  FIX::SecuritySubType SecuritySubType_65("STRING_1553199420");
  msg.set(SecuritySubType_65);
  Instrument_64.insert(SecuritySubType_65.getString());
  FIX::SecurityType SecurityType_66("STRING_CL");
  msg.set(SecurityType_66);
  Instrument_64.insert(SecurityType_66.getString());
  FIX::Seniority Seniority_64("STRING_SD");
  msg.set(Seniority_64);
  Instrument_64.insert(Seniority_64.getString());
  FIX::SettlMethod SettlMethod_64('C');
  msg.set(SettlMethod_64);
  Instrument_64.insert(SettlMethod_64.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_64("STRING_1466023617");
  msg.set(SettleOnOpenFlag_64);
  Instrument_64.insert(SettleOnOpenFlag_64.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_64("STRING_1527263936");
  msg.set(StateOrProvinceOfIssue_64);
  Instrument_64.insert(StateOrProvinceOfIssue_64.getString());
  FIX::StrikeCurrency StrikeCurrency_64("GBP");
  msg.set(StrikeCurrency_64);
  Instrument_64.insert(StrikeCurrency_64.getString());
  FIX::StrikeMultiplier StrikeMultiplier_64;
  StrikeMultiplier_64.setString("10591392");
  msg.set(StrikeMultiplier_64);
  Instrument_64.insert(StrikeMultiplier_64.getString());
  FIX::StrikePrice StrikePrice_64;
  StrikePrice_64.setString("5937412");
  msg.set(StrikePrice_64);
  Instrument_64.insert(StrikePrice_64.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_64(3);
  msg.set(StrikePriceBoundaryMethod_64);
  Instrument_64.insert(StrikePriceBoundaryMethod_64.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
  StrikePriceBoundaryPrecision_64.setString("25.260000");
  msg.set(StrikePriceBoundaryPrecision_64);
  Instrument_64.insert(StrikePriceBoundaryPrecision_64.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_64(3);
  msg.set(StrikePriceDeterminationMethod_64);
  Instrument_64.insert(StrikePriceDeterminationMethod_64.getString());
  FIX::StrikeValue StrikeValue_64;
  StrikeValue_64.setString("6995795");
  msg.set(StrikeValue_64);
  Instrument_64.insert(StrikeValue_64.getString());
  FIX::Symbol Symbol_64("STRING_1721008240");
  msg.set(Symbol_64);
  Instrument_64.insert(Symbol_64.getString());
  FIX::SymbolSfx SymbolSfx_64("STRING_CD");
  msg.set(SymbolSfx_64);
  Instrument_64.insert(SymbolSfx_64.getString());
  FIX::TimeUnit TimeUnit_64("STRING_Yr");
  msg.set(TimeUnit_64);
  Instrument_64.insert(TimeUnit_64.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_64(4);
  msg.set(UnderlyingPriceDeterminationMethod_64);
  Instrument_64.insert(UnderlyingPriceDeterminationMethod_64.getString());
  FIX::UnitOfMeasure UnitOfMeasure_64("STRING_USD");
  msg.set(UnitOfMeasure_64);
  Instrument_64.insert(UnitOfMeasure_64.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
  UnitOfMeasureQty_64.setString("10300516");
  msg.set(UnitOfMeasureQty_64);
  Instrument_64.insert(UnitOfMeasureQty_64.getString());
  FIX::ValuationMethod ValuationMethod_64("STRING_CDS");
  msg.set(ValuationMethod_64);
  Instrument_64.insert(ValuationMethod_64.getString());
  all_values.push_back(Instrument_64);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_126;
    FIX::ComplexEventCondition ComplexEventCondition_126(2);
    noComplexEvents_0_0.set(ComplexEventCondition_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventCondition_126.getString());
    FIX::ComplexEventPrice ComplexEventPrice_126;
    ComplexEventPrice_126.setString("5313741");
    noComplexEvents_0_0.set(ComplexEventPrice_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPrice_126.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_126(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryMethod_126.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
    ComplexEventPriceBoundaryPrecision_126.setString("11.480000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryPrecision_126.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_126(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceTimeType_126.getString());
    FIX::ComplexEventType ComplexEventType_126(1);
    noComplexEvents_0_0.set(ComplexEventType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventType_126.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
    ComplexOptPayoutAmount_126.setString("2276513");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexOptPayoutAmount_126.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_126);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_257;
      FIX::ComplexEventEndDate ComplexEventEndDate_257(FIX::UTCTIMESTAMP(21, 57, 53, 3, 11, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventEndDate_257.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_257(FIX::UTCTIMESTAMP(17, 10, 16, 26, 5, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_257);
      ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventStartDate_257.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_257);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
        FIX::ComplexEventEndTime ComplexEventEndTime_512(FIX::UTCTIMEONLY(12, 15, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_512);
        ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventEndTime_512.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_512(FIX::UTCTIMEONLY(22, 1, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_512);
        ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventStartTime_512.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
        FIX::ComplexEventEndTime ComplexEventEndTime_513(FIX::UTCTIMEONLY(0, 24, 7));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_513);
        ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventEndTime_513.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_513(FIX::UTCTIMEONLY(22, 28, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_513);
        ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventStartTime_513.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
        FIX::ComplexEventEndTime ComplexEventEndTime_514(FIX::UTCTIMEONLY(17, 14, 55));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_514);
        ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventEndTime_514.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_514(FIX::UTCTIMEONLY(4, 28, 3));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_514);
        ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventStartTime_514.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_258;
      FIX::ComplexEventEndDate ComplexEventEndDate_258(FIX::UTCTIMESTAMP(7, 19, 20, 23, 6, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventEndDate_258.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_258(FIX::UTCTIMESTAMP(22, 38, 20, 12, 5, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_258);
      ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventStartDate_258.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_258);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
        FIX::ComplexEventEndTime ComplexEventEndTime_515(FIX::UTCTIMEONLY(18, 4, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_515);
        ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventEndTime_515.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_515(FIX::UTCTIMEONLY(6, 59, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_515);
        ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventStartTime_515.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
        FIX::ComplexEventEndTime ComplexEventEndTime_516(FIX::UTCTIMEONLY(9, 34, 55));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_516);
        ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventEndTime_516.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_516(FIX::UTCTIMEONLY(2, 15, 25));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_516);
        ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventStartTime_516.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_259;
      FIX::ComplexEventEndDate ComplexEventEndDate_259(FIX::UTCTIMESTAMP(10, 36, 36, 6, 6, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_259);
      ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventEndDate_259.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_259(FIX::UTCTIMESTAMP(7, 30, 43, 16, 11, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_259);
      ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventStartDate_259.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_259);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
        FIX::ComplexEventEndTime ComplexEventEndTime_517(FIX::UTCTIMEONLY(3, 12, 25));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_517);
        ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventEndTime_517.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_517(FIX::UTCTIMEONLY(19, 16, 26));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_517);
        ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventStartTime_517.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
        FIX::ComplexEventEndTime ComplexEventEndTime_518(FIX::UTCTIMEONLY(1, 52, 6));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_518);
        ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventEndTime_518.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_518(FIX::UTCTIMEONLY(11, 21, 28));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_518);
        ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventStartTime_518.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_130;
    FIX::EventDate EventDate_130("LOCALMKTDATE_1631514848");
    noEvents_0_0.set(EventDate_130);
    EvntGrp_NoEvents_130.insert(EventDate_130.getString());
    FIX::EventPx EventPx_130;
    EventPx_130.setString("6197981");
    noEvents_0_0.set(EventPx_130);
    EvntGrp_NoEvents_130.insert(EventPx_130.getString());
    FIX::EventText EventText_130("STRING_941027043");
    noEvents_0_0.set(EventText_130);
    EvntGrp_NoEvents_130.insert(EventText_130.getString());
    FIX::EventTime EventTime_130(FIX::UTCTIMESTAMP(2, 54, 8, 25, 5, 2013));
    noEvents_0_0.set(EventTime_130);
    EvntGrp_NoEvents_130.insert(EventTime_130.getString());
    FIX::EventType EventType_130(18);
    noEvents_0_0.set(EventType_130);
    EvntGrp_NoEvents_130.insert(EventType_130.getString());
    all_values.push_back(EvntGrp_NoEvents_130);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_131;
    FIX::EventDate EventDate_131("LOCALMKTDATE_1630661259");
    noEvents_0_1.set(EventDate_131);
    EvntGrp_NoEvents_131.insert(EventDate_131.getString());
    FIX::EventPx EventPx_131;
    EventPx_131.setString("5589969");
    noEvents_0_1.set(EventPx_131);
    EvntGrp_NoEvents_131.insert(EventPx_131.getString());
    FIX::EventText EventText_131("STRING_626214725");
    noEvents_0_1.set(EventText_131);
    EvntGrp_NoEvents_131.insert(EventText_131.getString());
    FIX::EventTime EventTime_131(FIX::UTCTIMESTAMP(16, 18, 42, 2, 6, 2014));
    noEvents_0_1.set(EventTime_131);
    EvntGrp_NoEvents_131.insert(EventTime_131.getString());
    FIX::EventType EventType_131(14);
    noEvents_0_1.set(EventType_131);
    EvntGrp_NoEvents_131.insert(EventType_131.getString());
    all_values.push_back(EvntGrp_NoEvents_131);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_132;
    FIX::EventDate EventDate_132("LOCALMKTDATE_880562500");
    noEvents_0_2.set(EventDate_132);
    EvntGrp_NoEvents_132.insert(EventDate_132.getString());
    FIX::EventPx EventPx_132;
    EventPx_132.setString("20980436");
    noEvents_0_2.set(EventPx_132);
    EvntGrp_NoEvents_132.insert(EventPx_132.getString());
    FIX::EventText EventText_132("STRING_1913194305");
    noEvents_0_2.set(EventText_132);
    EvntGrp_NoEvents_132.insert(EventText_132.getString());
    FIX::EventTime EventTime_132(FIX::UTCTIMESTAMP(7, 56, 59, 16, 12, 2001));
    noEvents_0_2.set(EventTime_132);
    EvntGrp_NoEvents_132.insert(EventTime_132.getString());
    FIX::EventType EventType_132(9);
    noEvents_0_2.set(EventType_132);
    EvntGrp_NoEvents_132.insert(EventType_132.getString());
    all_values.push_back(EvntGrp_NoEvents_132);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_134;
    FIX::InstrumentPartyID InstrumentPartyID_134("STRING_113616577");
    noInstrumentParties_0_0.set(InstrumentPartyID_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyID_134.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_134('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyIDSource_134.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_134(1712821153);
    noInstrumentParties_0_0.set(InstrumentPartyRole_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyRole_134.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_134);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283;
      FIX::InstrumentPartySubID InstrumentPartySubID_283("STRING_104969580");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubID_283.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_283(1744786469);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_283);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubIDType_283.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
      FIX::InstrumentPartySubID InstrumentPartySubID_284("STRING_925906761");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_284);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubID_284.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_284(1376638677);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_284);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubIDType_284.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_143;
    FIX::SecurityAltID SecurityAltID_143("STRING_1484903694");
    noSecurityAltID_0_0.set(SecurityAltID_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltID_143.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_143("STRING_2002853403");
    noSecurityAltID_0_0.set(SecurityAltIDSource_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltIDSource_143.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_128;
  FIX::SecurityXML SecurityXML_129("XMLDATA_606214577");
  msg.set(SecurityXML_129);
  FIX::SecurityXMLLen SecurityXMLLen_64(1731712702);
  msg.set(SecurityXMLLen_64);
  FIX::SecurityXMLSchema SecurityXMLSchema_64("STRING_1506787093");
  msg.set(SecurityXMLSchema_64);
  SecurityXML_128.insert(SecurityXMLSchema_64.getString());
  all_values.push_back(SecurityXML_128);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_90;
    FIX::PartyID PartyID_90("STRING_1354607148");
    noPartyIDs_0_0.set(PartyID_90);
    Parties_NoPartyIDs_90.insert(PartyID_90.getString());
    FIX::PartyIDSource PartyIDSource_90('A');
    noPartyIDs_0_0.set(PartyIDSource_90);
    Parties_NoPartyIDs_90.insert(PartyIDSource_90.getString());
    FIX::PartyRole PartyRole_90(52);
    noPartyIDs_0_0.set(PartyRole_90);
    Parties_NoPartyIDs_90.insert(PartyRole_90.getString());
    all_values.push_back(Parties_NoPartyIDs_90);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      FIX::PartySubID PartySubID_188("STRING_1795398374");
      noPartySubIDs_0_1_0.set(PartySubID_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubID_188.getString());
      FIX::PartySubIDType PartySubIDType_188(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubIDType_188.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    FIX::PartyID PartyID_91("STRING_63828791");
    noPartyIDs_0_1.set(PartyID_91);
    Parties_NoPartyIDs_91.insert(PartyID_91.getString());
    FIX::PartyIDSource PartyIDSource_91('I');
    noPartyIDs_0_1.set(PartyIDSource_91);
    Parties_NoPartyIDs_91.insert(PartyIDSource_91.getString());
    FIX::PartyRole PartyRole_91(10);
    noPartyIDs_0_1.set(PartyRole_91);
    Parties_NoPartyIDs_91.insert(PartyRole_91.getString());
    all_values.push_back(Parties_NoPartyIDs_91);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      FIX::PartySubID PartySubID_189("STRING_1774151511");
      noPartySubIDs_1_1_0.set(PartySubID_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubID_189.getString());
      FIX::PartySubIDType PartySubIDType_189(26);
      noPartySubIDs_1_1_0.set(PartySubIDType_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubIDType_189.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      FIX::PartySubID PartySubID_190("STRING_2026426643");
      noPartySubIDs_1_1_1.set(PartySubID_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubID_190.getString());
      FIX::PartySubIDType PartySubIDType_190(4);
      noPartySubIDs_1_1_1.set(PartySubIDType_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubIDType_190.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      FIX::PartySubID PartySubID_191("STRING_1974178090");
      noPartySubIDs_1_1_2.set(PartySubID_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubID_191.getString());
      FIX::PartySubIDType PartySubIDType_191(13);
      noPartySubIDs_1_1_2.set(PartySubIDType_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubIDType_191.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    FIX::PartyID PartyID_92("STRING_1819689388");
    noPartyIDs_0_2.set(PartyID_92);
    Parties_NoPartyIDs_92.insert(PartyID_92.getString());
    FIX::PartyIDSource PartyIDSource_92('2');
    noPartyIDs_0_2.set(PartyIDSource_92);
    Parties_NoPartyIDs_92.insert(PartyIDSource_92.getString());
    FIX::PartyRole PartyRole_92(28);
    noPartyIDs_0_2.set(PartyRole_92);
    Parties_NoPartyIDs_92.insert(PartyRole_92.getString());
    all_values.push_back(Parties_NoPartyIDs_92);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      FIX::PartySubID PartySubID_192("STRING_1058738088");
      noPartySubIDs_2_1_0.set(PartySubID_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubID_192.getString());
      FIX::PartySubIDType PartySubIDType_192(30);
      noPartySubIDs_2_1_0.set(PartySubIDType_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubIDType_192.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("2878931");
    noUnderlyings_0_0.set(UnderlyingDeliveryAmount_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingDeliveryAmount_0.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("10547761");
    noUnderlyings_0_0.set(UnderlyingSettlPrice_1);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPrice_1.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_0(2020624394);
    noUnderlyings_0_0.set(UnderlyingSettlPriceType_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPriceType_0.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("16609907");
      noUnderlyingAmounts_0_1_0.set(UnderlyingCollectAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingCollectAmount_0.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("16048534");
      noUnderlyingAmounts_0_1_0.set(UnderlyingPayAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingPayAmount_0.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_0("LOCALMKTDATE_1650049966");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementDate_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementDate_0.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_0("STRING_1322888049");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementStatus_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementStatus_0.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_88;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_88("DATA_811976948");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuer_88.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_88(417402192);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuerLen_88.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_88("DATA_1213893351");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDesc_88.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_88(1110095082);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDescLen_88.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
    UnderlyingAdjustedQuantity_88.setString("653169");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_88);
    UnderlyingInstrument_88.insert(UnderlyingAdjustedQuantity_88.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
    UnderlyingAllocationPercent_88.setString("86.250000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_88);
    UnderlyingInstrument_88.insert(UnderlyingAllocationPercent_88.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
    UnderlyingAttachmentPoint_88.setString("38.730000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingAttachmentPoint_88.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_88("STRING_1391578330");
    noUnderlyings_0_0.set(UnderlyingCFICode_88);
    UnderlyingInstrument_88.insert(UnderlyingCFICode_88.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_88("STRING_394762555");
    noUnderlyings_0_0.set(UnderlyingCPProgram_88);
    UnderlyingInstrument_88.insert(UnderlyingCPProgram_88.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_88("STRING_1208665132");
    noUnderlyings_0_0.set(UnderlyingCPRegType_88);
    UnderlyingInstrument_88.insert(UnderlyingCPRegType_88.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_88;
    UnderlyingCapValue_88.setString("10182461");
    noUnderlyings_0_0.set(UnderlyingCapValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCapValue_88.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
    UnderlyingCashAmount_88.setString("18153463");
    noUnderlyings_0_0.set(UnderlyingCashAmount_88);
    UnderlyingInstrument_88.insert(UnderlyingCashAmount_88.getString());
    FIX::UnderlyingCashType UnderlyingCashType_88("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_88);
    UnderlyingInstrument_88.insert(UnderlyingCashType_88.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
    UnderlyingContractMultiplier_88.setString("5768353");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplier_88.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_88(1642040758);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplierUnit_88.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_88("COUNTRY_1751779901");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingCountryOfIssue_88.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_88("LOCALMKTDATE_249041097");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponPaymentDate_88.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
    UnderlyingCouponRate_88.setString("56.190000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponRate_88.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_88("STRING_1981289179");
    noUnderlyings_0_0.set(UnderlyingCreditRating_88);
    UnderlyingInstrument_88.insert(UnderlyingCreditRating_88.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_88("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrency_88.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
    UnderlyingCurrentValue_88.setString("18081012");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrentValue_88.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
    UnderlyingDetachmentPoint_88.setString("57.350000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingDetachmentPoint_88.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
    UnderlyingDirtyPrice_88.setString("17949568");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingDirtyPrice_88.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
    UnderlyingEndPrice_88.setString("7153938");
    noUnderlyings_0_0.set(UnderlyingEndPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingEndPrice_88.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_88;
    UnderlyingEndValue_88.setString("2677164");
    noUnderlyings_0_0.set(UnderlyingEndValue_88);
    UnderlyingInstrument_88.insert(UnderlyingEndValue_88.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_88(1938219698);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_88);
    UnderlyingInstrument_88.insert(UnderlyingExerciseStyle_88.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_88;
    UnderlyingFXRate_88.setString("2289009");
    noUnderlyings_0_0.set(UnderlyingFXRate_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRate_88.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_88('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRateCalc_88.getString());
    FIX::UnderlyingFactor UnderlyingFactor_88;
    UnderlyingFactor_88.setString("14407860");
    noUnderlyings_0_0.set(UnderlyingFactor_88);
    UnderlyingInstrument_88.insert(UnderlyingFactor_88.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_88(1551788971);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_88);
    UnderlyingInstrument_88.insert(UnderlyingFlowScheduleType_88.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_88("STRING_537063230");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_88);
    UnderlyingInstrument_88.insert(UnderlyingInstrRegistry_88.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_88("LOCALMKTDATE_1858188208");
    noUnderlyings_0_0.set(UnderlyingIssueDate_88);
    UnderlyingInstrument_88.insert(UnderlyingIssueDate_88.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_88("STRING_618198675");
    noUnderlyings_0_0.set(UnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(UnderlyingIssuer_88.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_88("STRING_1647158312");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingLocaleOfIssue_88.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_88("LOCALMKTDATE_1923505126");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityDate_88.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_88("MONTHYEAR_1673657300");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityMonthYear_88.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_88("TZTIMEONLY_673598537");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityTime_88.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
    UnderlyingNotionalPercentageOutstanding_88.setString("98.080000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_88('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_88);
    UnderlyingInstrument_88.insert(UnderlyingOptAttribute_88.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
    UnderlyingOriginalNotionalPercentageOutstanding_88.setString("36.690000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingOriginalNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_88("STRING_38362354");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasure_88.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
    UnderlyingPriceUnitOfMeasureQty_88.setString("17362825");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasureQty_88.getString());
    FIX::UnderlyingProduct UnderlyingProduct_88(822388149);
    noUnderlyings_0_0.set(UnderlyingProduct_88);
    UnderlyingInstrument_88.insert(UnderlyingProduct_88.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_88(615197710);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_88);
    UnderlyingInstrument_88.insert(UnderlyingPutOrCall_88.getString());
    FIX::UnderlyingPx UnderlyingPx_88;
    UnderlyingPx_88.setString("12308396");
    noUnderlyings_0_0.set(UnderlyingPx_88);
    UnderlyingInstrument_88.insert(UnderlyingPx_88.getString());
    FIX::UnderlyingQty UnderlyingQty_88;
    UnderlyingQty_88.setString("4266844");
    noUnderlyings_0_0.set(UnderlyingQty_88);
    UnderlyingInstrument_88.insert(UnderlyingQty_88.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_88("LOCALMKTDATE_864238807");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_88);
    UnderlyingInstrument_88.insert(UnderlyingRedemptionDate_88.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_88("STRING_1679165253");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingRepoCollateralSecurityType_88.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
    UnderlyingRepurchaseRate_88.setString("99.330000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseRate_88.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_88(723093843);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseTerm_88.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_88("STRING_1038745313");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_88);
    UnderlyingInstrument_88.insert(UnderlyingRestructuringType_88.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_88("STRING_2068591213");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityDesc_88.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_88("EXCHANGE_1117669578");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityExchange_88.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_88("STRING_686218490");
    noUnderlyings_0_0.set(UnderlyingSecurityID_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityID_88.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_88("STRING_636501377");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityIDSource_88.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_88("STRING_1385386060");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecuritySubType_88.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_88("STRING_476954541");
    noUnderlyings_0_0.set(UnderlyingSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityType_88.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_88("STRING_865402299");
    noUnderlyings_0_0.set(UnderlyingSeniority_88);
    UnderlyingInstrument_88.insert(UnderlyingSeniority_88.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_88("STRING_1110472341");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlMethod_88.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_88(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlementType_88.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_88;
    UnderlyingStartValue_88.setString("2697076");
    noUnderlyings_0_0.set(UnderlyingStartValue_88);
    UnderlyingInstrument_88.insert(UnderlyingStartValue_88.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_88("STRING_1647535571");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingStateOrProvinceOfIssue_88.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_88("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikeCurrency_88.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
    UnderlyingStrikePrice_88.setString("11472102");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikePrice_88.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_88("STRING_1404466596");
    noUnderlyings_0_0.set(UnderlyingSymbol_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbol_88.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_88("STRING_414079950");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbolSfx_88.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_88("STRING_1820808772");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingTimeUnit_88.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_88("STRING_424582757");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasure_88.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
    UnderlyingUnitOfMeasureQty_88.setString("3350161");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasureQty_88.getString());
    all_values.push_back(UnderlyingInstrument_88);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_175("STRING_462945111");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltID_175.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_175("STRING_2071298681");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltIDSource_175.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      FIX::UnderlyingStipType UnderlyingStipType_158("STRING_1078142821");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipType_158.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_158("STRING_1154654668");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipValue_158.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
      FIX::UnderlyingStipType UnderlyingStipType_159("STRING_657177697");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipType_159.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_159("STRING_1942381629");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipValue_159.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_185("STRING_917667630");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_185);
      UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyID_185.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_185('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_185);
      UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyIDSource_185.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_185(1725081586);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_185);
      UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyRole_185.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_353("STRING_1635661402");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubID_353.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_353(263816429);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubIDType_353.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_354("STRING_1475276572");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubID_354.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_354(873563814);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubIDType_354.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_355("STRING_740770970");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubID_355.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_355(193195223);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubIDType_355.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_186("STRING_1984036156");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_186);
      UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyID_186.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_186('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_186);
      UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyIDSource_186.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_186(462902846);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_186);
      UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyRole_186.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_356("STRING_2139472997");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubID_356.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_356(1350809143);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubIDType_356.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_357("STRING_483814667");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubID_357.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_357(1396455946);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubIDType_357.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_187("STRING_1764889093");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_187);
      UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyID_187.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_187('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_187);
      UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyIDSource_187.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_187(1821038703);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_187);
      UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyRole_187.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_358("STRING_1712728585");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_358);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubID_358.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_358(136500166);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_358);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubIDType_358.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_1;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_1;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_1;
    UnderlyingDeliveryAmount_1.setString("20237202");
    noUnderlyings_0_1.set(UnderlyingDeliveryAmount_1);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingDeliveryAmount_1.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_2;
    UnderlyingSettlPrice_2.setString("19432218");
    noUnderlyings_0_1.set(UnderlyingSettlPrice_2);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingSettlPrice_2.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_1(1214642987);
    noUnderlyings_0_1.set(UnderlyingSettlPriceType_1);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingSettlPriceType_1.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_1);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("4529159");
      noUnderlyingAmounts_1_1_0.set(UnderlyingCollectAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingCollectAmount_1.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("10095409");
      noUnderlyingAmounts_1_1_0.set(UnderlyingPayAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingPayAmount_1.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_1("LOCALMKTDATE_1717227578");
      noUnderlyingAmounts_1_1_0.set(UnderlyingSettlementDate_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementDate_1.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_1("STRING_1370583560");
      noUnderlyingAmounts_1_1_0.set(UnderlyingSettlementStatus_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementStatus_1.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_2;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_2;
      UnderlyingCollectAmount_2.setString("15275327");
      noUnderlyingAmounts_1_1_1.set(UnderlyingCollectAmount_2);
      UnderlyingAmount_NoUnderlyingAmounts_2.insert(UnderlyingCollectAmount_2.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_2;
      UnderlyingPayAmount_2.setString("12948255");
      noUnderlyingAmounts_1_1_1.set(UnderlyingPayAmount_2);
      UnderlyingAmount_NoUnderlyingAmounts_2.insert(UnderlyingPayAmount_2.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_2("LOCALMKTDATE_61875107");
      noUnderlyingAmounts_1_1_1.set(UnderlyingSettlementDate_2);
      UnderlyingAmount_NoUnderlyingAmounts_2.insert(UnderlyingSettlementDate_2.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_2("STRING_1015710547");
      noUnderlyingAmounts_1_1_1.set(UnderlyingSettlementStatus_2);
      UnderlyingAmount_NoUnderlyingAmounts_2.insert(UnderlyingSettlementStatus_2.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_2);

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_2;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_3;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_3;
      UnderlyingCollectAmount_3.setString("15586419");
      noUnderlyingAmounts_1_1_2.set(UnderlyingCollectAmount_3);
      UnderlyingAmount_NoUnderlyingAmounts_3.insert(UnderlyingCollectAmount_3.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_3;
      UnderlyingPayAmount_3.setString("15371516");
      noUnderlyingAmounts_1_1_2.set(UnderlyingPayAmount_3);
      UnderlyingAmount_NoUnderlyingAmounts_3.insert(UnderlyingPayAmount_3.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_3("LOCALMKTDATE_1889274361");
      noUnderlyingAmounts_1_1_2.set(UnderlyingSettlementDate_3);
      UnderlyingAmount_NoUnderlyingAmounts_3.insert(UnderlyingSettlementDate_3.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_3("STRING_151929267");
      noUnderlyingAmounts_1_1_2.set(UnderlyingSettlementStatus_3);
      UnderlyingAmount_NoUnderlyingAmounts_3.insert(UnderlyingSettlementStatus_3.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_3);

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_89;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_89("DATA_1730346903");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuer_89.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_89(1725826869);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuerLen_89.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_89("DATA_662957147");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDesc_89.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_89(45766101);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDescLen_89.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
    UnderlyingAdjustedQuantity_89.setString("10624313");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_89);
    UnderlyingInstrument_89.insert(UnderlyingAdjustedQuantity_89.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
    UnderlyingAllocationPercent_89.setString("64.960000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_89);
    UnderlyingInstrument_89.insert(UnderlyingAllocationPercent_89.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
    UnderlyingAttachmentPoint_89.setString("52.450000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingAttachmentPoint_89.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_89("STRING_1546245968");
    noUnderlyings_0_1.set(UnderlyingCFICode_89);
    UnderlyingInstrument_89.insert(UnderlyingCFICode_89.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_89("STRING_2051402442");
    noUnderlyings_0_1.set(UnderlyingCPProgram_89);
    UnderlyingInstrument_89.insert(UnderlyingCPProgram_89.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_89("STRING_1013980690");
    noUnderlyings_0_1.set(UnderlyingCPRegType_89);
    UnderlyingInstrument_89.insert(UnderlyingCPRegType_89.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_89;
    UnderlyingCapValue_89.setString("17033857");
    noUnderlyings_0_1.set(UnderlyingCapValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCapValue_89.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
    UnderlyingCashAmount_89.setString("17249574");
    noUnderlyings_0_1.set(UnderlyingCashAmount_89);
    UnderlyingInstrument_89.insert(UnderlyingCashAmount_89.getString());
    FIX::UnderlyingCashType UnderlyingCashType_89("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_89);
    UnderlyingInstrument_89.insert(UnderlyingCashType_89.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
    UnderlyingContractMultiplier_89.setString("12686306");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplier_89.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_89(1861457663);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplierUnit_89.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_89("COUNTRY_842638930");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingCountryOfIssue_89.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_89("LOCALMKTDATE_1064368929");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponPaymentDate_89.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
    UnderlyingCouponRate_89.setString("70.030000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponRate_89.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_89("STRING_1873530234");
    noUnderlyings_0_1.set(UnderlyingCreditRating_89);
    UnderlyingInstrument_89.insert(UnderlyingCreditRating_89.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_89("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrency_89.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
    UnderlyingCurrentValue_89.setString("14432741");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrentValue_89.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
    UnderlyingDetachmentPoint_89.setString("47.710000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingDetachmentPoint_89.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
    UnderlyingDirtyPrice_89.setString("13182071");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingDirtyPrice_89.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
    UnderlyingEndPrice_89.setString("5906160");
    noUnderlyings_0_1.set(UnderlyingEndPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingEndPrice_89.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_89;
    UnderlyingEndValue_89.setString("8022598");
    noUnderlyings_0_1.set(UnderlyingEndValue_89);
    UnderlyingInstrument_89.insert(UnderlyingEndValue_89.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_89(186434015);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_89);
    UnderlyingInstrument_89.insert(UnderlyingExerciseStyle_89.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_89;
    UnderlyingFXRate_89.setString("17743");
    noUnderlyings_0_1.set(UnderlyingFXRate_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRate_89.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_89('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRateCalc_89.getString());
    FIX::UnderlyingFactor UnderlyingFactor_89;
    UnderlyingFactor_89.setString("20757083");
    noUnderlyings_0_1.set(UnderlyingFactor_89);
    UnderlyingInstrument_89.insert(UnderlyingFactor_89.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_89(153703598);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_89);
    UnderlyingInstrument_89.insert(UnderlyingFlowScheduleType_89.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_89("STRING_1922274814");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_89);
    UnderlyingInstrument_89.insert(UnderlyingInstrRegistry_89.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_89("LOCALMKTDATE_1654051598");
    noUnderlyings_0_1.set(UnderlyingIssueDate_89);
    UnderlyingInstrument_89.insert(UnderlyingIssueDate_89.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_89("STRING_816660745");
    noUnderlyings_0_1.set(UnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(UnderlyingIssuer_89.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_89("STRING_1968040915");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingLocaleOfIssue_89.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_89("LOCALMKTDATE_568999251");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityDate_89.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_89("MONTHYEAR_1471607241");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityMonthYear_89.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_89("TZTIMEONLY_1217132512");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityTime_89.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
    UnderlyingNotionalPercentageOutstanding_89.setString("52.190000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_89('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_89);
    UnderlyingInstrument_89.insert(UnderlyingOptAttribute_89.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
    UnderlyingOriginalNotionalPercentageOutstanding_89.setString("95.550000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingOriginalNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_89("STRING_1671147330");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasure_89.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
    UnderlyingPriceUnitOfMeasureQty_89.setString("9529998");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasureQty_89.getString());
    FIX::UnderlyingProduct UnderlyingProduct_89(1050031848);
    noUnderlyings_0_1.set(UnderlyingProduct_89);
    UnderlyingInstrument_89.insert(UnderlyingProduct_89.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_89(792294379);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_89);
    UnderlyingInstrument_89.insert(UnderlyingPutOrCall_89.getString());
    FIX::UnderlyingPx UnderlyingPx_89;
    UnderlyingPx_89.setString("6669739");
    noUnderlyings_0_1.set(UnderlyingPx_89);
    UnderlyingInstrument_89.insert(UnderlyingPx_89.getString());
    FIX::UnderlyingQty UnderlyingQty_89;
    UnderlyingQty_89.setString("18926707");
    noUnderlyings_0_1.set(UnderlyingQty_89);
    UnderlyingInstrument_89.insert(UnderlyingQty_89.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_89("LOCALMKTDATE_1856663309");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_89);
    UnderlyingInstrument_89.insert(UnderlyingRedemptionDate_89.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_89("STRING_1595590904");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingRepoCollateralSecurityType_89.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
    UnderlyingRepurchaseRate_89.setString("73.650000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseRate_89.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_89(1226464520);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseTerm_89.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_89("STRING_1386265227");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_89);
    UnderlyingInstrument_89.insert(UnderlyingRestructuringType_89.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_89("STRING_914507881");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityDesc_89.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_89("EXCHANGE_1966849291");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityExchange_89.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_89("STRING_556988695");
    noUnderlyings_0_1.set(UnderlyingSecurityID_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityID_89.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_89("STRING_1505123914");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityIDSource_89.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_89("STRING_621625521");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecuritySubType_89.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_89("STRING_743422710");
    noUnderlyings_0_1.set(UnderlyingSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityType_89.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_89("STRING_1506898245");
    noUnderlyings_0_1.set(UnderlyingSeniority_89);
    UnderlyingInstrument_89.insert(UnderlyingSeniority_89.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_89("STRING_813553432");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlMethod_89.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_89(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlementType_89.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_89;
    UnderlyingStartValue_89.setString("16606018");
    noUnderlyings_0_1.set(UnderlyingStartValue_89);
    UnderlyingInstrument_89.insert(UnderlyingStartValue_89.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_89("STRING_588344598");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingStateOrProvinceOfIssue_89.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_89("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikeCurrency_89.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
    UnderlyingStrikePrice_89.setString("4089018");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikePrice_89.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_89("STRING_747214640");
    noUnderlyings_0_1.set(UnderlyingSymbol_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbol_89.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_89("STRING_1801386181");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbolSfx_89.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_89("STRING_1626034378");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingTimeUnit_89.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_89("STRING_714976211");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasure_89.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
    UnderlyingUnitOfMeasureQty_89.setString("10294285");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasureQty_89.getString());
    all_values.push_back(UnderlyingInstrument_89);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_176("STRING_238639893");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltID_176.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_176("STRING_1982428455");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltIDSource_176.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_177("STRING_612212133");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltID_177.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_177("STRING_1030934273");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltIDSource_177.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_178("STRING_501918708");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltID_178.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_178("STRING_357399264");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltIDSource_178.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
      FIX::UnderlyingStipType UnderlyingStipType_160("STRING_2097509612");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipType_160.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_160("STRING_1976116629");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipValue_160.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
      FIX::UnderlyingStipType UnderlyingStipType_161("STRING_1966578454");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipType_161.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_161("STRING_1336291191");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipValue_161.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
      FIX::UnderlyingStipType UnderlyingStipType_162("STRING_743140862");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipType_162.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_162("STRING_1785944097");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipValue_162.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_188("STRING_100781129");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_188);
      UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyID_188.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_188('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_188);
      UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyIDSource_188.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_188(489218949);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_188);
      UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyRole_188.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_359("STRING_1073639402");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_359);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubID_359.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_359(1160866388);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_359);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubIDType_359.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_360("STRING_1120797569");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_360);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubID_360.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_360(1661984000);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_360);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubIDType_360.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_361("STRING_1339081777");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_361);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubID_361.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_361(1450576509);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_361);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubIDType_361.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_189("STRING_2070885866");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_189);
      UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyID_189.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_189('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_189);
      UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyIDSource_189.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_189(1104479042);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_189);
      UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyRole_189.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_362("STRING_653788980");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_362);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubID_362.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_362(2133907612);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_362);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubIDType_362.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_363("STRING_1111616881");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_363);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubID_363.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_363(892428874);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_363);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubIDType_363.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_190("STRING_1968852419");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyID_190.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_190('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyIDSource_190.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_190(1923363147);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyRole_190.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_364("STRING_2081228278");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_364);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubID_364.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_364(515993433);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_364);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubIDType_364.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_2;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_2;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_2;
    UnderlyingDeliveryAmount_2.setString("2733134");
    noUnderlyings_0_2.set(UnderlyingDeliveryAmount_2);
    PosUndInstrmtGrp_NoUnderlyings_2.insert(UnderlyingDeliveryAmount_2.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_3;
    UnderlyingSettlPrice_3.setString("19098612");
    noUnderlyings_0_2.set(UnderlyingSettlPrice_3);
    PosUndInstrmtGrp_NoUnderlyings_2.insert(UnderlyingSettlPrice_3.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_2(335088239);
    noUnderlyings_0_2.set(UnderlyingSettlPriceType_2);
    PosUndInstrmtGrp_NoUnderlyings_2.insert(UnderlyingSettlPriceType_2.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_2);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_2_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_4;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_4;
      UnderlyingCollectAmount_4.setString("5055184");
      noUnderlyingAmounts_2_1_0.set(UnderlyingCollectAmount_4);
      UnderlyingAmount_NoUnderlyingAmounts_4.insert(UnderlyingCollectAmount_4.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_4;
      UnderlyingPayAmount_4.setString("21210323");
      noUnderlyingAmounts_2_1_0.set(UnderlyingPayAmount_4);
      UnderlyingAmount_NoUnderlyingAmounts_4.insert(UnderlyingPayAmount_4.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_4("LOCALMKTDATE_1355400873");
      noUnderlyingAmounts_2_1_0.set(UnderlyingSettlementDate_4);
      UnderlyingAmount_NoUnderlyingAmounts_4.insert(UnderlyingSettlementDate_4.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_4("STRING_606299603");
      noUnderlyingAmounts_2_1_0.set(UnderlyingSettlementStatus_4);
      UnderlyingAmount_NoUnderlyingAmounts_4.insert(UnderlyingSettlementStatus_4.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_4);

      noUnderlyings_0_2.addGroup(noUnderlyingAmounts_2_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_90;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_90("DATA_233634658");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuer_90.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_90(1844619823);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuerLen_90.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_90("DATA_66495329");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDesc_90.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_90(1307274061);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDescLen_90.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
    UnderlyingAdjustedQuantity_90.setString("8580025");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_90);
    UnderlyingInstrument_90.insert(UnderlyingAdjustedQuantity_90.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
    UnderlyingAllocationPercent_90.setString("28.980000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_90);
    UnderlyingInstrument_90.insert(UnderlyingAllocationPercent_90.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
    UnderlyingAttachmentPoint_90.setString("44.130000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingAttachmentPoint_90.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_90("STRING_49600693");
    noUnderlyings_0_2.set(UnderlyingCFICode_90);
    UnderlyingInstrument_90.insert(UnderlyingCFICode_90.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_90("STRING_490385759");
    noUnderlyings_0_2.set(UnderlyingCPProgram_90);
    UnderlyingInstrument_90.insert(UnderlyingCPProgram_90.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_90("STRING_745176631");
    noUnderlyings_0_2.set(UnderlyingCPRegType_90);
    UnderlyingInstrument_90.insert(UnderlyingCPRegType_90.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_90;
    UnderlyingCapValue_90.setString("21358971");
    noUnderlyings_0_2.set(UnderlyingCapValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCapValue_90.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
    UnderlyingCashAmount_90.setString("15948648");
    noUnderlyings_0_2.set(UnderlyingCashAmount_90);
    UnderlyingInstrument_90.insert(UnderlyingCashAmount_90.getString());
    FIX::UnderlyingCashType UnderlyingCashType_90("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_90);
    UnderlyingInstrument_90.insert(UnderlyingCashType_90.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
    UnderlyingContractMultiplier_90.setString("6422024");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplier_90.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_90(1581288765);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplierUnit_90.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_90("COUNTRY_1258746460");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingCountryOfIssue_90.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_90("LOCALMKTDATE_1534631317");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponPaymentDate_90.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
    UnderlyingCouponRate_90.setString("75.360000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponRate_90.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_90("STRING_835091827");
    noUnderlyings_0_2.set(UnderlyingCreditRating_90);
    UnderlyingInstrument_90.insert(UnderlyingCreditRating_90.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_90("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrency_90.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
    UnderlyingCurrentValue_90.setString("7688364");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrentValue_90.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
    UnderlyingDetachmentPoint_90.setString("42.490000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingDetachmentPoint_90.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
    UnderlyingDirtyPrice_90.setString("19992584");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingDirtyPrice_90.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
    UnderlyingEndPrice_90.setString("5312140");
    noUnderlyings_0_2.set(UnderlyingEndPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingEndPrice_90.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_90;
    UnderlyingEndValue_90.setString("141088");
    noUnderlyings_0_2.set(UnderlyingEndValue_90);
    UnderlyingInstrument_90.insert(UnderlyingEndValue_90.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_90(1461379445);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_90);
    UnderlyingInstrument_90.insert(UnderlyingExerciseStyle_90.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_90;
    UnderlyingFXRate_90.setString("10367325");
    noUnderlyings_0_2.set(UnderlyingFXRate_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRate_90.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_90('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRateCalc_90.getString());
    FIX::UnderlyingFactor UnderlyingFactor_90;
    UnderlyingFactor_90.setString("6692966");
    noUnderlyings_0_2.set(UnderlyingFactor_90);
    UnderlyingInstrument_90.insert(UnderlyingFactor_90.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_90(1643032146);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_90);
    UnderlyingInstrument_90.insert(UnderlyingFlowScheduleType_90.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_90("STRING_221292186");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_90);
    UnderlyingInstrument_90.insert(UnderlyingInstrRegistry_90.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_90("LOCALMKTDATE_366432845");
    noUnderlyings_0_2.set(UnderlyingIssueDate_90);
    UnderlyingInstrument_90.insert(UnderlyingIssueDate_90.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_90("STRING_1709527475");
    noUnderlyings_0_2.set(UnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(UnderlyingIssuer_90.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_90("STRING_1528566247");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingLocaleOfIssue_90.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_90("LOCALMKTDATE_1224435409");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityDate_90.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_90("MONTHYEAR_749336725");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityMonthYear_90.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_90("TZTIMEONLY_202857013");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityTime_90.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
    UnderlyingNotionalPercentageOutstanding_90.setString("61.020000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_90('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_90);
    UnderlyingInstrument_90.insert(UnderlyingOptAttribute_90.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
    UnderlyingOriginalNotionalPercentageOutstanding_90.setString("36.440000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingOriginalNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_90("STRING_1262449564");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasure_90.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
    UnderlyingPriceUnitOfMeasureQty_90.setString("6871036");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasureQty_90.getString());
    FIX::UnderlyingProduct UnderlyingProduct_90(1095163224);
    noUnderlyings_0_2.set(UnderlyingProduct_90);
    UnderlyingInstrument_90.insert(UnderlyingProduct_90.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_90(1904652007);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_90);
    UnderlyingInstrument_90.insert(UnderlyingPutOrCall_90.getString());
    FIX::UnderlyingPx UnderlyingPx_90;
    UnderlyingPx_90.setString("1209087");
    noUnderlyings_0_2.set(UnderlyingPx_90);
    UnderlyingInstrument_90.insert(UnderlyingPx_90.getString());
    FIX::UnderlyingQty UnderlyingQty_90;
    UnderlyingQty_90.setString("2064260");
    noUnderlyings_0_2.set(UnderlyingQty_90);
    UnderlyingInstrument_90.insert(UnderlyingQty_90.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_90("LOCALMKTDATE_1291799676");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_90);
    UnderlyingInstrument_90.insert(UnderlyingRedemptionDate_90.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_90("STRING_1523566291");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingRepoCollateralSecurityType_90.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
    UnderlyingRepurchaseRate_90.setString("78.630000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseRate_90.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_90(454826844);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseTerm_90.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_90("STRING_1102027659");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_90);
    UnderlyingInstrument_90.insert(UnderlyingRestructuringType_90.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_90("STRING_1810354321");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityDesc_90.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_90("EXCHANGE_133847445");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityExchange_90.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_90("STRING_953802469");
    noUnderlyings_0_2.set(UnderlyingSecurityID_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityID_90.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_90("STRING_194084742");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityIDSource_90.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_90("STRING_147956285");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecuritySubType_90.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_90("STRING_267698266");
    noUnderlyings_0_2.set(UnderlyingSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityType_90.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_90("STRING_1230817285");
    noUnderlyings_0_2.set(UnderlyingSeniority_90);
    UnderlyingInstrument_90.insert(UnderlyingSeniority_90.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_90("STRING_135613813");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlMethod_90.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_90(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlementType_90.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_90;
    UnderlyingStartValue_90.setString("7263657");
    noUnderlyings_0_2.set(UnderlyingStartValue_90);
    UnderlyingInstrument_90.insert(UnderlyingStartValue_90.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_90("STRING_356906000");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingStateOrProvinceOfIssue_90.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_90("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikeCurrency_90.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
    UnderlyingStrikePrice_90.setString("18854722");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikePrice_90.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_90("STRING_380379543");
    noUnderlyings_0_2.set(UnderlyingSymbol_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbol_90.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_90("STRING_1037746335");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbolSfx_90.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_90("STRING_2088329260");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingTimeUnit_90.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_90("STRING_1654415645");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasure_90.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
    UnderlyingUnitOfMeasureQty_90.setString("1299851");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasureQty_90.getString());
    all_values.push_back(UnderlyingInstrument_90);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_179("STRING_769381562");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltID_179.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_179("STRING_817088808");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltIDSource_179.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_180("STRING_1984042481");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltID_180.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_180("STRING_526549921");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltIDSource_180.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_181("STRING_937997563");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltID_181.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_181("STRING_42984869");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltIDSource_181.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
      FIX::UnderlyingStipType UnderlyingStipType_163("STRING_314080207");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipType_163.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_163("STRING_1084502733");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipValue_163.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
      FIX::UnderlyingStipType UnderlyingStipType_164("STRING_125692794");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipType_164.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_164("STRING_1416107866");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipValue_164.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
      FIX::UnderlyingStipType UnderlyingStipType_165("STRING_747373406");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipType_165.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_165("STRING_259540240");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipValue_165.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_191("STRING_941458148");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyID_191.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_191('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyIDSource_191.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_191(490124954);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyRole_191.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_365("STRING_543110339");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_365);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubID_365.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_365(1427119891);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_365);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubIDType_365.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_366("STRING_751157568");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_366);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubID_366.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_366(900016339);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_366);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubIDType_366.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("10395671");
    noPosAmt_0_0.set(PosAmt_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmt_10.getString());
    FIX::PosAmtType PosAmtType_10("STRING_ICMTM");
    noPosAmt_0_0.set(PosAmtType_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmtType_10.getString());
    FIX::PositionCurrency PositionCurrency_10("STRING_963443569");
    noPosAmt_0_0.set(PositionCurrency_10);
    PositionAmountData_NoPosAmt_10.insert(PositionCurrency_10.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_10);

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_8;
    FIX::LongQty LongQty_8;
    LongQty_8.setString("5788505");
    noPositions_0_0.set(LongQty_8);
    PositionQty_NoPositions_8.insert(LongQty_8.getString());
    FIX::PosQtyStatus PosQtyStatus_8(1);
    noPositions_0_0.set(PosQtyStatus_8);
    PositionQty_NoPositions_8.insert(PosQtyStatus_8.getString());
    FIX::PosType PosType_8("STRING_RCV");
    noPositions_0_0.set(PosType_8);
    PositionQty_NoPositions_8.insert(PosType_8.getString());
    FIX::QuantityDate QuantityDate_8("LOCALMKTDATE_1467729808");
    noPositions_0_0.set(QuantityDate_8);
    PositionQty_NoPositions_8.insert(QuantityDate_8.getString());
    FIX::ShortQty ShortQty_8;
    ShortQty_8.setString("12397571");
    noPositions_0_0.set(ShortQty_8);
    PositionQty_NoPositions_8.insert(ShortQty_8.getString());
    all_values.push_back(PositionQty_NoPositions_8);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_88;
      FIX::NestedPartyID NestedPartyID_88("STRING_1304288641");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyID_88.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_88('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyIDSource_88.getString());
      FIX::NestedPartyRole NestedPartyRole_88(1814901408);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyRole_88.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_88);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
        FIX::NestedPartySubID NestedPartySubID_174("STRING_1437173000");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubID_174.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_174(2128981615);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubIDType_174.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_89;
      FIX::NestedPartyID NestedPartyID_89("STRING_284292595");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyID_89.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_89('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyIDSource_89.getString());
      FIX::NestedPartyRole NestedPartyRole_89(1397605833);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyRole_89.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_89);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
        FIX::NestedPartySubID NestedPartySubID_175("STRING_1822406034");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubID_175.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_175(1620032520);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubIDType_175.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
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
    LongQty_9.setString("19731241");
    noPositions_0_1.set(LongQty_9);
    PositionQty_NoPositions_9.insert(LongQty_9.getString());
    FIX::PosQtyStatus PosQtyStatus_9(2);
    noPositions_0_1.set(PosQtyStatus_9);
    PositionQty_NoPositions_9.insert(PosQtyStatus_9.getString());
    FIX::PosType PosType_9("STRING_TOT");
    noPositions_0_1.set(PosType_9);
    PositionQty_NoPositions_9.insert(PosType_9.getString());
    FIX::QuantityDate QuantityDate_9("LOCALMKTDATE_1997915934");
    noPositions_0_1.set(QuantityDate_9);
    PositionQty_NoPositions_9.insert(QuantityDate_9.getString());
    FIX::ShortQty ShortQty_9;
    ShortQty_9.setString("6255292");
    noPositions_0_1.set(ShortQty_9);
    PositionQty_NoPositions_9.insert(ShortQty_9.getString());
    all_values.push_back(PositionQty_NoPositions_9);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      FIX::NestedPartyID NestedPartyID_90("STRING_601589854");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyID_90.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_90('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyIDSource_90.getString());
      FIX::NestedPartyRole NestedPartyRole_90(1972857743);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyRole_90.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
        FIX::NestedPartySubID NestedPartySubID_176("STRING_16066880");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubID_176.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_176(788817664);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubIDType_176.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      FIX::NestedPartyID NestedPartyID_91("STRING_1570986897");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyID_91.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_91('5');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyIDSource_91.getString());
      FIX::NestedPartyRole NestedPartyRole_91(1259193230);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyRole_91.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
        FIX::NestedPartySubID NestedPartySubID_177("STRING_2062647239");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubID_177.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_177(351466711);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubIDType_177.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
        FIX::NestedPartySubID NestedPartySubID_178("STRING_360222130");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubID_178.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_178(1219452232);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubIDType_178.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_10;
    FIX::LongQty LongQty_10;
    LongQty_10.setString("21177737");
    noPositions_0_2.set(LongQty_10);
    PositionQty_NoPositions_10.insert(LongQty_10.getString());
    FIX::PosQtyStatus PosQtyStatus_10(2);
    noPositions_0_2.set(PosQtyStatus_10);
    PositionQty_NoPositions_10.insert(PosQtyStatus_10.getString());
    FIX::PosType PosType_10("STRING_ALC");
    noPositions_0_2.set(PosType_10);
    PositionQty_NoPositions_10.insert(PosType_10.getString());
    FIX::QuantityDate QuantityDate_10("LOCALMKTDATE_1407463113");
    noPositions_0_2.set(QuantityDate_10);
    PositionQty_NoPositions_10.insert(QuantityDate_10.getString());
    FIX::ShortQty ShortQty_10;
    ShortQty_10.setString("91378");
    noPositions_0_2.set(ShortQty_10);
    PositionQty_NoPositions_10.insert(ShortQty_10.getString());
    all_values.push_back(PositionQty_NoPositions_10);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      FIX::NestedPartyID NestedPartyID_92("STRING_822845259");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyID_92.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_92('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyIDSource_92.getString());
      FIX::NestedPartyRole NestedPartyRole_92(1735200692);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyRole_92.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
        FIX::NestedPartySubID NestedPartySubID_179("STRING_879292562");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubID_179.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_179(1560841193);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubIDType_179.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
        FIX::NestedPartySubID NestedPartySubID_180("STRING_580186558");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubID_180.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_180(841966389);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubIDType_180.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
        FIX::NestedPartySubID NestedPartySubID_181("STRING_1411273480");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubID_181.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_181(1205715809);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubIDType_181.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      FIX::NestedPartyID NestedPartyID_93("STRING_84276458");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyID_93.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_93('2');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyIDSource_93.getString());
      FIX::NestedPartyRole NestedPartyRole_93(583777751);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyRole_93.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
        FIX::NestedPartySubID NestedPartySubID_182("STRING_1506536719");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubID_182.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_182(599844631);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubIDType_182.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
        FIX::NestedPartySubID NestedPartySubID_183("STRING_698468217");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubID_183.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_183(930039968);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubIDType_183.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noPositions_0_2);
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
