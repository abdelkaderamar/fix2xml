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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_0;
  FIX::Account Account_30("STRING_2014356822");
  msg.set(Account_30);
  PositionMaintenanceReport_0.insert(Account_30.getString());
  FIX::AccountType AccountType_25(2);
  msg.set(AccountType_25);
  PositionMaintenanceReport_0.insert(AccountType_25.getString());
  FIX::AcctIDSource AcctIDSource_23(5);
  msg.set(AcctIDSource_23);
  PositionMaintenanceReport_0.insert(AcctIDSource_23.getString());
  FIX::AdjustmentType AdjustmentType_0(1);
  msg.set(AdjustmentType_0);
  PositionMaintenanceReport_0.insert(AdjustmentType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_15("LOCALMKTDATE_10320287");
  msg.set(ClearingBusinessDate_15);
  PositionMaintenanceReport_0.insert(ClearingBusinessDate_15.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_0(true);
  msg.set(ContraryInstructionIndicator_0);
  PositionMaintenanceReport_0.insert(ContraryInstructionIndicator_0.getString());
  FIX::Currency Currency_52("CHF");
  msg.set(Currency_52);
  PositionMaintenanceReport_0.insert(Currency_52.getString());
  FIX::EncodedText EncodedText_72("DATA_2092942244");
  msg.set(EncodedText_72);
  PositionMaintenanceReport_0.insert(EncodedText_72.getString());
  FIX::EncodedTextLen EncodedTextLen_72(406223931);
  msg.set(EncodedTextLen_72);
  PositionMaintenanceReport_0.insert(EncodedTextLen_72.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_0("STRING_688288747");
  msg.set(OrigPosReqRefID_0);
  PositionMaintenanceReport_0.insert(OrigPosReqRefID_0.getString());
  FIX::PosMaintAction PosMaintAction_0(3);
  msg.set(PosMaintAction_0);
  PositionMaintenanceReport_0.insert(PosMaintAction_0.getString());
  FIX::PosMaintResult PosMaintResult_0(99);
  msg.set(PosMaintResult_0);
  PositionMaintenanceReport_0.insert(PosMaintResult_0.getString());
  FIX::PosMaintRptID PosMaintRptID_1("STRING_1439587534");
  msg.set(PosMaintRptID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptID_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_1("STRING_101018648");
  msg.set(PosMaintRptRefID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptRefID_1.getString());
  FIX::PosMaintStatus PosMaintStatus_0(4);
  msg.set(PosMaintStatus_0);
  PositionMaintenanceReport_0.insert(PosMaintStatus_0.getString());
  FIX::PosReqID PosReqID_1("STRING_508325757");
  msg.set(PosReqID_1);
  PositionMaintenanceReport_0.insert(PosReqID_1.getString());
  FIX::PosTransType PosTransType_0(5);
  msg.set(PosTransType_0);
  PositionMaintenanceReport_0.insert(PosTransType_0.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_0(true);
  msg.set(PriorSpreadIndicator_0);
  PositionMaintenanceReport_0.insert(PriorSpreadIndicator_0.getString());
  FIX::SettlCurrency SettlCurrency_22("JPY");
  msg.set(SettlCurrency_22);
  PositionMaintenanceReport_0.insert(SettlCurrency_22.getString());
  FIX::SettlSessID SettlSessID_7("STRING_EOD");
  msg.set(SettlSessID_7);
  PositionMaintenanceReport_0.insert(SettlSessID_7.getString());
  FIX::SettlSessSubID SettlSessSubID_6("STRING_1046668934");
  msg.set(SettlSessSubID_6);
  PositionMaintenanceReport_0.insert(SettlSessSubID_6.getString());
  FIX::Text Text_72("STRING_250805001");
  msg.set(Text_72);
  PositionMaintenanceReport_0.insert(Text_72.getString());
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("2982823");
  msg.set(ThresholdAmount_1);
  PositionMaintenanceReport_0.insert(ThresholdAmount_1.getString());
  FIX::TransactTime TransactTime_54(FIX::UTCTIMESTAMP(11, 37, 55, 8, 8, 2005));
  msg.set(TransactTime_54);
  PositionMaintenanceReport_0.insert(TransactTime_54.getString());
  all_values.push_back(PositionMaintenanceReport_0);

  all_compo_names.insert("PositionMaintenanceReport");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_93;
    FIX::EncodedLegIssuer EncodedLegIssuer_93("DATA_478737495");
    noLegs_0_0.set(EncodedLegIssuer_93);
    InstrumentLeg_93.insert(EncodedLegIssuer_93.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_93(1462846242);
    noLegs_0_0.set(EncodedLegIssuerLen_93);
    InstrumentLeg_93.insert(EncodedLegIssuerLen_93.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_93("DATA_1190878725");
    noLegs_0_0.set(EncodedLegSecurityDesc_93);
    InstrumentLeg_93.insert(EncodedLegSecurityDesc_93.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_93(425509467);
    noLegs_0_0.set(EncodedLegSecurityDescLen_93);
    InstrumentLeg_93.insert(EncodedLegSecurityDescLen_93.getString());
    FIX::LegCFICode LegCFICode_93("STRING_1466100286");
    noLegs_0_0.set(LegCFICode_93);
    InstrumentLeg_93.insert(LegCFICode_93.getString());
    FIX::LegContractMultiplier LegContractMultiplier_93;
    LegContractMultiplier_93.setString("3515531");
    noLegs_0_0.set(LegContractMultiplier_93);
    InstrumentLeg_93.insert(LegContractMultiplier_93.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_93(370968064);
    noLegs_0_0.set(LegContractMultiplierUnit_93);
    InstrumentLeg_93.insert(LegContractMultiplierUnit_93.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_93("MONTHYEAR_1872324217");
    noLegs_0_0.set(LegContractSettlMonth_93);
    InstrumentLeg_93.insert(LegContractSettlMonth_93.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_93("COUNTRY_1039841934");
    noLegs_0_0.set(LegCountryOfIssue_93);
    InstrumentLeg_93.insert(LegCountryOfIssue_93.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_93("LOCALMKTDATE_1880277014");
    noLegs_0_0.set(LegCouponPaymentDate_93);
    InstrumentLeg_93.insert(LegCouponPaymentDate_93.getString());
    FIX::LegCouponRate LegCouponRate_93;
    LegCouponRate_93.setString("71.820000");
    noLegs_0_0.set(LegCouponRate_93);
    InstrumentLeg_93.insert(LegCouponRate_93.getString());
    FIX::LegCreditRating LegCreditRating_93("STRING_331945820");
    noLegs_0_0.set(LegCreditRating_93);
    InstrumentLeg_93.insert(LegCreditRating_93.getString());
    FIX::LegCurrency LegCurrency_93("EUR");
    noLegs_0_0.set(LegCurrency_93);
    InstrumentLeg_93.insert(LegCurrency_93.getString());
    FIX::LegDatedDate LegDatedDate_93("LOCALMKTDATE_840271577");
    noLegs_0_0.set(LegDatedDate_93);
    InstrumentLeg_93.insert(LegDatedDate_93.getString());
    FIX::LegExerciseStyle LegExerciseStyle_93(734766564);
    noLegs_0_0.set(LegExerciseStyle_93);
    InstrumentLeg_93.insert(LegExerciseStyle_93.getString());
    FIX::LegFactor LegFactor_93;
    LegFactor_93.setString("19677225");
    noLegs_0_0.set(LegFactor_93);
    InstrumentLeg_93.insert(LegFactor_93.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_93(126888421);
    noLegs_0_0.set(LegFlowScheduleType_93);
    InstrumentLeg_93.insert(LegFlowScheduleType_93.getString());
    FIX::LegInstrRegistry LegInstrRegistry_93("STRING_1871560817");
    noLegs_0_0.set(LegInstrRegistry_93);
    InstrumentLeg_93.insert(LegInstrRegistry_93.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_93("LOCALMKTDATE_179147178");
    noLegs_0_0.set(LegInterestAccrualDate_93);
    InstrumentLeg_93.insert(LegInterestAccrualDate_93.getString());
    FIX::LegIssueDate LegIssueDate_93("LOCALMKTDATE_1173557355");
    noLegs_0_0.set(LegIssueDate_93);
    InstrumentLeg_93.insert(LegIssueDate_93.getString());
    FIX::LegIssuer LegIssuer_93("STRING_2122365818");
    noLegs_0_0.set(LegIssuer_93);
    InstrumentLeg_93.insert(LegIssuer_93.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_93("STRING_477429560");
    noLegs_0_0.set(LegLocaleOfIssue_93);
    InstrumentLeg_93.insert(LegLocaleOfIssue_93.getString());
    FIX::LegMaturityDate LegMaturityDate_93("LOCALMKTDATE_1666904366");
    noLegs_0_0.set(LegMaturityDate_93);
    InstrumentLeg_93.insert(LegMaturityDate_93.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_93("MONTHYEAR_1688763845");
    noLegs_0_0.set(LegMaturityMonthYear_93);
    InstrumentLeg_93.insert(LegMaturityMonthYear_93.getString());
    FIX::LegMaturityTime LegMaturityTime_93("TZTIMEONLY_1717188777");
    noLegs_0_0.set(LegMaturityTime_93);
    InstrumentLeg_93.insert(LegMaturityTime_93.getString());
    FIX::LegOptAttribute LegOptAttribute_93('5');
    noLegs_0_0.set(LegOptAttribute_93);
    InstrumentLeg_93.insert(LegOptAttribute_93.getString());
    FIX::LegOptionRatio LegOptionRatio_93;
    LegOptionRatio_93.setString("21278328");
    noLegs_0_0.set(LegOptionRatio_93);
    InstrumentLeg_93.insert(LegOptionRatio_93.getString());
    FIX::LegPool LegPool_93("STRING_1019931884");
    noLegs_0_0.set(LegPool_93);
    InstrumentLeg_93.insert(LegPool_93.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_93("STRING_1481610282");
    noLegs_0_0.set(LegPriceUnitOfMeasure_93);
    InstrumentLeg_93.insert(LegPriceUnitOfMeasure_93.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
    LegPriceUnitOfMeasureQty_93.setString("11609075");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_93);
    InstrumentLeg_93.insert(LegPriceUnitOfMeasureQty_93.getString());
    FIX::LegProduct LegProduct_93(1498669379);
    noLegs_0_0.set(LegProduct_93);
    InstrumentLeg_93.insert(LegProduct_93.getString());
    FIX::LegPutOrCall LegPutOrCall_93(796972877);
    noLegs_0_0.set(LegPutOrCall_93);
    InstrumentLeg_93.insert(LegPutOrCall_93.getString());
    FIX::LegRatioQty LegRatioQty_93;
    LegRatioQty_93.setString("2043026");
    noLegs_0_0.set(LegRatioQty_93);
    InstrumentLeg_93.insert(LegRatioQty_93.getString());
    FIX::LegRedemptionDate LegRedemptionDate_93("LOCALMKTDATE_1924178847");
    noLegs_0_0.set(LegRedemptionDate_93);
    InstrumentLeg_93.insert(LegRedemptionDate_93.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_93("STRING_115589515");
    noLegs_0_0.set(LegRepoCollateralSecurityType_93);
    InstrumentLeg_93.insert(LegRepoCollateralSecurityType_93.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_93;
    LegRepurchaseRate_93.setString("58.600000");
    noLegs_0_0.set(LegRepurchaseRate_93);
    InstrumentLeg_93.insert(LegRepurchaseRate_93.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_93(147663263);
    noLegs_0_0.set(LegRepurchaseTerm_93);
    InstrumentLeg_93.insert(LegRepurchaseTerm_93.getString());
    FIX::LegSecurityDesc LegSecurityDesc_93("STRING_1987913732");
    noLegs_0_0.set(LegSecurityDesc_93);
    InstrumentLeg_93.insert(LegSecurityDesc_93.getString());
    FIX::LegSecurityExchange LegSecurityExchange_93("EXCHANGE_1595697794");
    noLegs_0_0.set(LegSecurityExchange_93);
    InstrumentLeg_93.insert(LegSecurityExchange_93.getString());
    FIX::LegSecurityID LegSecurityID_93("STRING_2027940277");
    noLegs_0_0.set(LegSecurityID_93);
    InstrumentLeg_93.insert(LegSecurityID_93.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_93("STRING_678527267");
    noLegs_0_0.set(LegSecurityIDSource_93);
    InstrumentLeg_93.insert(LegSecurityIDSource_93.getString());
    FIX::LegSecuritySubType LegSecuritySubType_93("STRING_1927643614");
    noLegs_0_0.set(LegSecuritySubType_93);
    InstrumentLeg_93.insert(LegSecuritySubType_93.getString());
    FIX::LegSecurityType LegSecurityType_93("STRING_1861752291");
    noLegs_0_0.set(LegSecurityType_93);
    InstrumentLeg_93.insert(LegSecurityType_93.getString());
    FIX::LegSide LegSide_93('1');
    noLegs_0_0.set(LegSide_93);
    InstrumentLeg_93.insert(LegSide_93.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_93("STRING_620431543");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_93);
    InstrumentLeg_93.insert(LegStateOrProvinceOfIssue_93.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_93("CAN");
    noLegs_0_0.set(LegStrikeCurrency_93);
    InstrumentLeg_93.insert(LegStrikeCurrency_93.getString());
    FIX::LegStrikePrice LegStrikePrice_93;
    LegStrikePrice_93.setString("7473199");
    noLegs_0_0.set(LegStrikePrice_93);
    InstrumentLeg_93.insert(LegStrikePrice_93.getString());
    FIX::LegSymbol LegSymbol_93("STRING_173112377");
    noLegs_0_0.set(LegSymbol_93);
    InstrumentLeg_93.insert(LegSymbol_93.getString());
    FIX::LegSymbolSfx LegSymbolSfx_93("STRING_1065641795");
    noLegs_0_0.set(LegSymbolSfx_93);
    InstrumentLeg_93.insert(LegSymbolSfx_93.getString());
    FIX::LegTimeUnit LegTimeUnit_93("STRING_1920877319");
    noLegs_0_0.set(LegTimeUnit_93);
    InstrumentLeg_93.insert(LegTimeUnit_93.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_93("STRING_147994547");
    noLegs_0_0.set(LegUnitOfMeasure_93);
    InstrumentLeg_93.insert(LegUnitOfMeasure_93.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
    LegUnitOfMeasureQty_93.setString("15430713");
    noLegs_0_0.set(LegUnitOfMeasureQty_93);
    InstrumentLeg_93.insert(LegUnitOfMeasureQty_93.getString());
    all_values.push_back(InstrumentLeg_93);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
      FIX::LegSecurityAltID LegSecurityAltID_190("STRING_1836758392");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltID_190.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_190("STRING_1112776485");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltIDSource_190.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
      FIX::LegSecurityAltID LegSecurityAltID_191("STRING_2007376950");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltID_191.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_191("STRING_1817107550");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltIDSource_191.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
      FIX::LegSecurityAltID LegSecurityAltID_192("STRING_2132708370");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_192);
      LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltID_192.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_192("STRING_1341503584");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_192);
      LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltIDSource_192.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_94;
    FIX::EncodedLegIssuer EncodedLegIssuer_94("DATA_830531498");
    noLegs_0_1.set(EncodedLegIssuer_94);
    InstrumentLeg_94.insert(EncodedLegIssuer_94.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_94(1483894101);
    noLegs_0_1.set(EncodedLegIssuerLen_94);
    InstrumentLeg_94.insert(EncodedLegIssuerLen_94.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_94("DATA_2138476461");
    noLegs_0_1.set(EncodedLegSecurityDesc_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDesc_94.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_94(1034834172);
    noLegs_0_1.set(EncodedLegSecurityDescLen_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDescLen_94.getString());
    FIX::LegCFICode LegCFICode_94("STRING_1260589300");
    noLegs_0_1.set(LegCFICode_94);
    InstrumentLeg_94.insert(LegCFICode_94.getString());
    FIX::LegContractMultiplier LegContractMultiplier_94;
    LegContractMultiplier_94.setString("1065823");
    noLegs_0_1.set(LegContractMultiplier_94);
    InstrumentLeg_94.insert(LegContractMultiplier_94.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_94(1590690032);
    noLegs_0_1.set(LegContractMultiplierUnit_94);
    InstrumentLeg_94.insert(LegContractMultiplierUnit_94.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_94("MONTHYEAR_1408252563");
    noLegs_0_1.set(LegContractSettlMonth_94);
    InstrumentLeg_94.insert(LegContractSettlMonth_94.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_94("COUNTRY_2094496061");
    noLegs_0_1.set(LegCountryOfIssue_94);
    InstrumentLeg_94.insert(LegCountryOfIssue_94.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_94("LOCALMKTDATE_1038904178");
    noLegs_0_1.set(LegCouponPaymentDate_94);
    InstrumentLeg_94.insert(LegCouponPaymentDate_94.getString());
    FIX::LegCouponRate LegCouponRate_94;
    LegCouponRate_94.setString("91.920000");
    noLegs_0_1.set(LegCouponRate_94);
    InstrumentLeg_94.insert(LegCouponRate_94.getString());
    FIX::LegCreditRating LegCreditRating_94("STRING_625539680");
    noLegs_0_1.set(LegCreditRating_94);
    InstrumentLeg_94.insert(LegCreditRating_94.getString());
    FIX::LegCurrency LegCurrency_94("JPY");
    noLegs_0_1.set(LegCurrency_94);
    InstrumentLeg_94.insert(LegCurrency_94.getString());
    FIX::LegDatedDate LegDatedDate_94("LOCALMKTDATE_1691795366");
    noLegs_0_1.set(LegDatedDate_94);
    InstrumentLeg_94.insert(LegDatedDate_94.getString());
    FIX::LegExerciseStyle LegExerciseStyle_94(1439495687);
    noLegs_0_1.set(LegExerciseStyle_94);
    InstrumentLeg_94.insert(LegExerciseStyle_94.getString());
    FIX::LegFactor LegFactor_94;
    LegFactor_94.setString("14520130");
    noLegs_0_1.set(LegFactor_94);
    InstrumentLeg_94.insert(LegFactor_94.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_94(430806335);
    noLegs_0_1.set(LegFlowScheduleType_94);
    InstrumentLeg_94.insert(LegFlowScheduleType_94.getString());
    FIX::LegInstrRegistry LegInstrRegistry_94("STRING_39332003");
    noLegs_0_1.set(LegInstrRegistry_94);
    InstrumentLeg_94.insert(LegInstrRegistry_94.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_94("LOCALMKTDATE_1625125421");
    noLegs_0_1.set(LegInterestAccrualDate_94);
    InstrumentLeg_94.insert(LegInterestAccrualDate_94.getString());
    FIX::LegIssueDate LegIssueDate_94("LOCALMKTDATE_1496448130");
    noLegs_0_1.set(LegIssueDate_94);
    InstrumentLeg_94.insert(LegIssueDate_94.getString());
    FIX::LegIssuer LegIssuer_94("STRING_1960209322");
    noLegs_0_1.set(LegIssuer_94);
    InstrumentLeg_94.insert(LegIssuer_94.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_94("STRING_1773119968");
    noLegs_0_1.set(LegLocaleOfIssue_94);
    InstrumentLeg_94.insert(LegLocaleOfIssue_94.getString());
    FIX::LegMaturityDate LegMaturityDate_94("LOCALMKTDATE_892035838");
    noLegs_0_1.set(LegMaturityDate_94);
    InstrumentLeg_94.insert(LegMaturityDate_94.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_94("MONTHYEAR_1253023711");
    noLegs_0_1.set(LegMaturityMonthYear_94);
    InstrumentLeg_94.insert(LegMaturityMonthYear_94.getString());
    FIX::LegMaturityTime LegMaturityTime_94("TZTIMEONLY_1462394712");
    noLegs_0_1.set(LegMaturityTime_94);
    InstrumentLeg_94.insert(LegMaturityTime_94.getString());
    FIX::LegOptAttribute LegOptAttribute_94('2');
    noLegs_0_1.set(LegOptAttribute_94);
    InstrumentLeg_94.insert(LegOptAttribute_94.getString());
    FIX::LegOptionRatio LegOptionRatio_94;
    LegOptionRatio_94.setString("11129170");
    noLegs_0_1.set(LegOptionRatio_94);
    InstrumentLeg_94.insert(LegOptionRatio_94.getString());
    FIX::LegPool LegPool_94("STRING_1132018615");
    noLegs_0_1.set(LegPool_94);
    InstrumentLeg_94.insert(LegPool_94.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_94("STRING_1990037046");
    noLegs_0_1.set(LegPriceUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasure_94.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
    LegPriceUnitOfMeasureQty_94.setString("3069369");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasureQty_94.getString());
    FIX::LegProduct LegProduct_94(1962550113);
    noLegs_0_1.set(LegProduct_94);
    InstrumentLeg_94.insert(LegProduct_94.getString());
    FIX::LegPutOrCall LegPutOrCall_94(1326447499);
    noLegs_0_1.set(LegPutOrCall_94);
    InstrumentLeg_94.insert(LegPutOrCall_94.getString());
    FIX::LegRatioQty LegRatioQty_94;
    LegRatioQty_94.setString("2979297");
    noLegs_0_1.set(LegRatioQty_94);
    InstrumentLeg_94.insert(LegRatioQty_94.getString());
    FIX::LegRedemptionDate LegRedemptionDate_94("LOCALMKTDATE_849900637");
    noLegs_0_1.set(LegRedemptionDate_94);
    InstrumentLeg_94.insert(LegRedemptionDate_94.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_94("STRING_439553152");
    noLegs_0_1.set(LegRepoCollateralSecurityType_94);
    InstrumentLeg_94.insert(LegRepoCollateralSecurityType_94.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_94;
    LegRepurchaseRate_94.setString("20.910000");
    noLegs_0_1.set(LegRepurchaseRate_94);
    InstrumentLeg_94.insert(LegRepurchaseRate_94.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_94(293107021);
    noLegs_0_1.set(LegRepurchaseTerm_94);
    InstrumentLeg_94.insert(LegRepurchaseTerm_94.getString());
    FIX::LegSecurityDesc LegSecurityDesc_94("STRING_1847805715");
    noLegs_0_1.set(LegSecurityDesc_94);
    InstrumentLeg_94.insert(LegSecurityDesc_94.getString());
    FIX::LegSecurityExchange LegSecurityExchange_94("EXCHANGE_351524504");
    noLegs_0_1.set(LegSecurityExchange_94);
    InstrumentLeg_94.insert(LegSecurityExchange_94.getString());
    FIX::LegSecurityID LegSecurityID_94("STRING_1332011199");
    noLegs_0_1.set(LegSecurityID_94);
    InstrumentLeg_94.insert(LegSecurityID_94.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_94("STRING_989031260");
    noLegs_0_1.set(LegSecurityIDSource_94);
    InstrumentLeg_94.insert(LegSecurityIDSource_94.getString());
    FIX::LegSecuritySubType LegSecuritySubType_94("STRING_977064184");
    noLegs_0_1.set(LegSecuritySubType_94);
    InstrumentLeg_94.insert(LegSecuritySubType_94.getString());
    FIX::LegSecurityType LegSecurityType_94("STRING_3591695");
    noLegs_0_1.set(LegSecurityType_94);
    InstrumentLeg_94.insert(LegSecurityType_94.getString());
    FIX::LegSide LegSide_94('1');
    noLegs_0_1.set(LegSide_94);
    InstrumentLeg_94.insert(LegSide_94.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_94("STRING_521375902");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_94);
    InstrumentLeg_94.insert(LegStateOrProvinceOfIssue_94.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_94("JPY");
    noLegs_0_1.set(LegStrikeCurrency_94);
    InstrumentLeg_94.insert(LegStrikeCurrency_94.getString());
    FIX::LegStrikePrice LegStrikePrice_94;
    LegStrikePrice_94.setString("9521822");
    noLegs_0_1.set(LegStrikePrice_94);
    InstrumentLeg_94.insert(LegStrikePrice_94.getString());
    FIX::LegSymbol LegSymbol_94("STRING_1482419385");
    noLegs_0_1.set(LegSymbol_94);
    InstrumentLeg_94.insert(LegSymbol_94.getString());
    FIX::LegSymbolSfx LegSymbolSfx_94("STRING_774180265");
    noLegs_0_1.set(LegSymbolSfx_94);
    InstrumentLeg_94.insert(LegSymbolSfx_94.getString());
    FIX::LegTimeUnit LegTimeUnit_94("STRING_301146720");
    noLegs_0_1.set(LegTimeUnit_94);
    InstrumentLeg_94.insert(LegTimeUnit_94.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_94("STRING_1295145059");
    noLegs_0_1.set(LegUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegUnitOfMeasure_94.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
    LegUnitOfMeasureQty_94.setString("3998165");
    noLegs_0_1.set(LegUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegUnitOfMeasureQty_94.getString());
    all_values.push_back(InstrumentLeg_94);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
      FIX::LegSecurityAltID LegSecurityAltID_193("STRING_400685122");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_193);
      LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltID_193.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_193("STRING_1862211297");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_193);
      LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltIDSource_193.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
      FIX::LegSecurityAltID LegSecurityAltID_194("STRING_1050511234");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_194);
      LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltID_194.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_194("STRING_1513602135");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_194);
      LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltIDSource_194.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_63;
  FIX::AttachmentPoint AttachmentPoint_63;
  AttachmentPoint_63.setString("62.640000");
  msg.set(AttachmentPoint_63);
  Instrument_63.insert(AttachmentPoint_63.getString());
  FIX::CFICode CFICode_63("STRING_893064632");
  msg.set(CFICode_63);
  Instrument_63.insert(CFICode_63.getString());
  FIX::CPProgram CPProgram_63(99);
  msg.set(CPProgram_63);
  Instrument_63.insert(CPProgram_63.getString());
  FIX::CPRegType CPRegType_63("STRING_661812730");
  msg.set(CPRegType_63);
  Instrument_63.insert(CPRegType_63.getString());
  FIX::CapPrice CapPrice_63;
  CapPrice_63.setString("720284");
  msg.set(CapPrice_63);
  Instrument_63.insert(CapPrice_63.getString());
  FIX::ContractMultiplier ContractMultiplier_63;
  ContractMultiplier_63.setString("21184688");
  msg.set(ContractMultiplier_63);
  Instrument_63.insert(ContractMultiplier_63.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_63(2);
  msg.set(ContractMultiplierUnit_63);
  Instrument_63.insert(ContractMultiplierUnit_63.getString());
  FIX::ContractSettlMonth ContractSettlMonth_63("MONTHYEAR_511581636");
  msg.set(ContractSettlMonth_63);
  Instrument_63.insert(ContractSettlMonth_63.getString());
  FIX::CountryOfIssue CountryOfIssue_63("COUNTRY_375497291");
  msg.set(CountryOfIssue_63);
  Instrument_63.insert(CountryOfIssue_63.getString());
  FIX::CouponPaymentDate CouponPaymentDate_63("LOCALMKTDATE_1804820389");
  msg.set(CouponPaymentDate_63);
  Instrument_63.insert(CouponPaymentDate_63.getString());
  FIX::CouponRate CouponRate_63;
  CouponRate_63.setString("37.030000");
  msg.set(CouponRate_63);
  Instrument_63.insert(CouponRate_63.getString());
  FIX::CreditRating CreditRating_63("STRING_727021796");
  msg.set(CreditRating_63);
  Instrument_63.insert(CreditRating_63.getString());
  FIX::DatedDate DatedDate_63("LOCALMKTDATE_989347940");
  msg.set(DatedDate_63);
  Instrument_63.insert(DatedDate_63.getString());
  FIX::DetachmentPoint DetachmentPoint_63;
  DetachmentPoint_63.setString("49.630000");
  msg.set(DetachmentPoint_63);
  Instrument_63.insert(DetachmentPoint_63.getString());
  FIX::EncodedIssuer EncodedIssuer_63("DATA_1704085980");
  msg.set(EncodedIssuer_63);
  Instrument_63.insert(EncodedIssuer_63.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_63(992939636);
  msg.set(EncodedIssuerLen_63);
  Instrument_63.insert(EncodedIssuerLen_63.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_63("DATA_1045460411");
  msg.set(EncodedSecurityDesc_63);
  Instrument_63.insert(EncodedSecurityDesc_63.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_63(77978235);
  msg.set(EncodedSecurityDescLen_63);
  Instrument_63.insert(EncodedSecurityDescLen_63.getString());
  FIX::ExerciseStyle ExerciseStyle_63(1);
  msg.set(ExerciseStyle_63);
  Instrument_63.insert(ExerciseStyle_63.getString());
  FIX::Factor Factor_63;
  Factor_63.setString("1945152");
  msg.set(Factor_63);
  Instrument_63.insert(Factor_63.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_63(true);
  msg.set(FlexProductEligibilityIndicator_63);
  Instrument_63.insert(FlexProductEligibilityIndicator_63.getString());
  FIX::FlexibleIndicator FlexibleIndicator_63(true);
  msg.set(FlexibleIndicator_63);
  Instrument_63.insert(FlexibleIndicator_63.getString());
  FIX::FloorPrice FloorPrice_63;
  FloorPrice_63.setString("9686955");
  msg.set(FloorPrice_63);
  Instrument_63.insert(FloorPrice_63.getString());
  FIX::FlowScheduleType FlowScheduleType_63(2);
  msg.set(FlowScheduleType_63);
  Instrument_63.insert(FlowScheduleType_63.getString());
  FIX::InstrRegistry InstrRegistry_63("STRING_918624167");
  msg.set(InstrRegistry_63);
  Instrument_63.insert(InstrRegistry_63.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_63('1');
  msg.set(InstrmtAssignmentMethod_63);
  Instrument_63.insert(InstrmtAssignmentMethod_63.getString());
  FIX::InterestAccrualDate InterestAccrualDate_63("LOCALMKTDATE_377006103");
  msg.set(InterestAccrualDate_63);
  Instrument_63.insert(InterestAccrualDate_63.getString());
  FIX::IssueDate IssueDate_63("LOCALMKTDATE_1319309290");
  msg.set(IssueDate_63);
  Instrument_63.insert(IssueDate_63.getString());
  FIX::Issuer Issuer_63("STRING_1083239755");
  msg.set(Issuer_63);
  Instrument_63.insert(Issuer_63.getString());
  FIX::ListMethod ListMethod_63(1);
  msg.set(ListMethod_63);
  Instrument_63.insert(ListMethod_63.getString());
  FIX::LocaleOfIssue LocaleOfIssue_63("STRING_685427777");
  msg.set(LocaleOfIssue_63);
  Instrument_63.insert(LocaleOfIssue_63.getString());
  FIX::MaturityDate MaturityDate_63("LOCALMKTDATE_1929986019");
  msg.set(MaturityDate_63);
  Instrument_63.insert(MaturityDate_63.getString());
  FIX::MaturityMonthYear MaturityMonthYear_63("MONTHYEAR_173098322");
  msg.set(MaturityMonthYear_63);
  Instrument_63.insert(MaturityMonthYear_63.getString());
  FIX::MaturityTime MaturityTime_63("TZTIMEONLY_358483214");
  msg.set(MaturityTime_63);
  Instrument_63.insert(MaturityTime_63.getString());
  FIX::MinPriceIncrement MinPriceIncrement_63;
  MinPriceIncrement_63.setString("4443151");
  msg.set(MinPriceIncrement_63);
  Instrument_63.insert(MinPriceIncrement_63.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
  MinPriceIncrementAmount_63.setString("2451268");
  msg.set(MinPriceIncrementAmount_63);
  Instrument_63.insert(MinPriceIncrementAmount_63.getString());
  FIX::NTPositionLimit NTPositionLimit_63(329468414);
  msg.set(NTPositionLimit_63);
  Instrument_63.insert(NTPositionLimit_63.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
  NotionalPercentageOutstanding_63.setString("84.690000");
  msg.set(NotionalPercentageOutstanding_63);
  Instrument_63.insert(NotionalPercentageOutstanding_63.getString());
  FIX::OptAttribute OptAttribute_63('7');
  msg.set(OptAttribute_63);
  Instrument_63.insert(OptAttribute_63.getString());
  FIX::OptPayoutAmount OptPayoutAmount_63;
  OptPayoutAmount_63.setString("7049657");
  msg.set(OptPayoutAmount_63);
  Instrument_63.insert(OptPayoutAmount_63.getString());
  FIX::OptPayoutType OptPayoutType_63(2);
  msg.set(OptPayoutType_63);
  Instrument_63.insert(OptPayoutType_63.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
  OriginalNotionalPercentageOutstanding_63.setString("21.450000");
  msg.set(OriginalNotionalPercentageOutstanding_63);
  Instrument_63.insert(OriginalNotionalPercentageOutstanding_63.getString());
  FIX::Pool Pool_63("STRING_1431987502");
  msg.set(Pool_63);
  Instrument_63.insert(Pool_63.getString());
  FIX::PositionLimit PositionLimit_63(455229502);
  msg.set(PositionLimit_63);
  Instrument_63.insert(PositionLimit_63.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_63("STRING_INX");
  msg.set(PriceQuoteMethod_63);
  Instrument_63.insert(PriceQuoteMethod_63.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_63("STRING_988589834");
  msg.set(PriceUnitOfMeasure_63);
  Instrument_63.insert(PriceUnitOfMeasure_63.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
  PriceUnitOfMeasureQty_63.setString("14481691");
  msg.set(PriceUnitOfMeasureQty_63);
  Instrument_63.insert(PriceUnitOfMeasureQty_63.getString());
  FIX::Product Product_65(13);
  msg.set(Product_65);
  Instrument_63.insert(Product_65.getString());
  FIX::ProductComplex ProductComplex_63("STRING_1066568069");
  msg.set(ProductComplex_63);
  Instrument_63.insert(ProductComplex_63.getString());
  FIX::PutOrCall PutOrCall_63(1);
  msg.set(PutOrCall_63);
  Instrument_63.insert(PutOrCall_63.getString());
  FIX::RedemptionDate RedemptionDate_63("LOCALMKTDATE_1262039128");
  msg.set(RedemptionDate_63);
  Instrument_63.insert(RedemptionDate_63.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_63("STRING_2096728542");
  msg.set(RepoCollateralSecurityType_63);
  Instrument_63.insert(RepoCollateralSecurityType_63.getString());
  FIX::RepurchaseRate RepurchaseRate_63;
  RepurchaseRate_63.setString("16.170000");
  msg.set(RepurchaseRate_63);
  Instrument_63.insert(RepurchaseRate_63.getString());
  FIX::RepurchaseTerm RepurchaseTerm_63(83251000);
  msg.set(RepurchaseTerm_63);
  Instrument_63.insert(RepurchaseTerm_63.getString());
  FIX::RestructuringType RestructuringType_63("STRING_MM");
  msg.set(RestructuringType_63);
  Instrument_63.insert(RestructuringType_63.getString());
  FIX::SecurityDesc SecurityDesc_63("STRING_131332136");
  msg.set(SecurityDesc_63);
  Instrument_63.insert(SecurityDesc_63.getString());
  FIX::SecurityExchange SecurityExchange_63("EXCHANGE_1451763106");
  msg.set(SecurityExchange_63);
  Instrument_63.insert(SecurityExchange_63.getString());
  FIX::SecurityGroup SecurityGroup_63("STRING_1657558189");
  msg.set(SecurityGroup_63);
  Instrument_63.insert(SecurityGroup_63.getString());
  FIX::SecurityID SecurityID_63("STRING_1450641426");
  msg.set(SecurityID_63);
  Instrument_63.insert(SecurityID_63.getString());
  FIX::SecurityIDSource SecurityIDSource_63("STRING_G");
  msg.set(SecurityIDSource_63);
  Instrument_63.insert(SecurityIDSource_63.getString());
  FIX::SecurityStatus SecurityStatus_63("STRING_2");
  msg.set(SecurityStatus_63);
  Instrument_63.insert(SecurityStatus_63.getString());
  FIX::SecuritySubType SecuritySubType_64("STRING_2136069204");
  msg.set(SecuritySubType_64);
  Instrument_63.insert(SecuritySubType_64.getString());
  FIX::SecurityType SecurityType_65("STRING_TECP");
  msg.set(SecurityType_65);
  Instrument_63.insert(SecurityType_65.getString());
  FIX::Seniority Seniority_63("STRING_SD");
  msg.set(Seniority_63);
  Instrument_63.insert(Seniority_63.getString());
  FIX::SettlMethod SettlMethod_63('C');
  msg.set(SettlMethod_63);
  Instrument_63.insert(SettlMethod_63.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_63("STRING_614336686");
  msg.set(SettleOnOpenFlag_63);
  Instrument_63.insert(SettleOnOpenFlag_63.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_63("STRING_1355817007");
  msg.set(StateOrProvinceOfIssue_63);
  Instrument_63.insert(StateOrProvinceOfIssue_63.getString());
  FIX::StrikeCurrency StrikeCurrency_63("EUR");
  msg.set(StrikeCurrency_63);
  Instrument_63.insert(StrikeCurrency_63.getString());
  FIX::StrikeMultiplier StrikeMultiplier_63;
  StrikeMultiplier_63.setString("21125254");
  msg.set(StrikeMultiplier_63);
  Instrument_63.insert(StrikeMultiplier_63.getString());
  FIX::StrikePrice StrikePrice_63;
  StrikePrice_63.setString("13815028");
  msg.set(StrikePrice_63);
  Instrument_63.insert(StrikePrice_63.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_63(3);
  msg.set(StrikePriceBoundaryMethod_63);
  Instrument_63.insert(StrikePriceBoundaryMethod_63.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
  StrikePriceBoundaryPrecision_63.setString("39.460000");
  msg.set(StrikePriceBoundaryPrecision_63);
  Instrument_63.insert(StrikePriceBoundaryPrecision_63.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_63(2);
  msg.set(StrikePriceDeterminationMethod_63);
  Instrument_63.insert(StrikePriceDeterminationMethod_63.getString());
  FIX::StrikeValue StrikeValue_63;
  StrikeValue_63.setString("3439925");
  msg.set(StrikeValue_63);
  Instrument_63.insert(StrikeValue_63.getString());
  FIX::Symbol Symbol_63("STRING_955717407");
  msg.set(Symbol_63);
  Instrument_63.insert(Symbol_63.getString());
  FIX::SymbolSfx SymbolSfx_63("STRING_WI");
  msg.set(SymbolSfx_63);
  Instrument_63.insert(SymbolSfx_63.getString());
  FIX::TimeUnit TimeUnit_63("STRING_D");
  msg.set(TimeUnit_63);
  Instrument_63.insert(TimeUnit_63.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_63(1);
  msg.set(UnderlyingPriceDeterminationMethod_63);
  Instrument_63.insert(UnderlyingPriceDeterminationMethod_63.getString());
  FIX::UnitOfMeasure UnitOfMeasure_63("STRING_tn");
  msg.set(UnitOfMeasure_63);
  Instrument_63.insert(UnitOfMeasure_63.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
  UnitOfMeasureQty_63.setString("13813905");
  msg.set(UnitOfMeasureQty_63);
  Instrument_63.insert(UnitOfMeasureQty_63.getString());
  FIX::ValuationMethod ValuationMethod_63("STRING_EQTY");
  msg.set(ValuationMethod_63);
  Instrument_63.insert(ValuationMethod_63.getString());
  all_values.push_back(Instrument_63);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_130;
    FIX::ComplexEventCondition ComplexEventCondition_130(1);
    noComplexEvents_0_0.set(ComplexEventCondition_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventCondition_130.getString());
    FIX::ComplexEventPrice ComplexEventPrice_130;
    ComplexEventPrice_130.setString("12210477");
    noComplexEvents_0_0.set(ComplexEventPrice_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPrice_130.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_130(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryMethod_130.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
    ComplexEventPriceBoundaryPrecision_130.setString("6.760000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryPrecision_130.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_130(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceTimeType_130.getString());
    FIX::ComplexEventType ComplexEventType_130(4);
    noComplexEvents_0_0.set(ComplexEventType_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventType_130.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
    ComplexOptPayoutAmount_130.setString("285884");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexOptPayoutAmount_130.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_130);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_265;
      FIX::ComplexEventEndDate ComplexEventEndDate_265(FIX::UTCTIMESTAMP(19, 16, 35, 21, 3, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_265);
      ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventEndDate_265.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_265(FIX::UTCTIMESTAMP(9, 55, 49, 2, 2, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_265);
      ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventStartDate_265.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_265);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
        FIX::ComplexEventEndTime ComplexEventEndTime_541(FIX::UTCTIMEONLY(22, 31, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventEndTime_541.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_541(FIX::UTCTIMEONLY(10, 33, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventStartTime_541.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
        FIX::ComplexEventEndTime ComplexEventEndTime_542(FIX::UTCTIMEONLY(13, 35, 3));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventEndTime_542.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_542(FIX::UTCTIMEONLY(6, 18, 15));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventStartTime_542.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
        FIX::ComplexEventEndTime ComplexEventEndTime_543(FIX::UTCTIMEONLY(13, 23, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventEndTime_543.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_543(FIX::UTCTIMEONLY(5, 53, 37));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventStartTime_543.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_266;
      FIX::ComplexEventEndDate ComplexEventEndDate_266(FIX::UTCTIMESTAMP(16, 26, 36, 22, 10, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_266);
      ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventEndDate_266.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_266(FIX::UTCTIMESTAMP(19, 33, 16, 18, 9, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_266);
      ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventStartDate_266.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_266);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
        FIX::ComplexEventEndTime ComplexEventEndTime_544(FIX::UTCTIMEONLY(18, 47, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventEndTime_544.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_544(FIX::UTCTIMEONLY(18, 15, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventStartTime_544.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
        FIX::ComplexEventEndTime ComplexEventEndTime_545(FIX::UTCTIMEONLY(8, 41, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventEndTime_545.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_545(FIX::UTCTIMEONLY(23, 59, 16));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventStartTime_545.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
        FIX::ComplexEventEndTime ComplexEventEndTime_546(FIX::UTCTIMEONLY(4, 34, 46));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventEndTime_546.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_546(FIX::UTCTIMEONLY(19, 48, 9));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventStartTime_546.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_267;
      FIX::ComplexEventEndDate ComplexEventEndDate_267(FIX::UTCTIMESTAMP(21, 17, 16, 21, 11, 2016));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_267);
      ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventEndDate_267.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_267(FIX::UTCTIMESTAMP(20, 16, 13, 11, 3, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_267);
      ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventStartDate_267.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_267);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
        FIX::ComplexEventEndTime ComplexEventEndTime_547(FIX::UTCTIMEONLY(17, 50, 34));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventEndTime_547.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_547(FIX::UTCTIMEONLY(17, 26, 12));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventStartTime_547.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
        FIX::ComplexEventEndTime ComplexEventEndTime_548(FIX::UTCTIMEONLY(6, 47, 29));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventEndTime_548.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_548(FIX::UTCTIMEONLY(10, 17, 21));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventStartTime_548.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
        FIX::ComplexEventEndTime ComplexEventEndTime_549(FIX::UTCTIMEONLY(14, 38, 13));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventEndTime_549.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_549(FIX::UTCTIMEONLY(4, 42, 16));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventStartTime_549.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_131;
    FIX::ComplexEventCondition ComplexEventCondition_131(1);
    noComplexEvents_0_1.set(ComplexEventCondition_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventCondition_131.getString());
    FIX::ComplexEventPrice ComplexEventPrice_131;
    ComplexEventPrice_131.setString("21139383");
    noComplexEvents_0_1.set(ComplexEventPrice_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPrice_131.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_131(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryMethod_131.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
    ComplexEventPriceBoundaryPrecision_131.setString("74.630000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryPrecision_131.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_131(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceTimeType_131.getString());
    FIX::ComplexEventType ComplexEventType_131(4);
    noComplexEvents_0_1.set(ComplexEventType_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexEventType_131.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
    ComplexOptPayoutAmount_131.setString("13093000");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_131);
    ComplexEvents_NoComplexEvents_131.insert(ComplexOptPayoutAmount_131.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_131);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_268;
      FIX::ComplexEventEndDate ComplexEventEndDate_268(FIX::UTCTIMESTAMP(19, 11, 56, 0, 2, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_268);
      ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventEndDate_268.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_268(FIX::UTCTIMESTAMP(11, 48, 24, 15, 11, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_268);
      ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventStartDate_268.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_268);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
        FIX::ComplexEventEndTime ComplexEventEndTime_550(FIX::UTCTIMEONLY(20, 30, 45));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_550);
        ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventEndTime_550.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_550(FIX::UTCTIMEONLY(22, 27, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_550);
        ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventStartTime_550.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_132;
    FIX::ComplexEventCondition ComplexEventCondition_132(1);
    noComplexEvents_0_2.set(ComplexEventCondition_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventCondition_132.getString());
    FIX::ComplexEventPrice ComplexEventPrice_132;
    ComplexEventPrice_132.setString("17144337");
    noComplexEvents_0_2.set(ComplexEventPrice_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPrice_132.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_132(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryMethod_132.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
    ComplexEventPriceBoundaryPrecision_132.setString("15.980000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryPrecision_132.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_132(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceTimeType_132.getString());
    FIX::ComplexEventType ComplexEventType_132(5);
    noComplexEvents_0_2.set(ComplexEventType_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventType_132.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
    ComplexOptPayoutAmount_132.setString("2722079");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexOptPayoutAmount_132.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_132);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_269;
      FIX::ComplexEventEndDate ComplexEventEndDate_269(FIX::UTCTIMESTAMP(9, 4, 20, 18, 10, 2003));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_269);
      ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventEndDate_269.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_269(FIX::UTCTIMESTAMP(20, 1, 58, 23, 5, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_269);
      ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventStartDate_269.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_269);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
        FIX::ComplexEventEndTime ComplexEventEndTime_551(FIX::UTCTIMEONLY(7, 1, 36));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_551);
        ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventEndTime_551.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_551(FIX::UTCTIMEONLY(15, 55, 23));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_551);
        ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventStartTime_551.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_270;
      FIX::ComplexEventEndDate ComplexEventEndDate_270(FIX::UTCTIMESTAMP(12, 13, 36, 21, 6, 2010));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_270);
      ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventEndDate_270.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_270(FIX::UTCTIMESTAMP(5, 20, 35, 17, 11, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_270);
      ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventStartDate_270.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_270);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
        FIX::ComplexEventEndTime ComplexEventEndTime_552(FIX::UTCTIMEONLY(21, 44, 21));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_552);
        ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventEndTime_552.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_552(FIX::UTCTIMEONLY(4, 45, 20));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_552);
        ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventStartTime_552.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
        FIX::ComplexEventEndTime ComplexEventEndTime_553(FIX::UTCTIMEONLY(4, 22, 32));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_553);
        ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventEndTime_553.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_553(FIX::UTCTIMEONLY(13, 28, 39));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_553);
        ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventStartTime_553.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_122;
    FIX::EventDate EventDate_122("LOCALMKTDATE_1273616252");
    noEvents_0_0.set(EventDate_122);
    EvntGrp_NoEvents_122.insert(EventDate_122.getString());
    FIX::EventPx EventPx_122;
    EventPx_122.setString("13230297");
    noEvents_0_0.set(EventPx_122);
    EvntGrp_NoEvents_122.insert(EventPx_122.getString());
    FIX::EventText EventText_122("STRING_1544786447");
    noEvents_0_0.set(EventText_122);
    EvntGrp_NoEvents_122.insert(EventText_122.getString());
    FIX::EventTime EventTime_122(FIX::UTCTIMESTAMP(1, 26, 33, 10, 11, 2006));
    noEvents_0_0.set(EventTime_122);
    EvntGrp_NoEvents_122.insert(EventTime_122.getString());
    FIX::EventType EventType_122(17);
    noEvents_0_0.set(EventType_122);
    EvntGrp_NoEvents_122.insert(EventType_122.getString());
    all_values.push_back(EvntGrp_NoEvents_122);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_123;
    FIX::EventDate EventDate_123("LOCALMKTDATE_1854615344");
    noEvents_0_1.set(EventDate_123);
    EvntGrp_NoEvents_123.insert(EventDate_123.getString());
    FIX::EventPx EventPx_123;
    EventPx_123.setString("14141901");
    noEvents_0_1.set(EventPx_123);
    EvntGrp_NoEvents_123.insert(EventPx_123.getString());
    FIX::EventText EventText_123("STRING_427450311");
    noEvents_0_1.set(EventText_123);
    EvntGrp_NoEvents_123.insert(EventText_123.getString());
    FIX::EventTime EventTime_123(FIX::UTCTIMESTAMP(7, 35, 21, 16, 9, 2012));
    noEvents_0_1.set(EventTime_123);
    EvntGrp_NoEvents_123.insert(EventTime_123.getString());
    FIX::EventType EventType_123(1);
    noEvents_0_1.set(EventType_123);
    EvntGrp_NoEvents_123.insert(EventType_123.getString());
    all_values.push_back(EvntGrp_NoEvents_123);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_124;
    FIX::EventDate EventDate_124("LOCALMKTDATE_455821228");
    noEvents_0_2.set(EventDate_124);
    EvntGrp_NoEvents_124.insert(EventDate_124.getString());
    FIX::EventPx EventPx_124;
    EventPx_124.setString("14646885");
    noEvents_0_2.set(EventPx_124);
    EvntGrp_NoEvents_124.insert(EventPx_124.getString());
    FIX::EventText EventText_124("STRING_1674606102");
    noEvents_0_2.set(EventText_124);
    EvntGrp_NoEvents_124.insert(EventText_124.getString());
    FIX::EventTime EventTime_124(FIX::UTCTIMESTAMP(18, 48, 20, 18, 4, 2017));
    noEvents_0_2.set(EventTime_124);
    EvntGrp_NoEvents_124.insert(EventTime_124.getString());
    FIX::EventType EventType_124(19);
    noEvents_0_2.set(EventType_124);
    EvntGrp_NoEvents_124.insert(EventType_124.getString());
    all_values.push_back(EvntGrp_NoEvents_124);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_128;
    FIX::InstrumentPartyID InstrumentPartyID_128("STRING_928294787");
    noInstrumentParties_0_0.set(InstrumentPartyID_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyID_128.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_128('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyIDSource_128.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_128(1927810025);
    noInstrumentParties_0_0.set(InstrumentPartyRole_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyRole_128.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_128);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
      FIX::InstrumentPartySubID InstrumentPartySubID_242("STRING_317359214");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_242);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubID_242.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_242(627970663);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_242);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubIDType_242.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_119;
    FIX::SecurityAltID SecurityAltID_119("STRING_85748602");
    noSecurityAltID_0_0.set(SecurityAltID_119);
    SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltID_119.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_119("STRING_335102359");
    noSecurityAltID_0_0.set(SecurityAltIDSource_119);
    SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltIDSource_119.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_126;
  FIX::SecurityXML SecurityXML_127("XMLDATA_426743774");
  msg.set(SecurityXML_127);
  FIX::SecurityXMLLen SecurityXMLLen_63(513198913);
  msg.set(SecurityXMLLen_63);
  FIX::SecurityXMLSchema SecurityXMLSchema_63("STRING_1948779626");
  msg.set(SecurityXMLSchema_63);
  SecurityXML_126.insert(SecurityXMLSchema_63.getString());
  all_values.push_back(SecurityXML_126);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    FIX::PartyID PartyID_96("STRING_488604821");
    noPartyIDs_0_0.set(PartyID_96);
    Parties_NoPartyIDs_96.insert(PartyID_96.getString());
    FIX::PartyIDSource PartyIDSource_96('F');
    noPartyIDs_0_0.set(PartyIDSource_96);
    Parties_NoPartyIDs_96.insert(PartyIDSource_96.getString());
    FIX::PartyRole PartyRole_96(75);
    noPartyIDs_0_0.set(PartyRole_96);
    Parties_NoPartyIDs_96.insert(PartyRole_96.getString());
    all_values.push_back(Parties_NoPartyIDs_96);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_214;
      FIX::PartySubID PartySubID_214("STRING_574799857");
      noPartySubIDs_0_1_0.set(PartySubID_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubID_214.getString());
      FIX::PartySubIDType PartySubIDType_214(4);
      noPartySubIDs_0_1_0.set(PartySubIDType_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubIDType_214.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_214);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_215;
      FIX::PartySubID PartySubID_215("STRING_1301415641");
      noPartySubIDs_0_1_1.set(PartySubID_215);
      PtysSubGrp_NoPartySubIDs_215.insert(PartySubID_215.getString());
      FIX::PartySubIDType PartySubIDType_215(11);
      noPartySubIDs_0_1_1.set(PartySubIDType_215);
      PtysSubGrp_NoPartySubIDs_215.insert(PartySubIDType_215.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_215);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    FIX::PartyID PartyID_97("STRING_985949960");
    noPartyIDs_0_1.set(PartyID_97);
    Parties_NoPartyIDs_97.insert(PartyID_97.getString());
    FIX::PartyIDSource PartyIDSource_97('5');
    noPartyIDs_0_1.set(PartyIDSource_97);
    Parties_NoPartyIDs_97.insert(PartyIDSource_97.getString());
    FIX::PartyRole PartyRole_97(52);
    noPartyIDs_0_1.set(PartyRole_97);
    Parties_NoPartyIDs_97.insert(PartyRole_97.getString());
    all_values.push_back(Parties_NoPartyIDs_97);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_216;
      FIX::PartySubID PartySubID_216("STRING_1024205994");
      noPartySubIDs_1_1_0.set(PartySubID_216);
      PtysSubGrp_NoPartySubIDs_216.insert(PartySubID_216.getString());
      FIX::PartySubIDType PartySubIDType_216(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_216);
      PtysSubGrp_NoPartySubIDs_216.insert(PartySubIDType_216.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_216);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("6636785");
    noPosAmt_0_0.set(PosAmt_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmt_7.getString());
    FIX::PosAmtType PosAmtType_7("STRING_CRES");
    noPosAmt_0_0.set(PosAmtType_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmtType_7.getString());
    FIX::PositionCurrency PositionCurrency_7("STRING_112914322");
    noPosAmt_0_0.set(PositionCurrency_7);
    PositionAmountData_NoPosAmt_7.insert(PositionCurrency_7.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_7);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("7006089");
    noPositions_0_0.set(LongQty_2);
    PositionQty_NoPositions_2.insert(LongQty_2.getString());
    FIX::PosQtyStatus PosQtyStatus_2(0);
    noPositions_0_0.set(PosQtyStatus_2);
    PositionQty_NoPositions_2.insert(PosQtyStatus_2.getString());
    FIX::PosType PosType_2("STRING_ALC");
    noPositions_0_0.set(PosType_2);
    PositionQty_NoPositions_2.insert(PosType_2.getString());
    FIX::QuantityDate QuantityDate_2("LOCALMKTDATE_1017968125");
    noPositions_0_0.set(QuantityDate_2);
    PositionQty_NoPositions_2.insert(QuantityDate_2.getString());
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("5212113");
    noPositions_0_0.set(ShortQty_2);
    PositionQty_NoPositions_2.insert(ShortQty_2.getString());
    all_values.push_back(PositionQty_NoPositions_2);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_77;
      FIX::NestedPartyID NestedPartyID_77("STRING_1103716728");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyID_77.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_77('8');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyIDSource_77.getString());
      FIX::NestedPartyRole NestedPartyRole_77(1683524456);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyRole_77.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_77);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
        FIX::NestedPartySubID NestedPartySubID_166("STRING_657609700");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubID_166.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_166(1990707501);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubIDType_166.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
        FIX::NestedPartySubID NestedPartySubID_167("STRING_2105520462");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubID_167.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_167(1572274819);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubIDType_167.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("6446996");
    noPositions_0_1.set(LongQty_3);
    PositionQty_NoPositions_3.insert(LongQty_3.getString());
    FIX::PosQtyStatus PosQtyStatus_3(2);
    noPositions_0_1.set(PosQtyStatus_3);
    PositionQty_NoPositions_3.insert(PosQtyStatus_3.getString());
    FIX::PosType PosType_3("STRING_PA");
    noPositions_0_1.set(PosType_3);
    PositionQty_NoPositions_3.insert(PosType_3.getString());
    FIX::QuantityDate QuantityDate_3("LOCALMKTDATE_2103527184");
    noPositions_0_1.set(QuantityDate_3);
    PositionQty_NoPositions_3.insert(QuantityDate_3.getString());
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("21050468");
    noPositions_0_1.set(ShortQty_3);
    PositionQty_NoPositions_3.insert(ShortQty_3.getString());
    all_values.push_back(PositionQty_NoPositions_3);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_78;
      FIX::NestedPartyID NestedPartyID_78("STRING_941993496");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyID_78.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_78('4');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyIDSource_78.getString());
      FIX::NestedPartyRole NestedPartyRole_78(1797946583);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyRole_78.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_78);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
        FIX::NestedPartySubID NestedPartySubID_168("STRING_1492635288");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubID_168.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_168(563331000);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubIDType_168.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_79;
      FIX::NestedPartyID NestedPartyID_79("STRING_1531813767");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyID_79.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_79('8');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyIDSource_79.getString());
      FIX::NestedPartyRole NestedPartyRole_79(1805746063);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyRole_79.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_79);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
        FIX::NestedPartySubID NestedPartySubID_169("STRING_1600803465");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubID_169.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_169(358871326);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubIDType_169.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
        FIX::NestedPartySubID NestedPartySubID_170("STRING_1537968789");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubID_170.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_170(1697546895);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubIDType_170.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
        FIX::NestedPartySubID NestedPartySubID_171("STRING_1376839451");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubID_171.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_171(2059180152);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubIDType_171.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_80;
      FIX::NestedPartyID NestedPartyID_80("STRING_806843929");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyID_80.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_80('3');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyIDSource_80.getString());
      FIX::NestedPartyRole NestedPartyRole_80(768010225);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyRole_80.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_80);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
        FIX::NestedPartySubID NestedPartySubID_172("STRING_1949988173");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubID_172.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_172(1425619925);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubIDType_172.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
        FIX::NestedPartySubID NestedPartySubID_173("STRING_186108591");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubID_173.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_173(1908024987);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubIDType_173.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
        FIX::NestedPartySubID NestedPartySubID_174("STRING_850411097");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubID_174.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_174(830808270);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubIDType_174.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("5641725");
    noPositions_0_2.set(LongQty_4);
    PositionQty_NoPositions_4.insert(LongQty_4.getString());
    FIX::PosQtyStatus PosQtyStatus_4(0);
    noPositions_0_2.set(PosQtyStatus_4);
    PositionQty_NoPositions_4.insert(PosQtyStatus_4.getString());
    FIX::PosType PosType_4("STRING_TA");
    noPositions_0_2.set(PosType_4);
    PositionQty_NoPositions_4.insert(PosType_4.getString());
    FIX::QuantityDate QuantityDate_4("LOCALMKTDATE_521735787");
    noPositions_0_2.set(QuantityDate_4);
    PositionQty_NoPositions_4.insert(QuantityDate_4.getString());
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("7415978");
    noPositions_0_2.set(ShortQty_4);
    PositionQty_NoPositions_4.insert(ShortQty_4.getString());
    all_values.push_back(PositionQty_NoPositions_4);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_81;
      FIX::NestedPartyID NestedPartyID_81("STRING_990165081");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyID_81.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_81('3');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyIDSource_81.getString());
      FIX::NestedPartyRole NestedPartyRole_81(678031490);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyRole_81.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_81);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
        FIX::NestedPartySubID NestedPartySubID_175("STRING_955391826");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubID_175.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_175(62361609);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubIDType_175.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
        FIX::NestedPartySubID NestedPartySubID_176("STRING_344146880");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubID_176.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_176(613654241);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubIDType_176.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_82;
      FIX::NestedPartyID NestedPartyID_82("STRING_1707089699");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyID_82.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_82('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyIDSource_82.getString());
      FIX::NestedPartyRole NestedPartyRole_82(972525567);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyRole_82.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_82);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
        FIX::NestedPartySubID NestedPartySubID_177("STRING_1495013592");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubID_177.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_177(201881371);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubIDType_177.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
        FIX::NestedPartySubID NestedPartySubID_178("STRING_1009271345");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubID_178.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_178(154373874);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubIDType_178.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_23;
    FIX::TradingSessionID TradingSessionID_75("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_75);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionID_75.getString());
    FIX::TradingSessionSubID TradingSessionSubID_75("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_75);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionSubID_75.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_23);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_24;
    FIX::TradingSessionID TradingSessionID_76("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_76);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionID_76.getString());
    FIX::TradingSessionSubID TradingSessionSubID_76("STRING_3");
    noTradingSessions_0_1.set(TradingSessionSubID_76);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionSubID_76.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_24);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_89;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_89("DATA_97999767");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuer_89.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_89(1905828945);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuerLen_89.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_89("DATA_1514175473");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDesc_89.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_89(662172334);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDescLen_89.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
    UnderlyingAdjustedQuantity_89.setString("6083474");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_89);
    UnderlyingInstrument_89.insert(UnderlyingAdjustedQuantity_89.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
    UnderlyingAllocationPercent_89.setString("36.310000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_89);
    UnderlyingInstrument_89.insert(UnderlyingAllocationPercent_89.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
    UnderlyingAttachmentPoint_89.setString("81.210000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingAttachmentPoint_89.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_89("STRING_1349945314");
    noUnderlyings_0_0.set(UnderlyingCFICode_89);
    UnderlyingInstrument_89.insert(UnderlyingCFICode_89.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_89("STRING_1882388933");
    noUnderlyings_0_0.set(UnderlyingCPProgram_89);
    UnderlyingInstrument_89.insert(UnderlyingCPProgram_89.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_89("STRING_26589555");
    noUnderlyings_0_0.set(UnderlyingCPRegType_89);
    UnderlyingInstrument_89.insert(UnderlyingCPRegType_89.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_89;
    UnderlyingCapValue_89.setString("17420061");
    noUnderlyings_0_0.set(UnderlyingCapValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCapValue_89.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
    UnderlyingCashAmount_89.setString("4129367");
    noUnderlyings_0_0.set(UnderlyingCashAmount_89);
    UnderlyingInstrument_89.insert(UnderlyingCashAmount_89.getString());
    FIX::UnderlyingCashType UnderlyingCashType_89("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_89);
    UnderlyingInstrument_89.insert(UnderlyingCashType_89.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
    UnderlyingContractMultiplier_89.setString("5499143");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplier_89.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_89(475298385);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplierUnit_89.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_89("COUNTRY_706053157");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingCountryOfIssue_89.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_89("LOCALMKTDATE_1163568560");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponPaymentDate_89.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
    UnderlyingCouponRate_89.setString("44.360000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponRate_89.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_89("STRING_503519854");
    noUnderlyings_0_0.set(UnderlyingCreditRating_89);
    UnderlyingInstrument_89.insert(UnderlyingCreditRating_89.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_89("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrency_89.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
    UnderlyingCurrentValue_89.setString("19985334");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrentValue_89.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
    UnderlyingDetachmentPoint_89.setString("18.510000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingDetachmentPoint_89.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
    UnderlyingDirtyPrice_89.setString("21417506");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingDirtyPrice_89.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
    UnderlyingEndPrice_89.setString("54236");
    noUnderlyings_0_0.set(UnderlyingEndPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingEndPrice_89.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_89;
    UnderlyingEndValue_89.setString("7254457");
    noUnderlyings_0_0.set(UnderlyingEndValue_89);
    UnderlyingInstrument_89.insert(UnderlyingEndValue_89.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_89(1771548545);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_89);
    UnderlyingInstrument_89.insert(UnderlyingExerciseStyle_89.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_89;
    UnderlyingFXRate_89.setString("5026822");
    noUnderlyings_0_0.set(UnderlyingFXRate_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRate_89.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_89('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRateCalc_89.getString());
    FIX::UnderlyingFactor UnderlyingFactor_89;
    UnderlyingFactor_89.setString("6794827");
    noUnderlyings_0_0.set(UnderlyingFactor_89);
    UnderlyingInstrument_89.insert(UnderlyingFactor_89.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_89(1186049488);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_89);
    UnderlyingInstrument_89.insert(UnderlyingFlowScheduleType_89.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_89("STRING_1160903948");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_89);
    UnderlyingInstrument_89.insert(UnderlyingInstrRegistry_89.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_89("LOCALMKTDATE_437828042");
    noUnderlyings_0_0.set(UnderlyingIssueDate_89);
    UnderlyingInstrument_89.insert(UnderlyingIssueDate_89.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_89("STRING_552741314");
    noUnderlyings_0_0.set(UnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(UnderlyingIssuer_89.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_89("STRING_1823076282");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingLocaleOfIssue_89.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_89("LOCALMKTDATE_1046175465");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityDate_89.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_89("MONTHYEAR_706284945");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityMonthYear_89.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_89("TZTIMEONLY_859500755");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityTime_89.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
    UnderlyingNotionalPercentageOutstanding_89.setString("71.310000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_89('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_89);
    UnderlyingInstrument_89.insert(UnderlyingOptAttribute_89.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
    UnderlyingOriginalNotionalPercentageOutstanding_89.setString("3.100000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingOriginalNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_89("STRING_1990643271");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasure_89.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
    UnderlyingPriceUnitOfMeasureQty_89.setString("8541270");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasureQty_89.getString());
    FIX::UnderlyingProduct UnderlyingProduct_89(1247996587);
    noUnderlyings_0_0.set(UnderlyingProduct_89);
    UnderlyingInstrument_89.insert(UnderlyingProduct_89.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_89(393073942);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_89);
    UnderlyingInstrument_89.insert(UnderlyingPutOrCall_89.getString());
    FIX::UnderlyingPx UnderlyingPx_89;
    UnderlyingPx_89.setString("13294253");
    noUnderlyings_0_0.set(UnderlyingPx_89);
    UnderlyingInstrument_89.insert(UnderlyingPx_89.getString());
    FIX::UnderlyingQty UnderlyingQty_89;
    UnderlyingQty_89.setString("19540497");
    noUnderlyings_0_0.set(UnderlyingQty_89);
    UnderlyingInstrument_89.insert(UnderlyingQty_89.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_89("LOCALMKTDATE_1556642503");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_89);
    UnderlyingInstrument_89.insert(UnderlyingRedemptionDate_89.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_89("STRING_1364329828");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingRepoCollateralSecurityType_89.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
    UnderlyingRepurchaseRate_89.setString("59.500000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseRate_89.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_89(1545252983);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseTerm_89.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_89("STRING_349325457");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_89);
    UnderlyingInstrument_89.insert(UnderlyingRestructuringType_89.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_89("STRING_161135749");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityDesc_89.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_89("EXCHANGE_1735744834");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityExchange_89.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_89("STRING_343592432");
    noUnderlyings_0_0.set(UnderlyingSecurityID_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityID_89.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_89("STRING_166559422");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityIDSource_89.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_89("STRING_313706939");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecuritySubType_89.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_89("STRING_2115140977");
    noUnderlyings_0_0.set(UnderlyingSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityType_89.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_89("STRING_669241707");
    noUnderlyings_0_0.set(UnderlyingSeniority_89);
    UnderlyingInstrument_89.insert(UnderlyingSeniority_89.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_89("STRING_1376611120");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlMethod_89.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_89(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlementType_89.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_89;
    UnderlyingStartValue_89.setString("18552911");
    noUnderlyings_0_0.set(UnderlyingStartValue_89);
    UnderlyingInstrument_89.insert(UnderlyingStartValue_89.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_89("STRING_390031420");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingStateOrProvinceOfIssue_89.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_89("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikeCurrency_89.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
    UnderlyingStrikePrice_89.setString("656240");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikePrice_89.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_89("STRING_2131143581");
    noUnderlyings_0_0.set(UnderlyingSymbol_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbol_89.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_89("STRING_966833807");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbolSfx_89.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_89("STRING_925124810");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingTimeUnit_89.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_89("STRING_232297064");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasure_89.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
    UnderlyingUnitOfMeasureQty_89.setString("14080240");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasureQty_89.getString());
    all_values.push_back(UnderlyingInstrument_89);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_178("STRING_75456687");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltID_178.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_178("STRING_114667397");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_178);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltIDSource_178.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_179("STRING_911728059");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltID_179.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_179("STRING_468530630");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_179);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltIDSource_179.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
      FIX::UnderlyingStipType UnderlyingStipType_178("STRING_718294155");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_178);
      UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipType_178.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_178("STRING_2025173133");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_178);
      UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipValue_178.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
      FIX::UnderlyingStipType UnderlyingStipType_179("STRING_660938968");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_179);
      UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipType_179.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_179("STRING_1028380106");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_179);
      UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipValue_179.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_179);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
      FIX::UnderlyingStipType UnderlyingStipType_180("STRING_1422942468");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_180);
      UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipType_180.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_180("STRING_1010264426");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_180);
      UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipValue_180.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_167("STRING_1011203654");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyID_167.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_167('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyIDSource_167.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_167(1356075278);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_167);
      UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyRole_167.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_331("STRING_1321514187");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubID_331.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_331(2025316985);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubIDType_331.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_332("STRING_554038066");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubID_332.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_332(1968654261);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubIDType_332.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_90;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_90("DATA_1733124533");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuer_90.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_90(944069486);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuerLen_90.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_90("DATA_906138729");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDesc_90.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_90(1993673395);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDescLen_90.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
    UnderlyingAdjustedQuantity_90.setString("10096935");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_90);
    UnderlyingInstrument_90.insert(UnderlyingAdjustedQuantity_90.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
    UnderlyingAllocationPercent_90.setString("86.620000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_90);
    UnderlyingInstrument_90.insert(UnderlyingAllocationPercent_90.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
    UnderlyingAttachmentPoint_90.setString("35.550000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingAttachmentPoint_90.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_90("STRING_1934818351");
    noUnderlyings_0_1.set(UnderlyingCFICode_90);
    UnderlyingInstrument_90.insert(UnderlyingCFICode_90.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_90("STRING_1122095726");
    noUnderlyings_0_1.set(UnderlyingCPProgram_90);
    UnderlyingInstrument_90.insert(UnderlyingCPProgram_90.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_90("STRING_73563945");
    noUnderlyings_0_1.set(UnderlyingCPRegType_90);
    UnderlyingInstrument_90.insert(UnderlyingCPRegType_90.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_90;
    UnderlyingCapValue_90.setString("15985498");
    noUnderlyings_0_1.set(UnderlyingCapValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCapValue_90.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
    UnderlyingCashAmount_90.setString("11975524");
    noUnderlyings_0_1.set(UnderlyingCashAmount_90);
    UnderlyingInstrument_90.insert(UnderlyingCashAmount_90.getString());
    FIX::UnderlyingCashType UnderlyingCashType_90("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_90);
    UnderlyingInstrument_90.insert(UnderlyingCashType_90.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
    UnderlyingContractMultiplier_90.setString("3627942");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplier_90.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_90(1666083043);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplierUnit_90.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_90("COUNTRY_1632324131");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingCountryOfIssue_90.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_90("LOCALMKTDATE_1081088390");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponPaymentDate_90.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
    UnderlyingCouponRate_90.setString("25.280000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponRate_90.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_90("STRING_145779451");
    noUnderlyings_0_1.set(UnderlyingCreditRating_90);
    UnderlyingInstrument_90.insert(UnderlyingCreditRating_90.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_90("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrency_90.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
    UnderlyingCurrentValue_90.setString("11560438");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrentValue_90.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
    UnderlyingDetachmentPoint_90.setString("7.040000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingDetachmentPoint_90.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
    UnderlyingDirtyPrice_90.setString("18304350");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingDirtyPrice_90.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
    UnderlyingEndPrice_90.setString("3624170");
    noUnderlyings_0_1.set(UnderlyingEndPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingEndPrice_90.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_90;
    UnderlyingEndValue_90.setString("3600923");
    noUnderlyings_0_1.set(UnderlyingEndValue_90);
    UnderlyingInstrument_90.insert(UnderlyingEndValue_90.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_90(1007861948);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_90);
    UnderlyingInstrument_90.insert(UnderlyingExerciseStyle_90.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_90;
    UnderlyingFXRate_90.setString("16839312");
    noUnderlyings_0_1.set(UnderlyingFXRate_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRate_90.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_90('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRateCalc_90.getString());
    FIX::UnderlyingFactor UnderlyingFactor_90;
    UnderlyingFactor_90.setString("15619000");
    noUnderlyings_0_1.set(UnderlyingFactor_90);
    UnderlyingInstrument_90.insert(UnderlyingFactor_90.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_90(1505101887);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_90);
    UnderlyingInstrument_90.insert(UnderlyingFlowScheduleType_90.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_90("STRING_1971050205");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_90);
    UnderlyingInstrument_90.insert(UnderlyingInstrRegistry_90.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_90("LOCALMKTDATE_358485852");
    noUnderlyings_0_1.set(UnderlyingIssueDate_90);
    UnderlyingInstrument_90.insert(UnderlyingIssueDate_90.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_90("STRING_263756968");
    noUnderlyings_0_1.set(UnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(UnderlyingIssuer_90.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_90("STRING_1817239952");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingLocaleOfIssue_90.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_90("LOCALMKTDATE_1368179393");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityDate_90.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_90("MONTHYEAR_1153555630");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityMonthYear_90.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_90("TZTIMEONLY_482779859");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityTime_90.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
    UnderlyingNotionalPercentageOutstanding_90.setString("40.960000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_90('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_90);
    UnderlyingInstrument_90.insert(UnderlyingOptAttribute_90.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
    UnderlyingOriginalNotionalPercentageOutstanding_90.setString("38.050000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingOriginalNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_90("STRING_606580272");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasure_90.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
    UnderlyingPriceUnitOfMeasureQty_90.setString("13257201");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasureQty_90.getString());
    FIX::UnderlyingProduct UnderlyingProduct_90(744575147);
    noUnderlyings_0_1.set(UnderlyingProduct_90);
    UnderlyingInstrument_90.insert(UnderlyingProduct_90.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_90(969374507);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_90);
    UnderlyingInstrument_90.insert(UnderlyingPutOrCall_90.getString());
    FIX::UnderlyingPx UnderlyingPx_90;
    UnderlyingPx_90.setString("8443195");
    noUnderlyings_0_1.set(UnderlyingPx_90);
    UnderlyingInstrument_90.insert(UnderlyingPx_90.getString());
    FIX::UnderlyingQty UnderlyingQty_90;
    UnderlyingQty_90.setString("2294156");
    noUnderlyings_0_1.set(UnderlyingQty_90);
    UnderlyingInstrument_90.insert(UnderlyingQty_90.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_90("LOCALMKTDATE_2050462897");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_90);
    UnderlyingInstrument_90.insert(UnderlyingRedemptionDate_90.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_90("STRING_240608398");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingRepoCollateralSecurityType_90.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
    UnderlyingRepurchaseRate_90.setString("50.820000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseRate_90.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_90(2012447746);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseTerm_90.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_90("STRING_1059839746");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_90);
    UnderlyingInstrument_90.insert(UnderlyingRestructuringType_90.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_90("STRING_1531238959");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityDesc_90.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_90("EXCHANGE_1016464802");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityExchange_90.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_90("STRING_742791101");
    noUnderlyings_0_1.set(UnderlyingSecurityID_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityID_90.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_90("STRING_1893656047");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityIDSource_90.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_90("STRING_1376557136");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecuritySubType_90.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_90("STRING_1750653049");
    noUnderlyings_0_1.set(UnderlyingSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityType_90.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_90("STRING_1430103673");
    noUnderlyings_0_1.set(UnderlyingSeniority_90);
    UnderlyingInstrument_90.insert(UnderlyingSeniority_90.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_90("STRING_1614482807");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlMethod_90.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_90(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlementType_90.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_90;
    UnderlyingStartValue_90.setString("7877219");
    noUnderlyings_0_1.set(UnderlyingStartValue_90);
    UnderlyingInstrument_90.insert(UnderlyingStartValue_90.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_90("STRING_1438049364");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingStateOrProvinceOfIssue_90.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_90("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikeCurrency_90.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
    UnderlyingStrikePrice_90.setString("11078056");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikePrice_90.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_90("STRING_744251013");
    noUnderlyings_0_1.set(UnderlyingSymbol_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbol_90.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_90("STRING_57550864");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbolSfx_90.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_90("STRING_1590585528");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingTimeUnit_90.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_90("STRING_1899765109");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasure_90.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
    UnderlyingUnitOfMeasureQty_90.setString("1857185");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasureQty_90.getString());
    all_values.push_back(UnderlyingInstrument_90);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_180("STRING_358861733");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltID_180.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_180("STRING_1511438694");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_180);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltIDSource_180.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
      FIX::UnderlyingStipType UnderlyingStipType_181("STRING_1328236240");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_181);
      UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipType_181.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_181("STRING_208274564");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_181);
      UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipValue_181.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_181);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
      FIX::UnderlyingStipType UnderlyingStipType_182("STRING_973436463");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_182);
      UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipType_182.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_182("STRING_1231215490");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_182);
      UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipValue_182.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_168("STRING_1348631545");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyID_168.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_168('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyIDSource_168.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_168(1508722708);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_168);
      UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyRole_168.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_333("STRING_2112644390");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubID_333.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_333(104030161);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubIDType_333.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_334("STRING_478559256");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubID_334.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_334(1341717878);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubIDType_334.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_91;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_91("DATA_1854683210");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingIssuer_91.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_91(1908662929);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingIssuerLen_91.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_91("DATA_808717037");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDesc_91.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_91(872268977);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDescLen_91.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
    UnderlyingAdjustedQuantity_91.setString("5489011");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_91);
    UnderlyingInstrument_91.insert(UnderlyingAdjustedQuantity_91.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
    UnderlyingAllocationPercent_91.setString("27.540000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_91);
    UnderlyingInstrument_91.insert(UnderlyingAllocationPercent_91.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
    UnderlyingAttachmentPoint_91.setString("5.970000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_91);
    UnderlyingInstrument_91.insert(UnderlyingAttachmentPoint_91.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_91("STRING_1600380076");
    noUnderlyings_0_2.set(UnderlyingCFICode_91);
    UnderlyingInstrument_91.insert(UnderlyingCFICode_91.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_91("STRING_1207088423");
    noUnderlyings_0_2.set(UnderlyingCPProgram_91);
    UnderlyingInstrument_91.insert(UnderlyingCPProgram_91.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_91("STRING_992591610");
    noUnderlyings_0_2.set(UnderlyingCPRegType_91);
    UnderlyingInstrument_91.insert(UnderlyingCPRegType_91.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_91;
    UnderlyingCapValue_91.setString("16579309");
    noUnderlyings_0_2.set(UnderlyingCapValue_91);
    UnderlyingInstrument_91.insert(UnderlyingCapValue_91.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
    UnderlyingCashAmount_91.setString("6501903");
    noUnderlyings_0_2.set(UnderlyingCashAmount_91);
    UnderlyingInstrument_91.insert(UnderlyingCashAmount_91.getString());
    FIX::UnderlyingCashType UnderlyingCashType_91("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_91);
    UnderlyingInstrument_91.insert(UnderlyingCashType_91.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
    UnderlyingContractMultiplier_91.setString("18436495");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_91);
    UnderlyingInstrument_91.insert(UnderlyingContractMultiplier_91.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_91(649635989);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_91);
    UnderlyingInstrument_91.insert(UnderlyingContractMultiplierUnit_91.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_91("COUNTRY_1103734805");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingCountryOfIssue_91.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_91("LOCALMKTDATE_1207604559");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_91);
    UnderlyingInstrument_91.insert(UnderlyingCouponPaymentDate_91.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
    UnderlyingCouponRate_91.setString("68.220000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_91);
    UnderlyingInstrument_91.insert(UnderlyingCouponRate_91.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_91("STRING_284487397");
    noUnderlyings_0_2.set(UnderlyingCreditRating_91);
    UnderlyingInstrument_91.insert(UnderlyingCreditRating_91.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_91("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_91);
    UnderlyingInstrument_91.insert(UnderlyingCurrency_91.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
    UnderlyingCurrentValue_91.setString("15157028");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_91);
    UnderlyingInstrument_91.insert(UnderlyingCurrentValue_91.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
    UnderlyingDetachmentPoint_91.setString("20.850000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_91);
    UnderlyingInstrument_91.insert(UnderlyingDetachmentPoint_91.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
    UnderlyingDirtyPrice_91.setString("15682411");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_91);
    UnderlyingInstrument_91.insert(UnderlyingDirtyPrice_91.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
    UnderlyingEndPrice_91.setString("4643988");
    noUnderlyings_0_2.set(UnderlyingEndPrice_91);
    UnderlyingInstrument_91.insert(UnderlyingEndPrice_91.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_91;
    UnderlyingEndValue_91.setString("12260011");
    noUnderlyings_0_2.set(UnderlyingEndValue_91);
    UnderlyingInstrument_91.insert(UnderlyingEndValue_91.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_91(153144392);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_91);
    UnderlyingInstrument_91.insert(UnderlyingExerciseStyle_91.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_91;
    UnderlyingFXRate_91.setString("4295595");
    noUnderlyings_0_2.set(UnderlyingFXRate_91);
    UnderlyingInstrument_91.insert(UnderlyingFXRate_91.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_91('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_91);
    UnderlyingInstrument_91.insert(UnderlyingFXRateCalc_91.getString());
    FIX::UnderlyingFactor UnderlyingFactor_91;
    UnderlyingFactor_91.setString("6317036");
    noUnderlyings_0_2.set(UnderlyingFactor_91);
    UnderlyingInstrument_91.insert(UnderlyingFactor_91.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_91(1771277447);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_91);
    UnderlyingInstrument_91.insert(UnderlyingFlowScheduleType_91.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_91("STRING_1037230869");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_91);
    UnderlyingInstrument_91.insert(UnderlyingInstrRegistry_91.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_91("LOCALMKTDATE_392882929");
    noUnderlyings_0_2.set(UnderlyingIssueDate_91);
    UnderlyingInstrument_91.insert(UnderlyingIssueDate_91.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_91("STRING_432510837");
    noUnderlyings_0_2.set(UnderlyingIssuer_91);
    UnderlyingInstrument_91.insert(UnderlyingIssuer_91.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_91("STRING_1909499847");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingLocaleOfIssue_91.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_91("LOCALMKTDATE_941784124");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityDate_91.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_91("MONTHYEAR_531793591");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityMonthYear_91.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_91("TZTIMEONLY_10356796");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityTime_91.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
    UnderlyingNotionalPercentageOutstanding_91.setString("5.520000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_91);
    UnderlyingInstrument_91.insert(UnderlyingNotionalPercentageOutstanding_91.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_91('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_91);
    UnderlyingInstrument_91.insert(UnderlyingOptAttribute_91.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
    UnderlyingOriginalNotionalPercentageOutstanding_91.setString("84.060000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_91);
    UnderlyingInstrument_91.insert(UnderlyingOriginalNotionalPercentageOutstanding_91.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_91("STRING_2052611492");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_91);
    UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasure_91.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
    UnderlyingPriceUnitOfMeasureQty_91.setString("2415886");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_91);
    UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasureQty_91.getString());
    FIX::UnderlyingProduct UnderlyingProduct_91(1747821477);
    noUnderlyings_0_2.set(UnderlyingProduct_91);
    UnderlyingInstrument_91.insert(UnderlyingProduct_91.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_91(1748777356);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_91);
    UnderlyingInstrument_91.insert(UnderlyingPutOrCall_91.getString());
    FIX::UnderlyingPx UnderlyingPx_91;
    UnderlyingPx_91.setString("8912246");
    noUnderlyings_0_2.set(UnderlyingPx_91);
    UnderlyingInstrument_91.insert(UnderlyingPx_91.getString());
    FIX::UnderlyingQty UnderlyingQty_91;
    UnderlyingQty_91.setString("7040726");
    noUnderlyings_0_2.set(UnderlyingQty_91);
    UnderlyingInstrument_91.insert(UnderlyingQty_91.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_91("LOCALMKTDATE_808898267");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_91);
    UnderlyingInstrument_91.insert(UnderlyingRedemptionDate_91.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_91("STRING_137397832");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_91);
    UnderlyingInstrument_91.insert(UnderlyingRepoCollateralSecurityType_91.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
    UnderlyingRepurchaseRate_91.setString("0.320000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_91);
    UnderlyingInstrument_91.insert(UnderlyingRepurchaseRate_91.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_91(77293742);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_91);
    UnderlyingInstrument_91.insert(UnderlyingRepurchaseTerm_91.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_91("STRING_357007470");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_91);
    UnderlyingInstrument_91.insert(UnderlyingRestructuringType_91.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_91("STRING_356779271");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityDesc_91.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_91("EXCHANGE_1942055827");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityExchange_91.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_91("STRING_1925248653");
    noUnderlyings_0_2.set(UnderlyingSecurityID_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityID_91.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_91("STRING_821178099");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityIDSource_91.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_91("STRING_1020573325");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_91);
    UnderlyingInstrument_91.insert(UnderlyingSecuritySubType_91.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_91("STRING_2078393045");
    noUnderlyings_0_2.set(UnderlyingSecurityType_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityType_91.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_91("STRING_1250737668");
    noUnderlyings_0_2.set(UnderlyingSeniority_91);
    UnderlyingInstrument_91.insert(UnderlyingSeniority_91.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_91("STRING_203120984");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_91);
    UnderlyingInstrument_91.insert(UnderlyingSettlMethod_91.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_91(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_91);
    UnderlyingInstrument_91.insert(UnderlyingSettlementType_91.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_91;
    UnderlyingStartValue_91.setString("8745314");
    noUnderlyings_0_2.set(UnderlyingStartValue_91);
    UnderlyingInstrument_91.insert(UnderlyingStartValue_91.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_91("STRING_1240351853");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingStateOrProvinceOfIssue_91.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_91("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_91);
    UnderlyingInstrument_91.insert(UnderlyingStrikeCurrency_91.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
    UnderlyingStrikePrice_91.setString("10023680");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_91);
    UnderlyingInstrument_91.insert(UnderlyingStrikePrice_91.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_91("STRING_1897280098");
    noUnderlyings_0_2.set(UnderlyingSymbol_91);
    UnderlyingInstrument_91.insert(UnderlyingSymbol_91.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_91("STRING_1838835896");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_91);
    UnderlyingInstrument_91.insert(UnderlyingSymbolSfx_91.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_91("STRING_1012724848");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_91);
    UnderlyingInstrument_91.insert(UnderlyingTimeUnit_91.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_91("STRING_144477002");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_91);
    UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasure_91.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
    UnderlyingUnitOfMeasureQty_91.setString("14302342");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_91);
    UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasureQty_91.getString());
    all_values.push_back(UnderlyingInstrument_91);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_181("STRING_49604846");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltID_181.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_181("STRING_1671822931");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltIDSource_181.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_182("STRING_1616011084");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltID_182.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_182("STRING_1798382203");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltIDSource_182.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_183("STRING_415563942");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_183);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltID_183.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_183("STRING_172600070");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_183);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltIDSource_183.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
      FIX::UnderlyingStipType UnderlyingStipType_183("STRING_552961774");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_183);
      UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipType_183.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_183("STRING_1161160102");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_183);
      UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipValue_183.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
      FIX::UnderlyingStipType UnderlyingStipType_184("STRING_537090565");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_184);
      UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipType_184.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_184("STRING_909969244");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_184);
      UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipValue_184.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_169("STRING_331662744");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyID_169.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_169('6');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyIDSource_169.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_169(191633825);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyRole_169.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_335("STRING_618643646");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubID_335.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_335(1442371493);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubIDType_335.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_336("STRING_1555357053");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubID_336.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_336(1181256691);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubIDType_336.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_170("STRING_169419313");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyID_170.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_170('6');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyIDSource_170.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_170(2136752666);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyRole_170.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_337("STRING_1650593311");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubID_337.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_337(1886549116);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubIDType_337.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_338("STRING_1167813866");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubID_338.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_338(515834512);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubIDType_338.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_339("STRING_2031026119");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubID_339.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_339(450564480);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubIDType_339.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
