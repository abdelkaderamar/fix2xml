#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  multiset<string> ExecutionAcknowledgement_0;
  FIX::AvgPx AvgPx_4;
  AvgPx_4.setString("16590506");
  msg.set(AvgPx_4);
  ExecutionAcknowledgement_0.insert(AvgPx_4.getString());
  FIX::ClOrdID ClOrdID_21("STRING_75450014");
  msg.set(ClOrdID_21);
  ExecutionAcknowledgement_0.insert(ClOrdID_21.getString());
  FIX::CumQty CumQty_0;
  CumQty_0.setString("4702501");
  msg.set(CumQty_0);
  ExecutionAcknowledgement_0.insert(CumQty_0.getString());
  FIX::DKReason DKReason_1('F');
  msg.set(DKReason_1);
  ExecutionAcknowledgement_0.insert(DKReason_1.getString());
  FIX::EncodedText EncodedText_35("DATA_1036375528");
  msg.set(EncodedText_35);
  ExecutionAcknowledgement_0.insert(EncodedText_35.getString());
  FIX::EncodedTextLen EncodedTextLen_35(865326197);
  msg.set(EncodedTextLen_35);
  ExecutionAcknowledgement_0.insert(EncodedTextLen_35.getString());
  FIX::ExecAckStatus ExecAckStatus_0('0');
  msg.set(ExecAckStatus_0);
  ExecutionAcknowledgement_0.insert(ExecAckStatus_0.getString());
  FIX::ExecID ExecID_16("STRING_969877806");
  msg.set(ExecID_16);
  ExecutionAcknowledgement_0.insert(ExecID_16.getString());
  FIX::LastParPx LastParPx_6;
  LastParPx_6.setString("18863942");
  msg.set(LastParPx_6);
  ExecutionAcknowledgement_0.insert(LastParPx_6.getString());
  FIX::LastPx LastPx_7;
  LastPx_7.setString("8248138");
  msg.set(LastPx_7);
  ExecutionAcknowledgement_0.insert(LastPx_7.getString());
  FIX::LastQty LastQty_7;
  LastQty_7.setString("16385500");
  msg.set(LastQty_7);
  ExecutionAcknowledgement_0.insert(LastQty_7.getString());
  FIX::OrderID OrderID_21("STRING_310213747");
  msg.set(OrderID_21);
  ExecutionAcknowledgement_0.insert(OrderID_21.getString());
  FIX::PriceType PriceType_14(8);
  msg.set(PriceType_14);
  ExecutionAcknowledgement_0.insert(PriceType_14.getString());
  FIX::SecondaryOrderID SecondaryOrderID_18("STRING_1181419133");
  msg.set(SecondaryOrderID_18);
  ExecutionAcknowledgement_0.insert(SecondaryOrderID_18.getString());
  FIX::Side Side_15('6');
  msg.set(Side_15);
  ExecutionAcknowledgement_0.insert(Side_15.getString());
  FIX::Text Text_35("STRING_1030847179");
  msg.set(Text_35);
  ExecutionAcknowledgement_0.insert(Text_35.getString());
  all_values.push_back(ExecutionAcknowledgement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_43;
    FIX::EncodedLegIssuer EncodedLegIssuer_43("DATA_907864452");
    noLegs_0_0.set(EncodedLegIssuer_43);
    InstrumentLeg_43.insert(EncodedLegIssuer_43.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_43(1813683396);
    noLegs_0_0.set(EncodedLegIssuerLen_43);
    InstrumentLeg_43.insert(EncodedLegIssuerLen_43.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_43("DATA_1868167730");
    noLegs_0_0.set(EncodedLegSecurityDesc_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDesc_43.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_43(813583785);
    noLegs_0_0.set(EncodedLegSecurityDescLen_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDescLen_43.getString());
    FIX::LegCFICode LegCFICode_43("STRING_1816901229");
    noLegs_0_0.set(LegCFICode_43);
    InstrumentLeg_43.insert(LegCFICode_43.getString());
    FIX::LegContractMultiplier LegContractMultiplier_43;
    LegContractMultiplier_43.setString("2688623");
    noLegs_0_0.set(LegContractMultiplier_43);
    InstrumentLeg_43.insert(LegContractMultiplier_43.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_43(1485638935);
    noLegs_0_0.set(LegContractMultiplierUnit_43);
    InstrumentLeg_43.insert(LegContractMultiplierUnit_43.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_43("MONTHYEAR_1293254502");
    noLegs_0_0.set(LegContractSettlMonth_43);
    InstrumentLeg_43.insert(LegContractSettlMonth_43.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_43("COUNTRY_904895585");
    noLegs_0_0.set(LegCountryOfIssue_43);
    InstrumentLeg_43.insert(LegCountryOfIssue_43.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_43("LOCALMKTDATE_271469768");
    noLegs_0_0.set(LegCouponPaymentDate_43);
    InstrumentLeg_43.insert(LegCouponPaymentDate_43.getString());
    FIX::LegCouponRate LegCouponRate_43;
    LegCouponRate_43.setString("11.250000");
    noLegs_0_0.set(LegCouponRate_43);
    InstrumentLeg_43.insert(LegCouponRate_43.getString());
    FIX::LegCreditRating LegCreditRating_43("STRING_1584759325");
    noLegs_0_0.set(LegCreditRating_43);
    InstrumentLeg_43.insert(LegCreditRating_43.getString());
    FIX::LegCurrency LegCurrency_43("CAN");
    noLegs_0_0.set(LegCurrency_43);
    InstrumentLeg_43.insert(LegCurrency_43.getString());
    FIX::LegDatedDate LegDatedDate_43("LOCALMKTDATE_1096326329");
    noLegs_0_0.set(LegDatedDate_43);
    InstrumentLeg_43.insert(LegDatedDate_43.getString());
    FIX::LegExerciseStyle LegExerciseStyle_43(426406543);
    noLegs_0_0.set(LegExerciseStyle_43);
    InstrumentLeg_43.insert(LegExerciseStyle_43.getString());
    FIX::LegFactor LegFactor_43;
    LegFactor_43.setString("20325634");
    noLegs_0_0.set(LegFactor_43);
    InstrumentLeg_43.insert(LegFactor_43.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_43(221355445);
    noLegs_0_0.set(LegFlowScheduleType_43);
    InstrumentLeg_43.insert(LegFlowScheduleType_43.getString());
    FIX::LegInstrRegistry LegInstrRegistry_43("STRING_1462782071");
    noLegs_0_0.set(LegInstrRegistry_43);
    InstrumentLeg_43.insert(LegInstrRegistry_43.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_43("LOCALMKTDATE_750405953");
    noLegs_0_0.set(LegInterestAccrualDate_43);
    InstrumentLeg_43.insert(LegInterestAccrualDate_43.getString());
    FIX::LegIssueDate LegIssueDate_43("LOCALMKTDATE_1219809052");
    noLegs_0_0.set(LegIssueDate_43);
    InstrumentLeg_43.insert(LegIssueDate_43.getString());
    FIX::LegIssuer LegIssuer_43("STRING_285176230");
    noLegs_0_0.set(LegIssuer_43);
    InstrumentLeg_43.insert(LegIssuer_43.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_43("STRING_489316515");
    noLegs_0_0.set(LegLocaleOfIssue_43);
    InstrumentLeg_43.insert(LegLocaleOfIssue_43.getString());
    FIX::LegMaturityDate LegMaturityDate_43("LOCALMKTDATE_2044622949");
    noLegs_0_0.set(LegMaturityDate_43);
    InstrumentLeg_43.insert(LegMaturityDate_43.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_43("MONTHYEAR_1923726246");
    noLegs_0_0.set(LegMaturityMonthYear_43);
    InstrumentLeg_43.insert(LegMaturityMonthYear_43.getString());
    FIX::LegMaturityTime LegMaturityTime_43("TZTIMEONLY_799530262");
    noLegs_0_0.set(LegMaturityTime_43);
    InstrumentLeg_43.insert(LegMaturityTime_43.getString());
    FIX::LegOptAttribute LegOptAttribute_43('2');
    noLegs_0_0.set(LegOptAttribute_43);
    InstrumentLeg_43.insert(LegOptAttribute_43.getString());
    FIX::LegOptionRatio LegOptionRatio_43;
    LegOptionRatio_43.setString("9576617");
    noLegs_0_0.set(LegOptionRatio_43);
    InstrumentLeg_43.insert(LegOptionRatio_43.getString());
    FIX::LegPool LegPool_43("STRING_1082877035");
    noLegs_0_0.set(LegPool_43);
    InstrumentLeg_43.insert(LegPool_43.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_43("STRING_921279380");
    noLegs_0_0.set(LegPriceUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasure_43.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
    LegPriceUnitOfMeasureQty_43.setString("5198277");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasureQty_43.getString());
    FIX::LegProduct LegProduct_43(1990741488);
    noLegs_0_0.set(LegProduct_43);
    InstrumentLeg_43.insert(LegProduct_43.getString());
    FIX::LegPutOrCall LegPutOrCall_43(587479128);
    noLegs_0_0.set(LegPutOrCall_43);
    InstrumentLeg_43.insert(LegPutOrCall_43.getString());
    FIX::LegRatioQty LegRatioQty_43;
    LegRatioQty_43.setString("2405118");
    noLegs_0_0.set(LegRatioQty_43);
    InstrumentLeg_43.insert(LegRatioQty_43.getString());
    FIX::LegRedemptionDate LegRedemptionDate_43("LOCALMKTDATE_656841625");
    noLegs_0_0.set(LegRedemptionDate_43);
    InstrumentLeg_43.insert(LegRedemptionDate_43.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_43("STRING_256896710");
    noLegs_0_0.set(LegRepoCollateralSecurityType_43);
    InstrumentLeg_43.insert(LegRepoCollateralSecurityType_43.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_43;
    LegRepurchaseRate_43.setString("41.340000");
    noLegs_0_0.set(LegRepurchaseRate_43);
    InstrumentLeg_43.insert(LegRepurchaseRate_43.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_43(2142480560);
    noLegs_0_0.set(LegRepurchaseTerm_43);
    InstrumentLeg_43.insert(LegRepurchaseTerm_43.getString());
    FIX::LegSecurityDesc LegSecurityDesc_43("STRING_1550151212");
    noLegs_0_0.set(LegSecurityDesc_43);
    InstrumentLeg_43.insert(LegSecurityDesc_43.getString());
    FIX::LegSecurityExchange LegSecurityExchange_43("EXCHANGE_1414269719");
    noLegs_0_0.set(LegSecurityExchange_43);
    InstrumentLeg_43.insert(LegSecurityExchange_43.getString());
    FIX::LegSecurityID LegSecurityID_43("STRING_266466680");
    noLegs_0_0.set(LegSecurityID_43);
    InstrumentLeg_43.insert(LegSecurityID_43.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_43("STRING_543828690");
    noLegs_0_0.set(LegSecurityIDSource_43);
    InstrumentLeg_43.insert(LegSecurityIDSource_43.getString());
    FIX::LegSecuritySubType LegSecuritySubType_43("STRING_851545396");
    noLegs_0_0.set(LegSecuritySubType_43);
    InstrumentLeg_43.insert(LegSecuritySubType_43.getString());
    FIX::LegSecurityType LegSecurityType_43("STRING_617423209");
    noLegs_0_0.set(LegSecurityType_43);
    InstrumentLeg_43.insert(LegSecurityType_43.getString());
    FIX::LegSide LegSide_43('2');
    noLegs_0_0.set(LegSide_43);
    InstrumentLeg_43.insert(LegSide_43.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_43("STRING_1947871725");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_43);
    InstrumentLeg_43.insert(LegStateOrProvinceOfIssue_43.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_43("CAN");
    noLegs_0_0.set(LegStrikeCurrency_43);
    InstrumentLeg_43.insert(LegStrikeCurrency_43.getString());
    FIX::LegStrikePrice LegStrikePrice_43;
    LegStrikePrice_43.setString("217435");
    noLegs_0_0.set(LegStrikePrice_43);
    InstrumentLeg_43.insert(LegStrikePrice_43.getString());
    FIX::LegSymbol LegSymbol_43("STRING_359128176");
    noLegs_0_0.set(LegSymbol_43);
    InstrumentLeg_43.insert(LegSymbol_43.getString());
    FIX::LegSymbolSfx LegSymbolSfx_43("STRING_594144009");
    noLegs_0_0.set(LegSymbolSfx_43);
    InstrumentLeg_43.insert(LegSymbolSfx_43.getString());
    FIX::LegTimeUnit LegTimeUnit_43("STRING_1241552574");
    noLegs_0_0.set(LegTimeUnit_43);
    InstrumentLeg_43.insert(LegTimeUnit_43.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_43("STRING_644304406");
    noLegs_0_0.set(LegUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegUnitOfMeasure_43.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
    LegUnitOfMeasureQty_43.setString("10834605");
    noLegs_0_0.set(LegUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegUnitOfMeasureQty_43.getString());
    all_values.push_back(InstrumentLeg_43);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
      FIX::LegSecurityAltID LegSecurityAltID_77("STRING_420547004");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltID_77.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_77("STRING_1882990787");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltIDSource_77.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
      FIX::LegSecurityAltID LegSecurityAltID_78("STRING_1029124076");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltID_78.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_78("STRING_1378208736");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltIDSource_78.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_44;
    FIX::EncodedLegIssuer EncodedLegIssuer_44("DATA_818384174");
    noLegs_0_1.set(EncodedLegIssuer_44);
    InstrumentLeg_44.insert(EncodedLegIssuer_44.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_44(1950403456);
    noLegs_0_1.set(EncodedLegIssuerLen_44);
    InstrumentLeg_44.insert(EncodedLegIssuerLen_44.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_44("DATA_1898036457");
    noLegs_0_1.set(EncodedLegSecurityDesc_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDesc_44.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_44(661642014);
    noLegs_0_1.set(EncodedLegSecurityDescLen_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDescLen_44.getString());
    FIX::LegCFICode LegCFICode_44("STRING_390398936");
    noLegs_0_1.set(LegCFICode_44);
    InstrumentLeg_44.insert(LegCFICode_44.getString());
    FIX::LegContractMultiplier LegContractMultiplier_44;
    LegContractMultiplier_44.setString("21385482");
    noLegs_0_1.set(LegContractMultiplier_44);
    InstrumentLeg_44.insert(LegContractMultiplier_44.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_44(1318483639);
    noLegs_0_1.set(LegContractMultiplierUnit_44);
    InstrumentLeg_44.insert(LegContractMultiplierUnit_44.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_44("MONTHYEAR_647295646");
    noLegs_0_1.set(LegContractSettlMonth_44);
    InstrumentLeg_44.insert(LegContractSettlMonth_44.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_44("COUNTRY_500438747");
    noLegs_0_1.set(LegCountryOfIssue_44);
    InstrumentLeg_44.insert(LegCountryOfIssue_44.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_44("LOCALMKTDATE_1313480551");
    noLegs_0_1.set(LegCouponPaymentDate_44);
    InstrumentLeg_44.insert(LegCouponPaymentDate_44.getString());
    FIX::LegCouponRate LegCouponRate_44;
    LegCouponRate_44.setString("32.110000");
    noLegs_0_1.set(LegCouponRate_44);
    InstrumentLeg_44.insert(LegCouponRate_44.getString());
    FIX::LegCreditRating LegCreditRating_44("STRING_1914708467");
    noLegs_0_1.set(LegCreditRating_44);
    InstrumentLeg_44.insert(LegCreditRating_44.getString());
    FIX::LegCurrency LegCurrency_44("CAN");
    noLegs_0_1.set(LegCurrency_44);
    InstrumentLeg_44.insert(LegCurrency_44.getString());
    FIX::LegDatedDate LegDatedDate_44("LOCALMKTDATE_618770215");
    noLegs_0_1.set(LegDatedDate_44);
    InstrumentLeg_44.insert(LegDatedDate_44.getString());
    FIX::LegExerciseStyle LegExerciseStyle_44(49886792);
    noLegs_0_1.set(LegExerciseStyle_44);
    InstrumentLeg_44.insert(LegExerciseStyle_44.getString());
    FIX::LegFactor LegFactor_44;
    LegFactor_44.setString("5524502");
    noLegs_0_1.set(LegFactor_44);
    InstrumentLeg_44.insert(LegFactor_44.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_44(419158293);
    noLegs_0_1.set(LegFlowScheduleType_44);
    InstrumentLeg_44.insert(LegFlowScheduleType_44.getString());
    FIX::LegInstrRegistry LegInstrRegistry_44("STRING_1093716545");
    noLegs_0_1.set(LegInstrRegistry_44);
    InstrumentLeg_44.insert(LegInstrRegistry_44.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_44("LOCALMKTDATE_396188256");
    noLegs_0_1.set(LegInterestAccrualDate_44);
    InstrumentLeg_44.insert(LegInterestAccrualDate_44.getString());
    FIX::LegIssueDate LegIssueDate_44("LOCALMKTDATE_440901815");
    noLegs_0_1.set(LegIssueDate_44);
    InstrumentLeg_44.insert(LegIssueDate_44.getString());
    FIX::LegIssuer LegIssuer_44("STRING_1452844721");
    noLegs_0_1.set(LegIssuer_44);
    InstrumentLeg_44.insert(LegIssuer_44.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_44("STRING_990332265");
    noLegs_0_1.set(LegLocaleOfIssue_44);
    InstrumentLeg_44.insert(LegLocaleOfIssue_44.getString());
    FIX::LegMaturityDate LegMaturityDate_44("LOCALMKTDATE_1682454390");
    noLegs_0_1.set(LegMaturityDate_44);
    InstrumentLeg_44.insert(LegMaturityDate_44.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_44("MONTHYEAR_2097149127");
    noLegs_0_1.set(LegMaturityMonthYear_44);
    InstrumentLeg_44.insert(LegMaturityMonthYear_44.getString());
    FIX::LegMaturityTime LegMaturityTime_44("TZTIMEONLY_2073792789");
    noLegs_0_1.set(LegMaturityTime_44);
    InstrumentLeg_44.insert(LegMaturityTime_44.getString());
    FIX::LegOptAttribute LegOptAttribute_44('6');
    noLegs_0_1.set(LegOptAttribute_44);
    InstrumentLeg_44.insert(LegOptAttribute_44.getString());
    FIX::LegOptionRatio LegOptionRatio_44;
    LegOptionRatio_44.setString("3702124");
    noLegs_0_1.set(LegOptionRatio_44);
    InstrumentLeg_44.insert(LegOptionRatio_44.getString());
    FIX::LegPool LegPool_44("STRING_1809299928");
    noLegs_0_1.set(LegPool_44);
    InstrumentLeg_44.insert(LegPool_44.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_44("STRING_1702786693");
    noLegs_0_1.set(LegPriceUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasure_44.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
    LegPriceUnitOfMeasureQty_44.setString("17484212");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasureQty_44.getString());
    FIX::LegProduct LegProduct_44(480200455);
    noLegs_0_1.set(LegProduct_44);
    InstrumentLeg_44.insert(LegProduct_44.getString());
    FIX::LegPutOrCall LegPutOrCall_44(1505706501);
    noLegs_0_1.set(LegPutOrCall_44);
    InstrumentLeg_44.insert(LegPutOrCall_44.getString());
    FIX::LegRatioQty LegRatioQty_44;
    LegRatioQty_44.setString("14989740");
    noLegs_0_1.set(LegRatioQty_44);
    InstrumentLeg_44.insert(LegRatioQty_44.getString());
    FIX::LegRedemptionDate LegRedemptionDate_44("LOCALMKTDATE_1141842469");
    noLegs_0_1.set(LegRedemptionDate_44);
    InstrumentLeg_44.insert(LegRedemptionDate_44.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_44("STRING_1896105438");
    noLegs_0_1.set(LegRepoCollateralSecurityType_44);
    InstrumentLeg_44.insert(LegRepoCollateralSecurityType_44.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_44;
    LegRepurchaseRate_44.setString("86.420000");
    noLegs_0_1.set(LegRepurchaseRate_44);
    InstrumentLeg_44.insert(LegRepurchaseRate_44.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_44(312842461);
    noLegs_0_1.set(LegRepurchaseTerm_44);
    InstrumentLeg_44.insert(LegRepurchaseTerm_44.getString());
    FIX::LegSecurityDesc LegSecurityDesc_44("STRING_395917436");
    noLegs_0_1.set(LegSecurityDesc_44);
    InstrumentLeg_44.insert(LegSecurityDesc_44.getString());
    FIX::LegSecurityExchange LegSecurityExchange_44("EXCHANGE_1990477390");
    noLegs_0_1.set(LegSecurityExchange_44);
    InstrumentLeg_44.insert(LegSecurityExchange_44.getString());
    FIX::LegSecurityID LegSecurityID_44("STRING_1626323012");
    noLegs_0_1.set(LegSecurityID_44);
    InstrumentLeg_44.insert(LegSecurityID_44.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_44("STRING_445880647");
    noLegs_0_1.set(LegSecurityIDSource_44);
    InstrumentLeg_44.insert(LegSecurityIDSource_44.getString());
    FIX::LegSecuritySubType LegSecuritySubType_44("STRING_1757702209");
    noLegs_0_1.set(LegSecuritySubType_44);
    InstrumentLeg_44.insert(LegSecuritySubType_44.getString());
    FIX::LegSecurityType LegSecurityType_44("STRING_1058786596");
    noLegs_0_1.set(LegSecurityType_44);
    InstrumentLeg_44.insert(LegSecurityType_44.getString());
    FIX::LegSide LegSide_44('1');
    noLegs_0_1.set(LegSide_44);
    InstrumentLeg_44.insert(LegSide_44.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_44("STRING_228988776");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_44);
    InstrumentLeg_44.insert(LegStateOrProvinceOfIssue_44.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_44("CHF");
    noLegs_0_1.set(LegStrikeCurrency_44);
    InstrumentLeg_44.insert(LegStrikeCurrency_44.getString());
    FIX::LegStrikePrice LegStrikePrice_44;
    LegStrikePrice_44.setString("6481470");
    noLegs_0_1.set(LegStrikePrice_44);
    InstrumentLeg_44.insert(LegStrikePrice_44.getString());
    FIX::LegSymbol LegSymbol_44("STRING_54906285");
    noLegs_0_1.set(LegSymbol_44);
    InstrumentLeg_44.insert(LegSymbol_44.getString());
    FIX::LegSymbolSfx LegSymbolSfx_44("STRING_1988311005");
    noLegs_0_1.set(LegSymbolSfx_44);
    InstrumentLeg_44.insert(LegSymbolSfx_44.getString());
    FIX::LegTimeUnit LegTimeUnit_44("STRING_1089048885");
    noLegs_0_1.set(LegTimeUnit_44);
    InstrumentLeg_44.insert(LegTimeUnit_44.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_44("STRING_1507751006");
    noLegs_0_1.set(LegUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegUnitOfMeasure_44.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
    LegUnitOfMeasureQty_44.setString("8311596");
    noLegs_0_1.set(LegUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegUnitOfMeasureQty_44.getString());
    all_values.push_back(InstrumentLeg_44);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
      FIX::LegSecurityAltID LegSecurityAltID_79("STRING_1457416485");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltID_79.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_79("STRING_757468763");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltIDSource_79.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
      FIX::LegSecurityAltID LegSecurityAltID_80("STRING_1297682244");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltID_80.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_80("STRING_1827628969");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltIDSource_80.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_45;
    FIX::EncodedLegIssuer EncodedLegIssuer_45("DATA_419285044");
    noLegs_0_2.set(EncodedLegIssuer_45);
    InstrumentLeg_45.insert(EncodedLegIssuer_45.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_45(852985290);
    noLegs_0_2.set(EncodedLegIssuerLen_45);
    InstrumentLeg_45.insert(EncodedLegIssuerLen_45.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_45("DATA_1428566540");
    noLegs_0_2.set(EncodedLegSecurityDesc_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDesc_45.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_45(899485499);
    noLegs_0_2.set(EncodedLegSecurityDescLen_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDescLen_45.getString());
    FIX::LegCFICode LegCFICode_45("STRING_211208143");
    noLegs_0_2.set(LegCFICode_45);
    InstrumentLeg_45.insert(LegCFICode_45.getString());
    FIX::LegContractMultiplier LegContractMultiplier_45;
    LegContractMultiplier_45.setString("7800569");
    noLegs_0_2.set(LegContractMultiplier_45);
    InstrumentLeg_45.insert(LegContractMultiplier_45.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_45(2041327968);
    noLegs_0_2.set(LegContractMultiplierUnit_45);
    InstrumentLeg_45.insert(LegContractMultiplierUnit_45.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_45("MONTHYEAR_2107313581");
    noLegs_0_2.set(LegContractSettlMonth_45);
    InstrumentLeg_45.insert(LegContractSettlMonth_45.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_45("COUNTRY_122611916");
    noLegs_0_2.set(LegCountryOfIssue_45);
    InstrumentLeg_45.insert(LegCountryOfIssue_45.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_45("LOCALMKTDATE_206686781");
    noLegs_0_2.set(LegCouponPaymentDate_45);
    InstrumentLeg_45.insert(LegCouponPaymentDate_45.getString());
    FIX::LegCouponRate LegCouponRate_45;
    LegCouponRate_45.setString("73.700000");
    noLegs_0_2.set(LegCouponRate_45);
    InstrumentLeg_45.insert(LegCouponRate_45.getString());
    FIX::LegCreditRating LegCreditRating_45("STRING_2113089306");
    noLegs_0_2.set(LegCreditRating_45);
    InstrumentLeg_45.insert(LegCreditRating_45.getString());
    FIX::LegCurrency LegCurrency_45("CHF");
    noLegs_0_2.set(LegCurrency_45);
    InstrumentLeg_45.insert(LegCurrency_45.getString());
    FIX::LegDatedDate LegDatedDate_45("LOCALMKTDATE_1723307867");
    noLegs_0_2.set(LegDatedDate_45);
    InstrumentLeg_45.insert(LegDatedDate_45.getString());
    FIX::LegExerciseStyle LegExerciseStyle_45(744312742);
    noLegs_0_2.set(LegExerciseStyle_45);
    InstrumentLeg_45.insert(LegExerciseStyle_45.getString());
    FIX::LegFactor LegFactor_45;
    LegFactor_45.setString("18413005");
    noLegs_0_2.set(LegFactor_45);
    InstrumentLeg_45.insert(LegFactor_45.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_45(1952296643);
    noLegs_0_2.set(LegFlowScheduleType_45);
    InstrumentLeg_45.insert(LegFlowScheduleType_45.getString());
    FIX::LegInstrRegistry LegInstrRegistry_45("STRING_1852986130");
    noLegs_0_2.set(LegInstrRegistry_45);
    InstrumentLeg_45.insert(LegInstrRegistry_45.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_45("LOCALMKTDATE_1285939667");
    noLegs_0_2.set(LegInterestAccrualDate_45);
    InstrumentLeg_45.insert(LegInterestAccrualDate_45.getString());
    FIX::LegIssueDate LegIssueDate_45("LOCALMKTDATE_452960065");
    noLegs_0_2.set(LegIssueDate_45);
    InstrumentLeg_45.insert(LegIssueDate_45.getString());
    FIX::LegIssuer LegIssuer_45("STRING_1907892416");
    noLegs_0_2.set(LegIssuer_45);
    InstrumentLeg_45.insert(LegIssuer_45.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_45("STRING_1126767024");
    noLegs_0_2.set(LegLocaleOfIssue_45);
    InstrumentLeg_45.insert(LegLocaleOfIssue_45.getString());
    FIX::LegMaturityDate LegMaturityDate_45("LOCALMKTDATE_1542008950");
    noLegs_0_2.set(LegMaturityDate_45);
    InstrumentLeg_45.insert(LegMaturityDate_45.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_45("MONTHYEAR_1268159774");
    noLegs_0_2.set(LegMaturityMonthYear_45);
    InstrumentLeg_45.insert(LegMaturityMonthYear_45.getString());
    FIX::LegMaturityTime LegMaturityTime_45("TZTIMEONLY_1957926646");
    noLegs_0_2.set(LegMaturityTime_45);
    InstrumentLeg_45.insert(LegMaturityTime_45.getString());
    FIX::LegOptAttribute LegOptAttribute_45('1');
    noLegs_0_2.set(LegOptAttribute_45);
    InstrumentLeg_45.insert(LegOptAttribute_45.getString());
    FIX::LegOptionRatio LegOptionRatio_45;
    LegOptionRatio_45.setString("5780926");
    noLegs_0_2.set(LegOptionRatio_45);
    InstrumentLeg_45.insert(LegOptionRatio_45.getString());
    FIX::LegPool LegPool_45("STRING_567911761");
    noLegs_0_2.set(LegPool_45);
    InstrumentLeg_45.insert(LegPool_45.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_45("STRING_1316227173");
    noLegs_0_2.set(LegPriceUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasure_45.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_45;
    LegPriceUnitOfMeasureQty_45.setString("2582379");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasureQty_45.getString());
    FIX::LegProduct LegProduct_45(987196805);
    noLegs_0_2.set(LegProduct_45);
    InstrumentLeg_45.insert(LegProduct_45.getString());
    FIX::LegPutOrCall LegPutOrCall_45(21728815);
    noLegs_0_2.set(LegPutOrCall_45);
    InstrumentLeg_45.insert(LegPutOrCall_45.getString());
    FIX::LegRatioQty LegRatioQty_45;
    LegRatioQty_45.setString("16868044");
    noLegs_0_2.set(LegRatioQty_45);
    InstrumentLeg_45.insert(LegRatioQty_45.getString());
    FIX::LegRedemptionDate LegRedemptionDate_45("LOCALMKTDATE_1886682304");
    noLegs_0_2.set(LegRedemptionDate_45);
    InstrumentLeg_45.insert(LegRedemptionDate_45.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_45("STRING_232936959");
    noLegs_0_2.set(LegRepoCollateralSecurityType_45);
    InstrumentLeg_45.insert(LegRepoCollateralSecurityType_45.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_45;
    LegRepurchaseRate_45.setString("77.470000");
    noLegs_0_2.set(LegRepurchaseRate_45);
    InstrumentLeg_45.insert(LegRepurchaseRate_45.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_45(1780526625);
    noLegs_0_2.set(LegRepurchaseTerm_45);
    InstrumentLeg_45.insert(LegRepurchaseTerm_45.getString());
    FIX::LegSecurityDesc LegSecurityDesc_45("STRING_192766892");
    noLegs_0_2.set(LegSecurityDesc_45);
    InstrumentLeg_45.insert(LegSecurityDesc_45.getString());
    FIX::LegSecurityExchange LegSecurityExchange_45("EXCHANGE_441989663");
    noLegs_0_2.set(LegSecurityExchange_45);
    InstrumentLeg_45.insert(LegSecurityExchange_45.getString());
    FIX::LegSecurityID LegSecurityID_45("STRING_1987213406");
    noLegs_0_2.set(LegSecurityID_45);
    InstrumentLeg_45.insert(LegSecurityID_45.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_45("STRING_548514262");
    noLegs_0_2.set(LegSecurityIDSource_45);
    InstrumentLeg_45.insert(LegSecurityIDSource_45.getString());
    FIX::LegSecuritySubType LegSecuritySubType_45("STRING_407595321");
    noLegs_0_2.set(LegSecuritySubType_45);
    InstrumentLeg_45.insert(LegSecuritySubType_45.getString());
    FIX::LegSecurityType LegSecurityType_45("STRING_1672739552");
    noLegs_0_2.set(LegSecurityType_45);
    InstrumentLeg_45.insert(LegSecurityType_45.getString());
    FIX::LegSide LegSide_45('1');
    noLegs_0_2.set(LegSide_45);
    InstrumentLeg_45.insert(LegSide_45.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_45("STRING_2130903188");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_45);
    InstrumentLeg_45.insert(LegStateOrProvinceOfIssue_45.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_45("JPY");
    noLegs_0_2.set(LegStrikeCurrency_45);
    InstrumentLeg_45.insert(LegStrikeCurrency_45.getString());
    FIX::LegStrikePrice LegStrikePrice_45;
    LegStrikePrice_45.setString("19357161");
    noLegs_0_2.set(LegStrikePrice_45);
    InstrumentLeg_45.insert(LegStrikePrice_45.getString());
    FIX::LegSymbol LegSymbol_45("STRING_2122554777");
    noLegs_0_2.set(LegSymbol_45);
    InstrumentLeg_45.insert(LegSymbol_45.getString());
    FIX::LegSymbolSfx LegSymbolSfx_45("STRING_182415217");
    noLegs_0_2.set(LegSymbolSfx_45);
    InstrumentLeg_45.insert(LegSymbolSfx_45.getString());
    FIX::LegTimeUnit LegTimeUnit_45("STRING_241192600");
    noLegs_0_2.set(LegTimeUnit_45);
    InstrumentLeg_45.insert(LegTimeUnit_45.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_45("STRING_1882963545");
    noLegs_0_2.set(LegUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegUnitOfMeasure_45.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_45;
    LegUnitOfMeasureQty_45.setString("13091822");
    noLegs_0_2.set(LegUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegUnitOfMeasureQty_45.getString());
    all_values.push_back(InstrumentLeg_45);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
      FIX::LegSecurityAltID LegSecurityAltID_81("STRING_1003639671");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltID_81.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_81("STRING_1119625239");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltIDSource_81.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
      FIX::LegSecurityAltID LegSecurityAltID_82("STRING_1801746479");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltID_82.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_82("STRING_1581732283");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltIDSource_82.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      FIX::LegSecurityAltID LegSecurityAltID_83("STRING_1687537000");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltID_83.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_83("STRING_970490005");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltIDSource_83.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("2.160000");
  msg.set(AttachmentPoint_26);
  Instrument_26.insert(AttachmentPoint_26.getString());
  FIX::CFICode CFICode_26("STRING_527250158");
  msg.set(CFICode_26);
  Instrument_26.insert(CFICode_26.getString());
  FIX::CPProgram CPProgram_26(99);
  msg.set(CPProgram_26);
  Instrument_26.insert(CPProgram_26.getString());
  FIX::CPRegType CPRegType_26("STRING_1379291042");
  msg.set(CPRegType_26);
  Instrument_26.insert(CPRegType_26.getString());
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("2664488");
  msg.set(CapPrice_26);
  Instrument_26.insert(CapPrice_26.getString());
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("12251557");
  msg.set(ContractMultiplier_26);
  Instrument_26.insert(ContractMultiplier_26.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_26(2);
  msg.set(ContractMultiplierUnit_26);
  Instrument_26.insert(ContractMultiplierUnit_26.getString());
  FIX::ContractSettlMonth ContractSettlMonth_26("MONTHYEAR_2046975439");
  msg.set(ContractSettlMonth_26);
  Instrument_26.insert(ContractSettlMonth_26.getString());
  FIX::CountryOfIssue CountryOfIssue_26("COUNTRY_1417922672");
  msg.set(CountryOfIssue_26);
  Instrument_26.insert(CountryOfIssue_26.getString());
  FIX::CouponPaymentDate CouponPaymentDate_26("LOCALMKTDATE_2140658452");
  msg.set(CouponPaymentDate_26);
  Instrument_26.insert(CouponPaymentDate_26.getString());
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("51.980000");
  msg.set(CouponRate_26);
  Instrument_26.insert(CouponRate_26.getString());
  FIX::CreditRating CreditRating_26("STRING_1966436934");
  msg.set(CreditRating_26);
  Instrument_26.insert(CreditRating_26.getString());
  FIX::DatedDate DatedDate_26("LOCALMKTDATE_400770125");
  msg.set(DatedDate_26);
  Instrument_26.insert(DatedDate_26.getString());
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("11.020000");
  msg.set(DetachmentPoint_26);
  Instrument_26.insert(DetachmentPoint_26.getString());
  FIX::EncodedIssuer EncodedIssuer_26("DATA_1169095566");
  msg.set(EncodedIssuer_26);
  Instrument_26.insert(EncodedIssuer_26.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_26(384189665);
  msg.set(EncodedIssuerLen_26);
  Instrument_26.insert(EncodedIssuerLen_26.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_26("DATA_1681529749");
  msg.set(EncodedSecurityDesc_26);
  Instrument_26.insert(EncodedSecurityDesc_26.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_26(65571116);
  msg.set(EncodedSecurityDescLen_26);
  Instrument_26.insert(EncodedSecurityDescLen_26.getString());
  FIX::ExerciseStyle ExerciseStyle_26(2);
  msg.set(ExerciseStyle_26);
  Instrument_26.insert(ExerciseStyle_26.getString());
  FIX::Factor Factor_26;
  Factor_26.setString("16566008");
  msg.set(Factor_26);
  Instrument_26.insert(Factor_26.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_26(false);
  msg.set(FlexProductEligibilityIndicator_26);
  Instrument_26.insert(FlexProductEligibilityIndicator_26.getString());
  FIX::FlexibleIndicator FlexibleIndicator_26(false);
  msg.set(FlexibleIndicator_26);
  Instrument_26.insert(FlexibleIndicator_26.getString());
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("13920807");
  msg.set(FloorPrice_26);
  Instrument_26.insert(FloorPrice_26.getString());
  FIX::FlowScheduleType FlowScheduleType_26(4);
  msg.set(FlowScheduleType_26);
  Instrument_26.insert(FlowScheduleType_26.getString());
  FIX::InstrRegistry InstrRegistry_26("STRING_49332703");
  msg.set(InstrRegistry_26);
  Instrument_26.insert(InstrRegistry_26.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_26('2');
  msg.set(InstrmtAssignmentMethod_26);
  Instrument_26.insert(InstrmtAssignmentMethod_26.getString());
  FIX::InterestAccrualDate InterestAccrualDate_26("LOCALMKTDATE_529310165");
  msg.set(InterestAccrualDate_26);
  Instrument_26.insert(InterestAccrualDate_26.getString());
  FIX::IssueDate IssueDate_26("LOCALMKTDATE_1851079183");
  msg.set(IssueDate_26);
  Instrument_26.insert(IssueDate_26.getString());
  FIX::Issuer Issuer_26("STRING_1829969082");
  msg.set(Issuer_26);
  Instrument_26.insert(Issuer_26.getString());
  FIX::ListMethod ListMethod_26(0);
  msg.set(ListMethod_26);
  Instrument_26.insert(ListMethod_26.getString());
  FIX::LocaleOfIssue LocaleOfIssue_26("STRING_674085540");
  msg.set(LocaleOfIssue_26);
  Instrument_26.insert(LocaleOfIssue_26.getString());
  FIX::MaturityDate MaturityDate_26("LOCALMKTDATE_1522455650");
  msg.set(MaturityDate_26);
  Instrument_26.insert(MaturityDate_26.getString());
  FIX::MaturityMonthYear MaturityMonthYear_26("MONTHYEAR_596613676");
  msg.set(MaturityMonthYear_26);
  Instrument_26.insert(MaturityMonthYear_26.getString());
  FIX::MaturityTime MaturityTime_26("TZTIMEONLY_1666304360");
  msg.set(MaturityTime_26);
  Instrument_26.insert(MaturityTime_26.getString());
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("7542630");
  msg.set(MinPriceIncrement_26);
  Instrument_26.insert(MinPriceIncrement_26.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("8630624");
  msg.set(MinPriceIncrementAmount_26);
  Instrument_26.insert(MinPriceIncrementAmount_26.getString());
  FIX::NTPositionLimit NTPositionLimit_26(743976492);
  msg.set(NTPositionLimit_26);
  Instrument_26.insert(NTPositionLimit_26.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("81.850000");
  msg.set(NotionalPercentageOutstanding_26);
  Instrument_26.insert(NotionalPercentageOutstanding_26.getString());
  FIX::OptAttribute OptAttribute_26('7');
  msg.set(OptAttribute_26);
  Instrument_26.insert(OptAttribute_26.getString());
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("144155");
  msg.set(OptPayoutAmount_26);
  Instrument_26.insert(OptPayoutAmount_26.getString());
  FIX::OptPayoutType OptPayoutType_26(2);
  msg.set(OptPayoutType_26);
  Instrument_26.insert(OptPayoutType_26.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("58.320000");
  msg.set(OriginalNotionalPercentageOutstanding_26);
  Instrument_26.insert(OriginalNotionalPercentageOutstanding_26.getString());
  FIX::Pool Pool_26("STRING_1980852450");
  msg.set(Pool_26);
  Instrument_26.insert(Pool_26.getString());
  FIX::PositionLimit PositionLimit_26(699393114);
  msg.set(PositionLimit_26);
  Instrument_26.insert(PositionLimit_26.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_26("STRING_INT");
  msg.set(PriceQuoteMethod_26);
  Instrument_26.insert(PriceQuoteMethod_26.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_26("STRING_1002464369");
  msg.set(PriceUnitOfMeasure_26);
  Instrument_26.insert(PriceUnitOfMeasure_26.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("10835827");
  msg.set(PriceUnitOfMeasureQty_26);
  Instrument_26.insert(PriceUnitOfMeasureQty_26.getString());
  FIX::Product Product_28(11);
  msg.set(Product_28);
  Instrument_26.insert(Product_28.getString());
  FIX::ProductComplex ProductComplex_26("STRING_1068035485");
  msg.set(ProductComplex_26);
  Instrument_26.insert(ProductComplex_26.getString());
  FIX::PutOrCall PutOrCall_26(0);
  msg.set(PutOrCall_26);
  Instrument_26.insert(PutOrCall_26.getString());
  FIX::RedemptionDate RedemptionDate_26("LOCALMKTDATE_956900265");
  msg.set(RedemptionDate_26);
  Instrument_26.insert(RedemptionDate_26.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_26("STRING_1316021819");
  msg.set(RepoCollateralSecurityType_26);
  Instrument_26.insert(RepoCollateralSecurityType_26.getString());
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("97.810000");
  msg.set(RepurchaseRate_26);
  Instrument_26.insert(RepurchaseRate_26.getString());
  FIX::RepurchaseTerm RepurchaseTerm_26(201497392);
  msg.set(RepurchaseTerm_26);
  Instrument_26.insert(RepurchaseTerm_26.getString());
  FIX::RestructuringType RestructuringType_26("STRING_MR");
  msg.set(RestructuringType_26);
  Instrument_26.insert(RestructuringType_26.getString());
  FIX::SecurityDesc SecurityDesc_26("STRING_1718952484");
  msg.set(SecurityDesc_26);
  Instrument_26.insert(SecurityDesc_26.getString());
  FIX::SecurityExchange SecurityExchange_26("EXCHANGE_449734191");
  msg.set(SecurityExchange_26);
  Instrument_26.insert(SecurityExchange_26.getString());
  FIX::SecurityGroup SecurityGroup_26("STRING_1255016911");
  msg.set(SecurityGroup_26);
  Instrument_26.insert(SecurityGroup_26.getString());
  FIX::SecurityID SecurityID_26("STRING_1422548019");
  msg.set(SecurityID_26);
  Instrument_26.insert(SecurityID_26.getString());
  FIX::SecurityIDSource SecurityIDSource_26("STRING_M");
  msg.set(SecurityIDSource_26);
  Instrument_26.insert(SecurityIDSource_26.getString());
  FIX::SecurityStatus SecurityStatus_26("STRING_2");
  msg.set(SecurityStatus_26);
  Instrument_26.insert(SecurityStatus_26.getString());
  FIX::SecuritySubType SecuritySubType_27("STRING_2096633559");
  msg.set(SecuritySubType_27);
  Instrument_26.insert(SecuritySubType_27.getString());
  FIX::SecurityType SecurityType_28("STRING_RAN");
  msg.set(SecurityType_28);
  Instrument_26.insert(SecurityType_28.getString());
  FIX::Seniority Seniority_26("STRING_SR");
  msg.set(Seniority_26);
  Instrument_26.insert(Seniority_26.getString());
  FIX::SettlMethod SettlMethod_26('C');
  msg.set(SettlMethod_26);
  Instrument_26.insert(SettlMethod_26.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_26("STRING_261454672");
  msg.set(SettleOnOpenFlag_26);
  Instrument_26.insert(SettleOnOpenFlag_26.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_26("STRING_636572947");
  msg.set(StateOrProvinceOfIssue_26);
  Instrument_26.insert(StateOrProvinceOfIssue_26.getString());
  FIX::StrikeCurrency StrikeCurrency_26("CHF");
  msg.set(StrikeCurrency_26);
  Instrument_26.insert(StrikeCurrency_26.getString());
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("13991272");
  msg.set(StrikeMultiplier_26);
  Instrument_26.insert(StrikeMultiplier_26.getString());
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("2263626");
  msg.set(StrikePrice_26);
  Instrument_26.insert(StrikePrice_26.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_26(3);
  msg.set(StrikePriceBoundaryMethod_26);
  Instrument_26.insert(StrikePriceBoundaryMethod_26.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("30.610000");
  msg.set(StrikePriceBoundaryPrecision_26);
  Instrument_26.insert(StrikePriceBoundaryPrecision_26.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_26(3);
  msg.set(StrikePriceDeterminationMethod_26);
  Instrument_26.insert(StrikePriceDeterminationMethod_26.getString());
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("15649189");
  msg.set(StrikeValue_26);
  Instrument_26.insert(StrikeValue_26.getString());
  FIX::Symbol Symbol_26("STRING_1667156348");
  msg.set(Symbol_26);
  Instrument_26.insert(Symbol_26.getString());
  FIX::SymbolSfx SymbolSfx_26("STRING_WI");
  msg.set(SymbolSfx_26);
  Instrument_26.insert(SymbolSfx_26.getString());
  FIX::TimeUnit TimeUnit_26("STRING_S");
  msg.set(TimeUnit_26);
  Instrument_26.insert(TimeUnit_26.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_26(4);
  msg.set(UnderlyingPriceDeterminationMethod_26);
  Instrument_26.insert(UnderlyingPriceDeterminationMethod_26.getString());
  FIX::UnitOfMeasure UnitOfMeasure_26("STRING_Bbl");
  msg.set(UnitOfMeasure_26);
  Instrument_26.insert(UnitOfMeasure_26.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("17570230");
  msg.set(UnitOfMeasureQty_26);
  Instrument_26.insert(UnitOfMeasureQty_26.getString());
  FIX::ValuationMethod ValuationMethod_26("STRING_FUT");
  msg.set(ValuationMethod_26);
  Instrument_26.insert(ValuationMethod_26.getString());
  all_values.push_back(Instrument_26);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_46;
    FIX::ComplexEventCondition ComplexEventCondition_46(1);
    noComplexEvents_0_0.set(ComplexEventCondition_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventCondition_46.getString());
    FIX::ComplexEventPrice ComplexEventPrice_46;
    ComplexEventPrice_46.setString("21258533");
    noComplexEvents_0_0.set(ComplexEventPrice_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPrice_46.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_46(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryMethod_46.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
    ComplexEventPriceBoundaryPrecision_46.setString("80.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryPrecision_46.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_46(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceTimeType_46.getString());
    FIX::ComplexEventType ComplexEventType_46(8);
    noComplexEvents_0_0.set(ComplexEventType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventType_46.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
    ComplexOptPayoutAmount_46.setString("1256924");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexOptPayoutAmount_46.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_46);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_89;
      FIX::ComplexEventEndDate ComplexEventEndDate_89(FIX::UTCTIMESTAMP(5, 9, 46, 17, 2, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_89);
      ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventEndDate_89.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_89(FIX::UTCTIMESTAMP(22, 3, 25, 17, 2, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_89);
      ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventStartDate_89.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_89);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
        FIX::ComplexEventEndTime ComplexEventEndTime_175(FIX::UTCTIMEONLY(23, 52, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_175);
        ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventEndTime_175.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_175(FIX::UTCTIMEONLY(13, 45, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_175);
        ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventStartTime_175.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
        FIX::ComplexEventEndTime ComplexEventEndTime_176(FIX::UTCTIMEONLY(7, 46, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_176);
        ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventEndTime_176.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_176(FIX::UTCTIMEONLY(14, 11, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_176);
        ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventStartTime_176.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_90;
      FIX::ComplexEventEndDate ComplexEventEndDate_90(FIX::UTCTIMESTAMP(17, 10, 30, 14, 12, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_90);
      ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventEndDate_90.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_90(FIX::UTCTIMESTAMP(1, 12, 9, 19, 2, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_90);
      ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventStartDate_90.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_90);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
        FIX::ComplexEventEndTime ComplexEventEndTime_177(FIX::UTCTIMEONLY(21, 42, 2));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_177);
        ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventEndTime_177.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_177(FIX::UTCTIMEONLY(7, 40, 54));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_177);
        ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventStartTime_177.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
        FIX::ComplexEventEndTime ComplexEventEndTime_178(FIX::UTCTIMEONLY(3, 40, 23));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_178);
        ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventEndTime_178.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_178(FIX::UTCTIMEONLY(10, 27, 55));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_178);
        ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventStartTime_178.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_47;
    FIX::ComplexEventCondition ComplexEventCondition_47(1);
    noComplexEvents_0_1.set(ComplexEventCondition_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventCondition_47.getString());
    FIX::ComplexEventPrice ComplexEventPrice_47;
    ComplexEventPrice_47.setString("19816451");
    noComplexEvents_0_1.set(ComplexEventPrice_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPrice_47.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_47(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryMethod_47.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
    ComplexEventPriceBoundaryPrecision_47.setString("9.330000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryPrecision_47.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_47(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceTimeType_47.getString());
    FIX::ComplexEventType ComplexEventType_47(6);
    noComplexEvents_0_1.set(ComplexEventType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventType_47.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
    ComplexOptPayoutAmount_47.setString("15367353");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexOptPayoutAmount_47.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_47);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_91;
      FIX::ComplexEventEndDate ComplexEventEndDate_91(FIX::UTCTIMESTAMP(9, 36, 49, 22, 10, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventEndDate_91.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_91(FIX::UTCTIMESTAMP(22, 29, 7, 12, 5, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventStartDate_91.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_91);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
        FIX::ComplexEventEndTime ComplexEventEndTime_179(FIX::UTCTIMEONLY(6, 18, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_179);
        ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventEndTime_179.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_179(FIX::UTCTIMEONLY(4, 8, 32));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_179);
        ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventStartTime_179.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
        FIX::ComplexEventEndTime ComplexEventEndTime_180(FIX::UTCTIMEONLY(20, 29, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_180);
        ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventEndTime_180.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_180(FIX::UTCTIMEONLY(2, 13, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_180);
        ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventStartTime_180.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
        FIX::ComplexEventEndTime ComplexEventEndTime_181(FIX::UTCTIMEONLY(11, 29, 29));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_181);
        ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventEndTime_181.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_181(FIX::UTCTIMEONLY(7, 8, 34));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_181);
        ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventStartTime_181.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_92;
      FIX::ComplexEventEndDate ComplexEventEndDate_92(FIX::UTCTIMESTAMP(5, 41, 49, 5, 5, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventEndDate_92.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_92(FIX::UTCTIMESTAMP(2, 37, 0, 6, 11, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventStartDate_92.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_92);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
        FIX::ComplexEventEndTime ComplexEventEndTime_182(FIX::UTCTIMEONLY(9, 32, 5));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_182);
        ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventEndTime_182.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_182(FIX::UTCTIMEONLY(14, 18, 58));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_182);
        ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventStartTime_182.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
        FIX::ComplexEventEndTime ComplexEventEndTime_183(FIX::UTCTIMEONLY(21, 19, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_183);
        ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventEndTime_183.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_183(FIX::UTCTIMEONLY(14, 11, 41));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_183);
        ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventStartTime_183.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
        FIX::ComplexEventEndTime ComplexEventEndTime_184(FIX::UTCTIMEONLY(16, 22, 25));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_184);
        ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventEndTime_184.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_184(FIX::UTCTIMEONLY(6, 53, 0));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_184);
        ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventStartTime_184.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_48;
    FIX::EventDate EventDate_48("LOCALMKTDATE_603264142");
    noEvents_0_0.set(EventDate_48);
    EvntGrp_NoEvents_48.insert(EventDate_48.getString());
    FIX::EventPx EventPx_48;
    EventPx_48.setString("14248618");
    noEvents_0_0.set(EventPx_48);
    EvntGrp_NoEvents_48.insert(EventPx_48.getString());
    FIX::EventText EventText_48("STRING_1974919522");
    noEvents_0_0.set(EventText_48);
    EvntGrp_NoEvents_48.insert(EventText_48.getString());
    FIX::EventTime EventTime_48(FIX::UTCTIMESTAMP(1, 17, 49, 11, 2, 2016));
    noEvents_0_0.set(EventTime_48);
    EvntGrp_NoEvents_48.insert(EventTime_48.getString());
    FIX::EventType EventType_48(12);
    noEvents_0_0.set(EventType_48);
    EvntGrp_NoEvents_48.insert(EventType_48.getString());
    all_values.push_back(EvntGrp_NoEvents_48);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_49;
    FIX::EventDate EventDate_49("LOCALMKTDATE_78203323");
    noEvents_0_1.set(EventDate_49);
    EvntGrp_NoEvents_49.insert(EventDate_49.getString());
    FIX::EventPx EventPx_49;
    EventPx_49.setString("12224146");
    noEvents_0_1.set(EventPx_49);
    EvntGrp_NoEvents_49.insert(EventPx_49.getString());
    FIX::EventText EventText_49("STRING_2079270709");
    noEvents_0_1.set(EventText_49);
    EvntGrp_NoEvents_49.insert(EventText_49.getString());
    FIX::EventTime EventTime_49(FIX::UTCTIMESTAMP(18, 1, 28, 5, 4, 2001));
    noEvents_0_1.set(EventTime_49);
    EvntGrp_NoEvents_49.insert(EventTime_49.getString());
    FIX::EventType EventType_49(11);
    noEvents_0_1.set(EventType_49);
    EvntGrp_NoEvents_49.insert(EventType_49.getString());
    all_values.push_back(EvntGrp_NoEvents_49);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_50;
    FIX::EventDate EventDate_50("LOCALMKTDATE_2036759175");
    noEvents_0_2.set(EventDate_50);
    EvntGrp_NoEvents_50.insert(EventDate_50.getString());
    FIX::EventPx EventPx_50;
    EventPx_50.setString("6576094");
    noEvents_0_2.set(EventPx_50);
    EvntGrp_NoEvents_50.insert(EventPx_50.getString());
    FIX::EventText EventText_50("STRING_1210435252");
    noEvents_0_2.set(EventText_50);
    EvntGrp_NoEvents_50.insert(EventText_50.getString());
    FIX::EventTime EventTime_50(FIX::UTCTIMESTAMP(0, 34, 18, 24, 7, 2016));
    noEvents_0_2.set(EventTime_50);
    EvntGrp_NoEvents_50.insert(EventTime_50.getString());
    FIX::EventType EventType_50(9);
    noEvents_0_2.set(EventType_50);
    EvntGrp_NoEvents_50.insert(EventType_50.getString());
    all_values.push_back(EvntGrp_NoEvents_50);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_54;
    FIX::InstrumentPartyID InstrumentPartyID_54("STRING_253996709");
    noInstrumentParties_0_0.set(InstrumentPartyID_54);
    InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyID_54.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_54('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_54);
    InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyIDSource_54.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_54(14918022);
    noInstrumentParties_0_0.set(InstrumentPartyRole_54);
    InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyRole_54.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_54);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114;
      FIX::InstrumentPartySubID InstrumentPartySubID_114("STRING_198106569");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_114);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubID_114.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_114(1440600211);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_114);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubIDType_114.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_54;
    FIX::SecurityAltID SecurityAltID_54("STRING_978223860");
    noSecurityAltID_0_0.set(SecurityAltID_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltID_54.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_54("STRING_1518803534");
    noSecurityAltID_0_0.set(SecurityAltIDSource_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltIDSource_54.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_55;
    FIX::SecurityAltID SecurityAltID_55("STRING_611603342");
    noSecurityAltID_0_1.set(SecurityAltID_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltID_55.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_55("STRING_910010922");
    noSecurityAltID_0_1.set(SecurityAltIDSource_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltIDSource_55.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_56;
    FIX::SecurityAltID SecurityAltID_56("STRING_818784751");
    noSecurityAltID_0_2.set(SecurityAltID_56);
    SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltID_56.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_56("STRING_684772304");
    noSecurityAltID_0_2.set(SecurityAltIDSource_56);
    SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltIDSource_56.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  FIX::SecurityXML SecurityXML_53("XMLDATA_1566074143");
  msg.set(SecurityXML_53);
  FIX::SecurityXMLLen SecurityXMLLen_26(611744211);
  msg.set(SecurityXMLLen_26);
  FIX::SecurityXMLSchema SecurityXMLSchema_26("STRING_1042047634");
  msg.set(SecurityXMLSchema_26);
  SecurityXML_52.insert(SecurityXMLSchema_26.getString());
  all_values.push_back(SecurityXML_52);

  // OrderQtyData
  multiset<string> OrderQtyData_4;
  FIX::CashOrderQty CashOrderQty_4;
  CashOrderQty_4.setString("12382809");
  msg.set(CashOrderQty_4);
  OrderQtyData_4.insert(CashOrderQty_4.getString());
  FIX::OrderPercent OrderPercent_4;
  OrderPercent_4.setString("58.020000");
  msg.set(OrderPercent_4);
  OrderQtyData_4.insert(OrderPercent_4.getString());
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("17365065");
  msg.set(OrderQty_15);
  OrderQtyData_4.insert(OrderQty_15.getString());
  FIX::RoundingDirection RoundingDirection_4('1');
  msg.set(RoundingDirection_4);
  OrderQtyData_4.insert(RoundingDirection_4.getString());
  FIX::RoundingModulus RoundingModulus_4;
  RoundingModulus_4.setString("1259415");
  msg.set(RoundingModulus_4);
  OrderQtyData_4.insert(RoundingModulus_4.getString());
  all_values.push_back(OrderQtyData_4);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_39;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_39("DATA_1882059895");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuer_39.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_39(465523313);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuerLen_39.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_39("DATA_29454435");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDesc_39.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_39(372443945);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDescLen_39.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
    UnderlyingAdjustedQuantity_39.setString("20893372");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_39);
    UnderlyingInstrument_39.insert(UnderlyingAdjustedQuantity_39.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
    UnderlyingAllocationPercent_39.setString("62.860000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_39);
    UnderlyingInstrument_39.insert(UnderlyingAllocationPercent_39.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
    UnderlyingAttachmentPoint_39.setString("57.850000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingAttachmentPoint_39.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_39("STRING_843045709");
    noUnderlyings_0_0.set(UnderlyingCFICode_39);
    UnderlyingInstrument_39.insert(UnderlyingCFICode_39.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_39("STRING_1966077659");
    noUnderlyings_0_0.set(UnderlyingCPProgram_39);
    UnderlyingInstrument_39.insert(UnderlyingCPProgram_39.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_39("STRING_1867572494");
    noUnderlyings_0_0.set(UnderlyingCPRegType_39);
    UnderlyingInstrument_39.insert(UnderlyingCPRegType_39.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_39;
    UnderlyingCapValue_39.setString("2100307");
    noUnderlyings_0_0.set(UnderlyingCapValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCapValue_39.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
    UnderlyingCashAmount_39.setString("19809956");
    noUnderlyings_0_0.set(UnderlyingCashAmount_39);
    UnderlyingInstrument_39.insert(UnderlyingCashAmount_39.getString());
    FIX::UnderlyingCashType UnderlyingCashType_39("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_39);
    UnderlyingInstrument_39.insert(UnderlyingCashType_39.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
    UnderlyingContractMultiplier_39.setString("4081373");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplier_39.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_39(1274112244);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplierUnit_39.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_39("COUNTRY_608304142");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingCountryOfIssue_39.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_39("LOCALMKTDATE_1386361161");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponPaymentDate_39.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
    UnderlyingCouponRate_39.setString("21.300000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponRate_39.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_39("STRING_1219907484");
    noUnderlyings_0_0.set(UnderlyingCreditRating_39);
    UnderlyingInstrument_39.insert(UnderlyingCreditRating_39.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_39("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrency_39.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
    UnderlyingCurrentValue_39.setString("19046797");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrentValue_39.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
    UnderlyingDetachmentPoint_39.setString("25.780000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingDetachmentPoint_39.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
    UnderlyingDirtyPrice_39.setString("20759610");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingDirtyPrice_39.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
    UnderlyingEndPrice_39.setString("7992437");
    noUnderlyings_0_0.set(UnderlyingEndPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingEndPrice_39.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_39;
    UnderlyingEndValue_39.setString("8057598");
    noUnderlyings_0_0.set(UnderlyingEndValue_39);
    UnderlyingInstrument_39.insert(UnderlyingEndValue_39.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_39(1544293246);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_39);
    UnderlyingInstrument_39.insert(UnderlyingExerciseStyle_39.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_39;
    UnderlyingFXRate_39.setString("3882666");
    noUnderlyings_0_0.set(UnderlyingFXRate_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRate_39.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_39('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRateCalc_39.getString());
    FIX::UnderlyingFactor UnderlyingFactor_39;
    UnderlyingFactor_39.setString("16702348");
    noUnderlyings_0_0.set(UnderlyingFactor_39);
    UnderlyingInstrument_39.insert(UnderlyingFactor_39.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_39(1187724860);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_39);
    UnderlyingInstrument_39.insert(UnderlyingFlowScheduleType_39.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_39("STRING_1667892533");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_39);
    UnderlyingInstrument_39.insert(UnderlyingInstrRegistry_39.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_39("LOCALMKTDATE_2135758136");
    noUnderlyings_0_0.set(UnderlyingIssueDate_39);
    UnderlyingInstrument_39.insert(UnderlyingIssueDate_39.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_39("STRING_1217179295");
    noUnderlyings_0_0.set(UnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(UnderlyingIssuer_39.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_39("STRING_2040336478");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingLocaleOfIssue_39.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_39("LOCALMKTDATE_2077611737");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityDate_39.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_39("MONTHYEAR_1227485581");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityMonthYear_39.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_39("TZTIMEONLY_1506428616");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityTime_39.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
    UnderlyingNotionalPercentageOutstanding_39.setString("37.980000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_39('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_39);
    UnderlyingInstrument_39.insert(UnderlyingOptAttribute_39.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
    UnderlyingOriginalNotionalPercentageOutstanding_39.setString("74.620000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingOriginalNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_39("STRING_983204530");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasure_39.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
    UnderlyingPriceUnitOfMeasureQty_39.setString("8795916");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasureQty_39.getString());
    FIX::UnderlyingProduct UnderlyingProduct_39(298149299);
    noUnderlyings_0_0.set(UnderlyingProduct_39);
    UnderlyingInstrument_39.insert(UnderlyingProduct_39.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_39(1391341830);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_39);
    UnderlyingInstrument_39.insert(UnderlyingPutOrCall_39.getString());
    FIX::UnderlyingPx UnderlyingPx_39;
    UnderlyingPx_39.setString("62202");
    noUnderlyings_0_0.set(UnderlyingPx_39);
    UnderlyingInstrument_39.insert(UnderlyingPx_39.getString());
    FIX::UnderlyingQty UnderlyingQty_39;
    UnderlyingQty_39.setString("9064534");
    noUnderlyings_0_0.set(UnderlyingQty_39);
    UnderlyingInstrument_39.insert(UnderlyingQty_39.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_39("LOCALMKTDATE_630219343");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_39);
    UnderlyingInstrument_39.insert(UnderlyingRedemptionDate_39.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_39("STRING_651652351");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingRepoCollateralSecurityType_39.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
    UnderlyingRepurchaseRate_39.setString("9.250000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseRate_39.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_39(779107778);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseTerm_39.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_39("STRING_2115869232");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_39);
    UnderlyingInstrument_39.insert(UnderlyingRestructuringType_39.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_39("STRING_1883557066");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityDesc_39.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_39("EXCHANGE_346586708");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityExchange_39.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_39("STRING_2044346676");
    noUnderlyings_0_0.set(UnderlyingSecurityID_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityID_39.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_39("STRING_535317192");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityIDSource_39.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_39("STRING_1152346553");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecuritySubType_39.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_39("STRING_1441156274");
    noUnderlyings_0_0.set(UnderlyingSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityType_39.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_39("STRING_923583883");
    noUnderlyings_0_0.set(UnderlyingSeniority_39);
    UnderlyingInstrument_39.insert(UnderlyingSeniority_39.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_39("STRING_938179191");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlMethod_39.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_39(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlementType_39.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_39;
    UnderlyingStartValue_39.setString("21113087");
    noUnderlyings_0_0.set(UnderlyingStartValue_39);
    UnderlyingInstrument_39.insert(UnderlyingStartValue_39.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_39("STRING_458588077");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingStateOrProvinceOfIssue_39.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_39("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikeCurrency_39.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
    UnderlyingStrikePrice_39.setString("3514409");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikePrice_39.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_39("STRING_882310026");
    noUnderlyings_0_0.set(UnderlyingSymbol_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbol_39.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_39("STRING_261006324");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbolSfx_39.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_39("STRING_1857869523");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingTimeUnit_39.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_39("STRING_1655483825");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasure_39.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
    UnderlyingUnitOfMeasureQty_39.setString("13070859");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasureQty_39.getString());
    all_values.push_back(UnderlyingInstrument_39);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_81("STRING_491204707");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltID_81.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_81("STRING_39193894");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_81);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltIDSource_81.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_82("STRING_1235052637");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltID_82.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_82("STRING_1882546537");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_82);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltIDSource_82.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_83("STRING_45414116");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltID_83.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_83("STRING_2141506079");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_83);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltIDSource_83.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
      FIX::UnderlyingStipType UnderlyingStipType_71("STRING_697066467");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipType_71.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_71("STRING_2120383356");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipValue_71.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
      FIX::UnderlyingStipType UnderlyingStipType_72("STRING_1144390011");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipType_72.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_72("STRING_665452052");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipValue_72.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_84("STRING_1490976720");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyID_84.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_84('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyIDSource_84.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_84(244290319);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyRole_84.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_168("STRING_2003471355");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubID_168.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_168(1167874202);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubIDType_168.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_85("STRING_1434018816");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyID_85.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_85('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyIDSource_85.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_85(1131699298);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyRole_85.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_169("STRING_1772077094");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubID_169.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_169(165220041);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubIDType_169.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_170("STRING_96564153");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_170);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubID_170.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_170(506903472);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_170);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubIDType_170.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_86("STRING_426226365");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyID_86.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_86('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyIDSource_86.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_86(14903649);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyRole_86.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_171("STRING_743853366");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_171);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubID_171.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_171(506108356);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_171);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubIDType_171.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_172("STRING_1772506177");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_172);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubID_172.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_172(1978906004);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_172);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubIDType_172.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_173("STRING_241171246");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_173);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubID_173.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_173(1817920293);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_173);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubIDType_173.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_40;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_40("DATA_1972928435");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuer_40.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_40(606453479);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuerLen_40.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_40("DATA_367503112");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDesc_40.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_40(1945828143);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDescLen_40.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
    UnderlyingAdjustedQuantity_40.setString("17508434");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_40);
    UnderlyingInstrument_40.insert(UnderlyingAdjustedQuantity_40.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
    UnderlyingAllocationPercent_40.setString("51.640000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_40);
    UnderlyingInstrument_40.insert(UnderlyingAllocationPercent_40.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
    UnderlyingAttachmentPoint_40.setString("12.700000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingAttachmentPoint_40.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_40("STRING_1094336562");
    noUnderlyings_0_1.set(UnderlyingCFICode_40);
    UnderlyingInstrument_40.insert(UnderlyingCFICode_40.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_40("STRING_1595270245");
    noUnderlyings_0_1.set(UnderlyingCPProgram_40);
    UnderlyingInstrument_40.insert(UnderlyingCPProgram_40.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_40("STRING_1899091589");
    noUnderlyings_0_1.set(UnderlyingCPRegType_40);
    UnderlyingInstrument_40.insert(UnderlyingCPRegType_40.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_40;
    UnderlyingCapValue_40.setString("15901761");
    noUnderlyings_0_1.set(UnderlyingCapValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCapValue_40.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
    UnderlyingCashAmount_40.setString("14512579");
    noUnderlyings_0_1.set(UnderlyingCashAmount_40);
    UnderlyingInstrument_40.insert(UnderlyingCashAmount_40.getString());
    FIX::UnderlyingCashType UnderlyingCashType_40("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_40);
    UnderlyingInstrument_40.insert(UnderlyingCashType_40.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
    UnderlyingContractMultiplier_40.setString("8767113");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplier_40.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_40(123669460);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplierUnit_40.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_40("COUNTRY_2051181441");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingCountryOfIssue_40.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_40("LOCALMKTDATE_621834601");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponPaymentDate_40.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
    UnderlyingCouponRate_40.setString("65.540000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponRate_40.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_40("STRING_68917834");
    noUnderlyings_0_1.set(UnderlyingCreditRating_40);
    UnderlyingInstrument_40.insert(UnderlyingCreditRating_40.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_40("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrency_40.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
    UnderlyingCurrentValue_40.setString("4951442");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrentValue_40.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
    UnderlyingDetachmentPoint_40.setString("87.830000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingDetachmentPoint_40.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
    UnderlyingDirtyPrice_40.setString("2700700");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingDirtyPrice_40.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
    UnderlyingEndPrice_40.setString("809728");
    noUnderlyings_0_1.set(UnderlyingEndPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingEndPrice_40.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_40;
    UnderlyingEndValue_40.setString("12692021");
    noUnderlyings_0_1.set(UnderlyingEndValue_40);
    UnderlyingInstrument_40.insert(UnderlyingEndValue_40.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_40(776178385);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_40);
    UnderlyingInstrument_40.insert(UnderlyingExerciseStyle_40.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_40;
    UnderlyingFXRate_40.setString("18534790");
    noUnderlyings_0_1.set(UnderlyingFXRate_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRate_40.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_40('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRateCalc_40.getString());
    FIX::UnderlyingFactor UnderlyingFactor_40;
    UnderlyingFactor_40.setString("10173496");
    noUnderlyings_0_1.set(UnderlyingFactor_40);
    UnderlyingInstrument_40.insert(UnderlyingFactor_40.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_40(1523915656);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_40);
    UnderlyingInstrument_40.insert(UnderlyingFlowScheduleType_40.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_40("STRING_926069292");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_40);
    UnderlyingInstrument_40.insert(UnderlyingInstrRegistry_40.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_40("LOCALMKTDATE_1623803110");
    noUnderlyings_0_1.set(UnderlyingIssueDate_40);
    UnderlyingInstrument_40.insert(UnderlyingIssueDate_40.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_40("STRING_1891418769");
    noUnderlyings_0_1.set(UnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(UnderlyingIssuer_40.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_40("STRING_724413788");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingLocaleOfIssue_40.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_40("LOCALMKTDATE_1227162952");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityDate_40.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_40("MONTHYEAR_776890285");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityMonthYear_40.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_40("TZTIMEONLY_231731410");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityTime_40.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
    UnderlyingNotionalPercentageOutstanding_40.setString("58.670000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_40('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_40);
    UnderlyingInstrument_40.insert(UnderlyingOptAttribute_40.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
    UnderlyingOriginalNotionalPercentageOutstanding_40.setString("29.990000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingOriginalNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_40("STRING_1764192054");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasure_40.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
    UnderlyingPriceUnitOfMeasureQty_40.setString("16759348");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasureQty_40.getString());
    FIX::UnderlyingProduct UnderlyingProduct_40(902821494);
    noUnderlyings_0_1.set(UnderlyingProduct_40);
    UnderlyingInstrument_40.insert(UnderlyingProduct_40.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_40(493419762);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_40);
    UnderlyingInstrument_40.insert(UnderlyingPutOrCall_40.getString());
    FIX::UnderlyingPx UnderlyingPx_40;
    UnderlyingPx_40.setString("17996042");
    noUnderlyings_0_1.set(UnderlyingPx_40);
    UnderlyingInstrument_40.insert(UnderlyingPx_40.getString());
    FIX::UnderlyingQty UnderlyingQty_40;
    UnderlyingQty_40.setString("8065192");
    noUnderlyings_0_1.set(UnderlyingQty_40);
    UnderlyingInstrument_40.insert(UnderlyingQty_40.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_40("LOCALMKTDATE_1115254364");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_40);
    UnderlyingInstrument_40.insert(UnderlyingRedemptionDate_40.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_40("STRING_1547867201");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingRepoCollateralSecurityType_40.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
    UnderlyingRepurchaseRate_40.setString("71.220000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseRate_40.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_40(1833653118);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseTerm_40.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_40("STRING_1803033580");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_40);
    UnderlyingInstrument_40.insert(UnderlyingRestructuringType_40.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_40("STRING_1370581322");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityDesc_40.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_40("EXCHANGE_211518253");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityExchange_40.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_40("STRING_2073103609");
    noUnderlyings_0_1.set(UnderlyingSecurityID_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityID_40.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_40("STRING_1451554157");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityIDSource_40.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_40("STRING_1480720403");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecuritySubType_40.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_40("STRING_701798346");
    noUnderlyings_0_1.set(UnderlyingSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityType_40.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_40("STRING_1157549520");
    noUnderlyings_0_1.set(UnderlyingSeniority_40);
    UnderlyingInstrument_40.insert(UnderlyingSeniority_40.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_40("STRING_433861260");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlMethod_40.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_40(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlementType_40.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_40;
    UnderlyingStartValue_40.setString("5339815");
    noUnderlyings_0_1.set(UnderlyingStartValue_40);
    UnderlyingInstrument_40.insert(UnderlyingStartValue_40.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_40("STRING_1359930553");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingStateOrProvinceOfIssue_40.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_40("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikeCurrency_40.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
    UnderlyingStrikePrice_40.setString("20843443");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikePrice_40.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_40("STRING_275146743");
    noUnderlyings_0_1.set(UnderlyingSymbol_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbol_40.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_40("STRING_1054806935");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbolSfx_40.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_40("STRING_168592103");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingTimeUnit_40.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_40("STRING_449162610");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasure_40.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
    UnderlyingUnitOfMeasureQty_40.setString("12794838");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasureQty_40.getString());
    all_values.push_back(UnderlyingInstrument_40);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_84("STRING_65871017");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltID_84.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_84("STRING_807935004");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltIDSource_84.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
      FIX::UnderlyingStipType UnderlyingStipType_73("STRING_559290779");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipType_73.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_73("STRING_460055651");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipValue_73.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_87("STRING_1674545143");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyID_87.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_87('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyIDSource_87.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_87(589225711);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyRole_87.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_174("STRING_1663472785");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_174);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubID_174.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_174(1959807033);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_174);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubIDType_174.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_88;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_88("STRING_1572232867");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyID_88.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_88('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyIDSource_88.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_88(1263877542);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyRole_88.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_88);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_175("STRING_143407444");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_175);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubID_175.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_175(273943415);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_175);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubIDType_175.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_176("STRING_1339330883");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_176);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubID_176.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_176(1862555421);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_176);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubIDType_176.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_89;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_89("STRING_807924944");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_89);
      UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyID_89.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_89('5');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_89);
      UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyIDSource_89.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_89(910539212);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_89);
      UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyRole_89.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_89);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_177("STRING_488638481");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_177);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubID_177.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_177(1185685956);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_177);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubIDType_177.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
