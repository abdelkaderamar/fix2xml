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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ExecutionAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> ExecutionAcknowledgement_0;
  FIX::AvgPx AvgPx_4;
  AvgPx_4.setString("2881607");
  msg.set(AvgPx_4);
  ExecutionAcknowledgement_0.insert(AvgPx_4.getString());
  FIX::ClOrdID ClOrdID_20("STRING_771941232");
  msg.set(ClOrdID_20);
  ExecutionAcknowledgement_0.insert(ClOrdID_20.getString());
  FIX::CumQty CumQty_0;
  CumQty_0.setString("2371934");
  msg.set(CumQty_0);
  ExecutionAcknowledgement_0.insert(CumQty_0.getString());
  FIX::DKReason DKReason_1('C');
  msg.set(DKReason_1);
  ExecutionAcknowledgement_0.insert(DKReason_1.getString());
  FIX::EncodedText EncodedText_40("DATA_95172377");
  msg.set(EncodedText_40);
  ExecutionAcknowledgement_0.insert(EncodedText_40.getString());
  FIX::EncodedTextLen EncodedTextLen_40(873159090);
  msg.set(EncodedTextLen_40);
  ExecutionAcknowledgement_0.insert(EncodedTextLen_40.getString());
  FIX::ExecAckStatus ExecAckStatus_0('1');
  msg.set(ExecAckStatus_0);
  ExecutionAcknowledgement_0.insert(ExecAckStatus_0.getString());
  FIX::ExecID ExecID_21("STRING_1961529329");
  msg.set(ExecID_21);
  ExecutionAcknowledgement_0.insert(ExecID_21.getString());
  FIX::LastParPx LastParPx_7;
  LastParPx_7.setString("10796526");
  msg.set(LastParPx_7);
  ExecutionAcknowledgement_0.insert(LastParPx_7.getString());
  FIX::LastPx LastPx_8;
  LastPx_8.setString("7888242");
  msg.set(LastPx_8);
  ExecutionAcknowledgement_0.insert(LastPx_8.getString());
  FIX::LastQty LastQty_8;
  LastQty_8.setString("7629568");
  msg.set(LastQty_8);
  ExecutionAcknowledgement_0.insert(LastQty_8.getString());
  FIX::OrderID OrderID_18("STRING_1285241652");
  msg.set(OrderID_18);
  ExecutionAcknowledgement_0.insert(OrderID_18.getString());
  FIX::PriceType PriceType_18(18);
  msg.set(PriceType_18);
  ExecutionAcknowledgement_0.insert(PriceType_18.getString());
  FIX::SecondaryOrderID SecondaryOrderID_15("STRING_983764299");
  msg.set(SecondaryOrderID_15);
  ExecutionAcknowledgement_0.insert(SecondaryOrderID_15.getString());
  FIX::Side Side_21('B');
  msg.set(Side_21);
  ExecutionAcknowledgement_0.insert(Side_21.getString());
  FIX::Text Text_40("STRING_1440142710");
  msg.set(Text_40);
  ExecutionAcknowledgement_0.insert(Text_40.getString());
  all_values.push_back(ExecutionAcknowledgement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_43;
    FIX::EncodedLegIssuer EncodedLegIssuer_43("DATA_776493853");
    noLegs_0_0.set(EncodedLegIssuer_43);
    InstrumentLeg_43.insert(EncodedLegIssuer_43.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_43(1510054380);
    noLegs_0_0.set(EncodedLegIssuerLen_43);
    InstrumentLeg_43.insert(EncodedLegIssuerLen_43.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_43("DATA_250393104");
    noLegs_0_0.set(EncodedLegSecurityDesc_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDesc_43.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_43(3787793);
    noLegs_0_0.set(EncodedLegSecurityDescLen_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDescLen_43.getString());
    FIX::LegCFICode LegCFICode_43("STRING_807010838");
    noLegs_0_0.set(LegCFICode_43);
    InstrumentLeg_43.insert(LegCFICode_43.getString());
    FIX::LegContractMultiplier LegContractMultiplier_43;
    LegContractMultiplier_43.setString("3673651");
    noLegs_0_0.set(LegContractMultiplier_43);
    InstrumentLeg_43.insert(LegContractMultiplier_43.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_43(873711862);
    noLegs_0_0.set(LegContractMultiplierUnit_43);
    InstrumentLeg_43.insert(LegContractMultiplierUnit_43.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_43("MONTHYEAR_829709674");
    noLegs_0_0.set(LegContractSettlMonth_43);
    InstrumentLeg_43.insert(LegContractSettlMonth_43.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_43("COUNTRY_1826489524");
    noLegs_0_0.set(LegCountryOfIssue_43);
    InstrumentLeg_43.insert(LegCountryOfIssue_43.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_43("LOCALMKTDATE_1084888582");
    noLegs_0_0.set(LegCouponPaymentDate_43);
    InstrumentLeg_43.insert(LegCouponPaymentDate_43.getString());
    FIX::LegCouponRate LegCouponRate_43;
    LegCouponRate_43.setString("11.580000");
    noLegs_0_0.set(LegCouponRate_43);
    InstrumentLeg_43.insert(LegCouponRate_43.getString());
    FIX::LegCreditRating LegCreditRating_43("STRING_1406442982");
    noLegs_0_0.set(LegCreditRating_43);
    InstrumentLeg_43.insert(LegCreditRating_43.getString());
    FIX::LegCurrency LegCurrency_43("EUR");
    noLegs_0_0.set(LegCurrency_43);
    InstrumentLeg_43.insert(LegCurrency_43.getString());
    FIX::LegDatedDate LegDatedDate_43("LOCALMKTDATE_1694603740");
    noLegs_0_0.set(LegDatedDate_43);
    InstrumentLeg_43.insert(LegDatedDate_43.getString());
    FIX::LegExerciseStyle LegExerciseStyle_43(1890450432);
    noLegs_0_0.set(LegExerciseStyle_43);
    InstrumentLeg_43.insert(LegExerciseStyle_43.getString());
    FIX::LegFactor LegFactor_43;
    LegFactor_43.setString("4818985");
    noLegs_0_0.set(LegFactor_43);
    InstrumentLeg_43.insert(LegFactor_43.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_43(1543721939);
    noLegs_0_0.set(LegFlowScheduleType_43);
    InstrumentLeg_43.insert(LegFlowScheduleType_43.getString());
    FIX::LegInstrRegistry LegInstrRegistry_43("STRING_1985622809");
    noLegs_0_0.set(LegInstrRegistry_43);
    InstrumentLeg_43.insert(LegInstrRegistry_43.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_43("LOCALMKTDATE_1355057656");
    noLegs_0_0.set(LegInterestAccrualDate_43);
    InstrumentLeg_43.insert(LegInterestAccrualDate_43.getString());
    FIX::LegIssueDate LegIssueDate_43("LOCALMKTDATE_354655990");
    noLegs_0_0.set(LegIssueDate_43);
    InstrumentLeg_43.insert(LegIssueDate_43.getString());
    FIX::LegIssuer LegIssuer_43("STRING_1799668491");
    noLegs_0_0.set(LegIssuer_43);
    InstrumentLeg_43.insert(LegIssuer_43.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_43("STRING_287226684");
    noLegs_0_0.set(LegLocaleOfIssue_43);
    InstrumentLeg_43.insert(LegLocaleOfIssue_43.getString());
    FIX::LegMaturityDate LegMaturityDate_43("LOCALMKTDATE_1143480262");
    noLegs_0_0.set(LegMaturityDate_43);
    InstrumentLeg_43.insert(LegMaturityDate_43.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_43("MONTHYEAR_415141652");
    noLegs_0_0.set(LegMaturityMonthYear_43);
    InstrumentLeg_43.insert(LegMaturityMonthYear_43.getString());
    FIX::LegMaturityTime LegMaturityTime_43("TZTIMEONLY_1572468337");
    noLegs_0_0.set(LegMaturityTime_43);
    InstrumentLeg_43.insert(LegMaturityTime_43.getString());
    FIX::LegOptAttribute LegOptAttribute_43('9');
    noLegs_0_0.set(LegOptAttribute_43);
    InstrumentLeg_43.insert(LegOptAttribute_43.getString());
    FIX::LegOptionRatio LegOptionRatio_43;
    LegOptionRatio_43.setString("13989059");
    noLegs_0_0.set(LegOptionRatio_43);
    InstrumentLeg_43.insert(LegOptionRatio_43.getString());
    FIX::LegPool LegPool_43("STRING_289971883");
    noLegs_0_0.set(LegPool_43);
    InstrumentLeg_43.insert(LegPool_43.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_43("STRING_260989853");
    noLegs_0_0.set(LegPriceUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasure_43.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
    LegPriceUnitOfMeasureQty_43.setString("4319899");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasureQty_43.getString());
    FIX::LegProduct LegProduct_43(1066465736);
    noLegs_0_0.set(LegProduct_43);
    InstrumentLeg_43.insert(LegProduct_43.getString());
    FIX::LegPutOrCall LegPutOrCall_43(1771044233);
    noLegs_0_0.set(LegPutOrCall_43);
    InstrumentLeg_43.insert(LegPutOrCall_43.getString());
    FIX::LegRatioQty LegRatioQty_43;
    LegRatioQty_43.setString("6823830");
    noLegs_0_0.set(LegRatioQty_43);
    InstrumentLeg_43.insert(LegRatioQty_43.getString());
    FIX::LegRedemptionDate LegRedemptionDate_43("LOCALMKTDATE_1070253530");
    noLegs_0_0.set(LegRedemptionDate_43);
    InstrumentLeg_43.insert(LegRedemptionDate_43.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_43("STRING_430571423");
    noLegs_0_0.set(LegRepoCollateralSecurityType_43);
    InstrumentLeg_43.insert(LegRepoCollateralSecurityType_43.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_43;
    LegRepurchaseRate_43.setString("82.210000");
    noLegs_0_0.set(LegRepurchaseRate_43);
    InstrumentLeg_43.insert(LegRepurchaseRate_43.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_43(1943965392);
    noLegs_0_0.set(LegRepurchaseTerm_43);
    InstrumentLeg_43.insert(LegRepurchaseTerm_43.getString());
    FIX::LegSecurityDesc LegSecurityDesc_43("STRING_1260281098");
    noLegs_0_0.set(LegSecurityDesc_43);
    InstrumentLeg_43.insert(LegSecurityDesc_43.getString());
    FIX::LegSecurityExchange LegSecurityExchange_43("EXCHANGE_728754098");
    noLegs_0_0.set(LegSecurityExchange_43);
    InstrumentLeg_43.insert(LegSecurityExchange_43.getString());
    FIX::LegSecurityID LegSecurityID_43("STRING_881370327");
    noLegs_0_0.set(LegSecurityID_43);
    InstrumentLeg_43.insert(LegSecurityID_43.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_43("STRING_340098608");
    noLegs_0_0.set(LegSecurityIDSource_43);
    InstrumentLeg_43.insert(LegSecurityIDSource_43.getString());
    FIX::LegSecuritySubType LegSecuritySubType_43("STRING_2135197080");
    noLegs_0_0.set(LegSecuritySubType_43);
    InstrumentLeg_43.insert(LegSecuritySubType_43.getString());
    FIX::LegSecurityType LegSecurityType_43("STRING_1999879527");
    noLegs_0_0.set(LegSecurityType_43);
    InstrumentLeg_43.insert(LegSecurityType_43.getString());
    FIX::LegSide LegSide_43('5');
    noLegs_0_0.set(LegSide_43);
    InstrumentLeg_43.insert(LegSide_43.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_43("STRING_1682317173");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_43);
    InstrumentLeg_43.insert(LegStateOrProvinceOfIssue_43.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_43("EUR");
    noLegs_0_0.set(LegStrikeCurrency_43);
    InstrumentLeg_43.insert(LegStrikeCurrency_43.getString());
    FIX::LegStrikePrice LegStrikePrice_43;
    LegStrikePrice_43.setString("10785554");
    noLegs_0_0.set(LegStrikePrice_43);
    InstrumentLeg_43.insert(LegStrikePrice_43.getString());
    FIX::LegSymbol LegSymbol_43("STRING_1580985473");
    noLegs_0_0.set(LegSymbol_43);
    InstrumentLeg_43.insert(LegSymbol_43.getString());
    FIX::LegSymbolSfx LegSymbolSfx_43("STRING_274276312");
    noLegs_0_0.set(LegSymbolSfx_43);
    InstrumentLeg_43.insert(LegSymbolSfx_43.getString());
    FIX::LegTimeUnit LegTimeUnit_43("STRING_1433211455");
    noLegs_0_0.set(LegTimeUnit_43);
    InstrumentLeg_43.insert(LegTimeUnit_43.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_43("STRING_1233170316");
    noLegs_0_0.set(LegUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegUnitOfMeasure_43.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
    LegUnitOfMeasureQty_43.setString("5615029");
    noLegs_0_0.set(LegUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegUnitOfMeasureQty_43.getString());
    all_values.push_back(InstrumentLeg_43);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_93;
      FIX::LegSecurityAltID LegSecurityAltID_93("STRING_1648311968");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltID_93.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_93("STRING_2133971333");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltIDSource_93.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_93);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_94;
      FIX::LegSecurityAltID LegSecurityAltID_94("STRING_1397538860");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltID_94.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_94("STRING_899734271");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltIDSource_94.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_94);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_44;
    FIX::EncodedLegIssuer EncodedLegIssuer_44("DATA_276459568");
    noLegs_0_1.set(EncodedLegIssuer_44);
    InstrumentLeg_44.insert(EncodedLegIssuer_44.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_44(1658528713);
    noLegs_0_1.set(EncodedLegIssuerLen_44);
    InstrumentLeg_44.insert(EncodedLegIssuerLen_44.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_44("DATA_1331724194");
    noLegs_0_1.set(EncodedLegSecurityDesc_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDesc_44.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_44(1342925305);
    noLegs_0_1.set(EncodedLegSecurityDescLen_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDescLen_44.getString());
    FIX::LegCFICode LegCFICode_44("STRING_1282089298");
    noLegs_0_1.set(LegCFICode_44);
    InstrumentLeg_44.insert(LegCFICode_44.getString());
    FIX::LegContractMultiplier LegContractMultiplier_44;
    LegContractMultiplier_44.setString("20141072");
    noLegs_0_1.set(LegContractMultiplier_44);
    InstrumentLeg_44.insert(LegContractMultiplier_44.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_44(265695187);
    noLegs_0_1.set(LegContractMultiplierUnit_44);
    InstrumentLeg_44.insert(LegContractMultiplierUnit_44.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_44("MONTHYEAR_1712660722");
    noLegs_0_1.set(LegContractSettlMonth_44);
    InstrumentLeg_44.insert(LegContractSettlMonth_44.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_44("COUNTRY_916371795");
    noLegs_0_1.set(LegCountryOfIssue_44);
    InstrumentLeg_44.insert(LegCountryOfIssue_44.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_44("LOCALMKTDATE_62176931");
    noLegs_0_1.set(LegCouponPaymentDate_44);
    InstrumentLeg_44.insert(LegCouponPaymentDate_44.getString());
    FIX::LegCouponRate LegCouponRate_44;
    LegCouponRate_44.setString("81.720000");
    noLegs_0_1.set(LegCouponRate_44);
    InstrumentLeg_44.insert(LegCouponRate_44.getString());
    FIX::LegCreditRating LegCreditRating_44("STRING_1645125893");
    noLegs_0_1.set(LegCreditRating_44);
    InstrumentLeg_44.insert(LegCreditRating_44.getString());
    FIX::LegCurrency LegCurrency_44("GBP");
    noLegs_0_1.set(LegCurrency_44);
    InstrumentLeg_44.insert(LegCurrency_44.getString());
    FIX::LegDatedDate LegDatedDate_44("LOCALMKTDATE_1632839325");
    noLegs_0_1.set(LegDatedDate_44);
    InstrumentLeg_44.insert(LegDatedDate_44.getString());
    FIX::LegExerciseStyle LegExerciseStyle_44(795943137);
    noLegs_0_1.set(LegExerciseStyle_44);
    InstrumentLeg_44.insert(LegExerciseStyle_44.getString());
    FIX::LegFactor LegFactor_44;
    LegFactor_44.setString("17503605");
    noLegs_0_1.set(LegFactor_44);
    InstrumentLeg_44.insert(LegFactor_44.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_44(1167672850);
    noLegs_0_1.set(LegFlowScheduleType_44);
    InstrumentLeg_44.insert(LegFlowScheduleType_44.getString());
    FIX::LegInstrRegistry LegInstrRegistry_44("STRING_391305801");
    noLegs_0_1.set(LegInstrRegistry_44);
    InstrumentLeg_44.insert(LegInstrRegistry_44.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_44("LOCALMKTDATE_669579172");
    noLegs_0_1.set(LegInterestAccrualDate_44);
    InstrumentLeg_44.insert(LegInterestAccrualDate_44.getString());
    FIX::LegIssueDate LegIssueDate_44("LOCALMKTDATE_98744667");
    noLegs_0_1.set(LegIssueDate_44);
    InstrumentLeg_44.insert(LegIssueDate_44.getString());
    FIX::LegIssuer LegIssuer_44("STRING_1972291274");
    noLegs_0_1.set(LegIssuer_44);
    InstrumentLeg_44.insert(LegIssuer_44.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_44("STRING_943855484");
    noLegs_0_1.set(LegLocaleOfIssue_44);
    InstrumentLeg_44.insert(LegLocaleOfIssue_44.getString());
    FIX::LegMaturityDate LegMaturityDate_44("LOCALMKTDATE_1531956122");
    noLegs_0_1.set(LegMaturityDate_44);
    InstrumentLeg_44.insert(LegMaturityDate_44.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_44("MONTHYEAR_1057977942");
    noLegs_0_1.set(LegMaturityMonthYear_44);
    InstrumentLeg_44.insert(LegMaturityMonthYear_44.getString());
    FIX::LegMaturityTime LegMaturityTime_44("TZTIMEONLY_1505358481");
    noLegs_0_1.set(LegMaturityTime_44);
    InstrumentLeg_44.insert(LegMaturityTime_44.getString());
    FIX::LegOptAttribute LegOptAttribute_44('1');
    noLegs_0_1.set(LegOptAttribute_44);
    InstrumentLeg_44.insert(LegOptAttribute_44.getString());
    FIX::LegOptionRatio LegOptionRatio_44;
    LegOptionRatio_44.setString("5588062");
    noLegs_0_1.set(LegOptionRatio_44);
    InstrumentLeg_44.insert(LegOptionRatio_44.getString());
    FIX::LegPool LegPool_44("STRING_1491846166");
    noLegs_0_1.set(LegPool_44);
    InstrumentLeg_44.insert(LegPool_44.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_44("STRING_1211219403");
    noLegs_0_1.set(LegPriceUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasure_44.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
    LegPriceUnitOfMeasureQty_44.setString("14585405");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasureQty_44.getString());
    FIX::LegProduct LegProduct_44(1768305735);
    noLegs_0_1.set(LegProduct_44);
    InstrumentLeg_44.insert(LegProduct_44.getString());
    FIX::LegPutOrCall LegPutOrCall_44(722264468);
    noLegs_0_1.set(LegPutOrCall_44);
    InstrumentLeg_44.insert(LegPutOrCall_44.getString());
    FIX::LegRatioQty LegRatioQty_44;
    LegRatioQty_44.setString("6427810");
    noLegs_0_1.set(LegRatioQty_44);
    InstrumentLeg_44.insert(LegRatioQty_44.getString());
    FIX::LegRedemptionDate LegRedemptionDate_44("LOCALMKTDATE_963747392");
    noLegs_0_1.set(LegRedemptionDate_44);
    InstrumentLeg_44.insert(LegRedemptionDate_44.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_44("STRING_2004353767");
    noLegs_0_1.set(LegRepoCollateralSecurityType_44);
    InstrumentLeg_44.insert(LegRepoCollateralSecurityType_44.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_44;
    LegRepurchaseRate_44.setString("46.530000");
    noLegs_0_1.set(LegRepurchaseRate_44);
    InstrumentLeg_44.insert(LegRepurchaseRate_44.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_44(1229442579);
    noLegs_0_1.set(LegRepurchaseTerm_44);
    InstrumentLeg_44.insert(LegRepurchaseTerm_44.getString());
    FIX::LegSecurityDesc LegSecurityDesc_44("STRING_1569530841");
    noLegs_0_1.set(LegSecurityDesc_44);
    InstrumentLeg_44.insert(LegSecurityDesc_44.getString());
    FIX::LegSecurityExchange LegSecurityExchange_44("EXCHANGE_1425776448");
    noLegs_0_1.set(LegSecurityExchange_44);
    InstrumentLeg_44.insert(LegSecurityExchange_44.getString());
    FIX::LegSecurityID LegSecurityID_44("STRING_1291619510");
    noLegs_0_1.set(LegSecurityID_44);
    InstrumentLeg_44.insert(LegSecurityID_44.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_44("STRING_247505365");
    noLegs_0_1.set(LegSecurityIDSource_44);
    InstrumentLeg_44.insert(LegSecurityIDSource_44.getString());
    FIX::LegSecuritySubType LegSecuritySubType_44("STRING_923418693");
    noLegs_0_1.set(LegSecuritySubType_44);
    InstrumentLeg_44.insert(LegSecuritySubType_44.getString());
    FIX::LegSecurityType LegSecurityType_44("STRING_87683121");
    noLegs_0_1.set(LegSecurityType_44);
    InstrumentLeg_44.insert(LegSecurityType_44.getString());
    FIX::LegSide LegSide_44('1');
    noLegs_0_1.set(LegSide_44);
    InstrumentLeg_44.insert(LegSide_44.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_44("STRING_408774371");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_44);
    InstrumentLeg_44.insert(LegStateOrProvinceOfIssue_44.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_44("USD");
    noLegs_0_1.set(LegStrikeCurrency_44);
    InstrumentLeg_44.insert(LegStrikeCurrency_44.getString());
    FIX::LegStrikePrice LegStrikePrice_44;
    LegStrikePrice_44.setString("15764472");
    noLegs_0_1.set(LegStrikePrice_44);
    InstrumentLeg_44.insert(LegStrikePrice_44.getString());
    FIX::LegSymbol LegSymbol_44("STRING_1274932059");
    noLegs_0_1.set(LegSymbol_44);
    InstrumentLeg_44.insert(LegSymbol_44.getString());
    FIX::LegSymbolSfx LegSymbolSfx_44("STRING_1685518186");
    noLegs_0_1.set(LegSymbolSfx_44);
    InstrumentLeg_44.insert(LegSymbolSfx_44.getString());
    FIX::LegTimeUnit LegTimeUnit_44("STRING_1675191888");
    noLegs_0_1.set(LegTimeUnit_44);
    InstrumentLeg_44.insert(LegTimeUnit_44.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_44("STRING_1099739685");
    noLegs_0_1.set(LegUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegUnitOfMeasure_44.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
    LegUnitOfMeasureQty_44.setString("4818900");
    noLegs_0_1.set(LegUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegUnitOfMeasureQty_44.getString());
    all_values.push_back(InstrumentLeg_44);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_95;
      FIX::LegSecurityAltID LegSecurityAltID_95("STRING_10233979");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltID_95.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_95("STRING_1987248504");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltIDSource_95.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_95);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_45;
    FIX::EncodedLegIssuer EncodedLegIssuer_45("DATA_873344906");
    noLegs_0_2.set(EncodedLegIssuer_45);
    InstrumentLeg_45.insert(EncodedLegIssuer_45.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_45(569040241);
    noLegs_0_2.set(EncodedLegIssuerLen_45);
    InstrumentLeg_45.insert(EncodedLegIssuerLen_45.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_45("DATA_1331611022");
    noLegs_0_2.set(EncodedLegSecurityDesc_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDesc_45.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_45(2084564309);
    noLegs_0_2.set(EncodedLegSecurityDescLen_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDescLen_45.getString());
    FIX::LegCFICode LegCFICode_45("STRING_2027580775");
    noLegs_0_2.set(LegCFICode_45);
    InstrumentLeg_45.insert(LegCFICode_45.getString());
    FIX::LegContractMultiplier LegContractMultiplier_45;
    LegContractMultiplier_45.setString("9524331");
    noLegs_0_2.set(LegContractMultiplier_45);
    InstrumentLeg_45.insert(LegContractMultiplier_45.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_45(659345130);
    noLegs_0_2.set(LegContractMultiplierUnit_45);
    InstrumentLeg_45.insert(LegContractMultiplierUnit_45.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_45("MONTHYEAR_522878207");
    noLegs_0_2.set(LegContractSettlMonth_45);
    InstrumentLeg_45.insert(LegContractSettlMonth_45.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_45("COUNTRY_1916180501");
    noLegs_0_2.set(LegCountryOfIssue_45);
    InstrumentLeg_45.insert(LegCountryOfIssue_45.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_45("LOCALMKTDATE_516215249");
    noLegs_0_2.set(LegCouponPaymentDate_45);
    InstrumentLeg_45.insert(LegCouponPaymentDate_45.getString());
    FIX::LegCouponRate LegCouponRate_45;
    LegCouponRate_45.setString("28.600000");
    noLegs_0_2.set(LegCouponRate_45);
    InstrumentLeg_45.insert(LegCouponRate_45.getString());
    FIX::LegCreditRating LegCreditRating_45("STRING_998139432");
    noLegs_0_2.set(LegCreditRating_45);
    InstrumentLeg_45.insert(LegCreditRating_45.getString());
    FIX::LegCurrency LegCurrency_45("EUR");
    noLegs_0_2.set(LegCurrency_45);
    InstrumentLeg_45.insert(LegCurrency_45.getString());
    FIX::LegDatedDate LegDatedDate_45("LOCALMKTDATE_142275295");
    noLegs_0_2.set(LegDatedDate_45);
    InstrumentLeg_45.insert(LegDatedDate_45.getString());
    FIX::LegExerciseStyle LegExerciseStyle_45(185767807);
    noLegs_0_2.set(LegExerciseStyle_45);
    InstrumentLeg_45.insert(LegExerciseStyle_45.getString());
    FIX::LegFactor LegFactor_45;
    LegFactor_45.setString("12339943");
    noLegs_0_2.set(LegFactor_45);
    InstrumentLeg_45.insert(LegFactor_45.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_45(229958416);
    noLegs_0_2.set(LegFlowScheduleType_45);
    InstrumentLeg_45.insert(LegFlowScheduleType_45.getString());
    FIX::LegInstrRegistry LegInstrRegistry_45("STRING_1598829952");
    noLegs_0_2.set(LegInstrRegistry_45);
    InstrumentLeg_45.insert(LegInstrRegistry_45.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_45("LOCALMKTDATE_1642768725");
    noLegs_0_2.set(LegInterestAccrualDate_45);
    InstrumentLeg_45.insert(LegInterestAccrualDate_45.getString());
    FIX::LegIssueDate LegIssueDate_45("LOCALMKTDATE_1113584674");
    noLegs_0_2.set(LegIssueDate_45);
    InstrumentLeg_45.insert(LegIssueDate_45.getString());
    FIX::LegIssuer LegIssuer_45("STRING_467285318");
    noLegs_0_2.set(LegIssuer_45);
    InstrumentLeg_45.insert(LegIssuer_45.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_45("STRING_1071732299");
    noLegs_0_2.set(LegLocaleOfIssue_45);
    InstrumentLeg_45.insert(LegLocaleOfIssue_45.getString());
    FIX::LegMaturityDate LegMaturityDate_45("LOCALMKTDATE_241033086");
    noLegs_0_2.set(LegMaturityDate_45);
    InstrumentLeg_45.insert(LegMaturityDate_45.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_45("MONTHYEAR_5319856");
    noLegs_0_2.set(LegMaturityMonthYear_45);
    InstrumentLeg_45.insert(LegMaturityMonthYear_45.getString());
    FIX::LegMaturityTime LegMaturityTime_45("TZTIMEONLY_599440539");
    noLegs_0_2.set(LegMaturityTime_45);
    InstrumentLeg_45.insert(LegMaturityTime_45.getString());
    FIX::LegOptAttribute LegOptAttribute_45('1');
    noLegs_0_2.set(LegOptAttribute_45);
    InstrumentLeg_45.insert(LegOptAttribute_45.getString());
    FIX::LegOptionRatio LegOptionRatio_45;
    LegOptionRatio_45.setString("4872098");
    noLegs_0_2.set(LegOptionRatio_45);
    InstrumentLeg_45.insert(LegOptionRatio_45.getString());
    FIX::LegPool LegPool_45("STRING_1659104902");
    noLegs_0_2.set(LegPool_45);
    InstrumentLeg_45.insert(LegPool_45.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_45("STRING_1351006751");
    noLegs_0_2.set(LegPriceUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasure_45.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_45;
    LegPriceUnitOfMeasureQty_45.setString("3269747");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasureQty_45.getString());
    FIX::LegProduct LegProduct_45(384966160);
    noLegs_0_2.set(LegProduct_45);
    InstrumentLeg_45.insert(LegProduct_45.getString());
    FIX::LegPutOrCall LegPutOrCall_45(1920046992);
    noLegs_0_2.set(LegPutOrCall_45);
    InstrumentLeg_45.insert(LegPutOrCall_45.getString());
    FIX::LegRatioQty LegRatioQty_45;
    LegRatioQty_45.setString("16585857");
    noLegs_0_2.set(LegRatioQty_45);
    InstrumentLeg_45.insert(LegRatioQty_45.getString());
    FIX::LegRedemptionDate LegRedemptionDate_45("LOCALMKTDATE_322046821");
    noLegs_0_2.set(LegRedemptionDate_45);
    InstrumentLeg_45.insert(LegRedemptionDate_45.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_45("STRING_1800144119");
    noLegs_0_2.set(LegRepoCollateralSecurityType_45);
    InstrumentLeg_45.insert(LegRepoCollateralSecurityType_45.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_45;
    LegRepurchaseRate_45.setString("52.190000");
    noLegs_0_2.set(LegRepurchaseRate_45);
    InstrumentLeg_45.insert(LegRepurchaseRate_45.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_45(981391951);
    noLegs_0_2.set(LegRepurchaseTerm_45);
    InstrumentLeg_45.insert(LegRepurchaseTerm_45.getString());
    FIX::LegSecurityDesc LegSecurityDesc_45("STRING_175538678");
    noLegs_0_2.set(LegSecurityDesc_45);
    InstrumentLeg_45.insert(LegSecurityDesc_45.getString());
    FIX::LegSecurityExchange LegSecurityExchange_45("EXCHANGE_232232073");
    noLegs_0_2.set(LegSecurityExchange_45);
    InstrumentLeg_45.insert(LegSecurityExchange_45.getString());
    FIX::LegSecurityID LegSecurityID_45("STRING_1497607200");
    noLegs_0_2.set(LegSecurityID_45);
    InstrumentLeg_45.insert(LegSecurityID_45.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_45("STRING_1207821539");
    noLegs_0_2.set(LegSecurityIDSource_45);
    InstrumentLeg_45.insert(LegSecurityIDSource_45.getString());
    FIX::LegSecuritySubType LegSecuritySubType_45("STRING_1230371505");
    noLegs_0_2.set(LegSecuritySubType_45);
    InstrumentLeg_45.insert(LegSecuritySubType_45.getString());
    FIX::LegSecurityType LegSecurityType_45("STRING_1435869642");
    noLegs_0_2.set(LegSecurityType_45);
    InstrumentLeg_45.insert(LegSecurityType_45.getString());
    FIX::LegSide LegSide_45('1');
    noLegs_0_2.set(LegSide_45);
    InstrumentLeg_45.insert(LegSide_45.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_45("STRING_1372646800");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_45);
    InstrumentLeg_45.insert(LegStateOrProvinceOfIssue_45.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_45("GBP");
    noLegs_0_2.set(LegStrikeCurrency_45);
    InstrumentLeg_45.insert(LegStrikeCurrency_45.getString());
    FIX::LegStrikePrice LegStrikePrice_45;
    LegStrikePrice_45.setString("16026052");
    noLegs_0_2.set(LegStrikePrice_45);
    InstrumentLeg_45.insert(LegStrikePrice_45.getString());
    FIX::LegSymbol LegSymbol_45("STRING_1072983753");
    noLegs_0_2.set(LegSymbol_45);
    InstrumentLeg_45.insert(LegSymbol_45.getString());
    FIX::LegSymbolSfx LegSymbolSfx_45("STRING_100192984");
    noLegs_0_2.set(LegSymbolSfx_45);
    InstrumentLeg_45.insert(LegSymbolSfx_45.getString());
    FIX::LegTimeUnit LegTimeUnit_45("STRING_568706243");
    noLegs_0_2.set(LegTimeUnit_45);
    InstrumentLeg_45.insert(LegTimeUnit_45.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_45("STRING_1540269071");
    noLegs_0_2.set(LegUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegUnitOfMeasure_45.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_45;
    LegUnitOfMeasureQty_45.setString("11719252");
    noLegs_0_2.set(LegUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegUnitOfMeasureQty_45.getString());
    all_values.push_back(InstrumentLeg_45);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_96;
      FIX::LegSecurityAltID LegSecurityAltID_96("STRING_1545588928");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_96);
      LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltID_96.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_96("STRING_1771365822");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_96);
      LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltIDSource_96.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_96);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_97;
      FIX::LegSecurityAltID LegSecurityAltID_97("STRING_3028452");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_97);
      LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltID_97.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_97("STRING_2032798807");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_97);
      LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltIDSource_97.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_97);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_98;
      FIX::LegSecurityAltID LegSecurityAltID_98("STRING_1282987076");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_98);
      LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltID_98.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_98("STRING_1354035203");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_98);
      LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltIDSource_98.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_98);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("98.950000");
  msg.set(AttachmentPoint_26);
  Instrument_26.insert(AttachmentPoint_26.getString());
  FIX::CFICode CFICode_26("STRING_1667953236");
  msg.set(CFICode_26);
  Instrument_26.insert(CFICode_26.getString());
  FIX::CPProgram CPProgram_26(2);
  msg.set(CPProgram_26);
  Instrument_26.insert(CPProgram_26.getString());
  FIX::CPRegType CPRegType_26("STRING_1870875653");
  msg.set(CPRegType_26);
  Instrument_26.insert(CPRegType_26.getString());
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("19900000");
  msg.set(CapPrice_26);
  Instrument_26.insert(CapPrice_26.getString());
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("7792590");
  msg.set(ContractMultiplier_26);
  Instrument_26.insert(ContractMultiplier_26.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_26(2);
  msg.set(ContractMultiplierUnit_26);
  Instrument_26.insert(ContractMultiplierUnit_26.getString());
  FIX::ContractSettlMonth ContractSettlMonth_26("MONTHYEAR_823908361");
  msg.set(ContractSettlMonth_26);
  Instrument_26.insert(ContractSettlMonth_26.getString());
  FIX::CountryOfIssue CountryOfIssue_26("COUNTRY_954797698");
  msg.set(CountryOfIssue_26);
  Instrument_26.insert(CountryOfIssue_26.getString());
  FIX::CouponPaymentDate CouponPaymentDate_26("LOCALMKTDATE_419159297");
  msg.set(CouponPaymentDate_26);
  Instrument_26.insert(CouponPaymentDate_26.getString());
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("19.140000");
  msg.set(CouponRate_26);
  Instrument_26.insert(CouponRate_26.getString());
  FIX::CreditRating CreditRating_26("STRING_15135589");
  msg.set(CreditRating_26);
  Instrument_26.insert(CreditRating_26.getString());
  FIX::DatedDate DatedDate_26("LOCALMKTDATE_1649530803");
  msg.set(DatedDate_26);
  Instrument_26.insert(DatedDate_26.getString());
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("15.560000");
  msg.set(DetachmentPoint_26);
  Instrument_26.insert(DetachmentPoint_26.getString());
  FIX::EncodedIssuer EncodedIssuer_26("DATA_1533532789");
  msg.set(EncodedIssuer_26);
  Instrument_26.insert(EncodedIssuer_26.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_26(874693955);
  msg.set(EncodedIssuerLen_26);
  Instrument_26.insert(EncodedIssuerLen_26.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_26("DATA_1084055358");
  msg.set(EncodedSecurityDesc_26);
  Instrument_26.insert(EncodedSecurityDesc_26.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_26(2138440695);
  msg.set(EncodedSecurityDescLen_26);
  Instrument_26.insert(EncodedSecurityDescLen_26.getString());
  FIX::ExerciseStyle ExerciseStyle_26(0);
  msg.set(ExerciseStyle_26);
  Instrument_26.insert(ExerciseStyle_26.getString());
  FIX::Factor Factor_26;
  Factor_26.setString("95554");
  msg.set(Factor_26);
  Instrument_26.insert(Factor_26.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_26(false);
  msg.set(FlexProductEligibilityIndicator_26);
  Instrument_26.insert(FlexProductEligibilityIndicator_26.getString());
  FIX::FlexibleIndicator FlexibleIndicator_26(false);
  msg.set(FlexibleIndicator_26);
  Instrument_26.insert(FlexibleIndicator_26.getString());
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("15498245");
  msg.set(FloorPrice_26);
  Instrument_26.insert(FloorPrice_26.getString());
  FIX::FlowScheduleType FlowScheduleType_26(4);
  msg.set(FlowScheduleType_26);
  Instrument_26.insert(FlowScheduleType_26.getString());
  FIX::InstrRegistry InstrRegistry_26("STRING_1708261096");
  msg.set(InstrRegistry_26);
  Instrument_26.insert(InstrRegistry_26.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_26('9');
  msg.set(InstrmtAssignmentMethod_26);
  Instrument_26.insert(InstrmtAssignmentMethod_26.getString());
  FIX::InterestAccrualDate InterestAccrualDate_26("LOCALMKTDATE_886957489");
  msg.set(InterestAccrualDate_26);
  Instrument_26.insert(InterestAccrualDate_26.getString());
  FIX::IssueDate IssueDate_26("LOCALMKTDATE_1711289548");
  msg.set(IssueDate_26);
  Instrument_26.insert(IssueDate_26.getString());
  FIX::Issuer Issuer_26("STRING_833244974");
  msg.set(Issuer_26);
  Instrument_26.insert(Issuer_26.getString());
  FIX::ListMethod ListMethod_26(1);
  msg.set(ListMethod_26);
  Instrument_26.insert(ListMethod_26.getString());
  FIX::LocaleOfIssue LocaleOfIssue_26("STRING_917841104");
  msg.set(LocaleOfIssue_26);
  Instrument_26.insert(LocaleOfIssue_26.getString());
  FIX::MaturityDate MaturityDate_26("LOCALMKTDATE_1045534869");
  msg.set(MaturityDate_26);
  Instrument_26.insert(MaturityDate_26.getString());
  FIX::MaturityMonthYear MaturityMonthYear_26("MONTHYEAR_1690414154");
  msg.set(MaturityMonthYear_26);
  Instrument_26.insert(MaturityMonthYear_26.getString());
  FIX::MaturityTime MaturityTime_26("TZTIMEONLY_2044439652");
  msg.set(MaturityTime_26);
  Instrument_26.insert(MaturityTime_26.getString());
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("7689268");
  msg.set(MinPriceIncrement_26);
  Instrument_26.insert(MinPriceIncrement_26.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("15329305");
  msg.set(MinPriceIncrementAmount_26);
  Instrument_26.insert(MinPriceIncrementAmount_26.getString());
  FIX::NTPositionLimit NTPositionLimit_26(676215023);
  msg.set(NTPositionLimit_26);
  Instrument_26.insert(NTPositionLimit_26.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("40.990000");
  msg.set(NotionalPercentageOutstanding_26);
  Instrument_26.insert(NotionalPercentageOutstanding_26.getString());
  FIX::OptAttribute OptAttribute_26('2');
  msg.set(OptAttribute_26);
  Instrument_26.insert(OptAttribute_26.getString());
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("16310127");
  msg.set(OptPayoutAmount_26);
  Instrument_26.insert(OptPayoutAmount_26.getString());
  FIX::OptPayoutType OptPayoutType_26(3);
  msg.set(OptPayoutType_26);
  Instrument_26.insert(OptPayoutType_26.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("71.910000");
  msg.set(OriginalNotionalPercentageOutstanding_26);
  Instrument_26.insert(OriginalNotionalPercentageOutstanding_26.getString());
  FIX::Pool Pool_26("STRING_1646148310");
  msg.set(Pool_26);
  Instrument_26.insert(Pool_26.getString());
  FIX::PositionLimit PositionLimit_26(877060551);
  msg.set(PositionLimit_26);
  Instrument_26.insert(PositionLimit_26.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_26("STRING_STD");
  msg.set(PriceQuoteMethod_26);
  Instrument_26.insert(PriceQuoteMethod_26.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_26("STRING_1032197451");
  msg.set(PriceUnitOfMeasure_26);
  Instrument_26.insert(PriceUnitOfMeasure_26.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("17517545");
  msg.set(PriceUnitOfMeasureQty_26);
  Instrument_26.insert(PriceUnitOfMeasureQty_26.getString());
  FIX::Product Product_28(8);
  msg.set(Product_28);
  Instrument_26.insert(Product_28.getString());
  FIX::ProductComplex ProductComplex_26("STRING_1023154499");
  msg.set(ProductComplex_26);
  Instrument_26.insert(ProductComplex_26.getString());
  FIX::PutOrCall PutOrCall_26(1);
  msg.set(PutOrCall_26);
  Instrument_26.insert(PutOrCall_26.getString());
  FIX::RedemptionDate RedemptionDate_26("LOCALMKTDATE_939415921");
  msg.set(RedemptionDate_26);
  Instrument_26.insert(RedemptionDate_26.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_26("STRING_1114304530");
  msg.set(RepoCollateralSecurityType_26);
  Instrument_26.insert(RepoCollateralSecurityType_26.getString());
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("81.500000");
  msg.set(RepurchaseRate_26);
  Instrument_26.insert(RepurchaseRate_26.getString());
  FIX::RepurchaseTerm RepurchaseTerm_26(341756808);
  msg.set(RepurchaseTerm_26);
  Instrument_26.insert(RepurchaseTerm_26.getString());
  FIX::RestructuringType RestructuringType_26("STRING_MR");
  msg.set(RestructuringType_26);
  Instrument_26.insert(RestructuringType_26.getString());
  FIX::SecurityDesc SecurityDesc_26("STRING_393385598");
  msg.set(SecurityDesc_26);
  Instrument_26.insert(SecurityDesc_26.getString());
  FIX::SecurityExchange SecurityExchange_26("EXCHANGE_1289686623");
  msg.set(SecurityExchange_26);
  Instrument_26.insert(SecurityExchange_26.getString());
  FIX::SecurityGroup SecurityGroup_26("STRING_1116853686");
  msg.set(SecurityGroup_26);
  Instrument_26.insert(SecurityGroup_26.getString());
  FIX::SecurityID SecurityID_26("STRING_2104675146");
  msg.set(SecurityID_26);
  Instrument_26.insert(SecurityID_26.getString());
  FIX::SecurityIDSource SecurityIDSource_26("STRING_J");
  msg.set(SecurityIDSource_26);
  Instrument_26.insert(SecurityIDSource_26.getString());
  FIX::SecurityStatus SecurityStatus_26("STRING_2");
  msg.set(SecurityStatus_26);
  Instrument_26.insert(SecurityStatus_26.getString());
  FIX::SecuritySubType SecuritySubType_27("STRING_875032602");
  msg.set(SecuritySubType_27);
  Instrument_26.insert(SecuritySubType_27.getString());
  FIX::SecurityType SecurityType_28("STRING_TBA");
  msg.set(SecurityType_28);
  Instrument_26.insert(SecurityType_28.getString());
  FIX::Seniority Seniority_26("STRING_SR");
  msg.set(Seniority_26);
  Instrument_26.insert(Seniority_26.getString());
  FIX::SettlMethod SettlMethod_26('C');
  msg.set(SettlMethod_26);
  Instrument_26.insert(SettlMethod_26.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_26("STRING_1789909694");
  msg.set(SettleOnOpenFlag_26);
  Instrument_26.insert(SettleOnOpenFlag_26.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_26("STRING_67692025");
  msg.set(StateOrProvinceOfIssue_26);
  Instrument_26.insert(StateOrProvinceOfIssue_26.getString());
  FIX::StrikeCurrency StrikeCurrency_26("CHF");
  msg.set(StrikeCurrency_26);
  Instrument_26.insert(StrikeCurrency_26.getString());
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("2770473");
  msg.set(StrikeMultiplier_26);
  Instrument_26.insert(StrikeMultiplier_26.getString());
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("9317327");
  msg.set(StrikePrice_26);
  Instrument_26.insert(StrikePrice_26.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_26(2);
  msg.set(StrikePriceBoundaryMethod_26);
  Instrument_26.insert(StrikePriceBoundaryMethod_26.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("44.940000");
  msg.set(StrikePriceBoundaryPrecision_26);
  Instrument_26.insert(StrikePriceBoundaryPrecision_26.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_26(3);
  msg.set(StrikePriceDeterminationMethod_26);
  Instrument_26.insert(StrikePriceDeterminationMethod_26.getString());
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("7028704");
  msg.set(StrikeValue_26);
  Instrument_26.insert(StrikeValue_26.getString());
  FIX::Symbol Symbol_26("STRING_506239594");
  msg.set(Symbol_26);
  Instrument_26.insert(Symbol_26.getString());
  FIX::SymbolSfx SymbolSfx_26("STRING_WI");
  msg.set(SymbolSfx_26);
  Instrument_26.insert(SymbolSfx_26.getString());
  FIX::TimeUnit TimeUnit_26("STRING_Min");
  msg.set(TimeUnit_26);
  Instrument_26.insert(TimeUnit_26.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_26(1);
  msg.set(UnderlyingPriceDeterminationMethod_26);
  Instrument_26.insert(UnderlyingPriceDeterminationMethod_26.getString());
  FIX::UnitOfMeasure UnitOfMeasure_26("STRING_Bcf");
  msg.set(UnitOfMeasure_26);
  Instrument_26.insert(UnitOfMeasure_26.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("2412276");
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
    multiset<string> ComplexEvents_NoComplexEvents_54;
    FIX::ComplexEventCondition ComplexEventCondition_54(2);
    noComplexEvents_0_0.set(ComplexEventCondition_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventCondition_54.getString());
    FIX::ComplexEventPrice ComplexEventPrice_54;
    ComplexEventPrice_54.setString("5697891");
    noComplexEvents_0_0.set(ComplexEventPrice_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventPrice_54.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_54(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryMethod_54.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_54;
    ComplexEventPriceBoundaryPrecision_54.setString("14.350000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryPrecision_54.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_54(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceTimeType_54.getString());
    FIX::ComplexEventType ComplexEventType_54(5);
    noComplexEvents_0_0.set(ComplexEventType_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexEventType_54.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_54;
    ComplexOptPayoutAmount_54.setString("14244129");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_54);
    ComplexEvents_NoComplexEvents_54.insert(ComplexOptPayoutAmount_54.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_54);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_113;
      FIX::ComplexEventEndDate ComplexEventEndDate_113(FIX::UTCTIMESTAMP(8, 59, 59, 26, 6, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_113);
      ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventEndDate_113.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_113(FIX::UTCTIMESTAMP(14, 27, 20, 16, 3, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_113);
      ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventStartDate_113.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_113);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_241;
        FIX::ComplexEventEndTime ComplexEventEndTime_241(FIX::UTCTIMEONLY(19, 33, 21));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_241);
        ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventEndTime_241.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_241(FIX::UTCTIMEONLY(0, 7, 15));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_241);
        ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventStartTime_241.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_241);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_242;
        FIX::ComplexEventEndTime ComplexEventEndTime_242(FIX::UTCTIMEONLY(5, 43, 16));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_242);
        ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventEndTime_242.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_242(FIX::UTCTIMEONLY(5, 49, 51));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_242);
        ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventStartTime_242.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_242);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_55;
    FIX::ComplexEventCondition ComplexEventCondition_55(1);
    noComplexEvents_0_1.set(ComplexEventCondition_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventCondition_55.getString());
    FIX::ComplexEventPrice ComplexEventPrice_55;
    ComplexEventPrice_55.setString("18486431");
    noComplexEvents_0_1.set(ComplexEventPrice_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventPrice_55.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_55(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryMethod_55.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_55;
    ComplexEventPriceBoundaryPrecision_55.setString("30.050000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryPrecision_55.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_55(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceTimeType_55.getString());
    FIX::ComplexEventType ComplexEventType_55(4);
    noComplexEvents_0_1.set(ComplexEventType_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexEventType_55.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_55;
    ComplexOptPayoutAmount_55.setString("10952675");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_55);
    ComplexEvents_NoComplexEvents_55.insert(ComplexOptPayoutAmount_55.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_55);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_114;
      FIX::ComplexEventEndDate ComplexEventEndDate_114(FIX::UTCTIMESTAMP(5, 0, 3, 3, 3, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_114);
      ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventEndDate_114.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_114(FIX::UTCTIMESTAMP(2, 9, 1, 26, 2, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_114);
      ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventStartDate_114.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_114);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_243;
        FIX::ComplexEventEndTime ComplexEventEndTime_243(FIX::UTCTIMEONLY(9, 28, 6));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_243);
        ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventEndTime_243.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_243(FIX::UTCTIMEONLY(1, 47, 28));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_243);
        ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventStartTime_243.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_243);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_115;
      FIX::ComplexEventEndDate ComplexEventEndDate_115(FIX::UTCTIMESTAMP(1, 11, 29, 25, 1, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_115);
      ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventEndDate_115.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_115(FIX::UTCTIMESTAMP(19, 20, 46, 6, 9, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_115);
      ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventStartDate_115.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_115);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_244;
        FIX::ComplexEventEndTime ComplexEventEndTime_244(FIX::UTCTIMEONLY(2, 11, 5));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_244);
        ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventEndTime_244.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_244(FIX::UTCTIMEONLY(12, 57, 49));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_244);
        ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventStartTime_244.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_244);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_245;
        FIX::ComplexEventEndTime ComplexEventEndTime_245(FIX::UTCTIMEONLY(6, 9, 52));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_245);
        ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventEndTime_245.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_245(FIX::UTCTIMEONLY(10, 31, 28));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_245);
        ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventStartTime_245.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_245);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
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
    FIX::EventDate EventDate_48("LOCALMKTDATE_1607332508");
    noEvents_0_0.set(EventDate_48);
    EvntGrp_NoEvents_48.insert(EventDate_48.getString());
    FIX::EventPx EventPx_48;
    EventPx_48.setString("175600");
    noEvents_0_0.set(EventPx_48);
    EvntGrp_NoEvents_48.insert(EventPx_48.getString());
    FIX::EventText EventText_48("STRING_269719023");
    noEvents_0_0.set(EventText_48);
    EvntGrp_NoEvents_48.insert(EventText_48.getString());
    FIX::EventTime EventTime_48(FIX::UTCTIMESTAMP(19, 14, 15, 26, 11, 2005));
    noEvents_0_0.set(EventTime_48);
    EvntGrp_NoEvents_48.insert(EventTime_48.getString());
    FIX::EventType EventType_48(1);
    noEvents_0_0.set(EventType_48);
    EvntGrp_NoEvents_48.insert(EventType_48.getString());
    all_values.push_back(EvntGrp_NoEvents_48);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_48;
    FIX::InstrumentPartyID InstrumentPartyID_48("STRING_57896649");
    noInstrumentParties_0_0.set(InstrumentPartyID_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyID_48.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_48('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyIDSource_48.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_48(70121342);
    noInstrumentParties_0_0.set(InstrumentPartyRole_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyRole_48.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_48);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
      FIX::InstrumentPartySubID InstrumentPartySubID_109("STRING_1055259693");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubID_109.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_109(1570679887);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubIDType_109.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
      FIX::InstrumentPartySubID InstrumentPartySubID_110("STRING_1427499664");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_110);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubID_110.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_110(308918257);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_110);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubIDType_110.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_49;
    FIX::InstrumentPartyID InstrumentPartyID_49("STRING_1895552404");
    noInstrumentParties_0_1.set(InstrumentPartyID_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyID_49.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_49('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyIDSource_49.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_49(1320647131);
    noInstrumentParties_0_1.set(InstrumentPartyRole_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyRole_49.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_49);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
      FIX::InstrumentPartySubID InstrumentPartySubID_111("STRING_1683630775");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_111);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubID_111.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_111(67747395);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_111);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubIDType_111.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_55;
    FIX::SecurityAltID SecurityAltID_55("STRING_1347237154");
    noSecurityAltID_0_0.set(SecurityAltID_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltID_55.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_55("STRING_394384007");
    noSecurityAltID_0_0.set(SecurityAltIDSource_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltIDSource_55.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_56;
    FIX::SecurityAltID SecurityAltID_56("STRING_704198214");
    noSecurityAltID_0_1.set(SecurityAltID_56);
    SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltID_56.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_56("STRING_2036810176");
    noSecurityAltID_0_1.set(SecurityAltIDSource_56);
    SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltIDSource_56.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  FIX::SecurityXML SecurityXML_53("XMLDATA_2001716515");
  msg.set(SecurityXML_53);
  FIX::SecurityXMLLen SecurityXMLLen_26(721758266);
  msg.set(SecurityXMLLen_26);
  FIX::SecurityXMLSchema SecurityXMLSchema_26("STRING_159045551");
  msg.set(SecurityXMLSchema_26);
  SecurityXML_52.insert(SecurityXMLSchema_26.getString());
  all_values.push_back(SecurityXML_52);

  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("12198876");
  msg.set(CashOrderQty_6);
  OrderQtyData_6.insert(CashOrderQty_6.getString());
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("99.090000");
  msg.set(OrderPercent_6);
  OrderQtyData_6.insert(OrderPercent_6.getString());
  FIX::OrderQty OrderQty_14;
  OrderQty_14.setString("11041781");
  msg.set(OrderQty_14);
  OrderQtyData_6.insert(OrderQty_14.getString());
  FIX::RoundingDirection RoundingDirection_6('1');
  msg.set(RoundingDirection_6);
  OrderQtyData_6.insert(RoundingDirection_6.getString());
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("5345363");
  msg.set(RoundingModulus_6);
  OrderQtyData_6.insert(RoundingModulus_6.getString());
  all_values.push_back(OrderQtyData_6);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_39;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_39("DATA_1339238469");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuer_39.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_39(1325436004);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuerLen_39.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_39("DATA_530545670");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDesc_39.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_39(1397135118);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDescLen_39.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
    UnderlyingAdjustedQuantity_39.setString("17850932");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_39);
    UnderlyingInstrument_39.insert(UnderlyingAdjustedQuantity_39.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
    UnderlyingAllocationPercent_39.setString("70.120000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_39);
    UnderlyingInstrument_39.insert(UnderlyingAllocationPercent_39.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
    UnderlyingAttachmentPoint_39.setString("2.500000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingAttachmentPoint_39.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_39("STRING_692869252");
    noUnderlyings_0_0.set(UnderlyingCFICode_39);
    UnderlyingInstrument_39.insert(UnderlyingCFICode_39.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_39("STRING_23863252");
    noUnderlyings_0_0.set(UnderlyingCPProgram_39);
    UnderlyingInstrument_39.insert(UnderlyingCPProgram_39.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_39("STRING_699796267");
    noUnderlyings_0_0.set(UnderlyingCPRegType_39);
    UnderlyingInstrument_39.insert(UnderlyingCPRegType_39.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_39;
    UnderlyingCapValue_39.setString("10017875");
    noUnderlyings_0_0.set(UnderlyingCapValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCapValue_39.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
    UnderlyingCashAmount_39.setString("19194156");
    noUnderlyings_0_0.set(UnderlyingCashAmount_39);
    UnderlyingInstrument_39.insert(UnderlyingCashAmount_39.getString());
    FIX::UnderlyingCashType UnderlyingCashType_39("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_39);
    UnderlyingInstrument_39.insert(UnderlyingCashType_39.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
    UnderlyingContractMultiplier_39.setString("1749509");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplier_39.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_39(592951035);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplierUnit_39.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_39("COUNTRY_758700280");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingCountryOfIssue_39.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_39("LOCALMKTDATE_242698389");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponPaymentDate_39.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
    UnderlyingCouponRate_39.setString("66.820000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponRate_39.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_39("STRING_2105937434");
    noUnderlyings_0_0.set(UnderlyingCreditRating_39);
    UnderlyingInstrument_39.insert(UnderlyingCreditRating_39.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_39("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrency_39.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
    UnderlyingCurrentValue_39.setString("19952639");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrentValue_39.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
    UnderlyingDetachmentPoint_39.setString("52.630000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingDetachmentPoint_39.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
    UnderlyingDirtyPrice_39.setString("20017431");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingDirtyPrice_39.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
    UnderlyingEndPrice_39.setString("68258");
    noUnderlyings_0_0.set(UnderlyingEndPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingEndPrice_39.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_39;
    UnderlyingEndValue_39.setString("17112029");
    noUnderlyings_0_0.set(UnderlyingEndValue_39);
    UnderlyingInstrument_39.insert(UnderlyingEndValue_39.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_39(124759424);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_39);
    UnderlyingInstrument_39.insert(UnderlyingExerciseStyle_39.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_39;
    UnderlyingFXRate_39.setString("11110039");
    noUnderlyings_0_0.set(UnderlyingFXRate_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRate_39.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_39('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRateCalc_39.getString());
    FIX::UnderlyingFactor UnderlyingFactor_39;
    UnderlyingFactor_39.setString("6592957");
    noUnderlyings_0_0.set(UnderlyingFactor_39);
    UnderlyingInstrument_39.insert(UnderlyingFactor_39.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_39(1306680222);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_39);
    UnderlyingInstrument_39.insert(UnderlyingFlowScheduleType_39.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_39("STRING_1949119389");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_39);
    UnderlyingInstrument_39.insert(UnderlyingInstrRegistry_39.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_39("LOCALMKTDATE_1984731752");
    noUnderlyings_0_0.set(UnderlyingIssueDate_39);
    UnderlyingInstrument_39.insert(UnderlyingIssueDate_39.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_39("STRING_1837225892");
    noUnderlyings_0_0.set(UnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(UnderlyingIssuer_39.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_39("STRING_1198770860");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingLocaleOfIssue_39.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_39("LOCALMKTDATE_1622341311");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityDate_39.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_39("MONTHYEAR_290409256");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityMonthYear_39.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_39("TZTIMEONLY_471067462");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityTime_39.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
    UnderlyingNotionalPercentageOutstanding_39.setString("69.160000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_39('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_39);
    UnderlyingInstrument_39.insert(UnderlyingOptAttribute_39.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
    UnderlyingOriginalNotionalPercentageOutstanding_39.setString("37.290000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingOriginalNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_39("STRING_1169514426");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasure_39.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
    UnderlyingPriceUnitOfMeasureQty_39.setString("862045");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasureQty_39.getString());
    FIX::UnderlyingProduct UnderlyingProduct_39(245933234);
    noUnderlyings_0_0.set(UnderlyingProduct_39);
    UnderlyingInstrument_39.insert(UnderlyingProduct_39.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_39(1344465419);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_39);
    UnderlyingInstrument_39.insert(UnderlyingPutOrCall_39.getString());
    FIX::UnderlyingPx UnderlyingPx_39;
    UnderlyingPx_39.setString("6791555");
    noUnderlyings_0_0.set(UnderlyingPx_39);
    UnderlyingInstrument_39.insert(UnderlyingPx_39.getString());
    FIX::UnderlyingQty UnderlyingQty_39;
    UnderlyingQty_39.setString("10046335");
    noUnderlyings_0_0.set(UnderlyingQty_39);
    UnderlyingInstrument_39.insert(UnderlyingQty_39.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_39("LOCALMKTDATE_1587163808");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_39);
    UnderlyingInstrument_39.insert(UnderlyingRedemptionDate_39.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_39("STRING_1254942234");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingRepoCollateralSecurityType_39.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
    UnderlyingRepurchaseRate_39.setString("73.010000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseRate_39.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_39(76762556);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseTerm_39.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_39("STRING_387443483");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_39);
    UnderlyingInstrument_39.insert(UnderlyingRestructuringType_39.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_39("STRING_810867616");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityDesc_39.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_39("EXCHANGE_568077820");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityExchange_39.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_39("STRING_241702997");
    noUnderlyings_0_0.set(UnderlyingSecurityID_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityID_39.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_39("STRING_817693481");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityIDSource_39.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_39("STRING_131797104");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecuritySubType_39.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_39("STRING_366462421");
    noUnderlyings_0_0.set(UnderlyingSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityType_39.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_39("STRING_1928697452");
    noUnderlyings_0_0.set(UnderlyingSeniority_39);
    UnderlyingInstrument_39.insert(UnderlyingSeniority_39.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_39("STRING_741678025");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlMethod_39.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_39(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlementType_39.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_39;
    UnderlyingStartValue_39.setString("10878940");
    noUnderlyings_0_0.set(UnderlyingStartValue_39);
    UnderlyingInstrument_39.insert(UnderlyingStartValue_39.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_39("STRING_543313766");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingStateOrProvinceOfIssue_39.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_39("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikeCurrency_39.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
    UnderlyingStrikePrice_39.setString("17420846");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikePrice_39.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_39("STRING_337863937");
    noUnderlyings_0_0.set(UnderlyingSymbol_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbol_39.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_39("STRING_1068045526");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbolSfx_39.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_39("STRING_65668441");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingTimeUnit_39.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_39("STRING_505590853");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasure_39.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
    UnderlyingUnitOfMeasureQty_39.setString("13823180");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasureQty_39.getString());
    all_values.push_back(UnderlyingInstrument_39);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_84("STRING_1675105279");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltID_84.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_84("STRING_1468522552");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_84);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltIDSource_84.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
      FIX::UnderlyingStipType UnderlyingStipType_75("STRING_872087051");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipType_75.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_75("STRING_194456");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipValue_75.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_78("STRING_311767211");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyID_78.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_78('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyIDSource_78.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_78(1302702573);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyRole_78.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_168("STRING_1642580174");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubID_168.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_168(2113570189);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubIDType_168.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_169("STRING_956607588");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubID_169.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_169(1884283171);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubIDType_169.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_170("STRING_783780023");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_170);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubID_170.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_170(1088404692);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_170);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubIDType_170.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_79("STRING_103261945");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyID_79.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_79('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyIDSource_79.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_79(1830082717);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyRole_79.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_171("STRING_1652887853");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_171);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubID_171.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_171(225912836);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_171);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubIDType_171.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_80("STRING_1992026388");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyID_80.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_80('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyIDSource_80.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_80(1967997462);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyRole_80.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_172("STRING_1351086001");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_172);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubID_172.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_172(2033665903);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_172);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubIDType_172.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
