#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionMaintenanceReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceReport msg;

  list<multiset<string>> all_values;
  multiset<string> PositionMaintenanceReport_0;
  FIX::Account Account_27("STRING_493211836");
  msg.set(Account_27);
  PositionMaintenanceReport_0.insert(Account_27.getString());
  FIX::AccountType AccountType_22(7);
  msg.set(AccountType_22);
  PositionMaintenanceReport_0.insert(AccountType_22.getString());
  FIX::AcctIDSource AcctIDSource_20(2);
  msg.set(AcctIDSource_20);
  PositionMaintenanceReport_0.insert(AcctIDSource_20.getString());
  FIX::AdjustmentType AdjustmentType_0(3);
  msg.set(AdjustmentType_0);
  PositionMaintenanceReport_0.insert(AdjustmentType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_15("LOCALMKTDATE_60974725");
  msg.set(ClearingBusinessDate_15);
  PositionMaintenanceReport_0.insert(ClearingBusinessDate_15.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_0(true);
  msg.set(ContraryInstructionIndicator_0);
  PositionMaintenanceReport_0.insert(ContraryInstructionIndicator_0.getString());
  FIX::Currency Currency_46("USD");
  msg.set(Currency_46);
  PositionMaintenanceReport_0.insert(Currency_46.getString());
  FIX::EncodedText EncodedText_76("DATA_659141160");
  msg.set(EncodedText_76);
  PositionMaintenanceReport_0.insert(EncodedText_76.getString());
  FIX::EncodedTextLen EncodedTextLen_76(1755853323);
  msg.set(EncodedTextLen_76);
  PositionMaintenanceReport_0.insert(EncodedTextLen_76.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_0("STRING_1609029389");
  msg.set(OrigPosReqRefID_0);
  PositionMaintenanceReport_0.insert(OrigPosReqRefID_0.getString());
  FIX::PosMaintAction PosMaintAction_0(1);
  msg.set(PosMaintAction_0);
  PositionMaintenanceReport_0.insert(PosMaintAction_0.getString());
  FIX::PosMaintResult PosMaintResult_0(1);
  msg.set(PosMaintResult_0);
  PositionMaintenanceReport_0.insert(PosMaintResult_0.getString());
  FIX::PosMaintRptID PosMaintRptID_1("STRING_1479221106");
  msg.set(PosMaintRptID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptID_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_1("STRING_1642603686");
  msg.set(PosMaintRptRefID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptRefID_1.getString());
  FIX::PosMaintStatus PosMaintStatus_0(4);
  msg.set(PosMaintStatus_0);
  PositionMaintenanceReport_0.insert(PosMaintStatus_0.getString());
  FIX::PosReqID PosReqID_1("STRING_1379979657");
  msg.set(PosReqID_1);
  PositionMaintenanceReport_0.insert(PosReqID_1.getString());
  FIX::PosTransType PosTransType_0(2);
  msg.set(PosTransType_0);
  PositionMaintenanceReport_0.insert(PosTransType_0.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_0(true);
  msg.set(PriorSpreadIndicator_0);
  PositionMaintenanceReport_0.insert(PriorSpreadIndicator_0.getString());
  FIX::SettlCurrency SettlCurrency_22("USD");
  msg.set(SettlCurrency_22);
  PositionMaintenanceReport_0.insert(SettlCurrency_22.getString());
  FIX::SettlSessID SettlSessID_7("STRING_RTH");
  msg.set(SettlSessID_7);
  PositionMaintenanceReport_0.insert(SettlSessID_7.getString());
  FIX::SettlSessSubID SettlSessSubID_6("STRING_319533022");
  msg.set(SettlSessSubID_6);
  PositionMaintenanceReport_0.insert(SettlSessSubID_6.getString());
  FIX::Text Text_76("STRING_641820318");
  msg.set(Text_76);
  PositionMaintenanceReport_0.insert(Text_76.getString());
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("8863432");
  msg.set(ThresholdAmount_1);
  PositionMaintenanceReport_0.insert(ThresholdAmount_1.getString());
  FIX::TransactTime TransactTime_46(FIX::UTCTIMESTAMP(9, 3, 52, 18, 8, 2008));
  msg.set(TransactTime_46);
  PositionMaintenanceReport_0.insert(TransactTime_46.getString());
  all_values.push_back(PositionMaintenanceReport_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_81;
    FIX::EncodedLegIssuer EncodedLegIssuer_81("DATA_958990812");
    noLegs_0_0.set(EncodedLegIssuer_81);
    InstrumentLeg_81.insert(EncodedLegIssuer_81.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_81(283163463);
    noLegs_0_0.set(EncodedLegIssuerLen_81);
    InstrumentLeg_81.insert(EncodedLegIssuerLen_81.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_81("DATA_1001080871");
    noLegs_0_0.set(EncodedLegSecurityDesc_81);
    InstrumentLeg_81.insert(EncodedLegSecurityDesc_81.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_81(1736809908);
    noLegs_0_0.set(EncodedLegSecurityDescLen_81);
    InstrumentLeg_81.insert(EncodedLegSecurityDescLen_81.getString());
    FIX::LegCFICode LegCFICode_81("STRING_486297731");
    noLegs_0_0.set(LegCFICode_81);
    InstrumentLeg_81.insert(LegCFICode_81.getString());
    FIX::LegContractMultiplier LegContractMultiplier_81;
    LegContractMultiplier_81.setString("6473131");
    noLegs_0_0.set(LegContractMultiplier_81);
    InstrumentLeg_81.insert(LegContractMultiplier_81.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_81(248467420);
    noLegs_0_0.set(LegContractMultiplierUnit_81);
    InstrumentLeg_81.insert(LegContractMultiplierUnit_81.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_81("MONTHYEAR_94667406");
    noLegs_0_0.set(LegContractSettlMonth_81);
    InstrumentLeg_81.insert(LegContractSettlMonth_81.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_81("COUNTRY_108858877");
    noLegs_0_0.set(LegCountryOfIssue_81);
    InstrumentLeg_81.insert(LegCountryOfIssue_81.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_81("LOCALMKTDATE_1953642605");
    noLegs_0_0.set(LegCouponPaymentDate_81);
    InstrumentLeg_81.insert(LegCouponPaymentDate_81.getString());
    FIX::LegCouponRate LegCouponRate_81;
    LegCouponRate_81.setString("95.660000");
    noLegs_0_0.set(LegCouponRate_81);
    InstrumentLeg_81.insert(LegCouponRate_81.getString());
    FIX::LegCreditRating LegCreditRating_81("STRING_1588079983");
    noLegs_0_0.set(LegCreditRating_81);
    InstrumentLeg_81.insert(LegCreditRating_81.getString());
    FIX::LegCurrency LegCurrency_81("EUR");
    noLegs_0_0.set(LegCurrency_81);
    InstrumentLeg_81.insert(LegCurrency_81.getString());
    FIX::LegDatedDate LegDatedDate_81("LOCALMKTDATE_820575992");
    noLegs_0_0.set(LegDatedDate_81);
    InstrumentLeg_81.insert(LegDatedDate_81.getString());
    FIX::LegExerciseStyle LegExerciseStyle_81(1214839706);
    noLegs_0_0.set(LegExerciseStyle_81);
    InstrumentLeg_81.insert(LegExerciseStyle_81.getString());
    FIX::LegFactor LegFactor_81;
    LegFactor_81.setString("12437962");
    noLegs_0_0.set(LegFactor_81);
    InstrumentLeg_81.insert(LegFactor_81.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_81(1925742443);
    noLegs_0_0.set(LegFlowScheduleType_81);
    InstrumentLeg_81.insert(LegFlowScheduleType_81.getString());
    FIX::LegInstrRegistry LegInstrRegistry_81("STRING_835071589");
    noLegs_0_0.set(LegInstrRegistry_81);
    InstrumentLeg_81.insert(LegInstrRegistry_81.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_81("LOCALMKTDATE_1408160406");
    noLegs_0_0.set(LegInterestAccrualDate_81);
    InstrumentLeg_81.insert(LegInterestAccrualDate_81.getString());
    FIX::LegIssueDate LegIssueDate_81("LOCALMKTDATE_97791818");
    noLegs_0_0.set(LegIssueDate_81);
    InstrumentLeg_81.insert(LegIssueDate_81.getString());
    FIX::LegIssuer LegIssuer_81("STRING_1476891907");
    noLegs_0_0.set(LegIssuer_81);
    InstrumentLeg_81.insert(LegIssuer_81.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_81("STRING_147019967");
    noLegs_0_0.set(LegLocaleOfIssue_81);
    InstrumentLeg_81.insert(LegLocaleOfIssue_81.getString());
    FIX::LegMaturityDate LegMaturityDate_81("LOCALMKTDATE_1229991995");
    noLegs_0_0.set(LegMaturityDate_81);
    InstrumentLeg_81.insert(LegMaturityDate_81.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_81("MONTHYEAR_1774030924");
    noLegs_0_0.set(LegMaturityMonthYear_81);
    InstrumentLeg_81.insert(LegMaturityMonthYear_81.getString());
    FIX::LegMaturityTime LegMaturityTime_81("TZTIMEONLY_1490776490");
    noLegs_0_0.set(LegMaturityTime_81);
    InstrumentLeg_81.insert(LegMaturityTime_81.getString());
    FIX::LegOptAttribute LegOptAttribute_81('1');
    noLegs_0_0.set(LegOptAttribute_81);
    InstrumentLeg_81.insert(LegOptAttribute_81.getString());
    FIX::LegOptionRatio LegOptionRatio_81;
    LegOptionRatio_81.setString("8159793");
    noLegs_0_0.set(LegOptionRatio_81);
    InstrumentLeg_81.insert(LegOptionRatio_81.getString());
    FIX::LegPool LegPool_81("STRING_1178489869");
    noLegs_0_0.set(LegPool_81);
    InstrumentLeg_81.insert(LegPool_81.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_81("STRING_1943336016");
    noLegs_0_0.set(LegPriceUnitOfMeasure_81);
    InstrumentLeg_81.insert(LegPriceUnitOfMeasure_81.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
    LegPriceUnitOfMeasureQty_81.setString("17560854");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_81);
    InstrumentLeg_81.insert(LegPriceUnitOfMeasureQty_81.getString());
    FIX::LegProduct LegProduct_81(2137480681);
    noLegs_0_0.set(LegProduct_81);
    InstrumentLeg_81.insert(LegProduct_81.getString());
    FIX::LegPutOrCall LegPutOrCall_81(79015831);
    noLegs_0_0.set(LegPutOrCall_81);
    InstrumentLeg_81.insert(LegPutOrCall_81.getString());
    FIX::LegRatioQty LegRatioQty_81;
    LegRatioQty_81.setString("6096826");
    noLegs_0_0.set(LegRatioQty_81);
    InstrumentLeg_81.insert(LegRatioQty_81.getString());
    FIX::LegRedemptionDate LegRedemptionDate_81("LOCALMKTDATE_1726806941");
    noLegs_0_0.set(LegRedemptionDate_81);
    InstrumentLeg_81.insert(LegRedemptionDate_81.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_81("STRING_565313562");
    noLegs_0_0.set(LegRepoCollateralSecurityType_81);
    InstrumentLeg_81.insert(LegRepoCollateralSecurityType_81.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_81;
    LegRepurchaseRate_81.setString("58.200000");
    noLegs_0_0.set(LegRepurchaseRate_81);
    InstrumentLeg_81.insert(LegRepurchaseRate_81.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_81(1975274362);
    noLegs_0_0.set(LegRepurchaseTerm_81);
    InstrumentLeg_81.insert(LegRepurchaseTerm_81.getString());
    FIX::LegSecurityDesc LegSecurityDesc_81("STRING_659980968");
    noLegs_0_0.set(LegSecurityDesc_81);
    InstrumentLeg_81.insert(LegSecurityDesc_81.getString());
    FIX::LegSecurityExchange LegSecurityExchange_81("EXCHANGE_1365854697");
    noLegs_0_0.set(LegSecurityExchange_81);
    InstrumentLeg_81.insert(LegSecurityExchange_81.getString());
    FIX::LegSecurityID LegSecurityID_81("STRING_1781433319");
    noLegs_0_0.set(LegSecurityID_81);
    InstrumentLeg_81.insert(LegSecurityID_81.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_81("STRING_1921180534");
    noLegs_0_0.set(LegSecurityIDSource_81);
    InstrumentLeg_81.insert(LegSecurityIDSource_81.getString());
    FIX::LegSecuritySubType LegSecuritySubType_81("STRING_806451033");
    noLegs_0_0.set(LegSecuritySubType_81);
    InstrumentLeg_81.insert(LegSecuritySubType_81.getString());
    FIX::LegSecurityType LegSecurityType_81("STRING_1082712314");
    noLegs_0_0.set(LegSecurityType_81);
    InstrumentLeg_81.insert(LegSecurityType_81.getString());
    FIX::LegSide LegSide_81('1');
    noLegs_0_0.set(LegSide_81);
    InstrumentLeg_81.insert(LegSide_81.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_81("STRING_1627027025");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_81);
    InstrumentLeg_81.insert(LegStateOrProvinceOfIssue_81.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_81("GBP");
    noLegs_0_0.set(LegStrikeCurrency_81);
    InstrumentLeg_81.insert(LegStrikeCurrency_81.getString());
    FIX::LegStrikePrice LegStrikePrice_81;
    LegStrikePrice_81.setString("14052858");
    noLegs_0_0.set(LegStrikePrice_81);
    InstrumentLeg_81.insert(LegStrikePrice_81.getString());
    FIX::LegSymbol LegSymbol_81("STRING_985139962");
    noLegs_0_0.set(LegSymbol_81);
    InstrumentLeg_81.insert(LegSymbol_81.getString());
    FIX::LegSymbolSfx LegSymbolSfx_81("STRING_1514867540");
    noLegs_0_0.set(LegSymbolSfx_81);
    InstrumentLeg_81.insert(LegSymbolSfx_81.getString());
    FIX::LegTimeUnit LegTimeUnit_81("STRING_1503077639");
    noLegs_0_0.set(LegTimeUnit_81);
    InstrumentLeg_81.insert(LegTimeUnit_81.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_81("STRING_314548221");
    noLegs_0_0.set(LegUnitOfMeasure_81);
    InstrumentLeg_81.insert(LegUnitOfMeasure_81.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
    LegUnitOfMeasureQty_81.setString("16618875");
    noLegs_0_0.set(LegUnitOfMeasureQty_81);
    InstrumentLeg_81.insert(LegUnitOfMeasureQty_81.getString());
    all_values.push_back(InstrumentLeg_81);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
      FIX::LegSecurityAltID LegSecurityAltID_167("STRING_2088579145");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltID_167.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_167("STRING_1005180349");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltIDSource_167.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
      FIX::LegSecurityAltID LegSecurityAltID_168("STRING_1925644073");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltID_168.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_168("STRING_757074812");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltIDSource_168.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
      FIX::LegSecurityAltID LegSecurityAltID_169("STRING_36186570");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltID_169.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_169("STRING_1721496441");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltIDSource_169.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_82;
    FIX::EncodedLegIssuer EncodedLegIssuer_82("DATA_365676626");
    noLegs_0_1.set(EncodedLegIssuer_82);
    InstrumentLeg_82.insert(EncodedLegIssuer_82.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_82(26183603);
    noLegs_0_1.set(EncodedLegIssuerLen_82);
    InstrumentLeg_82.insert(EncodedLegIssuerLen_82.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_82("DATA_1800512273");
    noLegs_0_1.set(EncodedLegSecurityDesc_82);
    InstrumentLeg_82.insert(EncodedLegSecurityDesc_82.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_82(975359311);
    noLegs_0_1.set(EncodedLegSecurityDescLen_82);
    InstrumentLeg_82.insert(EncodedLegSecurityDescLen_82.getString());
    FIX::LegCFICode LegCFICode_82("STRING_1752990545");
    noLegs_0_1.set(LegCFICode_82);
    InstrumentLeg_82.insert(LegCFICode_82.getString());
    FIX::LegContractMultiplier LegContractMultiplier_82;
    LegContractMultiplier_82.setString("2183421");
    noLegs_0_1.set(LegContractMultiplier_82);
    InstrumentLeg_82.insert(LegContractMultiplier_82.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_82(84871483);
    noLegs_0_1.set(LegContractMultiplierUnit_82);
    InstrumentLeg_82.insert(LegContractMultiplierUnit_82.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_82("MONTHYEAR_1580781259");
    noLegs_0_1.set(LegContractSettlMonth_82);
    InstrumentLeg_82.insert(LegContractSettlMonth_82.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_82("COUNTRY_878323156");
    noLegs_0_1.set(LegCountryOfIssue_82);
    InstrumentLeg_82.insert(LegCountryOfIssue_82.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_82("LOCALMKTDATE_1450726181");
    noLegs_0_1.set(LegCouponPaymentDate_82);
    InstrumentLeg_82.insert(LegCouponPaymentDate_82.getString());
    FIX::LegCouponRate LegCouponRate_82;
    LegCouponRate_82.setString("9.300000");
    noLegs_0_1.set(LegCouponRate_82);
    InstrumentLeg_82.insert(LegCouponRate_82.getString());
    FIX::LegCreditRating LegCreditRating_82("STRING_652020042");
    noLegs_0_1.set(LegCreditRating_82);
    InstrumentLeg_82.insert(LegCreditRating_82.getString());
    FIX::LegCurrency LegCurrency_82("USD");
    noLegs_0_1.set(LegCurrency_82);
    InstrumentLeg_82.insert(LegCurrency_82.getString());
    FIX::LegDatedDate LegDatedDate_82("LOCALMKTDATE_1662414616");
    noLegs_0_1.set(LegDatedDate_82);
    InstrumentLeg_82.insert(LegDatedDate_82.getString());
    FIX::LegExerciseStyle LegExerciseStyle_82(1736720591);
    noLegs_0_1.set(LegExerciseStyle_82);
    InstrumentLeg_82.insert(LegExerciseStyle_82.getString());
    FIX::LegFactor LegFactor_82;
    LegFactor_82.setString("3000279");
    noLegs_0_1.set(LegFactor_82);
    InstrumentLeg_82.insert(LegFactor_82.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_82(1769121750);
    noLegs_0_1.set(LegFlowScheduleType_82);
    InstrumentLeg_82.insert(LegFlowScheduleType_82.getString());
    FIX::LegInstrRegistry LegInstrRegistry_82("STRING_994522764");
    noLegs_0_1.set(LegInstrRegistry_82);
    InstrumentLeg_82.insert(LegInstrRegistry_82.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_82("LOCALMKTDATE_1285167931");
    noLegs_0_1.set(LegInterestAccrualDate_82);
    InstrumentLeg_82.insert(LegInterestAccrualDate_82.getString());
    FIX::LegIssueDate LegIssueDate_82("LOCALMKTDATE_1136505643");
    noLegs_0_1.set(LegIssueDate_82);
    InstrumentLeg_82.insert(LegIssueDate_82.getString());
    FIX::LegIssuer LegIssuer_82("STRING_350116755");
    noLegs_0_1.set(LegIssuer_82);
    InstrumentLeg_82.insert(LegIssuer_82.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_82("STRING_1599716152");
    noLegs_0_1.set(LegLocaleOfIssue_82);
    InstrumentLeg_82.insert(LegLocaleOfIssue_82.getString());
    FIX::LegMaturityDate LegMaturityDate_82("LOCALMKTDATE_650909502");
    noLegs_0_1.set(LegMaturityDate_82);
    InstrumentLeg_82.insert(LegMaturityDate_82.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_82("MONTHYEAR_935702741");
    noLegs_0_1.set(LegMaturityMonthYear_82);
    InstrumentLeg_82.insert(LegMaturityMonthYear_82.getString());
    FIX::LegMaturityTime LegMaturityTime_82("TZTIMEONLY_1540811650");
    noLegs_0_1.set(LegMaturityTime_82);
    InstrumentLeg_82.insert(LegMaturityTime_82.getString());
    FIX::LegOptAttribute LegOptAttribute_82('1');
    noLegs_0_1.set(LegOptAttribute_82);
    InstrumentLeg_82.insert(LegOptAttribute_82.getString());
    FIX::LegOptionRatio LegOptionRatio_82;
    LegOptionRatio_82.setString("7138631");
    noLegs_0_1.set(LegOptionRatio_82);
    InstrumentLeg_82.insert(LegOptionRatio_82.getString());
    FIX::LegPool LegPool_82("STRING_150402814");
    noLegs_0_1.set(LegPool_82);
    InstrumentLeg_82.insert(LegPool_82.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_82("STRING_1692276422");
    noLegs_0_1.set(LegPriceUnitOfMeasure_82);
    InstrumentLeg_82.insert(LegPriceUnitOfMeasure_82.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
    LegPriceUnitOfMeasureQty_82.setString("2878759");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_82);
    InstrumentLeg_82.insert(LegPriceUnitOfMeasureQty_82.getString());
    FIX::LegProduct LegProduct_82(516079440);
    noLegs_0_1.set(LegProduct_82);
    InstrumentLeg_82.insert(LegProduct_82.getString());
    FIX::LegPutOrCall LegPutOrCall_82(1718460026);
    noLegs_0_1.set(LegPutOrCall_82);
    InstrumentLeg_82.insert(LegPutOrCall_82.getString());
    FIX::LegRatioQty LegRatioQty_82;
    LegRatioQty_82.setString("20883882");
    noLegs_0_1.set(LegRatioQty_82);
    InstrumentLeg_82.insert(LegRatioQty_82.getString());
    FIX::LegRedemptionDate LegRedemptionDate_82("LOCALMKTDATE_1491438751");
    noLegs_0_1.set(LegRedemptionDate_82);
    InstrumentLeg_82.insert(LegRedemptionDate_82.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_82("STRING_1323966923");
    noLegs_0_1.set(LegRepoCollateralSecurityType_82);
    InstrumentLeg_82.insert(LegRepoCollateralSecurityType_82.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_82;
    LegRepurchaseRate_82.setString("67.730000");
    noLegs_0_1.set(LegRepurchaseRate_82);
    InstrumentLeg_82.insert(LegRepurchaseRate_82.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_82(1576310235);
    noLegs_0_1.set(LegRepurchaseTerm_82);
    InstrumentLeg_82.insert(LegRepurchaseTerm_82.getString());
    FIX::LegSecurityDesc LegSecurityDesc_82("STRING_757264534");
    noLegs_0_1.set(LegSecurityDesc_82);
    InstrumentLeg_82.insert(LegSecurityDesc_82.getString());
    FIX::LegSecurityExchange LegSecurityExchange_82("EXCHANGE_1037569929");
    noLegs_0_1.set(LegSecurityExchange_82);
    InstrumentLeg_82.insert(LegSecurityExchange_82.getString());
    FIX::LegSecurityID LegSecurityID_82("STRING_879552768");
    noLegs_0_1.set(LegSecurityID_82);
    InstrumentLeg_82.insert(LegSecurityID_82.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_82("STRING_1971995464");
    noLegs_0_1.set(LegSecurityIDSource_82);
    InstrumentLeg_82.insert(LegSecurityIDSource_82.getString());
    FIX::LegSecuritySubType LegSecuritySubType_82("STRING_1689589971");
    noLegs_0_1.set(LegSecuritySubType_82);
    InstrumentLeg_82.insert(LegSecuritySubType_82.getString());
    FIX::LegSecurityType LegSecurityType_82("STRING_989246334");
    noLegs_0_1.set(LegSecurityType_82);
    InstrumentLeg_82.insert(LegSecurityType_82.getString());
    FIX::LegSide LegSide_82('2');
    noLegs_0_1.set(LegSide_82);
    InstrumentLeg_82.insert(LegSide_82.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_82("STRING_1204520939");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_82);
    InstrumentLeg_82.insert(LegStateOrProvinceOfIssue_82.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_82("USD");
    noLegs_0_1.set(LegStrikeCurrency_82);
    InstrumentLeg_82.insert(LegStrikeCurrency_82.getString());
    FIX::LegStrikePrice LegStrikePrice_82;
    LegStrikePrice_82.setString("8261590");
    noLegs_0_1.set(LegStrikePrice_82);
    InstrumentLeg_82.insert(LegStrikePrice_82.getString());
    FIX::LegSymbol LegSymbol_82("STRING_1573006042");
    noLegs_0_1.set(LegSymbol_82);
    InstrumentLeg_82.insert(LegSymbol_82.getString());
    FIX::LegSymbolSfx LegSymbolSfx_82("STRING_1559667313");
    noLegs_0_1.set(LegSymbolSfx_82);
    InstrumentLeg_82.insert(LegSymbolSfx_82.getString());
    FIX::LegTimeUnit LegTimeUnit_82("STRING_1962664685");
    noLegs_0_1.set(LegTimeUnit_82);
    InstrumentLeg_82.insert(LegTimeUnit_82.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_82("STRING_1923122797");
    noLegs_0_1.set(LegUnitOfMeasure_82);
    InstrumentLeg_82.insert(LegUnitOfMeasure_82.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
    LegUnitOfMeasureQty_82.setString("10118998");
    noLegs_0_1.set(LegUnitOfMeasureQty_82);
    InstrumentLeg_82.insert(LegUnitOfMeasureQty_82.getString());
    all_values.push_back(InstrumentLeg_82);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
      FIX::LegSecurityAltID LegSecurityAltID_170("STRING_711341891");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltID_170.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_170("STRING_405227820");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltIDSource_170.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_57;
  FIX::AttachmentPoint AttachmentPoint_57;
  AttachmentPoint_57.setString("3.910000");
  msg.set(AttachmentPoint_57);
  Instrument_57.insert(AttachmentPoint_57.getString());
  FIX::CFICode CFICode_57("STRING_1425205058");
  msg.set(CFICode_57);
  Instrument_57.insert(CFICode_57.getString());
  FIX::CPProgram CPProgram_57(2);
  msg.set(CPProgram_57);
  Instrument_57.insert(CPProgram_57.getString());
  FIX::CPRegType CPRegType_57("STRING_1666973166");
  msg.set(CPRegType_57);
  Instrument_57.insert(CPRegType_57.getString());
  FIX::CapPrice CapPrice_57;
  CapPrice_57.setString("17130810");
  msg.set(CapPrice_57);
  Instrument_57.insert(CapPrice_57.getString());
  FIX::ContractMultiplier ContractMultiplier_57;
  ContractMultiplier_57.setString("10717100");
  msg.set(ContractMultiplier_57);
  Instrument_57.insert(ContractMultiplier_57.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_57(0);
  msg.set(ContractMultiplierUnit_57);
  Instrument_57.insert(ContractMultiplierUnit_57.getString());
  FIX::ContractSettlMonth ContractSettlMonth_57("MONTHYEAR_1653985604");
  msg.set(ContractSettlMonth_57);
  Instrument_57.insert(ContractSettlMonth_57.getString());
  FIX::CountryOfIssue CountryOfIssue_57("COUNTRY_415665178");
  msg.set(CountryOfIssue_57);
  Instrument_57.insert(CountryOfIssue_57.getString());
  FIX::CouponPaymentDate CouponPaymentDate_57("LOCALMKTDATE_414432819");
  msg.set(CouponPaymentDate_57);
  Instrument_57.insert(CouponPaymentDate_57.getString());
  FIX::CouponRate CouponRate_57;
  CouponRate_57.setString("23.770000");
  msg.set(CouponRate_57);
  Instrument_57.insert(CouponRate_57.getString());
  FIX::CreditRating CreditRating_57("STRING_1991975413");
  msg.set(CreditRating_57);
  Instrument_57.insert(CreditRating_57.getString());
  FIX::DatedDate DatedDate_57("LOCALMKTDATE_1171697353");
  msg.set(DatedDate_57);
  Instrument_57.insert(DatedDate_57.getString());
  FIX::DetachmentPoint DetachmentPoint_57;
  DetachmentPoint_57.setString("86.580000");
  msg.set(DetachmentPoint_57);
  Instrument_57.insert(DetachmentPoint_57.getString());
  FIX::EncodedIssuer EncodedIssuer_57("DATA_724044533");
  msg.set(EncodedIssuer_57);
  Instrument_57.insert(EncodedIssuer_57.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_57(996209169);
  msg.set(EncodedIssuerLen_57);
  Instrument_57.insert(EncodedIssuerLen_57.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_57("DATA_245424981");
  msg.set(EncodedSecurityDesc_57);
  Instrument_57.insert(EncodedSecurityDesc_57.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_57(1713290867);
  msg.set(EncodedSecurityDescLen_57);
  Instrument_57.insert(EncodedSecurityDescLen_57.getString());
  FIX::ExerciseStyle ExerciseStyle_57(2);
  msg.set(ExerciseStyle_57);
  Instrument_57.insert(ExerciseStyle_57.getString());
  FIX::Factor Factor_57;
  Factor_57.setString("14499459");
  msg.set(Factor_57);
  Instrument_57.insert(Factor_57.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_57(false);
  msg.set(FlexProductEligibilityIndicator_57);
  Instrument_57.insert(FlexProductEligibilityIndicator_57.getString());
  FIX::FlexibleIndicator FlexibleIndicator_57(false);
  msg.set(FlexibleIndicator_57);
  Instrument_57.insert(FlexibleIndicator_57.getString());
  FIX::FloorPrice FloorPrice_57;
  FloorPrice_57.setString("1286213");
  msg.set(FloorPrice_57);
  Instrument_57.insert(FloorPrice_57.getString());
  FIX::FlowScheduleType FlowScheduleType_57(4);
  msg.set(FlowScheduleType_57);
  Instrument_57.insert(FlowScheduleType_57.getString());
  FIX::InstrRegistry InstrRegistry_57("STRING_657363629");
  msg.set(InstrRegistry_57);
  Instrument_57.insert(InstrRegistry_57.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_57('2');
  msg.set(InstrmtAssignmentMethod_57);
  Instrument_57.insert(InstrmtAssignmentMethod_57.getString());
  FIX::InterestAccrualDate InterestAccrualDate_57("LOCALMKTDATE_1492935688");
  msg.set(InterestAccrualDate_57);
  Instrument_57.insert(InterestAccrualDate_57.getString());
  FIX::IssueDate IssueDate_57("LOCALMKTDATE_1669263447");
  msg.set(IssueDate_57);
  Instrument_57.insert(IssueDate_57.getString());
  FIX::Issuer Issuer_57("STRING_409892891");
  msg.set(Issuer_57);
  Instrument_57.insert(Issuer_57.getString());
  FIX::ListMethod ListMethod_57(1);
  msg.set(ListMethod_57);
  Instrument_57.insert(ListMethod_57.getString());
  FIX::LocaleOfIssue LocaleOfIssue_57("STRING_2074491267");
  msg.set(LocaleOfIssue_57);
  Instrument_57.insert(LocaleOfIssue_57.getString());
  FIX::MaturityDate MaturityDate_57("LOCALMKTDATE_384589635");
  msg.set(MaturityDate_57);
  Instrument_57.insert(MaturityDate_57.getString());
  FIX::MaturityMonthYear MaturityMonthYear_57("MONTHYEAR_1481998989");
  msg.set(MaturityMonthYear_57);
  Instrument_57.insert(MaturityMonthYear_57.getString());
  FIX::MaturityTime MaturityTime_57("TZTIMEONLY_482638253");
  msg.set(MaturityTime_57);
  Instrument_57.insert(MaturityTime_57.getString());
  FIX::MinPriceIncrement MinPriceIncrement_57;
  MinPriceIncrement_57.setString("20515628");
  msg.set(MinPriceIncrement_57);
  Instrument_57.insert(MinPriceIncrement_57.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
  MinPriceIncrementAmount_57.setString("10475963");
  msg.set(MinPriceIncrementAmount_57);
  Instrument_57.insert(MinPriceIncrementAmount_57.getString());
  FIX::NTPositionLimit NTPositionLimit_57(1554348328);
  msg.set(NTPositionLimit_57);
  Instrument_57.insert(NTPositionLimit_57.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
  NotionalPercentageOutstanding_57.setString("86.970000");
  msg.set(NotionalPercentageOutstanding_57);
  Instrument_57.insert(NotionalPercentageOutstanding_57.getString());
  FIX::OptAttribute OptAttribute_57('5');
  msg.set(OptAttribute_57);
  Instrument_57.insert(OptAttribute_57.getString());
  FIX::OptPayoutAmount OptPayoutAmount_57;
  OptPayoutAmount_57.setString("19700135");
  msg.set(OptPayoutAmount_57);
  Instrument_57.insert(OptPayoutAmount_57.getString());
  FIX::OptPayoutType OptPayoutType_57(2);
  msg.set(OptPayoutType_57);
  Instrument_57.insert(OptPayoutType_57.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
  OriginalNotionalPercentageOutstanding_57.setString("70.450000");
  msg.set(OriginalNotionalPercentageOutstanding_57);
  Instrument_57.insert(OriginalNotionalPercentageOutstanding_57.getString());
  FIX::Pool Pool_57("STRING_1814505272");
  msg.set(Pool_57);
  Instrument_57.insert(Pool_57.getString());
  FIX::PositionLimit PositionLimit_57(580675221);
  msg.set(PositionLimit_57);
  Instrument_57.insert(PositionLimit_57.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_57("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_57);
  Instrument_57.insert(PriceQuoteMethod_57.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_57("STRING_391066158");
  msg.set(PriceUnitOfMeasure_57);
  Instrument_57.insert(PriceUnitOfMeasure_57.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
  PriceUnitOfMeasureQty_57.setString("15768843");
  msg.set(PriceUnitOfMeasureQty_57);
  Instrument_57.insert(PriceUnitOfMeasureQty_57.getString());
  FIX::Product Product_59(2);
  msg.set(Product_59);
  Instrument_57.insert(Product_59.getString());
  FIX::ProductComplex ProductComplex_57("STRING_2104357025");
  msg.set(ProductComplex_57);
  Instrument_57.insert(ProductComplex_57.getString());
  FIX::PutOrCall PutOrCall_57(1);
  msg.set(PutOrCall_57);
  Instrument_57.insert(PutOrCall_57.getString());
  FIX::RedemptionDate RedemptionDate_57("LOCALMKTDATE_471052957");
  msg.set(RedemptionDate_57);
  Instrument_57.insert(RedemptionDate_57.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_57("STRING_101163874");
  msg.set(RepoCollateralSecurityType_57);
  Instrument_57.insert(RepoCollateralSecurityType_57.getString());
  FIX::RepurchaseRate RepurchaseRate_57;
  RepurchaseRate_57.setString("12.870000");
  msg.set(RepurchaseRate_57);
  Instrument_57.insert(RepurchaseRate_57.getString());
  FIX::RepurchaseTerm RepurchaseTerm_57(599674272);
  msg.set(RepurchaseTerm_57);
  Instrument_57.insert(RepurchaseTerm_57.getString());
  FIX::RestructuringType RestructuringType_57("STRING_MR");
  msg.set(RestructuringType_57);
  Instrument_57.insert(RestructuringType_57.getString());
  FIX::SecurityDesc SecurityDesc_57("STRING_155141268");
  msg.set(SecurityDesc_57);
  Instrument_57.insert(SecurityDesc_57.getString());
  FIX::SecurityExchange SecurityExchange_57("EXCHANGE_543476624");
  msg.set(SecurityExchange_57);
  Instrument_57.insert(SecurityExchange_57.getString());
  FIX::SecurityGroup SecurityGroup_57("STRING_1163912454");
  msg.set(SecurityGroup_57);
  Instrument_57.insert(SecurityGroup_57.getString());
  FIX::SecurityID SecurityID_57("STRING_1824404715");
  msg.set(SecurityID_57);
  Instrument_57.insert(SecurityID_57.getString());
  FIX::SecurityIDSource SecurityIDSource_57("STRING_1");
  msg.set(SecurityIDSource_57);
  Instrument_57.insert(SecurityIDSource_57.getString());
  FIX::SecurityStatus SecurityStatus_57("STRING_2");
  msg.set(SecurityStatus_57);
  Instrument_57.insert(SecurityStatus_57.getString());
  FIX::SecuritySubType SecuritySubType_58("STRING_1751412334");
  msg.set(SecuritySubType_58);
  Instrument_57.insert(SecuritySubType_58.getString());
  FIX::SecurityType SecurityType_59("STRING_TAXA");
  msg.set(SecurityType_59);
  Instrument_57.insert(SecurityType_59.getString());
  FIX::Seniority Seniority_57("STRING_SD");
  msg.set(Seniority_57);
  Instrument_57.insert(Seniority_57.getString());
  FIX::SettlMethod SettlMethod_57('P');
  msg.set(SettlMethod_57);
  Instrument_57.insert(SettlMethod_57.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_57("STRING_1242038304");
  msg.set(SettleOnOpenFlag_57);
  Instrument_57.insert(SettleOnOpenFlag_57.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_57("STRING_1602818087");
  msg.set(StateOrProvinceOfIssue_57);
  Instrument_57.insert(StateOrProvinceOfIssue_57.getString());
  FIX::StrikeCurrency StrikeCurrency_57("CAN");
  msg.set(StrikeCurrency_57);
  Instrument_57.insert(StrikeCurrency_57.getString());
  FIX::StrikeMultiplier StrikeMultiplier_57;
  StrikeMultiplier_57.setString("94327");
  msg.set(StrikeMultiplier_57);
  Instrument_57.insert(StrikeMultiplier_57.getString());
  FIX::StrikePrice StrikePrice_57;
  StrikePrice_57.setString("14634451");
  msg.set(StrikePrice_57);
  Instrument_57.insert(StrikePrice_57.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_57(5);
  msg.set(StrikePriceBoundaryMethod_57);
  Instrument_57.insert(StrikePriceBoundaryMethod_57.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
  StrikePriceBoundaryPrecision_57.setString("98.000000");
  msg.set(StrikePriceBoundaryPrecision_57);
  Instrument_57.insert(StrikePriceBoundaryPrecision_57.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_57(4);
  msg.set(StrikePriceDeterminationMethod_57);
  Instrument_57.insert(StrikePriceDeterminationMethod_57.getString());
  FIX::StrikeValue StrikeValue_57;
  StrikeValue_57.setString("2262364");
  msg.set(StrikeValue_57);
  Instrument_57.insert(StrikeValue_57.getString());
  FIX::Symbol Symbol_57("STRING_1152445503");
  msg.set(Symbol_57);
  Instrument_57.insert(Symbol_57.getString());
  FIX::SymbolSfx SymbolSfx_57("STRING_WI");
  msg.set(SymbolSfx_57);
  Instrument_57.insert(SymbolSfx_57.getString());
  FIX::TimeUnit TimeUnit_57("STRING_S");
  msg.set(TimeUnit_57);
  Instrument_57.insert(TimeUnit_57.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_57(4);
  msg.set(UnderlyingPriceDeterminationMethod_57);
  Instrument_57.insert(UnderlyingPriceDeterminationMethod_57.getString());
  FIX::UnitOfMeasure UnitOfMeasure_57("STRING_Gal");
  msg.set(UnitOfMeasure_57);
  Instrument_57.insert(UnitOfMeasure_57.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
  UnitOfMeasureQty_57.setString("557185");
  msg.set(UnitOfMeasureQty_57);
  Instrument_57.insert(UnitOfMeasureQty_57.getString());
  FIX::ValuationMethod ValuationMethod_57("STRING_FUTDA");
  msg.set(ValuationMethod_57);
  Instrument_57.insert(ValuationMethod_57.getString());
  all_values.push_back(Instrument_57);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_112;
    FIX::ComplexEventCondition ComplexEventCondition_112(1);
    noComplexEvents_0_0.set(ComplexEventCondition_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventCondition_112.getString());
    FIX::ComplexEventPrice ComplexEventPrice_112;
    ComplexEventPrice_112.setString("12442797");
    noComplexEvents_0_0.set(ComplexEventPrice_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPrice_112.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_112(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryMethod_112.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
    ComplexEventPriceBoundaryPrecision_112.setString("10.620000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryPrecision_112.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_112(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceTimeType_112.getString());
    FIX::ComplexEventType ComplexEventType_112(4);
    noComplexEvents_0_0.set(ComplexEventType_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexEventType_112.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
    ComplexOptPayoutAmount_112.setString("15330421");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_112);
    ComplexEvents_NoComplexEvents_112.insert(ComplexOptPayoutAmount_112.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_112);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_231;
      FIX::ComplexEventEndDate ComplexEventEndDate_231(FIX::UTCTIMESTAMP(23, 53, 25, 27, 10, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventEndDate_231.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_231(FIX::UTCTIMESTAMP(14, 39, 34, 19, 4, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_231);
      ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventStartDate_231.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_231);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
        FIX::ComplexEventEndTime ComplexEventEndTime_474(FIX::UTCTIMEONLY(11, 9, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventEndTime_474.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_474(FIX::UTCTIMEONLY(8, 51, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventStartTime_474.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
        FIX::ComplexEventEndTime ComplexEventEndTime_475(FIX::UTCTIMEONLY(4, 26, 57));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventEndTime_475.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_475(FIX::UTCTIMEONLY(23, 7, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventStartTime_475.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_107;
    FIX::EventDate EventDate_107("LOCALMKTDATE_630555634");
    noEvents_0_0.set(EventDate_107);
    EvntGrp_NoEvents_107.insert(EventDate_107.getString());
    FIX::EventPx EventPx_107;
    EventPx_107.setString("6748996");
    noEvents_0_0.set(EventPx_107);
    EvntGrp_NoEvents_107.insert(EventPx_107.getString());
    FIX::EventText EventText_107("STRING_53597347");
    noEvents_0_0.set(EventText_107);
    EvntGrp_NoEvents_107.insert(EventText_107.getString());
    FIX::EventTime EventTime_107(FIX::UTCTIMESTAMP(14, 12, 56, 0, 8, 2000));
    noEvents_0_0.set(EventTime_107);
    EvntGrp_NoEvents_107.insert(EventTime_107.getString());
    FIX::EventType EventType_107(12);
    noEvents_0_0.set(EventType_107);
    EvntGrp_NoEvents_107.insert(EventType_107.getString());
    all_values.push_back(EvntGrp_NoEvents_107);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_108;
    FIX::EventDate EventDate_108("LOCALMKTDATE_501490215");
    noEvents_0_1.set(EventDate_108);
    EvntGrp_NoEvents_108.insert(EventDate_108.getString());
    FIX::EventPx EventPx_108;
    EventPx_108.setString("16199075");
    noEvents_0_1.set(EventPx_108);
    EvntGrp_NoEvents_108.insert(EventPx_108.getString());
    FIX::EventText EventText_108("STRING_711665548");
    noEvents_0_1.set(EventText_108);
    EvntGrp_NoEvents_108.insert(EventText_108.getString());
    FIX::EventTime EventTime_108(FIX::UTCTIMESTAMP(3, 37, 35, 25, 3, 2002));
    noEvents_0_1.set(EventTime_108);
    EvntGrp_NoEvents_108.insert(EventTime_108.getString());
    FIX::EventType EventType_108(9);
    noEvents_0_1.set(EventType_108);
    EvntGrp_NoEvents_108.insert(EventType_108.getString());
    all_values.push_back(EvntGrp_NoEvents_108);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_109;
    FIX::EventDate EventDate_109("LOCALMKTDATE_599637869");
    noEvents_0_2.set(EventDate_109);
    EvntGrp_NoEvents_109.insert(EventDate_109.getString());
    FIX::EventPx EventPx_109;
    EventPx_109.setString("808384");
    noEvents_0_2.set(EventPx_109);
    EvntGrp_NoEvents_109.insert(EventPx_109.getString());
    FIX::EventText EventText_109("STRING_1877182915");
    noEvents_0_2.set(EventText_109);
    EvntGrp_NoEvents_109.insert(EventText_109.getString());
    FIX::EventTime EventTime_109(FIX::UTCTIMESTAMP(13, 46, 25, 6, 1, 2000));
    noEvents_0_2.set(EventTime_109);
    EvntGrp_NoEvents_109.insert(EventTime_109.getString());
    FIX::EventType EventType_109(16);
    noEvents_0_2.set(EventType_109);
    EvntGrp_NoEvents_109.insert(EventType_109.getString());
    all_values.push_back(EvntGrp_NoEvents_109);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_107;
    FIX::InstrumentPartyID InstrumentPartyID_107("STRING_538414401");
    noInstrumentParties_0_0.set(InstrumentPartyID_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyID_107.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_107('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyIDSource_107.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_107(163804428);
    noInstrumentParties_0_0.set(InstrumentPartyRole_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyRole_107.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_107);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229;
      FIX::InstrumentPartySubID InstrumentPartySubID_229("STRING_166059382");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubID_229.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_229(1075827451);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubIDType_229.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_108;
    FIX::InstrumentPartyID InstrumentPartyID_108("STRING_1418503488");
    noInstrumentParties_0_1.set(InstrumentPartyID_108);
    InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyID_108.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_108('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_108);
    InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyIDSource_108.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_108(1577317666);
    noInstrumentParties_0_1.set(InstrumentPartyRole_108);
    InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyRole_108.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_108);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230;
      FIX::InstrumentPartySubID InstrumentPartySubID_230("STRING_454853394");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubID_230.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_230(673236928);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubIDType_230.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231;
      FIX::InstrumentPartySubID InstrumentPartySubID_231("STRING_900798211");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubID_231.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_231(1956693212);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubIDType_231.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_109;
    FIX::InstrumentPartyID InstrumentPartyID_109("STRING_684621423");
    noInstrumentParties_0_2.set(InstrumentPartyID_109);
    InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyID_109.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_109('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_109);
    InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyIDSource_109.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_109(9458510);
    noInstrumentParties_0_2.set(InstrumentPartyRole_109);
    InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyRole_109.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_109);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232;
      FIX::InstrumentPartySubID InstrumentPartySubID_232("STRING_2105218481");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubID_232.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_232(609096379);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubIDType_232.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233;
      FIX::InstrumentPartySubID InstrumentPartySubID_233("STRING_189431433");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubID_233.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_233(1834917748);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubIDType_233.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_124;
    FIX::SecurityAltID SecurityAltID_124("STRING_567409462");
    noSecurityAltID_0_0.set(SecurityAltID_124);
    SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltID_124.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_124("STRING_235112046");
    noSecurityAltID_0_0.set(SecurityAltIDSource_124);
    SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltIDSource_124.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_114;
  FIX::SecurityXML SecurityXML_115("XMLDATA_1518009611");
  msg.set(SecurityXML_115);
  FIX::SecurityXMLLen SecurityXMLLen_57(1836169352);
  msg.set(SecurityXMLLen_57);
  FIX::SecurityXMLSchema SecurityXMLSchema_57("STRING_940967143");
  msg.set(SecurityXMLSchema_57);
  SecurityXML_114.insert(SecurityXMLSchema_57.getString());
  all_values.push_back(SecurityXML_114);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_101;
    FIX::PartyID PartyID_101("STRING_1632345220");
    noPartyIDs_0_0.set(PartyID_101);
    Parties_NoPartyIDs_101.insert(PartyID_101.getString());
    FIX::PartyIDSource PartyIDSource_101('F');
    noPartyIDs_0_0.set(PartyIDSource_101);
    Parties_NoPartyIDs_101.insert(PartyIDSource_101.getString());
    FIX::PartyRole PartyRole_101(13);
    noPartyIDs_0_0.set(PartyRole_101);
    Parties_NoPartyIDs_101.insert(PartyRole_101.getString());
    all_values.push_back(Parties_NoPartyIDs_101);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_206;
      FIX::PartySubID PartySubID_206("STRING_1864224015");
      noPartySubIDs_0_1_0.set(PartySubID_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubID_206.getString());
      FIX::PartySubIDType PartySubIDType_206(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubIDType_206.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_206);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_6;
    FIX::PosAmt PosAmt_6;
    PosAmt_6.setString("7925678");
    noPosAmt_0_0.set(PosAmt_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmt_6.getString());
    FIX::PosAmtType PosAmtType_6("STRING_COLAT");
    noPosAmt_0_0.set(PosAmtType_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmtType_6.getString());
    FIX::PositionCurrency PositionCurrency_6("STRING_891340362");
    noPosAmt_0_0.set(PositionCurrency_6);
    PositionAmountData_NoPosAmt_6.insert(PositionCurrency_6.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_6);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("2224018");
    noPosAmt_0_1.set(PosAmt_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmt_7.getString());
    FIX::PosAmtType PosAmtType_7("STRING_ICPN");
    noPosAmt_0_1.set(PosAmtType_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmtType_7.getString());
    FIX::PositionCurrency PositionCurrency_7("STRING_1346193757");
    noPosAmt_0_1.set(PositionCurrency_7);
    PositionAmountData_NoPosAmt_7.insert(PositionCurrency_7.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_7);

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("6180003");
    noPositions_0_0.set(LongQty_5);
    PositionQty_NoPositions_5.insert(LongQty_5.getString());
    FIX::PosQtyStatus PosQtyStatus_5(1);
    noPositions_0_0.set(PosQtyStatus_5);
    PositionQty_NoPositions_5.insert(PosQtyStatus_5.getString());
    FIX::PosType PosType_5("STRING_DLV");
    noPositions_0_0.set(PosType_5);
    PositionQty_NoPositions_5.insert(PosType_5.getString());
    FIX::QuantityDate QuantityDate_5("LOCALMKTDATE_1397038875");
    noPositions_0_0.set(QuantityDate_5);
    PositionQty_NoPositions_5.insert(QuantityDate_5.getString());
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("11648618");
    noPositions_0_0.set(ShortQty_5);
    PositionQty_NoPositions_5.insert(ShortQty_5.getString());
    all_values.push_back(PositionQty_NoPositions_5);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_86;
      FIX::NestedPartyID NestedPartyID_86("STRING_1354773708");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyID_86.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_86('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyIDSource_86.getString());
      FIX::NestedPartyRole NestedPartyRole_86(1878284623);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyRole_86.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_86);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
        FIX::NestedPartySubID NestedPartySubID_175("STRING_943235147");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubID_175.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_175(298210438);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubIDType_175.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
        FIX::NestedPartySubID NestedPartySubID_176("STRING_1277319855");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubID_176.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_176(313761110);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubIDType_176.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
        FIX::NestedPartySubID NestedPartySubID_177("STRING_2134379790");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubID_177.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_177(70803350);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubIDType_177.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_87;
      FIX::NestedPartyID NestedPartyID_87("STRING_516091733");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyID_87.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_87('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyIDSource_87.getString());
      FIX::NestedPartyRole NestedPartyRole_87(1771222937);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyRole_87.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_87);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
        FIX::NestedPartySubID NestedPartySubID_178("STRING_453850848");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubID_178.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_178(1487963304);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubIDType_178.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    FIX::TradingSessionID TradingSessionID_60("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_60);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionID_60.getString());
    FIX::TradingSessionSubID TradingSessionSubID_60("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_60);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionSubID_60.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    FIX::TradingSessionID TradingSessionID_61("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_61);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionID_61.getString());
    FIX::TradingSessionSubID TradingSessionSubID_61("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_61);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionSubID_61.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_82;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_82("DATA_1503052187");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuer_82.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_82(1692053836);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingIssuerLen_82.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_82("DATA_1251088076");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDesc_82.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_82(2121052550);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_82);
    UnderlyingInstrument_82.insert(EncodedUnderlyingSecurityDescLen_82.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
    UnderlyingAdjustedQuantity_82.setString("6999735");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_82);
    UnderlyingInstrument_82.insert(UnderlyingAdjustedQuantity_82.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
    UnderlyingAllocationPercent_82.setString("46.170000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_82);
    UnderlyingInstrument_82.insert(UnderlyingAllocationPercent_82.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
    UnderlyingAttachmentPoint_82.setString("77.770000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingAttachmentPoint_82.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_82("STRING_1864835340");
    noUnderlyings_0_0.set(UnderlyingCFICode_82);
    UnderlyingInstrument_82.insert(UnderlyingCFICode_82.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_82("STRING_225234159");
    noUnderlyings_0_0.set(UnderlyingCPProgram_82);
    UnderlyingInstrument_82.insert(UnderlyingCPProgram_82.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_82("STRING_577897838");
    noUnderlyings_0_0.set(UnderlyingCPRegType_82);
    UnderlyingInstrument_82.insert(UnderlyingCPRegType_82.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_82;
    UnderlyingCapValue_82.setString("14913099");
    noUnderlyings_0_0.set(UnderlyingCapValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCapValue_82.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
    UnderlyingCashAmount_82.setString("21035187");
    noUnderlyings_0_0.set(UnderlyingCashAmount_82);
    UnderlyingInstrument_82.insert(UnderlyingCashAmount_82.getString());
    FIX::UnderlyingCashType UnderlyingCashType_82("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_82);
    UnderlyingInstrument_82.insert(UnderlyingCashType_82.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
    UnderlyingContractMultiplier_82.setString("2870614");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplier_82.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_82(254245573);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingContractMultiplierUnit_82.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_82("COUNTRY_749941853");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingCountryOfIssue_82.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_82("LOCALMKTDATE_600822512");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponPaymentDate_82.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
    UnderlyingCouponRate_82.setString("17.150000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_82);
    UnderlyingInstrument_82.insert(UnderlyingCouponRate_82.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_82("STRING_820745203");
    noUnderlyings_0_0.set(UnderlyingCreditRating_82);
    UnderlyingInstrument_82.insert(UnderlyingCreditRating_82.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_82("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrency_82.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
    UnderlyingCurrentValue_82.setString("4444844");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_82);
    UnderlyingInstrument_82.insert(UnderlyingCurrentValue_82.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
    UnderlyingDetachmentPoint_82.setString("73.560000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_82);
    UnderlyingInstrument_82.insert(UnderlyingDetachmentPoint_82.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
    UnderlyingDirtyPrice_82.setString("1667502");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingDirtyPrice_82.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
    UnderlyingEndPrice_82.setString("19324477");
    noUnderlyings_0_0.set(UnderlyingEndPrice_82);
    UnderlyingInstrument_82.insert(UnderlyingEndPrice_82.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_82;
    UnderlyingEndValue_82.setString("10383590");
    noUnderlyings_0_0.set(UnderlyingEndValue_82);
    UnderlyingInstrument_82.insert(UnderlyingEndValue_82.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_82(1768753643);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_82);
    UnderlyingInstrument_82.insert(UnderlyingExerciseStyle_82.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_82;
    UnderlyingFXRate_82.setString("20654952");
    noUnderlyings_0_0.set(UnderlyingFXRate_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRate_82.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_82('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_82);
    UnderlyingInstrument_82.insert(UnderlyingFXRateCalc_82.getString());
    FIX::UnderlyingFactor UnderlyingFactor_82;
    UnderlyingFactor_82.setString("21146137");
    noUnderlyings_0_0.set(UnderlyingFactor_82);
    UnderlyingInstrument_82.insert(UnderlyingFactor_82.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_82(273460934);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_82);
    UnderlyingInstrument_82.insert(UnderlyingFlowScheduleType_82.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_82("STRING_32293935");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_82);
    UnderlyingInstrument_82.insert(UnderlyingInstrRegistry_82.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_82("LOCALMKTDATE_1659183911");
    noUnderlyings_0_0.set(UnderlyingIssueDate_82);
    UnderlyingInstrument_82.insert(UnderlyingIssueDate_82.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_82("STRING_1524549011");
    noUnderlyings_0_0.set(UnderlyingIssuer_82);
    UnderlyingInstrument_82.insert(UnderlyingIssuer_82.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_82("STRING_5862837");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingLocaleOfIssue_82.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_82("LOCALMKTDATE_211673773");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityDate_82.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_82("MONTHYEAR_60929980");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityMonthYear_82.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_82("TZTIMEONLY_1376470614");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_82);
    UnderlyingInstrument_82.insert(UnderlyingMaturityTime_82.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
    UnderlyingNotionalPercentageOutstanding_82.setString("91.130000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_82('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_82);
    UnderlyingInstrument_82.insert(UnderlyingOptAttribute_82.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
    UnderlyingOriginalNotionalPercentageOutstanding_82.setString("84.520000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_82);
    UnderlyingInstrument_82.insert(UnderlyingOriginalNotionalPercentageOutstanding_82.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_82("STRING_1420335368");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasure_82.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
    UnderlyingPriceUnitOfMeasureQty_82.setString("2421992");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingPriceUnitOfMeasureQty_82.getString());
    FIX::UnderlyingProduct UnderlyingProduct_82(1426990451);
    noUnderlyings_0_0.set(UnderlyingProduct_82);
    UnderlyingInstrument_82.insert(UnderlyingProduct_82.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_82(1707396770);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_82);
    UnderlyingInstrument_82.insert(UnderlyingPutOrCall_82.getString());
    FIX::UnderlyingPx UnderlyingPx_82;
    UnderlyingPx_82.setString("4964448");
    noUnderlyings_0_0.set(UnderlyingPx_82);
    UnderlyingInstrument_82.insert(UnderlyingPx_82.getString());
    FIX::UnderlyingQty UnderlyingQty_82;
    UnderlyingQty_82.setString("294486");
    noUnderlyings_0_0.set(UnderlyingQty_82);
    UnderlyingInstrument_82.insert(UnderlyingQty_82.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_82("LOCALMKTDATE_160735634");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_82);
    UnderlyingInstrument_82.insert(UnderlyingRedemptionDate_82.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_82("STRING_737586563");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingRepoCollateralSecurityType_82.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
    UnderlyingRepurchaseRate_82.setString("38.600000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseRate_82.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_82(1277649880);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_82);
    UnderlyingInstrument_82.insert(UnderlyingRepurchaseTerm_82.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_82("STRING_450485993");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_82);
    UnderlyingInstrument_82.insert(UnderlyingRestructuringType_82.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_82("STRING_1294678352");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityDesc_82.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_82("EXCHANGE_1503917236");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityExchange_82.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_82("STRING_617236271");
    noUnderlyings_0_0.set(UnderlyingSecurityID_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityID_82.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_82("STRING_1079642501");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityIDSource_82.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_82("STRING_394792597");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecuritySubType_82.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_82("STRING_238506267");
    noUnderlyings_0_0.set(UnderlyingSecurityType_82);
    UnderlyingInstrument_82.insert(UnderlyingSecurityType_82.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_82("STRING_997654124");
    noUnderlyings_0_0.set(UnderlyingSeniority_82);
    UnderlyingInstrument_82.insert(UnderlyingSeniority_82.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_82("STRING_1071517993");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlMethod_82.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_82(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_82);
    UnderlyingInstrument_82.insert(UnderlyingSettlementType_82.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_82;
    UnderlyingStartValue_82.setString("12711150");
    noUnderlyings_0_0.set(UnderlyingStartValue_82);
    UnderlyingInstrument_82.insert(UnderlyingStartValue_82.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_82("STRING_1103811928");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_82);
    UnderlyingInstrument_82.insert(UnderlyingStateOrProvinceOfIssue_82.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_82("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikeCurrency_82.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
    UnderlyingStrikePrice_82.setString("11096747");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_82);
    UnderlyingInstrument_82.insert(UnderlyingStrikePrice_82.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_82("STRING_2076494026");
    noUnderlyings_0_0.set(UnderlyingSymbol_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbol_82.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_82("STRING_709110401");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_82);
    UnderlyingInstrument_82.insert(UnderlyingSymbolSfx_82.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_82("STRING_338661731");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_82);
    UnderlyingInstrument_82.insert(UnderlyingTimeUnit_82.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_82("STRING_2005519492");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasure_82.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
    UnderlyingUnitOfMeasureQty_82.setString("9952745");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_82);
    UnderlyingInstrument_82.insert(UnderlyingUnitOfMeasureQty_82.getString());
    all_values.push_back(UnderlyingInstrument_82);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_173("STRING_1278371212");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltID_173.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_173("STRING_1237473815");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltIDSource_173.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      FIX::UnderlyingStipType UnderlyingStipType_158("STRING_838284334");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipType_158.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_158("STRING_1733918663");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_158);
      UnderlyingStipulations_NoUnderlyingStips_158.insert(UnderlyingStipValue_158.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
      FIX::UnderlyingStipType UnderlyingStipType_159("STRING_1601985643");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipType_159.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_159("STRING_999019968");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_159);
      UnderlyingStipulations_NoUnderlyingStips_159.insert(UnderlyingStipValue_159.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
      FIX::UnderlyingStipType UnderlyingStipType_160("STRING_324021578");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipType_160.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_160("STRING_304695855");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipValue_160.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_166("STRING_774507571");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyID_166.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_166('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyIDSource_166.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_166(1633103437);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_166);
      UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyRole_166.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_338("STRING_531533061");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubID_338.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_338(2027896034);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubIDType_338.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_83;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_83("DATA_1630250109");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuer_83.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_83(1529187185);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingIssuerLen_83.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_83("DATA_951930379");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDesc_83.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_83(1835886451);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_83);
    UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDescLen_83.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
    UnderlyingAdjustedQuantity_83.setString("6528185");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_83);
    UnderlyingInstrument_83.insert(UnderlyingAdjustedQuantity_83.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
    UnderlyingAllocationPercent_83.setString("23.070000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_83);
    UnderlyingInstrument_83.insert(UnderlyingAllocationPercent_83.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
    UnderlyingAttachmentPoint_83.setString("30.570000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingAttachmentPoint_83.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_83("STRING_1300999017");
    noUnderlyings_0_1.set(UnderlyingCFICode_83);
    UnderlyingInstrument_83.insert(UnderlyingCFICode_83.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_83("STRING_1017933424");
    noUnderlyings_0_1.set(UnderlyingCPProgram_83);
    UnderlyingInstrument_83.insert(UnderlyingCPProgram_83.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_83("STRING_1482233435");
    noUnderlyings_0_1.set(UnderlyingCPRegType_83);
    UnderlyingInstrument_83.insert(UnderlyingCPRegType_83.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_83;
    UnderlyingCapValue_83.setString("20101094");
    noUnderlyings_0_1.set(UnderlyingCapValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCapValue_83.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
    UnderlyingCashAmount_83.setString("13565951");
    noUnderlyings_0_1.set(UnderlyingCashAmount_83);
    UnderlyingInstrument_83.insert(UnderlyingCashAmount_83.getString());
    FIX::UnderlyingCashType UnderlyingCashType_83("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_83);
    UnderlyingInstrument_83.insert(UnderlyingCashType_83.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
    UnderlyingContractMultiplier_83.setString("8579003");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplier_83.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_83(1502141692);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingContractMultiplierUnit_83.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_83("COUNTRY_471156843");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingCountryOfIssue_83.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_83("LOCALMKTDATE_2095374127");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponPaymentDate_83.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
    UnderlyingCouponRate_83.setString("50.310000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_83);
    UnderlyingInstrument_83.insert(UnderlyingCouponRate_83.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_83("STRING_1309441177");
    noUnderlyings_0_1.set(UnderlyingCreditRating_83);
    UnderlyingInstrument_83.insert(UnderlyingCreditRating_83.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_83("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrency_83.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
    UnderlyingCurrentValue_83.setString("1609774");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_83);
    UnderlyingInstrument_83.insert(UnderlyingCurrentValue_83.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
    UnderlyingDetachmentPoint_83.setString("7.200000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_83);
    UnderlyingInstrument_83.insert(UnderlyingDetachmentPoint_83.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
    UnderlyingDirtyPrice_83.setString("6863928");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingDirtyPrice_83.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
    UnderlyingEndPrice_83.setString("2901636");
    noUnderlyings_0_1.set(UnderlyingEndPrice_83);
    UnderlyingInstrument_83.insert(UnderlyingEndPrice_83.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_83;
    UnderlyingEndValue_83.setString("6328546");
    noUnderlyings_0_1.set(UnderlyingEndValue_83);
    UnderlyingInstrument_83.insert(UnderlyingEndValue_83.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_83(138283442);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_83);
    UnderlyingInstrument_83.insert(UnderlyingExerciseStyle_83.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_83;
    UnderlyingFXRate_83.setString("19232671");
    noUnderlyings_0_1.set(UnderlyingFXRate_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRate_83.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_83('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_83);
    UnderlyingInstrument_83.insert(UnderlyingFXRateCalc_83.getString());
    FIX::UnderlyingFactor UnderlyingFactor_83;
    UnderlyingFactor_83.setString("6698165");
    noUnderlyings_0_1.set(UnderlyingFactor_83);
    UnderlyingInstrument_83.insert(UnderlyingFactor_83.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_83(1803679523);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_83);
    UnderlyingInstrument_83.insert(UnderlyingFlowScheduleType_83.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_83("STRING_1507364947");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_83);
    UnderlyingInstrument_83.insert(UnderlyingInstrRegistry_83.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_83("LOCALMKTDATE_51520040");
    noUnderlyings_0_1.set(UnderlyingIssueDate_83);
    UnderlyingInstrument_83.insert(UnderlyingIssueDate_83.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_83("STRING_608126254");
    noUnderlyings_0_1.set(UnderlyingIssuer_83);
    UnderlyingInstrument_83.insert(UnderlyingIssuer_83.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_83("STRING_1195767750");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingLocaleOfIssue_83.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_83("LOCALMKTDATE_704338635");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityDate_83.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_83("MONTHYEAR_516384914");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityMonthYear_83.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_83("TZTIMEONLY_601507159");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_83);
    UnderlyingInstrument_83.insert(UnderlyingMaturityTime_83.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
    UnderlyingNotionalPercentageOutstanding_83.setString("76.520000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_83('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_83);
    UnderlyingInstrument_83.insert(UnderlyingOptAttribute_83.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
    UnderlyingOriginalNotionalPercentageOutstanding_83.setString("5.950000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_83);
    UnderlyingInstrument_83.insert(UnderlyingOriginalNotionalPercentageOutstanding_83.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_83("STRING_1867963423");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasure_83.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
    UnderlyingPriceUnitOfMeasureQty_83.setString("7434298");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasureQty_83.getString());
    FIX::UnderlyingProduct UnderlyingProduct_83(1276526226);
    noUnderlyings_0_1.set(UnderlyingProduct_83);
    UnderlyingInstrument_83.insert(UnderlyingProduct_83.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_83(578380086);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_83);
    UnderlyingInstrument_83.insert(UnderlyingPutOrCall_83.getString());
    FIX::UnderlyingPx UnderlyingPx_83;
    UnderlyingPx_83.setString("980878");
    noUnderlyings_0_1.set(UnderlyingPx_83);
    UnderlyingInstrument_83.insert(UnderlyingPx_83.getString());
    FIX::UnderlyingQty UnderlyingQty_83;
    UnderlyingQty_83.setString("17476830");
    noUnderlyings_0_1.set(UnderlyingQty_83);
    UnderlyingInstrument_83.insert(UnderlyingQty_83.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_83("LOCALMKTDATE_526270565");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_83);
    UnderlyingInstrument_83.insert(UnderlyingRedemptionDate_83.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_83("STRING_1025282921");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingRepoCollateralSecurityType_83.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
    UnderlyingRepurchaseRate_83.setString("5.990000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseRate_83.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_83(60596059);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_83);
    UnderlyingInstrument_83.insert(UnderlyingRepurchaseTerm_83.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_83("STRING_1406979948");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_83);
    UnderlyingInstrument_83.insert(UnderlyingRestructuringType_83.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_83("STRING_1070618097");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityDesc_83.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_83("EXCHANGE_2066426779");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityExchange_83.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_83("STRING_2093372830");
    noUnderlyings_0_1.set(UnderlyingSecurityID_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityID_83.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_83("STRING_1360781796");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityIDSource_83.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_83("STRING_551797774");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecuritySubType_83.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_83("STRING_84172624");
    noUnderlyings_0_1.set(UnderlyingSecurityType_83);
    UnderlyingInstrument_83.insert(UnderlyingSecurityType_83.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_83("STRING_1136565285");
    noUnderlyings_0_1.set(UnderlyingSeniority_83);
    UnderlyingInstrument_83.insert(UnderlyingSeniority_83.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_83("STRING_428912612");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlMethod_83.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_83(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_83);
    UnderlyingInstrument_83.insert(UnderlyingSettlementType_83.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_83;
    UnderlyingStartValue_83.setString("7927611");
    noUnderlyings_0_1.set(UnderlyingStartValue_83);
    UnderlyingInstrument_83.insert(UnderlyingStartValue_83.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_83("STRING_1936277559");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_83);
    UnderlyingInstrument_83.insert(UnderlyingStateOrProvinceOfIssue_83.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_83("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikeCurrency_83.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
    UnderlyingStrikePrice_83.setString("9845616");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_83);
    UnderlyingInstrument_83.insert(UnderlyingStrikePrice_83.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_83("STRING_1509847802");
    noUnderlyings_0_1.set(UnderlyingSymbol_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbol_83.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_83("STRING_1917272328");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_83);
    UnderlyingInstrument_83.insert(UnderlyingSymbolSfx_83.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_83("STRING_1586068821");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_83);
    UnderlyingInstrument_83.insert(UnderlyingTimeUnit_83.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_83("STRING_1367701807");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasure_83.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
    UnderlyingUnitOfMeasureQty_83.setString("13041070");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_83);
    UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasureQty_83.getString());
    all_values.push_back(UnderlyingInstrument_83);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_174("STRING_1088181582");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltID_174.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_174("STRING_2047536865");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltIDSource_174.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_175("STRING_651368346");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltID_175.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_175("STRING_1666561668");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltIDSource_175.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_176("STRING_2145624756");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltID_176.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_176("STRING_251567768");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltIDSource_176.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
      FIX::UnderlyingStipType UnderlyingStipType_161("STRING_1023424029");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipType_161.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_161("STRING_1161208368");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipValue_161.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
      FIX::UnderlyingStipType UnderlyingStipType_162("STRING_105944645");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipType_162.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_162("STRING_282920329");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipValue_162.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_167("STRING_24887777");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyID_167.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_167('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyIDSource_167.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_167(1445124614);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyRole_167.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_339("STRING_312982135");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubID_339.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_339(434206251);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubIDType_339.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_168("STRING_1005598163");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyID_168.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_168('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyIDSource_168.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_168(1226967411);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyRole_168.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_340("STRING_1872480429");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubID_340.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_340(480371177);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubIDType_340.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_84;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_84("DATA_1778953736");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuer_84.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_84(1234844584);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuerLen_84.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_84("DATA_250159858");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDesc_84.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_84(1217538909);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDescLen_84.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
    UnderlyingAdjustedQuantity_84.setString("4550627");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_84);
    UnderlyingInstrument_84.insert(UnderlyingAdjustedQuantity_84.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
    UnderlyingAllocationPercent_84.setString("68.770000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_84);
    UnderlyingInstrument_84.insert(UnderlyingAllocationPercent_84.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
    UnderlyingAttachmentPoint_84.setString("10.290000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingAttachmentPoint_84.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_84("STRING_1543244325");
    noUnderlyings_0_2.set(UnderlyingCFICode_84);
    UnderlyingInstrument_84.insert(UnderlyingCFICode_84.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_84("STRING_1454320094");
    noUnderlyings_0_2.set(UnderlyingCPProgram_84);
    UnderlyingInstrument_84.insert(UnderlyingCPProgram_84.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_84("STRING_1243749375");
    noUnderlyings_0_2.set(UnderlyingCPRegType_84);
    UnderlyingInstrument_84.insert(UnderlyingCPRegType_84.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_84;
    UnderlyingCapValue_84.setString("10623223");
    noUnderlyings_0_2.set(UnderlyingCapValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCapValue_84.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
    UnderlyingCashAmount_84.setString("14524612");
    noUnderlyings_0_2.set(UnderlyingCashAmount_84);
    UnderlyingInstrument_84.insert(UnderlyingCashAmount_84.getString());
    FIX::UnderlyingCashType UnderlyingCashType_84("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_84);
    UnderlyingInstrument_84.insert(UnderlyingCashType_84.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
    UnderlyingContractMultiplier_84.setString("11076709");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplier_84.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_84(328401584);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplierUnit_84.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_84("COUNTRY_509041864");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingCountryOfIssue_84.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_84("LOCALMKTDATE_1213615577");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponPaymentDate_84.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
    UnderlyingCouponRate_84.setString("19.130000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponRate_84.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_84("STRING_593384681");
    noUnderlyings_0_2.set(UnderlyingCreditRating_84);
    UnderlyingInstrument_84.insert(UnderlyingCreditRating_84.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_84("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrency_84.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
    UnderlyingCurrentValue_84.setString("20385092");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrentValue_84.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
    UnderlyingDetachmentPoint_84.setString("89.050000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingDetachmentPoint_84.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
    UnderlyingDirtyPrice_84.setString("11531135");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingDirtyPrice_84.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
    UnderlyingEndPrice_84.setString("3252318");
    noUnderlyings_0_2.set(UnderlyingEndPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingEndPrice_84.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_84;
    UnderlyingEndValue_84.setString("6733034");
    noUnderlyings_0_2.set(UnderlyingEndValue_84);
    UnderlyingInstrument_84.insert(UnderlyingEndValue_84.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_84(72601175);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_84);
    UnderlyingInstrument_84.insert(UnderlyingExerciseStyle_84.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_84;
    UnderlyingFXRate_84.setString("15521993");
    noUnderlyings_0_2.set(UnderlyingFXRate_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRate_84.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_84('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRateCalc_84.getString());
    FIX::UnderlyingFactor UnderlyingFactor_84;
    UnderlyingFactor_84.setString("19450816");
    noUnderlyings_0_2.set(UnderlyingFactor_84);
    UnderlyingInstrument_84.insert(UnderlyingFactor_84.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_84(2032570487);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_84);
    UnderlyingInstrument_84.insert(UnderlyingFlowScheduleType_84.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_84("STRING_1099165583");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_84);
    UnderlyingInstrument_84.insert(UnderlyingInstrRegistry_84.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_84("LOCALMKTDATE_1032442540");
    noUnderlyings_0_2.set(UnderlyingIssueDate_84);
    UnderlyingInstrument_84.insert(UnderlyingIssueDate_84.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_84("STRING_135246697");
    noUnderlyings_0_2.set(UnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(UnderlyingIssuer_84.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_84("STRING_169220844");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingLocaleOfIssue_84.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_84("LOCALMKTDATE_1487505283");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityDate_84.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_84("MONTHYEAR_1689513574");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityMonthYear_84.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_84("TZTIMEONLY_761601873");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityTime_84.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
    UnderlyingNotionalPercentageOutstanding_84.setString("59.600000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_84('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_84);
    UnderlyingInstrument_84.insert(UnderlyingOptAttribute_84.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
    UnderlyingOriginalNotionalPercentageOutstanding_84.setString("12.490000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingOriginalNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_84("STRING_1945588306");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasure_84.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
    UnderlyingPriceUnitOfMeasureQty_84.setString("3013275");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasureQty_84.getString());
    FIX::UnderlyingProduct UnderlyingProduct_84(1353184745);
    noUnderlyings_0_2.set(UnderlyingProduct_84);
    UnderlyingInstrument_84.insert(UnderlyingProduct_84.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_84(905775589);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_84);
    UnderlyingInstrument_84.insert(UnderlyingPutOrCall_84.getString());
    FIX::UnderlyingPx UnderlyingPx_84;
    UnderlyingPx_84.setString("6297291");
    noUnderlyings_0_2.set(UnderlyingPx_84);
    UnderlyingInstrument_84.insert(UnderlyingPx_84.getString());
    FIX::UnderlyingQty UnderlyingQty_84;
    UnderlyingQty_84.setString("18622266");
    noUnderlyings_0_2.set(UnderlyingQty_84);
    UnderlyingInstrument_84.insert(UnderlyingQty_84.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_84("LOCALMKTDATE_2119391166");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_84);
    UnderlyingInstrument_84.insert(UnderlyingRedemptionDate_84.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_84("STRING_1241051072");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingRepoCollateralSecurityType_84.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
    UnderlyingRepurchaseRate_84.setString("76.420000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseRate_84.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_84(1210410872);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseTerm_84.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_84("STRING_2081182497");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_84);
    UnderlyingInstrument_84.insert(UnderlyingRestructuringType_84.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_84("STRING_199153290");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityDesc_84.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_84("EXCHANGE_878116130");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityExchange_84.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_84("STRING_1086812410");
    noUnderlyings_0_2.set(UnderlyingSecurityID_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityID_84.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_84("STRING_524385188");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityIDSource_84.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_84("STRING_1551419551");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecuritySubType_84.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_84("STRING_1159413585");
    noUnderlyings_0_2.set(UnderlyingSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityType_84.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_84("STRING_2076584498");
    noUnderlyings_0_2.set(UnderlyingSeniority_84);
    UnderlyingInstrument_84.insert(UnderlyingSeniority_84.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_84("STRING_871631398");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlMethod_84.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_84(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlementType_84.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_84;
    UnderlyingStartValue_84.setString("19616713");
    noUnderlyings_0_2.set(UnderlyingStartValue_84);
    UnderlyingInstrument_84.insert(UnderlyingStartValue_84.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_84("STRING_1970796982");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingStateOrProvinceOfIssue_84.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_84("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikeCurrency_84.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
    UnderlyingStrikePrice_84.setString("21400178");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikePrice_84.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_84("STRING_1329475717");
    noUnderlyings_0_2.set(UnderlyingSymbol_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbol_84.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_84("STRING_1638947960");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbolSfx_84.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_84("STRING_754136052");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingTimeUnit_84.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_84("STRING_65258030");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasure_84.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
    UnderlyingUnitOfMeasureQty_84.setString("4878143");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasureQty_84.getString());
    all_values.push_back(UnderlyingInstrument_84);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_177("STRING_2010846336");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltID_177.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_177("STRING_789141907");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltIDSource_177.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_178("STRING_1965188398");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltID_178.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_178("STRING_769138277");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltIDSource_178.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_179("STRING_1418871066");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltID_179.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_179("STRING_1679931359");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltIDSource_179.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
      FIX::UnderlyingStipType UnderlyingStipType_163("STRING_512438491");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipType_163.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_163("STRING_1988059001");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipValue_163.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
      FIX::UnderlyingStipType UnderlyingStipType_164("STRING_1951456668");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipType_164.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_164("STRING_446137340");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipValue_164.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_169("STRING_682089150");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyID_169.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_169('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyIDSource_169.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_169(564113832);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyRole_169.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_341("STRING_544879687");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubID_341.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_341(493214682);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubIDType_341.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_342("STRING_957656452");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubID_342.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_342(1501891229);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubIDType_342.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_343("STRING_307402371");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubID_343.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_343(780969786);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubIDType_343.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);

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
