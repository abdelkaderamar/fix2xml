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
  FIX::Account Account_28("STRING_1530233982");
  msg.set(Account_28);
  PositionMaintenanceReport_0.insert(Account_28.getString());
  FIX::AccountType AccountType_24(3);
  msg.set(AccountType_24);
  PositionMaintenanceReport_0.insert(AccountType_24.getString());
  FIX::AcctIDSource AcctIDSource_21(4);
  msg.set(AcctIDSource_21);
  PositionMaintenanceReport_0.insert(AcctIDSource_21.getString());
  FIX::AdjustmentType AdjustmentType_0(1);
  msg.set(AdjustmentType_0);
  PositionMaintenanceReport_0.insert(AdjustmentType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_15("LOCALMKTDATE_828688288");
  msg.set(ClearingBusinessDate_15);
  PositionMaintenanceReport_0.insert(ClearingBusinessDate_15.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_0(true);
  msg.set(ContraryInstructionIndicator_0);
  PositionMaintenanceReport_0.insert(ContraryInstructionIndicator_0.getString());
  FIX::Currency Currency_41("USD");
  msg.set(Currency_41);
  PositionMaintenanceReport_0.insert(Currency_41.getString());
  FIX::EncodedText EncodedText_67("DATA_1442170428");
  msg.set(EncodedText_67);
  PositionMaintenanceReport_0.insert(EncodedText_67.getString());
  FIX::EncodedTextLen EncodedTextLen_67(2147029861);
  msg.set(EncodedTextLen_67);
  PositionMaintenanceReport_0.insert(EncodedTextLen_67.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_0("STRING_1546313966");
  msg.set(OrigPosReqRefID_0);
  PositionMaintenanceReport_0.insert(OrigPosReqRefID_0.getString());
  FIX::PosMaintAction PosMaintAction_0(1);
  msg.set(PosMaintAction_0);
  PositionMaintenanceReport_0.insert(PosMaintAction_0.getString());
  FIX::PosMaintResult PosMaintResult_0(99);
  msg.set(PosMaintResult_0);
  PositionMaintenanceReport_0.insert(PosMaintResult_0.getString());
  FIX::PosMaintRptID PosMaintRptID_1("STRING_1801101926");
  msg.set(PosMaintRptID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptID_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_1("STRING_1533650515");
  msg.set(PosMaintRptRefID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptRefID_1.getString());
  FIX::PosMaintStatus PosMaintStatus_0(3);
  msg.set(PosMaintStatus_0);
  PositionMaintenanceReport_0.insert(PosMaintStatus_0.getString());
  FIX::PosReqID PosReqID_1("STRING_559403235");
  msg.set(PosReqID_1);
  PositionMaintenanceReport_0.insert(PosReqID_1.getString());
  FIX::PosTransType PosTransType_0(4);
  msg.set(PosTransType_0);
  PositionMaintenanceReport_0.insert(PosTransType_0.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_0(true);
  msg.set(PriorSpreadIndicator_0);
  PositionMaintenanceReport_0.insert(PriorSpreadIndicator_0.getString());
  FIX::SettlCurrency SettlCurrency_22("JPY");
  msg.set(SettlCurrency_22);
  PositionMaintenanceReport_0.insert(SettlCurrency_22.getString());
  FIX::SettlSessID SettlSessID_7("STRING_ETH");
  msg.set(SettlSessID_7);
  PositionMaintenanceReport_0.insert(SettlSessID_7.getString());
  FIX::SettlSessSubID SettlSessSubID_6("STRING_1740680362");
  msg.set(SettlSessSubID_6);
  PositionMaintenanceReport_0.insert(SettlSessSubID_6.getString());
  FIX::Text Text_67("STRING_1734630003");
  msg.set(Text_67);
  PositionMaintenanceReport_0.insert(Text_67.getString());
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("20109323");
  msg.set(ThresholdAmount_1);
  PositionMaintenanceReport_0.insert(ThresholdAmount_1.getString());
  FIX::TransactTime TransactTime_43(FIX::UTCTIMESTAMP(0, 43, 3, 17, 102001));
  msg.set(TransactTime_43);
  PositionMaintenanceReport_0.insert(TransactTime_43.getString());
  all_values.push_back(PositionMaintenanceReport_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_65;
    FIX::EncodedLegIssuer EncodedLegIssuer_65("DATA_1088666778");
    noLegs_0_0.set(EncodedLegIssuer_65);
    InstrumentLeg_65.insert(EncodedLegIssuer_65.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_65(821851830);
    noLegs_0_0.set(EncodedLegIssuerLen_65);
    InstrumentLeg_65.insert(EncodedLegIssuerLen_65.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_65("DATA_1742610296");
    noLegs_0_0.set(EncodedLegSecurityDesc_65);
    InstrumentLeg_65.insert(EncodedLegSecurityDesc_65.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_65(5814006);
    noLegs_0_0.set(EncodedLegSecurityDescLen_65);
    InstrumentLeg_65.insert(EncodedLegSecurityDescLen_65.getString());
    FIX::LegCFICode LegCFICode_65("STRING_1012755715");
    noLegs_0_0.set(LegCFICode_65);
    InstrumentLeg_65.insert(LegCFICode_65.getString());
    FIX::LegContractMultiplier LegContractMultiplier_65;
    LegContractMultiplier_65.setString("14973973");
    noLegs_0_0.set(LegContractMultiplier_65);
    InstrumentLeg_65.insert(LegContractMultiplier_65.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_65(1447984434);
    noLegs_0_0.set(LegContractMultiplierUnit_65);
    InstrumentLeg_65.insert(LegContractMultiplierUnit_65.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_65("MONTHYEAR_1012301928");
    noLegs_0_0.set(LegContractSettlMonth_65);
    InstrumentLeg_65.insert(LegContractSettlMonth_65.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_65("COUNTRY_896227645");
    noLegs_0_0.set(LegCountryOfIssue_65);
    InstrumentLeg_65.insert(LegCountryOfIssue_65.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_65("LOCALMKTDATE_1366441346");
    noLegs_0_0.set(LegCouponPaymentDate_65);
    InstrumentLeg_65.insert(LegCouponPaymentDate_65.getString());
    FIX::LegCouponRate LegCouponRate_65;
    LegCouponRate_65.setString("61.490000");
    noLegs_0_0.set(LegCouponRate_65);
    InstrumentLeg_65.insert(LegCouponRate_65.getString());
    FIX::LegCreditRating LegCreditRating_65("STRING_549845923");
    noLegs_0_0.set(LegCreditRating_65);
    InstrumentLeg_65.insert(LegCreditRating_65.getString());
    FIX::LegCurrency LegCurrency_65("JPY");
    noLegs_0_0.set(LegCurrency_65);
    InstrumentLeg_65.insert(LegCurrency_65.getString());
    FIX::LegDatedDate LegDatedDate_65("LOCALMKTDATE_1109249158");
    noLegs_0_0.set(LegDatedDate_65);
    InstrumentLeg_65.insert(LegDatedDate_65.getString());
    FIX::LegExerciseStyle LegExerciseStyle_65(206478819);
    noLegs_0_0.set(LegExerciseStyle_65);
    InstrumentLeg_65.insert(LegExerciseStyle_65.getString());
    FIX::LegFactor LegFactor_65;
    LegFactor_65.setString("16918434");
    noLegs_0_0.set(LegFactor_65);
    InstrumentLeg_65.insert(LegFactor_65.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_65(401743029);
    noLegs_0_0.set(LegFlowScheduleType_65);
    InstrumentLeg_65.insert(LegFlowScheduleType_65.getString());
    FIX::LegInstrRegistry LegInstrRegistry_65("STRING_1690537429");
    noLegs_0_0.set(LegInstrRegistry_65);
    InstrumentLeg_65.insert(LegInstrRegistry_65.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_65("LOCALMKTDATE_109091477");
    noLegs_0_0.set(LegInterestAccrualDate_65);
    InstrumentLeg_65.insert(LegInterestAccrualDate_65.getString());
    FIX::LegIssueDate LegIssueDate_65("LOCALMKTDATE_2142423392");
    noLegs_0_0.set(LegIssueDate_65);
    InstrumentLeg_65.insert(LegIssueDate_65.getString());
    FIX::LegIssuer LegIssuer_65("STRING_1277683784");
    noLegs_0_0.set(LegIssuer_65);
    InstrumentLeg_65.insert(LegIssuer_65.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_65("STRING_2120023874");
    noLegs_0_0.set(LegLocaleOfIssue_65);
    InstrumentLeg_65.insert(LegLocaleOfIssue_65.getString());
    FIX::LegMaturityDate LegMaturityDate_65("LOCALMKTDATE_1145469632");
    noLegs_0_0.set(LegMaturityDate_65);
    InstrumentLeg_65.insert(LegMaturityDate_65.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_65("MONTHYEAR_1768932488");
    noLegs_0_0.set(LegMaturityMonthYear_65);
    InstrumentLeg_65.insert(LegMaturityMonthYear_65.getString());
    FIX::LegMaturityTime LegMaturityTime_65("TZTIMEONLY_1624972249");
    noLegs_0_0.set(LegMaturityTime_65);
    InstrumentLeg_65.insert(LegMaturityTime_65.getString());
    FIX::LegOptAttribute LegOptAttribute_65('3');
    noLegs_0_0.set(LegOptAttribute_65);
    InstrumentLeg_65.insert(LegOptAttribute_65.getString());
    FIX::LegOptionRatio LegOptionRatio_65;
    LegOptionRatio_65.setString("19049190");
    noLegs_0_0.set(LegOptionRatio_65);
    InstrumentLeg_65.insert(LegOptionRatio_65.getString());
    FIX::LegPool LegPool_65("STRING_299847794");
    noLegs_0_0.set(LegPool_65);
    InstrumentLeg_65.insert(LegPool_65.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_65("STRING_1167951724");
    noLegs_0_0.set(LegPriceUnitOfMeasure_65);
    InstrumentLeg_65.insert(LegPriceUnitOfMeasure_65.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
    LegPriceUnitOfMeasureQty_65.setString("6713574");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_65);
    InstrumentLeg_65.insert(LegPriceUnitOfMeasureQty_65.getString());
    FIX::LegProduct LegProduct_65(1388514572);
    noLegs_0_0.set(LegProduct_65);
    InstrumentLeg_65.insert(LegProduct_65.getString());
    FIX::LegPutOrCall LegPutOrCall_65(1989803555);
    noLegs_0_0.set(LegPutOrCall_65);
    InstrumentLeg_65.insert(LegPutOrCall_65.getString());
    FIX::LegRatioQty LegRatioQty_65;
    LegRatioQty_65.setString("2664840");
    noLegs_0_0.set(LegRatioQty_65);
    InstrumentLeg_65.insert(LegRatioQty_65.getString());
    FIX::LegRedemptionDate LegRedemptionDate_65("LOCALMKTDATE_1394328578");
    noLegs_0_0.set(LegRedemptionDate_65);
    InstrumentLeg_65.insert(LegRedemptionDate_65.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_65("STRING_855075622");
    noLegs_0_0.set(LegRepoCollateralSecurityType_65);
    InstrumentLeg_65.insert(LegRepoCollateralSecurityType_65.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_65;
    LegRepurchaseRate_65.setString("14.050000");
    noLegs_0_0.set(LegRepurchaseRate_65);
    InstrumentLeg_65.insert(LegRepurchaseRate_65.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_65(694829364);
    noLegs_0_0.set(LegRepurchaseTerm_65);
    InstrumentLeg_65.insert(LegRepurchaseTerm_65.getString());
    FIX::LegSecurityDesc LegSecurityDesc_65("STRING_1867377550");
    noLegs_0_0.set(LegSecurityDesc_65);
    InstrumentLeg_65.insert(LegSecurityDesc_65.getString());
    FIX::LegSecurityExchange LegSecurityExchange_65("EXCHANGE_512625403");
    noLegs_0_0.set(LegSecurityExchange_65);
    InstrumentLeg_65.insert(LegSecurityExchange_65.getString());
    FIX::LegSecurityID LegSecurityID_65("STRING_2061270710");
    noLegs_0_0.set(LegSecurityID_65);
    InstrumentLeg_65.insert(LegSecurityID_65.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_65("STRING_465380051");
    noLegs_0_0.set(LegSecurityIDSource_65);
    InstrumentLeg_65.insert(LegSecurityIDSource_65.getString());
    FIX::LegSecuritySubType LegSecuritySubType_65("STRING_1062471326");
    noLegs_0_0.set(LegSecuritySubType_65);
    InstrumentLeg_65.insert(LegSecuritySubType_65.getString());
    FIX::LegSecurityType LegSecurityType_65("STRING_666395276");
    noLegs_0_0.set(LegSecurityType_65);
    InstrumentLeg_65.insert(LegSecurityType_65.getString());
    FIX::LegSide LegSide_65('1');
    noLegs_0_0.set(LegSide_65);
    InstrumentLeg_65.insert(LegSide_65.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_65("STRING_24236837");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_65);
    InstrumentLeg_65.insert(LegStateOrProvinceOfIssue_65.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_65("CAN");
    noLegs_0_0.set(LegStrikeCurrency_65);
    InstrumentLeg_65.insert(LegStrikeCurrency_65.getString());
    FIX::LegStrikePrice LegStrikePrice_65;
    LegStrikePrice_65.setString("4259798");
    noLegs_0_0.set(LegStrikePrice_65);
    InstrumentLeg_65.insert(LegStrikePrice_65.getString());
    FIX::LegSymbol LegSymbol_65("STRING_415927876");
    noLegs_0_0.set(LegSymbol_65);
    InstrumentLeg_65.insert(LegSymbol_65.getString());
    FIX::LegSymbolSfx LegSymbolSfx_65("STRING_1574384494");
    noLegs_0_0.set(LegSymbolSfx_65);
    InstrumentLeg_65.insert(LegSymbolSfx_65.getString());
    FIX::LegTimeUnit LegTimeUnit_65("STRING_420919610");
    noLegs_0_0.set(LegTimeUnit_65);
    InstrumentLeg_65.insert(LegTimeUnit_65.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_65("STRING_1693611660");
    noLegs_0_0.set(LegUnitOfMeasure_65);
    InstrumentLeg_65.insert(LegUnitOfMeasure_65.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
    LegUnitOfMeasureQty_65.setString("15469247");
    noLegs_0_0.set(LegUnitOfMeasureQty_65);
    InstrumentLeg_65.insert(LegUnitOfMeasureQty_65.getString());
    all_values.push_back(InstrumentLeg_65);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
      FIX::LegSecurityAltID LegSecurityAltID_116("STRING_1315060501");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltID_116.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_116("STRING_1024413321");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltIDSource_116.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
      FIX::LegSecurityAltID LegSecurityAltID_117("STRING_1957982930");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltID_117.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_117("STRING_1072495923");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltIDSource_117.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
      FIX::LegSecurityAltID LegSecurityAltID_118("STRING_1324261115");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_118);
      LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltID_118.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_118("STRING_978451007");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_118);
      LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltIDSource_118.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_66;
    FIX::EncodedLegIssuer EncodedLegIssuer_66("DATA_1743853353");
    noLegs_0_1.set(EncodedLegIssuer_66);
    InstrumentLeg_66.insert(EncodedLegIssuer_66.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_66(565292039);
    noLegs_0_1.set(EncodedLegIssuerLen_66);
    InstrumentLeg_66.insert(EncodedLegIssuerLen_66.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_66("DATA_820770914");
    noLegs_0_1.set(EncodedLegSecurityDesc_66);
    InstrumentLeg_66.insert(EncodedLegSecurityDesc_66.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_66(2010337431);
    noLegs_0_1.set(EncodedLegSecurityDescLen_66);
    InstrumentLeg_66.insert(EncodedLegSecurityDescLen_66.getString());
    FIX::LegCFICode LegCFICode_66("STRING_1959620617");
    noLegs_0_1.set(LegCFICode_66);
    InstrumentLeg_66.insert(LegCFICode_66.getString());
    FIX::LegContractMultiplier LegContractMultiplier_66;
    LegContractMultiplier_66.setString("16758465");
    noLegs_0_1.set(LegContractMultiplier_66);
    InstrumentLeg_66.insert(LegContractMultiplier_66.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_66(1626735189);
    noLegs_0_1.set(LegContractMultiplierUnit_66);
    InstrumentLeg_66.insert(LegContractMultiplierUnit_66.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_66("MONTHYEAR_506966333");
    noLegs_0_1.set(LegContractSettlMonth_66);
    InstrumentLeg_66.insert(LegContractSettlMonth_66.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_66("COUNTRY_1395740438");
    noLegs_0_1.set(LegCountryOfIssue_66);
    InstrumentLeg_66.insert(LegCountryOfIssue_66.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_66("LOCALMKTDATE_2139360592");
    noLegs_0_1.set(LegCouponPaymentDate_66);
    InstrumentLeg_66.insert(LegCouponPaymentDate_66.getString());
    FIX::LegCouponRate LegCouponRate_66;
    LegCouponRate_66.setString("33.960000");
    noLegs_0_1.set(LegCouponRate_66);
    InstrumentLeg_66.insert(LegCouponRate_66.getString());
    FIX::LegCreditRating LegCreditRating_66("STRING_1861120489");
    noLegs_0_1.set(LegCreditRating_66);
    InstrumentLeg_66.insert(LegCreditRating_66.getString());
    FIX::LegCurrency LegCurrency_66("GBP");
    noLegs_0_1.set(LegCurrency_66);
    InstrumentLeg_66.insert(LegCurrency_66.getString());
    FIX::LegDatedDate LegDatedDate_66("LOCALMKTDATE_1634570055");
    noLegs_0_1.set(LegDatedDate_66);
    InstrumentLeg_66.insert(LegDatedDate_66.getString());
    FIX::LegExerciseStyle LegExerciseStyle_66(1078585107);
    noLegs_0_1.set(LegExerciseStyle_66);
    InstrumentLeg_66.insert(LegExerciseStyle_66.getString());
    FIX::LegFactor LegFactor_66;
    LegFactor_66.setString("19600227");
    noLegs_0_1.set(LegFactor_66);
    InstrumentLeg_66.insert(LegFactor_66.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_66(952379424);
    noLegs_0_1.set(LegFlowScheduleType_66);
    InstrumentLeg_66.insert(LegFlowScheduleType_66.getString());
    FIX::LegInstrRegistry LegInstrRegistry_66("STRING_1504564974");
    noLegs_0_1.set(LegInstrRegistry_66);
    InstrumentLeg_66.insert(LegInstrRegistry_66.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_66("LOCALMKTDATE_228466995");
    noLegs_0_1.set(LegInterestAccrualDate_66);
    InstrumentLeg_66.insert(LegInterestAccrualDate_66.getString());
    FIX::LegIssueDate LegIssueDate_66("LOCALMKTDATE_379280271");
    noLegs_0_1.set(LegIssueDate_66);
    InstrumentLeg_66.insert(LegIssueDate_66.getString());
    FIX::LegIssuer LegIssuer_66("STRING_1925484584");
    noLegs_0_1.set(LegIssuer_66);
    InstrumentLeg_66.insert(LegIssuer_66.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_66("STRING_1922078655");
    noLegs_0_1.set(LegLocaleOfIssue_66);
    InstrumentLeg_66.insert(LegLocaleOfIssue_66.getString());
    FIX::LegMaturityDate LegMaturityDate_66("LOCALMKTDATE_1926204991");
    noLegs_0_1.set(LegMaturityDate_66);
    InstrumentLeg_66.insert(LegMaturityDate_66.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_66("MONTHYEAR_1344390179");
    noLegs_0_1.set(LegMaturityMonthYear_66);
    InstrumentLeg_66.insert(LegMaturityMonthYear_66.getString());
    FIX::LegMaturityTime LegMaturityTime_66("TZTIMEONLY_1089655508");
    noLegs_0_1.set(LegMaturityTime_66);
    InstrumentLeg_66.insert(LegMaturityTime_66.getString());
    FIX::LegOptAttribute LegOptAttribute_66('8');
    noLegs_0_1.set(LegOptAttribute_66);
    InstrumentLeg_66.insert(LegOptAttribute_66.getString());
    FIX::LegOptionRatio LegOptionRatio_66;
    LegOptionRatio_66.setString("11548894");
    noLegs_0_1.set(LegOptionRatio_66);
    InstrumentLeg_66.insert(LegOptionRatio_66.getString());
    FIX::LegPool LegPool_66("STRING_14667783");
    noLegs_0_1.set(LegPool_66);
    InstrumentLeg_66.insert(LegPool_66.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_66("STRING_2127395780");
    noLegs_0_1.set(LegPriceUnitOfMeasure_66);
    InstrumentLeg_66.insert(LegPriceUnitOfMeasure_66.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
    LegPriceUnitOfMeasureQty_66.setString("21333404");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_66);
    InstrumentLeg_66.insert(LegPriceUnitOfMeasureQty_66.getString());
    FIX::LegProduct LegProduct_66(1758521136);
    noLegs_0_1.set(LegProduct_66);
    InstrumentLeg_66.insert(LegProduct_66.getString());
    FIX::LegPutOrCall LegPutOrCall_66(545204172);
    noLegs_0_1.set(LegPutOrCall_66);
    InstrumentLeg_66.insert(LegPutOrCall_66.getString());
    FIX::LegRatioQty LegRatioQty_66;
    LegRatioQty_66.setString("8066277");
    noLegs_0_1.set(LegRatioQty_66);
    InstrumentLeg_66.insert(LegRatioQty_66.getString());
    FIX::LegRedemptionDate LegRedemptionDate_66("LOCALMKTDATE_1621374920");
    noLegs_0_1.set(LegRedemptionDate_66);
    InstrumentLeg_66.insert(LegRedemptionDate_66.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_66("STRING_357341141");
    noLegs_0_1.set(LegRepoCollateralSecurityType_66);
    InstrumentLeg_66.insert(LegRepoCollateralSecurityType_66.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_66;
    LegRepurchaseRate_66.setString("6.230000");
    noLegs_0_1.set(LegRepurchaseRate_66);
    InstrumentLeg_66.insert(LegRepurchaseRate_66.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_66(1100626461);
    noLegs_0_1.set(LegRepurchaseTerm_66);
    InstrumentLeg_66.insert(LegRepurchaseTerm_66.getString());
    FIX::LegSecurityDesc LegSecurityDesc_66("STRING_864307475");
    noLegs_0_1.set(LegSecurityDesc_66);
    InstrumentLeg_66.insert(LegSecurityDesc_66.getString());
    FIX::LegSecurityExchange LegSecurityExchange_66("EXCHANGE_1730731061");
    noLegs_0_1.set(LegSecurityExchange_66);
    InstrumentLeg_66.insert(LegSecurityExchange_66.getString());
    FIX::LegSecurityID LegSecurityID_66("STRING_1092503405");
    noLegs_0_1.set(LegSecurityID_66);
    InstrumentLeg_66.insert(LegSecurityID_66.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_66("STRING_1285060871");
    noLegs_0_1.set(LegSecurityIDSource_66);
    InstrumentLeg_66.insert(LegSecurityIDSource_66.getString());
    FIX::LegSecuritySubType LegSecuritySubType_66("STRING_1444367902");
    noLegs_0_1.set(LegSecuritySubType_66);
    InstrumentLeg_66.insert(LegSecuritySubType_66.getString());
    FIX::LegSecurityType LegSecurityType_66("STRING_2146851675");
    noLegs_0_1.set(LegSecurityType_66);
    InstrumentLeg_66.insert(LegSecurityType_66.getString());
    FIX::LegSide LegSide_66('2');
    noLegs_0_1.set(LegSide_66);
    InstrumentLeg_66.insert(LegSide_66.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_66("STRING_931454310");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_66);
    InstrumentLeg_66.insert(LegStateOrProvinceOfIssue_66.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_66("JPY");
    noLegs_0_1.set(LegStrikeCurrency_66);
    InstrumentLeg_66.insert(LegStrikeCurrency_66.getString());
    FIX::LegStrikePrice LegStrikePrice_66;
    LegStrikePrice_66.setString("18838337");
    noLegs_0_1.set(LegStrikePrice_66);
    InstrumentLeg_66.insert(LegStrikePrice_66.getString());
    FIX::LegSymbol LegSymbol_66("STRING_435034461");
    noLegs_0_1.set(LegSymbol_66);
    InstrumentLeg_66.insert(LegSymbol_66.getString());
    FIX::LegSymbolSfx LegSymbolSfx_66("STRING_265732009");
    noLegs_0_1.set(LegSymbolSfx_66);
    InstrumentLeg_66.insert(LegSymbolSfx_66.getString());
    FIX::LegTimeUnit LegTimeUnit_66("STRING_115630357");
    noLegs_0_1.set(LegTimeUnit_66);
    InstrumentLeg_66.insert(LegTimeUnit_66.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_66("STRING_213035397");
    noLegs_0_1.set(LegUnitOfMeasure_66);
    InstrumentLeg_66.insert(LegUnitOfMeasure_66.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
    LegUnitOfMeasureQty_66.setString("403270");
    noLegs_0_1.set(LegUnitOfMeasureQty_66);
    InstrumentLeg_66.insert(LegUnitOfMeasureQty_66.getString());
    all_values.push_back(InstrumentLeg_66);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
      FIX::LegSecurityAltID LegSecurityAltID_119("STRING_1557425577");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_119);
      LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltID_119.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_119("STRING_1129982525");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_119);
      LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltIDSource_119.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_53;
  FIX::AttachmentPoint AttachmentPoint_53;
  AttachmentPoint_53.setString("63.660000");
  msg.set(AttachmentPoint_53);
  Instrument_53.insert(AttachmentPoint_53.getString());
  FIX::CFICode CFICode_53("STRING_564831391");
  msg.set(CFICode_53);
  Instrument_53.insert(CFICode_53.getString());
  FIX::CPProgram CPProgram_53(99);
  msg.set(CPProgram_53);
  Instrument_53.insert(CPProgram_53.getString());
  FIX::CPRegType CPRegType_53("STRING_677398498");
  msg.set(CPRegType_53);
  Instrument_53.insert(CPRegType_53.getString());
  FIX::CapPrice CapPrice_53;
  CapPrice_53.setString("5506882");
  msg.set(CapPrice_53);
  Instrument_53.insert(CapPrice_53.getString());
  FIX::ContractMultiplier ContractMultiplier_53;
  ContractMultiplier_53.setString("7556877");
  msg.set(ContractMultiplier_53);
  Instrument_53.insert(ContractMultiplier_53.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_53(1);
  msg.set(ContractMultiplierUnit_53);
  Instrument_53.insert(ContractMultiplierUnit_53.getString());
  FIX::ContractSettlMonth ContractSettlMonth_53("MONTHYEAR_1357315947");
  msg.set(ContractSettlMonth_53);
  Instrument_53.insert(ContractSettlMonth_53.getString());
  FIX::CountryOfIssue CountryOfIssue_53("COUNTRY_229579069");
  msg.set(CountryOfIssue_53);
  Instrument_53.insert(CountryOfIssue_53.getString());
  FIX::CouponPaymentDate CouponPaymentDate_53("LOCALMKTDATE_1579943812");
  msg.set(CouponPaymentDate_53);
  Instrument_53.insert(CouponPaymentDate_53.getString());
  FIX::CouponRate CouponRate_53;
  CouponRate_53.setString("65.700000");
  msg.set(CouponRate_53);
  Instrument_53.insert(CouponRate_53.getString());
  FIX::CreditRating CreditRating_53("STRING_1330205530");
  msg.set(CreditRating_53);
  Instrument_53.insert(CreditRating_53.getString());
  FIX::DatedDate DatedDate_53("LOCALMKTDATE_296767639");
  msg.set(DatedDate_53);
  Instrument_53.insert(DatedDate_53.getString());
  FIX::DetachmentPoint DetachmentPoint_53;
  DetachmentPoint_53.setString("39.830000");
  msg.set(DetachmentPoint_53);
  Instrument_53.insert(DetachmentPoint_53.getString());
  FIX::EncodedIssuer EncodedIssuer_53("DATA_275225287");
  msg.set(EncodedIssuer_53);
  Instrument_53.insert(EncodedIssuer_53.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_53(1581828510);
  msg.set(EncodedIssuerLen_53);
  Instrument_53.insert(EncodedIssuerLen_53.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_53("DATA_572438237");
  msg.set(EncodedSecurityDesc_53);
  Instrument_53.insert(EncodedSecurityDesc_53.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_53(274593314);
  msg.set(EncodedSecurityDescLen_53);
  Instrument_53.insert(EncodedSecurityDescLen_53.getString());
  FIX::ExerciseStyle ExerciseStyle_53(2);
  msg.set(ExerciseStyle_53);
  Instrument_53.insert(ExerciseStyle_53.getString());
  FIX::Factor Factor_53;
  Factor_53.setString("15038925");
  msg.set(Factor_53);
  Instrument_53.insert(Factor_53.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_53(false);
  msg.set(FlexProductEligibilityIndicator_53);
  Instrument_53.insert(FlexProductEligibilityIndicator_53.getString());
  FIX::FlexibleIndicator FlexibleIndicator_53(false);
  msg.set(FlexibleIndicator_53);
  Instrument_53.insert(FlexibleIndicator_53.getString());
  FIX::FloorPrice FloorPrice_53;
  FloorPrice_53.setString("12402426");
  msg.set(FloorPrice_53);
  Instrument_53.insert(FloorPrice_53.getString());
  FIX::FlowScheduleType FlowScheduleType_53(0);
  msg.set(FlowScheduleType_53);
  Instrument_53.insert(FlowScheduleType_53.getString());
  FIX::InstrRegistry InstrRegistry_53("STRING_2109551428");
  msg.set(InstrRegistry_53);
  Instrument_53.insert(InstrRegistry_53.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_53('1');
  msg.set(InstrmtAssignmentMethod_53);
  Instrument_53.insert(InstrmtAssignmentMethod_53.getString());
  FIX::InterestAccrualDate InterestAccrualDate_53("LOCALMKTDATE_2000616308");
  msg.set(InterestAccrualDate_53);
  Instrument_53.insert(InterestAccrualDate_53.getString());
  FIX::IssueDate IssueDate_53("LOCALMKTDATE_2394796");
  msg.set(IssueDate_53);
  Instrument_53.insert(IssueDate_53.getString());
  FIX::Issuer Issuer_53("STRING_1250224692");
  msg.set(Issuer_53);
  Instrument_53.insert(Issuer_53.getString());
  FIX::ListMethod ListMethod_53(1);
  msg.set(ListMethod_53);
  Instrument_53.insert(ListMethod_53.getString());
  FIX::LocaleOfIssue LocaleOfIssue_53("STRING_1132377321");
  msg.set(LocaleOfIssue_53);
  Instrument_53.insert(LocaleOfIssue_53.getString());
  FIX::MaturityDate MaturityDate_53("LOCALMKTDATE_1947711058");
  msg.set(MaturityDate_53);
  Instrument_53.insert(MaturityDate_53.getString());
  FIX::MaturityMonthYear MaturityMonthYear_53("MONTHYEAR_1975389628");
  msg.set(MaturityMonthYear_53);
  Instrument_53.insert(MaturityMonthYear_53.getString());
  FIX::MaturityTime MaturityTime_53("TZTIMEONLY_129543982");
  msg.set(MaturityTime_53);
  Instrument_53.insert(MaturityTime_53.getString());
  FIX::MinPriceIncrement MinPriceIncrement_53;
  MinPriceIncrement_53.setString("4776259");
  msg.set(MinPriceIncrement_53);
  Instrument_53.insert(MinPriceIncrement_53.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
  MinPriceIncrementAmount_53.setString("3785941");
  msg.set(MinPriceIncrementAmount_53);
  Instrument_53.insert(MinPriceIncrementAmount_53.getString());
  FIX::NTPositionLimit NTPositionLimit_53(885231779);
  msg.set(NTPositionLimit_53);
  Instrument_53.insert(NTPositionLimit_53.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
  NotionalPercentageOutstanding_53.setString("85.790000");
  msg.set(NotionalPercentageOutstanding_53);
  Instrument_53.insert(NotionalPercentageOutstanding_53.getString());
  FIX::OptAttribute OptAttribute_53('1');
  msg.set(OptAttribute_53);
  Instrument_53.insert(OptAttribute_53.getString());
  FIX::OptPayoutAmount OptPayoutAmount_53;
  OptPayoutAmount_53.setString("11148108");
  msg.set(OptPayoutAmount_53);
  Instrument_53.insert(OptPayoutAmount_53.getString());
  FIX::OptPayoutType OptPayoutType_53(2);
  msg.set(OptPayoutType_53);
  Instrument_53.insert(OptPayoutType_53.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
  OriginalNotionalPercentageOutstanding_53.setString("30.610000");
  msg.set(OriginalNotionalPercentageOutstanding_53);
  Instrument_53.insert(OriginalNotionalPercentageOutstanding_53.getString());
  FIX::Pool Pool_53("STRING_297532730");
  msg.set(Pool_53);
  Instrument_53.insert(Pool_53.getString());
  FIX::PositionLimit PositionLimit_53(1429456382);
  msg.set(PositionLimit_53);
  Instrument_53.insert(PositionLimit_53.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_53("STRING_STD");
  msg.set(PriceQuoteMethod_53);
  Instrument_53.insert(PriceQuoteMethod_53.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_53("STRING_572758017");
  msg.set(PriceUnitOfMeasure_53);
  Instrument_53.insert(PriceUnitOfMeasure_53.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
  PriceUnitOfMeasureQty_53.setString("8638012");
  msg.set(PriceUnitOfMeasureQty_53);
  Instrument_53.insert(PriceUnitOfMeasureQty_53.getString());
  FIX::Product Product_55(9);
  msg.set(Product_55);
  Instrument_53.insert(Product_55.getString());
  FIX::ProductComplex ProductComplex_53("STRING_847351331");
  msg.set(ProductComplex_53);
  Instrument_53.insert(ProductComplex_53.getString());
  FIX::PutOrCall PutOrCall_53(1);
  msg.set(PutOrCall_53);
  Instrument_53.insert(PutOrCall_53.getString());
  FIX::RedemptionDate RedemptionDate_53("LOCALMKTDATE_337650533");
  msg.set(RedemptionDate_53);
  Instrument_53.insert(RedemptionDate_53.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_53("STRING_52414133");
  msg.set(RepoCollateralSecurityType_53);
  Instrument_53.insert(RepoCollateralSecurityType_53.getString());
  FIX::RepurchaseRate RepurchaseRate_53;
  RepurchaseRate_53.setString("77.720000");
  msg.set(RepurchaseRate_53);
  Instrument_53.insert(RepurchaseRate_53.getString());
  FIX::RepurchaseTerm RepurchaseTerm_53(1577893167);
  msg.set(RepurchaseTerm_53);
  Instrument_53.insert(RepurchaseTerm_53.getString());
  FIX::RestructuringType RestructuringType_53("STRING_XR");
  msg.set(RestructuringType_53);
  Instrument_53.insert(RestructuringType_53.getString());
  FIX::SecurityDesc SecurityDesc_53("STRING_181275552");
  msg.set(SecurityDesc_53);
  Instrument_53.insert(SecurityDesc_53.getString());
  FIX::SecurityExchange SecurityExchange_53("EXCHANGE_786282510");
  msg.set(SecurityExchange_53);
  Instrument_53.insert(SecurityExchange_53.getString());
  FIX::SecurityGroup SecurityGroup_53("STRING_1693127703");
  msg.set(SecurityGroup_53);
  Instrument_53.insert(SecurityGroup_53.getString());
  FIX::SecurityID SecurityID_53("STRING_183670349");
  msg.set(SecurityID_53);
  Instrument_53.insert(SecurityID_53.getString());
  FIX::SecurityIDSource SecurityIDSource_53("STRING_6");
  msg.set(SecurityIDSource_53);
  Instrument_53.insert(SecurityIDSource_53.getString());
  FIX::SecurityStatus SecurityStatus_53("STRING_1");
  msg.set(SecurityStatus_53);
  Instrument_53.insert(SecurityStatus_53.getString());
  FIX::SecuritySubType SecuritySubType_54("STRING_1316047670");
  msg.set(SecuritySubType_54);
  Instrument_53.insert(SecuritySubType_54.getString());
  FIX::SecurityType SecurityType_55("STRING_EUCD");
  msg.set(SecurityType_55);
  Instrument_53.insert(SecurityType_55.getString());
  FIX::Seniority Seniority_53("STRING_SD");
  msg.set(Seniority_53);
  Instrument_53.insert(Seniority_53.getString());
  FIX::SettlMethod SettlMethod_53('C');
  msg.set(SettlMethod_53);
  Instrument_53.insert(SettlMethod_53.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_53("STRING_166876874");
  msg.set(SettleOnOpenFlag_53);
  Instrument_53.insert(SettleOnOpenFlag_53.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_53("STRING_1162702464");
  msg.set(StateOrProvinceOfIssue_53);
  Instrument_53.insert(StateOrProvinceOfIssue_53.getString());
  FIX::StrikeCurrency StrikeCurrency_53("GBP");
  msg.set(StrikeCurrency_53);
  Instrument_53.insert(StrikeCurrency_53.getString());
  FIX::StrikeMultiplier StrikeMultiplier_53;
  StrikeMultiplier_53.setString("7511289");
  msg.set(StrikeMultiplier_53);
  Instrument_53.insert(StrikeMultiplier_53.getString());
  FIX::StrikePrice StrikePrice_53;
  StrikePrice_53.setString("12981506");
  msg.set(StrikePrice_53);
  Instrument_53.insert(StrikePrice_53.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_53(5);
  msg.set(StrikePriceBoundaryMethod_53);
  Instrument_53.insert(StrikePriceBoundaryMethod_53.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
  StrikePriceBoundaryPrecision_53.setString("20.160000");
  msg.set(StrikePriceBoundaryPrecision_53);
  Instrument_53.insert(StrikePriceBoundaryPrecision_53.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_53(2);
  msg.set(StrikePriceDeterminationMethod_53);
  Instrument_53.insert(StrikePriceDeterminationMethod_53.getString());
  FIX::StrikeValue StrikeValue_53;
  StrikeValue_53.setString("1342832");
  msg.set(StrikeValue_53);
  Instrument_53.insert(StrikeValue_53.getString());
  FIX::Symbol Symbol_53("STRING_293181764");
  msg.set(Symbol_53);
  Instrument_53.insert(Symbol_53.getString());
  FIX::SymbolSfx SymbolSfx_53("STRING_CD");
  msg.set(SymbolSfx_53);
  Instrument_53.insert(SymbolSfx_53.getString());
  FIX::TimeUnit TimeUnit_53("STRING_H");
  msg.set(TimeUnit_53);
  Instrument_53.insert(TimeUnit_53.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_53(3);
  msg.set(UnderlyingPriceDeterminationMethod_53);
  Instrument_53.insert(UnderlyingPriceDeterminationMethod_53.getString());
  FIX::UnitOfMeasure UnitOfMeasure_53("STRING_tn");
  msg.set(UnitOfMeasure_53);
  Instrument_53.insert(UnitOfMeasure_53.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
  UnitOfMeasureQty_53.setString("15209565");
  msg.set(UnitOfMeasureQty_53);
  Instrument_53.insert(UnitOfMeasureQty_53.getString());
  FIX::ValuationMethod ValuationMethod_53("STRING_FUT");
  msg.set(ValuationMethod_53);
  Instrument_53.insert(ValuationMethod_53.getString());
  all_values.push_back(Instrument_53);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_102;
    FIX::ComplexEventCondition ComplexEventCondition_102(1);
    noComplexEvents_0_0.set(ComplexEventCondition_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventCondition_102.getString());
    FIX::ComplexEventPrice ComplexEventPrice_102;
    ComplexEventPrice_102.setString("10424834");
    noComplexEvents_0_0.set(ComplexEventPrice_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPrice_102.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_102(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryMethod_102.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
    ComplexEventPriceBoundaryPrecision_102.setString("98.550000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryPrecision_102.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_102(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceTimeType_102.getString());
    FIX::ComplexEventType ComplexEventType_102(9);
    noComplexEvents_0_0.set(ComplexEventType_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexEventType_102.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
    ComplexOptPayoutAmount_102.setString("21051102");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_102);
    ComplexEvents_NoComplexEvents_102.insert(ComplexOptPayoutAmount_102.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_102);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_212;
      FIX::ComplexEventEndDate ComplexEventEndDate_212(FIX::UTCTIMESTAMP(10, 41, 31, 27, 82017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventEndDate_212.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_212(FIX::UTCTIMESTAMP(1, 43, 46, 19, 82001));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventStartDate_212.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_212);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
        FIX::ComplexEventEndTime ComplexEventEndTime_419(FIX::UTCTIMEONLY(2, 35, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_419);
        ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventEndTime_419.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_419(FIX::UTCTIMEONLY(21, 49, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_419);
        ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventStartTime_419.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_103;
    FIX::ComplexEventCondition ComplexEventCondition_103(1);
    noComplexEvents_0_1.set(ComplexEventCondition_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventCondition_103.getString());
    FIX::ComplexEventPrice ComplexEventPrice_103;
    ComplexEventPrice_103.setString("14771105");
    noComplexEvents_0_1.set(ComplexEventPrice_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPrice_103.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_103(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryMethod_103.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
    ComplexEventPriceBoundaryPrecision_103.setString("72.670000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryPrecision_103.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_103(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceTimeType_103.getString());
    FIX::ComplexEventType ComplexEventType_103(2);
    noComplexEvents_0_1.set(ComplexEventType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventType_103.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
    ComplexOptPayoutAmount_103.setString("19759538");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexOptPayoutAmount_103.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_103);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_213;
      FIX::ComplexEventEndDate ComplexEventEndDate_213(FIX::UTCTIMESTAMP(9, 20, 29, 0, 82010));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventEndDate_213.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_213(FIX::UTCTIMESTAMP(1, 51, 37, 12, 42008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventStartDate_213.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_213);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
        FIX::ComplexEventEndTime ComplexEventEndTime_420(FIX::UTCTIMEONLY(14, 46, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_420);
        ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventEndTime_420.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_420(FIX::UTCTIMEONLY(12, 18, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_420);
        ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventStartTime_420.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
        FIX::ComplexEventEndTime ComplexEventEndTime_421(FIX::UTCTIMEONLY(9, 23, 27));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_421);
        ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventEndTime_421.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_421(FIX::UTCTIMEONLY(10, 2, 11));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_421);
        ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventStartTime_421.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
        FIX::ComplexEventEndTime ComplexEventEndTime_422(FIX::UTCTIMEONLY(11, 23, 37));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_422);
        ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventEndTime_422.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_422(FIX::UTCTIMEONLY(23, 46, 27));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_422);
        ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventStartTime_422.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_104;
    FIX::ComplexEventCondition ComplexEventCondition_104(1);
    noComplexEvents_0_2.set(ComplexEventCondition_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventCondition_104.getString());
    FIX::ComplexEventPrice ComplexEventPrice_104;
    ComplexEventPrice_104.setString("18111206");
    noComplexEvents_0_2.set(ComplexEventPrice_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPrice_104.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_104(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryMethod_104.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
    ComplexEventPriceBoundaryPrecision_104.setString("82.880000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryPrecision_104.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_104(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceTimeType_104.getString());
    FIX::ComplexEventType ComplexEventType_104(2);
    noComplexEvents_0_2.set(ComplexEventType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventType_104.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
    ComplexOptPayoutAmount_104.setString("1693285");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexOptPayoutAmount_104.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_104);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_214;
      FIX::ComplexEventEndDate ComplexEventEndDate_214(FIX::UTCTIMESTAMP(9, 36, 25, 5, 112007));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventEndDate_214.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_214(FIX::UTCTIMESTAMP(19, 34, 40, 20, 12012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventStartDate_214.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_214);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
        FIX::ComplexEventEndTime ComplexEventEndTime_423(FIX::UTCTIMEONLY(22, 55, 14));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_423);
        ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventEndTime_423.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_423(FIX::UTCTIMEONLY(6, 0, 53));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_423);
        ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventStartTime_423.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
        FIX::ComplexEventEndTime ComplexEventEndTime_424(FIX::UTCTIMEONLY(18, 49, 42));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_424);
        ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventEndTime_424.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_424(FIX::UTCTIMEONLY(17, 53, 22));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_424);
        ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventStartTime_424.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_215;
      FIX::ComplexEventEndDate ComplexEventEndDate_215(FIX::UTCTIMESTAMP(18, 50, 22, 16, 22005));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventEndDate_215.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_215(FIX::UTCTIMESTAMP(12, 7, 54, 4, 82016));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventStartDate_215.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_215);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
        FIX::ComplexEventEndTime ComplexEventEndTime_425(FIX::UTCTIMEONLY(14, 3, 35));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_425);
        ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventEndTime_425.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_425(FIX::UTCTIMEONLY(21, 27, 37));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_425);
        ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventStartTime_425.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
        FIX::ComplexEventEndTime ComplexEventEndTime_426(FIX::UTCTIMEONLY(13, 18, 29));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_426);
        ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventEndTime_426.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_426(FIX::UTCTIMEONLY(12, 22, 18));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_426);
        ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventStartTime_426.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);

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
    multiset<string> EvntGrp_NoEvents_106;
    FIX::EventDate EventDate_106("LOCALMKTDATE_458660276");
    noEvents_0_0.set(EventDate_106);
    EvntGrp_NoEvents_106.insert(EventDate_106.getString());
    FIX::EventPx EventPx_106;
    EventPx_106.setString("2872401");
    noEvents_0_0.set(EventPx_106);
    EvntGrp_NoEvents_106.insert(EventPx_106.getString());
    FIX::EventText EventText_106("STRING_1898561958");
    noEvents_0_0.set(EventText_106);
    EvntGrp_NoEvents_106.insert(EventText_106.getString());
    FIX::EventTime EventTime_106(FIX::UTCTIMESTAMP(5, 51, 10, 14, 32016));
    noEvents_0_0.set(EventTime_106);
    EvntGrp_NoEvents_106.insert(EventTime_106.getString());
    FIX::EventType EventType_106(11);
    noEvents_0_0.set(EventType_106);
    EvntGrp_NoEvents_106.insert(EventType_106.getString());
    all_values.push_back(EvntGrp_NoEvents_106);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_107;
    FIX::EventDate EventDate_107("LOCALMKTDATE_1877361094");
    noEvents_0_1.set(EventDate_107);
    EvntGrp_NoEvents_107.insert(EventDate_107.getString());
    FIX::EventPx EventPx_107;
    EventPx_107.setString("15560741");
    noEvents_0_1.set(EventPx_107);
    EvntGrp_NoEvents_107.insert(EventPx_107.getString());
    FIX::EventText EventText_107("STRING_449212298");
    noEvents_0_1.set(EventText_107);
    EvntGrp_NoEvents_107.insert(EventText_107.getString());
    FIX::EventTime EventTime_107(FIX::UTCTIMESTAMP(23, 41, 13, 3, 72003));
    noEvents_0_1.set(EventTime_107);
    EvntGrp_NoEvents_107.insert(EventTime_107.getString());
    FIX::EventType EventType_107(14);
    noEvents_0_1.set(EventType_107);
    EvntGrp_NoEvents_107.insert(EventType_107.getString());
    all_values.push_back(EvntGrp_NoEvents_107);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_108;
    FIX::EventDate EventDate_108("LOCALMKTDATE_1255573489");
    noEvents_0_2.set(EventDate_108);
    EvntGrp_NoEvents_108.insert(EventDate_108.getString());
    FIX::EventPx EventPx_108;
    EventPx_108.setString("8433462");
    noEvents_0_2.set(EventPx_108);
    EvntGrp_NoEvents_108.insert(EventPx_108.getString());
    FIX::EventText EventText_108("STRING_818266831");
    noEvents_0_2.set(EventText_108);
    EvntGrp_NoEvents_108.insert(EventText_108.getString());
    FIX::EventTime EventTime_108(FIX::UTCTIMESTAMP(6, 23, 32, 0, 12017));
    noEvents_0_2.set(EventTime_108);
    EvntGrp_NoEvents_108.insert(EventTime_108.getString());
    FIX::EventType EventType_108(10);
    noEvents_0_2.set(EventType_108);
    EvntGrp_NoEvents_108.insert(EventType_108.getString());
    all_values.push_back(EvntGrp_NoEvents_108);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_96;
    FIX::InstrumentPartyID InstrumentPartyID_96("STRING_849626125");
    noInstrumentParties_0_0.set(InstrumentPartyID_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyID_96.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_96('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyIDSource_96.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_96(1372532954);
    noInstrumentParties_0_0.set(InstrumentPartyRole_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyRole_96.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_96);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
      FIX::InstrumentPartySubID InstrumentPartySubID_191("STRING_2008436512");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_191);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubID_191.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_191(1451380624);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_191);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubIDType_191.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
      FIX::InstrumentPartySubID InstrumentPartySubID_192("STRING_114878191");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_192);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubID_192.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_192(830483835);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_192);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubIDType_192.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
      FIX::InstrumentPartySubID InstrumentPartySubID_193("STRING_1181258070");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_193);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubID_193.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_193(1670952304);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_193);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubIDType_193.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_104;
    FIX::SecurityAltID SecurityAltID_104("STRING_63938409");
    noSecurityAltID_0_0.set(SecurityAltID_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltID_104.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_104("STRING_1553676295");
    noSecurityAltID_0_0.set(SecurityAltIDSource_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltIDSource_104.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_105;
    FIX::SecurityAltID SecurityAltID_105("STRING_11618607");
    noSecurityAltID_0_1.set(SecurityAltID_105);
    SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltID_105.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_105("STRING_1049623702");
    noSecurityAltID_0_1.set(SecurityAltIDSource_105);
    SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltIDSource_105.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_106;
    FIX::SecurityAltID SecurityAltID_106("STRING_751548270");
    noSecurityAltID_0_2.set(SecurityAltID_106);
    SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltID_106.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_106("STRING_186992661");
    noSecurityAltID_0_2.set(SecurityAltIDSource_106);
    SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltIDSource_106.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_106;
  FIX::SecurityXML SecurityXML_107("XMLDATA_1369329535");
  msg.set(SecurityXML_107);
  FIX::SecurityXMLLen SecurityXMLLen_53(1286120803);
  msg.set(SecurityXMLLen_53);
  FIX::SecurityXMLSchema SecurityXMLSchema_53("STRING_1442566151");
  msg.set(SecurityXMLSchema_53);
  SecurityXML_106.insert(SecurityXMLSchema_53.getString());
  all_values.push_back(SecurityXML_106);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_98;
    FIX::PartyID PartyID_98("STRING_2104387635");
    noPartyIDs_0_0.set(PartyID_98);
    Parties_NoPartyIDs_98.insert(PartyID_98.getString());
    FIX::PartyIDSource PartyIDSource_98('5');
    noPartyIDs_0_0.set(PartyIDSource_98);
    Parties_NoPartyIDs_98.insert(PartyIDSource_98.getString());
    FIX::PartyRole PartyRole_98(54);
    noPartyIDs_0_0.set(PartyRole_98);
    Parties_NoPartyIDs_98.insert(PartyRole_98.getString());
    all_values.push_back(Parties_NoPartyIDs_98);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      FIX::PartySubID PartySubID_191("STRING_1083486294");
      noPartySubIDs_0_1_0.set(PartySubID_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubID_191.getString());
      FIX::PartySubIDType PartySubIDType_191(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubIDType_191.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_99;
    FIX::PartyID PartyID_99("STRING_957540522");
    noPartyIDs_0_1.set(PartyID_99);
    Parties_NoPartyIDs_99.insert(PartyID_99.getString());
    FIX::PartyIDSource PartyIDSource_99('H');
    noPartyIDs_0_1.set(PartyIDSource_99);
    Parties_NoPartyIDs_99.insert(PartyIDSource_99.getString());
    FIX::PartyRole PartyRole_99(52);
    noPartyIDs_0_1.set(PartyRole_99);
    Parties_NoPartyIDs_99.insert(PartyRole_99.getString());
    all_values.push_back(Parties_NoPartyIDs_99);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      FIX::PartySubID PartySubID_192("STRING_730087420");
      noPartySubIDs_1_1_0.set(PartySubID_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubID_192.getString());
      FIX::PartySubIDType PartySubIDType_192(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubIDType_192.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      FIX::PartySubID PartySubID_193("STRING_123598631");
      noPartySubIDs_1_1_1.set(PartySubID_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubID_193.getString());
      FIX::PartySubIDType PartySubIDType_193(11);
      noPartySubIDs_1_1_1.set(PartySubIDType_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubIDType_193.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      FIX::PartySubID PartySubID_194("STRING_629835489");
      noPartySubIDs_1_1_2.set(PartySubID_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubID_194.getString());
      FIX::PartySubIDType PartySubIDType_194(4);
      noPartySubIDs_1_1_2.set(PartySubIDType_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubIDType_194.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_8;
    FIX::PosAmt PosAmt_8;
    PosAmt_8.setString("14603193");
    noPosAmt_0_0.set(PosAmt_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmt_8.getString());
    FIX::PosAmtType PosAmtType_8("STRING_ICMTM");
    noPosAmt_0_0.set(PosAmtType_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmtType_8.getString());
    FIX::PositionCurrency PositionCurrency_8("STRING_1311846883");
    noPosAmt_0_0.set(PositionCurrency_8);
    PositionAmountData_NoPosAmt_8.insert(PositionCurrency_8.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_8);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_9;
    FIX::PosAmt PosAmt_9;
    PosAmt_9.setString("5925318");
    noPosAmt_0_1.set(PosAmt_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmt_9.getString());
    FIX::PosAmtType PosAmtType_9("STRING_CPN");
    noPosAmt_0_1.set(PosAmtType_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmtType_9.getString());
    FIX::PositionCurrency PositionCurrency_9("STRING_718039530");
    noPosAmt_0_1.set(PositionCurrency_9);
    PositionAmountData_NoPosAmt_9.insert(PositionCurrency_9.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_9);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("6041504");
    noPosAmt_0_2.set(PosAmt_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmt_10.getString());
    FIX::PosAmtType PosAmtType_10("STRING_ICPN");
    noPosAmt_0_2.set(PosAmtType_10);
    PositionAmountData_NoPosAmt_10.insert(PosAmtType_10.getString());
    FIX::PositionCurrency PositionCurrency_10("STRING_1469587801");
    noPosAmt_0_2.set(PositionCurrency_10);
    PositionAmountData_NoPosAmt_10.insert(PositionCurrency_10.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_10);

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("9441616");
    noPositions_0_0.set(LongQty_3);
    PositionQty_NoPositions_3.insert(LongQty_3.getString());
    FIX::PosQtyStatus PosQtyStatus_3(0);
    noPositions_0_0.set(PosQtyStatus_3);
    PositionQty_NoPositions_3.insert(PosQtyStatus_3.getString());
    FIX::PosType PosType_3("STRING_AS");
    noPositions_0_0.set(PosType_3);
    PositionQty_NoPositions_3.insert(PosType_3.getString());
    FIX::QuantityDate QuantityDate_3("LOCALMKTDATE_1009353787");
    noPositions_0_0.set(QuantityDate_3);
    PositionQty_NoPositions_3.insert(QuantityDate_3.getString());
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("5651289");
    noPositions_0_0.set(ShortQty_3);
    PositionQty_NoPositions_3.insert(ShortQty_3.getString());
    all_values.push_back(PositionQty_NoPositions_3);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_87;
      FIX::NestedPartyID NestedPartyID_87("STRING_1637593535");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyID_87.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_87('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyIDSource_87.getString());
      FIX::NestedPartyRole NestedPartyRole_87(1767399796);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyRole_87.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_87);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
        FIX::NestedPartySubID NestedPartySubID_166("STRING_142795848");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubID_166.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_166(1647861091);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubIDType_166.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
        FIX::NestedPartySubID NestedPartySubID_167("STRING_489738170");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubID_167.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_167(1041345173);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubIDType_167.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
        FIX::NestedPartySubID NestedPartySubID_168("STRING_230464864");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubID_168.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_168(1258620795);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubIDType_168.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_88;
      FIX::NestedPartyID NestedPartyID_88("STRING_1164943804");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyID_88.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_88('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyIDSource_88.getString());
      FIX::NestedPartyRole NestedPartyRole_88(1888456284);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_88);
      NestedParties_NoNestedPartyIDs_88.insert(NestedPartyRole_88.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_88);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
        FIX::NestedPartySubID NestedPartySubID_169("STRING_1544859479");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubID_169.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_169(1201291960);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubIDType_169.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("12011930");
    noPositions_0_1.set(LongQty_4);
    PositionQty_NoPositions_4.insert(LongQty_4.getString());
    FIX::PosQtyStatus PosQtyStatus_4(2);
    noPositions_0_1.set(PosQtyStatus_4);
    PositionQty_NoPositions_4.insert(PosQtyStatus_4.getString());
    FIX::PosType PosType_4("STRING_PIT");
    noPositions_0_1.set(PosType_4);
    PositionQty_NoPositions_4.insert(PosType_4.getString());
    FIX::QuantityDate QuantityDate_4("LOCALMKTDATE_1873885177");
    noPositions_0_1.set(QuantityDate_4);
    PositionQty_NoPositions_4.insert(QuantityDate_4.getString());
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("14272622");
    noPositions_0_1.set(ShortQty_4);
    PositionQty_NoPositions_4.insert(ShortQty_4.getString());
    all_values.push_back(PositionQty_NoPositions_4);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_89;
      FIX::NestedPartyID NestedPartyID_89("STRING_1448717318");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyID_89.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_89('7');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyIDSource_89.getString());
      FIX::NestedPartyRole NestedPartyRole_89(1041633616);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_89);
      NestedParties_NoNestedPartyIDs_89.insert(NestedPartyRole_89.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_89);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
        FIX::NestedPartySubID NestedPartySubID_170("STRING_1357591355");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubID_170.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_170(1127859197);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubIDType_170.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_20;
    FIX::TradingSessionID TradingSessionID_56("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_56);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionID_56.getString());
    FIX::TradingSessionSubID TradingSessionSubID_56("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_56);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionSubID_56.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_20);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    FIX::TradingSessionID TradingSessionID_57("STRING_3");
    noTradingSessions_0_1.set(TradingSessionID_57);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionID_57.getString());
    FIX::TradingSessionSubID TradingSessionSubID_57("STRING_1");
    noTradingSessions_0_1.set(TradingSessionSubID_57);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionSubID_57.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_81;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_81("DATA_681844886");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingIssuer_81.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_81(1250771473);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingIssuerLen_81.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_81("DATA_932066291");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDesc_81.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_81(1171583057);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_81);
    UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDescLen_81.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
    UnderlyingAdjustedQuantity_81.setString("1446329");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_81);
    UnderlyingInstrument_81.insert(UnderlyingAdjustedQuantity_81.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
    UnderlyingAllocationPercent_81.setString("11.550000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_81);
    UnderlyingInstrument_81.insert(UnderlyingAllocationPercent_81.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
    UnderlyingAttachmentPoint_81.setString("2.040000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_81);
    UnderlyingInstrument_81.insert(UnderlyingAttachmentPoint_81.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_81("STRING_1309576803");
    noUnderlyings_0_0.set(UnderlyingCFICode_81);
    UnderlyingInstrument_81.insert(UnderlyingCFICode_81.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_81("STRING_919012407");
    noUnderlyings_0_0.set(UnderlyingCPProgram_81);
    UnderlyingInstrument_81.insert(UnderlyingCPProgram_81.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_81("STRING_23692840");
    noUnderlyings_0_0.set(UnderlyingCPRegType_81);
    UnderlyingInstrument_81.insert(UnderlyingCPRegType_81.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_81;
    UnderlyingCapValue_81.setString("19020162");
    noUnderlyings_0_0.set(UnderlyingCapValue_81);
    UnderlyingInstrument_81.insert(UnderlyingCapValue_81.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
    UnderlyingCashAmount_81.setString("3163882");
    noUnderlyings_0_0.set(UnderlyingCashAmount_81);
    UnderlyingInstrument_81.insert(UnderlyingCashAmount_81.getString());
    FIX::UnderlyingCashType UnderlyingCashType_81("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_81);
    UnderlyingInstrument_81.insert(UnderlyingCashType_81.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
    UnderlyingContractMultiplier_81.setString("9557256");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_81);
    UnderlyingInstrument_81.insert(UnderlyingContractMultiplier_81.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_81(1025610954);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_81);
    UnderlyingInstrument_81.insert(UnderlyingContractMultiplierUnit_81.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_81("COUNTRY_871324921");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingCountryOfIssue_81.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_81("LOCALMKTDATE_682127186");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_81);
    UnderlyingInstrument_81.insert(UnderlyingCouponPaymentDate_81.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
    UnderlyingCouponRate_81.setString("95.510000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_81);
    UnderlyingInstrument_81.insert(UnderlyingCouponRate_81.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_81("STRING_1121815459");
    noUnderlyings_0_0.set(UnderlyingCreditRating_81);
    UnderlyingInstrument_81.insert(UnderlyingCreditRating_81.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_81("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_81);
    UnderlyingInstrument_81.insert(UnderlyingCurrency_81.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
    UnderlyingCurrentValue_81.setString("159654");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_81);
    UnderlyingInstrument_81.insert(UnderlyingCurrentValue_81.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
    UnderlyingDetachmentPoint_81.setString("62.040000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_81);
    UnderlyingInstrument_81.insert(UnderlyingDetachmentPoint_81.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
    UnderlyingDirtyPrice_81.setString("2648636");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_81);
    UnderlyingInstrument_81.insert(UnderlyingDirtyPrice_81.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
    UnderlyingEndPrice_81.setString("11438246");
    noUnderlyings_0_0.set(UnderlyingEndPrice_81);
    UnderlyingInstrument_81.insert(UnderlyingEndPrice_81.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_81;
    UnderlyingEndValue_81.setString("14835053");
    noUnderlyings_0_0.set(UnderlyingEndValue_81);
    UnderlyingInstrument_81.insert(UnderlyingEndValue_81.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_81(40100307);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_81);
    UnderlyingInstrument_81.insert(UnderlyingExerciseStyle_81.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_81;
    UnderlyingFXRate_81.setString("8081136");
    noUnderlyings_0_0.set(UnderlyingFXRate_81);
    UnderlyingInstrument_81.insert(UnderlyingFXRate_81.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_81('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_81);
    UnderlyingInstrument_81.insert(UnderlyingFXRateCalc_81.getString());
    FIX::UnderlyingFactor UnderlyingFactor_81;
    UnderlyingFactor_81.setString("11480759");
    noUnderlyings_0_0.set(UnderlyingFactor_81);
    UnderlyingInstrument_81.insert(UnderlyingFactor_81.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_81(92318876);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_81);
    UnderlyingInstrument_81.insert(UnderlyingFlowScheduleType_81.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_81("STRING_762725599");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_81);
    UnderlyingInstrument_81.insert(UnderlyingInstrRegistry_81.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_81("LOCALMKTDATE_251363757");
    noUnderlyings_0_0.set(UnderlyingIssueDate_81);
    UnderlyingInstrument_81.insert(UnderlyingIssueDate_81.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_81("STRING_1024385167");
    noUnderlyings_0_0.set(UnderlyingIssuer_81);
    UnderlyingInstrument_81.insert(UnderlyingIssuer_81.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_81("STRING_1934308656");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingLocaleOfIssue_81.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_81("LOCALMKTDATE_395996755");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityDate_81.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_81("MONTHYEAR_39432675");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityMonthYear_81.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_81("TZTIMEONLY_69545212");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_81);
    UnderlyingInstrument_81.insert(UnderlyingMaturityTime_81.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
    UnderlyingNotionalPercentageOutstanding_81.setString("35.580000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_81);
    UnderlyingInstrument_81.insert(UnderlyingNotionalPercentageOutstanding_81.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_81('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_81);
    UnderlyingInstrument_81.insert(UnderlyingOptAttribute_81.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
    UnderlyingOriginalNotionalPercentageOutstanding_81.setString("80.520000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_81);
    UnderlyingInstrument_81.insert(UnderlyingOriginalNotionalPercentageOutstanding_81.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_81("STRING_1460106125");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_81);
    UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasure_81.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
    UnderlyingPriceUnitOfMeasureQty_81.setString("12748333");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_81);
    UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasureQty_81.getString());
    FIX::UnderlyingProduct UnderlyingProduct_81(1318222852);
    noUnderlyings_0_0.set(UnderlyingProduct_81);
    UnderlyingInstrument_81.insert(UnderlyingProduct_81.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_81(268348134);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_81);
    UnderlyingInstrument_81.insert(UnderlyingPutOrCall_81.getString());
    FIX::UnderlyingPx UnderlyingPx_81;
    UnderlyingPx_81.setString("1529606");
    noUnderlyings_0_0.set(UnderlyingPx_81);
    UnderlyingInstrument_81.insert(UnderlyingPx_81.getString());
    FIX::UnderlyingQty UnderlyingQty_81;
    UnderlyingQty_81.setString("420641");
    noUnderlyings_0_0.set(UnderlyingQty_81);
    UnderlyingInstrument_81.insert(UnderlyingQty_81.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_81("LOCALMKTDATE_950475320");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_81);
    UnderlyingInstrument_81.insert(UnderlyingRedemptionDate_81.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_81("STRING_458350179");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_81);
    UnderlyingInstrument_81.insert(UnderlyingRepoCollateralSecurityType_81.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
    UnderlyingRepurchaseRate_81.setString("95.850000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_81);
    UnderlyingInstrument_81.insert(UnderlyingRepurchaseRate_81.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_81(933836177);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_81);
    UnderlyingInstrument_81.insert(UnderlyingRepurchaseTerm_81.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_81("STRING_1513106129");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_81);
    UnderlyingInstrument_81.insert(UnderlyingRestructuringType_81.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_81("STRING_1179845012");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityDesc_81.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_81("EXCHANGE_1162592381");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityExchange_81.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_81("STRING_1777969786");
    noUnderlyings_0_0.set(UnderlyingSecurityID_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityID_81.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_81("STRING_176185989");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityIDSource_81.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_81("STRING_498614071");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_81);
    UnderlyingInstrument_81.insert(UnderlyingSecuritySubType_81.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_81("STRING_1818070093");
    noUnderlyings_0_0.set(UnderlyingSecurityType_81);
    UnderlyingInstrument_81.insert(UnderlyingSecurityType_81.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_81("STRING_984299665");
    noUnderlyings_0_0.set(UnderlyingSeniority_81);
    UnderlyingInstrument_81.insert(UnderlyingSeniority_81.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_81("STRING_579494784");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_81);
    UnderlyingInstrument_81.insert(UnderlyingSettlMethod_81.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_81(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_81);
    UnderlyingInstrument_81.insert(UnderlyingSettlementType_81.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_81;
    UnderlyingStartValue_81.setString("10766185");
    noUnderlyings_0_0.set(UnderlyingStartValue_81);
    UnderlyingInstrument_81.insert(UnderlyingStartValue_81.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_81("STRING_1342220383");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_81);
    UnderlyingInstrument_81.insert(UnderlyingStateOrProvinceOfIssue_81.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_81("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_81);
    UnderlyingInstrument_81.insert(UnderlyingStrikeCurrency_81.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
    UnderlyingStrikePrice_81.setString("11290453");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_81);
    UnderlyingInstrument_81.insert(UnderlyingStrikePrice_81.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_81("STRING_1466022890");
    noUnderlyings_0_0.set(UnderlyingSymbol_81);
    UnderlyingInstrument_81.insert(UnderlyingSymbol_81.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_81("STRING_2140436383");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_81);
    UnderlyingInstrument_81.insert(UnderlyingSymbolSfx_81.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_81("STRING_1198590603");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_81);
    UnderlyingInstrument_81.insert(UnderlyingTimeUnit_81.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_81("STRING_1024112800");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_81);
    UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasure_81.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
    UnderlyingUnitOfMeasureQty_81.setString("9513978");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_81);
    UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasureQty_81.getString());
    all_values.push_back(UnderlyingInstrument_81);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_160("STRING_336735278");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_160);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltID_160.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_160("STRING_78747491");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_160);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltIDSource_160.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_161("STRING_462567859");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltID_161.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_161("STRING_605083412");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_161);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_161.insert(UnderlyingSecurityAltIDSource_161.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_162("STRING_231708119");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltID_162.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_162("STRING_504631984");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_162);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltIDSource_162.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
      FIX::UnderlyingStipType UnderlyingStipType_153("STRING_690058298");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipType_153.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_153("STRING_1668511569");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipValue_153.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      FIX::UnderlyingStipType UnderlyingStipType_154("STRING_341911262");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipType_154.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_154("STRING_55680779");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipValue_154.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      FIX::UnderlyingStipType UnderlyingStipType_155("STRING_700872934");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipType_155.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_155("STRING_1504503643");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipValue_155.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_163("STRING_877058923");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyID_163.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_163('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyIDSource_163.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_163(1504237010);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_163);
      UndlyInstrumentParties_NoUndlyInstrumentParties_163.insert(UnderlyingInstrumentPartyRole_163.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_314("STRING_435128850");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubID_314.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_314(175415740);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubIDType_314.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_315("STRING_790493481");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubID_315.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_315(1777349233);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubIDType_315.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_316("STRING_1245441874");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubID_316.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_316(744013541);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_316);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubIDType_316.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
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
