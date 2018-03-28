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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> PositionMaintenanceRequest_0;
  FIX::Account Account_25("STRING_1632887268");
  msg.set(Account_25);
  PositionMaintenanceRequest_0.insert(Account_25.getString());
  FIX::AccountType AccountType_22(4);
  msg.set(AccountType_22);
  PositionMaintenanceRequest_0.insert(AccountType_22.getString());
  FIX::AcctIDSource AcctIDSource_18(4);
  msg.set(AcctIDSource_18);
  PositionMaintenanceRequest_0.insert(AcctIDSource_18.getString());
  FIX::AdjustmentType AdjustmentType_1(2);
  msg.set(AdjustmentType_1);
  PositionMaintenanceRequest_0.insert(AdjustmentType_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_16("LOCALMKTDATE_417012432");
  msg.set(ClearingBusinessDate_16);
  PositionMaintenanceRequest_0.insert(ClearingBusinessDate_16.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_1(true);
  msg.set(ContraryInstructionIndicator_1);
  PositionMaintenanceRequest_0.insert(ContraryInstructionIndicator_1.getString());
  FIX::Currency Currency_48("CAN");
  msg.set(Currency_48);
  PositionMaintenanceRequest_0.insert(Currency_48.getString());
  FIX::EncodedText EncodedText_66("DATA_1243618360");
  msg.set(EncodedText_66);
  PositionMaintenanceRequest_0.insert(EncodedText_66.getString());
  FIX::EncodedTextLen EncodedTextLen_66(1251796118);
  msg.set(EncodedTextLen_66);
  PositionMaintenanceRequest_0.insert(EncodedTextLen_66.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_1("STRING_2120143786");
  msg.set(OrigPosReqRefID_1);
  PositionMaintenanceRequest_0.insert(OrigPosReqRefID_1.getString());
  FIX::PosMaintAction PosMaintAction_1(2);
  msg.set(PosMaintAction_1);
  PositionMaintenanceRequest_0.insert(PosMaintAction_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_2("STRING_571740808");
  msg.set(PosMaintRptRefID_2);
  PositionMaintenanceRequest_0.insert(PosMaintRptRefID_2.getString());
  FIX::PosReqID PosReqID_2("STRING_574573584");
  msg.set(PosReqID_2);
  PositionMaintenanceRequest_0.insert(PosReqID_2.getString());
  FIX::PosTransType PosTransType_1(6);
  msg.set(PosTransType_1);
  PositionMaintenanceRequest_0.insert(PosTransType_1.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_1(true);
  msg.set(PriorSpreadIndicator_1);
  PositionMaintenanceRequest_0.insert(PriorSpreadIndicator_1.getString());
  FIX::SettlCurrency SettlCurrency_20("GBP");
  msg.set(SettlCurrency_20);
  PositionMaintenanceRequest_0.insert(SettlCurrency_20.getString());
  FIX::SettlSessID SettlSessID_8("STRING_ETH");
  msg.set(SettlSessID_8);
  PositionMaintenanceRequest_0.insert(SettlSessID_8.getString());
  FIX::SettlSessSubID SettlSessSubID_7("STRING_982142884");
  msg.set(SettlSessSubID_7);
  PositionMaintenanceRequest_0.insert(SettlSessSubID_7.getString());
  FIX::Text Text_66("STRING_1092914853");
  msg.set(Text_66);
  PositionMaintenanceRequest_0.insert(Text_66.getString());
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("9368225");
  msg.set(ThresholdAmount_2);
  PositionMaintenanceRequest_0.insert(ThresholdAmount_2.getString());
  FIX::TransactTime TransactTime_51(FIX::UTCTIMESTAMP(20, 0, 29, 18, 4, 2009));
  msg.set(TransactTime_51);
  PositionMaintenanceRequest_0.insert(TransactTime_51.getString());
  all_values.push_back(PositionMaintenanceRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_92;
    FIX::EncodedLegIssuer EncodedLegIssuer_92("DATA_1054668061");
    noLegs_0_0.set(EncodedLegIssuer_92);
    InstrumentLeg_92.insert(EncodedLegIssuer_92.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_92(1180432093);
    noLegs_0_0.set(EncodedLegIssuerLen_92);
    InstrumentLeg_92.insert(EncodedLegIssuerLen_92.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_92("DATA_1302641302");
    noLegs_0_0.set(EncodedLegSecurityDesc_92);
    InstrumentLeg_92.insert(EncodedLegSecurityDesc_92.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_92(1945514320);
    noLegs_0_0.set(EncodedLegSecurityDescLen_92);
    InstrumentLeg_92.insert(EncodedLegSecurityDescLen_92.getString());
    FIX::LegCFICode LegCFICode_92("STRING_2102905987");
    noLegs_0_0.set(LegCFICode_92);
    InstrumentLeg_92.insert(LegCFICode_92.getString());
    FIX::LegContractMultiplier LegContractMultiplier_92;
    LegContractMultiplier_92.setString("17196537");
    noLegs_0_0.set(LegContractMultiplier_92);
    InstrumentLeg_92.insert(LegContractMultiplier_92.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_92(1338966381);
    noLegs_0_0.set(LegContractMultiplierUnit_92);
    InstrumentLeg_92.insert(LegContractMultiplierUnit_92.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_92("MONTHYEAR_1875249872");
    noLegs_0_0.set(LegContractSettlMonth_92);
    InstrumentLeg_92.insert(LegContractSettlMonth_92.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_92("COUNTRY_253373833");
    noLegs_0_0.set(LegCountryOfIssue_92);
    InstrumentLeg_92.insert(LegCountryOfIssue_92.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_92("LOCALMKTDATE_435101093");
    noLegs_0_0.set(LegCouponPaymentDate_92);
    InstrumentLeg_92.insert(LegCouponPaymentDate_92.getString());
    FIX::LegCouponRate LegCouponRate_92;
    LegCouponRate_92.setString("23.420000");
    noLegs_0_0.set(LegCouponRate_92);
    InstrumentLeg_92.insert(LegCouponRate_92.getString());
    FIX::LegCreditRating LegCreditRating_92("STRING_226033971");
    noLegs_0_0.set(LegCreditRating_92);
    InstrumentLeg_92.insert(LegCreditRating_92.getString());
    FIX::LegCurrency LegCurrency_92("USD");
    noLegs_0_0.set(LegCurrency_92);
    InstrumentLeg_92.insert(LegCurrency_92.getString());
    FIX::LegDatedDate LegDatedDate_92("LOCALMKTDATE_800607555");
    noLegs_0_0.set(LegDatedDate_92);
    InstrumentLeg_92.insert(LegDatedDate_92.getString());
    FIX::LegExerciseStyle LegExerciseStyle_92(665242135);
    noLegs_0_0.set(LegExerciseStyle_92);
    InstrumentLeg_92.insert(LegExerciseStyle_92.getString());
    FIX::LegFactor LegFactor_92;
    LegFactor_92.setString("12854638");
    noLegs_0_0.set(LegFactor_92);
    InstrumentLeg_92.insert(LegFactor_92.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_92(73234454);
    noLegs_0_0.set(LegFlowScheduleType_92);
    InstrumentLeg_92.insert(LegFlowScheduleType_92.getString());
    FIX::LegInstrRegistry LegInstrRegistry_92("STRING_1302245529");
    noLegs_0_0.set(LegInstrRegistry_92);
    InstrumentLeg_92.insert(LegInstrRegistry_92.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_92("LOCALMKTDATE_874154553");
    noLegs_0_0.set(LegInterestAccrualDate_92);
    InstrumentLeg_92.insert(LegInterestAccrualDate_92.getString());
    FIX::LegIssueDate LegIssueDate_92("LOCALMKTDATE_1055377338");
    noLegs_0_0.set(LegIssueDate_92);
    InstrumentLeg_92.insert(LegIssueDate_92.getString());
    FIX::LegIssuer LegIssuer_92("STRING_247676735");
    noLegs_0_0.set(LegIssuer_92);
    InstrumentLeg_92.insert(LegIssuer_92.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_92("STRING_1810977149");
    noLegs_0_0.set(LegLocaleOfIssue_92);
    InstrumentLeg_92.insert(LegLocaleOfIssue_92.getString());
    FIX::LegMaturityDate LegMaturityDate_92("LOCALMKTDATE_1409360316");
    noLegs_0_0.set(LegMaturityDate_92);
    InstrumentLeg_92.insert(LegMaturityDate_92.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_92("MONTHYEAR_733599259");
    noLegs_0_0.set(LegMaturityMonthYear_92);
    InstrumentLeg_92.insert(LegMaturityMonthYear_92.getString());
    FIX::LegMaturityTime LegMaturityTime_92("TZTIMEONLY_2008221209");
    noLegs_0_0.set(LegMaturityTime_92);
    InstrumentLeg_92.insert(LegMaturityTime_92.getString());
    FIX::LegOptAttribute LegOptAttribute_92('1');
    noLegs_0_0.set(LegOptAttribute_92);
    InstrumentLeg_92.insert(LegOptAttribute_92.getString());
    FIX::LegOptionRatio LegOptionRatio_92;
    LegOptionRatio_92.setString("13343287");
    noLegs_0_0.set(LegOptionRatio_92);
    InstrumentLeg_92.insert(LegOptionRatio_92.getString());
    FIX::LegPool LegPool_92("STRING_1309044660");
    noLegs_0_0.set(LegPool_92);
    InstrumentLeg_92.insert(LegPool_92.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_92("STRING_564299542");
    noLegs_0_0.set(LegPriceUnitOfMeasure_92);
    InstrumentLeg_92.insert(LegPriceUnitOfMeasure_92.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
    LegPriceUnitOfMeasureQty_92.setString("3003960");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_92);
    InstrumentLeg_92.insert(LegPriceUnitOfMeasureQty_92.getString());
    FIX::LegProduct LegProduct_92(216229074);
    noLegs_0_0.set(LegProduct_92);
    InstrumentLeg_92.insert(LegProduct_92.getString());
    FIX::LegPutOrCall LegPutOrCall_92(1744731635);
    noLegs_0_0.set(LegPutOrCall_92);
    InstrumentLeg_92.insert(LegPutOrCall_92.getString());
    FIX::LegRatioQty LegRatioQty_92;
    LegRatioQty_92.setString("16030373");
    noLegs_0_0.set(LegRatioQty_92);
    InstrumentLeg_92.insert(LegRatioQty_92.getString());
    FIX::LegRedemptionDate LegRedemptionDate_92("LOCALMKTDATE_14259746");
    noLegs_0_0.set(LegRedemptionDate_92);
    InstrumentLeg_92.insert(LegRedemptionDate_92.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_92("STRING_1700153975");
    noLegs_0_0.set(LegRepoCollateralSecurityType_92);
    InstrumentLeg_92.insert(LegRepoCollateralSecurityType_92.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_92;
    LegRepurchaseRate_92.setString("74.470000");
    noLegs_0_0.set(LegRepurchaseRate_92);
    InstrumentLeg_92.insert(LegRepurchaseRate_92.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_92(1353226127);
    noLegs_0_0.set(LegRepurchaseTerm_92);
    InstrumentLeg_92.insert(LegRepurchaseTerm_92.getString());
    FIX::LegSecurityDesc LegSecurityDesc_92("STRING_1427920199");
    noLegs_0_0.set(LegSecurityDesc_92);
    InstrumentLeg_92.insert(LegSecurityDesc_92.getString());
    FIX::LegSecurityExchange LegSecurityExchange_92("EXCHANGE_1428581280");
    noLegs_0_0.set(LegSecurityExchange_92);
    InstrumentLeg_92.insert(LegSecurityExchange_92.getString());
    FIX::LegSecurityID LegSecurityID_92("STRING_1788327221");
    noLegs_0_0.set(LegSecurityID_92);
    InstrumentLeg_92.insert(LegSecurityID_92.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_92("STRING_259998893");
    noLegs_0_0.set(LegSecurityIDSource_92);
    InstrumentLeg_92.insert(LegSecurityIDSource_92.getString());
    FIX::LegSecuritySubType LegSecuritySubType_92("STRING_1654615252");
    noLegs_0_0.set(LegSecuritySubType_92);
    InstrumentLeg_92.insert(LegSecuritySubType_92.getString());
    FIX::LegSecurityType LegSecurityType_92("STRING_1574791675");
    noLegs_0_0.set(LegSecurityType_92);
    InstrumentLeg_92.insert(LegSecurityType_92.getString());
    FIX::LegSide LegSide_92('1');
    noLegs_0_0.set(LegSide_92);
    InstrumentLeg_92.insert(LegSide_92.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_92("STRING_307739159");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_92);
    InstrumentLeg_92.insert(LegStateOrProvinceOfIssue_92.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_92("USD");
    noLegs_0_0.set(LegStrikeCurrency_92);
    InstrumentLeg_92.insert(LegStrikeCurrency_92.getString());
    FIX::LegStrikePrice LegStrikePrice_92;
    LegStrikePrice_92.setString("3809736");
    noLegs_0_0.set(LegStrikePrice_92);
    InstrumentLeg_92.insert(LegStrikePrice_92.getString());
    FIX::LegSymbol LegSymbol_92("STRING_1394795692");
    noLegs_0_0.set(LegSymbol_92);
    InstrumentLeg_92.insert(LegSymbol_92.getString());
    FIX::LegSymbolSfx LegSymbolSfx_92("STRING_1823436771");
    noLegs_0_0.set(LegSymbolSfx_92);
    InstrumentLeg_92.insert(LegSymbolSfx_92.getString());
    FIX::LegTimeUnit LegTimeUnit_92("STRING_1436350952");
    noLegs_0_0.set(LegTimeUnit_92);
    InstrumentLeg_92.insert(LegTimeUnit_92.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_92("STRING_1642472427");
    noLegs_0_0.set(LegUnitOfMeasure_92);
    InstrumentLeg_92.insert(LegUnitOfMeasure_92.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
    LegUnitOfMeasureQty_92.setString("14869302");
    noLegs_0_0.set(LegUnitOfMeasureQty_92);
    InstrumentLeg_92.insert(LegUnitOfMeasureQty_92.getString());
    all_values.push_back(InstrumentLeg_92);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
      FIX::LegSecurityAltID LegSecurityAltID_179("STRING_228588039");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltID_179.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_179("STRING_1347667833");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltIDSource_179.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_93;
    FIX::EncodedLegIssuer EncodedLegIssuer_93("DATA_1714982337");
    noLegs_0_1.set(EncodedLegIssuer_93);
    InstrumentLeg_93.insert(EncodedLegIssuer_93.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_93(1562916789);
    noLegs_0_1.set(EncodedLegIssuerLen_93);
    InstrumentLeg_93.insert(EncodedLegIssuerLen_93.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_93("DATA_509228845");
    noLegs_0_1.set(EncodedLegSecurityDesc_93);
    InstrumentLeg_93.insert(EncodedLegSecurityDesc_93.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_93(131798231);
    noLegs_0_1.set(EncodedLegSecurityDescLen_93);
    InstrumentLeg_93.insert(EncodedLegSecurityDescLen_93.getString());
    FIX::LegCFICode LegCFICode_93("STRING_1863312848");
    noLegs_0_1.set(LegCFICode_93);
    InstrumentLeg_93.insert(LegCFICode_93.getString());
    FIX::LegContractMultiplier LegContractMultiplier_93;
    LegContractMultiplier_93.setString("7254579");
    noLegs_0_1.set(LegContractMultiplier_93);
    InstrumentLeg_93.insert(LegContractMultiplier_93.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_93(1876529867);
    noLegs_0_1.set(LegContractMultiplierUnit_93);
    InstrumentLeg_93.insert(LegContractMultiplierUnit_93.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_93("MONTHYEAR_1318866561");
    noLegs_0_1.set(LegContractSettlMonth_93);
    InstrumentLeg_93.insert(LegContractSettlMonth_93.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_93("COUNTRY_739717666");
    noLegs_0_1.set(LegCountryOfIssue_93);
    InstrumentLeg_93.insert(LegCountryOfIssue_93.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_93("LOCALMKTDATE_1429200194");
    noLegs_0_1.set(LegCouponPaymentDate_93);
    InstrumentLeg_93.insert(LegCouponPaymentDate_93.getString());
    FIX::LegCouponRate LegCouponRate_93;
    LegCouponRate_93.setString("3.600000");
    noLegs_0_1.set(LegCouponRate_93);
    InstrumentLeg_93.insert(LegCouponRate_93.getString());
    FIX::LegCreditRating LegCreditRating_93("STRING_2092943793");
    noLegs_0_1.set(LegCreditRating_93);
    InstrumentLeg_93.insert(LegCreditRating_93.getString());
    FIX::LegCurrency LegCurrency_93("USD");
    noLegs_0_1.set(LegCurrency_93);
    InstrumentLeg_93.insert(LegCurrency_93.getString());
    FIX::LegDatedDate LegDatedDate_93("LOCALMKTDATE_1733787366");
    noLegs_0_1.set(LegDatedDate_93);
    InstrumentLeg_93.insert(LegDatedDate_93.getString());
    FIX::LegExerciseStyle LegExerciseStyle_93(969635638);
    noLegs_0_1.set(LegExerciseStyle_93);
    InstrumentLeg_93.insert(LegExerciseStyle_93.getString());
    FIX::LegFactor LegFactor_93;
    LegFactor_93.setString("12823032");
    noLegs_0_1.set(LegFactor_93);
    InstrumentLeg_93.insert(LegFactor_93.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_93(1161095394);
    noLegs_0_1.set(LegFlowScheduleType_93);
    InstrumentLeg_93.insert(LegFlowScheduleType_93.getString());
    FIX::LegInstrRegistry LegInstrRegistry_93("STRING_633454033");
    noLegs_0_1.set(LegInstrRegistry_93);
    InstrumentLeg_93.insert(LegInstrRegistry_93.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_93("LOCALMKTDATE_1590042404");
    noLegs_0_1.set(LegInterestAccrualDate_93);
    InstrumentLeg_93.insert(LegInterestAccrualDate_93.getString());
    FIX::LegIssueDate LegIssueDate_93("LOCALMKTDATE_1253645557");
    noLegs_0_1.set(LegIssueDate_93);
    InstrumentLeg_93.insert(LegIssueDate_93.getString());
    FIX::LegIssuer LegIssuer_93("STRING_1582736251");
    noLegs_0_1.set(LegIssuer_93);
    InstrumentLeg_93.insert(LegIssuer_93.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_93("STRING_1971016018");
    noLegs_0_1.set(LegLocaleOfIssue_93);
    InstrumentLeg_93.insert(LegLocaleOfIssue_93.getString());
    FIX::LegMaturityDate LegMaturityDate_93("LOCALMKTDATE_500957601");
    noLegs_0_1.set(LegMaturityDate_93);
    InstrumentLeg_93.insert(LegMaturityDate_93.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_93("MONTHYEAR_1258689374");
    noLegs_0_1.set(LegMaturityMonthYear_93);
    InstrumentLeg_93.insert(LegMaturityMonthYear_93.getString());
    FIX::LegMaturityTime LegMaturityTime_93("TZTIMEONLY_1259883322");
    noLegs_0_1.set(LegMaturityTime_93);
    InstrumentLeg_93.insert(LegMaturityTime_93.getString());
    FIX::LegOptAttribute LegOptAttribute_93('2');
    noLegs_0_1.set(LegOptAttribute_93);
    InstrumentLeg_93.insert(LegOptAttribute_93.getString());
    FIX::LegOptionRatio LegOptionRatio_93;
    LegOptionRatio_93.setString("5981359");
    noLegs_0_1.set(LegOptionRatio_93);
    InstrumentLeg_93.insert(LegOptionRatio_93.getString());
    FIX::LegPool LegPool_93("STRING_1958110943");
    noLegs_0_1.set(LegPool_93);
    InstrumentLeg_93.insert(LegPool_93.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_93("STRING_224534420");
    noLegs_0_1.set(LegPriceUnitOfMeasure_93);
    InstrumentLeg_93.insert(LegPriceUnitOfMeasure_93.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
    LegPriceUnitOfMeasureQty_93.setString("19458038");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_93);
    InstrumentLeg_93.insert(LegPriceUnitOfMeasureQty_93.getString());
    FIX::LegProduct LegProduct_93(1525609632);
    noLegs_0_1.set(LegProduct_93);
    InstrumentLeg_93.insert(LegProduct_93.getString());
    FIX::LegPutOrCall LegPutOrCall_93(1787451209);
    noLegs_0_1.set(LegPutOrCall_93);
    InstrumentLeg_93.insert(LegPutOrCall_93.getString());
    FIX::LegRatioQty LegRatioQty_93;
    LegRatioQty_93.setString("3075490");
    noLegs_0_1.set(LegRatioQty_93);
    InstrumentLeg_93.insert(LegRatioQty_93.getString());
    FIX::LegRedemptionDate LegRedemptionDate_93("LOCALMKTDATE_1657407864");
    noLegs_0_1.set(LegRedemptionDate_93);
    InstrumentLeg_93.insert(LegRedemptionDate_93.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_93("STRING_1503280409");
    noLegs_0_1.set(LegRepoCollateralSecurityType_93);
    InstrumentLeg_93.insert(LegRepoCollateralSecurityType_93.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_93;
    LegRepurchaseRate_93.setString("69.480000");
    noLegs_0_1.set(LegRepurchaseRate_93);
    InstrumentLeg_93.insert(LegRepurchaseRate_93.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_93(1386454083);
    noLegs_0_1.set(LegRepurchaseTerm_93);
    InstrumentLeg_93.insert(LegRepurchaseTerm_93.getString());
    FIX::LegSecurityDesc LegSecurityDesc_93("STRING_674663322");
    noLegs_0_1.set(LegSecurityDesc_93);
    InstrumentLeg_93.insert(LegSecurityDesc_93.getString());
    FIX::LegSecurityExchange LegSecurityExchange_93("EXCHANGE_1772724614");
    noLegs_0_1.set(LegSecurityExchange_93);
    InstrumentLeg_93.insert(LegSecurityExchange_93.getString());
    FIX::LegSecurityID LegSecurityID_93("STRING_668170629");
    noLegs_0_1.set(LegSecurityID_93);
    InstrumentLeg_93.insert(LegSecurityID_93.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_93("STRING_1021253682");
    noLegs_0_1.set(LegSecurityIDSource_93);
    InstrumentLeg_93.insert(LegSecurityIDSource_93.getString());
    FIX::LegSecuritySubType LegSecuritySubType_93("STRING_1718184760");
    noLegs_0_1.set(LegSecuritySubType_93);
    InstrumentLeg_93.insert(LegSecuritySubType_93.getString());
    FIX::LegSecurityType LegSecurityType_93("STRING_1377807374");
    noLegs_0_1.set(LegSecurityType_93);
    InstrumentLeg_93.insert(LegSecurityType_93.getString());
    FIX::LegSide LegSide_93('6');
    noLegs_0_1.set(LegSide_93);
    InstrumentLeg_93.insert(LegSide_93.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_93("STRING_1304488478");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_93);
    InstrumentLeg_93.insert(LegStateOrProvinceOfIssue_93.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_93("EUR");
    noLegs_0_1.set(LegStrikeCurrency_93);
    InstrumentLeg_93.insert(LegStrikeCurrency_93.getString());
    FIX::LegStrikePrice LegStrikePrice_93;
    LegStrikePrice_93.setString("3181002");
    noLegs_0_1.set(LegStrikePrice_93);
    InstrumentLeg_93.insert(LegStrikePrice_93.getString());
    FIX::LegSymbol LegSymbol_93("STRING_833413397");
    noLegs_0_1.set(LegSymbol_93);
    InstrumentLeg_93.insert(LegSymbol_93.getString());
    FIX::LegSymbolSfx LegSymbolSfx_93("STRING_1373803675");
    noLegs_0_1.set(LegSymbolSfx_93);
    InstrumentLeg_93.insert(LegSymbolSfx_93.getString());
    FIX::LegTimeUnit LegTimeUnit_93("STRING_1571745781");
    noLegs_0_1.set(LegTimeUnit_93);
    InstrumentLeg_93.insert(LegTimeUnit_93.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_93("STRING_268666001");
    noLegs_0_1.set(LegUnitOfMeasure_93);
    InstrumentLeg_93.insert(LegUnitOfMeasure_93.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
    LegUnitOfMeasureQty_93.setString("11973360");
    noLegs_0_1.set(LegUnitOfMeasureQty_93);
    InstrumentLeg_93.insert(LegUnitOfMeasureQty_93.getString());
    all_values.push_back(InstrumentLeg_93);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
      FIX::LegSecurityAltID LegSecurityAltID_180("STRING_1527355375");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltID_180.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_180("STRING_309735719");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltIDSource_180.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
      FIX::LegSecurityAltID LegSecurityAltID_181("STRING_2068649764");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltID_181.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_181("STRING_2125491374");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltIDSource_181.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
      FIX::LegSecurityAltID LegSecurityAltID_182("STRING_120363014");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltID_182.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_182("STRING_145700536");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltIDSource_182.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_63;
  FIX::AttachmentPoint AttachmentPoint_63;
  AttachmentPoint_63.setString("15.570000");
  msg.set(AttachmentPoint_63);
  Instrument_63.insert(AttachmentPoint_63.getString());
  FIX::CFICode CFICode_63("STRING_1645972647");
  msg.set(CFICode_63);
  Instrument_63.insert(CFICode_63.getString());
  FIX::CPProgram CPProgram_63(1);
  msg.set(CPProgram_63);
  Instrument_63.insert(CPProgram_63.getString());
  FIX::CPRegType CPRegType_63("STRING_83876938");
  msg.set(CPRegType_63);
  Instrument_63.insert(CPRegType_63.getString());
  FIX::CapPrice CapPrice_63;
  CapPrice_63.setString("11558968");
  msg.set(CapPrice_63);
  Instrument_63.insert(CapPrice_63.getString());
  FIX::ContractMultiplier ContractMultiplier_63;
  ContractMultiplier_63.setString("12889485");
  msg.set(ContractMultiplier_63);
  Instrument_63.insert(ContractMultiplier_63.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_63(0);
  msg.set(ContractMultiplierUnit_63);
  Instrument_63.insert(ContractMultiplierUnit_63.getString());
  FIX::ContractSettlMonth ContractSettlMonth_63("MONTHYEAR_394867298");
  msg.set(ContractSettlMonth_63);
  Instrument_63.insert(ContractSettlMonth_63.getString());
  FIX::CountryOfIssue CountryOfIssue_63("COUNTRY_1963611828");
  msg.set(CountryOfIssue_63);
  Instrument_63.insert(CountryOfIssue_63.getString());
  FIX::CouponPaymentDate CouponPaymentDate_63("LOCALMKTDATE_742124853");
  msg.set(CouponPaymentDate_63);
  Instrument_63.insert(CouponPaymentDate_63.getString());
  FIX::CouponRate CouponRate_63;
  CouponRate_63.setString("79.270000");
  msg.set(CouponRate_63);
  Instrument_63.insert(CouponRate_63.getString());
  FIX::CreditRating CreditRating_63("STRING_837381862");
  msg.set(CreditRating_63);
  Instrument_63.insert(CreditRating_63.getString());
  FIX::DatedDate DatedDate_63("LOCALMKTDATE_312825965");
  msg.set(DatedDate_63);
  Instrument_63.insert(DatedDate_63.getString());
  FIX::DetachmentPoint DetachmentPoint_63;
  DetachmentPoint_63.setString("16.530000");
  msg.set(DetachmentPoint_63);
  Instrument_63.insert(DetachmentPoint_63.getString());
  FIX::EncodedIssuer EncodedIssuer_63("DATA_1486323536");
  msg.set(EncodedIssuer_63);
  Instrument_63.insert(EncodedIssuer_63.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_63(1617314444);
  msg.set(EncodedIssuerLen_63);
  Instrument_63.insert(EncodedIssuerLen_63.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_63("DATA_493321017");
  msg.set(EncodedSecurityDesc_63);
  Instrument_63.insert(EncodedSecurityDesc_63.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_63(1270084807);
  msg.set(EncodedSecurityDescLen_63);
  Instrument_63.insert(EncodedSecurityDescLen_63.getString());
  FIX::ExerciseStyle ExerciseStyle_63(2);
  msg.set(ExerciseStyle_63);
  Instrument_63.insert(ExerciseStyle_63.getString());
  FIX::Factor Factor_63;
  Factor_63.setString("13267344");
  msg.set(Factor_63);
  Instrument_63.insert(Factor_63.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_63(true);
  msg.set(FlexProductEligibilityIndicator_63);
  Instrument_63.insert(FlexProductEligibilityIndicator_63.getString());
  FIX::FlexibleIndicator FlexibleIndicator_63(true);
  msg.set(FlexibleIndicator_63);
  Instrument_63.insert(FlexibleIndicator_63.getString());
  FIX::FloorPrice FloorPrice_63;
  FloorPrice_63.setString("15954004");
  msg.set(FloorPrice_63);
  Instrument_63.insert(FloorPrice_63.getString());
  FIX::FlowScheduleType FlowScheduleType_63(4);
  msg.set(FlowScheduleType_63);
  Instrument_63.insert(FlowScheduleType_63.getString());
  FIX::InstrRegistry InstrRegistry_63("STRING_1284896537");
  msg.set(InstrRegistry_63);
  Instrument_63.insert(InstrRegistry_63.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_63('9');
  msg.set(InstrmtAssignmentMethod_63);
  Instrument_63.insert(InstrmtAssignmentMethod_63.getString());
  FIX::InterestAccrualDate InterestAccrualDate_63("LOCALMKTDATE_2003476599");
  msg.set(InterestAccrualDate_63);
  Instrument_63.insert(InterestAccrualDate_63.getString());
  FIX::IssueDate IssueDate_63("LOCALMKTDATE_1206062653");
  msg.set(IssueDate_63);
  Instrument_63.insert(IssueDate_63.getString());
  FIX::Issuer Issuer_63("STRING_953279869");
  msg.set(Issuer_63);
  Instrument_63.insert(Issuer_63.getString());
  FIX::ListMethod ListMethod_63(1);
  msg.set(ListMethod_63);
  Instrument_63.insert(ListMethod_63.getString());
  FIX::LocaleOfIssue LocaleOfIssue_63("STRING_1351763189");
  msg.set(LocaleOfIssue_63);
  Instrument_63.insert(LocaleOfIssue_63.getString());
  FIX::MaturityDate MaturityDate_63("LOCALMKTDATE_729607778");
  msg.set(MaturityDate_63);
  Instrument_63.insert(MaturityDate_63.getString());
  FIX::MaturityMonthYear MaturityMonthYear_63("MONTHYEAR_1622328612");
  msg.set(MaturityMonthYear_63);
  Instrument_63.insert(MaturityMonthYear_63.getString());
  FIX::MaturityTime MaturityTime_63("TZTIMEONLY_1137431286");
  msg.set(MaturityTime_63);
  Instrument_63.insert(MaturityTime_63.getString());
  FIX::MinPriceIncrement MinPriceIncrement_63;
  MinPriceIncrement_63.setString("8134847");
  msg.set(MinPriceIncrement_63);
  Instrument_63.insert(MinPriceIncrement_63.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
  MinPriceIncrementAmount_63.setString("6307418");
  msg.set(MinPriceIncrementAmount_63);
  Instrument_63.insert(MinPriceIncrementAmount_63.getString());
  FIX::NTPositionLimit NTPositionLimit_63(278896144);
  msg.set(NTPositionLimit_63);
  Instrument_63.insert(NTPositionLimit_63.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
  NotionalPercentageOutstanding_63.setString("86.040000");
  msg.set(NotionalPercentageOutstanding_63);
  Instrument_63.insert(NotionalPercentageOutstanding_63.getString());
  FIX::OptAttribute OptAttribute_63('1');
  msg.set(OptAttribute_63);
  Instrument_63.insert(OptAttribute_63.getString());
  FIX::OptPayoutAmount OptPayoutAmount_63;
  OptPayoutAmount_63.setString("950243");
  msg.set(OptPayoutAmount_63);
  Instrument_63.insert(OptPayoutAmount_63.getString());
  FIX::OptPayoutType OptPayoutType_63(3);
  msg.set(OptPayoutType_63);
  Instrument_63.insert(OptPayoutType_63.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
  OriginalNotionalPercentageOutstanding_63.setString("70.520000");
  msg.set(OriginalNotionalPercentageOutstanding_63);
  Instrument_63.insert(OriginalNotionalPercentageOutstanding_63.getString());
  FIX::Pool Pool_63("STRING_932406186");
  msg.set(Pool_63);
  Instrument_63.insert(Pool_63.getString());
  FIX::PositionLimit PositionLimit_63(837835775);
  msg.set(PositionLimit_63);
  Instrument_63.insert(PositionLimit_63.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_63("STRING_INX");
  msg.set(PriceQuoteMethod_63);
  Instrument_63.insert(PriceQuoteMethod_63.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_63("STRING_271246074");
  msg.set(PriceUnitOfMeasure_63);
  Instrument_63.insert(PriceUnitOfMeasure_63.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
  PriceUnitOfMeasureQty_63.setString("3076665");
  msg.set(PriceUnitOfMeasureQty_63);
  Instrument_63.insert(PriceUnitOfMeasureQty_63.getString());
  FIX::Product Product_65(8);
  msg.set(Product_65);
  Instrument_63.insert(Product_65.getString());
  FIX::ProductComplex ProductComplex_63("STRING_1541330882");
  msg.set(ProductComplex_63);
  Instrument_63.insert(ProductComplex_63.getString());
  FIX::PutOrCall PutOrCall_63(1);
  msg.set(PutOrCall_63);
  Instrument_63.insert(PutOrCall_63.getString());
  FIX::RedemptionDate RedemptionDate_63("LOCALMKTDATE_2054580489");
  msg.set(RedemptionDate_63);
  Instrument_63.insert(RedemptionDate_63.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_63("STRING_2037735716");
  msg.set(RepoCollateralSecurityType_63);
  Instrument_63.insert(RepoCollateralSecurityType_63.getString());
  FIX::RepurchaseRate RepurchaseRate_63;
  RepurchaseRate_63.setString("43.930000");
  msg.set(RepurchaseRate_63);
  Instrument_63.insert(RepurchaseRate_63.getString());
  FIX::RepurchaseTerm RepurchaseTerm_63(1502497256);
  msg.set(RepurchaseTerm_63);
  Instrument_63.insert(RepurchaseTerm_63.getString());
  FIX::RestructuringType RestructuringType_63("STRING_FR");
  msg.set(RestructuringType_63);
  Instrument_63.insert(RestructuringType_63.getString());
  FIX::SecurityDesc SecurityDesc_63("STRING_592687282");
  msg.set(SecurityDesc_63);
  Instrument_63.insert(SecurityDesc_63.getString());
  FIX::SecurityExchange SecurityExchange_63("EXCHANGE_330285751");
  msg.set(SecurityExchange_63);
  Instrument_63.insert(SecurityExchange_63.getString());
  FIX::SecurityGroup SecurityGroup_63("STRING_1439985899");
  msg.set(SecurityGroup_63);
  Instrument_63.insert(SecurityGroup_63.getString());
  FIX::SecurityID SecurityID_63("STRING_1798749935");
  msg.set(SecurityID_63);
  Instrument_63.insert(SecurityID_63.getString());
  FIX::SecurityIDSource SecurityIDSource_63("STRING_J");
  msg.set(SecurityIDSource_63);
  Instrument_63.insert(SecurityIDSource_63.getString());
  FIX::SecurityStatus SecurityStatus_63("STRING_1");
  msg.set(SecurityStatus_63);
  Instrument_63.insert(SecurityStatus_63.getString());
  FIX::SecuritySubType SecuritySubType_64("STRING_1003029476");
  msg.set(SecuritySubType_64);
  Instrument_63.insert(SecuritySubType_64.getString());
  FIX::SecurityType SecurityType_65("STRING_BOX");
  msg.set(SecurityType_65);
  Instrument_63.insert(SecurityType_65.getString());
  FIX::Seniority Seniority_63("STRING_SR");
  msg.set(Seniority_63);
  Instrument_63.insert(Seniority_63.getString());
  FIX::SettlMethod SettlMethod_63('C');
  msg.set(SettlMethod_63);
  Instrument_63.insert(SettlMethod_63.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_63("STRING_679174468");
  msg.set(SettleOnOpenFlag_63);
  Instrument_63.insert(SettleOnOpenFlag_63.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_63("STRING_1521928656");
  msg.set(StateOrProvinceOfIssue_63);
  Instrument_63.insert(StateOrProvinceOfIssue_63.getString());
  FIX::StrikeCurrency StrikeCurrency_63("USD");
  msg.set(StrikeCurrency_63);
  Instrument_63.insert(StrikeCurrency_63.getString());
  FIX::StrikeMultiplier StrikeMultiplier_63;
  StrikeMultiplier_63.setString("4000541");
  msg.set(StrikeMultiplier_63);
  Instrument_63.insert(StrikeMultiplier_63.getString());
  FIX::StrikePrice StrikePrice_63;
  StrikePrice_63.setString("3668975");
  msg.set(StrikePrice_63);
  Instrument_63.insert(StrikePrice_63.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_63(4);
  msg.set(StrikePriceBoundaryMethod_63);
  Instrument_63.insert(StrikePriceBoundaryMethod_63.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
  StrikePriceBoundaryPrecision_63.setString("75.380000");
  msg.set(StrikePriceBoundaryPrecision_63);
  Instrument_63.insert(StrikePriceBoundaryPrecision_63.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_63(1);
  msg.set(StrikePriceDeterminationMethod_63);
  Instrument_63.insert(StrikePriceDeterminationMethod_63.getString());
  FIX::StrikeValue StrikeValue_63;
  StrikeValue_63.setString("18249050");
  msg.set(StrikeValue_63);
  Instrument_63.insert(StrikeValue_63.getString());
  FIX::Symbol Symbol_63("STRING_575742596");
  msg.set(Symbol_63);
  Instrument_63.insert(Symbol_63.getString());
  FIX::SymbolSfx SymbolSfx_63("STRING_WI");
  msg.set(SymbolSfx_63);
  Instrument_63.insert(SymbolSfx_63.getString());
  FIX::TimeUnit TimeUnit_63("STRING_Mo");
  msg.set(TimeUnit_63);
  Instrument_63.insert(TimeUnit_63.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_63(3);
  msg.set(UnderlyingPriceDeterminationMethod_63);
  Instrument_63.insert(UnderlyingPriceDeterminationMethod_63.getString());
  FIX::UnitOfMeasure UnitOfMeasure_63("STRING_Gal");
  msg.set(UnitOfMeasure_63);
  Instrument_63.insert(UnitOfMeasure_63.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
  UnitOfMeasureQty_63.setString("806855");
  msg.set(UnitOfMeasureQty_63);
  Instrument_63.insert(UnitOfMeasureQty_63.getString());
  FIX::ValuationMethod ValuationMethod_63("STRING_FUT");
  msg.set(ValuationMethod_63);
  Instrument_63.insert(ValuationMethod_63.getString());
  all_values.push_back(Instrument_63);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_124;
    FIX::ComplexEventCondition ComplexEventCondition_124(1);
    noComplexEvents_0_0.set(ComplexEventCondition_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventCondition_124.getString());
    FIX::ComplexEventPrice ComplexEventPrice_124;
    ComplexEventPrice_124.setString("5656991");
    noComplexEvents_0_0.set(ComplexEventPrice_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPrice_124.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_124(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryMethod_124.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
    ComplexEventPriceBoundaryPrecision_124.setString("71.990000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryPrecision_124.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_124(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceTimeType_124.getString());
    FIX::ComplexEventType ComplexEventType_124(6);
    noComplexEvents_0_0.set(ComplexEventType_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexEventType_124.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
    ComplexOptPayoutAmount_124.setString("17799134");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_124);
    ComplexEvents_NoComplexEvents_124.insert(ComplexOptPayoutAmount_124.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_124);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_255;
      FIX::ComplexEventEndDate ComplexEventEndDate_255(FIX::UTCTIMESTAMP(11, 23, 10, 5, 8, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventEndDate_255.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_255(FIX::UTCTIMESTAMP(7, 32, 10, 20, 8, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_255);
      ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventStartDate_255.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_255);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
        FIX::ComplexEventEndTime ComplexEventEndTime_508(FIX::UTCTIMEONLY(10, 52, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventEndTime_508.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_508(FIX::UTCTIMEONLY(23, 53, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventStartTime_508.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_125;
    FIX::ComplexEventCondition ComplexEventCondition_125(1);
    noComplexEvents_0_1.set(ComplexEventCondition_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventCondition_125.getString());
    FIX::ComplexEventPrice ComplexEventPrice_125;
    ComplexEventPrice_125.setString("13676546");
    noComplexEvents_0_1.set(ComplexEventPrice_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPrice_125.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_125(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryMethod_125.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
    ComplexEventPriceBoundaryPrecision_125.setString("43.550000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryPrecision_125.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_125(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceTimeType_125.getString());
    FIX::ComplexEventType ComplexEventType_125(6);
    noComplexEvents_0_1.set(ComplexEventType_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexEventType_125.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
    ComplexOptPayoutAmount_125.setString("7713241");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_125);
    ComplexEvents_NoComplexEvents_125.insert(ComplexOptPayoutAmount_125.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_125);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_256;
      FIX::ComplexEventEndDate ComplexEventEndDate_256(FIX::UTCTIMESTAMP(12, 15, 5, 10, 11, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventEndDate_256.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_256(FIX::UTCTIMESTAMP(5, 8, 48, 6, 8, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_256);
      ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventStartDate_256.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_256);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
        FIX::ComplexEventEndTime ComplexEventEndTime_509(FIX::UTCTIMEONLY(9, 55, 52));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventEndTime_509.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_509(FIX::UTCTIMEONLY(11, 45, 21));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventStartTime_509.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
        FIX::ComplexEventEndTime ComplexEventEndTime_510(FIX::UTCTIMEONLY(22, 27, 14));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_510);
        ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventEndTime_510.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_510(FIX::UTCTIMEONLY(5, 27, 47));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_510);
        ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventStartTime_510.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
        FIX::ComplexEventEndTime ComplexEventEndTime_511(FIX::UTCTIMEONLY(8, 2, 18));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_511);
        ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventEndTime_511.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_511(FIX::UTCTIMEONLY(1, 2, 56));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_511);
        ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventStartTime_511.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_128;
    FIX::EventDate EventDate_128("LOCALMKTDATE_369346023");
    noEvents_0_0.set(EventDate_128);
    EvntGrp_NoEvents_128.insert(EventDate_128.getString());
    FIX::EventPx EventPx_128;
    EventPx_128.setString("10226480");
    noEvents_0_0.set(EventPx_128);
    EvntGrp_NoEvents_128.insert(EventPx_128.getString());
    FIX::EventText EventText_128("STRING_664685868");
    noEvents_0_0.set(EventText_128);
    EvntGrp_NoEvents_128.insert(EventText_128.getString());
    FIX::EventTime EventTime_128(FIX::UTCTIMESTAMP(20, 59, 17, 1, 12, 2009));
    noEvents_0_0.set(EventTime_128);
    EvntGrp_NoEvents_128.insert(EventTime_128.getString());
    FIX::EventType EventType_128(19);
    noEvents_0_0.set(EventType_128);
    EvntGrp_NoEvents_128.insert(EventType_128.getString());
    all_values.push_back(EvntGrp_NoEvents_128);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_129;
    FIX::EventDate EventDate_129("LOCALMKTDATE_510567010");
    noEvents_0_1.set(EventDate_129);
    EvntGrp_NoEvents_129.insert(EventDate_129.getString());
    FIX::EventPx EventPx_129;
    EventPx_129.setString("4661506");
    noEvents_0_1.set(EventPx_129);
    EvntGrp_NoEvents_129.insert(EventPx_129.getString());
    FIX::EventText EventText_129("STRING_835270639");
    noEvents_0_1.set(EventText_129);
    EvntGrp_NoEvents_129.insert(EventText_129.getString());
    FIX::EventTime EventTime_129(FIX::UTCTIMESTAMP(8, 46, 3, 18, 8, 2012));
    noEvents_0_1.set(EventTime_129);
    EvntGrp_NoEvents_129.insert(EventTime_129.getString());
    FIX::EventType EventType_129(2);
    noEvents_0_1.set(EventType_129);
    EvntGrp_NoEvents_129.insert(EventType_129.getString());
    all_values.push_back(EvntGrp_NoEvents_129);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_131;
    FIX::InstrumentPartyID InstrumentPartyID_131("STRING_1807509518");
    noInstrumentParties_0_0.set(InstrumentPartyID_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyID_131.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_131('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyIDSource_131.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_131(1085243907);
    noInstrumentParties_0_0.set(InstrumentPartyRole_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyRole_131.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_131);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
      FIX::InstrumentPartySubID InstrumentPartySubID_276("STRING_1915378997");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_276);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubID_276.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_276(538567041);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_276);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubIDType_276.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
      FIX::InstrumentPartySubID InstrumentPartySubID_277("STRING_1101736844");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_277);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubID_277.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_277(1039587907);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_277);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubIDType_277.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
      FIX::InstrumentPartySubID InstrumentPartySubID_278("STRING_907913064");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_278);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubID_278.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_278(2124384921);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_278);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubIDType_278.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_132;
    FIX::InstrumentPartyID InstrumentPartyID_132("STRING_1704273776");
    noInstrumentParties_0_1.set(InstrumentPartyID_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyID_132.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_132('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyIDSource_132.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_132(1326346341);
    noInstrumentParties_0_1.set(InstrumentPartyRole_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyRole_132.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_132);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279;
      FIX::InstrumentPartySubID InstrumentPartySubID_279("STRING_113138768");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_279);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubID_279.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_279(697198338);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_279);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubIDType_279.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280;
      FIX::InstrumentPartySubID InstrumentPartySubID_280("STRING_1569186754");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubID_280.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_280(1122937157);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_280);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubIDType_280.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281;
      FIX::InstrumentPartySubID InstrumentPartySubID_281("STRING_1043431576");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubID_281.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_281(2079753764);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_281);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubIDType_281.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_133;
    FIX::InstrumentPartyID InstrumentPartyID_133("STRING_1589087823");
    noInstrumentParties_0_2.set(InstrumentPartyID_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyID_133.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_133('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyIDSource_133.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_133(1859898573);
    noInstrumentParties_0_2.set(InstrumentPartyRole_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyRole_133.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_133);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282;
      FIX::InstrumentPartySubID InstrumentPartySubID_282("STRING_860341213");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubID_282.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_282(2048515536);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_282);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubIDType_282.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_141;
    FIX::SecurityAltID SecurityAltID_141("STRING_1671791169");
    noSecurityAltID_0_0.set(SecurityAltID_141);
    SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltID_141.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_141("STRING_1269445199");
    noSecurityAltID_0_0.set(SecurityAltIDSource_141);
    SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltIDSource_141.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_142;
    FIX::SecurityAltID SecurityAltID_142("STRING_1985821007");
    noSecurityAltID_0_1.set(SecurityAltID_142);
    SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltID_142.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_142("STRING_406562649");
    noSecurityAltID_0_1.set(SecurityAltIDSource_142);
    SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltIDSource_142.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_126;
  FIX::SecurityXML SecurityXML_127("XMLDATA_929471069");
  msg.set(SecurityXML_127);
  FIX::SecurityXMLLen SecurityXMLLen_63(2143924683);
  msg.set(SecurityXMLLen_63);
  FIX::SecurityXMLSchema SecurityXMLSchema_63("STRING_1491806556");
  msg.set(SecurityXMLSchema_63);
  SecurityXML_126.insert(SecurityXMLSchema_63.getString());
  all_values.push_back(SecurityXML_126);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    FIX::PartyID PartyID_89("STRING_1911820032");
    noPartyIDs_0_0.set(PartyID_89);
    Parties_NoPartyIDs_89.insert(PartyID_89.getString());
    FIX::PartyIDSource PartyIDSource_89('A');
    noPartyIDs_0_0.set(PartyIDSource_89);
    Parties_NoPartyIDs_89.insert(PartyIDSource_89.getString());
    FIX::PartyRole PartyRole_89(52);
    noPartyIDs_0_0.set(PartyRole_89);
    Parties_NoPartyIDs_89.insert(PartyRole_89.getString());
    all_values.push_back(Parties_NoPartyIDs_89);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      FIX::PartySubID PartySubID_185("STRING_790803014");
      noPartySubIDs_0_1_0.set(PartySubID_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubID_185.getString());
      FIX::PartySubIDType PartySubIDType_185(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubIDType_185.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      FIX::PartySubID PartySubID_186("STRING_360714419");
      noPartySubIDs_0_1_1.set(PartySubID_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubID_186.getString());
      FIX::PartySubIDType PartySubIDType_186(9);
      noPartySubIDs_0_1_1.set(PartySubIDType_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubIDType_186.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      FIX::PartySubID PartySubID_187("STRING_1173830248");
      noPartySubIDs_0_1_2.set(PartySubID_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubID_187.getString());
      FIX::PartySubIDType PartySubIDType_187(18);
      noPartySubIDs_0_1_2.set(PartySubIDType_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubIDType_187.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
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
    PosAmt_8.setString("18710285");
    noPosAmt_0_0.set(PosAmt_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmt_8.getString());
    FIX::PosAmtType PosAmtType_8("STRING_CMTM");
    noPosAmt_0_0.set(PosAmtType_8);
    PositionAmountData_NoPosAmt_8.insert(PosAmtType_8.getString());
    FIX::PositionCurrency PositionCurrency_8("STRING_1932099690");
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
    PosAmt_9.setString("7669765");
    noPosAmt_0_1.set(PosAmt_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmt_9.getString());
    FIX::PosAmtType PosAmtType_9("STRING_SETL");
    noPosAmt_0_1.set(PosAmtType_9);
    PositionAmountData_NoPosAmt_9.insert(PosAmtType_9.getString());
    FIX::PositionCurrency PositionCurrency_9("STRING_1373703865");
    noPosAmt_0_1.set(PositionCurrency_9);
    PositionAmountData_NoPosAmt_9.insert(PositionCurrency_9.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_9);

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_5;
    FIX::LongQty LongQty_5;
    LongQty_5.setString("7450529");
    noPositions_0_0.set(LongQty_5);
    PositionQty_NoPositions_5.insert(LongQty_5.getString());
    FIX::PosQtyStatus PosQtyStatus_5(1);
    noPositions_0_0.set(PosQtyStatus_5);
    PositionQty_NoPositions_5.insert(PosQtyStatus_5.getString());
    FIX::PosType PosType_5("STRING_DLV");
    noPositions_0_0.set(PosType_5);
    PositionQty_NoPositions_5.insert(PosType_5.getString());
    FIX::QuantityDate QuantityDate_5("LOCALMKTDATE_646084844");
    noPositions_0_0.set(QuantityDate_5);
    PositionQty_NoPositions_5.insert(QuantityDate_5.getString());
    FIX::ShortQty ShortQty_5;
    ShortQty_5.setString("7725806");
    noPositions_0_0.set(ShortQty_5);
    PositionQty_NoPositions_5.insert(ShortQty_5.getString());
    all_values.push_back(PositionQty_NoPositions_5);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_81;
      FIX::NestedPartyID NestedPartyID_81("STRING_1915530043");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyID_81.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_81('6');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyIDSource_81.getString());
      FIX::NestedPartyRole NestedPartyRole_81(1289406467);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyRole_81.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_81);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        FIX::NestedPartySubID NestedPartySubID_160("STRING_607359008");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubID_160.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_160(633729375);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubIDType_160.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
        FIX::NestedPartySubID NestedPartySubID_161("STRING_1613846902");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubID_161.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_161(371695392);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubIDType_161.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_82;
      FIX::NestedPartyID NestedPartyID_82("STRING_516619325");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyID_82.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_82('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyIDSource_82.getString());
      FIX::NestedPartyRole NestedPartyRole_82(1175619683);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyRole_82.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_82);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
        FIX::NestedPartySubID NestedPartySubID_162("STRING_1331913444");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubID_162.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_162(1536334103);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubIDType_162.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
        FIX::NestedPartySubID NestedPartySubID_163("STRING_2003446105");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubID_163.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_163(358260045);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubIDType_163.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
        FIX::NestedPartySubID NestedPartySubID_164("STRING_1067515262");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubID_164.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_164(665124991);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubIDType_164.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("818049");
    noPositions_0_1.set(LongQty_6);
    PositionQty_NoPositions_6.insert(LongQty_6.getString());
    FIX::PosQtyStatus PosQtyStatus_6(1);
    noPositions_0_1.set(PosQtyStatus_6);
    PositionQty_NoPositions_6.insert(PosQtyStatus_6.getString());
    FIX::PosType PosType_6("STRING_IES");
    noPositions_0_1.set(PosType_6);
    PositionQty_NoPositions_6.insert(PosType_6.getString());
    FIX::QuantityDate QuantityDate_6("LOCALMKTDATE_848781499");
    noPositions_0_1.set(QuantityDate_6);
    PositionQty_NoPositions_6.insert(QuantityDate_6.getString());
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("10530375");
    noPositions_0_1.set(ShortQty_6);
    PositionQty_NoPositions_6.insert(ShortQty_6.getString());
    all_values.push_back(PositionQty_NoPositions_6);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_83;
      FIX::NestedPartyID NestedPartyID_83("STRING_1346976582");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyID_83.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_83('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyIDSource_83.getString());
      FIX::NestedPartyRole NestedPartyRole_83(1781426907);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyRole_83.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_83);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
        FIX::NestedPartySubID NestedPartySubID_165("STRING_296691709");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubID_165.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_165(406523873);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubIDType_165.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
        FIX::NestedPartySubID NestedPartySubID_166("STRING_1440873048");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubID_166.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_166(64738104);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubIDType_166.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
        FIX::NestedPartySubID NestedPartySubID_167("STRING_1017441846");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubID_167.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_167(582795867);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubIDType_167.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_84;
      FIX::NestedPartyID NestedPartyID_84("STRING_762255568");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyID_84.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_84('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyIDSource_84.getString());
      FIX::NestedPartyRole NestedPartyRole_84(1216525243);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyRole_84.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_84);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
        FIX::NestedPartySubID NestedPartySubID_168("STRING_1996496246");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubID_168.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_168(1733144568);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubIDType_168.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
        FIX::NestedPartySubID NestedPartySubID_169("STRING_1713048360");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubID_169.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_169(1024632282);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubIDType_169.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("8930832");
    noPositions_0_2.set(LongQty_7);
    PositionQty_NoPositions_7.insert(LongQty_7.getString());
    FIX::PosQtyStatus PosQtyStatus_7(1);
    noPositions_0_2.set(PosQtyStatus_7);
    PositionQty_NoPositions_7.insert(PosQtyStatus_7.getString());
    FIX::PosType PosType_7("STRING_SPL");
    noPositions_0_2.set(PosType_7);
    PositionQty_NoPositions_7.insert(PosType_7.getString());
    FIX::QuantityDate QuantityDate_7("LOCALMKTDATE_749045718");
    noPositions_0_2.set(QuantityDate_7);
    PositionQty_NoPositions_7.insert(QuantityDate_7.getString());
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("12557382");
    noPositions_0_2.set(ShortQty_7);
    PositionQty_NoPositions_7.insert(ShortQty_7.getString());
    all_values.push_back(PositionQty_NoPositions_7);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_85;
      FIX::NestedPartyID NestedPartyID_85("STRING_1414170709");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyID_85.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_85('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyIDSource_85.getString());
      FIX::NestedPartyRole NestedPartyRole_85(1501397526);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyRole_85.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_85);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
        FIX::NestedPartySubID NestedPartySubID_170("STRING_38841037");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubID_170.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_170(406951436);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubIDType_170.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_86;
      FIX::NestedPartyID NestedPartyID_86("STRING_1539872993");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyID_86.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_86('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyIDSource_86.getString());
      FIX::NestedPartyRole NestedPartyRole_86(57558301);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyRole_86.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_86);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
        FIX::NestedPartySubID NestedPartySubID_171("STRING_1943846850");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubID_171.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_171(354250010);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubIDType_171.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
        FIX::NestedPartySubID NestedPartySubID_172("STRING_1580340126");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubID_172.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_172(1237236251);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubIDType_172.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_87;
      FIX::NestedPartyID NestedPartyID_87("STRING_418988114");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyID_87.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_87('4');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyIDSource_87.getString());
      FIX::NestedPartyRole NestedPartyRole_87(1820032118);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_87);
      NestedParties_NoNestedPartyIDs_87.insert(NestedPartyRole_87.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_87);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
        FIX::NestedPartySubID NestedPartySubID_173("STRING_2075099179");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubID_173.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_173(889073713);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubIDType_173.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_23;
    FIX::TradingSessionID TradingSessionID_59("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_59);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionID_59.getString());
    FIX::TradingSessionSubID TradingSessionSubID_59("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_59);
    TrdgSesGrp_NoTradingSessions_23.insert(TradingSessionSubID_59.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_23);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_24;
    FIX::TradingSessionID TradingSessionID_60("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_60);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionID_60.getString());
    FIX::TradingSessionSubID TradingSessionSubID_60("STRING_2");
    noTradingSessions_0_1.set(TradingSessionSubID_60);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionSubID_60.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_24);

    msg.addGroup(noTradingSessions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_87("DATA_1872905374");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuer_87.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_87(1214743149);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuerLen_87.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_87("DATA_2116863612");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDesc_87.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_87(981159927);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDescLen_87.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("5482575");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_87);
    UnderlyingInstrument_87.insert(UnderlyingAdjustedQuantity_87.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("6.730000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_87);
    UnderlyingInstrument_87.insert(UnderlyingAllocationPercent_87.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("94.650000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingAttachmentPoint_87.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_87("STRING_2049655026");
    noUnderlyings_0_0.set(UnderlyingCFICode_87);
    UnderlyingInstrument_87.insert(UnderlyingCFICode_87.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_87("STRING_1099978768");
    noUnderlyings_0_0.set(UnderlyingCPProgram_87);
    UnderlyingInstrument_87.insert(UnderlyingCPProgram_87.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_87("STRING_210060502");
    noUnderlyings_0_0.set(UnderlyingCPRegType_87);
    UnderlyingInstrument_87.insert(UnderlyingCPRegType_87.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("3091228");
    noUnderlyings_0_0.set(UnderlyingCapValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCapValue_87.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("4923681");
    noUnderlyings_0_0.set(UnderlyingCashAmount_87);
    UnderlyingInstrument_87.insert(UnderlyingCashAmount_87.getString());
    FIX::UnderlyingCashType UnderlyingCashType_87("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_87);
    UnderlyingInstrument_87.insert(UnderlyingCashType_87.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("3666811");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplier_87.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_87(1666184366);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplierUnit_87.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_87("COUNTRY_1392241324");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingCountryOfIssue_87.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_87("LOCALMKTDATE_720931125");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponPaymentDate_87.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("8.450000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponRate_87.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_87("STRING_481993927");
    noUnderlyings_0_0.set(UnderlyingCreditRating_87);
    UnderlyingInstrument_87.insert(UnderlyingCreditRating_87.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_87("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrency_87.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("1545423");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrentValue_87.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("92.740000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingDetachmentPoint_87.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("14769547");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingDirtyPrice_87.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("10436161");
    noUnderlyings_0_0.set(UnderlyingEndPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingEndPrice_87.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("15835417");
    noUnderlyings_0_0.set(UnderlyingEndValue_87);
    UnderlyingInstrument_87.insert(UnderlyingEndValue_87.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_87(1253582831);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_87);
    UnderlyingInstrument_87.insert(UnderlyingExerciseStyle_87.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("15183507");
    noUnderlyings_0_0.set(UnderlyingFXRate_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRate_87.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_87('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRateCalc_87.getString());
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("20548432");
    noUnderlyings_0_0.set(UnderlyingFactor_87);
    UnderlyingInstrument_87.insert(UnderlyingFactor_87.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_87(738684991);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_87);
    UnderlyingInstrument_87.insert(UnderlyingFlowScheduleType_87.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_87("STRING_136907075");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_87);
    UnderlyingInstrument_87.insert(UnderlyingInstrRegistry_87.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_87("LOCALMKTDATE_1122102744");
    noUnderlyings_0_0.set(UnderlyingIssueDate_87);
    UnderlyingInstrument_87.insert(UnderlyingIssueDate_87.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_87("STRING_708064956");
    noUnderlyings_0_0.set(UnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(UnderlyingIssuer_87.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_87("STRING_1118067002");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingLocaleOfIssue_87.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_87("LOCALMKTDATE_1670360244");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityDate_87.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_87("MONTHYEAR_2091615629");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityMonthYear_87.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_87("TZTIMEONLY_1289286467");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityTime_87.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("16.230000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_87('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_87);
    UnderlyingInstrument_87.insert(UnderlyingOptAttribute_87.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("69.690000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingOriginalNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_87("STRING_1881654437");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasure_87.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("15364788");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasureQty_87.getString());
    FIX::UnderlyingProduct UnderlyingProduct_87(947741443);
    noUnderlyings_0_0.set(UnderlyingProduct_87);
    UnderlyingInstrument_87.insert(UnderlyingProduct_87.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_87(100851905);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_87);
    UnderlyingInstrument_87.insert(UnderlyingPutOrCall_87.getString());
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("10551795");
    noUnderlyings_0_0.set(UnderlyingPx_87);
    UnderlyingInstrument_87.insert(UnderlyingPx_87.getString());
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("1924991");
    noUnderlyings_0_0.set(UnderlyingQty_87);
    UnderlyingInstrument_87.insert(UnderlyingQty_87.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_87("LOCALMKTDATE_821783030");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_87);
    UnderlyingInstrument_87.insert(UnderlyingRedemptionDate_87.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_87("STRING_6736778");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingRepoCollateralSecurityType_87.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("30.460000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseRate_87.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_87(1961702270);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseTerm_87.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_87("STRING_1556075948");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_87);
    UnderlyingInstrument_87.insert(UnderlyingRestructuringType_87.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_87("STRING_829035443");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityDesc_87.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_87("EXCHANGE_2135381544");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityExchange_87.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_87("STRING_885547002");
    noUnderlyings_0_0.set(UnderlyingSecurityID_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityID_87.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_87("STRING_1872651554");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityIDSource_87.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_87("STRING_1571439675");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecuritySubType_87.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_87("STRING_2139129833");
    noUnderlyings_0_0.set(UnderlyingSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityType_87.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_87("STRING_1243518651");
    noUnderlyings_0_0.set(UnderlyingSeniority_87);
    UnderlyingInstrument_87.insert(UnderlyingSeniority_87.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_87("STRING_1982925024");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlMethod_87.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_87(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlementType_87.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("19822036");
    noUnderlyings_0_0.set(UnderlyingStartValue_87);
    UnderlyingInstrument_87.insert(UnderlyingStartValue_87.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_87("STRING_2119832099");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingStateOrProvinceOfIssue_87.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_87("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikeCurrency_87.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("10904154");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikePrice_87.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_87("STRING_543985122");
    noUnderlyings_0_0.set(UnderlyingSymbol_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbol_87.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_87("STRING_486916932");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbolSfx_87.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_87("STRING_232218273");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingTimeUnit_87.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_87("STRING_2116516745");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasure_87.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("15310276");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasureQty_87.getString());
    all_values.push_back(UnderlyingInstrument_87);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_173("STRING_1850687534");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltID_173.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_173("STRING_920022897");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltIDSource_173.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_174("STRING_531823038");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltID_174.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_174("STRING_1951539439");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltIDSource_174.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      FIX::UnderlyingStipType UnderlyingStipType_157("STRING_724322157");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipType_157.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_157("STRING_625838822");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipValue_157.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_184("STRING_1398815203");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_184);
      UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyID_184.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_184('4');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_184);
      UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyIDSource_184.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_184(1390531557);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_184);
      UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyRole_184.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_351("STRING_427955340");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubID_351.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_351(128594911);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubIDType_351.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_352("STRING_1953018553");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubID_352.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_352(1999395015);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubIDType_352.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
