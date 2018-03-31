#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataSnapshotFullRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_1(2094170476);
  msg.set(ApplQueueDepth_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueDepth_1.getString());
  FIX::ApplQueueResolution ApplQueueResolution_1(0);
  msg.set(ApplQueueResolution_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueResolution_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_14("LOCALMKTDATE_740457542");
  msg.set(ClearingBusinessDate_14);
  MarketDataSnapshotFullRefresh_0.insert(ClearingBusinessDate_14.getString());
  FIX::CorporateAction CorporateAction_6("MULTIPLECHARVALUE_A");
  msg.set(CorporateAction_6);
  MarketDataSnapshotFullRefresh_0.insert(CorporateAction_6.getString());
  FIX::FinancialStatus FinancialStatus_3("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_3);
  MarketDataSnapshotFullRefresh_0.insert(FinancialStatus_3.getString());
  FIX::MDBookType MDBookType_21(3);
  msg.set(MDBookType_21);
  MarketDataSnapshotFullRefresh_0.insert(MDBookType_21.getString());
  FIX::MDFeedType MDFeedType_21("STRING_949878005");
  msg.set(MDFeedType_21);
  MarketDataSnapshotFullRefresh_0.insert(MDFeedType_21.getString());
  FIX::MDReportID MDReportID_0(368247966);
  msg.set(MDReportID_0);
  MarketDataSnapshotFullRefresh_0.insert(MDReportID_0.getString());
  FIX::MDReqID MDReqID_3("STRING_151543213");
  msg.set(MDReqID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDReqID_3.getString());
  FIX::MDStreamID MDStreamID_3("STRING_707401763");
  msg.set(MDStreamID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDStreamID_3.getString());
  FIX::MDSubBookType MDSubBookType_1(1753656430);
  msg.set(MDSubBookType_1);
  MarketDataSnapshotFullRefresh_0.insert(MDSubBookType_1.getString());
  FIX::MarketDepth MarketDepth_22(71864166);
  msg.set(MarketDepth_22);
  MarketDataSnapshotFullRefresh_0.insert(MarketDepth_22.getString());
  FIX::NetChgPrevDay NetChgPrevDay_1;
  NetChgPrevDay_1.setString("16840210");
  msg.set(NetChgPrevDay_1);
  MarketDataSnapshotFullRefresh_0.insert(NetChgPrevDay_1.getString());
  FIX::RefreshIndicator RefreshIndicator_0(true);
  msg.set(RefreshIndicator_0);
  MarketDataSnapshotFullRefresh_0.insert(RefreshIndicator_0.getString());
  FIX::TotNumReports TotNumReports_3(1553534899);
  msg.set(TotNumReports_3);
  MarketDataSnapshotFullRefresh_0.insert(TotNumReports_3.getString());
  FIX::TradeDate TradeDate_16("LOCALMKTDATE_1103982577");
  msg.set(TradeDate_16);
  MarketDataSnapshotFullRefresh_0.insert(TradeDate_16.getString());
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  all_compo_names.insert("MarketDataSnapshotFullRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  FIX::ApplID ApplID_7("STRING_862132021");
  msg.set(ApplID_7);
  ApplicationSequenceControl_7.insert(ApplID_7.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_7(797171914);
  msg.set(ApplLastSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplLastSeqNum_7.getString());
  FIX::ApplResendFlag ApplResendFlag_7(false);
  msg.set(ApplResendFlag_7);
  ApplicationSequenceControl_7.insert(ApplResendFlag_7.getString());
  FIX::ApplSeqNum ApplSeqNum_7(1788491098);
  msg.set(ApplSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplSeqNum_7.getString());
  all_values.push_back(ApplicationSequenceControl_7);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_57;
    FIX::EncodedLegIssuer EncodedLegIssuer_57("DATA_2029704748");
    noLegs_0_0.set(EncodedLegIssuer_57);
    InstrumentLeg_57.insert(EncodedLegIssuer_57.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_57(552277987);
    noLegs_0_0.set(EncodedLegIssuerLen_57);
    InstrumentLeg_57.insert(EncodedLegIssuerLen_57.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_57("DATA_2048420861");
    noLegs_0_0.set(EncodedLegSecurityDesc_57);
    InstrumentLeg_57.insert(EncodedLegSecurityDesc_57.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_57(217709561);
    noLegs_0_0.set(EncodedLegSecurityDescLen_57);
    InstrumentLeg_57.insert(EncodedLegSecurityDescLen_57.getString());
    FIX::LegCFICode LegCFICode_57("STRING_1979239811");
    noLegs_0_0.set(LegCFICode_57);
    InstrumentLeg_57.insert(LegCFICode_57.getString());
    FIX::LegContractMultiplier LegContractMultiplier_57;
    LegContractMultiplier_57.setString("8292821");
    noLegs_0_0.set(LegContractMultiplier_57);
    InstrumentLeg_57.insert(LegContractMultiplier_57.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_57(315823109);
    noLegs_0_0.set(LegContractMultiplierUnit_57);
    InstrumentLeg_57.insert(LegContractMultiplierUnit_57.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_57("MONTHYEAR_2147272683");
    noLegs_0_0.set(LegContractSettlMonth_57);
    InstrumentLeg_57.insert(LegContractSettlMonth_57.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_57("COUNTRY_310850728");
    noLegs_0_0.set(LegCountryOfIssue_57);
    InstrumentLeg_57.insert(LegCountryOfIssue_57.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_57("LOCALMKTDATE_1597997174");
    noLegs_0_0.set(LegCouponPaymentDate_57);
    InstrumentLeg_57.insert(LegCouponPaymentDate_57.getString());
    FIX::LegCouponRate LegCouponRate_57;
    LegCouponRate_57.setString("95.110000");
    noLegs_0_0.set(LegCouponRate_57);
    InstrumentLeg_57.insert(LegCouponRate_57.getString());
    FIX::LegCreditRating LegCreditRating_57("STRING_2067300664");
    noLegs_0_0.set(LegCreditRating_57);
    InstrumentLeg_57.insert(LegCreditRating_57.getString());
    FIX::LegCurrency LegCurrency_57("CHF");
    noLegs_0_0.set(LegCurrency_57);
    InstrumentLeg_57.insert(LegCurrency_57.getString());
    FIX::LegDatedDate LegDatedDate_57("LOCALMKTDATE_281778709");
    noLegs_0_0.set(LegDatedDate_57);
    InstrumentLeg_57.insert(LegDatedDate_57.getString());
    FIX::LegExerciseStyle LegExerciseStyle_57(380598242);
    noLegs_0_0.set(LegExerciseStyle_57);
    InstrumentLeg_57.insert(LegExerciseStyle_57.getString());
    FIX::LegFactor LegFactor_57;
    LegFactor_57.setString("15577133");
    noLegs_0_0.set(LegFactor_57);
    InstrumentLeg_57.insert(LegFactor_57.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_57(650026676);
    noLegs_0_0.set(LegFlowScheduleType_57);
    InstrumentLeg_57.insert(LegFlowScheduleType_57.getString());
    FIX::LegInstrRegistry LegInstrRegistry_57("STRING_532141455");
    noLegs_0_0.set(LegInstrRegistry_57);
    InstrumentLeg_57.insert(LegInstrRegistry_57.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_57("LOCALMKTDATE_117631464");
    noLegs_0_0.set(LegInterestAccrualDate_57);
    InstrumentLeg_57.insert(LegInterestAccrualDate_57.getString());
    FIX::LegIssueDate LegIssueDate_57("LOCALMKTDATE_256199458");
    noLegs_0_0.set(LegIssueDate_57);
    InstrumentLeg_57.insert(LegIssueDate_57.getString());
    FIX::LegIssuer LegIssuer_57("STRING_604005621");
    noLegs_0_0.set(LegIssuer_57);
    InstrumentLeg_57.insert(LegIssuer_57.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_57("STRING_1801652484");
    noLegs_0_0.set(LegLocaleOfIssue_57);
    InstrumentLeg_57.insert(LegLocaleOfIssue_57.getString());
    FIX::LegMaturityDate LegMaturityDate_57("LOCALMKTDATE_1864517193");
    noLegs_0_0.set(LegMaturityDate_57);
    InstrumentLeg_57.insert(LegMaturityDate_57.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_57("MONTHYEAR_10056872");
    noLegs_0_0.set(LegMaturityMonthYear_57);
    InstrumentLeg_57.insert(LegMaturityMonthYear_57.getString());
    FIX::LegMaturityTime LegMaturityTime_57("TZTIMEONLY_758151413");
    noLegs_0_0.set(LegMaturityTime_57);
    InstrumentLeg_57.insert(LegMaturityTime_57.getString());
    FIX::LegOptAttribute LegOptAttribute_57('5');
    noLegs_0_0.set(LegOptAttribute_57);
    InstrumentLeg_57.insert(LegOptAttribute_57.getString());
    FIX::LegOptionRatio LegOptionRatio_57;
    LegOptionRatio_57.setString("8072287");
    noLegs_0_0.set(LegOptionRatio_57);
    InstrumentLeg_57.insert(LegOptionRatio_57.getString());
    FIX::LegPool LegPool_57("STRING_1741148102");
    noLegs_0_0.set(LegPool_57);
    InstrumentLeg_57.insert(LegPool_57.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_57("STRING_220173016");
    noLegs_0_0.set(LegPriceUnitOfMeasure_57);
    InstrumentLeg_57.insert(LegPriceUnitOfMeasure_57.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
    LegPriceUnitOfMeasureQty_57.setString("11923225");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_57);
    InstrumentLeg_57.insert(LegPriceUnitOfMeasureQty_57.getString());
    FIX::LegProduct LegProduct_57(1623369203);
    noLegs_0_0.set(LegProduct_57);
    InstrumentLeg_57.insert(LegProduct_57.getString());
    FIX::LegPutOrCall LegPutOrCall_57(772451004);
    noLegs_0_0.set(LegPutOrCall_57);
    InstrumentLeg_57.insert(LegPutOrCall_57.getString());
    FIX::LegRatioQty LegRatioQty_57;
    LegRatioQty_57.setString("10932597");
    noLegs_0_0.set(LegRatioQty_57);
    InstrumentLeg_57.insert(LegRatioQty_57.getString());
    FIX::LegRedemptionDate LegRedemptionDate_57("LOCALMKTDATE_1841078764");
    noLegs_0_0.set(LegRedemptionDate_57);
    InstrumentLeg_57.insert(LegRedemptionDate_57.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_57("STRING_604207167");
    noLegs_0_0.set(LegRepoCollateralSecurityType_57);
    InstrumentLeg_57.insert(LegRepoCollateralSecurityType_57.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_57;
    LegRepurchaseRate_57.setString("18.850000");
    noLegs_0_0.set(LegRepurchaseRate_57);
    InstrumentLeg_57.insert(LegRepurchaseRate_57.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_57(9418225);
    noLegs_0_0.set(LegRepurchaseTerm_57);
    InstrumentLeg_57.insert(LegRepurchaseTerm_57.getString());
    FIX::LegSecurityDesc LegSecurityDesc_57("STRING_603996202");
    noLegs_0_0.set(LegSecurityDesc_57);
    InstrumentLeg_57.insert(LegSecurityDesc_57.getString());
    FIX::LegSecurityExchange LegSecurityExchange_57("EXCHANGE_85908965");
    noLegs_0_0.set(LegSecurityExchange_57);
    InstrumentLeg_57.insert(LegSecurityExchange_57.getString());
    FIX::LegSecurityID LegSecurityID_57("STRING_1607415399");
    noLegs_0_0.set(LegSecurityID_57);
    InstrumentLeg_57.insert(LegSecurityID_57.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_57("STRING_550472066");
    noLegs_0_0.set(LegSecurityIDSource_57);
    InstrumentLeg_57.insert(LegSecurityIDSource_57.getString());
    FIX::LegSecuritySubType LegSecuritySubType_57("STRING_5725981");
    noLegs_0_0.set(LegSecuritySubType_57);
    InstrumentLeg_57.insert(LegSecuritySubType_57.getString());
    FIX::LegSecurityType LegSecurityType_57("STRING_1798386468");
    noLegs_0_0.set(LegSecurityType_57);
    InstrumentLeg_57.insert(LegSecurityType_57.getString());
    FIX::LegSide LegSide_57('1');
    noLegs_0_0.set(LegSide_57);
    InstrumentLeg_57.insert(LegSide_57.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_57("STRING_287504690");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_57);
    InstrumentLeg_57.insert(LegStateOrProvinceOfIssue_57.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_57("USD");
    noLegs_0_0.set(LegStrikeCurrency_57);
    InstrumentLeg_57.insert(LegStrikeCurrency_57.getString());
    FIX::LegStrikePrice LegStrikePrice_57;
    LegStrikePrice_57.setString("9375313");
    noLegs_0_0.set(LegStrikePrice_57);
    InstrumentLeg_57.insert(LegStrikePrice_57.getString());
    FIX::LegSymbol LegSymbol_57("STRING_563642517");
    noLegs_0_0.set(LegSymbol_57);
    InstrumentLeg_57.insert(LegSymbol_57.getString());
    FIX::LegSymbolSfx LegSymbolSfx_57("STRING_686168574");
    noLegs_0_0.set(LegSymbolSfx_57);
    InstrumentLeg_57.insert(LegSymbolSfx_57.getString());
    FIX::LegTimeUnit LegTimeUnit_57("STRING_1193730825");
    noLegs_0_0.set(LegTimeUnit_57);
    InstrumentLeg_57.insert(LegTimeUnit_57.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_57("STRING_1167648138");
    noLegs_0_0.set(LegUnitOfMeasure_57);
    InstrumentLeg_57.insert(LegUnitOfMeasure_57.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
    LegUnitOfMeasureQty_57.setString("3403374");
    noLegs_0_0.set(LegUnitOfMeasureQty_57);
    InstrumentLeg_57.insert(LegUnitOfMeasureQty_57.getString());
    all_values.push_back(InstrumentLeg_57);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
      FIX::LegSecurityAltID LegSecurityAltID_111("STRING_1177705010");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltID_111.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_111("STRING_1098488824");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltIDSource_111.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
      FIX::LegSecurityAltID LegSecurityAltID_112("STRING_1489929936");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltID_112.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_112("STRING_1984933796");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltIDSource_112.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_58;
    FIX::EncodedLegIssuer EncodedLegIssuer_58("DATA_692153278");
    noLegs_0_1.set(EncodedLegIssuer_58);
    InstrumentLeg_58.insert(EncodedLegIssuer_58.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_58(1710102952);
    noLegs_0_1.set(EncodedLegIssuerLen_58);
    InstrumentLeg_58.insert(EncodedLegIssuerLen_58.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_58("DATA_1029772649");
    noLegs_0_1.set(EncodedLegSecurityDesc_58);
    InstrumentLeg_58.insert(EncodedLegSecurityDesc_58.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_58(168038833);
    noLegs_0_1.set(EncodedLegSecurityDescLen_58);
    InstrumentLeg_58.insert(EncodedLegSecurityDescLen_58.getString());
    FIX::LegCFICode LegCFICode_58("STRING_335070308");
    noLegs_0_1.set(LegCFICode_58);
    InstrumentLeg_58.insert(LegCFICode_58.getString());
    FIX::LegContractMultiplier LegContractMultiplier_58;
    LegContractMultiplier_58.setString("21230323");
    noLegs_0_1.set(LegContractMultiplier_58);
    InstrumentLeg_58.insert(LegContractMultiplier_58.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_58(2009117597);
    noLegs_0_1.set(LegContractMultiplierUnit_58);
    InstrumentLeg_58.insert(LegContractMultiplierUnit_58.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_58("MONTHYEAR_939277476");
    noLegs_0_1.set(LegContractSettlMonth_58);
    InstrumentLeg_58.insert(LegContractSettlMonth_58.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_58("COUNTRY_1898090601");
    noLegs_0_1.set(LegCountryOfIssue_58);
    InstrumentLeg_58.insert(LegCountryOfIssue_58.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_58("LOCALMKTDATE_2018535823");
    noLegs_0_1.set(LegCouponPaymentDate_58);
    InstrumentLeg_58.insert(LegCouponPaymentDate_58.getString());
    FIX::LegCouponRate LegCouponRate_58;
    LegCouponRate_58.setString("36.780000");
    noLegs_0_1.set(LegCouponRate_58);
    InstrumentLeg_58.insert(LegCouponRate_58.getString());
    FIX::LegCreditRating LegCreditRating_58("STRING_1983999566");
    noLegs_0_1.set(LegCreditRating_58);
    InstrumentLeg_58.insert(LegCreditRating_58.getString());
    FIX::LegCurrency LegCurrency_58("USD");
    noLegs_0_1.set(LegCurrency_58);
    InstrumentLeg_58.insert(LegCurrency_58.getString());
    FIX::LegDatedDate LegDatedDate_58("LOCALMKTDATE_1989725547");
    noLegs_0_1.set(LegDatedDate_58);
    InstrumentLeg_58.insert(LegDatedDate_58.getString());
    FIX::LegExerciseStyle LegExerciseStyle_58(1129370394);
    noLegs_0_1.set(LegExerciseStyle_58);
    InstrumentLeg_58.insert(LegExerciseStyle_58.getString());
    FIX::LegFactor LegFactor_58;
    LegFactor_58.setString("11045695");
    noLegs_0_1.set(LegFactor_58);
    InstrumentLeg_58.insert(LegFactor_58.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_58(129746589);
    noLegs_0_1.set(LegFlowScheduleType_58);
    InstrumentLeg_58.insert(LegFlowScheduleType_58.getString());
    FIX::LegInstrRegistry LegInstrRegistry_58("STRING_1160871456");
    noLegs_0_1.set(LegInstrRegistry_58);
    InstrumentLeg_58.insert(LegInstrRegistry_58.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_58("LOCALMKTDATE_1673106616");
    noLegs_0_1.set(LegInterestAccrualDate_58);
    InstrumentLeg_58.insert(LegInterestAccrualDate_58.getString());
    FIX::LegIssueDate LegIssueDate_58("LOCALMKTDATE_1067277956");
    noLegs_0_1.set(LegIssueDate_58);
    InstrumentLeg_58.insert(LegIssueDate_58.getString());
    FIX::LegIssuer LegIssuer_58("STRING_1724513973");
    noLegs_0_1.set(LegIssuer_58);
    InstrumentLeg_58.insert(LegIssuer_58.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_58("STRING_211791543");
    noLegs_0_1.set(LegLocaleOfIssue_58);
    InstrumentLeg_58.insert(LegLocaleOfIssue_58.getString());
    FIX::LegMaturityDate LegMaturityDate_58("LOCALMKTDATE_113525133");
    noLegs_0_1.set(LegMaturityDate_58);
    InstrumentLeg_58.insert(LegMaturityDate_58.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_58("MONTHYEAR_744678463");
    noLegs_0_1.set(LegMaturityMonthYear_58);
    InstrumentLeg_58.insert(LegMaturityMonthYear_58.getString());
    FIX::LegMaturityTime LegMaturityTime_58("TZTIMEONLY_552128953");
    noLegs_0_1.set(LegMaturityTime_58);
    InstrumentLeg_58.insert(LegMaturityTime_58.getString());
    FIX::LegOptAttribute LegOptAttribute_58('1');
    noLegs_0_1.set(LegOptAttribute_58);
    InstrumentLeg_58.insert(LegOptAttribute_58.getString());
    FIX::LegOptionRatio LegOptionRatio_58;
    LegOptionRatio_58.setString("19223834");
    noLegs_0_1.set(LegOptionRatio_58);
    InstrumentLeg_58.insert(LegOptionRatio_58.getString());
    FIX::LegPool LegPool_58("STRING_1650617777");
    noLegs_0_1.set(LegPool_58);
    InstrumentLeg_58.insert(LegPool_58.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_58("STRING_366735791");
    noLegs_0_1.set(LegPriceUnitOfMeasure_58);
    InstrumentLeg_58.insert(LegPriceUnitOfMeasure_58.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
    LegPriceUnitOfMeasureQty_58.setString("17598336");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_58);
    InstrumentLeg_58.insert(LegPriceUnitOfMeasureQty_58.getString());
    FIX::LegProduct LegProduct_58(195287408);
    noLegs_0_1.set(LegProduct_58);
    InstrumentLeg_58.insert(LegProduct_58.getString());
    FIX::LegPutOrCall LegPutOrCall_58(2076838743);
    noLegs_0_1.set(LegPutOrCall_58);
    InstrumentLeg_58.insert(LegPutOrCall_58.getString());
    FIX::LegRatioQty LegRatioQty_58;
    LegRatioQty_58.setString("6421226");
    noLegs_0_1.set(LegRatioQty_58);
    InstrumentLeg_58.insert(LegRatioQty_58.getString());
    FIX::LegRedemptionDate LegRedemptionDate_58("LOCALMKTDATE_363326241");
    noLegs_0_1.set(LegRedemptionDate_58);
    InstrumentLeg_58.insert(LegRedemptionDate_58.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_58("STRING_264425404");
    noLegs_0_1.set(LegRepoCollateralSecurityType_58);
    InstrumentLeg_58.insert(LegRepoCollateralSecurityType_58.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_58;
    LegRepurchaseRate_58.setString("13.390000");
    noLegs_0_1.set(LegRepurchaseRate_58);
    InstrumentLeg_58.insert(LegRepurchaseRate_58.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_58(224960191);
    noLegs_0_1.set(LegRepurchaseTerm_58);
    InstrumentLeg_58.insert(LegRepurchaseTerm_58.getString());
    FIX::LegSecurityDesc LegSecurityDesc_58("STRING_1203702880");
    noLegs_0_1.set(LegSecurityDesc_58);
    InstrumentLeg_58.insert(LegSecurityDesc_58.getString());
    FIX::LegSecurityExchange LegSecurityExchange_58("EXCHANGE_368278292");
    noLegs_0_1.set(LegSecurityExchange_58);
    InstrumentLeg_58.insert(LegSecurityExchange_58.getString());
    FIX::LegSecurityID LegSecurityID_58("STRING_96012366");
    noLegs_0_1.set(LegSecurityID_58);
    InstrumentLeg_58.insert(LegSecurityID_58.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_58("STRING_599492910");
    noLegs_0_1.set(LegSecurityIDSource_58);
    InstrumentLeg_58.insert(LegSecurityIDSource_58.getString());
    FIX::LegSecuritySubType LegSecuritySubType_58("STRING_204794210");
    noLegs_0_1.set(LegSecuritySubType_58);
    InstrumentLeg_58.insert(LegSecuritySubType_58.getString());
    FIX::LegSecurityType LegSecurityType_58("STRING_1574479940");
    noLegs_0_1.set(LegSecurityType_58);
    InstrumentLeg_58.insert(LegSecurityType_58.getString());
    FIX::LegSide LegSide_58('5');
    noLegs_0_1.set(LegSide_58);
    InstrumentLeg_58.insert(LegSide_58.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_58("STRING_47036109");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_58);
    InstrumentLeg_58.insert(LegStateOrProvinceOfIssue_58.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_58("CHF");
    noLegs_0_1.set(LegStrikeCurrency_58);
    InstrumentLeg_58.insert(LegStrikeCurrency_58.getString());
    FIX::LegStrikePrice LegStrikePrice_58;
    LegStrikePrice_58.setString("1767826");
    noLegs_0_1.set(LegStrikePrice_58);
    InstrumentLeg_58.insert(LegStrikePrice_58.getString());
    FIX::LegSymbol LegSymbol_58("STRING_1717238143");
    noLegs_0_1.set(LegSymbol_58);
    InstrumentLeg_58.insert(LegSymbol_58.getString());
    FIX::LegSymbolSfx LegSymbolSfx_58("STRING_1175947481");
    noLegs_0_1.set(LegSymbolSfx_58);
    InstrumentLeg_58.insert(LegSymbolSfx_58.getString());
    FIX::LegTimeUnit LegTimeUnit_58("STRING_1244060654");
    noLegs_0_1.set(LegTimeUnit_58);
    InstrumentLeg_58.insert(LegTimeUnit_58.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_58("STRING_1294268469");
    noLegs_0_1.set(LegUnitOfMeasure_58);
    InstrumentLeg_58.insert(LegUnitOfMeasure_58.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
    LegUnitOfMeasureQty_58.setString("13877390");
    noLegs_0_1.set(LegUnitOfMeasureQty_58);
    InstrumentLeg_58.insert(LegUnitOfMeasureQty_58.getString());
    all_values.push_back(InstrumentLeg_58);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
      FIX::LegSecurityAltID LegSecurityAltID_113("STRING_2038946932");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltID_113.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_113("STRING_1939867978");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltIDSource_113.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
      FIX::LegSecurityAltID LegSecurityAltID_114("STRING_234391642");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltID_114.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_114("STRING_1813846758");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltIDSource_114.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
      FIX::LegSecurityAltID LegSecurityAltID_115("STRING_1443002107");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltID_115.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_115("STRING_601127433");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltIDSource_115.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_59;
    FIX::EncodedLegIssuer EncodedLegIssuer_59("DATA_1426196731");
    noLegs_0_2.set(EncodedLegIssuer_59);
    InstrumentLeg_59.insert(EncodedLegIssuer_59.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_59(1638289515);
    noLegs_0_2.set(EncodedLegIssuerLen_59);
    InstrumentLeg_59.insert(EncodedLegIssuerLen_59.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_59("DATA_530482529");
    noLegs_0_2.set(EncodedLegSecurityDesc_59);
    InstrumentLeg_59.insert(EncodedLegSecurityDesc_59.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_59(2068319354);
    noLegs_0_2.set(EncodedLegSecurityDescLen_59);
    InstrumentLeg_59.insert(EncodedLegSecurityDescLen_59.getString());
    FIX::LegCFICode LegCFICode_59("STRING_2001615757");
    noLegs_0_2.set(LegCFICode_59);
    InstrumentLeg_59.insert(LegCFICode_59.getString());
    FIX::LegContractMultiplier LegContractMultiplier_59;
    LegContractMultiplier_59.setString("7949079");
    noLegs_0_2.set(LegContractMultiplier_59);
    InstrumentLeg_59.insert(LegContractMultiplier_59.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_59(538507045);
    noLegs_0_2.set(LegContractMultiplierUnit_59);
    InstrumentLeg_59.insert(LegContractMultiplierUnit_59.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_59("MONTHYEAR_79092300");
    noLegs_0_2.set(LegContractSettlMonth_59);
    InstrumentLeg_59.insert(LegContractSettlMonth_59.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_59("COUNTRY_1998610813");
    noLegs_0_2.set(LegCountryOfIssue_59);
    InstrumentLeg_59.insert(LegCountryOfIssue_59.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_59("LOCALMKTDATE_906785337");
    noLegs_0_2.set(LegCouponPaymentDate_59);
    InstrumentLeg_59.insert(LegCouponPaymentDate_59.getString());
    FIX::LegCouponRate LegCouponRate_59;
    LegCouponRate_59.setString("46.660000");
    noLegs_0_2.set(LegCouponRate_59);
    InstrumentLeg_59.insert(LegCouponRate_59.getString());
    FIX::LegCreditRating LegCreditRating_59("STRING_450620075");
    noLegs_0_2.set(LegCreditRating_59);
    InstrumentLeg_59.insert(LegCreditRating_59.getString());
    FIX::LegCurrency LegCurrency_59("GBP");
    noLegs_0_2.set(LegCurrency_59);
    InstrumentLeg_59.insert(LegCurrency_59.getString());
    FIX::LegDatedDate LegDatedDate_59("LOCALMKTDATE_996375082");
    noLegs_0_2.set(LegDatedDate_59);
    InstrumentLeg_59.insert(LegDatedDate_59.getString());
    FIX::LegExerciseStyle LegExerciseStyle_59(1158615656);
    noLegs_0_2.set(LegExerciseStyle_59);
    InstrumentLeg_59.insert(LegExerciseStyle_59.getString());
    FIX::LegFactor LegFactor_59;
    LegFactor_59.setString("1584676");
    noLegs_0_2.set(LegFactor_59);
    InstrumentLeg_59.insert(LegFactor_59.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_59(499215947);
    noLegs_0_2.set(LegFlowScheduleType_59);
    InstrumentLeg_59.insert(LegFlowScheduleType_59.getString());
    FIX::LegInstrRegistry LegInstrRegistry_59("STRING_1335398355");
    noLegs_0_2.set(LegInstrRegistry_59);
    InstrumentLeg_59.insert(LegInstrRegistry_59.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_59("LOCALMKTDATE_1875705789");
    noLegs_0_2.set(LegInterestAccrualDate_59);
    InstrumentLeg_59.insert(LegInterestAccrualDate_59.getString());
    FIX::LegIssueDate LegIssueDate_59("LOCALMKTDATE_1675163429");
    noLegs_0_2.set(LegIssueDate_59);
    InstrumentLeg_59.insert(LegIssueDate_59.getString());
    FIX::LegIssuer LegIssuer_59("STRING_431975361");
    noLegs_0_2.set(LegIssuer_59);
    InstrumentLeg_59.insert(LegIssuer_59.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_59("STRING_1022490610");
    noLegs_0_2.set(LegLocaleOfIssue_59);
    InstrumentLeg_59.insert(LegLocaleOfIssue_59.getString());
    FIX::LegMaturityDate LegMaturityDate_59("LOCALMKTDATE_915418805");
    noLegs_0_2.set(LegMaturityDate_59);
    InstrumentLeg_59.insert(LegMaturityDate_59.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_59("MONTHYEAR_1789561149");
    noLegs_0_2.set(LegMaturityMonthYear_59);
    InstrumentLeg_59.insert(LegMaturityMonthYear_59.getString());
    FIX::LegMaturityTime LegMaturityTime_59("TZTIMEONLY_913953894");
    noLegs_0_2.set(LegMaturityTime_59);
    InstrumentLeg_59.insert(LegMaturityTime_59.getString());
    FIX::LegOptAttribute LegOptAttribute_59('7');
    noLegs_0_2.set(LegOptAttribute_59);
    InstrumentLeg_59.insert(LegOptAttribute_59.getString());
    FIX::LegOptionRatio LegOptionRatio_59;
    LegOptionRatio_59.setString("20239527");
    noLegs_0_2.set(LegOptionRatio_59);
    InstrumentLeg_59.insert(LegOptionRatio_59.getString());
    FIX::LegPool LegPool_59("STRING_580317004");
    noLegs_0_2.set(LegPool_59);
    InstrumentLeg_59.insert(LegPool_59.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_59("STRING_3321595");
    noLegs_0_2.set(LegPriceUnitOfMeasure_59);
    InstrumentLeg_59.insert(LegPriceUnitOfMeasure_59.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
    LegPriceUnitOfMeasureQty_59.setString("4775965");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_59);
    InstrumentLeg_59.insert(LegPriceUnitOfMeasureQty_59.getString());
    FIX::LegProduct LegProduct_59(2006513736);
    noLegs_0_2.set(LegProduct_59);
    InstrumentLeg_59.insert(LegProduct_59.getString());
    FIX::LegPutOrCall LegPutOrCall_59(1641611110);
    noLegs_0_2.set(LegPutOrCall_59);
    InstrumentLeg_59.insert(LegPutOrCall_59.getString());
    FIX::LegRatioQty LegRatioQty_59;
    LegRatioQty_59.setString("10080791");
    noLegs_0_2.set(LegRatioQty_59);
    InstrumentLeg_59.insert(LegRatioQty_59.getString());
    FIX::LegRedemptionDate LegRedemptionDate_59("LOCALMKTDATE_1927349442");
    noLegs_0_2.set(LegRedemptionDate_59);
    InstrumentLeg_59.insert(LegRedemptionDate_59.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_59("STRING_1495743219");
    noLegs_0_2.set(LegRepoCollateralSecurityType_59);
    InstrumentLeg_59.insert(LegRepoCollateralSecurityType_59.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_59;
    LegRepurchaseRate_59.setString("70.390000");
    noLegs_0_2.set(LegRepurchaseRate_59);
    InstrumentLeg_59.insert(LegRepurchaseRate_59.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_59(318372840);
    noLegs_0_2.set(LegRepurchaseTerm_59);
    InstrumentLeg_59.insert(LegRepurchaseTerm_59.getString());
    FIX::LegSecurityDesc LegSecurityDesc_59("STRING_1574835519");
    noLegs_0_2.set(LegSecurityDesc_59);
    InstrumentLeg_59.insert(LegSecurityDesc_59.getString());
    FIX::LegSecurityExchange LegSecurityExchange_59("EXCHANGE_1654114204");
    noLegs_0_2.set(LegSecurityExchange_59);
    InstrumentLeg_59.insert(LegSecurityExchange_59.getString());
    FIX::LegSecurityID LegSecurityID_59("STRING_1225158177");
    noLegs_0_2.set(LegSecurityID_59);
    InstrumentLeg_59.insert(LegSecurityID_59.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_59("STRING_1749940185");
    noLegs_0_2.set(LegSecurityIDSource_59);
    InstrumentLeg_59.insert(LegSecurityIDSource_59.getString());
    FIX::LegSecuritySubType LegSecuritySubType_59("STRING_2104734279");
    noLegs_0_2.set(LegSecuritySubType_59);
    InstrumentLeg_59.insert(LegSecuritySubType_59.getString());
    FIX::LegSecurityType LegSecurityType_59("STRING_189254077");
    noLegs_0_2.set(LegSecurityType_59);
    InstrumentLeg_59.insert(LegSecurityType_59.getString());
    FIX::LegSide LegSide_59('1');
    noLegs_0_2.set(LegSide_59);
    InstrumentLeg_59.insert(LegSide_59.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_59("STRING_953625714");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_59);
    InstrumentLeg_59.insert(LegStateOrProvinceOfIssue_59.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_59("CAN");
    noLegs_0_2.set(LegStrikeCurrency_59);
    InstrumentLeg_59.insert(LegStrikeCurrency_59.getString());
    FIX::LegStrikePrice LegStrikePrice_59;
    LegStrikePrice_59.setString("14528416");
    noLegs_0_2.set(LegStrikePrice_59);
    InstrumentLeg_59.insert(LegStrikePrice_59.getString());
    FIX::LegSymbol LegSymbol_59("STRING_535784440");
    noLegs_0_2.set(LegSymbol_59);
    InstrumentLeg_59.insert(LegSymbol_59.getString());
    FIX::LegSymbolSfx LegSymbolSfx_59("STRING_1238730930");
    noLegs_0_2.set(LegSymbolSfx_59);
    InstrumentLeg_59.insert(LegSymbolSfx_59.getString());
    FIX::LegTimeUnit LegTimeUnit_59("STRING_980521442");
    noLegs_0_2.set(LegTimeUnit_59);
    InstrumentLeg_59.insert(LegTimeUnit_59.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_59("STRING_967759802");
    noLegs_0_2.set(LegUnitOfMeasure_59);
    InstrumentLeg_59.insert(LegUnitOfMeasure_59.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
    LegUnitOfMeasureQty_59.setString("1137378");
    noLegs_0_2.set(LegUnitOfMeasureQty_59);
    InstrumentLeg_59.insert(LegUnitOfMeasureQty_59.getString());
    all_values.push_back(InstrumentLeg_59);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
      FIX::LegSecurityAltID LegSecurityAltID_116("STRING_609837303");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltID_116.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_116("STRING_1027691787");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltIDSource_116.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
      FIX::LegSecurityAltID LegSecurityAltID_117("STRING_456259735");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltID_117.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_117("STRING_486306446");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltIDSource_117.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
      FIX::LegSecurityAltID LegSecurityAltID_118("STRING_1608008791");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_118);
      LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltID_118.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_118("STRING_459581330");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_118);
      LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltIDSource_118.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_31;
  FIX::AttachmentPoint AttachmentPoint_31;
  AttachmentPoint_31.setString("30.230000");
  msg.set(AttachmentPoint_31);
  Instrument_31.insert(AttachmentPoint_31.getString());
  FIX::CFICode CFICode_31("STRING_1467038879");
  msg.set(CFICode_31);
  Instrument_31.insert(CFICode_31.getString());
  FIX::CPProgram CPProgram_31(2);
  msg.set(CPProgram_31);
  Instrument_31.insert(CPProgram_31.getString());
  FIX::CPRegType CPRegType_31("STRING_1971982129");
  msg.set(CPRegType_31);
  Instrument_31.insert(CPRegType_31.getString());
  FIX::CapPrice CapPrice_31;
  CapPrice_31.setString("12469046");
  msg.set(CapPrice_31);
  Instrument_31.insert(CapPrice_31.getString());
  FIX::ContractMultiplier ContractMultiplier_31;
  ContractMultiplier_31.setString("14494520");
  msg.set(ContractMultiplier_31);
  Instrument_31.insert(ContractMultiplier_31.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_31(1);
  msg.set(ContractMultiplierUnit_31);
  Instrument_31.insert(ContractMultiplierUnit_31.getString());
  FIX::ContractSettlMonth ContractSettlMonth_31("MONTHYEAR_1565277514");
  msg.set(ContractSettlMonth_31);
  Instrument_31.insert(ContractSettlMonth_31.getString());
  FIX::CountryOfIssue CountryOfIssue_31("COUNTRY_876803884");
  msg.set(CountryOfIssue_31);
  Instrument_31.insert(CountryOfIssue_31.getString());
  FIX::CouponPaymentDate CouponPaymentDate_31("LOCALMKTDATE_1134116076");
  msg.set(CouponPaymentDate_31);
  Instrument_31.insert(CouponPaymentDate_31.getString());
  FIX::CouponRate CouponRate_31;
  CouponRate_31.setString("20.430000");
  msg.set(CouponRate_31);
  Instrument_31.insert(CouponRate_31.getString());
  FIX::CreditRating CreditRating_31("STRING_479260421");
  msg.set(CreditRating_31);
  Instrument_31.insert(CreditRating_31.getString());
  FIX::DatedDate DatedDate_31("LOCALMKTDATE_1091366708");
  msg.set(DatedDate_31);
  Instrument_31.insert(DatedDate_31.getString());
  FIX::DetachmentPoint DetachmentPoint_31;
  DetachmentPoint_31.setString("61.200000");
  msg.set(DetachmentPoint_31);
  Instrument_31.insert(DetachmentPoint_31.getString());
  FIX::EncodedIssuer EncodedIssuer_31("DATA_1831301565");
  msg.set(EncodedIssuer_31);
  Instrument_31.insert(EncodedIssuer_31.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_31(2044992422);
  msg.set(EncodedIssuerLen_31);
  Instrument_31.insert(EncodedIssuerLen_31.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_31("DATA_32592206");
  msg.set(EncodedSecurityDesc_31);
  Instrument_31.insert(EncodedSecurityDesc_31.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_31(1194326707);
  msg.set(EncodedSecurityDescLen_31);
  Instrument_31.insert(EncodedSecurityDescLen_31.getString());
  FIX::ExerciseStyle ExerciseStyle_31(2);
  msg.set(ExerciseStyle_31);
  Instrument_31.insert(ExerciseStyle_31.getString());
  FIX::Factor Factor_31;
  Factor_31.setString("5683766");
  msg.set(Factor_31);
  Instrument_31.insert(Factor_31.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_31(false);
  msg.set(FlexProductEligibilityIndicator_31);
  Instrument_31.insert(FlexProductEligibilityIndicator_31.getString());
  FIX::FlexibleIndicator FlexibleIndicator_31(true);
  msg.set(FlexibleIndicator_31);
  Instrument_31.insert(FlexibleIndicator_31.getString());
  FIX::FloorPrice FloorPrice_31;
  FloorPrice_31.setString("15361364");
  msg.set(FloorPrice_31);
  Instrument_31.insert(FloorPrice_31.getString());
  FIX::FlowScheduleType FlowScheduleType_31(2);
  msg.set(FlowScheduleType_31);
  Instrument_31.insert(FlowScheduleType_31.getString());
  FIX::InstrRegistry InstrRegistry_31("STRING_2079328478");
  msg.set(InstrRegistry_31);
  Instrument_31.insert(InstrRegistry_31.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_31('2');
  msg.set(InstrmtAssignmentMethod_31);
  Instrument_31.insert(InstrmtAssignmentMethod_31.getString());
  FIX::InterestAccrualDate InterestAccrualDate_31("LOCALMKTDATE_1427003669");
  msg.set(InterestAccrualDate_31);
  Instrument_31.insert(InterestAccrualDate_31.getString());
  FIX::IssueDate IssueDate_31("LOCALMKTDATE_388104565");
  msg.set(IssueDate_31);
  Instrument_31.insert(IssueDate_31.getString());
  FIX::Issuer Issuer_31("STRING_484796550");
  msg.set(Issuer_31);
  Instrument_31.insert(Issuer_31.getString());
  FIX::ListMethod ListMethod_31(0);
  msg.set(ListMethod_31);
  Instrument_31.insert(ListMethod_31.getString());
  FIX::LocaleOfIssue LocaleOfIssue_31("STRING_847685896");
  msg.set(LocaleOfIssue_31);
  Instrument_31.insert(LocaleOfIssue_31.getString());
  FIX::MaturityDate MaturityDate_31("LOCALMKTDATE_1448699573");
  msg.set(MaturityDate_31);
  Instrument_31.insert(MaturityDate_31.getString());
  FIX::MaturityMonthYear MaturityMonthYear_31("MONTHYEAR_207084044");
  msg.set(MaturityMonthYear_31);
  Instrument_31.insert(MaturityMonthYear_31.getString());
  FIX::MaturityTime MaturityTime_31("TZTIMEONLY_801394689");
  msg.set(MaturityTime_31);
  Instrument_31.insert(MaturityTime_31.getString());
  FIX::MinPriceIncrement MinPriceIncrement_31;
  MinPriceIncrement_31.setString("12731980");
  msg.set(MinPriceIncrement_31);
  Instrument_31.insert(MinPriceIncrement_31.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_31;
  MinPriceIncrementAmount_31.setString("14539887");
  msg.set(MinPriceIncrementAmount_31);
  Instrument_31.insert(MinPriceIncrementAmount_31.getString());
  FIX::NTPositionLimit NTPositionLimit_31(103363053);
  msg.set(NTPositionLimit_31);
  Instrument_31.insert(NTPositionLimit_31.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_31;
  NotionalPercentageOutstanding_31.setString("99.270000");
  msg.set(NotionalPercentageOutstanding_31);
  Instrument_31.insert(NotionalPercentageOutstanding_31.getString());
  FIX::OptAttribute OptAttribute_31('8');
  msg.set(OptAttribute_31);
  Instrument_31.insert(OptAttribute_31.getString());
  FIX::OptPayoutAmount OptPayoutAmount_31;
  OptPayoutAmount_31.setString("9801669");
  msg.set(OptPayoutAmount_31);
  Instrument_31.insert(OptPayoutAmount_31.getString());
  FIX::OptPayoutType OptPayoutType_31(3);
  msg.set(OptPayoutType_31);
  Instrument_31.insert(OptPayoutType_31.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_31;
  OriginalNotionalPercentageOutstanding_31.setString("46.270000");
  msg.set(OriginalNotionalPercentageOutstanding_31);
  Instrument_31.insert(OriginalNotionalPercentageOutstanding_31.getString());
  FIX::Pool Pool_31("STRING_1459427359");
  msg.set(Pool_31);
  Instrument_31.insert(Pool_31.getString());
  FIX::PositionLimit PositionLimit_31(831199064);
  msg.set(PositionLimit_31);
  Instrument_31.insert(PositionLimit_31.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_31("STRING_STD");
  msg.set(PriceQuoteMethod_31);
  Instrument_31.insert(PriceQuoteMethod_31.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_31("STRING_1143245276");
  msg.set(PriceUnitOfMeasure_31);
  Instrument_31.insert(PriceUnitOfMeasure_31.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_31;
  PriceUnitOfMeasureQty_31.setString("7287078");
  msg.set(PriceUnitOfMeasureQty_31);
  Instrument_31.insert(PriceUnitOfMeasureQty_31.getString());
  FIX::Product Product_33(9);
  msg.set(Product_33);
  Instrument_31.insert(Product_33.getString());
  FIX::ProductComplex ProductComplex_31("STRING_190088335");
  msg.set(ProductComplex_31);
  Instrument_31.insert(ProductComplex_31.getString());
  FIX::PutOrCall PutOrCall_31(1);
  msg.set(PutOrCall_31);
  Instrument_31.insert(PutOrCall_31.getString());
  FIX::RedemptionDate RedemptionDate_31("LOCALMKTDATE_800425952");
  msg.set(RedemptionDate_31);
  Instrument_31.insert(RedemptionDate_31.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_31("STRING_475662325");
  msg.set(RepoCollateralSecurityType_31);
  Instrument_31.insert(RepoCollateralSecurityType_31.getString());
  FIX::RepurchaseRate RepurchaseRate_31;
  RepurchaseRate_31.setString("28.550000");
  msg.set(RepurchaseRate_31);
  Instrument_31.insert(RepurchaseRate_31.getString());
  FIX::RepurchaseTerm RepurchaseTerm_31(189078753);
  msg.set(RepurchaseTerm_31);
  Instrument_31.insert(RepurchaseTerm_31.getString());
  FIX::RestructuringType RestructuringType_31("STRING_XR");
  msg.set(RestructuringType_31);
  Instrument_31.insert(RestructuringType_31.getString());
  FIX::SecurityDesc SecurityDesc_31("STRING_46807685");
  msg.set(SecurityDesc_31);
  Instrument_31.insert(SecurityDesc_31.getString());
  FIX::SecurityExchange SecurityExchange_31("EXCHANGE_187568856");
  msg.set(SecurityExchange_31);
  Instrument_31.insert(SecurityExchange_31.getString());
  FIX::SecurityGroup SecurityGroup_31("STRING_154494228");
  msg.set(SecurityGroup_31);
  Instrument_31.insert(SecurityGroup_31.getString());
  FIX::SecurityID SecurityID_31("STRING_434912251");
  msg.set(SecurityID_31);
  Instrument_31.insert(SecurityID_31.getString());
  FIX::SecurityIDSource SecurityIDSource_31("STRING_L");
  msg.set(SecurityIDSource_31);
  Instrument_31.insert(SecurityIDSource_31.getString());
  FIX::SecurityStatus SecurityStatus_31("STRING_1");
  msg.set(SecurityStatus_31);
  Instrument_31.insert(SecurityStatus_31.getString());
  FIX::SecuritySubType SecuritySubType_32("STRING_1282598147");
  msg.set(SecuritySubType_32);
  Instrument_31.insert(SecuritySubType_32.getString());
  FIX::SecurityType SecurityType_33("STRING_?");
  msg.set(SecurityType_33);
  Instrument_31.insert(SecurityType_33.getString());
  FIX::Seniority Seniority_31("STRING_SD");
  msg.set(Seniority_31);
  Instrument_31.insert(Seniority_31.getString());
  FIX::SettlMethod SettlMethod_31('C');
  msg.set(SettlMethod_31);
  Instrument_31.insert(SettlMethod_31.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_31("STRING_1246779387");
  msg.set(SettleOnOpenFlag_31);
  Instrument_31.insert(SettleOnOpenFlag_31.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_31("STRING_555612154");
  msg.set(StateOrProvinceOfIssue_31);
  Instrument_31.insert(StateOrProvinceOfIssue_31.getString());
  FIX::StrikeCurrency StrikeCurrency_31("JPY");
  msg.set(StrikeCurrency_31);
  Instrument_31.insert(StrikeCurrency_31.getString());
  FIX::StrikeMultiplier StrikeMultiplier_31;
  StrikeMultiplier_31.setString("14273947");
  msg.set(StrikeMultiplier_31);
  Instrument_31.insert(StrikeMultiplier_31.getString());
  FIX::StrikePrice StrikePrice_31;
  StrikePrice_31.setString("10200391");
  msg.set(StrikePrice_31);
  Instrument_31.insert(StrikePrice_31.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_31(1);
  msg.set(StrikePriceBoundaryMethod_31);
  Instrument_31.insert(StrikePriceBoundaryMethod_31.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_31;
  StrikePriceBoundaryPrecision_31.setString("57.180000");
  msg.set(StrikePriceBoundaryPrecision_31);
  Instrument_31.insert(StrikePriceBoundaryPrecision_31.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_31(3);
  msg.set(StrikePriceDeterminationMethod_31);
  Instrument_31.insert(StrikePriceDeterminationMethod_31.getString());
  FIX::StrikeValue StrikeValue_31;
  StrikeValue_31.setString("4235270");
  msg.set(StrikeValue_31);
  Instrument_31.insert(StrikeValue_31.getString());
  FIX::Symbol Symbol_31("STRING_994102818");
  msg.set(Symbol_31);
  Instrument_31.insert(Symbol_31.getString());
  FIX::SymbolSfx SymbolSfx_31("STRING_CD");
  msg.set(SymbolSfx_31);
  Instrument_31.insert(SymbolSfx_31.getString());
  FIX::TimeUnit TimeUnit_31("STRING_Min");
  msg.set(TimeUnit_31);
  Instrument_31.insert(TimeUnit_31.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_31(1);
  msg.set(UnderlyingPriceDeterminationMethod_31);
  Instrument_31.insert(UnderlyingPriceDeterminationMethod_31.getString());
  FIX::UnitOfMeasure UnitOfMeasure_31("STRING_Bu");
  msg.set(UnitOfMeasure_31);
  Instrument_31.insert(UnitOfMeasure_31.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_31;
  UnitOfMeasureQty_31.setString("10838095");
  msg.set(UnitOfMeasureQty_31);
  Instrument_31.insert(UnitOfMeasureQty_31.getString());
  FIX::ValuationMethod ValuationMethod_31("STRING_FUT");
  msg.set(ValuationMethod_31);
  Instrument_31.insert(ValuationMethod_31.getString());
  all_values.push_back(Instrument_31);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_64;
    FIX::ComplexEventCondition ComplexEventCondition_64(2);
    noComplexEvents_0_0.set(ComplexEventCondition_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventCondition_64.getString());
    FIX::ComplexEventPrice ComplexEventPrice_64;
    ComplexEventPrice_64.setString("681731");
    noComplexEvents_0_0.set(ComplexEventPrice_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPrice_64.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_64(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryMethod_64.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_64;
    ComplexEventPriceBoundaryPrecision_64.setString("0.910000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryPrecision_64.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_64(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceTimeType_64.getString());
    FIX::ComplexEventType ComplexEventType_64(8);
    noComplexEvents_0_0.set(ComplexEventType_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventType_64.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_64;
    ComplexOptPayoutAmount_64.setString("16804923");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexOptPayoutAmount_64.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_64);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_135;
      FIX::ComplexEventEndDate ComplexEventEndDate_135(FIX::UTCTIMESTAMP(9, 16, 31, 21, 12, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_135);
      ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventEndDate_135.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_135(FIX::UTCTIMESTAMP(22, 16, 29, 12, 11, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_135);
      ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventStartDate_135.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_135);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
        FIX::ComplexEventEndTime ComplexEventEndTime_271(FIX::UTCTIMEONLY(2, 15, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_271);
        ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventEndTime_271.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_271(FIX::UTCTIMEONLY(21, 36, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_271);
        ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventStartTime_271.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_272;
        FIX::ComplexEventEndTime ComplexEventEndTime_272(FIX::UTCTIMEONLY(6, 37, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_272);
        ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventEndTime_272.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_272(FIX::UTCTIMEONLY(3, 28, 52));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_272);
        ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventStartTime_272.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_272);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_273;
        FIX::ComplexEventEndTime ComplexEventEndTime_273(FIX::UTCTIMEONLY(5, 9, 40));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_273);
        ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventEndTime_273.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_273(FIX::UTCTIMEONLY(20, 38, 12));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_273);
        ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventStartTime_273.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_273);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_58;
    FIX::EventDate EventDate_58("LOCALMKTDATE_240533626");
    noEvents_0_0.set(EventDate_58);
    EvntGrp_NoEvents_58.insert(EventDate_58.getString());
    FIX::EventPx EventPx_58;
    EventPx_58.setString("18120286");
    noEvents_0_0.set(EventPx_58);
    EvntGrp_NoEvents_58.insert(EventPx_58.getString());
    FIX::EventText EventText_58("STRING_1055145471");
    noEvents_0_0.set(EventText_58);
    EvntGrp_NoEvents_58.insert(EventText_58.getString());
    FIX::EventTime EventTime_58(FIX::UTCTIMESTAMP(13, 42, 56, 11, 10, 2010));
    noEvents_0_0.set(EventTime_58);
    EvntGrp_NoEvents_58.insert(EventTime_58.getString());
    FIX::EventType EventType_58(16);
    noEvents_0_0.set(EventType_58);
    EvntGrp_NoEvents_58.insert(EventType_58.getString());
    all_values.push_back(EvntGrp_NoEvents_58);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_59;
    FIX::EventDate EventDate_59("LOCALMKTDATE_1903947095");
    noEvents_0_1.set(EventDate_59);
    EvntGrp_NoEvents_59.insert(EventDate_59.getString());
    FIX::EventPx EventPx_59;
    EventPx_59.setString("20039387");
    noEvents_0_1.set(EventPx_59);
    EvntGrp_NoEvents_59.insert(EventPx_59.getString());
    FIX::EventText EventText_59("STRING_958013458");
    noEvents_0_1.set(EventText_59);
    EvntGrp_NoEvents_59.insert(EventText_59.getString());
    FIX::EventTime EventTime_59(FIX::UTCTIMESTAMP(2, 27, 56, 22, 7, 2016));
    noEvents_0_1.set(EventTime_59);
    EvntGrp_NoEvents_59.insert(EventTime_59.getString());
    FIX::EventType EventType_59(16);
    noEvents_0_1.set(EventType_59);
    EvntGrp_NoEvents_59.insert(EventType_59.getString());
    all_values.push_back(EvntGrp_NoEvents_59);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_56;
    FIX::InstrumentPartyID InstrumentPartyID_56("STRING_1559051097");
    noInstrumentParties_0_0.set(InstrumentPartyID_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyID_56.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_56('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyIDSource_56.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_56(1697311272);
    noInstrumentParties_0_0.set(InstrumentPartyRole_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyRole_56.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_56);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
      FIX::InstrumentPartySubID InstrumentPartySubID_109("STRING_1667295540");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubID_109.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_109(935711562);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubIDType_109.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_57;
    FIX::InstrumentPartyID InstrumentPartyID_57("STRING_767065131");
    noInstrumentParties_0_1.set(InstrumentPartyID_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyID_57.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_57('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyIDSource_57.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_57(1176245188);
    noInstrumentParties_0_1.set(InstrumentPartyRole_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyRole_57.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_57);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
      FIX::InstrumentPartySubID InstrumentPartySubID_110("STRING_36810982");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_110);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubID_110.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_110(1066074220);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_110);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubIDType_110.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
      FIX::InstrumentPartySubID InstrumentPartySubID_111("STRING_92681731");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_111);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubID_111.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_111(961291744);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_111);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubIDType_111.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_54;
    FIX::SecurityAltID SecurityAltID_54("STRING_1225508234");
    noSecurityAltID_0_0.set(SecurityAltID_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltID_54.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_54("STRING_759859073");
    noSecurityAltID_0_0.set(SecurityAltIDSource_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltIDSource_54.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_62;
  FIX::SecurityXML SecurityXML_63("XMLDATA_1854595432");
  msg.set(SecurityXML_63);
  FIX::SecurityXMLLen SecurityXMLLen_31(1200438802);
  msg.set(SecurityXMLLen_31);
  FIX::SecurityXMLSchema SecurityXMLSchema_31("STRING_516322520");
  msg.set(SecurityXMLSchema_31);
  SecurityXML_62.insert(SecurityXMLSchema_31.getString());
  all_values.push_back(SecurityXML_62);
  all_compo_names.insert("SecurityXML");

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    FIX::Currency Currency_26("USD");
    noMDEntries_0_0.set(Currency_26);
    MDFullGrp_NoMDEntries_0.insert(Currency_26.getString());
    FIX::DealingCapacity DealingCapacity_1('P');
    noMDEntries_0_0.set(DealingCapacity_1);
    MDFullGrp_NoMDEntries_0.insert(DealingCapacity_1.getString());
    FIX::DeskID DeskID_1("STRING_673050700");
    noMDEntries_0_0.set(DeskID_1);
    MDFullGrp_NoMDEntries_0.insert(DeskID_1.getString());
    FIX::EncodedText EncodedText_48("DATA_449867778");
    noMDEntries_0_0.set(EncodedText_48);
    MDFullGrp_NoMDEntries_0.insert(EncodedText_48.getString());
    FIX::EncodedTextLen EncodedTextLen_48(687705654);
    noMDEntries_0_0.set(EncodedTextLen_48);
    MDFullGrp_NoMDEntries_0.insert(EncodedTextLen_48.getString());
    FIX::ExecInst ExecInst_3("MULTIPLECHARVALUE_U");
    noMDEntries_0_0.set(ExecInst_3);
    MDFullGrp_NoMDEntries_0.insert(ExecInst_3.getString());
    FIX::ExpireDate ExpireDate_4("LOCALMKTDATE_1405538374");
    noMDEntries_0_0.set(ExpireDate_4);
    MDFullGrp_NoMDEntries_0.insert(ExpireDate_4.getString());
    FIX::ExpireTime ExpireTime_5(FIX::UTCTIMESTAMP(18, 23, 25, 23, 3, 2011));
    noMDEntries_0_0.set(ExpireTime_5);
    MDFullGrp_NoMDEntries_0.insert(ExpireTime_5.getString());
    FIX::FirstPx FirstPx_1;
    FirstPx_1.setString("2863865");
    noMDEntries_0_0.set(FirstPx_1);
    MDFullGrp_NoMDEntries_0.insert(FirstPx_1.getString());
    FIX::HaltReasonInt HaltReasonInt_1(4);
    noMDEntries_0_0.set(HaltReasonInt_1);
    FIX::HighPx HighPx_1;
    HighPx_1.setString("15521546");
    noMDEntries_0_0.set(HighPx_1);
    MDFullGrp_NoMDEntries_0.insert(HighPx_1.getString());
    FIX::LastPx LastPx_10;
    LastPx_10.setString("14626316");
    noMDEntries_0_0.set(LastPx_10);
    MDFullGrp_NoMDEntries_0.insert(LastPx_10.getString());
    FIX::LocationID LocationID_1("STRING_635361371");
    noMDEntries_0_0.set(LocationID_1);
    MDFullGrp_NoMDEntries_0.insert(LocationID_1.getString());
    FIX::LotType LotType_12('3');
    noMDEntries_0_0.set(LotType_12);
    MDFullGrp_NoMDEntries_0.insert(LotType_12.getString());
    FIX::LowPx LowPx_1;
    LowPx_1.setString("3812222");
    noMDEntries_0_0.set(LowPx_1);
    MDFullGrp_NoMDEntries_0.insert(LowPx_1.getString());
    FIX::MDEntryBuyer MDEntryBuyer_1("STRING_728043102");
    noMDEntries_0_0.set(MDEntryBuyer_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryBuyer_1.getString());
    FIX::MDEntryDate MDEntryDate_1(FIX::UTCDATEONLY(19, 10, 2014));
    noMDEntries_0_0.set(MDEntryDate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryDate_1.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_1;
    MDEntryForwardPoints_1.setString("16876355");
    noMDEntries_0_0.set(MDEntryForwardPoints_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryForwardPoints_1.getString());
    FIX::MDEntryID MDEntryID_1("STRING_1006506491");
    noMDEntries_0_0.set(MDEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryID_1.getString());
    FIX::MDEntryOriginator MDEntryOriginator_1("STRING_1678955368");
    noMDEntries_0_0.set(MDEntryOriginator_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryOriginator_1.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_1(1251202392);
    noMDEntries_0_0.set(MDEntryPositionNo_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPositionNo_1.getString());
    FIX::MDEntryPx MDEntryPx_1;
    MDEntryPx_1.setString("10174751");
    noMDEntries_0_0.set(MDEntryPx_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPx_1.getString());
    FIX::MDEntrySeller MDEntrySeller_1("STRING_960926211");
    noMDEntries_0_0.set(MDEntrySeller_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySeller_1.getString());
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("3405586");
    noMDEntries_0_0.set(MDEntrySize_3);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySize_3.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_1;
    MDEntrySpotRate_1.setString("16905258");
    noMDEntries_0_0.set(MDEntrySpotRate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySpotRate_1.getString());
    FIX::MDEntryTime MDEntryTime_1(FIX::UTCTIMEONLY(6, 6, 36));
    noMDEntries_0_0.set(MDEntryTime_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryTime_1.getString());
    FIX::MDEntryType MDEntryType_3('R');
    noMDEntries_0_0.set(MDEntryType_3);
    MDFullGrp_NoMDEntries_0.insert(MDEntryType_3.getString());
    FIX::MDMkt MDMkt_1("EXCHANGE_1406054500");
    noMDEntries_0_0.set(MDMkt_1);
    MDFullGrp_NoMDEntries_0.insert(MDMkt_1.getString());
    FIX::MDOriginType MDOriginType_1(2);
    noMDEntries_0_0.set(MDOriginType_1);
    MDFullGrp_NoMDEntries_0.insert(MDOriginType_1.getString());
    FIX::MDPriceLevel MDPriceLevel_1(775729496);
    noMDEntries_0_0.set(MDPriceLevel_1);
    MDFullGrp_NoMDEntries_0.insert(MDPriceLevel_1.getString());
    FIX::MDQuoteType MDQuoteType_2(4);
    noMDEntries_0_0.set(MDQuoteType_2);
    MDFullGrp_NoMDEntries_0.insert(MDQuoteType_2.getString());
    FIX::MinQty MinQty_3;
    MinQty_3.setString("9226406");
    noMDEntries_0_0.set(MinQty_3);
    MDFullGrp_NoMDEntries_0.insert(MinQty_3.getString());
    FIX::NumberOfOrders NumberOfOrders_1(1198735033);
    noMDEntries_0_0.set(NumberOfOrders_1);
    MDFullGrp_NoMDEntries_0.insert(NumberOfOrders_1.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_2("MULTIPLECHARVALUE_5");
    noMDEntries_0_0.set(OpenCloseSettlFlag_2);
    MDFullGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_2.getString());
    FIX::OrdType OrdType_27('5');
    noMDEntries_0_0.set(OrdType_27);
    MDFullGrp_NoMDEntries_0.insert(OrdType_27.getString());
    FIX::OrderCapacity OrderCapacity_6('I');
    noMDEntries_0_0.set(OrderCapacity_6);
    MDFullGrp_NoMDEntries_0.insert(OrderCapacity_6.getString());
    FIX::OrderID OrderID_24("STRING_358263983");
    noMDEntries_0_0.set(OrderID_24);
    MDFullGrp_NoMDEntries_0.insert(OrderID_24.getString());
    FIX::PriceDelta PriceDelta_2;
    PriceDelta_2.setString("17617533");
    noMDEntries_0_0.set(PriceDelta_2);
    MDFullGrp_NoMDEntries_0.insert(PriceDelta_2.getString());
    FIX::PriceType PriceType_23(1);
    noMDEntries_0_0.set(PriceType_23);
    MDFullGrp_NoMDEntries_0.insert(PriceType_23.getString());
    FIX::QuoteCondition QuoteCondition_1("MULTIPLESTRINGVALUE_t");
    noMDEntries_0_0.set(QuoteCondition_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteCondition_1.getString());
    FIX::QuoteEntryID QuoteEntryID_1("STRING_342312806");
    noMDEntries_0_0.set(QuoteEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteEntryID_1.getString());
    FIX::RptSeq RptSeq_2(447661887);
    noMDEntries_0_0.set(RptSeq_2);
    MDFullGrp_NoMDEntries_0.insert(RptSeq_2.getString());
    FIX::Scope Scope_2("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(Scope_2);
    MDFullGrp_NoMDEntries_0.insert(Scope_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_20("STRING_148380495");
    noMDEntries_0_0.set(SecondaryOrderID_20);
    MDFullGrp_NoMDEntries_0.insert(SecondaryOrderID_20.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_1(12);
    noMDEntries_0_0.set(SecurityTradingStatus_1);
    MDFullGrp_NoMDEntries_0.insert(SecurityTradingStatus_1.getString());
    FIX::SellerDays SellerDays_1(112678212);
    noMDEntries_0_0.set(SellerDays_1);
    MDFullGrp_NoMDEntries_0.insert(SellerDays_1.getString());
    FIX::SettlCurrency SettlCurrency_10("EUR");
    noMDEntries_0_0.set(SettlCurrency_10);
    MDFullGrp_NoMDEntries_0.insert(SettlCurrency_10.getString());
    FIX::SettlDate SettlDate_21("LOCALMKTDATE_1363880604");
    noMDEntries_0_0.set(SettlDate_21);
    MDFullGrp_NoMDEntries_0.insert(SettlDate_21.getString());
    FIX::SettlType SettlType_15("STRING_5");
    noMDEntries_0_0.set(SettlType_15);
    MDFullGrp_NoMDEntries_0.insert(SettlType_15.getString());
    FIX::Text Text_48("STRING_2102692666");
    noMDEntries_0_0.set(Text_48);
    MDFullGrp_NoMDEntries_0.insert(Text_48.getString());
    FIX::TickDirection TickDirection_1('0');
    noMDEntries_0_0.set(TickDirection_1);
    MDFullGrp_NoMDEntries_0.insert(TickDirection_1.getString());
    FIX::TimeInForce TimeInForce_26('5');
    noMDEntries_0_0.set(TimeInForce_26);
    MDFullGrp_NoMDEntries_0.insert(TimeInForce_26.getString());
    FIX::TradeCondition TradeCondition_1("MULTIPLESTRINGVALUE_0");
    noMDEntries_0_0.set(TradeCondition_1);
    MDFullGrp_NoMDEntries_0.insert(TradeCondition_1.getString());
    FIX::TradeVolume TradeVolume_1;
    TradeVolume_1.setString("5852199");
    noMDEntries_0_0.set(TradeVolume_1);
    MDFullGrp_NoMDEntries_0.insert(TradeVolume_1.getString());
    FIX::TradingSessionID TradingSessionID_34("STRING_2");
    noMDEntries_0_0.set(TradingSessionID_34);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionID_34.getString());
    FIX::TradingSessionSubID TradingSessionSubID_34("STRING_4");
    noMDEntries_0_0.set(TradingSessionSubID_34);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionSubID_34.getString());
    FIX::TrdType TrdType_4(13);
    noMDEntries_0_0.set(TrdType_4);
    MDFullGrp_NoMDEntries_0.insert(TrdType_4.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_0);
    all_compo_names.insert("MDFullGrp.NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_49;
      FIX::PartyID PartyID_49("STRING_1373322615");
      noPartyIDs_0_1_0.set(PartyID_49);
      Parties_NoPartyIDs_49.insert(PartyID_49.getString());
      FIX::PartyIDSource PartyIDSource_49('3');
      noPartyIDs_0_1_0.set(PartyIDSource_49);
      Parties_NoPartyIDs_49.insert(PartyIDSource_49.getString());
      FIX::PartyRole PartyRole_49(25);
      noPartyIDs_0_1_0.set(PartyRole_49);
      Parties_NoPartyIDs_49.insert(PartyRole_49.getString());
      all_values.push_back(Parties_NoPartyIDs_49);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_107;
        FIX::PartySubID PartySubID_107("STRING_284736655");
        noPartySubIDs_0_0_2_0.set(PartySubID_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubID_107.getString());
        FIX::PartySubIDType PartySubIDType_107(30);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubIDType_107.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_107);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_108;
        FIX::PartySubID PartySubID_108("STRING_1274871641");
        noPartySubIDs_0_0_2_1.set(PartySubID_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubID_108.getString());
        FIX::PartySubIDType PartySubIDType_108(10);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubIDType_108.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_108);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_11;
      FIX::RateSource RateSource_16(1);
      noRateSources_0_1_0.set(RateSource_16);
      RateSource_NoRateSources_11.insert(RateSource_16.getString());
      FIX::RateSourceType RateSourceType_11(1);
      noRateSources_0_1_0.set(RateSourceType_11);
      RateSource_NoRateSources_11.insert(RateSourceType_11.getString());
      FIX::ReferencePage ReferencePage_11("STRING_1181810596");
      noRateSources_0_1_0.set(ReferencePage_11);
      RateSource_NoRateSources_11.insert(ReferencePage_11.getString());
      all_values.push_back(RateSource_NoRateSources_11);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_12;
      FIX::RateSource RateSource_17(99);
      noRateSources_0_1_1.set(RateSource_17);
      RateSource_NoRateSources_12.insert(RateSource_17.getString());
      FIX::RateSourceType RateSourceType_12(0);
      noRateSources_0_1_1.set(RateSourceType_12);
      RateSource_NoRateSources_12.insert(RateSourceType_12.getString());
      FIX::ReferencePage ReferencePage_12("STRING_1754336933");
      noRateSources_0_1_1.set(ReferencePage_12);
      RateSource_NoRateSources_12.insert(ReferencePage_12.getString());
      all_values.push_back(RateSource_NoRateSources_12);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_1;
      FIX::MDSecSize MDSecSize_1;
      MDSecSize_1.setString("8435038");
      noOfSecSizes_0_1_0.set(MDSecSize_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSize_1.getString());
      FIX::MDSecSizeType MDSecSizeType_1(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSizeType_1.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_1);
      all_compo_names.insert("SecSizesGrp.NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_13;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_13("CAN");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveCurrency_13.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_13("STRING_SONIA");
    noMDEntries_0_0.set(BenchmarkCurveName_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveName_13.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_13("STRING_412116425");
    noMDEntries_0_0.set(BenchmarkCurvePoint_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurvePoint_13.getString());
    FIX::BenchmarkPrice BenchmarkPrice_13;
    BenchmarkPrice_13.setString("19404792");
    noMDEntries_0_0.set(BenchmarkPrice_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPrice_13.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_13(640367714);
    noMDEntries_0_0.set(BenchmarkPriceType_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPriceType_13.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_13("STRING_2127520670");
    noMDEntries_0_0.set(BenchmarkSecurityID_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityID_13.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_13("STRING_1158998657");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityIDSource_13.getString());
    FIX::Spread Spread_13;
    Spread_13.setString("12255876");
    noMDEntries_0_0.set(Spread_13);
    SpreadOrBenchmarkCurveData_13.insert(Spread_13.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_13);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // YieldData
    multiset<string> YieldData_8;
    FIX::Yield Yield_8;
    Yield_8.setString("48.050000");
    noMDEntries_0_0.set(Yield_8);
    YieldData_8.insert(Yield_8.getString());
    FIX::YieldCalcDate YieldCalcDate_8("LOCALMKTDATE_1046366733");
    noMDEntries_0_0.set(YieldCalcDate_8);
    YieldData_8.insert(YieldCalcDate_8.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_8("LOCALMKTDATE_1683343410");
    noMDEntries_0_0.set(YieldRedemptionDate_8);
    YieldData_8.insert(YieldRedemptionDate_8.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_8;
    YieldRedemptionPrice_8.setString("15848634");
    noMDEntries_0_0.set(YieldRedemptionPrice_8);
    YieldData_8.insert(YieldRedemptionPrice_8.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_8(272205701);
    noMDEntries_0_0.set(YieldRedemptionPriceType_8);
    YieldData_8.insert(YieldRedemptionPriceType_8.getString());
    FIX::YieldType YieldType_8("STRING_ANNUAL");
    noMDEntries_0_0.set(YieldType_8);
    YieldData_8.insert(YieldType_8.getString());
    all_values.push_back(YieldData_8);
    all_compo_names.insert("YieldData");

    msg.addGroup(noMDEntries_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_1;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_1;
    FIX::Currency Currency_27("USD");
    noMDEntries_0_1.set(Currency_27);
    MDFullGrp_NoMDEntries_1.insert(Currency_27.getString());
    FIX::DealingCapacity DealingCapacity_2('A');
    noMDEntries_0_1.set(DealingCapacity_2);
    MDFullGrp_NoMDEntries_1.insert(DealingCapacity_2.getString());
    FIX::DeskID DeskID_2("STRING_709868236");
    noMDEntries_0_1.set(DeskID_2);
    MDFullGrp_NoMDEntries_1.insert(DeskID_2.getString());
    FIX::EncodedText EncodedText_49("DATA_1695557004");
    noMDEntries_0_1.set(EncodedText_49);
    MDFullGrp_NoMDEntries_1.insert(EncodedText_49.getString());
    FIX::EncodedTextLen EncodedTextLen_49(1942224423);
    noMDEntries_0_1.set(EncodedTextLen_49);
    MDFullGrp_NoMDEntries_1.insert(EncodedTextLen_49.getString());
    FIX::ExecInst ExecInst_4("MULTIPLECHARVALUE_Z");
    noMDEntries_0_1.set(ExecInst_4);
    MDFullGrp_NoMDEntries_1.insert(ExecInst_4.getString());
    FIX::ExpireDate ExpireDate_5("LOCALMKTDATE_437214701");
    noMDEntries_0_1.set(ExpireDate_5);
    MDFullGrp_NoMDEntries_1.insert(ExpireDate_5.getString());
    FIX::ExpireTime ExpireTime_6(FIX::UTCTIMESTAMP(7, 32, 41, 12, 7, 2007));
    noMDEntries_0_1.set(ExpireTime_6);
    MDFullGrp_NoMDEntries_1.insert(ExpireTime_6.getString());
    FIX::FirstPx FirstPx_2;
    FirstPx_2.setString("16603879");
    noMDEntries_0_1.set(FirstPx_2);
    MDFullGrp_NoMDEntries_1.insert(FirstPx_2.getString());
    FIX::HaltReasonInt HaltReasonInt_2(0);
    noMDEntries_0_1.set(HaltReasonInt_2);
    FIX::HighPx HighPx_2;
    HighPx_2.setString("6422711");
    noMDEntries_0_1.set(HighPx_2);
    MDFullGrp_NoMDEntries_1.insert(HighPx_2.getString());
    FIX::LastPx LastPx_11;
    LastPx_11.setString("5963164");
    noMDEntries_0_1.set(LastPx_11);
    MDFullGrp_NoMDEntries_1.insert(LastPx_11.getString());
    FIX::LocationID LocationID_2("STRING_1700374259");
    noMDEntries_0_1.set(LocationID_2);
    MDFullGrp_NoMDEntries_1.insert(LocationID_2.getString());
    FIX::LotType LotType_13('2');
    noMDEntries_0_1.set(LotType_13);
    MDFullGrp_NoMDEntries_1.insert(LotType_13.getString());
    FIX::LowPx LowPx_2;
    LowPx_2.setString("12366841");
    noMDEntries_0_1.set(LowPx_2);
    MDFullGrp_NoMDEntries_1.insert(LowPx_2.getString());
    FIX::MDEntryBuyer MDEntryBuyer_2("STRING_1680411282");
    noMDEntries_0_1.set(MDEntryBuyer_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryBuyer_2.getString());
    FIX::MDEntryDate MDEntryDate_2(FIX::UTCDATEONLY(25, 12, 2004));
    noMDEntries_0_1.set(MDEntryDate_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryDate_2.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_2;
    MDEntryForwardPoints_2.setString("19981315");
    noMDEntries_0_1.set(MDEntryForwardPoints_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryForwardPoints_2.getString());
    FIX::MDEntryID MDEntryID_2("STRING_123472232");
    noMDEntries_0_1.set(MDEntryID_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryID_2.getString());
    FIX::MDEntryOriginator MDEntryOriginator_2("STRING_765354261");
    noMDEntries_0_1.set(MDEntryOriginator_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryOriginator_2.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_2(619992915);
    noMDEntries_0_1.set(MDEntryPositionNo_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPositionNo_2.getString());
    FIX::MDEntryPx MDEntryPx_2;
    MDEntryPx_2.setString("7492801");
    noMDEntries_0_1.set(MDEntryPx_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPx_2.getString());
    FIX::MDEntrySeller MDEntrySeller_2("STRING_1186039624");
    noMDEntries_0_1.set(MDEntrySeller_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySeller_2.getString());
    FIX::MDEntrySize MDEntrySize_4;
    MDEntrySize_4.setString("16740746");
    noMDEntries_0_1.set(MDEntrySize_4);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySize_4.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_2;
    MDEntrySpotRate_2.setString("14591483");
    noMDEntries_0_1.set(MDEntrySpotRate_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySpotRate_2.getString());
    FIX::MDEntryTime MDEntryTime_2(FIX::UTCTIMEONLY(17, 35, 1));
    noMDEntries_0_1.set(MDEntryTime_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryTime_2.getString());
    FIX::MDEntryType MDEntryType_4('2');
    noMDEntries_0_1.set(MDEntryType_4);
    MDFullGrp_NoMDEntries_1.insert(MDEntryType_4.getString());
    FIX::MDMkt MDMkt_2("EXCHANGE_650376811");
    noMDEntries_0_1.set(MDMkt_2);
    MDFullGrp_NoMDEntries_1.insert(MDMkt_2.getString());
    FIX::MDOriginType MDOriginType_2(1);
    noMDEntries_0_1.set(MDOriginType_2);
    MDFullGrp_NoMDEntries_1.insert(MDOriginType_2.getString());
    FIX::MDPriceLevel MDPriceLevel_2(10084067);
    noMDEntries_0_1.set(MDPriceLevel_2);
    MDFullGrp_NoMDEntries_1.insert(MDPriceLevel_2.getString());
    FIX::MDQuoteType MDQuoteType_3(1);
    noMDEntries_0_1.set(MDQuoteType_3);
    MDFullGrp_NoMDEntries_1.insert(MDQuoteType_3.getString());
    FIX::MinQty MinQty_4;
    MinQty_4.setString("15935327");
    noMDEntries_0_1.set(MinQty_4);
    MDFullGrp_NoMDEntries_1.insert(MinQty_4.getString());
    FIX::NumberOfOrders NumberOfOrders_2(814568604);
    noMDEntries_0_1.set(NumberOfOrders_2);
    MDFullGrp_NoMDEntries_1.insert(NumberOfOrders_2.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_3("MULTIPLECHARVALUE_3");
    noMDEntries_0_1.set(OpenCloseSettlFlag_3);
    MDFullGrp_NoMDEntries_1.insert(OpenCloseSettlFlag_3.getString());
    FIX::OrdType OrdType_28('I');
    noMDEntries_0_1.set(OrdType_28);
    MDFullGrp_NoMDEntries_1.insert(OrdType_28.getString());
    FIX::OrderCapacity OrderCapacity_7('R');
    noMDEntries_0_1.set(OrderCapacity_7);
    MDFullGrp_NoMDEntries_1.insert(OrderCapacity_7.getString());
    FIX::OrderID OrderID_25("STRING_552970368");
    noMDEntries_0_1.set(OrderID_25);
    MDFullGrp_NoMDEntries_1.insert(OrderID_25.getString());
    FIX::PriceDelta PriceDelta_3;
    PriceDelta_3.setString("2871975");
    noMDEntries_0_1.set(PriceDelta_3);
    MDFullGrp_NoMDEntries_1.insert(PriceDelta_3.getString());
    FIX::PriceType PriceType_24(16);
    noMDEntries_0_1.set(PriceType_24);
    MDFullGrp_NoMDEntries_1.insert(PriceType_24.getString());
    FIX::QuoteCondition QuoteCondition_2("MULTIPLESTRINGVALUE_B");
    noMDEntries_0_1.set(QuoteCondition_2);
    MDFullGrp_NoMDEntries_1.insert(QuoteCondition_2.getString());
    FIX::QuoteEntryID QuoteEntryID_2("STRING_1967608814");
    noMDEntries_0_1.set(QuoteEntryID_2);
    MDFullGrp_NoMDEntries_1.insert(QuoteEntryID_2.getString());
    FIX::RptSeq RptSeq_3(1338888417);
    noMDEntries_0_1.set(RptSeq_3);
    MDFullGrp_NoMDEntries_1.insert(RptSeq_3.getString());
    FIX::Scope Scope_3("MULTIPLECHARVALUE_1");
    noMDEntries_0_1.set(Scope_3);
    MDFullGrp_NoMDEntries_1.insert(Scope_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_21("STRING_506217606");
    noMDEntries_0_1.set(SecondaryOrderID_21);
    MDFullGrp_NoMDEntries_1.insert(SecondaryOrderID_21.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_2(3);
    noMDEntries_0_1.set(SecurityTradingStatus_2);
    MDFullGrp_NoMDEntries_1.insert(SecurityTradingStatus_2.getString());
    FIX::SellerDays SellerDays_2(1955090506);
    noMDEntries_0_1.set(SellerDays_2);
    MDFullGrp_NoMDEntries_1.insert(SellerDays_2.getString());
    FIX::SettlCurrency SettlCurrency_11("CHF");
    noMDEntries_0_1.set(SettlCurrency_11);
    MDFullGrp_NoMDEntries_1.insert(SettlCurrency_11.getString());
    FIX::SettlDate SettlDate_22("LOCALMKTDATE_427599773");
    noMDEntries_0_1.set(SettlDate_22);
    MDFullGrp_NoMDEntries_1.insert(SettlDate_22.getString());
    FIX::SettlType SettlType_16("STRING_7");
    noMDEntries_0_1.set(SettlType_16);
    MDFullGrp_NoMDEntries_1.insert(SettlType_16.getString());
    FIX::Text Text_49("STRING_1635947215");
    noMDEntries_0_1.set(Text_49);
    MDFullGrp_NoMDEntries_1.insert(Text_49.getString());
    FIX::TickDirection TickDirection_2('2');
    noMDEntries_0_1.set(TickDirection_2);
    MDFullGrp_NoMDEntries_1.insert(TickDirection_2.getString());
    FIX::TimeInForce TimeInForce_27('7');
    noMDEntries_0_1.set(TimeInForce_27);
    MDFullGrp_NoMDEntries_1.insert(TimeInForce_27.getString());
    FIX::TradeCondition TradeCondition_2("MULTIPLESTRINGVALUE_o");
    noMDEntries_0_1.set(TradeCondition_2);
    MDFullGrp_NoMDEntries_1.insert(TradeCondition_2.getString());
    FIX::TradeVolume TradeVolume_2;
    TradeVolume_2.setString("14230061");
    noMDEntries_0_1.set(TradeVolume_2);
    MDFullGrp_NoMDEntries_1.insert(TradeVolume_2.getString());
    FIX::TradingSessionID TradingSessionID_35("STRING_2");
    noMDEntries_0_1.set(TradingSessionID_35);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionID_35.getString());
    FIX::TradingSessionSubID TradingSessionSubID_35("STRING_4");
    noMDEntries_0_1.set(TradingSessionSubID_35);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionSubID_35.getString());
    FIX::TrdType TrdType_5(52);
    noMDEntries_0_1.set(TrdType_5);
    MDFullGrp_NoMDEntries_1.insert(TrdType_5.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_1);
    all_compo_names.insert("MDFullGrp.NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_50;
      FIX::PartyID PartyID_50("STRING_2086417113");
      noPartyIDs_1_1_0.set(PartyID_50);
      Parties_NoPartyIDs_50.insert(PartyID_50.getString());
      FIX::PartyIDSource PartyIDSource_50('D');
      noPartyIDs_1_1_0.set(PartyIDSource_50);
      Parties_NoPartyIDs_50.insert(PartyIDSource_50.getString());
      FIX::PartyRole PartyRole_50(43);
      noPartyIDs_1_1_0.set(PartyRole_50);
      Parties_NoPartyIDs_50.insert(PartyRole_50.getString());
      all_values.push_back(Parties_NoPartyIDs_50);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_109;
        FIX::PartySubID PartySubID_109("STRING_149278481");
        noPartySubIDs_1_0_2_0.set(PartySubID_109);
        PtysSubGrp_NoPartySubIDs_109.insert(PartySubID_109.getString());
        FIX::PartySubIDType PartySubIDType_109(4);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_109);
        PtysSubGrp_NoPartySubIDs_109.insert(PartySubIDType_109.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_109);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_110;
        FIX::PartySubID PartySubID_110("STRING_119289473");
        noPartySubIDs_1_0_2_1.set(PartySubID_110);
        PtysSubGrp_NoPartySubIDs_110.insert(PartySubID_110.getString());
        FIX::PartySubIDType PartySubIDType_110(5);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_110);
        PtysSubGrp_NoPartySubIDs_110.insert(PartySubIDType_110.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_110);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_111;
        FIX::PartySubID PartySubID_111("STRING_610759014");
        noPartySubIDs_1_0_2_2.set(PartySubID_111);
        PtysSubGrp_NoPartySubIDs_111.insert(PartySubID_111.getString());
        FIX::PartySubIDType PartySubIDType_111(2);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_111);
        PtysSubGrp_NoPartySubIDs_111.insert(PartySubIDType_111.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_111);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_51;
      FIX::PartyID PartyID_51("STRING_1350741196");
      noPartyIDs_1_1_1.set(PartyID_51);
      Parties_NoPartyIDs_51.insert(PartyID_51.getString());
      FIX::PartyIDSource PartyIDSource_51('1');
      noPartyIDs_1_1_1.set(PartyIDSource_51);
      Parties_NoPartyIDs_51.insert(PartyIDSource_51.getString());
      FIX::PartyRole PartyRole_51(82);
      noPartyIDs_1_1_1.set(PartyRole_51);
      Parties_NoPartyIDs_51.insert(PartyRole_51.getString());
      all_values.push_back(Parties_NoPartyIDs_51);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_112;
        FIX::PartySubID PartySubID_112("STRING_209888842");
        noPartySubIDs_1_1_2_0.set(PartySubID_112);
        PtysSubGrp_NoPartySubIDs_112.insert(PartySubID_112.getString());
        FIX::PartySubIDType PartySubIDType_112(33);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_112);
        PtysSubGrp_NoPartySubIDs_112.insert(PartySubIDType_112.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_112);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_113;
        FIX::PartySubID PartySubID_113("STRING_226699294");
        noPartySubIDs_1_1_2_1.set(PartySubID_113);
        PtysSubGrp_NoPartySubIDs_113.insert(PartySubID_113.getString());
        FIX::PartySubIDType PartySubIDType_113(25);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_113);
        PtysSubGrp_NoPartySubIDs_113.insert(PartySubIDType_113.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_113);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_114;
        FIX::PartySubID PartySubID_114("STRING_1362519616");
        noPartySubIDs_1_1_2_2.set(PartySubID_114);
        PtysSubGrp_NoPartySubIDs_114.insert(PartySubID_114.getString());
        FIX::PartySubIDType PartySubIDType_114(32);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_114);
        PtysSubGrp_NoPartySubIDs_114.insert(PartySubIDType_114.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_114);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_52;
      FIX::PartyID PartyID_52("STRING_445095473");
      noPartyIDs_1_1_2.set(PartyID_52);
      Parties_NoPartyIDs_52.insert(PartyID_52.getString());
      FIX::PartyIDSource PartyIDSource_52('9');
      noPartyIDs_1_1_2.set(PartyIDSource_52);
      Parties_NoPartyIDs_52.insert(PartyIDSource_52.getString());
      FIX::PartyRole PartyRole_52(38);
      noPartyIDs_1_1_2.set(PartyRole_52);
      Parties_NoPartyIDs_52.insert(PartyRole_52.getString());
      all_values.push_back(Parties_NoPartyIDs_52);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_115;
        FIX::PartySubID PartySubID_115("STRING_1284640535");
        noPartySubIDs_1_2_2_0.set(PartySubID_115);
        PtysSubGrp_NoPartySubIDs_115.insert(PartySubID_115.getString());
        FIX::PartySubIDType PartySubIDType_115(26);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_115);
        PtysSubGrp_NoPartySubIDs_115.insert(PartySubIDType_115.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_115);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_116;
        FIX::PartySubID PartySubID_116("STRING_1822292303");
        noPartySubIDs_1_2_2_1.set(PartySubID_116);
        PtysSubGrp_NoPartySubIDs_116.insert(PartySubID_116.getString());
        FIX::PartySubIDType PartySubIDType_116(5);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_116);
        PtysSubGrp_NoPartySubIDs_116.insert(PartySubIDType_116.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_116);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_117;
        FIX::PartySubID PartySubID_117("STRING_1781551227");
        noPartySubIDs_1_2_2_2.set(PartySubID_117);
        PtysSubGrp_NoPartySubIDs_117.insert(PartySubID_117.getString());
        FIX::PartySubIDType PartySubIDType_117(11);
        noPartySubIDs_1_2_2_2.set(PartySubIDType_117);
        PtysSubGrp_NoPartySubIDs_117.insert(PartySubIDType_117.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_117);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_2);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_13;
      FIX::RateSource RateSource_19(0);
      noRateSources_1_1_0.set(RateSource_19);
      RateSource_NoRateSources_13.insert(RateSource_19.getString());
      FIX::RateSourceType RateSourceType_13(1);
      noRateSources_1_1_0.set(RateSourceType_13);
      RateSource_NoRateSources_13.insert(RateSourceType_13.getString());
      FIX::ReferencePage ReferencePage_13("STRING_50168553");
      noRateSources_1_1_0.set(ReferencePage_13);
      RateSource_NoRateSources_13.insert(ReferencePage_13.getString());
      all_values.push_back(RateSource_NoRateSources_13);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_1.addGroup(noRateSources_1_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_2;
      FIX::MDSecSize MDSecSize_2;
      MDSecSize_2.setString("6309064");
      noOfSecSizes_1_1_0.set(MDSecSize_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSize_2.getString());
      FIX::MDSecSizeType MDSecSizeType_2(1);
      noOfSecSizes_1_1_0.set(MDSecSizeType_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSizeType_2.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_2);
      all_compo_names.insert("SecSizesGrp.NoOfSecSizes");

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_3;
      FIX::MDSecSize MDSecSize_3;
      MDSecSize_3.setString("12247567");
      noOfSecSizes_1_1_1.set(MDSecSize_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSize_3.getString());
      FIX::MDSecSizeType MDSecSizeType_3(1);
      noOfSecSizes_1_1_1.set(MDSecSizeType_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSizeType_3.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_3);
      all_compo_names.insert("SecSizesGrp.NoOfSecSizes");

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_14;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_14("CAN");
    noMDEntries_0_1.set(BenchmarkCurveCurrency_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveCurrency_14.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_14("STRING_SONIA");
    noMDEntries_0_1.set(BenchmarkCurveName_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveName_14.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_14("STRING_971646082");
    noMDEntries_0_1.set(BenchmarkCurvePoint_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurvePoint_14.getString());
    FIX::BenchmarkPrice BenchmarkPrice_14;
    BenchmarkPrice_14.setString("18578558");
    noMDEntries_0_1.set(BenchmarkPrice_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPrice_14.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_14(1982428238);
    noMDEntries_0_1.set(BenchmarkPriceType_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPriceType_14.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_14("STRING_1181534924");
    noMDEntries_0_1.set(BenchmarkSecurityID_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityID_14.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_14("STRING_443202025");
    noMDEntries_0_1.set(BenchmarkSecurityIDSource_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityIDSource_14.getString());
    FIX::Spread Spread_14;
    Spread_14.setString("616438");
    noMDEntries_0_1.set(Spread_14);
    SpreadOrBenchmarkCurveData_14.insert(Spread_14.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_14);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // YieldData
    multiset<string> YieldData_9;
    FIX::Yield Yield_9;
    Yield_9.setString("6.240000");
    noMDEntries_0_1.set(Yield_9);
    YieldData_9.insert(Yield_9.getString());
    FIX::YieldCalcDate YieldCalcDate_9("LOCALMKTDATE_1805721641");
    noMDEntries_0_1.set(YieldCalcDate_9);
    YieldData_9.insert(YieldCalcDate_9.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_9("LOCALMKTDATE_738250770");
    noMDEntries_0_1.set(YieldRedemptionDate_9);
    YieldData_9.insert(YieldRedemptionDate_9.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_9;
    YieldRedemptionPrice_9.setString("16441260");
    noMDEntries_0_1.set(YieldRedemptionPrice_9);
    YieldData_9.insert(YieldRedemptionPrice_9.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_9(252243901);
    noMDEntries_0_1.set(YieldRedemptionPriceType_9);
    YieldData_9.insert(YieldRedemptionPriceType_9.getString());
    FIX::YieldType YieldType_9("STRING_COMPOUND");
    noMDEntries_0_1.set(YieldType_9);
    YieldData_9.insert(YieldType_9.getString());
    all_values.push_back(YieldData_9);
    all_compo_names.insert("YieldData");

    msg.addGroup(noMDEntries_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    FIX::RoutingID RoutingID_5("STRING_1536884436");
    noRoutingIDs_0_0.set(RoutingID_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingID_5.getString());
    FIX::RoutingType RoutingType_5(3);
    noRoutingIDs_0_0.set(RoutingType_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingType_5.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_5);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_53;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_53("DATA_1828533226");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuer_53.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_53(925035801);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuerLen_53.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_53("DATA_717655416");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDesc_53.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_53(1777567082);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDescLen_53.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
    UnderlyingAdjustedQuantity_53.setString("4980368");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_53);
    UnderlyingInstrument_53.insert(UnderlyingAdjustedQuantity_53.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
    UnderlyingAllocationPercent_53.setString("34.050000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_53);
    UnderlyingInstrument_53.insert(UnderlyingAllocationPercent_53.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
    UnderlyingAttachmentPoint_53.setString("56.350000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingAttachmentPoint_53.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_53("STRING_1603504090");
    noUnderlyings_0_0.set(UnderlyingCFICode_53);
    UnderlyingInstrument_53.insert(UnderlyingCFICode_53.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_53("STRING_1830189876");
    noUnderlyings_0_0.set(UnderlyingCPProgram_53);
    UnderlyingInstrument_53.insert(UnderlyingCPProgram_53.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_53("STRING_1935692835");
    noUnderlyings_0_0.set(UnderlyingCPRegType_53);
    UnderlyingInstrument_53.insert(UnderlyingCPRegType_53.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_53;
    UnderlyingCapValue_53.setString("6807771");
    noUnderlyings_0_0.set(UnderlyingCapValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCapValue_53.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
    UnderlyingCashAmount_53.setString("19197309");
    noUnderlyings_0_0.set(UnderlyingCashAmount_53);
    UnderlyingInstrument_53.insert(UnderlyingCashAmount_53.getString());
    FIX::UnderlyingCashType UnderlyingCashType_53("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_53);
    UnderlyingInstrument_53.insert(UnderlyingCashType_53.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
    UnderlyingContractMultiplier_53.setString("1645372");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplier_53.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_53(1212529578);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplierUnit_53.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_53("COUNTRY_1478571484");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingCountryOfIssue_53.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_53("LOCALMKTDATE_2022393130");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponPaymentDate_53.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
    UnderlyingCouponRate_53.setString("41.680000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponRate_53.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_53("STRING_512622760");
    noUnderlyings_0_0.set(UnderlyingCreditRating_53);
    UnderlyingInstrument_53.insert(UnderlyingCreditRating_53.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_53("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrency_53.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
    UnderlyingCurrentValue_53.setString("17116533");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrentValue_53.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
    UnderlyingDetachmentPoint_53.setString("31.480000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingDetachmentPoint_53.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
    UnderlyingDirtyPrice_53.setString("18473688");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingDirtyPrice_53.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
    UnderlyingEndPrice_53.setString("12082958");
    noUnderlyings_0_0.set(UnderlyingEndPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingEndPrice_53.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_53;
    UnderlyingEndValue_53.setString("2285934");
    noUnderlyings_0_0.set(UnderlyingEndValue_53);
    UnderlyingInstrument_53.insert(UnderlyingEndValue_53.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_53(603206397);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_53);
    UnderlyingInstrument_53.insert(UnderlyingExerciseStyle_53.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_53;
    UnderlyingFXRate_53.setString("11042244");
    noUnderlyings_0_0.set(UnderlyingFXRate_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRate_53.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_53('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRateCalc_53.getString());
    FIX::UnderlyingFactor UnderlyingFactor_53;
    UnderlyingFactor_53.setString("18941746");
    noUnderlyings_0_0.set(UnderlyingFactor_53);
    UnderlyingInstrument_53.insert(UnderlyingFactor_53.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_53(674961785);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_53);
    UnderlyingInstrument_53.insert(UnderlyingFlowScheduleType_53.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_53("STRING_1446527415");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_53);
    UnderlyingInstrument_53.insert(UnderlyingInstrRegistry_53.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_53("LOCALMKTDATE_671726773");
    noUnderlyings_0_0.set(UnderlyingIssueDate_53);
    UnderlyingInstrument_53.insert(UnderlyingIssueDate_53.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_53("STRING_1392617201");
    noUnderlyings_0_0.set(UnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(UnderlyingIssuer_53.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_53("STRING_1076610849");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingLocaleOfIssue_53.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_53("LOCALMKTDATE_1169763619");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityDate_53.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_53("MONTHYEAR_444416958");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityMonthYear_53.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_53("TZTIMEONLY_756862837");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityTime_53.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
    UnderlyingNotionalPercentageOutstanding_53.setString("40.610000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_53('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_53);
    UnderlyingInstrument_53.insert(UnderlyingOptAttribute_53.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
    UnderlyingOriginalNotionalPercentageOutstanding_53.setString("20.240000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingOriginalNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_53("STRING_1306561221");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasure_53.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
    UnderlyingPriceUnitOfMeasureQty_53.setString("20468541");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasureQty_53.getString());
    FIX::UnderlyingProduct UnderlyingProduct_53(1051997426);
    noUnderlyings_0_0.set(UnderlyingProduct_53);
    UnderlyingInstrument_53.insert(UnderlyingProduct_53.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_53(1471098456);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_53);
    UnderlyingInstrument_53.insert(UnderlyingPutOrCall_53.getString());
    FIX::UnderlyingPx UnderlyingPx_53;
    UnderlyingPx_53.setString("11119000");
    noUnderlyings_0_0.set(UnderlyingPx_53);
    UnderlyingInstrument_53.insert(UnderlyingPx_53.getString());
    FIX::UnderlyingQty UnderlyingQty_53;
    UnderlyingQty_53.setString("3830852");
    noUnderlyings_0_0.set(UnderlyingQty_53);
    UnderlyingInstrument_53.insert(UnderlyingQty_53.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_53("LOCALMKTDATE_1346007938");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_53);
    UnderlyingInstrument_53.insert(UnderlyingRedemptionDate_53.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_53("STRING_11890591");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingRepoCollateralSecurityType_53.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
    UnderlyingRepurchaseRate_53.setString("80.220000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseRate_53.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_53(1664119445);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseTerm_53.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_53("STRING_1121008644");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_53);
    UnderlyingInstrument_53.insert(UnderlyingRestructuringType_53.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_53("STRING_459877758");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityDesc_53.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_53("EXCHANGE_1640468946");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityExchange_53.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_53("STRING_820893819");
    noUnderlyings_0_0.set(UnderlyingSecurityID_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityID_53.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_53("STRING_1668173591");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityIDSource_53.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_53("STRING_1869062347");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecuritySubType_53.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_53("STRING_1424100217");
    noUnderlyings_0_0.set(UnderlyingSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityType_53.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_53("STRING_624914425");
    noUnderlyings_0_0.set(UnderlyingSeniority_53);
    UnderlyingInstrument_53.insert(UnderlyingSeniority_53.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_53("STRING_1487056537");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlMethod_53.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_53(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlementType_53.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_53;
    UnderlyingStartValue_53.setString("12998762");
    noUnderlyings_0_0.set(UnderlyingStartValue_53);
    UnderlyingInstrument_53.insert(UnderlyingStartValue_53.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_53("STRING_786100304");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingStateOrProvinceOfIssue_53.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_53("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikeCurrency_53.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
    UnderlyingStrikePrice_53.setString("18627111");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikePrice_53.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_53("STRING_864797932");
    noUnderlyings_0_0.set(UnderlyingSymbol_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbol_53.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_53("STRING_989426721");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbolSfx_53.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_53("STRING_472090343");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingTimeUnit_53.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_53("STRING_1490581994");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasure_53.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
    UnderlyingUnitOfMeasureQty_53.setString("11165499");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasureQty_53.getString());
    all_values.push_back(UnderlyingInstrument_53);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_111("STRING_649659567");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltID_111.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_111("STRING_1015920401");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltIDSource_111.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_112("STRING_2069159794");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltID_112.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_112("STRING_2120758024");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltIDSource_112.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
      FIX::UnderlyingStipType UnderlyingStipType_103("STRING_304761408");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipType_103.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_103("STRING_1319282314");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipValue_103.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
      FIX::UnderlyingStipType UnderlyingStipType_104("STRING_2139711063");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipType_104.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_104("STRING_1200469431");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipValue_104.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
      FIX::UnderlyingStipType UnderlyingStipType_105("STRING_835918112");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipType_105.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_105("STRING_1113236060");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipValue_105.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_100;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_100("STRING_328903410");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyID_100.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_100('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyIDSource_100.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_100(1181037133);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyRole_100.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_100);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_197("STRING_1210746448");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_197);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubID_197.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_197(1805951558);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_197);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubIDType_197.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_198("STRING_1537538646");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_198);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubID_198.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_198(234053989);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_198);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubIDType_198.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_199("STRING_958344120");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_199);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubID_199.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_199(176155303);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_199);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubIDType_199.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
