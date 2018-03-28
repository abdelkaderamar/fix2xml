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
  multiset<string> MarketDataSnapshotFullRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_1(613065810);
  msg.set(ApplQueueDepth_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueDepth_1.getString());
  FIX::ApplQueueResolution ApplQueueResolution_1(1);
  msg.set(ApplQueueResolution_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueResolution_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_14("LOCALMKTDATE_1394505749");
  msg.set(ClearingBusinessDate_14);
  MarketDataSnapshotFullRefresh_0.insert(ClearingBusinessDate_14.getString());
  FIX::CorporateAction CorporateAction_6("MULTIPLECHARVALUE_F");
  msg.set(CorporateAction_6);
  MarketDataSnapshotFullRefresh_0.insert(CorporateAction_6.getString());
  FIX::FinancialStatus FinancialStatus_3("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_3);
  MarketDataSnapshotFullRefresh_0.insert(FinancialStatus_3.getString());
  FIX::MDBookType MDBookType_13(1);
  msg.set(MDBookType_13);
  MarketDataSnapshotFullRefresh_0.insert(MDBookType_13.getString());
  FIX::MDFeedType MDFeedType_13("STRING_2048769341");
  msg.set(MDFeedType_13);
  MarketDataSnapshotFullRefresh_0.insert(MDFeedType_13.getString());
  FIX::MDReportID MDReportID_0(731958249);
  msg.set(MDReportID_0);
  MarketDataSnapshotFullRefresh_0.insert(MDReportID_0.getString());
  FIX::MDReqID MDReqID_3("STRING_745701020");
  msg.set(MDReqID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDReqID_3.getString());
  FIX::MDStreamID MDStreamID_3("STRING_826735916");
  msg.set(MDStreamID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDStreamID_3.getString());
  FIX::MDSubBookType MDSubBookType_1(2117152145);
  msg.set(MDSubBookType_1);
  MarketDataSnapshotFullRefresh_0.insert(MDSubBookType_1.getString());
  FIX::MarketDepth MarketDepth_14(1483323275);
  msg.set(MarketDepth_14);
  MarketDataSnapshotFullRefresh_0.insert(MarketDepth_14.getString());
  FIX::NetChgPrevDay NetChgPrevDay_1;
  NetChgPrevDay_1.setString("1396767");
  msg.set(NetChgPrevDay_1);
  MarketDataSnapshotFullRefresh_0.insert(NetChgPrevDay_1.getString());
  FIX::RefreshIndicator RefreshIndicator_0(true);
  msg.set(RefreshIndicator_0);
  MarketDataSnapshotFullRefresh_0.insert(RefreshIndicator_0.getString());
  FIX::TotNumReports TotNumReports_3(1142466572);
  msg.set(TotNumReports_3);
  MarketDataSnapshotFullRefresh_0.insert(TotNumReports_3.getString());
  FIX::TradeDate TradeDate_15("LOCALMKTDATE_837377293");
  msg.set(TradeDate_15);
  MarketDataSnapshotFullRefresh_0.insert(TradeDate_15.getString());
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  FIX::ApplID ApplID_7("STRING_1189375811");
  msg.set(ApplID_7);
  ApplicationSequenceControl_7.insert(ApplID_7.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_7(1639212575);
  msg.set(ApplLastSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplLastSeqNum_7.getString());
  FIX::ApplResendFlag ApplResendFlag_7(false);
  msg.set(ApplResendFlag_7);
  ApplicationSequenceControl_7.insert(ApplResendFlag_7.getString());
  FIX::ApplSeqNum ApplSeqNum_7(1805627101);
  msg.set(ApplSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplSeqNum_7.getString());
  all_values.push_back(ApplicationSequenceControl_7);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_58;
    FIX::EncodedLegIssuer EncodedLegIssuer_58("DATA_1857710081");
    noLegs_0_0.set(EncodedLegIssuer_58);
    InstrumentLeg_58.insert(EncodedLegIssuer_58.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_58(1536254279);
    noLegs_0_0.set(EncodedLegIssuerLen_58);
    InstrumentLeg_58.insert(EncodedLegIssuerLen_58.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_58("DATA_1160454879");
    noLegs_0_0.set(EncodedLegSecurityDesc_58);
    InstrumentLeg_58.insert(EncodedLegSecurityDesc_58.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_58(1196675275);
    noLegs_0_0.set(EncodedLegSecurityDescLen_58);
    InstrumentLeg_58.insert(EncodedLegSecurityDescLen_58.getString());
    FIX::LegCFICode LegCFICode_58("STRING_1207719690");
    noLegs_0_0.set(LegCFICode_58);
    InstrumentLeg_58.insert(LegCFICode_58.getString());
    FIX::LegContractMultiplier LegContractMultiplier_58;
    LegContractMultiplier_58.setString("5382208");
    noLegs_0_0.set(LegContractMultiplier_58);
    InstrumentLeg_58.insert(LegContractMultiplier_58.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_58(511979932);
    noLegs_0_0.set(LegContractMultiplierUnit_58);
    InstrumentLeg_58.insert(LegContractMultiplierUnit_58.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_58("MONTHYEAR_1207510930");
    noLegs_0_0.set(LegContractSettlMonth_58);
    InstrumentLeg_58.insert(LegContractSettlMonth_58.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_58("COUNTRY_352215492");
    noLegs_0_0.set(LegCountryOfIssue_58);
    InstrumentLeg_58.insert(LegCountryOfIssue_58.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_58("LOCALMKTDATE_1765124405");
    noLegs_0_0.set(LegCouponPaymentDate_58);
    InstrumentLeg_58.insert(LegCouponPaymentDate_58.getString());
    FIX::LegCouponRate LegCouponRate_58;
    LegCouponRate_58.setString("67.410000");
    noLegs_0_0.set(LegCouponRate_58);
    InstrumentLeg_58.insert(LegCouponRate_58.getString());
    FIX::LegCreditRating LegCreditRating_58("STRING_1123787682");
    noLegs_0_0.set(LegCreditRating_58);
    InstrumentLeg_58.insert(LegCreditRating_58.getString());
    FIX::LegCurrency LegCurrency_58("GBP");
    noLegs_0_0.set(LegCurrency_58);
    InstrumentLeg_58.insert(LegCurrency_58.getString());
    FIX::LegDatedDate LegDatedDate_58("LOCALMKTDATE_1136855504");
    noLegs_0_0.set(LegDatedDate_58);
    InstrumentLeg_58.insert(LegDatedDate_58.getString());
    FIX::LegExerciseStyle LegExerciseStyle_58(1407004434);
    noLegs_0_0.set(LegExerciseStyle_58);
    InstrumentLeg_58.insert(LegExerciseStyle_58.getString());
    FIX::LegFactor LegFactor_58;
    LegFactor_58.setString("17515729");
    noLegs_0_0.set(LegFactor_58);
    InstrumentLeg_58.insert(LegFactor_58.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_58(1868813753);
    noLegs_0_0.set(LegFlowScheduleType_58);
    InstrumentLeg_58.insert(LegFlowScheduleType_58.getString());
    FIX::LegInstrRegistry LegInstrRegistry_58("STRING_5221806");
    noLegs_0_0.set(LegInstrRegistry_58);
    InstrumentLeg_58.insert(LegInstrRegistry_58.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_58("LOCALMKTDATE_430825187");
    noLegs_0_0.set(LegInterestAccrualDate_58);
    InstrumentLeg_58.insert(LegInterestAccrualDate_58.getString());
    FIX::LegIssueDate LegIssueDate_58("LOCALMKTDATE_1838482250");
    noLegs_0_0.set(LegIssueDate_58);
    InstrumentLeg_58.insert(LegIssueDate_58.getString());
    FIX::LegIssuer LegIssuer_58("STRING_1488545082");
    noLegs_0_0.set(LegIssuer_58);
    InstrumentLeg_58.insert(LegIssuer_58.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_58("STRING_570501897");
    noLegs_0_0.set(LegLocaleOfIssue_58);
    InstrumentLeg_58.insert(LegLocaleOfIssue_58.getString());
    FIX::LegMaturityDate LegMaturityDate_58("LOCALMKTDATE_780341138");
    noLegs_0_0.set(LegMaturityDate_58);
    InstrumentLeg_58.insert(LegMaturityDate_58.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_58("MONTHYEAR_483528006");
    noLegs_0_0.set(LegMaturityMonthYear_58);
    InstrumentLeg_58.insert(LegMaturityMonthYear_58.getString());
    FIX::LegMaturityTime LegMaturityTime_58("TZTIMEONLY_1407879190");
    noLegs_0_0.set(LegMaturityTime_58);
    InstrumentLeg_58.insert(LegMaturityTime_58.getString());
    FIX::LegOptAttribute LegOptAttribute_58('1');
    noLegs_0_0.set(LegOptAttribute_58);
    InstrumentLeg_58.insert(LegOptAttribute_58.getString());
    FIX::LegOptionRatio LegOptionRatio_58;
    LegOptionRatio_58.setString("21227405");
    noLegs_0_0.set(LegOptionRatio_58);
    InstrumentLeg_58.insert(LegOptionRatio_58.getString());
    FIX::LegPool LegPool_58("STRING_940263569");
    noLegs_0_0.set(LegPool_58);
    InstrumentLeg_58.insert(LegPool_58.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_58("STRING_1627860402");
    noLegs_0_0.set(LegPriceUnitOfMeasure_58);
    InstrumentLeg_58.insert(LegPriceUnitOfMeasure_58.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
    LegPriceUnitOfMeasureQty_58.setString("20469357");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_58);
    InstrumentLeg_58.insert(LegPriceUnitOfMeasureQty_58.getString());
    FIX::LegProduct LegProduct_58(650490002);
    noLegs_0_0.set(LegProduct_58);
    InstrumentLeg_58.insert(LegProduct_58.getString());
    FIX::LegPutOrCall LegPutOrCall_58(1016631033);
    noLegs_0_0.set(LegPutOrCall_58);
    InstrumentLeg_58.insert(LegPutOrCall_58.getString());
    FIX::LegRatioQty LegRatioQty_58;
    LegRatioQty_58.setString("10599069");
    noLegs_0_0.set(LegRatioQty_58);
    InstrumentLeg_58.insert(LegRatioQty_58.getString());
    FIX::LegRedemptionDate LegRedemptionDate_58("LOCALMKTDATE_1847165277");
    noLegs_0_0.set(LegRedemptionDate_58);
    InstrumentLeg_58.insert(LegRedemptionDate_58.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_58("STRING_76867076");
    noLegs_0_0.set(LegRepoCollateralSecurityType_58);
    InstrumentLeg_58.insert(LegRepoCollateralSecurityType_58.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_58;
    LegRepurchaseRate_58.setString("77.620000");
    noLegs_0_0.set(LegRepurchaseRate_58);
    InstrumentLeg_58.insert(LegRepurchaseRate_58.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_58(211661561);
    noLegs_0_0.set(LegRepurchaseTerm_58);
    InstrumentLeg_58.insert(LegRepurchaseTerm_58.getString());
    FIX::LegSecurityDesc LegSecurityDesc_58("STRING_1284378006");
    noLegs_0_0.set(LegSecurityDesc_58);
    InstrumentLeg_58.insert(LegSecurityDesc_58.getString());
    FIX::LegSecurityExchange LegSecurityExchange_58("EXCHANGE_1950343254");
    noLegs_0_0.set(LegSecurityExchange_58);
    InstrumentLeg_58.insert(LegSecurityExchange_58.getString());
    FIX::LegSecurityID LegSecurityID_58("STRING_1976785967");
    noLegs_0_0.set(LegSecurityID_58);
    InstrumentLeg_58.insert(LegSecurityID_58.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_58("STRING_957471099");
    noLegs_0_0.set(LegSecurityIDSource_58);
    InstrumentLeg_58.insert(LegSecurityIDSource_58.getString());
    FIX::LegSecuritySubType LegSecuritySubType_58("STRING_926647288");
    noLegs_0_0.set(LegSecuritySubType_58);
    InstrumentLeg_58.insert(LegSecuritySubType_58.getString());
    FIX::LegSecurityType LegSecurityType_58("STRING_841448826");
    noLegs_0_0.set(LegSecurityType_58);
    InstrumentLeg_58.insert(LegSecurityType_58.getString());
    FIX::LegSide LegSide_58('6');
    noLegs_0_0.set(LegSide_58);
    InstrumentLeg_58.insert(LegSide_58.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_58("STRING_2063502792");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_58);
    InstrumentLeg_58.insert(LegStateOrProvinceOfIssue_58.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_58("EUR");
    noLegs_0_0.set(LegStrikeCurrency_58);
    InstrumentLeg_58.insert(LegStrikeCurrency_58.getString());
    FIX::LegStrikePrice LegStrikePrice_58;
    LegStrikePrice_58.setString("17848328");
    noLegs_0_0.set(LegStrikePrice_58);
    InstrumentLeg_58.insert(LegStrikePrice_58.getString());
    FIX::LegSymbol LegSymbol_58("STRING_106191419");
    noLegs_0_0.set(LegSymbol_58);
    InstrumentLeg_58.insert(LegSymbol_58.getString());
    FIX::LegSymbolSfx LegSymbolSfx_58("STRING_695189136");
    noLegs_0_0.set(LegSymbolSfx_58);
    InstrumentLeg_58.insert(LegSymbolSfx_58.getString());
    FIX::LegTimeUnit LegTimeUnit_58("STRING_1475831499");
    noLegs_0_0.set(LegTimeUnit_58);
    InstrumentLeg_58.insert(LegTimeUnit_58.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_58("STRING_1594736501");
    noLegs_0_0.set(LegUnitOfMeasure_58);
    InstrumentLeg_58.insert(LegUnitOfMeasure_58.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
    LegUnitOfMeasureQty_58.setString("12656910");
    noLegs_0_0.set(LegUnitOfMeasureQty_58);
    InstrumentLeg_58.insert(LegUnitOfMeasureQty_58.getString());
    all_values.push_back(InstrumentLeg_58);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
      FIX::LegSecurityAltID LegSecurityAltID_111("STRING_2078264507");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltID_111.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_111("STRING_526086575");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltIDSource_111.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
      FIX::LegSecurityAltID LegSecurityAltID_112("STRING_2078405939");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltID_112.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_112("STRING_2053521440");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltIDSource_112.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_59;
    FIX::EncodedLegIssuer EncodedLegIssuer_59("DATA_1466350145");
    noLegs_0_1.set(EncodedLegIssuer_59);
    InstrumentLeg_59.insert(EncodedLegIssuer_59.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_59(1558782694);
    noLegs_0_1.set(EncodedLegIssuerLen_59);
    InstrumentLeg_59.insert(EncodedLegIssuerLen_59.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_59("DATA_1952973494");
    noLegs_0_1.set(EncodedLegSecurityDesc_59);
    InstrumentLeg_59.insert(EncodedLegSecurityDesc_59.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_59(2116840147);
    noLegs_0_1.set(EncodedLegSecurityDescLen_59);
    InstrumentLeg_59.insert(EncodedLegSecurityDescLen_59.getString());
    FIX::LegCFICode LegCFICode_59("STRING_427930079");
    noLegs_0_1.set(LegCFICode_59);
    InstrumentLeg_59.insert(LegCFICode_59.getString());
    FIX::LegContractMultiplier LegContractMultiplier_59;
    LegContractMultiplier_59.setString("8653967");
    noLegs_0_1.set(LegContractMultiplier_59);
    InstrumentLeg_59.insert(LegContractMultiplier_59.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_59(1816521777);
    noLegs_0_1.set(LegContractMultiplierUnit_59);
    InstrumentLeg_59.insert(LegContractMultiplierUnit_59.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_59("MONTHYEAR_504797155");
    noLegs_0_1.set(LegContractSettlMonth_59);
    InstrumentLeg_59.insert(LegContractSettlMonth_59.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_59("COUNTRY_316040894");
    noLegs_0_1.set(LegCountryOfIssue_59);
    InstrumentLeg_59.insert(LegCountryOfIssue_59.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_59("LOCALMKTDATE_2028183338");
    noLegs_0_1.set(LegCouponPaymentDate_59);
    InstrumentLeg_59.insert(LegCouponPaymentDate_59.getString());
    FIX::LegCouponRate LegCouponRate_59;
    LegCouponRate_59.setString("51.620000");
    noLegs_0_1.set(LegCouponRate_59);
    InstrumentLeg_59.insert(LegCouponRate_59.getString());
    FIX::LegCreditRating LegCreditRating_59("STRING_118900500");
    noLegs_0_1.set(LegCreditRating_59);
    InstrumentLeg_59.insert(LegCreditRating_59.getString());
    FIX::LegCurrency LegCurrency_59("CHF");
    noLegs_0_1.set(LegCurrency_59);
    InstrumentLeg_59.insert(LegCurrency_59.getString());
    FIX::LegDatedDate LegDatedDate_59("LOCALMKTDATE_1045547789");
    noLegs_0_1.set(LegDatedDate_59);
    InstrumentLeg_59.insert(LegDatedDate_59.getString());
    FIX::LegExerciseStyle LegExerciseStyle_59(551450835);
    noLegs_0_1.set(LegExerciseStyle_59);
    InstrumentLeg_59.insert(LegExerciseStyle_59.getString());
    FIX::LegFactor LegFactor_59;
    LegFactor_59.setString("12594372");
    noLegs_0_1.set(LegFactor_59);
    InstrumentLeg_59.insert(LegFactor_59.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_59(961566933);
    noLegs_0_1.set(LegFlowScheduleType_59);
    InstrumentLeg_59.insert(LegFlowScheduleType_59.getString());
    FIX::LegInstrRegistry LegInstrRegistry_59("STRING_652420448");
    noLegs_0_1.set(LegInstrRegistry_59);
    InstrumentLeg_59.insert(LegInstrRegistry_59.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_59("LOCALMKTDATE_1523801240");
    noLegs_0_1.set(LegInterestAccrualDate_59);
    InstrumentLeg_59.insert(LegInterestAccrualDate_59.getString());
    FIX::LegIssueDate LegIssueDate_59("LOCALMKTDATE_598916183");
    noLegs_0_1.set(LegIssueDate_59);
    InstrumentLeg_59.insert(LegIssueDate_59.getString());
    FIX::LegIssuer LegIssuer_59("STRING_758611867");
    noLegs_0_1.set(LegIssuer_59);
    InstrumentLeg_59.insert(LegIssuer_59.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_59("STRING_71506728");
    noLegs_0_1.set(LegLocaleOfIssue_59);
    InstrumentLeg_59.insert(LegLocaleOfIssue_59.getString());
    FIX::LegMaturityDate LegMaturityDate_59("LOCALMKTDATE_2074747682");
    noLegs_0_1.set(LegMaturityDate_59);
    InstrumentLeg_59.insert(LegMaturityDate_59.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_59("MONTHYEAR_205864720");
    noLegs_0_1.set(LegMaturityMonthYear_59);
    InstrumentLeg_59.insert(LegMaturityMonthYear_59.getString());
    FIX::LegMaturityTime LegMaturityTime_59("TZTIMEONLY_1337197762");
    noLegs_0_1.set(LegMaturityTime_59);
    InstrumentLeg_59.insert(LegMaturityTime_59.getString());
    FIX::LegOptAttribute LegOptAttribute_59('3');
    noLegs_0_1.set(LegOptAttribute_59);
    InstrumentLeg_59.insert(LegOptAttribute_59.getString());
    FIX::LegOptionRatio LegOptionRatio_59;
    LegOptionRatio_59.setString("1366455");
    noLegs_0_1.set(LegOptionRatio_59);
    InstrumentLeg_59.insert(LegOptionRatio_59.getString());
    FIX::LegPool LegPool_59("STRING_1863284337");
    noLegs_0_1.set(LegPool_59);
    InstrumentLeg_59.insert(LegPool_59.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_59("STRING_2114358964");
    noLegs_0_1.set(LegPriceUnitOfMeasure_59);
    InstrumentLeg_59.insert(LegPriceUnitOfMeasure_59.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
    LegPriceUnitOfMeasureQty_59.setString("426833");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_59);
    InstrumentLeg_59.insert(LegPriceUnitOfMeasureQty_59.getString());
    FIX::LegProduct LegProduct_59(1182150834);
    noLegs_0_1.set(LegProduct_59);
    InstrumentLeg_59.insert(LegProduct_59.getString());
    FIX::LegPutOrCall LegPutOrCall_59(1525658010);
    noLegs_0_1.set(LegPutOrCall_59);
    InstrumentLeg_59.insert(LegPutOrCall_59.getString());
    FIX::LegRatioQty LegRatioQty_59;
    LegRatioQty_59.setString("19956568");
    noLegs_0_1.set(LegRatioQty_59);
    InstrumentLeg_59.insert(LegRatioQty_59.getString());
    FIX::LegRedemptionDate LegRedemptionDate_59("LOCALMKTDATE_1151507334");
    noLegs_0_1.set(LegRedemptionDate_59);
    InstrumentLeg_59.insert(LegRedemptionDate_59.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_59("STRING_1953588089");
    noLegs_0_1.set(LegRepoCollateralSecurityType_59);
    InstrumentLeg_59.insert(LegRepoCollateralSecurityType_59.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_59;
    LegRepurchaseRate_59.setString("99.970000");
    noLegs_0_1.set(LegRepurchaseRate_59);
    InstrumentLeg_59.insert(LegRepurchaseRate_59.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_59(820545463);
    noLegs_0_1.set(LegRepurchaseTerm_59);
    InstrumentLeg_59.insert(LegRepurchaseTerm_59.getString());
    FIX::LegSecurityDesc LegSecurityDesc_59("STRING_310901597");
    noLegs_0_1.set(LegSecurityDesc_59);
    InstrumentLeg_59.insert(LegSecurityDesc_59.getString());
    FIX::LegSecurityExchange LegSecurityExchange_59("EXCHANGE_1029610891");
    noLegs_0_1.set(LegSecurityExchange_59);
    InstrumentLeg_59.insert(LegSecurityExchange_59.getString());
    FIX::LegSecurityID LegSecurityID_59("STRING_701245153");
    noLegs_0_1.set(LegSecurityID_59);
    InstrumentLeg_59.insert(LegSecurityID_59.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_59("STRING_2100076759");
    noLegs_0_1.set(LegSecurityIDSource_59);
    InstrumentLeg_59.insert(LegSecurityIDSource_59.getString());
    FIX::LegSecuritySubType LegSecuritySubType_59("STRING_1148511392");
    noLegs_0_1.set(LegSecuritySubType_59);
    InstrumentLeg_59.insert(LegSecuritySubType_59.getString());
    FIX::LegSecurityType LegSecurityType_59("STRING_411247163");
    noLegs_0_1.set(LegSecurityType_59);
    InstrumentLeg_59.insert(LegSecurityType_59.getString());
    FIX::LegSide LegSide_59('5');
    noLegs_0_1.set(LegSide_59);
    InstrumentLeg_59.insert(LegSide_59.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_59("STRING_46575533");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_59);
    InstrumentLeg_59.insert(LegStateOrProvinceOfIssue_59.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_59("CHF");
    noLegs_0_1.set(LegStrikeCurrency_59);
    InstrumentLeg_59.insert(LegStrikeCurrency_59.getString());
    FIX::LegStrikePrice LegStrikePrice_59;
    LegStrikePrice_59.setString("10081424");
    noLegs_0_1.set(LegStrikePrice_59);
    InstrumentLeg_59.insert(LegStrikePrice_59.getString());
    FIX::LegSymbol LegSymbol_59("STRING_1615118446");
    noLegs_0_1.set(LegSymbol_59);
    InstrumentLeg_59.insert(LegSymbol_59.getString());
    FIX::LegSymbolSfx LegSymbolSfx_59("STRING_1187510607");
    noLegs_0_1.set(LegSymbolSfx_59);
    InstrumentLeg_59.insert(LegSymbolSfx_59.getString());
    FIX::LegTimeUnit LegTimeUnit_59("STRING_1607058649");
    noLegs_0_1.set(LegTimeUnit_59);
    InstrumentLeg_59.insert(LegTimeUnit_59.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_59("STRING_226246665");
    noLegs_0_1.set(LegUnitOfMeasure_59);
    InstrumentLeg_59.insert(LegUnitOfMeasure_59.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
    LegUnitOfMeasureQty_59.setString("12590173");
    noLegs_0_1.set(LegUnitOfMeasureQty_59);
    InstrumentLeg_59.insert(LegUnitOfMeasureQty_59.getString());
    all_values.push_back(InstrumentLeg_59);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
      FIX::LegSecurityAltID LegSecurityAltID_113("STRING_432111385");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltID_113.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_113("STRING_448731450");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_113);
      LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltIDSource_113.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
      FIX::LegSecurityAltID LegSecurityAltID_114("STRING_1570275708");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltID_114.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_114("STRING_568756964");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_114);
      LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltIDSource_114.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
      FIX::LegSecurityAltID LegSecurityAltID_115("STRING_164532139");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltID_115.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_115("STRING_1537151024");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltIDSource_115.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_60;
    FIX::EncodedLegIssuer EncodedLegIssuer_60("DATA_611440335");
    noLegs_0_2.set(EncodedLegIssuer_60);
    InstrumentLeg_60.insert(EncodedLegIssuer_60.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_60(1346682974);
    noLegs_0_2.set(EncodedLegIssuerLen_60);
    InstrumentLeg_60.insert(EncodedLegIssuerLen_60.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_60("DATA_915325386");
    noLegs_0_2.set(EncodedLegSecurityDesc_60);
    InstrumentLeg_60.insert(EncodedLegSecurityDesc_60.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_60(459613553);
    noLegs_0_2.set(EncodedLegSecurityDescLen_60);
    InstrumentLeg_60.insert(EncodedLegSecurityDescLen_60.getString());
    FIX::LegCFICode LegCFICode_60("STRING_350706660");
    noLegs_0_2.set(LegCFICode_60);
    InstrumentLeg_60.insert(LegCFICode_60.getString());
    FIX::LegContractMultiplier LegContractMultiplier_60;
    LegContractMultiplier_60.setString("7214298");
    noLegs_0_2.set(LegContractMultiplier_60);
    InstrumentLeg_60.insert(LegContractMultiplier_60.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_60(1173183550);
    noLegs_0_2.set(LegContractMultiplierUnit_60);
    InstrumentLeg_60.insert(LegContractMultiplierUnit_60.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_60("MONTHYEAR_1171252123");
    noLegs_0_2.set(LegContractSettlMonth_60);
    InstrumentLeg_60.insert(LegContractSettlMonth_60.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_60("COUNTRY_1032331425");
    noLegs_0_2.set(LegCountryOfIssue_60);
    InstrumentLeg_60.insert(LegCountryOfIssue_60.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_60("LOCALMKTDATE_55310794");
    noLegs_0_2.set(LegCouponPaymentDate_60);
    InstrumentLeg_60.insert(LegCouponPaymentDate_60.getString());
    FIX::LegCouponRate LegCouponRate_60;
    LegCouponRate_60.setString("72.760000");
    noLegs_0_2.set(LegCouponRate_60);
    InstrumentLeg_60.insert(LegCouponRate_60.getString());
    FIX::LegCreditRating LegCreditRating_60("STRING_984924536");
    noLegs_0_2.set(LegCreditRating_60);
    InstrumentLeg_60.insert(LegCreditRating_60.getString());
    FIX::LegCurrency LegCurrency_60("CAN");
    noLegs_0_2.set(LegCurrency_60);
    InstrumentLeg_60.insert(LegCurrency_60.getString());
    FIX::LegDatedDate LegDatedDate_60("LOCALMKTDATE_1536680260");
    noLegs_0_2.set(LegDatedDate_60);
    InstrumentLeg_60.insert(LegDatedDate_60.getString());
    FIX::LegExerciseStyle LegExerciseStyle_60(1250397719);
    noLegs_0_2.set(LegExerciseStyle_60);
    InstrumentLeg_60.insert(LegExerciseStyle_60.getString());
    FIX::LegFactor LegFactor_60;
    LegFactor_60.setString("10989587");
    noLegs_0_2.set(LegFactor_60);
    InstrumentLeg_60.insert(LegFactor_60.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_60(1200389628);
    noLegs_0_2.set(LegFlowScheduleType_60);
    InstrumentLeg_60.insert(LegFlowScheduleType_60.getString());
    FIX::LegInstrRegistry LegInstrRegistry_60("STRING_111056537");
    noLegs_0_2.set(LegInstrRegistry_60);
    InstrumentLeg_60.insert(LegInstrRegistry_60.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_60("LOCALMKTDATE_566593588");
    noLegs_0_2.set(LegInterestAccrualDate_60);
    InstrumentLeg_60.insert(LegInterestAccrualDate_60.getString());
    FIX::LegIssueDate LegIssueDate_60("LOCALMKTDATE_240416587");
    noLegs_0_2.set(LegIssueDate_60);
    InstrumentLeg_60.insert(LegIssueDate_60.getString());
    FIX::LegIssuer LegIssuer_60("STRING_1718115187");
    noLegs_0_2.set(LegIssuer_60);
    InstrumentLeg_60.insert(LegIssuer_60.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_60("STRING_792840254");
    noLegs_0_2.set(LegLocaleOfIssue_60);
    InstrumentLeg_60.insert(LegLocaleOfIssue_60.getString());
    FIX::LegMaturityDate LegMaturityDate_60("LOCALMKTDATE_1499433923");
    noLegs_0_2.set(LegMaturityDate_60);
    InstrumentLeg_60.insert(LegMaturityDate_60.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_60("MONTHYEAR_1104954223");
    noLegs_0_2.set(LegMaturityMonthYear_60);
    InstrumentLeg_60.insert(LegMaturityMonthYear_60.getString());
    FIX::LegMaturityTime LegMaturityTime_60("TZTIMEONLY_1224951639");
    noLegs_0_2.set(LegMaturityTime_60);
    InstrumentLeg_60.insert(LegMaturityTime_60.getString());
    FIX::LegOptAttribute LegOptAttribute_60('1');
    noLegs_0_2.set(LegOptAttribute_60);
    InstrumentLeg_60.insert(LegOptAttribute_60.getString());
    FIX::LegOptionRatio LegOptionRatio_60;
    LegOptionRatio_60.setString("5277462");
    noLegs_0_2.set(LegOptionRatio_60);
    InstrumentLeg_60.insert(LegOptionRatio_60.getString());
    FIX::LegPool LegPool_60("STRING_1793708604");
    noLegs_0_2.set(LegPool_60);
    InstrumentLeg_60.insert(LegPool_60.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_60("STRING_2112697513");
    noLegs_0_2.set(LegPriceUnitOfMeasure_60);
    InstrumentLeg_60.insert(LegPriceUnitOfMeasure_60.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
    LegPriceUnitOfMeasureQty_60.setString("20648973");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_60);
    InstrumentLeg_60.insert(LegPriceUnitOfMeasureQty_60.getString());
    FIX::LegProduct LegProduct_60(257665291);
    noLegs_0_2.set(LegProduct_60);
    InstrumentLeg_60.insert(LegProduct_60.getString());
    FIX::LegPutOrCall LegPutOrCall_60(1311896839);
    noLegs_0_2.set(LegPutOrCall_60);
    InstrumentLeg_60.insert(LegPutOrCall_60.getString());
    FIX::LegRatioQty LegRatioQty_60;
    LegRatioQty_60.setString("8327390");
    noLegs_0_2.set(LegRatioQty_60);
    InstrumentLeg_60.insert(LegRatioQty_60.getString());
    FIX::LegRedemptionDate LegRedemptionDate_60("LOCALMKTDATE_717278844");
    noLegs_0_2.set(LegRedemptionDate_60);
    InstrumentLeg_60.insert(LegRedemptionDate_60.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_60("STRING_1662603499");
    noLegs_0_2.set(LegRepoCollateralSecurityType_60);
    InstrumentLeg_60.insert(LegRepoCollateralSecurityType_60.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_60;
    LegRepurchaseRate_60.setString("88.740000");
    noLegs_0_2.set(LegRepurchaseRate_60);
    InstrumentLeg_60.insert(LegRepurchaseRate_60.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_60(1890462395);
    noLegs_0_2.set(LegRepurchaseTerm_60);
    InstrumentLeg_60.insert(LegRepurchaseTerm_60.getString());
    FIX::LegSecurityDesc LegSecurityDesc_60("STRING_686371974");
    noLegs_0_2.set(LegSecurityDesc_60);
    InstrumentLeg_60.insert(LegSecurityDesc_60.getString());
    FIX::LegSecurityExchange LegSecurityExchange_60("EXCHANGE_439016651");
    noLegs_0_2.set(LegSecurityExchange_60);
    InstrumentLeg_60.insert(LegSecurityExchange_60.getString());
    FIX::LegSecurityID LegSecurityID_60("STRING_1945773189");
    noLegs_0_2.set(LegSecurityID_60);
    InstrumentLeg_60.insert(LegSecurityID_60.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_60("STRING_411385602");
    noLegs_0_2.set(LegSecurityIDSource_60);
    InstrumentLeg_60.insert(LegSecurityIDSource_60.getString());
    FIX::LegSecuritySubType LegSecuritySubType_60("STRING_1423941187");
    noLegs_0_2.set(LegSecuritySubType_60);
    InstrumentLeg_60.insert(LegSecuritySubType_60.getString());
    FIX::LegSecurityType LegSecurityType_60("STRING_1002111727");
    noLegs_0_2.set(LegSecurityType_60);
    InstrumentLeg_60.insert(LegSecurityType_60.getString());
    FIX::LegSide LegSide_60('5');
    noLegs_0_2.set(LegSide_60);
    InstrumentLeg_60.insert(LegSide_60.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_60("STRING_813137800");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_60);
    InstrumentLeg_60.insert(LegStateOrProvinceOfIssue_60.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_60("GBP");
    noLegs_0_2.set(LegStrikeCurrency_60);
    InstrumentLeg_60.insert(LegStrikeCurrency_60.getString());
    FIX::LegStrikePrice LegStrikePrice_60;
    LegStrikePrice_60.setString("20135274");
    noLegs_0_2.set(LegStrikePrice_60);
    InstrumentLeg_60.insert(LegStrikePrice_60.getString());
    FIX::LegSymbol LegSymbol_60("STRING_216082335");
    noLegs_0_2.set(LegSymbol_60);
    InstrumentLeg_60.insert(LegSymbol_60.getString());
    FIX::LegSymbolSfx LegSymbolSfx_60("STRING_65715124");
    noLegs_0_2.set(LegSymbolSfx_60);
    InstrumentLeg_60.insert(LegSymbolSfx_60.getString());
    FIX::LegTimeUnit LegTimeUnit_60("STRING_106460367");
    noLegs_0_2.set(LegTimeUnit_60);
    InstrumentLeg_60.insert(LegTimeUnit_60.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_60("STRING_1934197522");
    noLegs_0_2.set(LegUnitOfMeasure_60);
    InstrumentLeg_60.insert(LegUnitOfMeasure_60.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
    LegUnitOfMeasureQty_60.setString("8585553");
    noLegs_0_2.set(LegUnitOfMeasureQty_60);
    InstrumentLeg_60.insert(LegUnitOfMeasureQty_60.getString());
    all_values.push_back(InstrumentLeg_60);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
      FIX::LegSecurityAltID LegSecurityAltID_116("STRING_891668097");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltID_116.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_116("STRING_2083507018");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltIDSource_116.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_33;
  FIX::AttachmentPoint AttachmentPoint_33;
  AttachmentPoint_33.setString("60.160000");
  msg.set(AttachmentPoint_33);
  Instrument_33.insert(AttachmentPoint_33.getString());
  FIX::CFICode CFICode_33("STRING_1419414381");
  msg.set(CFICode_33);
  Instrument_33.insert(CFICode_33.getString());
  FIX::CPProgram CPProgram_33(99);
  msg.set(CPProgram_33);
  Instrument_33.insert(CPProgram_33.getString());
  FIX::CPRegType CPRegType_33("STRING_1371789881");
  msg.set(CPRegType_33);
  Instrument_33.insert(CPRegType_33.getString());
  FIX::CapPrice CapPrice_33;
  CapPrice_33.setString("13368280");
  msg.set(CapPrice_33);
  Instrument_33.insert(CapPrice_33.getString());
  FIX::ContractMultiplier ContractMultiplier_33;
  ContractMultiplier_33.setString("19873972");
  msg.set(ContractMultiplier_33);
  Instrument_33.insert(ContractMultiplier_33.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_33(1);
  msg.set(ContractMultiplierUnit_33);
  Instrument_33.insert(ContractMultiplierUnit_33.getString());
  FIX::ContractSettlMonth ContractSettlMonth_33("MONTHYEAR_22083439");
  msg.set(ContractSettlMonth_33);
  Instrument_33.insert(ContractSettlMonth_33.getString());
  FIX::CountryOfIssue CountryOfIssue_33("COUNTRY_557192462");
  msg.set(CountryOfIssue_33);
  Instrument_33.insert(CountryOfIssue_33.getString());
  FIX::CouponPaymentDate CouponPaymentDate_33("LOCALMKTDATE_51322923");
  msg.set(CouponPaymentDate_33);
  Instrument_33.insert(CouponPaymentDate_33.getString());
  FIX::CouponRate CouponRate_33;
  CouponRate_33.setString("23.140000");
  msg.set(CouponRate_33);
  Instrument_33.insert(CouponRate_33.getString());
  FIX::CreditRating CreditRating_33("STRING_300171209");
  msg.set(CreditRating_33);
  Instrument_33.insert(CreditRating_33.getString());
  FIX::DatedDate DatedDate_33("LOCALMKTDATE_737694897");
  msg.set(DatedDate_33);
  Instrument_33.insert(DatedDate_33.getString());
  FIX::DetachmentPoint DetachmentPoint_33;
  DetachmentPoint_33.setString("89.650000");
  msg.set(DetachmentPoint_33);
  Instrument_33.insert(DetachmentPoint_33.getString());
  FIX::EncodedIssuer EncodedIssuer_33("DATA_98460750");
  msg.set(EncodedIssuer_33);
  Instrument_33.insert(EncodedIssuer_33.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_33(1149080500);
  msg.set(EncodedIssuerLen_33);
  Instrument_33.insert(EncodedIssuerLen_33.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_33("DATA_1291726505");
  msg.set(EncodedSecurityDesc_33);
  Instrument_33.insert(EncodedSecurityDesc_33.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_33(1100572477);
  msg.set(EncodedSecurityDescLen_33);
  Instrument_33.insert(EncodedSecurityDescLen_33.getString());
  FIX::ExerciseStyle ExerciseStyle_33(1);
  msg.set(ExerciseStyle_33);
  Instrument_33.insert(ExerciseStyle_33.getString());
  FIX::Factor Factor_33;
  Factor_33.setString("21048643");
  msg.set(Factor_33);
  Instrument_33.insert(Factor_33.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_33(false);
  msg.set(FlexProductEligibilityIndicator_33);
  Instrument_33.insert(FlexProductEligibilityIndicator_33.getString());
  FIX::FlexibleIndicator FlexibleIndicator_33(true);
  msg.set(FlexibleIndicator_33);
  Instrument_33.insert(FlexibleIndicator_33.getString());
  FIX::FloorPrice FloorPrice_33;
  FloorPrice_33.setString("19709080");
  msg.set(FloorPrice_33);
  Instrument_33.insert(FloorPrice_33.getString());
  FIX::FlowScheduleType FlowScheduleType_33(0);
  msg.set(FlowScheduleType_33);
  Instrument_33.insert(FlowScheduleType_33.getString());
  FIX::InstrRegistry InstrRegistry_33("STRING_1261563554");
  msg.set(InstrRegistry_33);
  Instrument_33.insert(InstrRegistry_33.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_33('2');
  msg.set(InstrmtAssignmentMethod_33);
  Instrument_33.insert(InstrmtAssignmentMethod_33.getString());
  FIX::InterestAccrualDate InterestAccrualDate_33("LOCALMKTDATE_1208394485");
  msg.set(InterestAccrualDate_33);
  Instrument_33.insert(InterestAccrualDate_33.getString());
  FIX::IssueDate IssueDate_33("LOCALMKTDATE_2120118933");
  msg.set(IssueDate_33);
  Instrument_33.insert(IssueDate_33.getString());
  FIX::Issuer Issuer_33("STRING_1535779095");
  msg.set(Issuer_33);
  Instrument_33.insert(Issuer_33.getString());
  FIX::ListMethod ListMethod_33(0);
  msg.set(ListMethod_33);
  Instrument_33.insert(ListMethod_33.getString());
  FIX::LocaleOfIssue LocaleOfIssue_33("STRING_2056142303");
  msg.set(LocaleOfIssue_33);
  Instrument_33.insert(LocaleOfIssue_33.getString());
  FIX::MaturityDate MaturityDate_33("LOCALMKTDATE_794871464");
  msg.set(MaturityDate_33);
  Instrument_33.insert(MaturityDate_33.getString());
  FIX::MaturityMonthYear MaturityMonthYear_33("MONTHYEAR_1371993315");
  msg.set(MaturityMonthYear_33);
  Instrument_33.insert(MaturityMonthYear_33.getString());
  FIX::MaturityTime MaturityTime_33("TZTIMEONLY_1638390629");
  msg.set(MaturityTime_33);
  Instrument_33.insert(MaturityTime_33.getString());
  FIX::MinPriceIncrement MinPriceIncrement_33;
  MinPriceIncrement_33.setString("191776");
  msg.set(MinPriceIncrement_33);
  Instrument_33.insert(MinPriceIncrement_33.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
  MinPriceIncrementAmount_33.setString("5613377");
  msg.set(MinPriceIncrementAmount_33);
  Instrument_33.insert(MinPriceIncrementAmount_33.getString());
  FIX::NTPositionLimit NTPositionLimit_33(1478304246);
  msg.set(NTPositionLimit_33);
  Instrument_33.insert(NTPositionLimit_33.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
  NotionalPercentageOutstanding_33.setString("7.700000");
  msg.set(NotionalPercentageOutstanding_33);
  Instrument_33.insert(NotionalPercentageOutstanding_33.getString());
  FIX::OptAttribute OptAttribute_33('5');
  msg.set(OptAttribute_33);
  Instrument_33.insert(OptAttribute_33.getString());
  FIX::OptPayoutAmount OptPayoutAmount_33;
  OptPayoutAmount_33.setString("20354967");
  msg.set(OptPayoutAmount_33);
  Instrument_33.insert(OptPayoutAmount_33.getString());
  FIX::OptPayoutType OptPayoutType_33(2);
  msg.set(OptPayoutType_33);
  Instrument_33.insert(OptPayoutType_33.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
  OriginalNotionalPercentageOutstanding_33.setString("98.140000");
  msg.set(OriginalNotionalPercentageOutstanding_33);
  Instrument_33.insert(OriginalNotionalPercentageOutstanding_33.getString());
  FIX::Pool Pool_33("STRING_188184269");
  msg.set(Pool_33);
  Instrument_33.insert(Pool_33.getString());
  FIX::PositionLimit PositionLimit_33(1344398591);
  msg.set(PositionLimit_33);
  Instrument_33.insert(PositionLimit_33.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_33("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_33);
  Instrument_33.insert(PriceQuoteMethod_33.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_33("STRING_286645019");
  msg.set(PriceUnitOfMeasure_33);
  Instrument_33.insert(PriceUnitOfMeasure_33.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
  PriceUnitOfMeasureQty_33.setString("3459954");
  msg.set(PriceUnitOfMeasureQty_33);
  Instrument_33.insert(PriceUnitOfMeasureQty_33.getString());
  FIX::Product Product_35(2);
  msg.set(Product_35);
  Instrument_33.insert(Product_35.getString());
  FIX::ProductComplex ProductComplex_33("STRING_1387217496");
  msg.set(ProductComplex_33);
  Instrument_33.insert(ProductComplex_33.getString());
  FIX::PutOrCall PutOrCall_33(1);
  msg.set(PutOrCall_33);
  Instrument_33.insert(PutOrCall_33.getString());
  FIX::RedemptionDate RedemptionDate_33("LOCALMKTDATE_1129082293");
  msg.set(RedemptionDate_33);
  Instrument_33.insert(RedemptionDate_33.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_33("STRING_445332123");
  msg.set(RepoCollateralSecurityType_33);
  Instrument_33.insert(RepoCollateralSecurityType_33.getString());
  FIX::RepurchaseRate RepurchaseRate_33;
  RepurchaseRate_33.setString("71.190000");
  msg.set(RepurchaseRate_33);
  Instrument_33.insert(RepurchaseRate_33.getString());
  FIX::RepurchaseTerm RepurchaseTerm_33(952506730);
  msg.set(RepurchaseTerm_33);
  Instrument_33.insert(RepurchaseTerm_33.getString());
  FIX::RestructuringType RestructuringType_33("STRING_MM");
  msg.set(RestructuringType_33);
  Instrument_33.insert(RestructuringType_33.getString());
  FIX::SecurityDesc SecurityDesc_33("STRING_205167025");
  msg.set(SecurityDesc_33);
  Instrument_33.insert(SecurityDesc_33.getString());
  FIX::SecurityExchange SecurityExchange_33("EXCHANGE_882391535");
  msg.set(SecurityExchange_33);
  Instrument_33.insert(SecurityExchange_33.getString());
  FIX::SecurityGroup SecurityGroup_33("STRING_927923571");
  msg.set(SecurityGroup_33);
  Instrument_33.insert(SecurityGroup_33.getString());
  FIX::SecurityID SecurityID_33("STRING_177802310");
  msg.set(SecurityID_33);
  Instrument_33.insert(SecurityID_33.getString());
  FIX::SecurityIDSource SecurityIDSource_33("STRING_H");
  msg.set(SecurityIDSource_33);
  Instrument_33.insert(SecurityIDSource_33.getString());
  FIX::SecurityStatus SecurityStatus_33("STRING_2");
  msg.set(SecurityStatus_33);
  Instrument_33.insert(SecurityStatus_33.getString());
  FIX::SecuritySubType SecuritySubType_34("STRING_86460965");
  msg.set(SecuritySubType_34);
  Instrument_33.insert(SecuritySubType_34.getString());
  FIX::SecurityType SecurityType_35("STRING_TBOND");
  msg.set(SecurityType_35);
  Instrument_33.insert(SecurityType_35.getString());
  FIX::Seniority Seniority_33("STRING_SB");
  msg.set(Seniority_33);
  Instrument_33.insert(Seniority_33.getString());
  FIX::SettlMethod SettlMethod_33('C');
  msg.set(SettlMethod_33);
  Instrument_33.insert(SettlMethod_33.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_33("STRING_1084736144");
  msg.set(SettleOnOpenFlag_33);
  Instrument_33.insert(SettleOnOpenFlag_33.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_33("STRING_666349881");
  msg.set(StateOrProvinceOfIssue_33);
  Instrument_33.insert(StateOrProvinceOfIssue_33.getString());
  FIX::StrikeCurrency StrikeCurrency_33("USD");
  msg.set(StrikeCurrency_33);
  Instrument_33.insert(StrikeCurrency_33.getString());
  FIX::StrikeMultiplier StrikeMultiplier_33;
  StrikeMultiplier_33.setString("12497710");
  msg.set(StrikeMultiplier_33);
  Instrument_33.insert(StrikeMultiplier_33.getString());
  FIX::StrikePrice StrikePrice_33;
  StrikePrice_33.setString("9436852");
  msg.set(StrikePrice_33);
  Instrument_33.insert(StrikePrice_33.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_33(5);
  msg.set(StrikePriceBoundaryMethod_33);
  Instrument_33.insert(StrikePriceBoundaryMethod_33.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
  StrikePriceBoundaryPrecision_33.setString("8.430000");
  msg.set(StrikePriceBoundaryPrecision_33);
  Instrument_33.insert(StrikePriceBoundaryPrecision_33.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_33(4);
  msg.set(StrikePriceDeterminationMethod_33);
  Instrument_33.insert(StrikePriceDeterminationMethod_33.getString());
  FIX::StrikeValue StrikeValue_33;
  StrikeValue_33.setString("14437355");
  msg.set(StrikeValue_33);
  Instrument_33.insert(StrikeValue_33.getString());
  FIX::Symbol Symbol_33("STRING_1141935975");
  msg.set(Symbol_33);
  Instrument_33.insert(Symbol_33.getString());
  FIX::SymbolSfx SymbolSfx_33("STRING_CD");
  msg.set(SymbolSfx_33);
  Instrument_33.insert(SymbolSfx_33.getString());
  FIX::TimeUnit TimeUnit_33("STRING_Min");
  msg.set(TimeUnit_33);
  Instrument_33.insert(TimeUnit_33.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_33(4);
  msg.set(UnderlyingPriceDeterminationMethod_33);
  Instrument_33.insert(UnderlyingPriceDeterminationMethod_33.getString());
  FIX::UnitOfMeasure UnitOfMeasure_33("STRING_oz_tr");
  msg.set(UnitOfMeasure_33);
  Instrument_33.insert(UnitOfMeasure_33.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
  UnitOfMeasureQty_33.setString("16849696");
  msg.set(UnitOfMeasureQty_33);
  Instrument_33.insert(UnitOfMeasureQty_33.getString());
  FIX::ValuationMethod ValuationMethod_33("STRING_FUTDA");
  msg.set(ValuationMethod_33);
  Instrument_33.insert(ValuationMethod_33.getString());
  all_values.push_back(Instrument_33);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_61;
    FIX::ComplexEventCondition ComplexEventCondition_61(2);
    noComplexEvents_0_0.set(ComplexEventCondition_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventCondition_61.getString());
    FIX::ComplexEventPrice ComplexEventPrice_61;
    ComplexEventPrice_61.setString("1002593");
    noComplexEvents_0_0.set(ComplexEventPrice_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventPrice_61.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_61(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryMethod_61.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
    ComplexEventPriceBoundaryPrecision_61.setString("1.790000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryPrecision_61.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_61(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceTimeType_61.getString());
    FIX::ComplexEventType ComplexEventType_61(3);
    noComplexEvents_0_0.set(ComplexEventType_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexEventType_61.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
    ComplexOptPayoutAmount_61.setString("10115424");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_61);
    ComplexEvents_NoComplexEvents_61.insert(ComplexOptPayoutAmount_61.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_61);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_119;
      FIX::ComplexEventEndDate ComplexEventEndDate_119(FIX::UTCTIMESTAMP(23, 35, 42, 5, 8, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_119);
      ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventEndDate_119.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_119(FIX::UTCTIMESTAMP(17, 5, 0, 5, 1, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_119);
      ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventStartDate_119.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_119);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_243;
        FIX::ComplexEventEndTime ComplexEventEndTime_243(FIX::UTCTIMEONLY(9, 1, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_243);
        ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventEndTime_243.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_243(FIX::UTCTIMEONLY(19, 36, 55));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_243);
        ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventStartTime_243.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_243);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_244;
        FIX::ComplexEventEndTime ComplexEventEndTime_244(FIX::UTCTIMEONLY(3, 15, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_244);
        ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventEndTime_244.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_244(FIX::UTCTIMEONLY(7, 9, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_244);
        ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventStartTime_244.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_244);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_120;
      FIX::ComplexEventEndDate ComplexEventEndDate_120(FIX::UTCTIMESTAMP(0, 46, 50, 14, 7, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_120);
      ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventEndDate_120.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_120(FIX::UTCTIMESTAMP(15, 50, 4, 8, 8, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_120);
      ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventStartDate_120.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_120);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_245;
        FIX::ComplexEventEndTime ComplexEventEndTime_245(FIX::UTCTIMEONLY(9, 9, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_245);
        ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventEndTime_245.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_245(FIX::UTCTIMEONLY(20, 25, 12));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_245);
        ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventStartTime_245.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_245);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_246;
        FIX::ComplexEventEndTime ComplexEventEndTime_246(FIX::UTCTIMEONLY(5, 20, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_246);
        ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventEndTime_246.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_246(FIX::UTCTIMEONLY(7, 39, 6));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_246);
        ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventStartTime_246.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_246);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_121;
      FIX::ComplexEventEndDate ComplexEventEndDate_121(FIX::UTCTIMESTAMP(3, 52, 21, 1, 3, 2004));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_121);
      ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventEndDate_121.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_121(FIX::UTCTIMESTAMP(6, 49, 46, 2, 1, 2010));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_121);
      ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventStartDate_121.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_121);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_247;
        FIX::ComplexEventEndTime ComplexEventEndTime_247(FIX::UTCTIMEONLY(23, 19, 28));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_247);
        ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventEndTime_247.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_247(FIX::UTCTIMEONLY(20, 53, 49));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_247);
        ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventStartTime_247.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_247);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_248;
        FIX::ComplexEventEndTime ComplexEventEndTime_248(FIX::UTCTIMEONLY(22, 1, 43));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_248);
        ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventEndTime_248.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_248(FIX::UTCTIMEONLY(20, 22, 39));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_248);
        ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventStartTime_248.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_248);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_62;
    FIX::ComplexEventCondition ComplexEventCondition_62(2);
    noComplexEvents_0_1.set(ComplexEventCondition_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventCondition_62.getString());
    FIX::ComplexEventPrice ComplexEventPrice_62;
    ComplexEventPrice_62.setString("12215910");
    noComplexEvents_0_1.set(ComplexEventPrice_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPrice_62.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_62(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryMethod_62.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
    ComplexEventPriceBoundaryPrecision_62.setString("24.640000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryPrecision_62.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_62(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceTimeType_62.getString());
    FIX::ComplexEventType ComplexEventType_62(9);
    noComplexEvents_0_1.set(ComplexEventType_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventType_62.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
    ComplexOptPayoutAmount_62.setString("10906476");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexOptPayoutAmount_62.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_62);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_122;
      FIX::ComplexEventEndDate ComplexEventEndDate_122(FIX::UTCTIMESTAMP(15, 35, 55, 23, 2, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_122);
      ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventEndDate_122.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_122(FIX::UTCTIMESTAMP(16, 17, 14, 25, 2, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_122);
      ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventStartDate_122.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_122);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_249;
        FIX::ComplexEventEndTime ComplexEventEndTime_249(FIX::UTCTIMEONLY(10, 7, 5));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_249);
        ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventEndTime_249.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_249(FIX::UTCTIMEONLY(15, 19, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_249);
        ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventStartTime_249.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_249);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_63;
    FIX::EventDate EventDate_63("LOCALMKTDATE_175033781");
    noEvents_0_0.set(EventDate_63);
    EvntGrp_NoEvents_63.insert(EventDate_63.getString());
    FIX::EventPx EventPx_63;
    EventPx_63.setString("4416531");
    noEvents_0_0.set(EventPx_63);
    EvntGrp_NoEvents_63.insert(EventPx_63.getString());
    FIX::EventText EventText_63("STRING_341748486");
    noEvents_0_0.set(EventText_63);
    EvntGrp_NoEvents_63.insert(EventText_63.getString());
    FIX::EventTime EventTime_63(FIX::UTCTIMESTAMP(5, 28, 45, 26, 1, 2014));
    noEvents_0_0.set(EventTime_63);
    EvntGrp_NoEvents_63.insert(EventTime_63.getString());
    FIX::EventType EventType_63(18);
    noEvents_0_0.set(EventType_63);
    EvntGrp_NoEvents_63.insert(EventType_63.getString());
    all_values.push_back(EvntGrp_NoEvents_63);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_64;
    FIX::EventDate EventDate_64("LOCALMKTDATE_1622473779");
    noEvents_0_1.set(EventDate_64);
    EvntGrp_NoEvents_64.insert(EventDate_64.getString());
    FIX::EventPx EventPx_64;
    EventPx_64.setString("19140585");
    noEvents_0_1.set(EventPx_64);
    EvntGrp_NoEvents_64.insert(EventPx_64.getString());
    FIX::EventText EventText_64("STRING_404444234");
    noEvents_0_1.set(EventText_64);
    EvntGrp_NoEvents_64.insert(EventText_64.getString());
    FIX::EventTime EventTime_64(FIX::UTCTIMESTAMP(2, 31, 23, 19, 1, 2005));
    noEvents_0_1.set(EventTime_64);
    EvntGrp_NoEvents_64.insert(EventTime_64.getString());
    FIX::EventType EventType_64(18);
    noEvents_0_1.set(EventType_64);
    EvntGrp_NoEvents_64.insert(EventType_64.getString());
    all_values.push_back(EvntGrp_NoEvents_64);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_65;
    FIX::EventDate EventDate_65("LOCALMKTDATE_1453644551");
    noEvents_0_2.set(EventDate_65);
    EvntGrp_NoEvents_65.insert(EventDate_65.getString());
    FIX::EventPx EventPx_65;
    EventPx_65.setString("5590629");
    noEvents_0_2.set(EventPx_65);
    EvntGrp_NoEvents_65.insert(EventPx_65.getString());
    FIX::EventText EventText_65("STRING_1409801444");
    noEvents_0_2.set(EventText_65);
    EvntGrp_NoEvents_65.insert(EventText_65.getString());
    FIX::EventTime EventTime_65(FIX::UTCTIMESTAMP(8, 23, 28, 7, 6, 2009));
    noEvents_0_2.set(EventTime_65);
    EvntGrp_NoEvents_65.insert(EventTime_65.getString());
    FIX::EventType EventType_65(7);
    noEvents_0_2.set(EventType_65);
    EvntGrp_NoEvents_65.insert(EventType_65.getString());
    all_values.push_back(EvntGrp_NoEvents_65);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_70;
    FIX::InstrumentPartyID InstrumentPartyID_70("STRING_1760784417");
    noInstrumentParties_0_0.set(InstrumentPartyID_70);
    InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyID_70.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_70('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_70);
    InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyIDSource_70.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_70(892564232);
    noInstrumentParties_0_0.set(InstrumentPartyRole_70);
    InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyRole_70.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_70);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
      FIX::InstrumentPartySubID InstrumentPartySubID_152("STRING_2063944150");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_152);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubID_152.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_152(992854136);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_152);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubIDType_152.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
      FIX::InstrumentPartySubID InstrumentPartySubID_153("STRING_425251126");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_153);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubID_153.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_153(813813379);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_153);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubIDType_153.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_71;
    FIX::InstrumentPartyID InstrumentPartyID_71("STRING_467844267");
    noInstrumentParties_0_1.set(InstrumentPartyID_71);
    InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyID_71.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_71('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_71);
    InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyIDSource_71.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_71(1218257613);
    noInstrumentParties_0_1.set(InstrumentPartyRole_71);
    InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyRole_71.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_71);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
      FIX::InstrumentPartySubID InstrumentPartySubID_154("STRING_19131979");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_154);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubID_154.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_154(1035182037);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_154);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubIDType_154.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_72;
    FIX::InstrumentPartyID InstrumentPartyID_72("STRING_540442320");
    noInstrumentParties_0_2.set(InstrumentPartyID_72);
    InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyID_72.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_72('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_72);
    InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyIDSource_72.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_72(418833517);
    noInstrumentParties_0_2.set(InstrumentPartyRole_72);
    InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyRole_72.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_72);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
      FIX::InstrumentPartySubID InstrumentPartySubID_155("STRING_187153520");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_155);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubID_155.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_155(1872478068);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_155);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubIDType_155.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
      FIX::InstrumentPartySubID InstrumentPartySubID_156("STRING_475608376");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_156);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubID_156.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_156(1596954964);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_156);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubIDType_156.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
      FIX::InstrumentPartySubID InstrumentPartySubID_157("STRING_297400249");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_157);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubID_157.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_157(1993123297);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_157);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubIDType_157.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_70;
    FIX::SecurityAltID SecurityAltID_70("STRING_1970732477");
    noSecurityAltID_0_0.set(SecurityAltID_70);
    SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltID_70.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_70("STRING_1262610400");
    noSecurityAltID_0_0.set(SecurityAltIDSource_70);
    SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltIDSource_70.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_71;
    FIX::SecurityAltID SecurityAltID_71("STRING_220378097");
    noSecurityAltID_0_1.set(SecurityAltID_71);
    SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltID_71.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_71("STRING_1671614838");
    noSecurityAltID_0_1.set(SecurityAltIDSource_71);
    SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltIDSource_71.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_72;
    FIX::SecurityAltID SecurityAltID_72("STRING_973750619");
    noSecurityAltID_0_2.set(SecurityAltID_72);
    SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltID_72.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_72("STRING_1828029809");
    noSecurityAltID_0_2.set(SecurityAltIDSource_72);
    SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltIDSource_72.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_66;
  FIX::SecurityXML SecurityXML_67("XMLDATA_1284915607");
  msg.set(SecurityXML_67);
  FIX::SecurityXMLLen SecurityXMLLen_33(519314499);
  msg.set(SecurityXMLLen_33);
  FIX::SecurityXMLSchema SecurityXMLSchema_33("STRING_573110393");
  msg.set(SecurityXMLSchema_33);
  SecurityXML_66.insert(SecurityXMLSchema_33.getString());
  all_values.push_back(SecurityXML_66);

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    FIX::Currency Currency_26("EUR");
    noMDEntries_0_0.set(Currency_26);
    MDFullGrp_NoMDEntries_0.insert(Currency_26.getString());
    FIX::DealingCapacity DealingCapacity_1('P');
    noMDEntries_0_0.set(DealingCapacity_1);
    MDFullGrp_NoMDEntries_0.insert(DealingCapacity_1.getString());
    FIX::DeskID DeskID_1("STRING_1249588380");
    noMDEntries_0_0.set(DeskID_1);
    MDFullGrp_NoMDEntries_0.insert(DeskID_1.getString());
    FIX::EncodedText EncodedText_46("DATA_2033808796");
    noMDEntries_0_0.set(EncodedText_46);
    MDFullGrp_NoMDEntries_0.insert(EncodedText_46.getString());
    FIX::EncodedTextLen EncodedTextLen_46(688301492);
    noMDEntries_0_0.set(EncodedTextLen_46);
    MDFullGrp_NoMDEntries_0.insert(EncodedTextLen_46.getString());
    FIX::ExecInst ExecInst_3("MULTIPLECHARVALUE_9");
    noMDEntries_0_0.set(ExecInst_3);
    MDFullGrp_NoMDEntries_0.insert(ExecInst_3.getString());
    FIX::ExpireDate ExpireDate_4("LOCALMKTDATE_1506857693");
    noMDEntries_0_0.set(ExpireDate_4);
    MDFullGrp_NoMDEntries_0.insert(ExpireDate_4.getString());
    FIX::ExpireTime ExpireTime_5(FIX::UTCTIMESTAMP(22, 54, 41, 8, 10, 2001));
    noMDEntries_0_0.set(ExpireTime_5);
    MDFullGrp_NoMDEntries_0.insert(ExpireTime_5.getString());
    FIX::FirstPx FirstPx_1;
    FirstPx_1.setString("14993723");
    noMDEntries_0_0.set(FirstPx_1);
    MDFullGrp_NoMDEntries_0.insert(FirstPx_1.getString());
    FIX::HaltReasonInt HaltReasonInt_1(0);
    noMDEntries_0_0.set(HaltReasonInt_1);
    FIX::HighPx HighPx_1;
    HighPx_1.setString("14541854");
    noMDEntries_0_0.set(HighPx_1);
    MDFullGrp_NoMDEntries_0.insert(HighPx_1.getString());
    FIX::LastPx LastPx_10;
    LastPx_10.setString("17967725");
    noMDEntries_0_0.set(LastPx_10);
    MDFullGrp_NoMDEntries_0.insert(LastPx_10.getString());
    FIX::LocationID LocationID_1("STRING_137609867");
    noMDEntries_0_0.set(LocationID_1);
    MDFullGrp_NoMDEntries_0.insert(LocationID_1.getString());
    FIX::LotType LotType_6('3');
    noMDEntries_0_0.set(LotType_6);
    MDFullGrp_NoMDEntries_0.insert(LotType_6.getString());
    FIX::LowPx LowPx_1;
    LowPx_1.setString("16200213");
    noMDEntries_0_0.set(LowPx_1);
    MDFullGrp_NoMDEntries_0.insert(LowPx_1.getString());
    FIX::MDEntryBuyer MDEntryBuyer_1("STRING_1400220267");
    noMDEntries_0_0.set(MDEntryBuyer_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryBuyer_1.getString());
    FIX::MDEntryDate MDEntryDate_1(FIX::UTCDATEONLY(12, 7, 2000));
    noMDEntries_0_0.set(MDEntryDate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryDate_1.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_1;
    MDEntryForwardPoints_1.setString("2815845");
    noMDEntries_0_0.set(MDEntryForwardPoints_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryForwardPoints_1.getString());
    FIX::MDEntryID MDEntryID_1("STRING_745801737");
    noMDEntries_0_0.set(MDEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryID_1.getString());
    FIX::MDEntryOriginator MDEntryOriginator_1("STRING_882695021");
    noMDEntries_0_0.set(MDEntryOriginator_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryOriginator_1.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_1(352808840);
    noMDEntries_0_0.set(MDEntryPositionNo_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPositionNo_1.getString());
    FIX::MDEntryPx MDEntryPx_1;
    MDEntryPx_1.setString("11815767");
    noMDEntries_0_0.set(MDEntryPx_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPx_1.getString());
    FIX::MDEntrySeller MDEntrySeller_1("STRING_301175902");
    noMDEntries_0_0.set(MDEntrySeller_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySeller_1.getString());
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("8492842");
    noMDEntries_0_0.set(MDEntrySize_3);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySize_3.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_1;
    MDEntrySpotRate_1.setString("2836814");
    noMDEntries_0_0.set(MDEntrySpotRate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySpotRate_1.getString());
    FIX::MDEntryTime MDEntryTime_1(FIX::UTCTIMEONLY(0, 56, 24));
    noMDEntries_0_0.set(MDEntryTime_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryTime_1.getString());
    FIX::MDEntryType MDEntryType_4('K');
    noMDEntries_0_0.set(MDEntryType_4);
    MDFullGrp_NoMDEntries_0.insert(MDEntryType_4.getString());
    FIX::MDMkt MDMkt_1("EXCHANGE_1959588198");
    noMDEntries_0_0.set(MDMkt_1);
    MDFullGrp_NoMDEntries_0.insert(MDMkt_1.getString());
    FIX::MDOriginType MDOriginType_1(1);
    noMDEntries_0_0.set(MDOriginType_1);
    MDFullGrp_NoMDEntries_0.insert(MDOriginType_1.getString());
    FIX::MDPriceLevel MDPriceLevel_1(1915096236);
    noMDEntries_0_0.set(MDPriceLevel_1);
    MDFullGrp_NoMDEntries_0.insert(MDPriceLevel_1.getString());
    FIX::MDQuoteType MDQuoteType_2(0);
    noMDEntries_0_0.set(MDQuoteType_2);
    MDFullGrp_NoMDEntries_0.insert(MDQuoteType_2.getString());
    FIX::MinQty MinQty_3;
    MinQty_3.setString("14105369");
    noMDEntries_0_0.set(MinQty_3);
    MDFullGrp_NoMDEntries_0.insert(MinQty_3.getString());
    FIX::NumberOfOrders NumberOfOrders_1(1772326770);
    noMDEntries_0_0.set(NumberOfOrders_1);
    MDFullGrp_NoMDEntries_0.insert(NumberOfOrders_1.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_2("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(OpenCloseSettlFlag_2);
    MDFullGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_2.getString());
    FIX::OrdType OrdType_14('J');
    noMDEntries_0_0.set(OrdType_14);
    MDFullGrp_NoMDEntries_0.insert(OrdType_14.getString());
    FIX::OrderCapacity OrderCapacity_6('I');
    noMDEntries_0_0.set(OrderCapacity_6);
    MDFullGrp_NoMDEntries_0.insert(OrderCapacity_6.getString());
    FIX::OrderID OrderID_26("STRING_587660044");
    noMDEntries_0_0.set(OrderID_26);
    MDFullGrp_NoMDEntries_0.insert(OrderID_26.getString());
    FIX::PriceDelta PriceDelta_2;
    PriceDelta_2.setString("18401170");
    noMDEntries_0_0.set(PriceDelta_2);
    MDFullGrp_NoMDEntries_0.insert(PriceDelta_2.getString());
    FIX::PriceType PriceType_18(7);
    noMDEntries_0_0.set(PriceType_18);
    MDFullGrp_NoMDEntries_0.insert(PriceType_18.getString());
    FIX::QuoteCondition QuoteCondition_1("MULTIPLESTRINGVALUE_j");
    noMDEntries_0_0.set(QuoteCondition_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteCondition_1.getString());
    FIX::QuoteEntryID QuoteEntryID_1("STRING_1092853656");
    noMDEntries_0_0.set(QuoteEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteEntryID_1.getString());
    FIX::RptSeq RptSeq_2(2116727457);
    noMDEntries_0_0.set(RptSeq_2);
    MDFullGrp_NoMDEntries_0.insert(RptSeq_2.getString());
    FIX::Scope Scope_2("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(Scope_2);
    MDFullGrp_NoMDEntries_0.insert(Scope_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_21("STRING_1319340895");
    noMDEntries_0_0.set(SecondaryOrderID_21);
    MDFullGrp_NoMDEntries_0.insert(SecondaryOrderID_21.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_1(15);
    noMDEntries_0_0.set(SecurityTradingStatus_1);
    MDFullGrp_NoMDEntries_0.insert(SecurityTradingStatus_1.getString());
    FIX::SellerDays SellerDays_1(1485934931);
    noMDEntries_0_0.set(SellerDays_1);
    MDFullGrp_NoMDEntries_0.insert(SellerDays_1.getString());
    FIX::SettlCurrency SettlCurrency_10("EUR");
    noMDEntries_0_0.set(SettlCurrency_10);
    MDFullGrp_NoMDEntries_0.insert(SettlCurrency_10.getString());
    FIX::SettlDate SettlDate_17("LOCALMKTDATE_1838743771");
    noMDEntries_0_0.set(SettlDate_17);
    MDFullGrp_NoMDEntries_0.insert(SettlDate_17.getString());
    FIX::SettlType SettlType_11("STRING_C");
    noMDEntries_0_0.set(SettlType_11);
    MDFullGrp_NoMDEntries_0.insert(SettlType_11.getString());
    FIX::Text Text_46("STRING_1462699362");
    noMDEntries_0_0.set(Text_46);
    MDFullGrp_NoMDEntries_0.insert(Text_46.getString());
    FIX::TickDirection TickDirection_1('3');
    noMDEntries_0_0.set(TickDirection_1);
    MDFullGrp_NoMDEntries_0.insert(TickDirection_1.getString());
    FIX::TimeInForce TimeInForce_12('3');
    noMDEntries_0_0.set(TimeInForce_12);
    MDFullGrp_NoMDEntries_0.insert(TimeInForce_12.getString());
    FIX::TradeCondition TradeCondition_1("MULTIPLESTRINGVALUE_Q");
    noMDEntries_0_0.set(TradeCondition_1);
    MDFullGrp_NoMDEntries_0.insert(TradeCondition_1.getString());
    FIX::TradeVolume TradeVolume_1;
    TradeVolume_1.setString("20781301");
    noMDEntries_0_0.set(TradeVolume_1);
    MDFullGrp_NoMDEntries_0.insert(TradeVolume_1.getString());
    FIX::TradingSessionID TradingSessionID_22("STRING_2");
    noMDEntries_0_0.set(TradingSessionID_22);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionID_22.getString());
    FIX::TradingSessionSubID TradingSessionSubID_22("STRING_1");
    noMDEntries_0_0.set(TradingSessionSubID_22);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionSubID_22.getString());
    FIX::TrdType TrdType_4(7);
    noMDEntries_0_0.set(TrdType_4);
    MDFullGrp_NoMDEntries_0.insert(TrdType_4.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_53;
      FIX::PartyID PartyID_53("STRING_643766972");
      noPartyIDs_0_1_0.set(PartyID_53);
      Parties_NoPartyIDs_53.insert(PartyID_53.getString());
      FIX::PartyIDSource PartyIDSource_53('5');
      noPartyIDs_0_1_0.set(PartyIDSource_53);
      Parties_NoPartyIDs_53.insert(PartyIDSource_53.getString());
      FIX::PartyRole PartyRole_53(40);
      noPartyIDs_0_1_0.set(PartyRole_53);
      Parties_NoPartyIDs_53.insert(PartyRole_53.getString());
      all_values.push_back(Parties_NoPartyIDs_53);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_106;
        FIX::PartySubID PartySubID_106("STRING_1568121421");
        noPartySubIDs_0_0_2_0.set(PartySubID_106);
        PtysSubGrp_NoPartySubIDs_106.insert(PartySubID_106.getString());
        FIX::PartySubIDType PartySubIDType_106(14);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_106);
        PtysSubGrp_NoPartySubIDs_106.insert(PartySubIDType_106.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_106);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_107;
        FIX::PartySubID PartySubID_107("STRING_1609327446");
        noPartySubIDs_0_0_2_1.set(PartySubID_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubID_107.getString());
        FIX::PartySubIDType PartySubIDType_107(29);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubIDType_107.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_107);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_108;
        FIX::PartySubID PartySubID_108("STRING_616611882");
        noPartySubIDs_0_0_2_2.set(PartySubID_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubID_108.getString());
        FIX::PartySubIDType PartySubIDType_108(22);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubIDType_108.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_108);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_8;
      FIX::RateSource RateSource_13(1);
      noRateSources_0_1_0.set(RateSource_13);
      RateSource_NoRateSources_8.insert(RateSource_13.getString());
      FIX::RateSourceType RateSourceType_8(1);
      noRateSources_0_1_0.set(RateSourceType_8);
      RateSource_NoRateSources_8.insert(RateSourceType_8.getString());
      FIX::ReferencePage ReferencePage_8("STRING_1956599192");
      noRateSources_0_1_0.set(ReferencePage_8);
      RateSource_NoRateSources_8.insert(ReferencePage_8.getString());
      all_values.push_back(RateSource_NoRateSources_8);

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_9;
      FIX::RateSource RateSource_14(0);
      noRateSources_0_1_1.set(RateSource_14);
      RateSource_NoRateSources_9.insert(RateSource_14.getString());
      FIX::RateSourceType RateSourceType_9(0);
      noRateSources_0_1_1.set(RateSourceType_9);
      RateSource_NoRateSources_9.insert(RateSourceType_9.getString());
      FIX::ReferencePage ReferencePage_9("STRING_87943982");
      noRateSources_0_1_1.set(ReferencePage_9);
      RateSource_NoRateSources_9.insert(ReferencePage_9.getString());
      all_values.push_back(RateSource_NoRateSources_9);

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_2;
      FIX::MDSecSize MDSecSize_2;
      MDSecSize_2.setString("14843307");
      noOfSecSizes_0_1_0.set(MDSecSize_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSize_2.getString());
      FIX::MDSecSizeType MDSecSizeType_2(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSizeType_2.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_2);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_3;
      FIX::MDSecSize MDSecSize_3;
      MDSecSize_3.setString("9108714");
      noOfSecSizes_0_1_1.set(MDSecSize_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSize_3.getString());
      FIX::MDSecSizeType MDSecSizeType_3(1);
      noOfSecSizes_0_1_1.set(MDSecSizeType_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSizeType_3.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_3);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_13;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_13("JPY");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveCurrency_13.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_13("STRING_OTHER");
    noMDEntries_0_0.set(BenchmarkCurveName_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveName_13.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_13("STRING_67399921");
    noMDEntries_0_0.set(BenchmarkCurvePoint_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurvePoint_13.getString());
    FIX::BenchmarkPrice BenchmarkPrice_13;
    BenchmarkPrice_13.setString("13820623");
    noMDEntries_0_0.set(BenchmarkPrice_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPrice_13.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_13(1658477353);
    noMDEntries_0_0.set(BenchmarkPriceType_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPriceType_13.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_13("STRING_1264475430");
    noMDEntries_0_0.set(BenchmarkSecurityID_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityID_13.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_13("STRING_1410244400");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityIDSource_13.getString());
    FIX::Spread Spread_13;
    Spread_13.setString("13100592");
    noMDEntries_0_0.set(Spread_13);
    SpreadOrBenchmarkCurveData_13.insert(Spread_13.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_13);

    // YieldData
    multiset<string> YieldData_8;
    FIX::Yield Yield_8;
    Yield_8.setString("24.020000");
    noMDEntries_0_0.set(Yield_8);
    YieldData_8.insert(Yield_8.getString());
    FIX::YieldCalcDate YieldCalcDate_8("LOCALMKTDATE_1206039051");
    noMDEntries_0_0.set(YieldCalcDate_8);
    YieldData_8.insert(YieldCalcDate_8.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_8("LOCALMKTDATE_400639979");
    noMDEntries_0_0.set(YieldRedemptionDate_8);
    YieldData_8.insert(YieldRedemptionDate_8.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_8;
    YieldRedemptionPrice_8.setString("18150626");
    noMDEntries_0_0.set(YieldRedemptionPrice_8);
    YieldData_8.insert(YieldRedemptionPrice_8.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_8(626676824);
    noMDEntries_0_0.set(YieldRedemptionPriceType_8);
    YieldData_8.insert(YieldRedemptionPriceType_8.getString());
    FIX::YieldType YieldType_8("STRING_LASTMONTH");
    noMDEntries_0_0.set(YieldType_8);
    YieldData_8.insert(YieldType_8.getString());
    all_values.push_back(YieldData_8);

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    FIX::RoutingID RoutingID_5("STRING_1126343217");
    noRoutingIDs_0_0.set(RoutingID_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingID_5.getString());
    FIX::RoutingType RoutingType_5(4);
    noRoutingIDs_0_0.set(RoutingType_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingType_5.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_5);

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_49;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_49("DATA_966214952");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_49);
    UnderlyingInstrument_49.insert(EncodedUnderlyingIssuer_49.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_49(1723013376);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_49);
    UnderlyingInstrument_49.insert(EncodedUnderlyingIssuerLen_49.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_49("DATA_678714507");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_49);
    UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDesc_49.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_49(775330497);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_49);
    UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDescLen_49.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
    UnderlyingAdjustedQuantity_49.setString("14566897");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_49);
    UnderlyingInstrument_49.insert(UnderlyingAdjustedQuantity_49.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
    UnderlyingAllocationPercent_49.setString("25.970000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_49);
    UnderlyingInstrument_49.insert(UnderlyingAllocationPercent_49.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
    UnderlyingAttachmentPoint_49.setString("44.790000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_49);
    UnderlyingInstrument_49.insert(UnderlyingAttachmentPoint_49.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_49("STRING_528817484");
    noUnderlyings_0_0.set(UnderlyingCFICode_49);
    UnderlyingInstrument_49.insert(UnderlyingCFICode_49.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_49("STRING_1582233320");
    noUnderlyings_0_0.set(UnderlyingCPProgram_49);
    UnderlyingInstrument_49.insert(UnderlyingCPProgram_49.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_49("STRING_2112741921");
    noUnderlyings_0_0.set(UnderlyingCPRegType_49);
    UnderlyingInstrument_49.insert(UnderlyingCPRegType_49.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_49;
    UnderlyingCapValue_49.setString("14396889");
    noUnderlyings_0_0.set(UnderlyingCapValue_49);
    UnderlyingInstrument_49.insert(UnderlyingCapValue_49.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
    UnderlyingCashAmount_49.setString("20183161");
    noUnderlyings_0_0.set(UnderlyingCashAmount_49);
    UnderlyingInstrument_49.insert(UnderlyingCashAmount_49.getString());
    FIX::UnderlyingCashType UnderlyingCashType_49("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_49);
    UnderlyingInstrument_49.insert(UnderlyingCashType_49.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
    UnderlyingContractMultiplier_49.setString("7436211");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_49);
    UnderlyingInstrument_49.insert(UnderlyingContractMultiplier_49.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_49(1689832462);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_49);
    UnderlyingInstrument_49.insert(UnderlyingContractMultiplierUnit_49.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_49("COUNTRY_597341350");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_49);
    UnderlyingInstrument_49.insert(UnderlyingCountryOfIssue_49.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_49("LOCALMKTDATE_2125683491");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_49);
    UnderlyingInstrument_49.insert(UnderlyingCouponPaymentDate_49.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
    UnderlyingCouponRate_49.setString("61.670000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_49);
    UnderlyingInstrument_49.insert(UnderlyingCouponRate_49.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_49("STRING_1861816781");
    noUnderlyings_0_0.set(UnderlyingCreditRating_49);
    UnderlyingInstrument_49.insert(UnderlyingCreditRating_49.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_49("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_49);
    UnderlyingInstrument_49.insert(UnderlyingCurrency_49.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
    UnderlyingCurrentValue_49.setString("16225755");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_49);
    UnderlyingInstrument_49.insert(UnderlyingCurrentValue_49.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
    UnderlyingDetachmentPoint_49.setString("96.470000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_49);
    UnderlyingInstrument_49.insert(UnderlyingDetachmentPoint_49.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
    UnderlyingDirtyPrice_49.setString("7640417");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_49);
    UnderlyingInstrument_49.insert(UnderlyingDirtyPrice_49.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
    UnderlyingEndPrice_49.setString("12901545");
    noUnderlyings_0_0.set(UnderlyingEndPrice_49);
    UnderlyingInstrument_49.insert(UnderlyingEndPrice_49.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_49;
    UnderlyingEndValue_49.setString("10736764");
    noUnderlyings_0_0.set(UnderlyingEndValue_49);
    UnderlyingInstrument_49.insert(UnderlyingEndValue_49.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_49(1193633580);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_49);
    UnderlyingInstrument_49.insert(UnderlyingExerciseStyle_49.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_49;
    UnderlyingFXRate_49.setString("4195773");
    noUnderlyings_0_0.set(UnderlyingFXRate_49);
    UnderlyingInstrument_49.insert(UnderlyingFXRate_49.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_49('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_49);
    UnderlyingInstrument_49.insert(UnderlyingFXRateCalc_49.getString());
    FIX::UnderlyingFactor UnderlyingFactor_49;
    UnderlyingFactor_49.setString("923536");
    noUnderlyings_0_0.set(UnderlyingFactor_49);
    UnderlyingInstrument_49.insert(UnderlyingFactor_49.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_49(850961058);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_49);
    UnderlyingInstrument_49.insert(UnderlyingFlowScheduleType_49.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_49("STRING_1018750994");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_49);
    UnderlyingInstrument_49.insert(UnderlyingInstrRegistry_49.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_49("LOCALMKTDATE_1815367007");
    noUnderlyings_0_0.set(UnderlyingIssueDate_49);
    UnderlyingInstrument_49.insert(UnderlyingIssueDate_49.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_49("STRING_1529675565");
    noUnderlyings_0_0.set(UnderlyingIssuer_49);
    UnderlyingInstrument_49.insert(UnderlyingIssuer_49.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_49("STRING_1794081491");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_49);
    UnderlyingInstrument_49.insert(UnderlyingLocaleOfIssue_49.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_49("LOCALMKTDATE_1124573148");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_49);
    UnderlyingInstrument_49.insert(UnderlyingMaturityDate_49.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_49("MONTHYEAR_1627578162");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_49);
    UnderlyingInstrument_49.insert(UnderlyingMaturityMonthYear_49.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_49("TZTIMEONLY_509872322");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_49);
    UnderlyingInstrument_49.insert(UnderlyingMaturityTime_49.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
    UnderlyingNotionalPercentageOutstanding_49.setString("6.320000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_49);
    UnderlyingInstrument_49.insert(UnderlyingNotionalPercentageOutstanding_49.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_49('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_49);
    UnderlyingInstrument_49.insert(UnderlyingOptAttribute_49.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
    UnderlyingOriginalNotionalPercentageOutstanding_49.setString("5.960000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_49);
    UnderlyingInstrument_49.insert(UnderlyingOriginalNotionalPercentageOutstanding_49.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_49("STRING_945595935");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_49);
    UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasure_49.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
    UnderlyingPriceUnitOfMeasureQty_49.setString("9331603");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_49);
    UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasureQty_49.getString());
    FIX::UnderlyingProduct UnderlyingProduct_49(1005072025);
    noUnderlyings_0_0.set(UnderlyingProduct_49);
    UnderlyingInstrument_49.insert(UnderlyingProduct_49.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_49(1689217088);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_49);
    UnderlyingInstrument_49.insert(UnderlyingPutOrCall_49.getString());
    FIX::UnderlyingPx UnderlyingPx_49;
    UnderlyingPx_49.setString("4755091");
    noUnderlyings_0_0.set(UnderlyingPx_49);
    UnderlyingInstrument_49.insert(UnderlyingPx_49.getString());
    FIX::UnderlyingQty UnderlyingQty_49;
    UnderlyingQty_49.setString("16024133");
    noUnderlyings_0_0.set(UnderlyingQty_49);
    UnderlyingInstrument_49.insert(UnderlyingQty_49.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_49("LOCALMKTDATE_1667416932");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_49);
    UnderlyingInstrument_49.insert(UnderlyingRedemptionDate_49.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_49("STRING_1676335286");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_49);
    UnderlyingInstrument_49.insert(UnderlyingRepoCollateralSecurityType_49.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
    UnderlyingRepurchaseRate_49.setString("65.090000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_49);
    UnderlyingInstrument_49.insert(UnderlyingRepurchaseRate_49.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_49(908377528);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_49);
    UnderlyingInstrument_49.insert(UnderlyingRepurchaseTerm_49.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_49("STRING_2039737070");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_49);
    UnderlyingInstrument_49.insert(UnderlyingRestructuringType_49.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_49("STRING_791838396");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_49);
    UnderlyingInstrument_49.insert(UnderlyingSecurityDesc_49.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_49("EXCHANGE_1355377175");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_49);
    UnderlyingInstrument_49.insert(UnderlyingSecurityExchange_49.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_49("STRING_656295186");
    noUnderlyings_0_0.set(UnderlyingSecurityID_49);
    UnderlyingInstrument_49.insert(UnderlyingSecurityID_49.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_49("STRING_2081992962");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_49);
    UnderlyingInstrument_49.insert(UnderlyingSecurityIDSource_49.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_49("STRING_281569999");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_49);
    UnderlyingInstrument_49.insert(UnderlyingSecuritySubType_49.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_49("STRING_1849928766");
    noUnderlyings_0_0.set(UnderlyingSecurityType_49);
    UnderlyingInstrument_49.insert(UnderlyingSecurityType_49.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_49("STRING_354086709");
    noUnderlyings_0_0.set(UnderlyingSeniority_49);
    UnderlyingInstrument_49.insert(UnderlyingSeniority_49.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_49("STRING_334106041");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_49);
    UnderlyingInstrument_49.insert(UnderlyingSettlMethod_49.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_49(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_49);
    UnderlyingInstrument_49.insert(UnderlyingSettlementType_49.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_49;
    UnderlyingStartValue_49.setString("12050477");
    noUnderlyings_0_0.set(UnderlyingStartValue_49);
    UnderlyingInstrument_49.insert(UnderlyingStartValue_49.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_49("STRING_1352857035");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_49);
    UnderlyingInstrument_49.insert(UnderlyingStateOrProvinceOfIssue_49.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_49("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_49);
    UnderlyingInstrument_49.insert(UnderlyingStrikeCurrency_49.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
    UnderlyingStrikePrice_49.setString("9994548");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_49);
    UnderlyingInstrument_49.insert(UnderlyingStrikePrice_49.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_49("STRING_587255257");
    noUnderlyings_0_0.set(UnderlyingSymbol_49);
    UnderlyingInstrument_49.insert(UnderlyingSymbol_49.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_49("STRING_67334198");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_49);
    UnderlyingInstrument_49.insert(UnderlyingSymbolSfx_49.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_49("STRING_1509327200");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_49);
    UnderlyingInstrument_49.insert(UnderlyingTimeUnit_49.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_49("STRING_93162241");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_49);
    UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasure_49.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
    UnderlyingUnitOfMeasureQty_49.setString("11296620");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_49);
    UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasureQty_49.getString());
    all_values.push_back(UnderlyingInstrument_49);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_102("STRING_1038758176");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_102);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltID_102.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_102("STRING_2062822339");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_102);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltIDSource_102.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_87;
      FIX::UnderlyingStipType UnderlyingStipType_87("STRING_580491617");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_87);
      UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipType_87.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_87("STRING_390847810");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_87);
      UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipValue_87.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_87);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_106("STRING_100424901");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyID_106.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_106('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyIDSource_106.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_106(1613722411);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyRole_106.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_210("STRING_1959436519");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubID_210.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_210(258077159);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubIDType_210.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_211("STRING_216695956");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubID_211.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_211(468248057);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubIDType_211.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_107("STRING_192586474");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyID_107.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_107('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyIDSource_107.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_107(170693176);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyRole_107.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_212("STRING_832371997");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubID_212.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_212(2112975574);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubIDType_212.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_213("STRING_1751720950");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubID_213.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_213(37745384);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubIDType_213.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_50;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_50("DATA_1575657683");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingIssuer_50.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_50(191476986);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingIssuerLen_50.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_50("DATA_1037200262");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDesc_50.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_50(15429293);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDescLen_50.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
    UnderlyingAdjustedQuantity_50.setString("2588111");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_50);
    UnderlyingInstrument_50.insert(UnderlyingAdjustedQuantity_50.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
    UnderlyingAllocationPercent_50.setString("38.140000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_50);
    UnderlyingInstrument_50.insert(UnderlyingAllocationPercent_50.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
    UnderlyingAttachmentPoint_50.setString("15.340000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_50);
    UnderlyingInstrument_50.insert(UnderlyingAttachmentPoint_50.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_50("STRING_1388473218");
    noUnderlyings_0_1.set(UnderlyingCFICode_50);
    UnderlyingInstrument_50.insert(UnderlyingCFICode_50.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_50("STRING_236017963");
    noUnderlyings_0_1.set(UnderlyingCPProgram_50);
    UnderlyingInstrument_50.insert(UnderlyingCPProgram_50.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_50("STRING_1147349711");
    noUnderlyings_0_1.set(UnderlyingCPRegType_50);
    UnderlyingInstrument_50.insert(UnderlyingCPRegType_50.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_50;
    UnderlyingCapValue_50.setString("13038119");
    noUnderlyings_0_1.set(UnderlyingCapValue_50);
    UnderlyingInstrument_50.insert(UnderlyingCapValue_50.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
    UnderlyingCashAmount_50.setString("10780641");
    noUnderlyings_0_1.set(UnderlyingCashAmount_50);
    UnderlyingInstrument_50.insert(UnderlyingCashAmount_50.getString());
    FIX::UnderlyingCashType UnderlyingCashType_50("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_50);
    UnderlyingInstrument_50.insert(UnderlyingCashType_50.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
    UnderlyingContractMultiplier_50.setString("16946597");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_50);
    UnderlyingInstrument_50.insert(UnderlyingContractMultiplier_50.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_50(1375040039);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_50);
    UnderlyingInstrument_50.insert(UnderlyingContractMultiplierUnit_50.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_50("COUNTRY_1828266229");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingCountryOfIssue_50.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_50("LOCALMKTDATE_1614359168");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_50);
    UnderlyingInstrument_50.insert(UnderlyingCouponPaymentDate_50.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
    UnderlyingCouponRate_50.setString("88.020000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_50);
    UnderlyingInstrument_50.insert(UnderlyingCouponRate_50.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_50("STRING_689585010");
    noUnderlyings_0_1.set(UnderlyingCreditRating_50);
    UnderlyingInstrument_50.insert(UnderlyingCreditRating_50.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_50("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_50);
    UnderlyingInstrument_50.insert(UnderlyingCurrency_50.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
    UnderlyingCurrentValue_50.setString("9062809");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_50);
    UnderlyingInstrument_50.insert(UnderlyingCurrentValue_50.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
    UnderlyingDetachmentPoint_50.setString("0.970000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_50);
    UnderlyingInstrument_50.insert(UnderlyingDetachmentPoint_50.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
    UnderlyingDirtyPrice_50.setString("12919424");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_50);
    UnderlyingInstrument_50.insert(UnderlyingDirtyPrice_50.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
    UnderlyingEndPrice_50.setString("14045469");
    noUnderlyings_0_1.set(UnderlyingEndPrice_50);
    UnderlyingInstrument_50.insert(UnderlyingEndPrice_50.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_50;
    UnderlyingEndValue_50.setString("20652532");
    noUnderlyings_0_1.set(UnderlyingEndValue_50);
    UnderlyingInstrument_50.insert(UnderlyingEndValue_50.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_50(1838615618);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_50);
    UnderlyingInstrument_50.insert(UnderlyingExerciseStyle_50.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_50;
    UnderlyingFXRate_50.setString("894352");
    noUnderlyings_0_1.set(UnderlyingFXRate_50);
    UnderlyingInstrument_50.insert(UnderlyingFXRate_50.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_50('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_50);
    UnderlyingInstrument_50.insert(UnderlyingFXRateCalc_50.getString());
    FIX::UnderlyingFactor UnderlyingFactor_50;
    UnderlyingFactor_50.setString("14428529");
    noUnderlyings_0_1.set(UnderlyingFactor_50);
    UnderlyingInstrument_50.insert(UnderlyingFactor_50.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_50(127180655);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_50);
    UnderlyingInstrument_50.insert(UnderlyingFlowScheduleType_50.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_50("STRING_1458919235");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_50);
    UnderlyingInstrument_50.insert(UnderlyingInstrRegistry_50.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_50("LOCALMKTDATE_1634329906");
    noUnderlyings_0_1.set(UnderlyingIssueDate_50);
    UnderlyingInstrument_50.insert(UnderlyingIssueDate_50.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_50("STRING_1164380917");
    noUnderlyings_0_1.set(UnderlyingIssuer_50);
    UnderlyingInstrument_50.insert(UnderlyingIssuer_50.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_50("STRING_1474348528");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingLocaleOfIssue_50.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_50("LOCALMKTDATE_1893141091");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityDate_50.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_50("MONTHYEAR_1563424732");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityMonthYear_50.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_50("TZTIMEONLY_1582940062");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityTime_50.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
    UnderlyingNotionalPercentageOutstanding_50.setString("6.610000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_50);
    UnderlyingInstrument_50.insert(UnderlyingNotionalPercentageOutstanding_50.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_50('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_50);
    UnderlyingInstrument_50.insert(UnderlyingOptAttribute_50.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
    UnderlyingOriginalNotionalPercentageOutstanding_50.setString("61.250000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_50);
    UnderlyingInstrument_50.insert(UnderlyingOriginalNotionalPercentageOutstanding_50.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_50("STRING_290458922");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_50);
    UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasure_50.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
    UnderlyingPriceUnitOfMeasureQty_50.setString("7300231");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_50);
    UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasureQty_50.getString());
    FIX::UnderlyingProduct UnderlyingProduct_50(163163805);
    noUnderlyings_0_1.set(UnderlyingProduct_50);
    UnderlyingInstrument_50.insert(UnderlyingProduct_50.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_50(1985118641);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_50);
    UnderlyingInstrument_50.insert(UnderlyingPutOrCall_50.getString());
    FIX::UnderlyingPx UnderlyingPx_50;
    UnderlyingPx_50.setString("21050632");
    noUnderlyings_0_1.set(UnderlyingPx_50);
    UnderlyingInstrument_50.insert(UnderlyingPx_50.getString());
    FIX::UnderlyingQty UnderlyingQty_50;
    UnderlyingQty_50.setString("19914300");
    noUnderlyings_0_1.set(UnderlyingQty_50);
    UnderlyingInstrument_50.insert(UnderlyingQty_50.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_50("LOCALMKTDATE_1451994162");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_50);
    UnderlyingInstrument_50.insert(UnderlyingRedemptionDate_50.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_50("STRING_798858377");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_50);
    UnderlyingInstrument_50.insert(UnderlyingRepoCollateralSecurityType_50.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
    UnderlyingRepurchaseRate_50.setString("13.960000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_50);
    UnderlyingInstrument_50.insert(UnderlyingRepurchaseRate_50.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_50(730822554);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_50);
    UnderlyingInstrument_50.insert(UnderlyingRepurchaseTerm_50.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_50("STRING_1898214338");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_50);
    UnderlyingInstrument_50.insert(UnderlyingRestructuringType_50.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_50("STRING_1439812363");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityDesc_50.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_50("EXCHANGE_477899003");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityExchange_50.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_50("STRING_1042673126");
    noUnderlyings_0_1.set(UnderlyingSecurityID_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityID_50.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_50("STRING_696875637");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityIDSource_50.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_50("STRING_395668629");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_50);
    UnderlyingInstrument_50.insert(UnderlyingSecuritySubType_50.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_50("STRING_733805096");
    noUnderlyings_0_1.set(UnderlyingSecurityType_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityType_50.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_50("STRING_786310909");
    noUnderlyings_0_1.set(UnderlyingSeniority_50);
    UnderlyingInstrument_50.insert(UnderlyingSeniority_50.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_50("STRING_278930180");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_50);
    UnderlyingInstrument_50.insert(UnderlyingSettlMethod_50.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_50(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_50);
    UnderlyingInstrument_50.insert(UnderlyingSettlementType_50.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_50;
    UnderlyingStartValue_50.setString("9134915");
    noUnderlyings_0_1.set(UnderlyingStartValue_50);
    UnderlyingInstrument_50.insert(UnderlyingStartValue_50.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_50("STRING_1737849415");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingStateOrProvinceOfIssue_50.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_50("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_50);
    UnderlyingInstrument_50.insert(UnderlyingStrikeCurrency_50.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
    UnderlyingStrikePrice_50.setString("10647142");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_50);
    UnderlyingInstrument_50.insert(UnderlyingStrikePrice_50.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_50("STRING_1409161718");
    noUnderlyings_0_1.set(UnderlyingSymbol_50);
    UnderlyingInstrument_50.insert(UnderlyingSymbol_50.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_50("STRING_1493813566");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_50);
    UnderlyingInstrument_50.insert(UnderlyingSymbolSfx_50.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_50("STRING_500170710");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_50);
    UnderlyingInstrument_50.insert(UnderlyingTimeUnit_50.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_50("STRING_395808731");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_50);
    UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasure_50.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
    UnderlyingUnitOfMeasureQty_50.setString("11457726");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_50);
    UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasureQty_50.getString());
    all_values.push_back(UnderlyingInstrument_50);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_103("STRING_686267653");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_103);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltID_103.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_103("STRING_1875795797");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_103);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltIDSource_103.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_104("STRING_1246140641");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_104);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltID_104.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_104("STRING_523902647");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_104);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltIDSource_104.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_88;
      FIX::UnderlyingStipType UnderlyingStipType_88("STRING_1090087027");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_88);
      UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipType_88.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_88("STRING_1975896809");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_88);
      UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipValue_88.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_88);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_108("STRING_1623618424");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyID_108.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_108('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyIDSource_108.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_108(235480791);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyRole_108.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_214("STRING_1037134718");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubID_214.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_214(1278153917);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubIDType_214.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
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
