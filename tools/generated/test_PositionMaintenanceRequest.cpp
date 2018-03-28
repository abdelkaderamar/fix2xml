#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> PositionMaintenanceRequest_0;
  FIX::Account Account_28("STRING_1343861663");
  msg.set(Account_28);
  PositionMaintenanceRequest_0.insert(Account_28.getString());
  FIX::AccountType AccountType_23(3);
  msg.set(AccountType_23);
  PositionMaintenanceRequest_0.insert(AccountType_23.getString());
  FIX::AcctIDSource AcctIDSource_21(3);
  msg.set(AcctIDSource_21);
  PositionMaintenanceRequest_0.insert(AcctIDSource_21.getString());
  FIX::AdjustmentType AdjustmentType_1(0);
  msg.set(AdjustmentType_1);
  PositionMaintenanceRequest_0.insert(AdjustmentType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_16("LOCALMKTDATE_1895784717");
  msg.set(ClearingBusinessDate_16);
  PositionMaintenanceRequest_0.insert(ClearingBusinessDate_16.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_1(true);
  msg.set(ContraryInstructionIndicator_1);
  PositionMaintenanceRequest_0.insert(ContraryInstructionIndicator_1.getString());
  FIX::Currency Currency_47("CAN");
  msg.set(Currency_47);
  PositionMaintenanceRequest_0.insert(Currency_47.getString());
  FIX::EncodedText EncodedText_77("DATA_2139643669");
  msg.set(EncodedText_77);
  PositionMaintenanceRequest_0.insert(EncodedText_77.getString());
  FIX::EncodedTextLen EncodedTextLen_77(454474450);
  msg.set(EncodedTextLen_77);
  PositionMaintenanceRequest_0.insert(EncodedTextLen_77.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_1("STRING_1025257309");
  msg.set(OrigPosReqRefID_1);
  PositionMaintenanceRequest_0.insert(OrigPosReqRefID_1.getString());
  FIX::PosMaintAction PosMaintAction_1(4);
  msg.set(PosMaintAction_1);
  PositionMaintenanceRequest_0.insert(PosMaintAction_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_2("STRING_1223612728");
  msg.set(PosMaintRptRefID_2);
  PositionMaintenanceRequest_0.insert(PosMaintRptRefID_2.getString());
  FIX::PosReqID PosReqID_2("STRING_296644727");
  msg.set(PosReqID_2);
  PositionMaintenanceRequest_0.insert(PosReqID_2.getString());
  FIX::PosTransType PosTransType_1(1);
  msg.set(PosTransType_1);
  PositionMaintenanceRequest_0.insert(PosTransType_1.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_1(true);
  msg.set(PriorSpreadIndicator_1);
  PositionMaintenanceRequest_0.insert(PriorSpreadIndicator_1.getString());
  FIX::SettlCurrency SettlCurrency_23("JPY");
  msg.set(SettlCurrency_23);
  PositionMaintenanceRequest_0.insert(SettlCurrency_23.getString());
  FIX::SettlSessID SettlSessID_8("STRING_ITD");
  msg.set(SettlSessID_8);
  PositionMaintenanceRequest_0.insert(SettlSessID_8.getString());
  FIX::SettlSessSubID SettlSessSubID_7("STRING_1255220559");
  msg.set(SettlSessSubID_7);
  PositionMaintenanceRequest_0.insert(SettlSessSubID_7.getString());
  FIX::Text Text_77("STRING_1370100127");
  msg.set(Text_77);
  PositionMaintenanceRequest_0.insert(Text_77.getString());
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("3032370");
  msg.set(ThresholdAmount_2);
  PositionMaintenanceRequest_0.insert(ThresholdAmount_2.getString());
  FIX::TransactTime TransactTime_47(FIX::UTCTIMESTAMP(7, 40, 9, 13, 9, 2012));
  msg.set(TransactTime_47);
  PositionMaintenanceRequest_0.insert(TransactTime_47.getString());
  all_values.push_back(PositionMaintenanceRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_83;
    FIX::EncodedLegIssuer EncodedLegIssuer_83("DATA_2127888338");
    noLegs_0_0.set(EncodedLegIssuer_83);
    InstrumentLeg_83.insert(EncodedLegIssuer_83.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_83(1883835593);
    noLegs_0_0.set(EncodedLegIssuerLen_83);
    InstrumentLeg_83.insert(EncodedLegIssuerLen_83.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_83("DATA_844184121");
    noLegs_0_0.set(EncodedLegSecurityDesc_83);
    InstrumentLeg_83.insert(EncodedLegSecurityDesc_83.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_83(753908655);
    noLegs_0_0.set(EncodedLegSecurityDescLen_83);
    InstrumentLeg_83.insert(EncodedLegSecurityDescLen_83.getString());
    FIX::LegCFICode LegCFICode_83("STRING_262205677");
    noLegs_0_0.set(LegCFICode_83);
    InstrumentLeg_83.insert(LegCFICode_83.getString());
    FIX::LegContractMultiplier LegContractMultiplier_83;
    LegContractMultiplier_83.setString("5924851");
    noLegs_0_0.set(LegContractMultiplier_83);
    InstrumentLeg_83.insert(LegContractMultiplier_83.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_83(134065023);
    noLegs_0_0.set(LegContractMultiplierUnit_83);
    InstrumentLeg_83.insert(LegContractMultiplierUnit_83.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_83("MONTHYEAR_853317440");
    noLegs_0_0.set(LegContractSettlMonth_83);
    InstrumentLeg_83.insert(LegContractSettlMonth_83.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_83("COUNTRY_828600592");
    noLegs_0_0.set(LegCountryOfIssue_83);
    InstrumentLeg_83.insert(LegCountryOfIssue_83.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_83("LOCALMKTDATE_126225045");
    noLegs_0_0.set(LegCouponPaymentDate_83);
    InstrumentLeg_83.insert(LegCouponPaymentDate_83.getString());
    FIX::LegCouponRate LegCouponRate_83;
    LegCouponRate_83.setString("18.900000");
    noLegs_0_0.set(LegCouponRate_83);
    InstrumentLeg_83.insert(LegCouponRate_83.getString());
    FIX::LegCreditRating LegCreditRating_83("STRING_1853857901");
    noLegs_0_0.set(LegCreditRating_83);
    InstrumentLeg_83.insert(LegCreditRating_83.getString());
    FIX::LegCurrency LegCurrency_83("GBP");
    noLegs_0_0.set(LegCurrency_83);
    InstrumentLeg_83.insert(LegCurrency_83.getString());
    FIX::LegDatedDate LegDatedDate_83("LOCALMKTDATE_3018980");
    noLegs_0_0.set(LegDatedDate_83);
    InstrumentLeg_83.insert(LegDatedDate_83.getString());
    FIX::LegExerciseStyle LegExerciseStyle_83(1425885947);
    noLegs_0_0.set(LegExerciseStyle_83);
    InstrumentLeg_83.insert(LegExerciseStyle_83.getString());
    FIX::LegFactor LegFactor_83;
    LegFactor_83.setString("2010958");
    noLegs_0_0.set(LegFactor_83);
    InstrumentLeg_83.insert(LegFactor_83.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_83(812102199);
    noLegs_0_0.set(LegFlowScheduleType_83);
    InstrumentLeg_83.insert(LegFlowScheduleType_83.getString());
    FIX::LegInstrRegistry LegInstrRegistry_83("STRING_608773783");
    noLegs_0_0.set(LegInstrRegistry_83);
    InstrumentLeg_83.insert(LegInstrRegistry_83.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_83("LOCALMKTDATE_1969727391");
    noLegs_0_0.set(LegInterestAccrualDate_83);
    InstrumentLeg_83.insert(LegInterestAccrualDate_83.getString());
    FIX::LegIssueDate LegIssueDate_83("LOCALMKTDATE_2067322758");
    noLegs_0_0.set(LegIssueDate_83);
    InstrumentLeg_83.insert(LegIssueDate_83.getString());
    FIX::LegIssuer LegIssuer_83("STRING_1978873910");
    noLegs_0_0.set(LegIssuer_83);
    InstrumentLeg_83.insert(LegIssuer_83.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_83("STRING_125480790");
    noLegs_0_0.set(LegLocaleOfIssue_83);
    InstrumentLeg_83.insert(LegLocaleOfIssue_83.getString());
    FIX::LegMaturityDate LegMaturityDate_83("LOCALMKTDATE_560525771");
    noLegs_0_0.set(LegMaturityDate_83);
    InstrumentLeg_83.insert(LegMaturityDate_83.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_83("MONTHYEAR_1765604222");
    noLegs_0_0.set(LegMaturityMonthYear_83);
    InstrumentLeg_83.insert(LegMaturityMonthYear_83.getString());
    FIX::LegMaturityTime LegMaturityTime_83("TZTIMEONLY_514742890");
    noLegs_0_0.set(LegMaturityTime_83);
    InstrumentLeg_83.insert(LegMaturityTime_83.getString());
    FIX::LegOptAttribute LegOptAttribute_83('1');
    noLegs_0_0.set(LegOptAttribute_83);
    InstrumentLeg_83.insert(LegOptAttribute_83.getString());
    FIX::LegOptionRatio LegOptionRatio_83;
    LegOptionRatio_83.setString("20455492");
    noLegs_0_0.set(LegOptionRatio_83);
    InstrumentLeg_83.insert(LegOptionRatio_83.getString());
    FIX::LegPool LegPool_83("STRING_1861661443");
    noLegs_0_0.set(LegPool_83);
    InstrumentLeg_83.insert(LegPool_83.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_83("STRING_138582402");
    noLegs_0_0.set(LegPriceUnitOfMeasure_83);
    InstrumentLeg_83.insert(LegPriceUnitOfMeasure_83.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
    LegPriceUnitOfMeasureQty_83.setString("4854129");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_83);
    InstrumentLeg_83.insert(LegPriceUnitOfMeasureQty_83.getString());
    FIX::LegProduct LegProduct_83(1842066133);
    noLegs_0_0.set(LegProduct_83);
    InstrumentLeg_83.insert(LegProduct_83.getString());
    FIX::LegPutOrCall LegPutOrCall_83(2022417995);
    noLegs_0_0.set(LegPutOrCall_83);
    InstrumentLeg_83.insert(LegPutOrCall_83.getString());
    FIX::LegRatioQty LegRatioQty_83;
    LegRatioQty_83.setString("13295970");
    noLegs_0_0.set(LegRatioQty_83);
    InstrumentLeg_83.insert(LegRatioQty_83.getString());
    FIX::LegRedemptionDate LegRedemptionDate_83("LOCALMKTDATE_448491140");
    noLegs_0_0.set(LegRedemptionDate_83);
    InstrumentLeg_83.insert(LegRedemptionDate_83.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_83("STRING_137140025");
    noLegs_0_0.set(LegRepoCollateralSecurityType_83);
    InstrumentLeg_83.insert(LegRepoCollateralSecurityType_83.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_83;
    LegRepurchaseRate_83.setString("22.440000");
    noLegs_0_0.set(LegRepurchaseRate_83);
    InstrumentLeg_83.insert(LegRepurchaseRate_83.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_83(582556164);
    noLegs_0_0.set(LegRepurchaseTerm_83);
    InstrumentLeg_83.insert(LegRepurchaseTerm_83.getString());
    FIX::LegSecurityDesc LegSecurityDesc_83("STRING_990457465");
    noLegs_0_0.set(LegSecurityDesc_83);
    InstrumentLeg_83.insert(LegSecurityDesc_83.getString());
    FIX::LegSecurityExchange LegSecurityExchange_83("EXCHANGE_603199188");
    noLegs_0_0.set(LegSecurityExchange_83);
    InstrumentLeg_83.insert(LegSecurityExchange_83.getString());
    FIX::LegSecurityID LegSecurityID_83("STRING_708781209");
    noLegs_0_0.set(LegSecurityID_83);
    InstrumentLeg_83.insert(LegSecurityID_83.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_83("STRING_150765707");
    noLegs_0_0.set(LegSecurityIDSource_83);
    InstrumentLeg_83.insert(LegSecurityIDSource_83.getString());
    FIX::LegSecuritySubType LegSecuritySubType_83("STRING_309573441");
    noLegs_0_0.set(LegSecuritySubType_83);
    InstrumentLeg_83.insert(LegSecuritySubType_83.getString());
    FIX::LegSecurityType LegSecurityType_83("STRING_644871025");
    noLegs_0_0.set(LegSecurityType_83);
    InstrumentLeg_83.insert(LegSecurityType_83.getString());
    FIX::LegSide LegSide_83('5');
    noLegs_0_0.set(LegSide_83);
    InstrumentLeg_83.insert(LegSide_83.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_83("STRING_312592421");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_83);
    InstrumentLeg_83.insert(LegStateOrProvinceOfIssue_83.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_83("JPY");
    noLegs_0_0.set(LegStrikeCurrency_83);
    InstrumentLeg_83.insert(LegStrikeCurrency_83.getString());
    FIX::LegStrikePrice LegStrikePrice_83;
    LegStrikePrice_83.setString("11246946");
    noLegs_0_0.set(LegStrikePrice_83);
    InstrumentLeg_83.insert(LegStrikePrice_83.getString());
    FIX::LegSymbol LegSymbol_83("STRING_532047107");
    noLegs_0_0.set(LegSymbol_83);
    InstrumentLeg_83.insert(LegSymbol_83.getString());
    FIX::LegSymbolSfx LegSymbolSfx_83("STRING_558026267");
    noLegs_0_0.set(LegSymbolSfx_83);
    InstrumentLeg_83.insert(LegSymbolSfx_83.getString());
    FIX::LegTimeUnit LegTimeUnit_83("STRING_1044533730");
    noLegs_0_0.set(LegTimeUnit_83);
    InstrumentLeg_83.insert(LegTimeUnit_83.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_83("STRING_363437370");
    noLegs_0_0.set(LegUnitOfMeasure_83);
    InstrumentLeg_83.insert(LegUnitOfMeasure_83.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
    LegUnitOfMeasureQty_83.setString("6835070");
    noLegs_0_0.set(LegUnitOfMeasureQty_83);
    InstrumentLeg_83.insert(LegUnitOfMeasureQty_83.getString());
    all_values.push_back(InstrumentLeg_83);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
      FIX::LegSecurityAltID LegSecurityAltID_171("STRING_2129041592");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltID_171.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_171("STRING_1198249948");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltIDSource_171.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_84;
    FIX::EncodedLegIssuer EncodedLegIssuer_84("DATA_1203667974");
    noLegs_0_1.set(EncodedLegIssuer_84);
    InstrumentLeg_84.insert(EncodedLegIssuer_84.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_84(2027107159);
    noLegs_0_1.set(EncodedLegIssuerLen_84);
    InstrumentLeg_84.insert(EncodedLegIssuerLen_84.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_84("DATA_912427743");
    noLegs_0_1.set(EncodedLegSecurityDesc_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDesc_84.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_84(1342250377);
    noLegs_0_1.set(EncodedLegSecurityDescLen_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDescLen_84.getString());
    FIX::LegCFICode LegCFICode_84("STRING_365036443");
    noLegs_0_1.set(LegCFICode_84);
    InstrumentLeg_84.insert(LegCFICode_84.getString());
    FIX::LegContractMultiplier LegContractMultiplier_84;
    LegContractMultiplier_84.setString("6070102");
    noLegs_0_1.set(LegContractMultiplier_84);
    InstrumentLeg_84.insert(LegContractMultiplier_84.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_84(1217184724);
    noLegs_0_1.set(LegContractMultiplierUnit_84);
    InstrumentLeg_84.insert(LegContractMultiplierUnit_84.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_84("MONTHYEAR_1694633497");
    noLegs_0_1.set(LegContractSettlMonth_84);
    InstrumentLeg_84.insert(LegContractSettlMonth_84.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_84("COUNTRY_1055501369");
    noLegs_0_1.set(LegCountryOfIssue_84);
    InstrumentLeg_84.insert(LegCountryOfIssue_84.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_84("LOCALMKTDATE_1354324749");
    noLegs_0_1.set(LegCouponPaymentDate_84);
    InstrumentLeg_84.insert(LegCouponPaymentDate_84.getString());
    FIX::LegCouponRate LegCouponRate_84;
    LegCouponRate_84.setString("20.930000");
    noLegs_0_1.set(LegCouponRate_84);
    InstrumentLeg_84.insert(LegCouponRate_84.getString());
    FIX::LegCreditRating LegCreditRating_84("STRING_1638057533");
    noLegs_0_1.set(LegCreditRating_84);
    InstrumentLeg_84.insert(LegCreditRating_84.getString());
    FIX::LegCurrency LegCurrency_84("CHF");
    noLegs_0_1.set(LegCurrency_84);
    InstrumentLeg_84.insert(LegCurrency_84.getString());
    FIX::LegDatedDate LegDatedDate_84("LOCALMKTDATE_199355094");
    noLegs_0_1.set(LegDatedDate_84);
    InstrumentLeg_84.insert(LegDatedDate_84.getString());
    FIX::LegExerciseStyle LegExerciseStyle_84(348064274);
    noLegs_0_1.set(LegExerciseStyle_84);
    InstrumentLeg_84.insert(LegExerciseStyle_84.getString());
    FIX::LegFactor LegFactor_84;
    LegFactor_84.setString("2345210");
    noLegs_0_1.set(LegFactor_84);
    InstrumentLeg_84.insert(LegFactor_84.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_84(844226119);
    noLegs_0_1.set(LegFlowScheduleType_84);
    InstrumentLeg_84.insert(LegFlowScheduleType_84.getString());
    FIX::LegInstrRegistry LegInstrRegistry_84("STRING_882750952");
    noLegs_0_1.set(LegInstrRegistry_84);
    InstrumentLeg_84.insert(LegInstrRegistry_84.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_84("LOCALMKTDATE_547113495");
    noLegs_0_1.set(LegInterestAccrualDate_84);
    InstrumentLeg_84.insert(LegInterestAccrualDate_84.getString());
    FIX::LegIssueDate LegIssueDate_84("LOCALMKTDATE_767499444");
    noLegs_0_1.set(LegIssueDate_84);
    InstrumentLeg_84.insert(LegIssueDate_84.getString());
    FIX::LegIssuer LegIssuer_84("STRING_1618533476");
    noLegs_0_1.set(LegIssuer_84);
    InstrumentLeg_84.insert(LegIssuer_84.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_84("STRING_1671808116");
    noLegs_0_1.set(LegLocaleOfIssue_84);
    InstrumentLeg_84.insert(LegLocaleOfIssue_84.getString());
    FIX::LegMaturityDate LegMaturityDate_84("LOCALMKTDATE_1299546551");
    noLegs_0_1.set(LegMaturityDate_84);
    InstrumentLeg_84.insert(LegMaturityDate_84.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_84("MONTHYEAR_29076096");
    noLegs_0_1.set(LegMaturityMonthYear_84);
    InstrumentLeg_84.insert(LegMaturityMonthYear_84.getString());
    FIX::LegMaturityTime LegMaturityTime_84("TZTIMEONLY_568858198");
    noLegs_0_1.set(LegMaturityTime_84);
    InstrumentLeg_84.insert(LegMaturityTime_84.getString());
    FIX::LegOptAttribute LegOptAttribute_84('1');
    noLegs_0_1.set(LegOptAttribute_84);
    InstrumentLeg_84.insert(LegOptAttribute_84.getString());
    FIX::LegOptionRatio LegOptionRatio_84;
    LegOptionRatio_84.setString("7125831");
    noLegs_0_1.set(LegOptionRatio_84);
    InstrumentLeg_84.insert(LegOptionRatio_84.getString());
    FIX::LegPool LegPool_84("STRING_26434052");
    noLegs_0_1.set(LegPool_84);
    InstrumentLeg_84.insert(LegPool_84.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_84("STRING_1644541865");
    noLegs_0_1.set(LegPriceUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasure_84.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
    LegPriceUnitOfMeasureQty_84.setString("19108331");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasureQty_84.getString());
    FIX::LegProduct LegProduct_84(1230102027);
    noLegs_0_1.set(LegProduct_84);
    InstrumentLeg_84.insert(LegProduct_84.getString());
    FIX::LegPutOrCall LegPutOrCall_84(1524165377);
    noLegs_0_1.set(LegPutOrCall_84);
    InstrumentLeg_84.insert(LegPutOrCall_84.getString());
    FIX::LegRatioQty LegRatioQty_84;
    LegRatioQty_84.setString("6757771");
    noLegs_0_1.set(LegRatioQty_84);
    InstrumentLeg_84.insert(LegRatioQty_84.getString());
    FIX::LegRedemptionDate LegRedemptionDate_84("LOCALMKTDATE_424868756");
    noLegs_0_1.set(LegRedemptionDate_84);
    InstrumentLeg_84.insert(LegRedemptionDate_84.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_84("STRING_1889201820");
    noLegs_0_1.set(LegRepoCollateralSecurityType_84);
    InstrumentLeg_84.insert(LegRepoCollateralSecurityType_84.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_84;
    LegRepurchaseRate_84.setString("74.250000");
    noLegs_0_1.set(LegRepurchaseRate_84);
    InstrumentLeg_84.insert(LegRepurchaseRate_84.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_84(1642053480);
    noLegs_0_1.set(LegRepurchaseTerm_84);
    InstrumentLeg_84.insert(LegRepurchaseTerm_84.getString());
    FIX::LegSecurityDesc LegSecurityDesc_84("STRING_1436351669");
    noLegs_0_1.set(LegSecurityDesc_84);
    InstrumentLeg_84.insert(LegSecurityDesc_84.getString());
    FIX::LegSecurityExchange LegSecurityExchange_84("EXCHANGE_190805146");
    noLegs_0_1.set(LegSecurityExchange_84);
    InstrumentLeg_84.insert(LegSecurityExchange_84.getString());
    FIX::LegSecurityID LegSecurityID_84("STRING_848894582");
    noLegs_0_1.set(LegSecurityID_84);
    InstrumentLeg_84.insert(LegSecurityID_84.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_84("STRING_758100114");
    noLegs_0_1.set(LegSecurityIDSource_84);
    InstrumentLeg_84.insert(LegSecurityIDSource_84.getString());
    FIX::LegSecuritySubType LegSecuritySubType_84("STRING_1828862679");
    noLegs_0_1.set(LegSecuritySubType_84);
    InstrumentLeg_84.insert(LegSecuritySubType_84.getString());
    FIX::LegSecurityType LegSecurityType_84("STRING_1046193148");
    noLegs_0_1.set(LegSecurityType_84);
    InstrumentLeg_84.insert(LegSecurityType_84.getString());
    FIX::LegSide LegSide_84('6');
    noLegs_0_1.set(LegSide_84);
    InstrumentLeg_84.insert(LegSide_84.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_84("STRING_2028217773");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_84);
    InstrumentLeg_84.insert(LegStateOrProvinceOfIssue_84.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_84("CAN");
    noLegs_0_1.set(LegStrikeCurrency_84);
    InstrumentLeg_84.insert(LegStrikeCurrency_84.getString());
    FIX::LegStrikePrice LegStrikePrice_84;
    LegStrikePrice_84.setString("7249602");
    noLegs_0_1.set(LegStrikePrice_84);
    InstrumentLeg_84.insert(LegStrikePrice_84.getString());
    FIX::LegSymbol LegSymbol_84("STRING_129524726");
    noLegs_0_1.set(LegSymbol_84);
    InstrumentLeg_84.insert(LegSymbol_84.getString());
    FIX::LegSymbolSfx LegSymbolSfx_84("STRING_1464682317");
    noLegs_0_1.set(LegSymbolSfx_84);
    InstrumentLeg_84.insert(LegSymbolSfx_84.getString());
    FIX::LegTimeUnit LegTimeUnit_84("STRING_1492459688");
    noLegs_0_1.set(LegTimeUnit_84);
    InstrumentLeg_84.insert(LegTimeUnit_84.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_84("STRING_1748058203");
    noLegs_0_1.set(LegUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegUnitOfMeasure_84.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
    LegUnitOfMeasureQty_84.setString("9890067");
    noLegs_0_1.set(LegUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegUnitOfMeasureQty_84.getString());
    all_values.push_back(InstrumentLeg_84);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
      FIX::LegSecurityAltID LegSecurityAltID_172("STRING_1777134299");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltID_172.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_172("STRING_1557864983");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltIDSource_172.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_85;
    FIX::EncodedLegIssuer EncodedLegIssuer_85("DATA_160022865");
    noLegs_0_2.set(EncodedLegIssuer_85);
    InstrumentLeg_85.insert(EncodedLegIssuer_85.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_85(342233804);
    noLegs_0_2.set(EncodedLegIssuerLen_85);
    InstrumentLeg_85.insert(EncodedLegIssuerLen_85.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_85("DATA_1584299036");
    noLegs_0_2.set(EncodedLegSecurityDesc_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDesc_85.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_85(1804564731);
    noLegs_0_2.set(EncodedLegSecurityDescLen_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDescLen_85.getString());
    FIX::LegCFICode LegCFICode_85("STRING_105583258");
    noLegs_0_2.set(LegCFICode_85);
    InstrumentLeg_85.insert(LegCFICode_85.getString());
    FIX::LegContractMultiplier LegContractMultiplier_85;
    LegContractMultiplier_85.setString("6669174");
    noLegs_0_2.set(LegContractMultiplier_85);
    InstrumentLeg_85.insert(LegContractMultiplier_85.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_85(1181246460);
    noLegs_0_2.set(LegContractMultiplierUnit_85);
    InstrumentLeg_85.insert(LegContractMultiplierUnit_85.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_85("MONTHYEAR_781360454");
    noLegs_0_2.set(LegContractSettlMonth_85);
    InstrumentLeg_85.insert(LegContractSettlMonth_85.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_85("COUNTRY_1091786171");
    noLegs_0_2.set(LegCountryOfIssue_85);
    InstrumentLeg_85.insert(LegCountryOfIssue_85.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_85("LOCALMKTDATE_922964632");
    noLegs_0_2.set(LegCouponPaymentDate_85);
    InstrumentLeg_85.insert(LegCouponPaymentDate_85.getString());
    FIX::LegCouponRate LegCouponRate_85;
    LegCouponRate_85.setString("78.790000");
    noLegs_0_2.set(LegCouponRate_85);
    InstrumentLeg_85.insert(LegCouponRate_85.getString());
    FIX::LegCreditRating LegCreditRating_85("STRING_586356003");
    noLegs_0_2.set(LegCreditRating_85);
    InstrumentLeg_85.insert(LegCreditRating_85.getString());
    FIX::LegCurrency LegCurrency_85("CAN");
    noLegs_0_2.set(LegCurrency_85);
    InstrumentLeg_85.insert(LegCurrency_85.getString());
    FIX::LegDatedDate LegDatedDate_85("LOCALMKTDATE_1435250585");
    noLegs_0_2.set(LegDatedDate_85);
    InstrumentLeg_85.insert(LegDatedDate_85.getString());
    FIX::LegExerciseStyle LegExerciseStyle_85(969932768);
    noLegs_0_2.set(LegExerciseStyle_85);
    InstrumentLeg_85.insert(LegExerciseStyle_85.getString());
    FIX::LegFactor LegFactor_85;
    LegFactor_85.setString("19363320");
    noLegs_0_2.set(LegFactor_85);
    InstrumentLeg_85.insert(LegFactor_85.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_85(333960086);
    noLegs_0_2.set(LegFlowScheduleType_85);
    InstrumentLeg_85.insert(LegFlowScheduleType_85.getString());
    FIX::LegInstrRegistry LegInstrRegistry_85("STRING_1652980516");
    noLegs_0_2.set(LegInstrRegistry_85);
    InstrumentLeg_85.insert(LegInstrRegistry_85.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_85("LOCALMKTDATE_1817066181");
    noLegs_0_2.set(LegInterestAccrualDate_85);
    InstrumentLeg_85.insert(LegInterestAccrualDate_85.getString());
    FIX::LegIssueDate LegIssueDate_85("LOCALMKTDATE_1728217508");
    noLegs_0_2.set(LegIssueDate_85);
    InstrumentLeg_85.insert(LegIssueDate_85.getString());
    FIX::LegIssuer LegIssuer_85("STRING_423065689");
    noLegs_0_2.set(LegIssuer_85);
    InstrumentLeg_85.insert(LegIssuer_85.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_85("STRING_394542778");
    noLegs_0_2.set(LegLocaleOfIssue_85);
    InstrumentLeg_85.insert(LegLocaleOfIssue_85.getString());
    FIX::LegMaturityDate LegMaturityDate_85("LOCALMKTDATE_1857742235");
    noLegs_0_2.set(LegMaturityDate_85);
    InstrumentLeg_85.insert(LegMaturityDate_85.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_85("MONTHYEAR_1887748006");
    noLegs_0_2.set(LegMaturityMonthYear_85);
    InstrumentLeg_85.insert(LegMaturityMonthYear_85.getString());
    FIX::LegMaturityTime LegMaturityTime_85("TZTIMEONLY_1887002466");
    noLegs_0_2.set(LegMaturityTime_85);
    InstrumentLeg_85.insert(LegMaturityTime_85.getString());
    FIX::LegOptAttribute LegOptAttribute_85('1');
    noLegs_0_2.set(LegOptAttribute_85);
    InstrumentLeg_85.insert(LegOptAttribute_85.getString());
    FIX::LegOptionRatio LegOptionRatio_85;
    LegOptionRatio_85.setString("7292711");
    noLegs_0_2.set(LegOptionRatio_85);
    InstrumentLeg_85.insert(LegOptionRatio_85.getString());
    FIX::LegPool LegPool_85("STRING_384041410");
    noLegs_0_2.set(LegPool_85);
    InstrumentLeg_85.insert(LegPool_85.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_85("STRING_1087967441");
    noLegs_0_2.set(LegPriceUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasure_85.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
    LegPriceUnitOfMeasureQty_85.setString("1396524");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasureQty_85.getString());
    FIX::LegProduct LegProduct_85(544064276);
    noLegs_0_2.set(LegProduct_85);
    InstrumentLeg_85.insert(LegProduct_85.getString());
    FIX::LegPutOrCall LegPutOrCall_85(1430201245);
    noLegs_0_2.set(LegPutOrCall_85);
    InstrumentLeg_85.insert(LegPutOrCall_85.getString());
    FIX::LegRatioQty LegRatioQty_85;
    LegRatioQty_85.setString("17239515");
    noLegs_0_2.set(LegRatioQty_85);
    InstrumentLeg_85.insert(LegRatioQty_85.getString());
    FIX::LegRedemptionDate LegRedemptionDate_85("LOCALMKTDATE_201145359");
    noLegs_0_2.set(LegRedemptionDate_85);
    InstrumentLeg_85.insert(LegRedemptionDate_85.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_85("STRING_1535784503");
    noLegs_0_2.set(LegRepoCollateralSecurityType_85);
    InstrumentLeg_85.insert(LegRepoCollateralSecurityType_85.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_85;
    LegRepurchaseRate_85.setString("52.820000");
    noLegs_0_2.set(LegRepurchaseRate_85);
    InstrumentLeg_85.insert(LegRepurchaseRate_85.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_85(1382391819);
    noLegs_0_2.set(LegRepurchaseTerm_85);
    InstrumentLeg_85.insert(LegRepurchaseTerm_85.getString());
    FIX::LegSecurityDesc LegSecurityDesc_85("STRING_169661310");
    noLegs_0_2.set(LegSecurityDesc_85);
    InstrumentLeg_85.insert(LegSecurityDesc_85.getString());
    FIX::LegSecurityExchange LegSecurityExchange_85("EXCHANGE_1335171453");
    noLegs_0_2.set(LegSecurityExchange_85);
    InstrumentLeg_85.insert(LegSecurityExchange_85.getString());
    FIX::LegSecurityID LegSecurityID_85("STRING_157872803");
    noLegs_0_2.set(LegSecurityID_85);
    InstrumentLeg_85.insert(LegSecurityID_85.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_85("STRING_86325541");
    noLegs_0_2.set(LegSecurityIDSource_85);
    InstrumentLeg_85.insert(LegSecurityIDSource_85.getString());
    FIX::LegSecuritySubType LegSecuritySubType_85("STRING_1921527456");
    noLegs_0_2.set(LegSecuritySubType_85);
    InstrumentLeg_85.insert(LegSecuritySubType_85.getString());
    FIX::LegSecurityType LegSecurityType_85("STRING_369705457");
    noLegs_0_2.set(LegSecurityType_85);
    InstrumentLeg_85.insert(LegSecurityType_85.getString());
    FIX::LegSide LegSide_85('1');
    noLegs_0_2.set(LegSide_85);
    InstrumentLeg_85.insert(LegSide_85.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_85("STRING_1209294394");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_85);
    InstrumentLeg_85.insert(LegStateOrProvinceOfIssue_85.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_85("CHF");
    noLegs_0_2.set(LegStrikeCurrency_85);
    InstrumentLeg_85.insert(LegStrikeCurrency_85.getString());
    FIX::LegStrikePrice LegStrikePrice_85;
    LegStrikePrice_85.setString("15432544");
    noLegs_0_2.set(LegStrikePrice_85);
    InstrumentLeg_85.insert(LegStrikePrice_85.getString());
    FIX::LegSymbol LegSymbol_85("STRING_845135094");
    noLegs_0_2.set(LegSymbol_85);
    InstrumentLeg_85.insert(LegSymbol_85.getString());
    FIX::LegSymbolSfx LegSymbolSfx_85("STRING_1799709509");
    noLegs_0_2.set(LegSymbolSfx_85);
    InstrumentLeg_85.insert(LegSymbolSfx_85.getString());
    FIX::LegTimeUnit LegTimeUnit_85("STRING_1123988340");
    noLegs_0_2.set(LegTimeUnit_85);
    InstrumentLeg_85.insert(LegTimeUnit_85.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_85("STRING_1268200783");
    noLegs_0_2.set(LegUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegUnitOfMeasure_85.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
    LegUnitOfMeasureQty_85.setString("467686");
    noLegs_0_2.set(LegUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegUnitOfMeasureQty_85.getString());
    all_values.push_back(InstrumentLeg_85);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
      FIX::LegSecurityAltID LegSecurityAltID_173("STRING_1008465142");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltID_173.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_173("STRING_1933771105");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltIDSource_173.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_58;
  FIX::AttachmentPoint AttachmentPoint_58;
  AttachmentPoint_58.setString("0.690000");
  msg.set(AttachmentPoint_58);
  Instrument_58.insert(AttachmentPoint_58.getString());
  FIX::CFICode CFICode_58("STRING_1737736285");
  msg.set(CFICode_58);
  Instrument_58.insert(CFICode_58.getString());
  FIX::CPProgram CPProgram_58(2);
  msg.set(CPProgram_58);
  Instrument_58.insert(CPProgram_58.getString());
  FIX::CPRegType CPRegType_58("STRING_1233047510");
  msg.set(CPRegType_58);
  Instrument_58.insert(CPRegType_58.getString());
  FIX::CapPrice CapPrice_58;
  CapPrice_58.setString("18773887");
  msg.set(CapPrice_58);
  Instrument_58.insert(CapPrice_58.getString());
  FIX::ContractMultiplier ContractMultiplier_58;
  ContractMultiplier_58.setString("7143931");
  msg.set(ContractMultiplier_58);
  Instrument_58.insert(ContractMultiplier_58.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_58(2);
  msg.set(ContractMultiplierUnit_58);
  Instrument_58.insert(ContractMultiplierUnit_58.getString());
  FIX::ContractSettlMonth ContractSettlMonth_58("MONTHYEAR_1453856631");
  msg.set(ContractSettlMonth_58);
  Instrument_58.insert(ContractSettlMonth_58.getString());
  FIX::CountryOfIssue CountryOfIssue_58("COUNTRY_915538503");
  msg.set(CountryOfIssue_58);
  Instrument_58.insert(CountryOfIssue_58.getString());
  FIX::CouponPaymentDate CouponPaymentDate_58("LOCALMKTDATE_2051549611");
  msg.set(CouponPaymentDate_58);
  Instrument_58.insert(CouponPaymentDate_58.getString());
  FIX::CouponRate CouponRate_58;
  CouponRate_58.setString("19.130000");
  msg.set(CouponRate_58);
  Instrument_58.insert(CouponRate_58.getString());
  FIX::CreditRating CreditRating_58("STRING_150446674");
  msg.set(CreditRating_58);
  Instrument_58.insert(CreditRating_58.getString());
  FIX::DatedDate DatedDate_58("LOCALMKTDATE_73727273");
  msg.set(DatedDate_58);
  Instrument_58.insert(DatedDate_58.getString());
  FIX::DetachmentPoint DetachmentPoint_58;
  DetachmentPoint_58.setString("97.180000");
  msg.set(DetachmentPoint_58);
  Instrument_58.insert(DetachmentPoint_58.getString());
  FIX::EncodedIssuer EncodedIssuer_58("DATA_308319477");
  msg.set(EncodedIssuer_58);
  Instrument_58.insert(EncodedIssuer_58.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_58(160052815);
  msg.set(EncodedIssuerLen_58);
  Instrument_58.insert(EncodedIssuerLen_58.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_58("DATA_658973527");
  msg.set(EncodedSecurityDesc_58);
  Instrument_58.insert(EncodedSecurityDesc_58.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_58(678024935);
  msg.set(EncodedSecurityDescLen_58);
  Instrument_58.insert(EncodedSecurityDescLen_58.getString());
  FIX::ExerciseStyle ExerciseStyle_58(2);
  msg.set(ExerciseStyle_58);
  Instrument_58.insert(ExerciseStyle_58.getString());
  FIX::Factor Factor_58;
  Factor_58.setString("18682679");
  msg.set(Factor_58);
  Instrument_58.insert(Factor_58.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_58(false);
  msg.set(FlexProductEligibilityIndicator_58);
  Instrument_58.insert(FlexProductEligibilityIndicator_58.getString());
  FIX::FlexibleIndicator FlexibleIndicator_58(false);
  msg.set(FlexibleIndicator_58);
  Instrument_58.insert(FlexibleIndicator_58.getString());
  FIX::FloorPrice FloorPrice_58;
  FloorPrice_58.setString("12640387");
  msg.set(FloorPrice_58);
  Instrument_58.insert(FloorPrice_58.getString());
  FIX::FlowScheduleType FlowScheduleType_58(2);
  msg.set(FlowScheduleType_58);
  Instrument_58.insert(FlowScheduleType_58.getString());
  FIX::InstrRegistry InstrRegistry_58("STRING_2136200570");
  msg.set(InstrRegistry_58);
  Instrument_58.insert(InstrRegistry_58.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_58('2');
  msg.set(InstrmtAssignmentMethod_58);
  Instrument_58.insert(InstrmtAssignmentMethod_58.getString());
  FIX::InterestAccrualDate InterestAccrualDate_58("LOCALMKTDATE_1983515390");
  msg.set(InterestAccrualDate_58);
  Instrument_58.insert(InterestAccrualDate_58.getString());
  FIX::IssueDate IssueDate_58("LOCALMKTDATE_35485561");
  msg.set(IssueDate_58);
  Instrument_58.insert(IssueDate_58.getString());
  FIX::Issuer Issuer_58("STRING_1074790373");
  msg.set(Issuer_58);
  Instrument_58.insert(Issuer_58.getString());
  FIX::ListMethod ListMethod_58(0);
  msg.set(ListMethod_58);
  Instrument_58.insert(ListMethod_58.getString());
  FIX::LocaleOfIssue LocaleOfIssue_58("STRING_1969256667");
  msg.set(LocaleOfIssue_58);
  Instrument_58.insert(LocaleOfIssue_58.getString());
  FIX::MaturityDate MaturityDate_58("LOCALMKTDATE_1219870442");
  msg.set(MaturityDate_58);
  Instrument_58.insert(MaturityDate_58.getString());
  FIX::MaturityMonthYear MaturityMonthYear_58("MONTHYEAR_434749522");
  msg.set(MaturityMonthYear_58);
  Instrument_58.insert(MaturityMonthYear_58.getString());
  FIX::MaturityTime MaturityTime_58("TZTIMEONLY_2139585535");
  msg.set(MaturityTime_58);
  Instrument_58.insert(MaturityTime_58.getString());
  FIX::MinPriceIncrement MinPriceIncrement_58;
  MinPriceIncrement_58.setString("3054343");
  msg.set(MinPriceIncrement_58);
  Instrument_58.insert(MinPriceIncrement_58.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
  MinPriceIncrementAmount_58.setString("1646546");
  msg.set(MinPriceIncrementAmount_58);
  Instrument_58.insert(MinPriceIncrementAmount_58.getString());
  FIX::NTPositionLimit NTPositionLimit_58(706495031);
  msg.set(NTPositionLimit_58);
  Instrument_58.insert(NTPositionLimit_58.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
  NotionalPercentageOutstanding_58.setString("94.130000");
  msg.set(NotionalPercentageOutstanding_58);
  Instrument_58.insert(NotionalPercentageOutstanding_58.getString());
  FIX::OptAttribute OptAttribute_58('1');
  msg.set(OptAttribute_58);
  Instrument_58.insert(OptAttribute_58.getString());
  FIX::OptPayoutAmount OptPayoutAmount_58;
  OptPayoutAmount_58.setString("16220335");
  msg.set(OptPayoutAmount_58);
  Instrument_58.insert(OptPayoutAmount_58.getString());
  FIX::OptPayoutType OptPayoutType_58(2);
  msg.set(OptPayoutType_58);
  Instrument_58.insert(OptPayoutType_58.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
  OriginalNotionalPercentageOutstanding_58.setString("95.350000");
  msg.set(OriginalNotionalPercentageOutstanding_58);
  Instrument_58.insert(OriginalNotionalPercentageOutstanding_58.getString());
  FIX::Pool Pool_58("STRING_1772480208");
  msg.set(Pool_58);
  Instrument_58.insert(Pool_58.getString());
  FIX::PositionLimit PositionLimit_58(798992650);
  msg.set(PositionLimit_58);
  Instrument_58.insert(PositionLimit_58.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_58("STRING_INT");
  msg.set(PriceQuoteMethod_58);
  Instrument_58.insert(PriceQuoteMethod_58.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_58("STRING_2080799685");
  msg.set(PriceUnitOfMeasure_58);
  Instrument_58.insert(PriceUnitOfMeasure_58.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
  PriceUnitOfMeasureQty_58.setString("9590454");
  msg.set(PriceUnitOfMeasureQty_58);
  Instrument_58.insert(PriceUnitOfMeasureQty_58.getString());
  FIX::Product Product_60(9);
  msg.set(Product_60);
  Instrument_58.insert(Product_60.getString());
  FIX::ProductComplex ProductComplex_58("STRING_611340972");
  msg.set(ProductComplex_58);
  Instrument_58.insert(ProductComplex_58.getString());
  FIX::PutOrCall PutOrCall_58(1);
  msg.set(PutOrCall_58);
  Instrument_58.insert(PutOrCall_58.getString());
  FIX::RedemptionDate RedemptionDate_58("LOCALMKTDATE_285473406");
  msg.set(RedemptionDate_58);
  Instrument_58.insert(RedemptionDate_58.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_58("STRING_481520485");
  msg.set(RepoCollateralSecurityType_58);
  Instrument_58.insert(RepoCollateralSecurityType_58.getString());
  FIX::RepurchaseRate RepurchaseRate_58;
  RepurchaseRate_58.setString("42.600000");
  msg.set(RepurchaseRate_58);
  Instrument_58.insert(RepurchaseRate_58.getString());
  FIX::RepurchaseTerm RepurchaseTerm_58(1549512159);
  msg.set(RepurchaseTerm_58);
  Instrument_58.insert(RepurchaseTerm_58.getString());
  FIX::RestructuringType RestructuringType_58("STRING_FR");
  msg.set(RestructuringType_58);
  Instrument_58.insert(RestructuringType_58.getString());
  FIX::SecurityDesc SecurityDesc_58("STRING_1638101183");
  msg.set(SecurityDesc_58);
  Instrument_58.insert(SecurityDesc_58.getString());
  FIX::SecurityExchange SecurityExchange_58("EXCHANGE_1790055604");
  msg.set(SecurityExchange_58);
  Instrument_58.insert(SecurityExchange_58.getString());
  FIX::SecurityGroup SecurityGroup_58("STRING_1032866835");
  msg.set(SecurityGroup_58);
  Instrument_58.insert(SecurityGroup_58.getString());
  FIX::SecurityID SecurityID_58("STRING_1673586744");
  msg.set(SecurityID_58);
  Instrument_58.insert(SecurityID_58.getString());
  FIX::SecurityIDSource SecurityIDSource_58("STRING_E");
  msg.set(SecurityIDSource_58);
  Instrument_58.insert(SecurityIDSource_58.getString());
  FIX::SecurityStatus SecurityStatus_58("STRING_2");
  msg.set(SecurityStatus_58);
  Instrument_58.insert(SecurityStatus_58.getString());
  FIX::SecuritySubType SecuritySubType_59("STRING_1495359763");
  msg.set(SecuritySubType_59);
  Instrument_58.insert(SecuritySubType_59.getString());
  FIX::SecurityType SecurityType_60("STRING_TECP");
  msg.set(SecurityType_60);
  Instrument_58.insert(SecurityType_60.getString());
  FIX::Seniority Seniority_58("STRING_SD");
  msg.set(Seniority_58);
  Instrument_58.insert(Seniority_58.getString());
  FIX::SettlMethod SettlMethod_58('C');
  msg.set(SettlMethod_58);
  Instrument_58.insert(SettlMethod_58.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_58("STRING_95183429");
  msg.set(SettleOnOpenFlag_58);
  Instrument_58.insert(SettleOnOpenFlag_58.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_58("STRING_329284232");
  msg.set(StateOrProvinceOfIssue_58);
  Instrument_58.insert(StateOrProvinceOfIssue_58.getString());
  FIX::StrikeCurrency StrikeCurrency_58("JPY");
  msg.set(StrikeCurrency_58);
  Instrument_58.insert(StrikeCurrency_58.getString());
  FIX::StrikeMultiplier StrikeMultiplier_58;
  StrikeMultiplier_58.setString("19477955");
  msg.set(StrikeMultiplier_58);
  Instrument_58.insert(StrikeMultiplier_58.getString());
  FIX::StrikePrice StrikePrice_58;
  StrikePrice_58.setString("16685065");
  msg.set(StrikePrice_58);
  Instrument_58.insert(StrikePrice_58.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_58(4);
  msg.set(StrikePriceBoundaryMethod_58);
  Instrument_58.insert(StrikePriceBoundaryMethod_58.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
  StrikePriceBoundaryPrecision_58.setString("13.890000");
  msg.set(StrikePriceBoundaryPrecision_58);
  Instrument_58.insert(StrikePriceBoundaryPrecision_58.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_58(4);
  msg.set(StrikePriceDeterminationMethod_58);
  Instrument_58.insert(StrikePriceDeterminationMethod_58.getString());
  FIX::StrikeValue StrikeValue_58;
  StrikeValue_58.setString("2931572");
  msg.set(StrikeValue_58);
  Instrument_58.insert(StrikeValue_58.getString());
  FIX::Symbol Symbol_58("STRING_874296995");
  msg.set(Symbol_58);
  Instrument_58.insert(Symbol_58.getString());
  FIX::SymbolSfx SymbolSfx_58("STRING_WI");
  msg.set(SymbolSfx_58);
  Instrument_58.insert(SymbolSfx_58.getString());
  FIX::TimeUnit TimeUnit_58("STRING_Yr");
  msg.set(TimeUnit_58);
  Instrument_58.insert(TimeUnit_58.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_58(1);
  msg.set(UnderlyingPriceDeterminationMethod_58);
  Instrument_58.insert(UnderlyingPriceDeterminationMethod_58.getString());
  FIX::UnitOfMeasure UnitOfMeasure_58("STRING_oz_tr");
  msg.set(UnitOfMeasure_58);
  Instrument_58.insert(UnitOfMeasure_58.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
  UnitOfMeasureQty_58.setString("4176122");
  msg.set(UnitOfMeasureQty_58);
  Instrument_58.insert(UnitOfMeasureQty_58.getString());
  FIX::ValuationMethod ValuationMethod_58("STRING_CDSD");
  msg.set(ValuationMethod_58);
  Instrument_58.insert(ValuationMethod_58.getString());
  all_values.push_back(Instrument_58);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_113;
    FIX::ComplexEventCondition ComplexEventCondition_113(2);
    noComplexEvents_0_0.set(ComplexEventCondition_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventCondition_113.getString());
    FIX::ComplexEventPrice ComplexEventPrice_113;
    ComplexEventPrice_113.setString("11264880");
    noComplexEvents_0_0.set(ComplexEventPrice_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPrice_113.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_113(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryMethod_113.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
    ComplexEventPriceBoundaryPrecision_113.setString("40.320000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryPrecision_113.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_113(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceTimeType_113.getString());
    FIX::ComplexEventType ComplexEventType_113(6);
    noComplexEvents_0_0.set(ComplexEventType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventType_113.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
    ComplexOptPayoutAmount_113.setString("10837171");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexOptPayoutAmount_113.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_113);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_232;
      FIX::ComplexEventEndDate ComplexEventEndDate_232(FIX::UTCTIMESTAMP(20, 15, 59, 22, 9, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventEndDate_232.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_232(FIX::UTCTIMESTAMP(22, 45, 27, 21, 8, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_232);
      ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventStartDate_232.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_232);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
        FIX::ComplexEventEndTime ComplexEventEndTime_476(FIX::UTCTIMEONLY(4, 55, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventEndTime_476.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_476(FIX::UTCTIMEONLY(15, 37, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventStartTime_476.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
        FIX::ComplexEventEndTime ComplexEventEndTime_477(FIX::UTCTIMEONLY(11, 36, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventEndTime_477.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_477(FIX::UTCTIMEONLY(14, 13, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventStartTime_477.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
        FIX::ComplexEventEndTime ComplexEventEndTime_478(FIX::UTCTIMEONLY(13, 36, 16));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventEndTime_478.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_478(FIX::UTCTIMEONLY(12, 47, 43));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventStartTime_478.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_233;
      FIX::ComplexEventEndDate ComplexEventEndDate_233(FIX::UTCTIMESTAMP(9, 3, 40, 24, 3, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventEndDate_233.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_233(FIX::UTCTIMESTAMP(22, 44, 5, 15, 5, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventStartDate_233.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_233);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
        FIX::ComplexEventEndTime ComplexEventEndTime_479(FIX::UTCTIMEONLY(10, 32, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventEndTime_479.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_479(FIX::UTCTIMEONLY(14, 50, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventStartTime_479.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
        FIX::ComplexEventEndTime ComplexEventEndTime_480(FIX::UTCTIMEONLY(3, 43, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventEndTime_480.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_480(FIX::UTCTIMEONLY(20, 18, 10));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventStartTime_480.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
        FIX::ComplexEventEndTime ComplexEventEndTime_481(FIX::UTCTIMEONLY(19, 5, 39));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventEndTime_481.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_481(FIX::UTCTIMEONLY(23, 28, 38));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventStartTime_481.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_114;
    FIX::ComplexEventCondition ComplexEventCondition_114(2);
    noComplexEvents_0_1.set(ComplexEventCondition_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventCondition_114.getString());
    FIX::ComplexEventPrice ComplexEventPrice_114;
    ComplexEventPrice_114.setString("4951342");
    noComplexEvents_0_1.set(ComplexEventPrice_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPrice_114.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_114(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryMethod_114.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
    ComplexEventPriceBoundaryPrecision_114.setString("9.200000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryPrecision_114.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_114(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceTimeType_114.getString());
    FIX::ComplexEventType ComplexEventType_114(7);
    noComplexEvents_0_1.set(ComplexEventType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventType_114.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
    ComplexOptPayoutAmount_114.setString("17729758");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexOptPayoutAmount_114.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_114);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_234;
      FIX::ComplexEventEndDate ComplexEventEndDate_234(FIX::UTCTIMESTAMP(0, 50, 3, 7, 5, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventEndDate_234.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_234(FIX::UTCTIMESTAMP(23, 46, 9, 22, 11, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventStartDate_234.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_234);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
        FIX::ComplexEventEndTime ComplexEventEndTime_482(FIX::UTCTIMEONLY(23, 45, 4));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventEndTime_482.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_482(FIX::UTCTIMEONLY(20, 33, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventStartTime_482.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_235;
      FIX::ComplexEventEndDate ComplexEventEndDate_235(FIX::UTCTIMESTAMP(14, 20, 25, 27, 7, 2000));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventEndDate_235.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_235(FIX::UTCTIMESTAMP(11, 46, 59, 10, 2, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventStartDate_235.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_235);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
        FIX::ComplexEventEndTime ComplexEventEndTime_483(FIX::UTCTIMEONLY(23, 24, 32));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventEndTime_483.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_483(FIX::UTCTIMEONLY(10, 0, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventStartTime_483.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_115;
    FIX::ComplexEventCondition ComplexEventCondition_115(1);
    noComplexEvents_0_2.set(ComplexEventCondition_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventCondition_115.getString());
    FIX::ComplexEventPrice ComplexEventPrice_115;
    ComplexEventPrice_115.setString("11916028");
    noComplexEvents_0_2.set(ComplexEventPrice_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPrice_115.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_115(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryMethod_115.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
    ComplexEventPriceBoundaryPrecision_115.setString("62.080000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryPrecision_115.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_115(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceTimeType_115.getString());
    FIX::ComplexEventType ComplexEventType_115(2);
    noComplexEvents_0_2.set(ComplexEventType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventType_115.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
    ComplexOptPayoutAmount_115.setString("9939431");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexOptPayoutAmount_115.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_115);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_236;
      FIX::ComplexEventEndDate ComplexEventEndDate_236(FIX::UTCTIMESTAMP(11, 50, 20, 2, 9, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventEndDate_236.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_236(FIX::UTCTIMESTAMP(11, 53, 18, 2, 11, 2001));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventStartDate_236.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_236);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
        FIX::ComplexEventEndTime ComplexEventEndTime_484(FIX::UTCTIMEONLY(12, 35, 42));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventEndTime_484.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_484(FIX::UTCTIMEONLY(10, 34, 30));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventStartTime_484.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
        FIX::ComplexEventEndTime ComplexEventEndTime_485(FIX::UTCTIMEONLY(13, 8, 10));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventEndTime_485.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_485(FIX::UTCTIMEONLY(22, 4, 9));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventStartTime_485.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_237;
      FIX::ComplexEventEndDate ComplexEventEndDate_237(FIX::UTCTIMESTAMP(19, 59, 18, 2, 8, 2012));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventEndDate_237.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_237(FIX::UTCTIMESTAMP(23, 9, 23, 5, 1, 2016));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventStartDate_237.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_237);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
        FIX::ComplexEventEndTime ComplexEventEndTime_486(FIX::UTCTIMEONLY(21, 32, 40));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventEndTime_486.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_486(FIX::UTCTIMEONLY(6, 15, 13));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventStartTime_486.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
        FIX::ComplexEventEndTime ComplexEventEndTime_487(FIX::UTCTIMEONLY(8, 13, 58));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventEndTime_487.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_487(FIX::UTCTIMEONLY(12, 54, 24));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventStartTime_487.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_238;
      FIX::ComplexEventEndDate ComplexEventEndDate_238(FIX::UTCTIMESTAMP(14, 15, 47, 24, 4, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventEndDate_238.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_238(FIX::UTCTIMESTAMP(2, 5, 12, 27, 6, 2002));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventStartDate_238.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_238);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
        FIX::ComplexEventEndTime ComplexEventEndTime_488(FIX::UTCTIMEONLY(5, 51, 24));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventEndTime_488.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_488(FIX::UTCTIMEONLY(1, 31, 33));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventStartTime_488.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
        FIX::ComplexEventEndTime ComplexEventEndTime_489(FIX::UTCTIMEONLY(15, 46, 28));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventEndTime_489.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_489(FIX::UTCTIMEONLY(10, 22, 47));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventStartTime_489.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_110;
    FIX::EventDate EventDate_110("LOCALMKTDATE_415898908");
    noEvents_0_0.set(EventDate_110);
    EvntGrp_NoEvents_110.insert(EventDate_110.getString());
    FIX::EventPx EventPx_110;
    EventPx_110.setString("6614423");
    noEvents_0_0.set(EventPx_110);
    EvntGrp_NoEvents_110.insert(EventPx_110.getString());
    FIX::EventText EventText_110("STRING_1072959491");
    noEvents_0_0.set(EventText_110);
    EvntGrp_NoEvents_110.insert(EventText_110.getString());
    FIX::EventTime EventTime_110(FIX::UTCTIMESTAMP(10, 7, 9, 12, 2, 2013));
    noEvents_0_0.set(EventTime_110);
    EvntGrp_NoEvents_110.insert(EventTime_110.getString());
    FIX::EventType EventType_110(16);
    noEvents_0_0.set(EventType_110);
    EvntGrp_NoEvents_110.insert(EventType_110.getString());
    all_values.push_back(EvntGrp_NoEvents_110);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    FIX::EventDate EventDate_111("LOCALMKTDATE_2031321546");
    noEvents_0_1.set(EventDate_111);
    EvntGrp_NoEvents_111.insert(EventDate_111.getString());
    FIX::EventPx EventPx_111;
    EventPx_111.setString("5382626");
    noEvents_0_1.set(EventPx_111);
    EvntGrp_NoEvents_111.insert(EventPx_111.getString());
    FIX::EventText EventText_111("STRING_1299062486");
    noEvents_0_1.set(EventText_111);
    EvntGrp_NoEvents_111.insert(EventText_111.getString());
    FIX::EventTime EventTime_111(FIX::UTCTIMESTAMP(15, 10, 6, 7, 12, 2007));
    noEvents_0_1.set(EventTime_111);
    EvntGrp_NoEvents_111.insert(EventTime_111.getString());
    FIX::EventType EventType_111(17);
    noEvents_0_1.set(EventType_111);
    EvntGrp_NoEvents_111.insert(EventType_111.getString());
    all_values.push_back(EvntGrp_NoEvents_111);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_112;
    FIX::EventDate EventDate_112("LOCALMKTDATE_105147621");
    noEvents_0_2.set(EventDate_112);
    EvntGrp_NoEvents_112.insert(EventDate_112.getString());
    FIX::EventPx EventPx_112;
    EventPx_112.setString("6648349");
    noEvents_0_2.set(EventPx_112);
    EvntGrp_NoEvents_112.insert(EventPx_112.getString());
    FIX::EventText EventText_112("STRING_1297182075");
    noEvents_0_2.set(EventText_112);
    EvntGrp_NoEvents_112.insert(EventText_112.getString());
    FIX::EventTime EventTime_112(FIX::UTCTIMESTAMP(7, 17, 3, 11, 6, 2002));
    noEvents_0_2.set(EventTime_112);
    EvntGrp_NoEvents_112.insert(EventTime_112.getString());
    FIX::EventType EventType_112(3);
    noEvents_0_2.set(EventType_112);
    EvntGrp_NoEvents_112.insert(EventType_112.getString());
    all_values.push_back(EvntGrp_NoEvents_112);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_110;
    FIX::InstrumentPartyID InstrumentPartyID_110("STRING_804449504");
    noInstrumentParties_0_0.set(InstrumentPartyID_110);
    InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyID_110.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_110('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_110);
    InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyIDSource_110.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_110(2093255880);
    noInstrumentParties_0_0.set(InstrumentPartyRole_110);
    InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyRole_110.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_110);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
      FIX::InstrumentPartySubID InstrumentPartySubID_234("STRING_1103488428");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubID_234.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_234(1266663545);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubIDType_234.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_111;
    FIX::InstrumentPartyID InstrumentPartyID_111("STRING_249395459");
    noInstrumentParties_0_1.set(InstrumentPartyID_111);
    InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyID_111.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_111('9');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_111);
    InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyIDSource_111.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_111(1150501444);
    noInstrumentParties_0_1.set(InstrumentPartyRole_111);
    InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyRole_111.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_111);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
      FIX::InstrumentPartySubID InstrumentPartySubID_235("STRING_95506993");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubID_235.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_235(443616646);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubIDType_235.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_112;
    FIX::InstrumentPartyID InstrumentPartyID_112("STRING_1958356213");
    noInstrumentParties_0_2.set(InstrumentPartyID_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyID_112.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_112('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyIDSource_112.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_112(842647612);
    noInstrumentParties_0_2.set(InstrumentPartyRole_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyRole_112.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_112);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
      FIX::InstrumentPartySubID InstrumentPartySubID_236("STRING_788000175");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubID_236.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_236(1987346369);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubIDType_236.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
      FIX::InstrumentPartySubID InstrumentPartySubID_237("STRING_1649506605");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubID_237.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_237(893147796);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubIDType_237.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_125;
    FIX::SecurityAltID SecurityAltID_125("STRING_799205032");
    noSecurityAltID_0_0.set(SecurityAltID_125);
    SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltID_125.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_125("STRING_227390117");
    noSecurityAltID_0_0.set(SecurityAltIDSource_125);
    SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltIDSource_125.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_126;
    FIX::SecurityAltID SecurityAltID_126("STRING_1438852213");
    noSecurityAltID_0_1.set(SecurityAltID_126);
    SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltID_126.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_126("STRING_2078755389");
    noSecurityAltID_0_1.set(SecurityAltIDSource_126);
    SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltIDSource_126.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_127;
    FIX::SecurityAltID SecurityAltID_127("STRING_1452244580");
    noSecurityAltID_0_2.set(SecurityAltID_127);
    SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltID_127.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_127("STRING_2123478180");
    noSecurityAltID_0_2.set(SecurityAltIDSource_127);
    SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltIDSource_127.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_116;
  FIX::SecurityXML SecurityXML_117("XMLDATA_251854063");
  msg.set(SecurityXML_117);
  FIX::SecurityXMLLen SecurityXMLLen_58(945514304);
  msg.set(SecurityXMLLen_58);
  FIX::SecurityXMLSchema SecurityXMLSchema_58("STRING_1322062834");
  msg.set(SecurityXMLSchema_58);
  SecurityXML_116.insert(SecurityXMLSchema_58.getString());
  all_values.push_back(SecurityXML_116);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_102;
    FIX::PartyID PartyID_102("STRING_1749963809");
    noPartyIDs_0_0.set(PartyID_102);
    Parties_NoPartyIDs_102.insert(PartyID_102.getString());
    FIX::PartyIDSource PartyIDSource_102('6');
    noPartyIDs_0_0.set(PartyIDSource_102);
    Parties_NoPartyIDs_102.insert(PartyIDSource_102.getString());
    FIX::PartyRole PartyRole_102(42);
    noPartyIDs_0_0.set(PartyRole_102);
    Parties_NoPartyIDs_102.insert(PartyRole_102.getString());
    all_values.push_back(Parties_NoPartyIDs_102);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_207;
      FIX::PartySubID PartySubID_207("STRING_935361190");
      noPartySubIDs_0_1_0.set(PartySubID_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubID_207.getString());
      FIX::PartySubIDType PartySubIDType_207(6);
      noPartySubIDs_0_1_0.set(PartySubIDType_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubIDType_207.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_207);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_8;
    FIX::PosAmt PosAmt_8;
    PosAmt_8.setString("18792893");
    noPosAmt_0_0.set(PosAmt_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmt_8.getString());
    FIX::PosAmtType PosAmtType_8("STRING_CASH");
    noPosAmt_0_0.set(PosAmtType_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmtType_8.getString());
    FIX::PositionCurrency PositionCurrency_8("STRING_487200268");
    noPosAmt_0_0.set(PositionCurrency_8);
    PositionAmountData_NoPosAmt_8.insert(PositionCurrency_8.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_8);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_9;
    FIX::PosAmt PosAmt_9;
    PosAmt_9.setString("19747963");
    noPosAmt_0_1.set(PosAmt_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmt_9.getString());
    FIX::PosAmtType PosAmtType_9("STRING_FMTM");
    noPosAmt_0_1.set(PosAmtType_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmtType_9.getString());
    FIX::PositionCurrency PositionCurrency_9("STRING_298072833");
    noPosAmt_0_1.set(PositionCurrency_9);
    PositionAmountData_NoPosAmt_9.insert(PositionCurrency_9.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_9);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("6308421");
    noPosAmt_0_2.set(PosAmt_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmt_10.getString());
    FIX::PosAmtType PosAmtType_10("STRING_TVAR");
    noPosAmt_0_2.set(PosAmtType_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmtType_10.getString());
    FIX::PositionCurrency PositionCurrency_10("STRING_261797321");
    noPosAmt_0_2.set(PositionCurrency_10);
    PositionAmountData_NoPosAmt_10.insert(PositionCurrency_10.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_10);

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("8394927");
    noPositions_0_0.set(LongQty_6);
    PositionQty_NoPositions_6.insert(LongQty_6.getString());
    FIX::PosQtyStatus PosQtyStatus_6(2);
    noPositions_0_0.set(PosQtyStatus_6);
    PositionQty_NoPositions_6.insert(PosQtyStatus_6.getString());
    FIX::PosType PosType_6("STRING_CAA");
    noPositions_0_0.set(PosType_6);
    PositionQty_NoPositions_6.insert(PosType_6.getString());
    FIX::QuantityDate QuantityDate_6("LOCALMKTDATE_1344190466");
    noPositions_0_0.set(QuantityDate_6);
    PositionQty_NoPositions_6.insert(QuantityDate_6.getString());
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("5630253");
    noPositions_0_0.set(ShortQty_6);
    PositionQty_NoPositions_6.insert(ShortQty_6.getString());
    all_values.push_back(PositionQty_NoPositions_6);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_88;
      FIX::NestedPartyID NestedPartyID_88("STRING_635559031");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyID_88.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_88('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyIDSource_88.getString());
      FIX::NestedPartyRole NestedPartyRole_88(1844141154);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyRole_88.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_88);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
        FIX::NestedPartySubID NestedPartySubID_179("STRING_746151115");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubID_179.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_179(642171811);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubIDType_179.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
        FIX::NestedPartySubID NestedPartySubID_180("STRING_1933616397");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubID_180.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_180(244063343);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubIDType_180.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
        FIX::NestedPartySubID NestedPartySubID_181("STRING_244651972");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubID_181.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_181(1765489159);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubIDType_181.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_89;
      FIX::NestedPartyID NestedPartyID_89("STRING_1835231451");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyID_89.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_89('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyIDSource_89.getString());
      FIX::NestedPartyRole NestedPartyRole_89(553366701);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyRole_89.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_89);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
        FIX::NestedPartySubID NestedPartySubID_182("STRING_1541824573");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubID_182.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_182(285172398);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubIDType_182.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("1114616");
    noPositions_0_1.set(LongQty_7);
    PositionQty_NoPositions_7.insert(LongQty_7.getString());
    FIX::PosQtyStatus PosQtyStatus_7(2);
    noPositions_0_1.set(PosQtyStatus_7);
    PositionQty_NoPositions_7.insert(PosQtyStatus_7.getString());
    FIX::PosType PosType_7("STRING_SOD");
    noPositions_0_1.set(PosType_7);
    PositionQty_NoPositions_7.insert(PosType_7.getString());
    FIX::QuantityDate QuantityDate_7("LOCALMKTDATE_268444059");
    noPositions_0_1.set(QuantityDate_7);
    PositionQty_NoPositions_7.insert(QuantityDate_7.getString());
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("1796140");
    noPositions_0_1.set(ShortQty_7);
    PositionQty_NoPositions_7.insert(ShortQty_7.getString());
    all_values.push_back(PositionQty_NoPositions_7);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      FIX::NestedPartyID NestedPartyID_90("STRING_1268074119");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyID_90.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_90('4');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyIDSource_90.getString());
      FIX::NestedPartyRole NestedPartyRole_90(14685884);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_90);
      NestedParties_NoNestedPartyIDs_90.insert(NestedPartyRole_90.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
        FIX::NestedPartySubID NestedPartySubID_183("STRING_205231626");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubID_183.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_183(179192341);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubIDType_183.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    FIX::TradingSessionID TradingSessionID_62("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_62);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionID_62.getString());
    FIX::TradingSessionSubID TradingSessionSubID_62("STRING_6");
    noTradingSessions_0_0.set(TradingSessionSubID_62);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionSubID_62.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_20;
    FIX::TradingSessionID TradingSessionID_63("STRING_3");
    noTradingSessions_0_1.set(TradingSessionID_63);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionID_63.getString());
    FIX::TradingSessionSubID TradingSessionSubID_63("STRING_5");
    noTradingSessions_0_1.set(TradingSessionSubID_63);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionSubID_63.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_20);

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_85;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_85("DATA_403902666");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuer_85.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_85(2008705104);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuerLen_85.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_85("DATA_909918232");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDesc_85.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_85(190035415);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDescLen_85.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
    UnderlyingAdjustedQuantity_85.setString("1052847");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_85);
    UnderlyingInstrument_85.insert(UnderlyingAdjustedQuantity_85.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
    UnderlyingAllocationPercent_85.setString("2.040000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_85);
    UnderlyingInstrument_85.insert(UnderlyingAllocationPercent_85.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
    UnderlyingAttachmentPoint_85.setString("45.750000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingAttachmentPoint_85.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_85("STRING_1940516250");
    noUnderlyings_0_0.set(UnderlyingCFICode_85);
    UnderlyingInstrument_85.insert(UnderlyingCFICode_85.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_85("STRING_849368923");
    noUnderlyings_0_0.set(UnderlyingCPProgram_85);
    UnderlyingInstrument_85.insert(UnderlyingCPProgram_85.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_85("STRING_361407628");
    noUnderlyings_0_0.set(UnderlyingCPRegType_85);
    UnderlyingInstrument_85.insert(UnderlyingCPRegType_85.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_85;
    UnderlyingCapValue_85.setString("1911284");
    noUnderlyings_0_0.set(UnderlyingCapValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCapValue_85.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
    UnderlyingCashAmount_85.setString("2437098");
    noUnderlyings_0_0.set(UnderlyingCashAmount_85);
    UnderlyingInstrument_85.insert(UnderlyingCashAmount_85.getString());
    FIX::UnderlyingCashType UnderlyingCashType_85("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_85);
    UnderlyingInstrument_85.insert(UnderlyingCashType_85.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
    UnderlyingContractMultiplier_85.setString("3025900");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplier_85.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_85(125251042);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplierUnit_85.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_85("COUNTRY_759065116");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingCountryOfIssue_85.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_85("LOCALMKTDATE_571034083");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponPaymentDate_85.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
    UnderlyingCouponRate_85.setString("50.690000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponRate_85.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_85("STRING_1502392339");
    noUnderlyings_0_0.set(UnderlyingCreditRating_85);
    UnderlyingInstrument_85.insert(UnderlyingCreditRating_85.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_85("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrency_85.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
    UnderlyingCurrentValue_85.setString("15170782");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrentValue_85.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
    UnderlyingDetachmentPoint_85.setString("14.550000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingDetachmentPoint_85.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
    UnderlyingDirtyPrice_85.setString("9515080");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingDirtyPrice_85.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
    UnderlyingEndPrice_85.setString("16962705");
    noUnderlyings_0_0.set(UnderlyingEndPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingEndPrice_85.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_85;
    UnderlyingEndValue_85.setString("9559815");
    noUnderlyings_0_0.set(UnderlyingEndValue_85);
    UnderlyingInstrument_85.insert(UnderlyingEndValue_85.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_85(1719764980);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_85);
    UnderlyingInstrument_85.insert(UnderlyingExerciseStyle_85.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_85;
    UnderlyingFXRate_85.setString("1198758");
    noUnderlyings_0_0.set(UnderlyingFXRate_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRate_85.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_85('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRateCalc_85.getString());
    FIX::UnderlyingFactor UnderlyingFactor_85;
    UnderlyingFactor_85.setString("8348353");
    noUnderlyings_0_0.set(UnderlyingFactor_85);
    UnderlyingInstrument_85.insert(UnderlyingFactor_85.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_85(387622252);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_85);
    UnderlyingInstrument_85.insert(UnderlyingFlowScheduleType_85.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_85("STRING_1152233294");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_85);
    UnderlyingInstrument_85.insert(UnderlyingInstrRegistry_85.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_85("LOCALMKTDATE_696056777");
    noUnderlyings_0_0.set(UnderlyingIssueDate_85);
    UnderlyingInstrument_85.insert(UnderlyingIssueDate_85.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_85("STRING_1297540485");
    noUnderlyings_0_0.set(UnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(UnderlyingIssuer_85.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_85("STRING_1342268710");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingLocaleOfIssue_85.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_85("LOCALMKTDATE_801341576");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityDate_85.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_85("MONTHYEAR_304627041");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityMonthYear_85.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_85("TZTIMEONLY_1150309637");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityTime_85.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
    UnderlyingNotionalPercentageOutstanding_85.setString("41.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_85('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_85);
    UnderlyingInstrument_85.insert(UnderlyingOptAttribute_85.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
    UnderlyingOriginalNotionalPercentageOutstanding_85.setString("72.650000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingOriginalNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_85("STRING_785502591");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasure_85.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
    UnderlyingPriceUnitOfMeasureQty_85.setString("13977058");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasureQty_85.getString());
    FIX::UnderlyingProduct UnderlyingProduct_85(10813644);
    noUnderlyings_0_0.set(UnderlyingProduct_85);
    UnderlyingInstrument_85.insert(UnderlyingProduct_85.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_85(1088092614);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_85);
    UnderlyingInstrument_85.insert(UnderlyingPutOrCall_85.getString());
    FIX::UnderlyingPx UnderlyingPx_85;
    UnderlyingPx_85.setString("15229568");
    noUnderlyings_0_0.set(UnderlyingPx_85);
    UnderlyingInstrument_85.insert(UnderlyingPx_85.getString());
    FIX::UnderlyingQty UnderlyingQty_85;
    UnderlyingQty_85.setString("7698787");
    noUnderlyings_0_0.set(UnderlyingQty_85);
    UnderlyingInstrument_85.insert(UnderlyingQty_85.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_85("LOCALMKTDATE_1659126697");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_85);
    UnderlyingInstrument_85.insert(UnderlyingRedemptionDate_85.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_85("STRING_1827821925");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingRepoCollateralSecurityType_85.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
    UnderlyingRepurchaseRate_85.setString("74.510000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseRate_85.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_85(1350751252);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseTerm_85.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_85("STRING_426614694");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_85);
    UnderlyingInstrument_85.insert(UnderlyingRestructuringType_85.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_85("STRING_1641865674");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityDesc_85.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_85("EXCHANGE_1002459059");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityExchange_85.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_85("STRING_1378122738");
    noUnderlyings_0_0.set(UnderlyingSecurityID_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityID_85.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_85("STRING_1190652590");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityIDSource_85.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_85("STRING_1958440585");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecuritySubType_85.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_85("STRING_950404070");
    noUnderlyings_0_0.set(UnderlyingSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityType_85.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_85("STRING_1310528421");
    noUnderlyings_0_0.set(UnderlyingSeniority_85);
    UnderlyingInstrument_85.insert(UnderlyingSeniority_85.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_85("STRING_559287565");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlMethod_85.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_85(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlementType_85.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_85;
    UnderlyingStartValue_85.setString("16981506");
    noUnderlyings_0_0.set(UnderlyingStartValue_85);
    UnderlyingInstrument_85.insert(UnderlyingStartValue_85.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_85("STRING_1711520860");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingStateOrProvinceOfIssue_85.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_85("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikeCurrency_85.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
    UnderlyingStrikePrice_85.setString("9063059");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikePrice_85.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_85("STRING_1135154098");
    noUnderlyings_0_0.set(UnderlyingSymbol_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbol_85.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_85("STRING_1152834552");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbolSfx_85.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_85("STRING_2056615559");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingTimeUnit_85.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_85("STRING_1729528277");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasure_85.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
    UnderlyingUnitOfMeasureQty_85.setString("1593468");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasureQty_85.getString());
    all_values.push_back(UnderlyingInstrument_85);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_180("STRING_367547220");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltID_180.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_180("STRING_1557052683");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltIDSource_180.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
      FIX::UnderlyingStipType UnderlyingStipType_165("STRING_1455639834");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipType_165.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_165("STRING_932525892");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipValue_165.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
      FIX::UnderlyingStipType UnderlyingStipType_166("STRING_54057933");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_166);
      UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipType_166.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_166("STRING_967282884");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_166);
      UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipValue_166.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_170("STRING_178845385");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyID_170.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_170('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyIDSource_170.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_170(1039478864);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyRole_170.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_344("STRING_1173009547");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubID_344.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_344(270117954);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubIDType_344.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_345("STRING_863880002");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubID_345.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_345(983966484);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubIDType_345.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_171("STRING_1220522024");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyID_171.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_171('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyIDSource_171.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_171(1543254049);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyRole_171.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_346("STRING_1725075449");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubID_346.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_346(1107291261);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubIDType_346.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_347("STRING_1192090290");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubID_347.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_347(425799312);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubIDType_347.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
