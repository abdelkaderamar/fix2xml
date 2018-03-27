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
  AvgPx_4.setString("18947160");
  msg.set(AvgPx_4);
  ExecutionAcknowledgement_0.insert(AvgPx_4.getString());
  FIX::ClOrdID ClOrdID_21("STRING_412921167");
  msg.set(ClOrdID_21);
  ExecutionAcknowledgement_0.insert(ClOrdID_21.getString());
  FIX::CumQty CumQty_0;
  CumQty_0.setString("14801384");
  msg.set(CumQty_0);
  ExecutionAcknowledgement_0.insert(CumQty_0.getString());
  FIX::DKReason DKReason_1('A');
  msg.set(DKReason_1);
  ExecutionAcknowledgement_0.insert(DKReason_1.getString());
  FIX::EncodedText EncodedText_35("DATA_1716479008");
  msg.set(EncodedText_35);
  ExecutionAcknowledgement_0.insert(EncodedText_35.getString());
  FIX::EncodedTextLen EncodedTextLen_35(1051197891);
  msg.set(EncodedTextLen_35);
  ExecutionAcknowledgement_0.insert(EncodedTextLen_35.getString());
  FIX::ExecAckStatus ExecAckStatus_0('1');
  msg.set(ExecAckStatus_0);
  ExecutionAcknowledgement_0.insert(ExecAckStatus_0.getString());
  FIX::ExecID ExecID_20("STRING_1607169762");
  msg.set(ExecID_20);
  ExecutionAcknowledgement_0.insert(ExecID_20.getString());
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("6728478");
  msg.set(LastParPx_8);
  ExecutionAcknowledgement_0.insert(LastParPx_8.getString());
  FIX::LastPx LastPx_9;
  LastPx_9.setString("7724014");
  msg.set(LastPx_9);
  ExecutionAcknowledgement_0.insert(LastPx_9.getString());
  FIX::LastQty LastQty_9;
  LastQty_9.setString("802202");
  msg.set(LastQty_9);
  ExecutionAcknowledgement_0.insert(LastQty_9.getString());
  FIX::OrderID OrderID_19("STRING_512414982");
  msg.set(OrderID_19);
  ExecutionAcknowledgement_0.insert(OrderID_19.getString());
  FIX::PriceType PriceType_16(10);
  msg.set(PriceType_16);
  ExecutionAcknowledgement_0.insert(PriceType_16.getString());
  FIX::SecondaryOrderID SecondaryOrderID_16("STRING_1653626322");
  msg.set(SecondaryOrderID_16);
  ExecutionAcknowledgement_0.insert(SecondaryOrderID_16.getString());
  FIX::Side Side_18('5');
  msg.set(Side_18);
  ExecutionAcknowledgement_0.insert(Side_18.getString());
  FIX::Text Text_35("STRING_1536031016");
  msg.set(Text_35);
  ExecutionAcknowledgement_0.insert(Text_35.getString());
  all_values.push_back(ExecutionAcknowledgement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_38;
    FIX::EncodedLegIssuer EncodedLegIssuer_38("DATA_98991885");
    noLegs_0_0.set(EncodedLegIssuer_38);
    InstrumentLeg_38.insert(EncodedLegIssuer_38.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_38(1660281170);
    noLegs_0_0.set(EncodedLegIssuerLen_38);
    InstrumentLeg_38.insert(EncodedLegIssuerLen_38.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_38("DATA_292216614");
    noLegs_0_0.set(EncodedLegSecurityDesc_38);
    InstrumentLeg_38.insert(EncodedLegSecurityDesc_38.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_38(2102420410);
    noLegs_0_0.set(EncodedLegSecurityDescLen_38);
    InstrumentLeg_38.insert(EncodedLegSecurityDescLen_38.getString());
    FIX::LegCFICode LegCFICode_38("STRING_1432870669");
    noLegs_0_0.set(LegCFICode_38);
    InstrumentLeg_38.insert(LegCFICode_38.getString());
    FIX::LegContractMultiplier LegContractMultiplier_38;
    LegContractMultiplier_38.setString("16904797");
    noLegs_0_0.set(LegContractMultiplier_38);
    InstrumentLeg_38.insert(LegContractMultiplier_38.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_38(885187028);
    noLegs_0_0.set(LegContractMultiplierUnit_38);
    InstrumentLeg_38.insert(LegContractMultiplierUnit_38.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_38("MONTHYEAR_1649684474");
    noLegs_0_0.set(LegContractSettlMonth_38);
    InstrumentLeg_38.insert(LegContractSettlMonth_38.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_38("COUNTRY_812763290");
    noLegs_0_0.set(LegCountryOfIssue_38);
    InstrumentLeg_38.insert(LegCountryOfIssue_38.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_38("LOCALMKTDATE_151630063");
    noLegs_0_0.set(LegCouponPaymentDate_38);
    InstrumentLeg_38.insert(LegCouponPaymentDate_38.getString());
    FIX::LegCouponRate LegCouponRate_38;
    LegCouponRate_38.setString("55.050000");
    noLegs_0_0.set(LegCouponRate_38);
    InstrumentLeg_38.insert(LegCouponRate_38.getString());
    FIX::LegCreditRating LegCreditRating_38("STRING_363322003");
    noLegs_0_0.set(LegCreditRating_38);
    InstrumentLeg_38.insert(LegCreditRating_38.getString());
    FIX::LegCurrency LegCurrency_38("CHF");
    noLegs_0_0.set(LegCurrency_38);
    InstrumentLeg_38.insert(LegCurrency_38.getString());
    FIX::LegDatedDate LegDatedDate_38("LOCALMKTDATE_110554396");
    noLegs_0_0.set(LegDatedDate_38);
    InstrumentLeg_38.insert(LegDatedDate_38.getString());
    FIX::LegExerciseStyle LegExerciseStyle_38(1866989351);
    noLegs_0_0.set(LegExerciseStyle_38);
    InstrumentLeg_38.insert(LegExerciseStyle_38.getString());
    FIX::LegFactor LegFactor_38;
    LegFactor_38.setString("10350579");
    noLegs_0_0.set(LegFactor_38);
    InstrumentLeg_38.insert(LegFactor_38.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_38(1046380994);
    noLegs_0_0.set(LegFlowScheduleType_38);
    InstrumentLeg_38.insert(LegFlowScheduleType_38.getString());
    FIX::LegInstrRegistry LegInstrRegistry_38("STRING_1435984712");
    noLegs_0_0.set(LegInstrRegistry_38);
    InstrumentLeg_38.insert(LegInstrRegistry_38.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_38("LOCALMKTDATE_2086255814");
    noLegs_0_0.set(LegInterestAccrualDate_38);
    InstrumentLeg_38.insert(LegInterestAccrualDate_38.getString());
    FIX::LegIssueDate LegIssueDate_38("LOCALMKTDATE_1510823934");
    noLegs_0_0.set(LegIssueDate_38);
    InstrumentLeg_38.insert(LegIssueDate_38.getString());
    FIX::LegIssuer LegIssuer_38("STRING_895670826");
    noLegs_0_0.set(LegIssuer_38);
    InstrumentLeg_38.insert(LegIssuer_38.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_38("STRING_611620047");
    noLegs_0_0.set(LegLocaleOfIssue_38);
    InstrumentLeg_38.insert(LegLocaleOfIssue_38.getString());
    FIX::LegMaturityDate LegMaturityDate_38("LOCALMKTDATE_135741760");
    noLegs_0_0.set(LegMaturityDate_38);
    InstrumentLeg_38.insert(LegMaturityDate_38.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_38("MONTHYEAR_975891036");
    noLegs_0_0.set(LegMaturityMonthYear_38);
    InstrumentLeg_38.insert(LegMaturityMonthYear_38.getString());
    FIX::LegMaturityTime LegMaturityTime_38("TZTIMEONLY_1124035029");
    noLegs_0_0.set(LegMaturityTime_38);
    InstrumentLeg_38.insert(LegMaturityTime_38.getString());
    FIX::LegOptAttribute LegOptAttribute_38('2');
    noLegs_0_0.set(LegOptAttribute_38);
    InstrumentLeg_38.insert(LegOptAttribute_38.getString());
    FIX::LegOptionRatio LegOptionRatio_38;
    LegOptionRatio_38.setString("4820337");
    noLegs_0_0.set(LegOptionRatio_38);
    InstrumentLeg_38.insert(LegOptionRatio_38.getString());
    FIX::LegPool LegPool_38("STRING_20686826");
    noLegs_0_0.set(LegPool_38);
    InstrumentLeg_38.insert(LegPool_38.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_38("STRING_1773261628");
    noLegs_0_0.set(LegPriceUnitOfMeasure_38);
    InstrumentLeg_38.insert(LegPriceUnitOfMeasure_38.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
    LegPriceUnitOfMeasureQty_38.setString("6331858");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_38);
    InstrumentLeg_38.insert(LegPriceUnitOfMeasureQty_38.getString());
    FIX::LegProduct LegProduct_38(119678711);
    noLegs_0_0.set(LegProduct_38);
    InstrumentLeg_38.insert(LegProduct_38.getString());
    FIX::LegPutOrCall LegPutOrCall_38(1286059150);
    noLegs_0_0.set(LegPutOrCall_38);
    InstrumentLeg_38.insert(LegPutOrCall_38.getString());
    FIX::LegRatioQty LegRatioQty_38;
    LegRatioQty_38.setString("9254024");
    noLegs_0_0.set(LegRatioQty_38);
    InstrumentLeg_38.insert(LegRatioQty_38.getString());
    FIX::LegRedemptionDate LegRedemptionDate_38("LOCALMKTDATE_74615474");
    noLegs_0_0.set(LegRedemptionDate_38);
    InstrumentLeg_38.insert(LegRedemptionDate_38.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_38("STRING_571446171");
    noLegs_0_0.set(LegRepoCollateralSecurityType_38);
    InstrumentLeg_38.insert(LegRepoCollateralSecurityType_38.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_38;
    LegRepurchaseRate_38.setString("84.780000");
    noLegs_0_0.set(LegRepurchaseRate_38);
    InstrumentLeg_38.insert(LegRepurchaseRate_38.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_38(959802502);
    noLegs_0_0.set(LegRepurchaseTerm_38);
    InstrumentLeg_38.insert(LegRepurchaseTerm_38.getString());
    FIX::LegSecurityDesc LegSecurityDesc_38("STRING_73646997");
    noLegs_0_0.set(LegSecurityDesc_38);
    InstrumentLeg_38.insert(LegSecurityDesc_38.getString());
    FIX::LegSecurityExchange LegSecurityExchange_38("EXCHANGE_1281161769");
    noLegs_0_0.set(LegSecurityExchange_38);
    InstrumentLeg_38.insert(LegSecurityExchange_38.getString());
    FIX::LegSecurityID LegSecurityID_38("STRING_1111432565");
    noLegs_0_0.set(LegSecurityID_38);
    InstrumentLeg_38.insert(LegSecurityID_38.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_38("STRING_1312962502");
    noLegs_0_0.set(LegSecurityIDSource_38);
    InstrumentLeg_38.insert(LegSecurityIDSource_38.getString());
    FIX::LegSecuritySubType LegSecuritySubType_38("STRING_1644483772");
    noLegs_0_0.set(LegSecuritySubType_38);
    InstrumentLeg_38.insert(LegSecuritySubType_38.getString());
    FIX::LegSecurityType LegSecurityType_38("STRING_418017102");
    noLegs_0_0.set(LegSecurityType_38);
    InstrumentLeg_38.insert(LegSecurityType_38.getString());
    FIX::LegSide LegSide_38('8');
    noLegs_0_0.set(LegSide_38);
    InstrumentLeg_38.insert(LegSide_38.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_38("STRING_1755038168");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_38);
    InstrumentLeg_38.insert(LegStateOrProvinceOfIssue_38.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_38("JPY");
    noLegs_0_0.set(LegStrikeCurrency_38);
    InstrumentLeg_38.insert(LegStrikeCurrency_38.getString());
    FIX::LegStrikePrice LegStrikePrice_38;
    LegStrikePrice_38.setString("6539355");
    noLegs_0_0.set(LegStrikePrice_38);
    InstrumentLeg_38.insert(LegStrikePrice_38.getString());
    FIX::LegSymbol LegSymbol_38("STRING_1573507517");
    noLegs_0_0.set(LegSymbol_38);
    InstrumentLeg_38.insert(LegSymbol_38.getString());
    FIX::LegSymbolSfx LegSymbolSfx_38("STRING_1841712034");
    noLegs_0_0.set(LegSymbolSfx_38);
    InstrumentLeg_38.insert(LegSymbolSfx_38.getString());
    FIX::LegTimeUnit LegTimeUnit_38("STRING_17275800");
    noLegs_0_0.set(LegTimeUnit_38);
    InstrumentLeg_38.insert(LegTimeUnit_38.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_38("STRING_321694695");
    noLegs_0_0.set(LegUnitOfMeasure_38);
    InstrumentLeg_38.insert(LegUnitOfMeasure_38.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
    LegUnitOfMeasureQty_38.setString("3058484");
    noLegs_0_0.set(LegUnitOfMeasureQty_38);
    InstrumentLeg_38.insert(LegUnitOfMeasureQty_38.getString());
    all_values.push_back(InstrumentLeg_38);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
      FIX::LegSecurityAltID LegSecurityAltID_65("STRING_1297585732");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_65);
      LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltID_65.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_65("STRING_1429883462");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_65);
      LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltIDSource_65.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
      FIX::LegSecurityAltID LegSecurityAltID_66("STRING_390248172");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_66);
      LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltID_66.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_66("STRING_1779619443");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_66);
      LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltIDSource_66.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_39;
    FIX::EncodedLegIssuer EncodedLegIssuer_39("DATA_1450570288");
    noLegs_0_1.set(EncodedLegIssuer_39);
    InstrumentLeg_39.insert(EncodedLegIssuer_39.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_39(16026152);
    noLegs_0_1.set(EncodedLegIssuerLen_39);
    InstrumentLeg_39.insert(EncodedLegIssuerLen_39.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_39("DATA_265321601");
    noLegs_0_1.set(EncodedLegSecurityDesc_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDesc_39.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_39(1570249000);
    noLegs_0_1.set(EncodedLegSecurityDescLen_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDescLen_39.getString());
    FIX::LegCFICode LegCFICode_39("STRING_1302085302");
    noLegs_0_1.set(LegCFICode_39);
    InstrumentLeg_39.insert(LegCFICode_39.getString());
    FIX::LegContractMultiplier LegContractMultiplier_39;
    LegContractMultiplier_39.setString("11907240");
    noLegs_0_1.set(LegContractMultiplier_39);
    InstrumentLeg_39.insert(LegContractMultiplier_39.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_39(1644864474);
    noLegs_0_1.set(LegContractMultiplierUnit_39);
    InstrumentLeg_39.insert(LegContractMultiplierUnit_39.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_39("MONTHYEAR_1873531473");
    noLegs_0_1.set(LegContractSettlMonth_39);
    InstrumentLeg_39.insert(LegContractSettlMonth_39.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_39("COUNTRY_1659122500");
    noLegs_0_1.set(LegCountryOfIssue_39);
    InstrumentLeg_39.insert(LegCountryOfIssue_39.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_39("LOCALMKTDATE_457183328");
    noLegs_0_1.set(LegCouponPaymentDate_39);
    InstrumentLeg_39.insert(LegCouponPaymentDate_39.getString());
    FIX::LegCouponRate LegCouponRate_39;
    LegCouponRate_39.setString("84.700000");
    noLegs_0_1.set(LegCouponRate_39);
    InstrumentLeg_39.insert(LegCouponRate_39.getString());
    FIX::LegCreditRating LegCreditRating_39("STRING_792800621");
    noLegs_0_1.set(LegCreditRating_39);
    InstrumentLeg_39.insert(LegCreditRating_39.getString());
    FIX::LegCurrency LegCurrency_39("GBP");
    noLegs_0_1.set(LegCurrency_39);
    InstrumentLeg_39.insert(LegCurrency_39.getString());
    FIX::LegDatedDate LegDatedDate_39("LOCALMKTDATE_289800745");
    noLegs_0_1.set(LegDatedDate_39);
    InstrumentLeg_39.insert(LegDatedDate_39.getString());
    FIX::LegExerciseStyle LegExerciseStyle_39(1986632996);
    noLegs_0_1.set(LegExerciseStyle_39);
    InstrumentLeg_39.insert(LegExerciseStyle_39.getString());
    FIX::LegFactor LegFactor_39;
    LegFactor_39.setString("19805392");
    noLegs_0_1.set(LegFactor_39);
    InstrumentLeg_39.insert(LegFactor_39.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_39(2044838913);
    noLegs_0_1.set(LegFlowScheduleType_39);
    InstrumentLeg_39.insert(LegFlowScheduleType_39.getString());
    FIX::LegInstrRegistry LegInstrRegistry_39("STRING_2124155801");
    noLegs_0_1.set(LegInstrRegistry_39);
    InstrumentLeg_39.insert(LegInstrRegistry_39.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_39("LOCALMKTDATE_1735995490");
    noLegs_0_1.set(LegInterestAccrualDate_39);
    InstrumentLeg_39.insert(LegInterestAccrualDate_39.getString());
    FIX::LegIssueDate LegIssueDate_39("LOCALMKTDATE_551290779");
    noLegs_0_1.set(LegIssueDate_39);
    InstrumentLeg_39.insert(LegIssueDate_39.getString());
    FIX::LegIssuer LegIssuer_39("STRING_1550179671");
    noLegs_0_1.set(LegIssuer_39);
    InstrumentLeg_39.insert(LegIssuer_39.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_39("STRING_1430223876");
    noLegs_0_1.set(LegLocaleOfIssue_39);
    InstrumentLeg_39.insert(LegLocaleOfIssue_39.getString());
    FIX::LegMaturityDate LegMaturityDate_39("LOCALMKTDATE_568566579");
    noLegs_0_1.set(LegMaturityDate_39);
    InstrumentLeg_39.insert(LegMaturityDate_39.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_39("MONTHYEAR_1871874366");
    noLegs_0_1.set(LegMaturityMonthYear_39);
    InstrumentLeg_39.insert(LegMaturityMonthYear_39.getString());
    FIX::LegMaturityTime LegMaturityTime_39("TZTIMEONLY_1736072309");
    noLegs_0_1.set(LegMaturityTime_39);
    InstrumentLeg_39.insert(LegMaturityTime_39.getString());
    FIX::LegOptAttribute LegOptAttribute_39('7');
    noLegs_0_1.set(LegOptAttribute_39);
    InstrumentLeg_39.insert(LegOptAttribute_39.getString());
    FIX::LegOptionRatio LegOptionRatio_39;
    LegOptionRatio_39.setString("10219764");
    noLegs_0_1.set(LegOptionRatio_39);
    InstrumentLeg_39.insert(LegOptionRatio_39.getString());
    FIX::LegPool LegPool_39("STRING_1018472123");
    noLegs_0_1.set(LegPool_39);
    InstrumentLeg_39.insert(LegPool_39.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_39("STRING_1111832311");
    noLegs_0_1.set(LegPriceUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasure_39.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
    LegPriceUnitOfMeasureQty_39.setString("6541122");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasureQty_39.getString());
    FIX::LegProduct LegProduct_39(321558764);
    noLegs_0_1.set(LegProduct_39);
    InstrumentLeg_39.insert(LegProduct_39.getString());
    FIX::LegPutOrCall LegPutOrCall_39(1127858463);
    noLegs_0_1.set(LegPutOrCall_39);
    InstrumentLeg_39.insert(LegPutOrCall_39.getString());
    FIX::LegRatioQty LegRatioQty_39;
    LegRatioQty_39.setString("9194338");
    noLegs_0_1.set(LegRatioQty_39);
    InstrumentLeg_39.insert(LegRatioQty_39.getString());
    FIX::LegRedemptionDate LegRedemptionDate_39("LOCALMKTDATE_1891807764");
    noLegs_0_1.set(LegRedemptionDate_39);
    InstrumentLeg_39.insert(LegRedemptionDate_39.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_39("STRING_282460117");
    noLegs_0_1.set(LegRepoCollateralSecurityType_39);
    InstrumentLeg_39.insert(LegRepoCollateralSecurityType_39.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_39;
    LegRepurchaseRate_39.setString("78.680000");
    noLegs_0_1.set(LegRepurchaseRate_39);
    InstrumentLeg_39.insert(LegRepurchaseRate_39.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_39(1389188590);
    noLegs_0_1.set(LegRepurchaseTerm_39);
    InstrumentLeg_39.insert(LegRepurchaseTerm_39.getString());
    FIX::LegSecurityDesc LegSecurityDesc_39("STRING_8507942");
    noLegs_0_1.set(LegSecurityDesc_39);
    InstrumentLeg_39.insert(LegSecurityDesc_39.getString());
    FIX::LegSecurityExchange LegSecurityExchange_39("EXCHANGE_1621796720");
    noLegs_0_1.set(LegSecurityExchange_39);
    InstrumentLeg_39.insert(LegSecurityExchange_39.getString());
    FIX::LegSecurityID LegSecurityID_39("STRING_1846371918");
    noLegs_0_1.set(LegSecurityID_39);
    InstrumentLeg_39.insert(LegSecurityID_39.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_39("STRING_1955686412");
    noLegs_0_1.set(LegSecurityIDSource_39);
    InstrumentLeg_39.insert(LegSecurityIDSource_39.getString());
    FIX::LegSecuritySubType LegSecuritySubType_39("STRING_267113693");
    noLegs_0_1.set(LegSecuritySubType_39);
    InstrumentLeg_39.insert(LegSecuritySubType_39.getString());
    FIX::LegSecurityType LegSecurityType_39("STRING_1267504164");
    noLegs_0_1.set(LegSecurityType_39);
    InstrumentLeg_39.insert(LegSecurityType_39.getString());
    FIX::LegSide LegSide_39('9');
    noLegs_0_1.set(LegSide_39);
    InstrumentLeg_39.insert(LegSide_39.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_39("STRING_556914438");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_39);
    InstrumentLeg_39.insert(LegStateOrProvinceOfIssue_39.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_39("CHF");
    noLegs_0_1.set(LegStrikeCurrency_39);
    InstrumentLeg_39.insert(LegStrikeCurrency_39.getString());
    FIX::LegStrikePrice LegStrikePrice_39;
    LegStrikePrice_39.setString("4542697");
    noLegs_0_1.set(LegStrikePrice_39);
    InstrumentLeg_39.insert(LegStrikePrice_39.getString());
    FIX::LegSymbol LegSymbol_39("STRING_1083325666");
    noLegs_0_1.set(LegSymbol_39);
    InstrumentLeg_39.insert(LegSymbol_39.getString());
    FIX::LegSymbolSfx LegSymbolSfx_39("STRING_342427553");
    noLegs_0_1.set(LegSymbolSfx_39);
    InstrumentLeg_39.insert(LegSymbolSfx_39.getString());
    FIX::LegTimeUnit LegTimeUnit_39("STRING_1005560482");
    noLegs_0_1.set(LegTimeUnit_39);
    InstrumentLeg_39.insert(LegTimeUnit_39.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_39("STRING_486021689");
    noLegs_0_1.set(LegUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegUnitOfMeasure_39.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
    LegUnitOfMeasureQty_39.setString("17726514");
    noLegs_0_1.set(LegUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegUnitOfMeasureQty_39.getString());
    all_values.push_back(InstrumentLeg_39);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
      FIX::LegSecurityAltID LegSecurityAltID_67("STRING_210412407");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_67);
      LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltID_67.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_67("STRING_1361240090");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_67);
      LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltIDSource_67.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
      FIX::LegSecurityAltID LegSecurityAltID_68("STRING_148227552");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_68);
      LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltID_68.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_68("STRING_1232388858");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_68);
      LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltIDSource_68.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    FIX::EncodedLegIssuer EncodedLegIssuer_40("DATA_232228565");
    noLegs_0_2.set(EncodedLegIssuer_40);
    InstrumentLeg_40.insert(EncodedLegIssuer_40.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_40(1260059864);
    noLegs_0_2.set(EncodedLegIssuerLen_40);
    InstrumentLeg_40.insert(EncodedLegIssuerLen_40.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_40("DATA_1886501103");
    noLegs_0_2.set(EncodedLegSecurityDesc_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDesc_40.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_40(553787329);
    noLegs_0_2.set(EncodedLegSecurityDescLen_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDescLen_40.getString());
    FIX::LegCFICode LegCFICode_40("STRING_240434679");
    noLegs_0_2.set(LegCFICode_40);
    InstrumentLeg_40.insert(LegCFICode_40.getString());
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("6584513");
    noLegs_0_2.set(LegContractMultiplier_40);
    InstrumentLeg_40.insert(LegContractMultiplier_40.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_40(298111445);
    noLegs_0_2.set(LegContractMultiplierUnit_40);
    InstrumentLeg_40.insert(LegContractMultiplierUnit_40.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_40("MONTHYEAR_522894797");
    noLegs_0_2.set(LegContractSettlMonth_40);
    InstrumentLeg_40.insert(LegContractSettlMonth_40.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_40("COUNTRY_621125522");
    noLegs_0_2.set(LegCountryOfIssue_40);
    InstrumentLeg_40.insert(LegCountryOfIssue_40.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_40("LOCALMKTDATE_1687300035");
    noLegs_0_2.set(LegCouponPaymentDate_40);
    InstrumentLeg_40.insert(LegCouponPaymentDate_40.getString());
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("27.390000");
    noLegs_0_2.set(LegCouponRate_40);
    InstrumentLeg_40.insert(LegCouponRate_40.getString());
    FIX::LegCreditRating LegCreditRating_40("STRING_95438594");
    noLegs_0_2.set(LegCreditRating_40);
    InstrumentLeg_40.insert(LegCreditRating_40.getString());
    FIX::LegCurrency LegCurrency_40("GBP");
    noLegs_0_2.set(LegCurrency_40);
    InstrumentLeg_40.insert(LegCurrency_40.getString());
    FIX::LegDatedDate LegDatedDate_40("LOCALMKTDATE_362552287");
    noLegs_0_2.set(LegDatedDate_40);
    InstrumentLeg_40.insert(LegDatedDate_40.getString());
    FIX::LegExerciseStyle LegExerciseStyle_40(506208822);
    noLegs_0_2.set(LegExerciseStyle_40);
    InstrumentLeg_40.insert(LegExerciseStyle_40.getString());
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("12604655");
    noLegs_0_2.set(LegFactor_40);
    InstrumentLeg_40.insert(LegFactor_40.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_40(919466725);
    noLegs_0_2.set(LegFlowScheduleType_40);
    InstrumentLeg_40.insert(LegFlowScheduleType_40.getString());
    FIX::LegInstrRegistry LegInstrRegistry_40("STRING_1612862335");
    noLegs_0_2.set(LegInstrRegistry_40);
    InstrumentLeg_40.insert(LegInstrRegistry_40.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_40("LOCALMKTDATE_2014381304");
    noLegs_0_2.set(LegInterestAccrualDate_40);
    InstrumentLeg_40.insert(LegInterestAccrualDate_40.getString());
    FIX::LegIssueDate LegIssueDate_40("LOCALMKTDATE_1373736428");
    noLegs_0_2.set(LegIssueDate_40);
    InstrumentLeg_40.insert(LegIssueDate_40.getString());
    FIX::LegIssuer LegIssuer_40("STRING_548704353");
    noLegs_0_2.set(LegIssuer_40);
    InstrumentLeg_40.insert(LegIssuer_40.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_40("STRING_209325209");
    noLegs_0_2.set(LegLocaleOfIssue_40);
    InstrumentLeg_40.insert(LegLocaleOfIssue_40.getString());
    FIX::LegMaturityDate LegMaturityDate_40("LOCALMKTDATE_231813262");
    noLegs_0_2.set(LegMaturityDate_40);
    InstrumentLeg_40.insert(LegMaturityDate_40.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_40("MONTHYEAR_1034726042");
    noLegs_0_2.set(LegMaturityMonthYear_40);
    InstrumentLeg_40.insert(LegMaturityMonthYear_40.getString());
    FIX::LegMaturityTime LegMaturityTime_40("TZTIMEONLY_1981976638");
    noLegs_0_2.set(LegMaturityTime_40);
    InstrumentLeg_40.insert(LegMaturityTime_40.getString());
    FIX::LegOptAttribute LegOptAttribute_40('1');
    noLegs_0_2.set(LegOptAttribute_40);
    InstrumentLeg_40.insert(LegOptAttribute_40.getString());
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("12451384");
    noLegs_0_2.set(LegOptionRatio_40);
    InstrumentLeg_40.insert(LegOptionRatio_40.getString());
    FIX::LegPool LegPool_40("STRING_1195733080");
    noLegs_0_2.set(LegPool_40);
    InstrumentLeg_40.insert(LegPool_40.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_40("STRING_1954167875");
    noLegs_0_2.set(LegPriceUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasure_40.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("3300436");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasureQty_40.getString());
    FIX::LegProduct LegProduct_40(1427961645);
    noLegs_0_2.set(LegProduct_40);
    InstrumentLeg_40.insert(LegProduct_40.getString());
    FIX::LegPutOrCall LegPutOrCall_40(1066744091);
    noLegs_0_2.set(LegPutOrCall_40);
    InstrumentLeg_40.insert(LegPutOrCall_40.getString());
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("690611");
    noLegs_0_2.set(LegRatioQty_40);
    InstrumentLeg_40.insert(LegRatioQty_40.getString());
    FIX::LegRedemptionDate LegRedemptionDate_40("LOCALMKTDATE_1981748975");
    noLegs_0_2.set(LegRedemptionDate_40);
    InstrumentLeg_40.insert(LegRedemptionDate_40.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_40("STRING_1307178771");
    noLegs_0_2.set(LegRepoCollateralSecurityType_40);
    InstrumentLeg_40.insert(LegRepoCollateralSecurityType_40.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("24.170000");
    noLegs_0_2.set(LegRepurchaseRate_40);
    InstrumentLeg_40.insert(LegRepurchaseRate_40.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_40(132376772);
    noLegs_0_2.set(LegRepurchaseTerm_40);
    InstrumentLeg_40.insert(LegRepurchaseTerm_40.getString());
    FIX::LegSecurityDesc LegSecurityDesc_40("STRING_1830073568");
    noLegs_0_2.set(LegSecurityDesc_40);
    InstrumentLeg_40.insert(LegSecurityDesc_40.getString());
    FIX::LegSecurityExchange LegSecurityExchange_40("EXCHANGE_1348637939");
    noLegs_0_2.set(LegSecurityExchange_40);
    InstrumentLeg_40.insert(LegSecurityExchange_40.getString());
    FIX::LegSecurityID LegSecurityID_40("STRING_1819676808");
    noLegs_0_2.set(LegSecurityID_40);
    InstrumentLeg_40.insert(LegSecurityID_40.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_40("STRING_213992659");
    noLegs_0_2.set(LegSecurityIDSource_40);
    InstrumentLeg_40.insert(LegSecurityIDSource_40.getString());
    FIX::LegSecuritySubType LegSecuritySubType_40("STRING_1444076533");
    noLegs_0_2.set(LegSecuritySubType_40);
    InstrumentLeg_40.insert(LegSecuritySubType_40.getString());
    FIX::LegSecurityType LegSecurityType_40("STRING_1058381466");
    noLegs_0_2.set(LegSecurityType_40);
    InstrumentLeg_40.insert(LegSecurityType_40.getString());
    FIX::LegSide LegSide_40('5');
    noLegs_0_2.set(LegSide_40);
    InstrumentLeg_40.insert(LegSide_40.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_40("STRING_1806628820");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_40);
    InstrumentLeg_40.insert(LegStateOrProvinceOfIssue_40.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_40("GBP");
    noLegs_0_2.set(LegStrikeCurrency_40);
    InstrumentLeg_40.insert(LegStrikeCurrency_40.getString());
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("5786118");
    noLegs_0_2.set(LegStrikePrice_40);
    InstrumentLeg_40.insert(LegStrikePrice_40.getString());
    FIX::LegSymbol LegSymbol_40("STRING_1029968975");
    noLegs_0_2.set(LegSymbol_40);
    InstrumentLeg_40.insert(LegSymbol_40.getString());
    FIX::LegSymbolSfx LegSymbolSfx_40("STRING_1680961412");
    noLegs_0_2.set(LegSymbolSfx_40);
    InstrumentLeg_40.insert(LegSymbolSfx_40.getString());
    FIX::LegTimeUnit LegTimeUnit_40("STRING_1952348325");
    noLegs_0_2.set(LegTimeUnit_40);
    InstrumentLeg_40.insert(LegTimeUnit_40.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_40("STRING_1578673328");
    noLegs_0_2.set(LegUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegUnitOfMeasure_40.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("18902866");
    noLegs_0_2.set(LegUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegUnitOfMeasureQty_40.getString());
    all_values.push_back(InstrumentLeg_40);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
      FIX::LegSecurityAltID LegSecurityAltID_69("STRING_465915722");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_69);
      LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltID_69.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_69("STRING_1724779611");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_69);
      LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltIDSource_69.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
      FIX::LegSecurityAltID LegSecurityAltID_70("STRING_1842618262");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_70);
      LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltID_70.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_70("STRING_1711054172");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_70);
      LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltIDSource_70.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
      FIX::LegSecurityAltID LegSecurityAltID_71("STRING_773029043");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_71);
      LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltID_71.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_71("STRING_1649302489");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_71);
      LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltIDSource_71.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_23;
  FIX::AttachmentPoint AttachmentPoint_23;
  AttachmentPoint_23.setString("78.310000");
  msg.set(AttachmentPoint_23);
  Instrument_23.insert(AttachmentPoint_23.getString());
  FIX::CFICode CFICode_23("STRING_53507041");
  msg.set(CFICode_23);
  Instrument_23.insert(CFICode_23.getString());
  FIX::CPProgram CPProgram_23(99);
  msg.set(CPProgram_23);
  Instrument_23.insert(CPProgram_23.getString());
  FIX::CPRegType CPRegType_23("STRING_2110158946");
  msg.set(CPRegType_23);
  Instrument_23.insert(CPRegType_23.getString());
  FIX::CapPrice CapPrice_23;
  CapPrice_23.setString("20352560");
  msg.set(CapPrice_23);
  Instrument_23.insert(CapPrice_23.getString());
  FIX::ContractMultiplier ContractMultiplier_23;
  ContractMultiplier_23.setString("18757417");
  msg.set(ContractMultiplier_23);
  Instrument_23.insert(ContractMultiplier_23.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_23(2);
  msg.set(ContractMultiplierUnit_23);
  Instrument_23.insert(ContractMultiplierUnit_23.getString());
  FIX::ContractSettlMonth ContractSettlMonth_23("MONTHYEAR_20149140");
  msg.set(ContractSettlMonth_23);
  Instrument_23.insert(ContractSettlMonth_23.getString());
  FIX::CountryOfIssue CountryOfIssue_23("COUNTRY_1558331624");
  msg.set(CountryOfIssue_23);
  Instrument_23.insert(CountryOfIssue_23.getString());
  FIX::CouponPaymentDate CouponPaymentDate_23("LOCALMKTDATE_2038825654");
  msg.set(CouponPaymentDate_23);
  Instrument_23.insert(CouponPaymentDate_23.getString());
  FIX::CouponRate CouponRate_23;
  CouponRate_23.setString("59.480000");
  msg.set(CouponRate_23);
  Instrument_23.insert(CouponRate_23.getString());
  FIX::CreditRating CreditRating_23("STRING_1772324283");
  msg.set(CreditRating_23);
  Instrument_23.insert(CreditRating_23.getString());
  FIX::DatedDate DatedDate_23("LOCALMKTDATE_1335418539");
  msg.set(DatedDate_23);
  Instrument_23.insert(DatedDate_23.getString());
  FIX::DetachmentPoint DetachmentPoint_23;
  DetachmentPoint_23.setString("37.660000");
  msg.set(DetachmentPoint_23);
  Instrument_23.insert(DetachmentPoint_23.getString());
  FIX::EncodedIssuer EncodedIssuer_23("DATA_178438799");
  msg.set(EncodedIssuer_23);
  Instrument_23.insert(EncodedIssuer_23.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_23(994563711);
  msg.set(EncodedIssuerLen_23);
  Instrument_23.insert(EncodedIssuerLen_23.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_23("DATA_167830407");
  msg.set(EncodedSecurityDesc_23);
  Instrument_23.insert(EncodedSecurityDesc_23.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_23(1992502555);
  msg.set(EncodedSecurityDescLen_23);
  Instrument_23.insert(EncodedSecurityDescLen_23.getString());
  FIX::ExerciseStyle ExerciseStyle_23(1);
  msg.set(ExerciseStyle_23);
  Instrument_23.insert(ExerciseStyle_23.getString());
  FIX::Factor Factor_23;
  Factor_23.setString("11977993");
  msg.set(Factor_23);
  Instrument_23.insert(Factor_23.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_23(true);
  msg.set(FlexProductEligibilityIndicator_23);
  Instrument_23.insert(FlexProductEligibilityIndicator_23.getString());
  FIX::FlexibleIndicator FlexibleIndicator_23(false);
  msg.set(FlexibleIndicator_23);
  Instrument_23.insert(FlexibleIndicator_23.getString());
  FIX::FloorPrice FloorPrice_23;
  FloorPrice_23.setString("6289890");
  msg.set(FloorPrice_23);
  Instrument_23.insert(FloorPrice_23.getString());
  FIX::FlowScheduleType FlowScheduleType_23(3);
  msg.set(FlowScheduleType_23);
  Instrument_23.insert(FlowScheduleType_23.getString());
  FIX::InstrRegistry InstrRegistry_23("STRING_1414718224");
  msg.set(InstrRegistry_23);
  Instrument_23.insert(InstrRegistry_23.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_23('1');
  msg.set(InstrmtAssignmentMethod_23);
  Instrument_23.insert(InstrmtAssignmentMethod_23.getString());
  FIX::InterestAccrualDate InterestAccrualDate_23("LOCALMKTDATE_846079257");
  msg.set(InterestAccrualDate_23);
  Instrument_23.insert(InterestAccrualDate_23.getString());
  FIX::IssueDate IssueDate_23("LOCALMKTDATE_1109852838");
  msg.set(IssueDate_23);
  Instrument_23.insert(IssueDate_23.getString());
  FIX::Issuer Issuer_23("STRING_658475309");
  msg.set(Issuer_23);
  Instrument_23.insert(Issuer_23.getString());
  FIX::ListMethod ListMethod_23(0);
  msg.set(ListMethod_23);
  Instrument_23.insert(ListMethod_23.getString());
  FIX::LocaleOfIssue LocaleOfIssue_23("STRING_611671680");
  msg.set(LocaleOfIssue_23);
  Instrument_23.insert(LocaleOfIssue_23.getString());
  FIX::MaturityDate MaturityDate_23("LOCALMKTDATE_552089493");
  msg.set(MaturityDate_23);
  Instrument_23.insert(MaturityDate_23.getString());
  FIX::MaturityMonthYear MaturityMonthYear_23("MONTHYEAR_1672615341");
  msg.set(MaturityMonthYear_23);
  Instrument_23.insert(MaturityMonthYear_23.getString());
  FIX::MaturityTime MaturityTime_23("TZTIMEONLY_1180234613");
  msg.set(MaturityTime_23);
  Instrument_23.insert(MaturityTime_23.getString());
  FIX::MinPriceIncrement MinPriceIncrement_23;
  MinPriceIncrement_23.setString("5147647");
  msg.set(MinPriceIncrement_23);
  Instrument_23.insert(MinPriceIncrement_23.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
  MinPriceIncrementAmount_23.setString("15603877");
  msg.set(MinPriceIncrementAmount_23);
  Instrument_23.insert(MinPriceIncrementAmount_23.getString());
  FIX::NTPositionLimit NTPositionLimit_23(908492669);
  msg.set(NTPositionLimit_23);
  Instrument_23.insert(NTPositionLimit_23.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
  NotionalPercentageOutstanding_23.setString("25.070000");
  msg.set(NotionalPercentageOutstanding_23);
  Instrument_23.insert(NotionalPercentageOutstanding_23.getString());
  FIX::OptAttribute OptAttribute_23('1');
  msg.set(OptAttribute_23);
  Instrument_23.insert(OptAttribute_23.getString());
  FIX::OptPayoutAmount OptPayoutAmount_23;
  OptPayoutAmount_23.setString("3193406");
  msg.set(OptPayoutAmount_23);
  Instrument_23.insert(OptPayoutAmount_23.getString());
  FIX::OptPayoutType OptPayoutType_23(2);
  msg.set(OptPayoutType_23);
  Instrument_23.insert(OptPayoutType_23.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
  OriginalNotionalPercentageOutstanding_23.setString("91.500000");
  msg.set(OriginalNotionalPercentageOutstanding_23);
  Instrument_23.insert(OriginalNotionalPercentageOutstanding_23.getString());
  FIX::Pool Pool_23("STRING_2091664928");
  msg.set(Pool_23);
  Instrument_23.insert(Pool_23.getString());
  FIX::PositionLimit PositionLimit_23(284229405);
  msg.set(PositionLimit_23);
  Instrument_23.insert(PositionLimit_23.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_23("STRING_INX");
  msg.set(PriceQuoteMethod_23);
  Instrument_23.insert(PriceQuoteMethod_23.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_23("STRING_122620079");
  msg.set(PriceUnitOfMeasure_23);
  Instrument_23.insert(PriceUnitOfMeasure_23.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
  PriceUnitOfMeasureQty_23.setString("12787931");
  msg.set(PriceUnitOfMeasureQty_23);
  Instrument_23.insert(PriceUnitOfMeasureQty_23.getString());
  FIX::Product Product_25(5);
  msg.set(Product_25);
  Instrument_23.insert(Product_25.getString());
  FIX::ProductComplex ProductComplex_23("STRING_2115122635");
  msg.set(ProductComplex_23);
  Instrument_23.insert(ProductComplex_23.getString());
  FIX::PutOrCall PutOrCall_23(1);
  msg.set(PutOrCall_23);
  Instrument_23.insert(PutOrCall_23.getString());
  FIX::RedemptionDate RedemptionDate_23("LOCALMKTDATE_1241749058");
  msg.set(RedemptionDate_23);
  Instrument_23.insert(RedemptionDate_23.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_23("STRING_1493619307");
  msg.set(RepoCollateralSecurityType_23);
  Instrument_23.insert(RepoCollateralSecurityType_23.getString());
  FIX::RepurchaseRate RepurchaseRate_23;
  RepurchaseRate_23.setString("53.620000");
  msg.set(RepurchaseRate_23);
  Instrument_23.insert(RepurchaseRate_23.getString());
  FIX::RepurchaseTerm RepurchaseTerm_23(1870738121);
  msg.set(RepurchaseTerm_23);
  Instrument_23.insert(RepurchaseTerm_23.getString());
  FIX::RestructuringType RestructuringType_23("STRING_FR");
  msg.set(RestructuringType_23);
  Instrument_23.insert(RestructuringType_23.getString());
  FIX::SecurityDesc SecurityDesc_23("STRING_1349759939");
  msg.set(SecurityDesc_23);
  Instrument_23.insert(SecurityDesc_23.getString());
  FIX::SecurityExchange SecurityExchange_23("EXCHANGE_818159259");
  msg.set(SecurityExchange_23);
  Instrument_23.insert(SecurityExchange_23.getString());
  FIX::SecurityGroup SecurityGroup_23("STRING_1460998209");
  msg.set(SecurityGroup_23);
  Instrument_23.insert(SecurityGroup_23.getString());
  FIX::SecurityID SecurityID_23("STRING_312129129");
  msg.set(SecurityID_23);
  Instrument_23.insert(SecurityID_23.getString());
  FIX::SecurityIDSource SecurityIDSource_23("STRING_3");
  msg.set(SecurityIDSource_23);
  Instrument_23.insert(SecurityIDSource_23.getString());
  FIX::SecurityStatus SecurityStatus_23("STRING_1");
  msg.set(SecurityStatus_23);
  Instrument_23.insert(SecurityStatus_23.getString());
  FIX::SecuritySubType SecuritySubType_24("STRING_923800809");
  msg.set(SecuritySubType_24);
  Instrument_23.insert(SecuritySubType_24.getString());
  FIX::SecurityType SecurityType_25("STRING_COFO");
  msg.set(SecurityType_25);
  Instrument_23.insert(SecurityType_25.getString());
  FIX::Seniority Seniority_23("STRING_SB");
  msg.set(Seniority_23);
  Instrument_23.insert(Seniority_23.getString());
  FIX::SettlMethod SettlMethod_23('C');
  msg.set(SettlMethod_23);
  Instrument_23.insert(SettlMethod_23.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_23("STRING_396005205");
  msg.set(SettleOnOpenFlag_23);
  Instrument_23.insert(SettleOnOpenFlag_23.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_23("STRING_2018142265");
  msg.set(StateOrProvinceOfIssue_23);
  Instrument_23.insert(StateOrProvinceOfIssue_23.getString());
  FIX::StrikeCurrency StrikeCurrency_23("GBP");
  msg.set(StrikeCurrency_23);
  Instrument_23.insert(StrikeCurrency_23.getString());
  FIX::StrikeMultiplier StrikeMultiplier_23;
  StrikeMultiplier_23.setString("14511954");
  msg.set(StrikeMultiplier_23);
  Instrument_23.insert(StrikeMultiplier_23.getString());
  FIX::StrikePrice StrikePrice_23;
  StrikePrice_23.setString("11843850");
  msg.set(StrikePrice_23);
  Instrument_23.insert(StrikePrice_23.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_23(3);
  msg.set(StrikePriceBoundaryMethod_23);
  Instrument_23.insert(StrikePriceBoundaryMethod_23.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
  StrikePriceBoundaryPrecision_23.setString("9.690000");
  msg.set(StrikePriceBoundaryPrecision_23);
  Instrument_23.insert(StrikePriceBoundaryPrecision_23.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_23(2);
  msg.set(StrikePriceDeterminationMethod_23);
  Instrument_23.insert(StrikePriceDeterminationMethod_23.getString());
  FIX::StrikeValue StrikeValue_23;
  StrikeValue_23.setString("8339979");
  msg.set(StrikeValue_23);
  Instrument_23.insert(StrikeValue_23.getString());
  FIX::Symbol Symbol_23("STRING_452710238");
  msg.set(Symbol_23);
  Instrument_23.insert(Symbol_23.getString());
  FIX::SymbolSfx SymbolSfx_23("STRING_CD");
  msg.set(SymbolSfx_23);
  Instrument_23.insert(SymbolSfx_23.getString());
  FIX::TimeUnit TimeUnit_23("STRING_Yr");
  msg.set(TimeUnit_23);
  Instrument_23.insert(TimeUnit_23.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_23(3);
  msg.set(UnderlyingPriceDeterminationMethod_23);
  Instrument_23.insert(UnderlyingPriceDeterminationMethod_23.getString());
  FIX::UnitOfMeasure UnitOfMeasure_23("STRING_t");
  msg.set(UnitOfMeasure_23);
  Instrument_23.insert(UnitOfMeasure_23.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
  UnitOfMeasureQty_23.setString("6697925");
  msg.set(UnitOfMeasureQty_23);
  Instrument_23.insert(UnitOfMeasureQty_23.getString());
  FIX::ValuationMethod ValuationMethod_23("STRING_CDS");
  msg.set(ValuationMethod_23);
  Instrument_23.insert(ValuationMethod_23.getString());
  all_values.push_back(Instrument_23);

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
    ComplexEventPrice_46.setString("14616634");
    noComplexEvents_0_0.set(ComplexEventPrice_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPrice_46.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_46(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryMethod_46.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
    ComplexEventPriceBoundaryPrecision_46.setString("41.810000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryPrecision_46.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_46(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceTimeType_46.getString());
    FIX::ComplexEventType ComplexEventType_46(2);
    noComplexEvents_0_0.set(ComplexEventType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventType_46.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
    ComplexOptPayoutAmount_46.setString("1192396");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexOptPayoutAmount_46.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_46);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_98;
      FIX::ComplexEventEndDate ComplexEventEndDate_98(FIX::UTCTIMESTAMP(16, 39, 26, 3, 12001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventEndDate_98.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_98(FIX::UTCTIMESTAMP(12, 42, 31, 18, 122006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventStartDate_98.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_98);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
        FIX::ComplexEventEndTime ComplexEventEndTime_200(FIX::UTCTIMEONLY(20, 31, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_200);
        ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventEndTime_200.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_200(FIX::UTCTIMEONLY(7, 41, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_200);
        ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventStartTime_200.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
        FIX::ComplexEventEndTime ComplexEventEndTime_201(FIX::UTCTIMEONLY(20, 9, 35));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_201);
        ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventEndTime_201.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_201(FIX::UTCTIMEONLY(6, 18, 3));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_201);
        ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventStartTime_201.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
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
    ComplexEventPrice_47.setString("6378174");
    noComplexEvents_0_1.set(ComplexEventPrice_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPrice_47.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_47(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryMethod_47.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
    ComplexEventPriceBoundaryPrecision_47.setString("70.380000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryPrecision_47.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_47(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceTimeType_47.getString());
    FIX::ComplexEventType ComplexEventType_47(4);
    noComplexEvents_0_1.set(ComplexEventType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventType_47.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
    ComplexOptPayoutAmount_47.setString("10651540");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexOptPayoutAmount_47.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_47);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_99;
      FIX::ComplexEventEndDate ComplexEventEndDate_99(FIX::UTCTIMESTAMP(7, 15, 58, 27, 42014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventEndDate_99.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_99(FIX::UTCTIMESTAMP(4, 2, 37, 16, 102007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventStartDate_99.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_99);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
        FIX::ComplexEventEndTime ComplexEventEndTime_202(FIX::UTCTIMEONLY(7, 40, 43));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_202);
        ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventEndTime_202.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_202(FIX::UTCTIMEONLY(14, 53, 20));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_202);
        ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventStartTime_202.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
        FIX::ComplexEventEndTime ComplexEventEndTime_203(FIX::UTCTIMEONLY(8, 47, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_203);
        ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventEndTime_203.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_203(FIX::UTCTIMEONLY(14, 58, 31));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_203);
        ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventStartTime_203.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
        FIX::ComplexEventEndTime ComplexEventEndTime_204(FIX::UTCTIMEONLY(18, 46, 8));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_204);
        ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventEndTime_204.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_204(FIX::UTCTIMEONLY(18, 39, 18));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_204);
        ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventStartTime_204.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_100;
      FIX::ComplexEventEndDate ComplexEventEndDate_100(FIX::UTCTIMESTAMP(17, 47, 10, 6, 112016));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_100);
      ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventEndDate_100.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_100(FIX::UTCTIMESTAMP(5, 12, 53, 6, 32004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_100);
      ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventStartDate_100.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_100);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
        FIX::ComplexEventEndTime ComplexEventEndTime_205(FIX::UTCTIMEONLY(11, 25, 14));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_205);
        ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventEndTime_205.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_205(FIX::UTCTIMEONLY(15, 12, 36));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_205);
        ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventStartTime_205.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
        FIX::ComplexEventEndTime ComplexEventEndTime_206(FIX::UTCTIMEONLY(10, 15, 22));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_206);
        ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventEndTime_206.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_206(FIX::UTCTIMEONLY(21, 53, 53));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_206);
        ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventStartTime_206.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
        FIX::ComplexEventEndTime ComplexEventEndTime_207(FIX::UTCTIMEONLY(10, 41, 17));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_207);
        ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventEndTime_207.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_207(FIX::UTCTIMEONLY(19, 49, 31));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_207);
        ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventStartTime_207.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_48;
    FIX::ComplexEventCondition ComplexEventCondition_48(2);
    noComplexEvents_0_2.set(ComplexEventCondition_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventCondition_48.getString());
    FIX::ComplexEventPrice ComplexEventPrice_48;
    ComplexEventPrice_48.setString("18799703");
    noComplexEvents_0_2.set(ComplexEventPrice_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPrice_48.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_48(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryMethod_48.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
    ComplexEventPriceBoundaryPrecision_48.setString("87.470000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryPrecision_48.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_48(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceTimeType_48.getString());
    FIX::ComplexEventType ComplexEventType_48(9);
    noComplexEvents_0_2.set(ComplexEventType_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventType_48.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
    ComplexOptPayoutAmount_48.setString("13151205");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexOptPayoutAmount_48.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_48);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_101;
      FIX::ComplexEventEndDate ComplexEventEndDate_101(FIX::UTCTIMESTAMP(10, 43, 43, 1, 92013));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_101);
      ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventEndDate_101.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_101(FIX::UTCTIMESTAMP(6, 34, 34, 26, 122015));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_101);
      ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventStartDate_101.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_101);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
        FIX::ComplexEventEndTime ComplexEventEndTime_208(FIX::UTCTIMEONLY(6, 56, 7));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_208);
        ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventEndTime_208.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_208(FIX::UTCTIMEONLY(20, 57, 54));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_208);
        ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventStartTime_208.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_102;
      FIX::ComplexEventEndDate ComplexEventEndDate_102(FIX::UTCTIMESTAMP(3, 10, 8, 23, 52015));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_102);
      ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventEndDate_102.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_102(FIX::UTCTIMESTAMP(10, 55, 56, 25, 52014));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_102);
      ComplexEventDates_NoComplexEventDates_102.insert(ComplexEventStartDate_102.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_102);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
        FIX::ComplexEventEndTime ComplexEventEndTime_209(FIX::UTCTIMEONLY(7, 55, 38));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventEndTime_209.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_209(FIX::UTCTIMEONLY(10, 57, 8));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventStartTime_209.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
        FIX::ComplexEventEndTime ComplexEventEndTime_210(FIX::UTCTIMEONLY(15, 57, 4));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventEndTime_210.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_210(FIX::UTCTIMEONLY(17, 53, 52));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventStartTime_210.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
        FIX::ComplexEventEndTime ComplexEventEndTime_211(FIX::UTCTIMEONLY(12, 54, 26));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventEndTime_211.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_211(FIX::UTCTIMEONLY(11, 11, 41));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventStartTime_211.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_103;
      FIX::ComplexEventEndDate ComplexEventEndDate_103(FIX::UTCTIMESTAMP(10, 29, 34, 2, 32004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_103);
      ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventEndDate_103.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_103(FIX::UTCTIMESTAMP(21, 33, 24, 6, 92008));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_103);
      ComplexEventDates_NoComplexEventDates_103.insert(ComplexEventStartDate_103.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_103);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
        FIX::ComplexEventEndTime ComplexEventEndTime_212(FIX::UTCTIMEONLY(17, 43, 57));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_212);
        ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventEndTime_212.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_212(FIX::UTCTIMEONLY(0, 51, 56));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_212);
        ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventStartTime_212.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
        FIX::ComplexEventEndTime ComplexEventEndTime_213(FIX::UTCTIMEONLY(15, 51, 36));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_213);
        ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventEndTime_213.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_213(FIX::UTCTIMEONLY(18, 39, 28));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_213);
        ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventStartTime_213.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_52;
    FIX::EventDate EventDate_52("LOCALMKTDATE_1287975157");
    noEvents_0_0.set(EventDate_52);
    EvntGrp_NoEvents_52.insert(EventDate_52.getString());
    FIX::EventPx EventPx_52;
    EventPx_52.setString("17250554");
    noEvents_0_0.set(EventPx_52);
    EvntGrp_NoEvents_52.insert(EventPx_52.getString());
    FIX::EventText EventText_52("STRING_1707154473");
    noEvents_0_0.set(EventText_52);
    EvntGrp_NoEvents_52.insert(EventText_52.getString());
    FIX::EventTime EventTime_52(FIX::UTCTIMESTAMP(4, 19, 6, 1, 102011));
    noEvents_0_0.set(EventTime_52);
    EvntGrp_NoEvents_52.insert(EventTime_52.getString());
    FIX::EventType EventType_52(8);
    noEvents_0_0.set(EventType_52);
    EvntGrp_NoEvents_52.insert(EventType_52.getString());
    all_values.push_back(EvntGrp_NoEvents_52);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_53;
    FIX::EventDate EventDate_53("LOCALMKTDATE_2093028161");
    noEvents_0_1.set(EventDate_53);
    EvntGrp_NoEvents_53.insert(EventDate_53.getString());
    FIX::EventPx EventPx_53;
    EventPx_53.setString("910631");
    noEvents_0_1.set(EventPx_53);
    EvntGrp_NoEvents_53.insert(EventPx_53.getString());
    FIX::EventText EventText_53("STRING_773288465");
    noEvents_0_1.set(EventText_53);
    EvntGrp_NoEvents_53.insert(EventText_53.getString());
    FIX::EventTime EventTime_53(FIX::UTCTIMESTAMP(2, 49, 23, 10, 62000));
    noEvents_0_1.set(EventTime_53);
    EvntGrp_NoEvents_53.insert(EventTime_53.getString());
    FIX::EventType EventType_53(8);
    noEvents_0_1.set(EventType_53);
    EvntGrp_NoEvents_53.insert(EventType_53.getString());
    all_values.push_back(EvntGrp_NoEvents_53);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_43;
    FIX::InstrumentPartyID InstrumentPartyID_43("STRING_2085128554");
    noInstrumentParties_0_0.set(InstrumentPartyID_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyID_43.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_43('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyIDSource_43.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_43(1973600308);
    noInstrumentParties_0_0.set(InstrumentPartyRole_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyRole_43.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_43);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
      FIX::InstrumentPartySubID InstrumentPartySubID_86("STRING_1621864612");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_86);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubID_86.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_86(2013633608);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_86);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubIDType_86.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
      FIX::InstrumentPartySubID InstrumentPartySubID_87("STRING_95916754");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_87);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubID_87.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_87(1220083251);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_87);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubIDType_87.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_44;
    FIX::InstrumentPartyID InstrumentPartyID_44("STRING_1154125117");
    noInstrumentParties_0_1.set(InstrumentPartyID_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyID_44.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_44('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyIDSource_44.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_44(779754076);
    noInstrumentParties_0_1.set(InstrumentPartyRole_44);
    InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyRole_44.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_44);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
      FIX::InstrumentPartySubID InstrumentPartySubID_88("STRING_1944531996");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_88);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubID_88.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_88(752472327);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_88);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubIDType_88.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
      FIX::InstrumentPartySubID InstrumentPartySubID_89("STRING_1847623136");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_89);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubID_89.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_89(794232677);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_89);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubIDType_89.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionAcknowledgement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_50;
    FIX::SecurityAltID SecurityAltID_50("STRING_1137129071");
    noSecurityAltID_0_0.set(SecurityAltID_50);
    SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltID_50.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_50("STRING_446714196");
    noSecurityAltID_0_0.set(SecurityAltIDSource_50);
    SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltIDSource_50.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_46;
  FIX::SecurityXML SecurityXML_47("XMLDATA_1078010205");
  msg.set(SecurityXML_47);
  FIX::SecurityXMLLen SecurityXMLLen_23(1228192240);
  msg.set(SecurityXMLLen_23);
  FIX::SecurityXMLSchema SecurityXMLSchema_23("STRING_1220002661");
  msg.set(SecurityXMLSchema_23);
  SecurityXML_46.insert(SecurityXMLSchema_23.getString());
  all_values.push_back(SecurityXML_46);

  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("14058219");
  msg.set(CashOrderQty_6);
  OrderQtyData_6.insert(CashOrderQty_6.getString());
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("67.060000");
  msg.set(OrderPercent_6);
  OrderQtyData_6.insert(OrderPercent_6.getString());
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("11439422");
  msg.set(OrderQty_15);
  OrderQtyData_6.insert(OrderQty_15.getString());
  FIX::RoundingDirection RoundingDirection_6('0');
  msg.set(RoundingDirection_6);
  OrderQtyData_6.insert(RoundingDirection_6.getString());
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("21276969");
  msg.set(RoundingModulus_6);
  OrderQtyData_6.insert(RoundingModulus_6.getString());
  all_values.push_back(OrderQtyData_6);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_32;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_32("DATA_1126616973");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuer_32.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_32(1975139756);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuerLen_32.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_32("DATA_1512857088");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDesc_32.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_32(1064261879);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDescLen_32.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
    UnderlyingAdjustedQuantity_32.setString("8828223");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_32);
    UnderlyingInstrument_32.insert(UnderlyingAdjustedQuantity_32.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
    UnderlyingAllocationPercent_32.setString("37.480000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_32);
    UnderlyingInstrument_32.insert(UnderlyingAllocationPercent_32.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
    UnderlyingAttachmentPoint_32.setString("11.530000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingAttachmentPoint_32.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_32("STRING_357203322");
    noUnderlyings_0_0.set(UnderlyingCFICode_32);
    UnderlyingInstrument_32.insert(UnderlyingCFICode_32.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_32("STRING_1205123708");
    noUnderlyings_0_0.set(UnderlyingCPProgram_32);
    UnderlyingInstrument_32.insert(UnderlyingCPProgram_32.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_32("STRING_1701967907");
    noUnderlyings_0_0.set(UnderlyingCPRegType_32);
    UnderlyingInstrument_32.insert(UnderlyingCPRegType_32.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_32;
    UnderlyingCapValue_32.setString("15772865");
    noUnderlyings_0_0.set(UnderlyingCapValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCapValue_32.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
    UnderlyingCashAmount_32.setString("2117651");
    noUnderlyings_0_0.set(UnderlyingCashAmount_32);
    UnderlyingInstrument_32.insert(UnderlyingCashAmount_32.getString());
    FIX::UnderlyingCashType UnderlyingCashType_32("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_32);
    UnderlyingInstrument_32.insert(UnderlyingCashType_32.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
    UnderlyingContractMultiplier_32.setString("2095570");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplier_32.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_32(465129027);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplierUnit_32.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_32("COUNTRY_1172504799");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingCountryOfIssue_32.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_32("LOCALMKTDATE_962029328");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponPaymentDate_32.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
    UnderlyingCouponRate_32.setString("85.150000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponRate_32.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_32("STRING_1966737476");
    noUnderlyings_0_0.set(UnderlyingCreditRating_32);
    UnderlyingInstrument_32.insert(UnderlyingCreditRating_32.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_32("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrency_32.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
    UnderlyingCurrentValue_32.setString("2659680");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrentValue_32.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
    UnderlyingDetachmentPoint_32.setString("15.780000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingDetachmentPoint_32.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
    UnderlyingDirtyPrice_32.setString("3831061");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingDirtyPrice_32.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
    UnderlyingEndPrice_32.setString("14859706");
    noUnderlyings_0_0.set(UnderlyingEndPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingEndPrice_32.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_32;
    UnderlyingEndValue_32.setString("2833599");
    noUnderlyings_0_0.set(UnderlyingEndValue_32);
    UnderlyingInstrument_32.insert(UnderlyingEndValue_32.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_32(1690952885);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_32);
    UnderlyingInstrument_32.insert(UnderlyingExerciseStyle_32.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_32;
    UnderlyingFXRate_32.setString("4824293");
    noUnderlyings_0_0.set(UnderlyingFXRate_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRate_32.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_32('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRateCalc_32.getString());
    FIX::UnderlyingFactor UnderlyingFactor_32;
    UnderlyingFactor_32.setString("16711661");
    noUnderlyings_0_0.set(UnderlyingFactor_32);
    UnderlyingInstrument_32.insert(UnderlyingFactor_32.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_32(905777236);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_32);
    UnderlyingInstrument_32.insert(UnderlyingFlowScheduleType_32.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_32("STRING_1961177822");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_32);
    UnderlyingInstrument_32.insert(UnderlyingInstrRegistry_32.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_32("LOCALMKTDATE_1498822282");
    noUnderlyings_0_0.set(UnderlyingIssueDate_32);
    UnderlyingInstrument_32.insert(UnderlyingIssueDate_32.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_32("STRING_271150676");
    noUnderlyings_0_0.set(UnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(UnderlyingIssuer_32.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_32("STRING_877956054");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingLocaleOfIssue_32.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_32("LOCALMKTDATE_234160992");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityDate_32.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_32("MONTHYEAR_1610124424");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityMonthYear_32.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_32("TZTIMEONLY_336523559");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityTime_32.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
    UnderlyingNotionalPercentageOutstanding_32.setString("43.140000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_32('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_32);
    UnderlyingInstrument_32.insert(UnderlyingOptAttribute_32.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
    UnderlyingOriginalNotionalPercentageOutstanding_32.setString("14.660000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingOriginalNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_32("STRING_21167239");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasure_32.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
    UnderlyingPriceUnitOfMeasureQty_32.setString("8795296");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasureQty_32.getString());
    FIX::UnderlyingProduct UnderlyingProduct_32(1266464269);
    noUnderlyings_0_0.set(UnderlyingProduct_32);
    UnderlyingInstrument_32.insert(UnderlyingProduct_32.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_32(230724240);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_32);
    UnderlyingInstrument_32.insert(UnderlyingPutOrCall_32.getString());
    FIX::UnderlyingPx UnderlyingPx_32;
    UnderlyingPx_32.setString("13446586");
    noUnderlyings_0_0.set(UnderlyingPx_32);
    UnderlyingInstrument_32.insert(UnderlyingPx_32.getString());
    FIX::UnderlyingQty UnderlyingQty_32;
    UnderlyingQty_32.setString("2914854");
    noUnderlyings_0_0.set(UnderlyingQty_32);
    UnderlyingInstrument_32.insert(UnderlyingQty_32.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_32("LOCALMKTDATE_1192753568");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_32);
    UnderlyingInstrument_32.insert(UnderlyingRedemptionDate_32.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_32("STRING_1509927206");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingRepoCollateralSecurityType_32.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
    UnderlyingRepurchaseRate_32.setString("92.480000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseRate_32.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_32(1139764941);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseTerm_32.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_32("STRING_664841144");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_32);
    UnderlyingInstrument_32.insert(UnderlyingRestructuringType_32.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_32("STRING_376707272");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityDesc_32.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_32("EXCHANGE_17302872");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityExchange_32.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_32("STRING_1047947323");
    noUnderlyings_0_0.set(UnderlyingSecurityID_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityID_32.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_32("STRING_1862677957");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityIDSource_32.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_32("STRING_300662774");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecuritySubType_32.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_32("STRING_591416560");
    noUnderlyings_0_0.set(UnderlyingSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityType_32.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_32("STRING_197623609");
    noUnderlyings_0_0.set(UnderlyingSeniority_32);
    UnderlyingInstrument_32.insert(UnderlyingSeniority_32.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_32("STRING_1135223623");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlMethod_32.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_32(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlementType_32.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_32;
    UnderlyingStartValue_32.setString("11034008");
    noUnderlyings_0_0.set(UnderlyingStartValue_32);
    UnderlyingInstrument_32.insert(UnderlyingStartValue_32.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_32("STRING_948917797");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingStateOrProvinceOfIssue_32.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_32("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikeCurrency_32.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
    UnderlyingStrikePrice_32.setString("18268738");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikePrice_32.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_32("STRING_1848082360");
    noUnderlyings_0_0.set(UnderlyingSymbol_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbol_32.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_32("STRING_837192298");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbolSfx_32.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_32("STRING_15913762");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingTimeUnit_32.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_32("STRING_291963026");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasure_32.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
    UnderlyingUnitOfMeasureQty_32.setString("15049567");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasureQty_32.getString());
    all_values.push_back(UnderlyingInstrument_32);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_63("STRING_313130265");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltID_63.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_63("STRING_237002798");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltIDSource_63.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_64("STRING_1173385849");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltID_64.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_64("STRING_543854505");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltIDSource_64.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_65("STRING_1581661488");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltID_65.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_65("STRING_1464871269");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltIDSource_65.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
      FIX::UnderlyingStipType UnderlyingStipType_60("STRING_944105046");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipType_60.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_60("STRING_1575610517");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipValue_60.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
      FIX::UnderlyingStipType UnderlyingStipType_61("STRING_728889367");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_61);
      UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipType_61.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_61("STRING_1608946191");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_61);
      UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipValue_61.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
      FIX::UnderlyingStipType UnderlyingStipType_62("STRING_1952317789");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipType_62.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_62("STRING_746192239");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipValue_62.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_60("STRING_1667512099");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyID_60.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_60('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyIDSource_60.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_60(1100826426);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyRole_60.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_114("STRING_34594988");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubID_114.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_114(1215925512);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubIDType_114.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_115("STRING_821052906");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubID_115.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_115(983512785);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubIDType_115.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_116("STRING_682363232");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubID_116.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_116(48120779);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_116);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116.insert(UnderlyingInstrumentPartySubIDType_116.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_61("STRING_662902989");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyID_61.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_61('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyIDSource_61.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_61(885313077);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyRole_61.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_117("STRING_674924970");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubID_117.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_117(242786212);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_117);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117.insert(UnderlyingInstrumentPartySubIDType_117.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_118("STRING_585738332");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubID_118.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_118(988055235);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubIDType_118.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_62("STRING_479789010");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyID_62.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_62('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyIDSource_62.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_62(1531909740);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyRole_62.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_119("STRING_1076511803");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubID_119.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_119(1121034165);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubIDType_119.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_120("STRING_858071897");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubID_120.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_120(504638672);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubIDType_120.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_33;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_33("DATA_1849923532");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_33);
    UnderlyingInstrument_33.insert(EncodedUnderlyingIssuer_33.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_33(319534440);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_33);
    UnderlyingInstrument_33.insert(EncodedUnderlyingIssuerLen_33.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_33("DATA_309472814");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_33);
    UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDesc_33.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_33(448632123);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_33);
    UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDescLen_33.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
    UnderlyingAdjustedQuantity_33.setString("8289443");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_33);
    UnderlyingInstrument_33.insert(UnderlyingAdjustedQuantity_33.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
    UnderlyingAllocationPercent_33.setString("49.130000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_33);
    UnderlyingInstrument_33.insert(UnderlyingAllocationPercent_33.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
    UnderlyingAttachmentPoint_33.setString("71.360000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_33);
    UnderlyingInstrument_33.insert(UnderlyingAttachmentPoint_33.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_33("STRING_1929770732");
    noUnderlyings_0_1.set(UnderlyingCFICode_33);
    UnderlyingInstrument_33.insert(UnderlyingCFICode_33.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_33("STRING_1694636973");
    noUnderlyings_0_1.set(UnderlyingCPProgram_33);
    UnderlyingInstrument_33.insert(UnderlyingCPProgram_33.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_33("STRING_1530082124");
    noUnderlyings_0_1.set(UnderlyingCPRegType_33);
    UnderlyingInstrument_33.insert(UnderlyingCPRegType_33.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_33;
    UnderlyingCapValue_33.setString("9982125");
    noUnderlyings_0_1.set(UnderlyingCapValue_33);
    UnderlyingInstrument_33.insert(UnderlyingCapValue_33.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
    UnderlyingCashAmount_33.setString("3682062");
    noUnderlyings_0_1.set(UnderlyingCashAmount_33);
    UnderlyingInstrument_33.insert(UnderlyingCashAmount_33.getString());
    FIX::UnderlyingCashType UnderlyingCashType_33("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_33);
    UnderlyingInstrument_33.insert(UnderlyingCashType_33.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
    UnderlyingContractMultiplier_33.setString("16805758");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_33);
    UnderlyingInstrument_33.insert(UnderlyingContractMultiplier_33.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_33(416327011);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_33);
    UnderlyingInstrument_33.insert(UnderlyingContractMultiplierUnit_33.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_33("COUNTRY_1029014251");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_33);
    UnderlyingInstrument_33.insert(UnderlyingCountryOfIssue_33.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_33("LOCALMKTDATE_2063537772");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_33);
    UnderlyingInstrument_33.insert(UnderlyingCouponPaymentDate_33.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
    UnderlyingCouponRate_33.setString("0.880000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_33);
    UnderlyingInstrument_33.insert(UnderlyingCouponRate_33.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_33("STRING_1707831002");
    noUnderlyings_0_1.set(UnderlyingCreditRating_33);
    UnderlyingInstrument_33.insert(UnderlyingCreditRating_33.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_33("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_33);
    UnderlyingInstrument_33.insert(UnderlyingCurrency_33.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
    UnderlyingCurrentValue_33.setString("1460856");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_33);
    UnderlyingInstrument_33.insert(UnderlyingCurrentValue_33.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
    UnderlyingDetachmentPoint_33.setString("43.290000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_33);
    UnderlyingInstrument_33.insert(UnderlyingDetachmentPoint_33.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
    UnderlyingDirtyPrice_33.setString("20242153");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_33);
    UnderlyingInstrument_33.insert(UnderlyingDirtyPrice_33.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
    UnderlyingEndPrice_33.setString("19052098");
    noUnderlyings_0_1.set(UnderlyingEndPrice_33);
    UnderlyingInstrument_33.insert(UnderlyingEndPrice_33.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_33;
    UnderlyingEndValue_33.setString("9634604");
    noUnderlyings_0_1.set(UnderlyingEndValue_33);
    UnderlyingInstrument_33.insert(UnderlyingEndValue_33.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_33(1938182162);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_33);
    UnderlyingInstrument_33.insert(UnderlyingExerciseStyle_33.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_33;
    UnderlyingFXRate_33.setString("8342380");
    noUnderlyings_0_1.set(UnderlyingFXRate_33);
    UnderlyingInstrument_33.insert(UnderlyingFXRate_33.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_33('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_33);
    UnderlyingInstrument_33.insert(UnderlyingFXRateCalc_33.getString());
    FIX::UnderlyingFactor UnderlyingFactor_33;
    UnderlyingFactor_33.setString("6487704");
    noUnderlyings_0_1.set(UnderlyingFactor_33);
    UnderlyingInstrument_33.insert(UnderlyingFactor_33.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_33(1338876695);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_33);
    UnderlyingInstrument_33.insert(UnderlyingFlowScheduleType_33.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_33("STRING_1786934471");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_33);
    UnderlyingInstrument_33.insert(UnderlyingInstrRegistry_33.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_33("LOCALMKTDATE_968304852");
    noUnderlyings_0_1.set(UnderlyingIssueDate_33);
    UnderlyingInstrument_33.insert(UnderlyingIssueDate_33.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_33("STRING_1648349509");
    noUnderlyings_0_1.set(UnderlyingIssuer_33);
    UnderlyingInstrument_33.insert(UnderlyingIssuer_33.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_33("STRING_88082947");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_33);
    UnderlyingInstrument_33.insert(UnderlyingLocaleOfIssue_33.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_33("LOCALMKTDATE_1797249159");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_33);
    UnderlyingInstrument_33.insert(UnderlyingMaturityDate_33.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_33("MONTHYEAR_1477850774");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_33);
    UnderlyingInstrument_33.insert(UnderlyingMaturityMonthYear_33.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_33("TZTIMEONLY_1583570083");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_33);
    UnderlyingInstrument_33.insert(UnderlyingMaturityTime_33.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
    UnderlyingNotionalPercentageOutstanding_33.setString("62.430000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_33);
    UnderlyingInstrument_33.insert(UnderlyingNotionalPercentageOutstanding_33.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_33('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_33);
    UnderlyingInstrument_33.insert(UnderlyingOptAttribute_33.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
    UnderlyingOriginalNotionalPercentageOutstanding_33.setString("85.600000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_33);
    UnderlyingInstrument_33.insert(UnderlyingOriginalNotionalPercentageOutstanding_33.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_33("STRING_430265192");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_33);
    UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasure_33.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
    UnderlyingPriceUnitOfMeasureQty_33.setString("13932103");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_33);
    UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasureQty_33.getString());
    FIX::UnderlyingProduct UnderlyingProduct_33(1332279822);
    noUnderlyings_0_1.set(UnderlyingProduct_33);
    UnderlyingInstrument_33.insert(UnderlyingProduct_33.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_33(2110841020);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_33);
    UnderlyingInstrument_33.insert(UnderlyingPutOrCall_33.getString());
    FIX::UnderlyingPx UnderlyingPx_33;
    UnderlyingPx_33.setString("18095373");
    noUnderlyings_0_1.set(UnderlyingPx_33);
    UnderlyingInstrument_33.insert(UnderlyingPx_33.getString());
    FIX::UnderlyingQty UnderlyingQty_33;
    UnderlyingQty_33.setString("2138104");
    noUnderlyings_0_1.set(UnderlyingQty_33);
    UnderlyingInstrument_33.insert(UnderlyingQty_33.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_33("LOCALMKTDATE_2026895145");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_33);
    UnderlyingInstrument_33.insert(UnderlyingRedemptionDate_33.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_33("STRING_963693783");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_33);
    UnderlyingInstrument_33.insert(UnderlyingRepoCollateralSecurityType_33.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
    UnderlyingRepurchaseRate_33.setString("14.270000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_33);
    UnderlyingInstrument_33.insert(UnderlyingRepurchaseRate_33.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_33(470390591);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_33);
    UnderlyingInstrument_33.insert(UnderlyingRepurchaseTerm_33.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_33("STRING_360636436");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_33);
    UnderlyingInstrument_33.insert(UnderlyingRestructuringType_33.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_33("STRING_2067727114");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_33);
    UnderlyingInstrument_33.insert(UnderlyingSecurityDesc_33.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_33("EXCHANGE_2049424921");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_33);
    UnderlyingInstrument_33.insert(UnderlyingSecurityExchange_33.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_33("STRING_237368099");
    noUnderlyings_0_1.set(UnderlyingSecurityID_33);
    UnderlyingInstrument_33.insert(UnderlyingSecurityID_33.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_33("STRING_1825453334");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_33);
    UnderlyingInstrument_33.insert(UnderlyingSecurityIDSource_33.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_33("STRING_865401694");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_33);
    UnderlyingInstrument_33.insert(UnderlyingSecuritySubType_33.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_33("STRING_28066614");
    noUnderlyings_0_1.set(UnderlyingSecurityType_33);
    UnderlyingInstrument_33.insert(UnderlyingSecurityType_33.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_33("STRING_512207709");
    noUnderlyings_0_1.set(UnderlyingSeniority_33);
    UnderlyingInstrument_33.insert(UnderlyingSeniority_33.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_33("STRING_802412633");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_33);
    UnderlyingInstrument_33.insert(UnderlyingSettlMethod_33.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_33(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_33);
    UnderlyingInstrument_33.insert(UnderlyingSettlementType_33.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_33;
    UnderlyingStartValue_33.setString("18510844");
    noUnderlyings_0_1.set(UnderlyingStartValue_33);
    UnderlyingInstrument_33.insert(UnderlyingStartValue_33.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_33("STRING_441863457");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_33);
    UnderlyingInstrument_33.insert(UnderlyingStateOrProvinceOfIssue_33.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_33("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_33);
    UnderlyingInstrument_33.insert(UnderlyingStrikeCurrency_33.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
    UnderlyingStrikePrice_33.setString("5299464");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_33);
    UnderlyingInstrument_33.insert(UnderlyingStrikePrice_33.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_33("STRING_1294907389");
    noUnderlyings_0_1.set(UnderlyingSymbol_33);
    UnderlyingInstrument_33.insert(UnderlyingSymbol_33.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_33("STRING_682317392");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_33);
    UnderlyingInstrument_33.insert(UnderlyingSymbolSfx_33.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_33("STRING_2113516487");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_33);
    UnderlyingInstrument_33.insert(UnderlyingTimeUnit_33.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_33("STRING_726959985");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_33);
    UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasure_33.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
    UnderlyingUnitOfMeasureQty_33.setString("17073214");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_33);
    UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasureQty_33.getString());
    all_values.push_back(UnderlyingInstrument_33);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_66("STRING_1157225177");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltID_66.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_66("STRING_953048176");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltIDSource_66.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_67("STRING_116997573");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltID_67.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_67("STRING_1120582549");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltIDSource_67.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_68("STRING_615101870");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltID_68.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_68("STRING_330807998");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltIDSource_68.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
      FIX::UnderlyingStipType UnderlyingStipType_63("STRING_1578795653");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_63);
      UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipType_63.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_63("STRING_104965778");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_63);
      UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipValue_63.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
      FIX::UnderlyingStipType UnderlyingStipType_64("STRING_1470384638");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_64);
      UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipType_64.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_64("STRING_1939432089");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_64);
      UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipValue_64.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
      FIX::UnderlyingStipType UnderlyingStipType_65("STRING_25209244");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_65);
      UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipType_65.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_65("STRING_1372325911");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_65);
      UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipValue_65.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_63("STRING_1850662578");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyID_63.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_63('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyIDSource_63.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_63(57383155);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyRole_63.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_121("STRING_892656591");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubID_121.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_121(734220181);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubIDType_121.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_122("STRING_2066471043");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubID_122.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_122(1334520048);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubIDType_122.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_64("STRING_231878411");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyID_64.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_64('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyIDSource_64.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_64(1864466452);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyRole_64.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_123("STRING_1953255054");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubID_123.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_123(1830499291);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubIDType_123.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_124("STRING_106262138");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubID_124.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_124(1513092898);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_124);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubIDType_124.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ExecutionAcknowledgement::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_34;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_34("DATA_615217043");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_34);
    UnderlyingInstrument_34.insert(EncodedUnderlyingIssuer_34.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_34(1263487315);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_34);
    UnderlyingInstrument_34.insert(EncodedUnderlyingIssuerLen_34.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_34("DATA_318657426");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_34);
    UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDesc_34.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_34(732214616);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_34);
    UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDescLen_34.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
    UnderlyingAdjustedQuantity_34.setString("2365862");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_34);
    UnderlyingInstrument_34.insert(UnderlyingAdjustedQuantity_34.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
    UnderlyingAllocationPercent_34.setString("92.970000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_34);
    UnderlyingInstrument_34.insert(UnderlyingAllocationPercent_34.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
    UnderlyingAttachmentPoint_34.setString("26.150000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_34);
    UnderlyingInstrument_34.insert(UnderlyingAttachmentPoint_34.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_34("STRING_1236580263");
    noUnderlyings_0_2.set(UnderlyingCFICode_34);
    UnderlyingInstrument_34.insert(UnderlyingCFICode_34.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_34("STRING_365071302");
    noUnderlyings_0_2.set(UnderlyingCPProgram_34);
    UnderlyingInstrument_34.insert(UnderlyingCPProgram_34.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_34("STRING_1167988393");
    noUnderlyings_0_2.set(UnderlyingCPRegType_34);
    UnderlyingInstrument_34.insert(UnderlyingCPRegType_34.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_34;
    UnderlyingCapValue_34.setString("5594812");
    noUnderlyings_0_2.set(UnderlyingCapValue_34);
    UnderlyingInstrument_34.insert(UnderlyingCapValue_34.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
    UnderlyingCashAmount_34.setString("1570197");
    noUnderlyings_0_2.set(UnderlyingCashAmount_34);
    UnderlyingInstrument_34.insert(UnderlyingCashAmount_34.getString());
    FIX::UnderlyingCashType UnderlyingCashType_34("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_34);
    UnderlyingInstrument_34.insert(UnderlyingCashType_34.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
    UnderlyingContractMultiplier_34.setString("19318071");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_34);
    UnderlyingInstrument_34.insert(UnderlyingContractMultiplier_34.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_34(186336285);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_34);
    UnderlyingInstrument_34.insert(UnderlyingContractMultiplierUnit_34.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_34("COUNTRY_896376567");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_34);
    UnderlyingInstrument_34.insert(UnderlyingCountryOfIssue_34.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_34("LOCALMKTDATE_2022051121");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_34);
    UnderlyingInstrument_34.insert(UnderlyingCouponPaymentDate_34.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
    UnderlyingCouponRate_34.setString("94.400000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_34);
    UnderlyingInstrument_34.insert(UnderlyingCouponRate_34.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_34("STRING_1111763206");
    noUnderlyings_0_2.set(UnderlyingCreditRating_34);
    UnderlyingInstrument_34.insert(UnderlyingCreditRating_34.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_34("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_34);
    UnderlyingInstrument_34.insert(UnderlyingCurrency_34.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
    UnderlyingCurrentValue_34.setString("10307506");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_34);
    UnderlyingInstrument_34.insert(UnderlyingCurrentValue_34.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
    UnderlyingDetachmentPoint_34.setString("41.120000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_34);
    UnderlyingInstrument_34.insert(UnderlyingDetachmentPoint_34.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
    UnderlyingDirtyPrice_34.setString("12098180");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_34);
    UnderlyingInstrument_34.insert(UnderlyingDirtyPrice_34.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
    UnderlyingEndPrice_34.setString("1542046");
    noUnderlyings_0_2.set(UnderlyingEndPrice_34);
    UnderlyingInstrument_34.insert(UnderlyingEndPrice_34.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_34;
    UnderlyingEndValue_34.setString("18187269");
    noUnderlyings_0_2.set(UnderlyingEndValue_34);
    UnderlyingInstrument_34.insert(UnderlyingEndValue_34.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_34(589120185);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_34);
    UnderlyingInstrument_34.insert(UnderlyingExerciseStyle_34.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_34;
    UnderlyingFXRate_34.setString("21074596");
    noUnderlyings_0_2.set(UnderlyingFXRate_34);
    UnderlyingInstrument_34.insert(UnderlyingFXRate_34.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_34('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_34);
    UnderlyingInstrument_34.insert(UnderlyingFXRateCalc_34.getString());
    FIX::UnderlyingFactor UnderlyingFactor_34;
    UnderlyingFactor_34.setString("6953823");
    noUnderlyings_0_2.set(UnderlyingFactor_34);
    UnderlyingInstrument_34.insert(UnderlyingFactor_34.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_34(1473068919);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_34);
    UnderlyingInstrument_34.insert(UnderlyingFlowScheduleType_34.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_34("STRING_2116959603");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_34);
    UnderlyingInstrument_34.insert(UnderlyingInstrRegistry_34.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_34("LOCALMKTDATE_1958869638");
    noUnderlyings_0_2.set(UnderlyingIssueDate_34);
    UnderlyingInstrument_34.insert(UnderlyingIssueDate_34.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_34("STRING_1791726346");
    noUnderlyings_0_2.set(UnderlyingIssuer_34);
    UnderlyingInstrument_34.insert(UnderlyingIssuer_34.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_34("STRING_701690571");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_34);
    UnderlyingInstrument_34.insert(UnderlyingLocaleOfIssue_34.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_34("LOCALMKTDATE_47972207");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_34);
    UnderlyingInstrument_34.insert(UnderlyingMaturityDate_34.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_34("MONTHYEAR_578001995");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_34);
    UnderlyingInstrument_34.insert(UnderlyingMaturityMonthYear_34.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_34("TZTIMEONLY_1764713186");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_34);
    UnderlyingInstrument_34.insert(UnderlyingMaturityTime_34.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
    UnderlyingNotionalPercentageOutstanding_34.setString("24.700000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_34);
    UnderlyingInstrument_34.insert(UnderlyingNotionalPercentageOutstanding_34.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_34('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_34);
    UnderlyingInstrument_34.insert(UnderlyingOptAttribute_34.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
    UnderlyingOriginalNotionalPercentageOutstanding_34.setString("79.310000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_34);
    UnderlyingInstrument_34.insert(UnderlyingOriginalNotionalPercentageOutstanding_34.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_34("STRING_1844033723");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_34);
    UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasure_34.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
    UnderlyingPriceUnitOfMeasureQty_34.setString("11000930");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_34);
    UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasureQty_34.getString());
    FIX::UnderlyingProduct UnderlyingProduct_34(1978415568);
    noUnderlyings_0_2.set(UnderlyingProduct_34);
    UnderlyingInstrument_34.insert(UnderlyingProduct_34.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_34(1628357239);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_34);
    UnderlyingInstrument_34.insert(UnderlyingPutOrCall_34.getString());
    FIX::UnderlyingPx UnderlyingPx_34;
    UnderlyingPx_34.setString("12864293");
    noUnderlyings_0_2.set(UnderlyingPx_34);
    UnderlyingInstrument_34.insert(UnderlyingPx_34.getString());
    FIX::UnderlyingQty UnderlyingQty_34;
    UnderlyingQty_34.setString("7273084");
    noUnderlyings_0_2.set(UnderlyingQty_34);
    UnderlyingInstrument_34.insert(UnderlyingQty_34.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_34("LOCALMKTDATE_1502924712");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_34);
    UnderlyingInstrument_34.insert(UnderlyingRedemptionDate_34.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_34("STRING_1530148766");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_34);
    UnderlyingInstrument_34.insert(UnderlyingRepoCollateralSecurityType_34.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
    UnderlyingRepurchaseRate_34.setString("16.930000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_34);
    UnderlyingInstrument_34.insert(UnderlyingRepurchaseRate_34.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_34(122665129);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_34);
    UnderlyingInstrument_34.insert(UnderlyingRepurchaseTerm_34.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_34("STRING_360604739");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_34);
    UnderlyingInstrument_34.insert(UnderlyingRestructuringType_34.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_34("STRING_722338647");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_34);
    UnderlyingInstrument_34.insert(UnderlyingSecurityDesc_34.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_34("EXCHANGE_76925593");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_34);
    UnderlyingInstrument_34.insert(UnderlyingSecurityExchange_34.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_34("STRING_1570422772");
    noUnderlyings_0_2.set(UnderlyingSecurityID_34);
    UnderlyingInstrument_34.insert(UnderlyingSecurityID_34.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_34("STRING_876543262");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_34);
    UnderlyingInstrument_34.insert(UnderlyingSecurityIDSource_34.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_34("STRING_1895652510");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_34);
    UnderlyingInstrument_34.insert(UnderlyingSecuritySubType_34.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_34("STRING_12059309");
    noUnderlyings_0_2.set(UnderlyingSecurityType_34);
    UnderlyingInstrument_34.insert(UnderlyingSecurityType_34.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_34("STRING_836519283");
    noUnderlyings_0_2.set(UnderlyingSeniority_34);
    UnderlyingInstrument_34.insert(UnderlyingSeniority_34.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_34("STRING_1249911422");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_34);
    UnderlyingInstrument_34.insert(UnderlyingSettlMethod_34.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_34(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_34);
    UnderlyingInstrument_34.insert(UnderlyingSettlementType_34.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_34;
    UnderlyingStartValue_34.setString("1621045");
    noUnderlyings_0_2.set(UnderlyingStartValue_34);
    UnderlyingInstrument_34.insert(UnderlyingStartValue_34.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_34("STRING_1219387377");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_34);
    UnderlyingInstrument_34.insert(UnderlyingStateOrProvinceOfIssue_34.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_34("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_34);
    UnderlyingInstrument_34.insert(UnderlyingStrikeCurrency_34.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
    UnderlyingStrikePrice_34.setString("19210779");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_34);
    UnderlyingInstrument_34.insert(UnderlyingStrikePrice_34.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_34("STRING_566799830");
    noUnderlyings_0_2.set(UnderlyingSymbol_34);
    UnderlyingInstrument_34.insert(UnderlyingSymbol_34.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_34("STRING_384349247");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_34);
    UnderlyingInstrument_34.insert(UnderlyingSymbolSfx_34.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_34("STRING_1538307487");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_34);
    UnderlyingInstrument_34.insert(UnderlyingTimeUnit_34.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_34("STRING_1851352300");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_34);
    UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasure_34.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
    UnderlyingUnitOfMeasureQty_34.setString("13274225");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_34);
    UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasureQty_34.getString());
    all_values.push_back(UnderlyingInstrument_34);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_69("STRING_1547902375");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltID_69.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_69("STRING_280031938");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltIDSource_69.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
      FIX::UnderlyingStipType UnderlyingStipType_66("STRING_1028775966");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_66);
      UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipType_66.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_66("STRING_1566461265");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_66);
      UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipValue_66.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
      FIX::UnderlyingStipType UnderlyingStipType_67("STRING_734282178");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_67);
      UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipType_67.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_67("STRING_384217031");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_67);
      UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipValue_67.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
      FIX::UnderlyingStipType UnderlyingStipType_68("STRING_949126383");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_68);
      UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipType_68.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_68("STRING_425870224");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_68);
      UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipValue_68.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_65("STRING_1309731123");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyID_65.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_65('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyIDSource_65.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_65(583807753);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_65);
      UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyRole_65.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_125("STRING_2024752133");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubID_125.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_125(331976615);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_125);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubIDType_125.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_126("STRING_744729556");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubID_126.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_126(713787768);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_126);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubIDType_126.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::ExecutionAcknowledgement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_127("STRING_1581888037");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubID_127.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_127(1452171189);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_127);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubIDType_127.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
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
