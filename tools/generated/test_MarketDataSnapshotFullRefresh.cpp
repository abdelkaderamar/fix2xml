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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataSnapshotFullRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataSnapshotFullRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_1(281540468);
  msg.set(ApplQueueDepth_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueDepth_1.getString());
  FIX::ApplQueueResolution ApplQueueResolution_1(2);
  msg.set(ApplQueueResolution_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueResolution_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_14("LOCALMKTDATE_997361068");
  msg.set(ClearingBusinessDate_14);
  MarketDataSnapshotFullRefresh_0.insert(ClearingBusinessDate_14.getString());
  FIX::CorporateAction CorporateAction_5("MULTIPLECHARVALUE_V");
  msg.set(CorporateAction_5);
  MarketDataSnapshotFullRefresh_0.insert(CorporateAction_5.getString());
  FIX::FinancialStatus FinancialStatus_3("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_3);
  MarketDataSnapshotFullRefresh_0.insert(FinancialStatus_3.getString());
  FIX::MDBookType MDBookType_21(3);
  msg.set(MDBookType_21);
  MarketDataSnapshotFullRefresh_0.insert(MDBookType_21.getString());
  FIX::MDFeedType MDFeedType_21("STRING_2029931843");
  msg.set(MDFeedType_21);
  MarketDataSnapshotFullRefresh_0.insert(MDFeedType_21.getString());
  FIX::MDReportID MDReportID_0(1771802819);
  msg.set(MDReportID_0);
  MarketDataSnapshotFullRefresh_0.insert(MDReportID_0.getString());
  FIX::MDReqID MDReqID_3("STRING_1527795341");
  msg.set(MDReqID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDReqID_3.getString());
  FIX::MDStreamID MDStreamID_3("STRING_1228799739");
  msg.set(MDStreamID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDStreamID_3.getString());
  FIX::MDSubBookType MDSubBookType_1(962024698);
  msg.set(MDSubBookType_1);
  MarketDataSnapshotFullRefresh_0.insert(MDSubBookType_1.getString());
  FIX::MarketDepth MarketDepth_22(312734834);
  msg.set(MarketDepth_22);
  MarketDataSnapshotFullRefresh_0.insert(MarketDepth_22.getString());
  FIX::NetChgPrevDay NetChgPrevDay_1;
  NetChgPrevDay_1.setString("18378444");
  msg.set(NetChgPrevDay_1);
  MarketDataSnapshotFullRefresh_0.insert(NetChgPrevDay_1.getString());
  FIX::RefreshIndicator RefreshIndicator_0(true);
  msg.set(RefreshIndicator_0);
  MarketDataSnapshotFullRefresh_0.insert(RefreshIndicator_0.getString());
  FIX::TotNumReports TotNumReports_3(2047074799);
  msg.set(TotNumReports_3);
  MarketDataSnapshotFullRefresh_0.insert(TotNumReports_3.getString());
  FIX::TradeDate TradeDate_17("LOCALMKTDATE_1372387438");
  msg.set(TradeDate_17);
  MarketDataSnapshotFullRefresh_0.insert(TradeDate_17.getString());
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  FIX::ApplID ApplID_7("STRING_772595403");
  msg.set(ApplID_7);
  ApplicationSequenceControl_7.insert(ApplID_7.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_7(552089527);
  msg.set(ApplLastSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplLastSeqNum_7.getString());
  FIX::ApplResendFlag ApplResendFlag_7(false);
  msg.set(ApplResendFlag_7);
  ApplicationSequenceControl_7.insert(ApplResendFlag_7.getString());
  FIX::ApplSeqNum ApplSeqNum_7(670533106);
  msg.set(ApplSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplSeqNum_7.getString());
  all_values.push_back(ApplicationSequenceControl_7);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_51;
    FIX::EncodedLegIssuer EncodedLegIssuer_51("DATA_13700362");
    noLegs_0_0.set(EncodedLegIssuer_51);
    InstrumentLeg_51.insert(EncodedLegIssuer_51.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_51(1617613213);
    noLegs_0_0.set(EncodedLegIssuerLen_51);
    InstrumentLeg_51.insert(EncodedLegIssuerLen_51.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_51("DATA_648403649");
    noLegs_0_0.set(EncodedLegSecurityDesc_51);
    InstrumentLeg_51.insert(EncodedLegSecurityDesc_51.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_51(288681384);
    noLegs_0_0.set(EncodedLegSecurityDescLen_51);
    InstrumentLeg_51.insert(EncodedLegSecurityDescLen_51.getString());
    FIX::LegCFICode LegCFICode_51("STRING_545110464");
    noLegs_0_0.set(LegCFICode_51);
    InstrumentLeg_51.insert(LegCFICode_51.getString());
    FIX::LegContractMultiplier LegContractMultiplier_51;
    LegContractMultiplier_51.setString("15397741");
    noLegs_0_0.set(LegContractMultiplier_51);
    InstrumentLeg_51.insert(LegContractMultiplier_51.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_51(744375164);
    noLegs_0_0.set(LegContractMultiplierUnit_51);
    InstrumentLeg_51.insert(LegContractMultiplierUnit_51.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_51("MONTHYEAR_1871991703");
    noLegs_0_0.set(LegContractSettlMonth_51);
    InstrumentLeg_51.insert(LegContractSettlMonth_51.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_51("COUNTRY_66077672");
    noLegs_0_0.set(LegCountryOfIssue_51);
    InstrumentLeg_51.insert(LegCountryOfIssue_51.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_51("LOCALMKTDATE_799747269");
    noLegs_0_0.set(LegCouponPaymentDate_51);
    InstrumentLeg_51.insert(LegCouponPaymentDate_51.getString());
    FIX::LegCouponRate LegCouponRate_51;
    LegCouponRate_51.setString("85.240000");
    noLegs_0_0.set(LegCouponRate_51);
    InstrumentLeg_51.insert(LegCouponRate_51.getString());
    FIX::LegCreditRating LegCreditRating_51("STRING_346004599");
    noLegs_0_0.set(LegCreditRating_51);
    InstrumentLeg_51.insert(LegCreditRating_51.getString());
    FIX::LegCurrency LegCurrency_51("EUR");
    noLegs_0_0.set(LegCurrency_51);
    InstrumentLeg_51.insert(LegCurrency_51.getString());
    FIX::LegDatedDate LegDatedDate_51("LOCALMKTDATE_1272415590");
    noLegs_0_0.set(LegDatedDate_51);
    InstrumentLeg_51.insert(LegDatedDate_51.getString());
    FIX::LegExerciseStyle LegExerciseStyle_51(986547275);
    noLegs_0_0.set(LegExerciseStyle_51);
    InstrumentLeg_51.insert(LegExerciseStyle_51.getString());
    FIX::LegFactor LegFactor_51;
    LegFactor_51.setString("4050026");
    noLegs_0_0.set(LegFactor_51);
    InstrumentLeg_51.insert(LegFactor_51.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_51(896734761);
    noLegs_0_0.set(LegFlowScheduleType_51);
    InstrumentLeg_51.insert(LegFlowScheduleType_51.getString());
    FIX::LegInstrRegistry LegInstrRegistry_51("STRING_366858968");
    noLegs_0_0.set(LegInstrRegistry_51);
    InstrumentLeg_51.insert(LegInstrRegistry_51.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_51("LOCALMKTDATE_1633802420");
    noLegs_0_0.set(LegInterestAccrualDate_51);
    InstrumentLeg_51.insert(LegInterestAccrualDate_51.getString());
    FIX::LegIssueDate LegIssueDate_51("LOCALMKTDATE_1858759460");
    noLegs_0_0.set(LegIssueDate_51);
    InstrumentLeg_51.insert(LegIssueDate_51.getString());
    FIX::LegIssuer LegIssuer_51("STRING_679593802");
    noLegs_0_0.set(LegIssuer_51);
    InstrumentLeg_51.insert(LegIssuer_51.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_51("STRING_1324163205");
    noLegs_0_0.set(LegLocaleOfIssue_51);
    InstrumentLeg_51.insert(LegLocaleOfIssue_51.getString());
    FIX::LegMaturityDate LegMaturityDate_51("LOCALMKTDATE_1613074862");
    noLegs_0_0.set(LegMaturityDate_51);
    InstrumentLeg_51.insert(LegMaturityDate_51.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_51("MONTHYEAR_579184953");
    noLegs_0_0.set(LegMaturityMonthYear_51);
    InstrumentLeg_51.insert(LegMaturityMonthYear_51.getString());
    FIX::LegMaturityTime LegMaturityTime_51("TZTIMEONLY_549066996");
    noLegs_0_0.set(LegMaturityTime_51);
    InstrumentLeg_51.insert(LegMaturityTime_51.getString());
    FIX::LegOptAttribute LegOptAttribute_51('2');
    noLegs_0_0.set(LegOptAttribute_51);
    InstrumentLeg_51.insert(LegOptAttribute_51.getString());
    FIX::LegOptionRatio LegOptionRatio_51;
    LegOptionRatio_51.setString("11312744");
    noLegs_0_0.set(LegOptionRatio_51);
    InstrumentLeg_51.insert(LegOptionRatio_51.getString());
    FIX::LegPool LegPool_51("STRING_2119761297");
    noLegs_0_0.set(LegPool_51);
    InstrumentLeg_51.insert(LegPool_51.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_51("STRING_908719723");
    noLegs_0_0.set(LegPriceUnitOfMeasure_51);
    InstrumentLeg_51.insert(LegPriceUnitOfMeasure_51.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_51;
    LegPriceUnitOfMeasureQty_51.setString("11103702");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_51);
    InstrumentLeg_51.insert(LegPriceUnitOfMeasureQty_51.getString());
    FIX::LegProduct LegProduct_51(2133461659);
    noLegs_0_0.set(LegProduct_51);
    InstrumentLeg_51.insert(LegProduct_51.getString());
    FIX::LegPutOrCall LegPutOrCall_51(378849288);
    noLegs_0_0.set(LegPutOrCall_51);
    InstrumentLeg_51.insert(LegPutOrCall_51.getString());
    FIX::LegRatioQty LegRatioQty_51;
    LegRatioQty_51.setString("17587738");
    noLegs_0_0.set(LegRatioQty_51);
    InstrumentLeg_51.insert(LegRatioQty_51.getString());
    FIX::LegRedemptionDate LegRedemptionDate_51("LOCALMKTDATE_274659395");
    noLegs_0_0.set(LegRedemptionDate_51);
    InstrumentLeg_51.insert(LegRedemptionDate_51.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_51("STRING_923959753");
    noLegs_0_0.set(LegRepoCollateralSecurityType_51);
    InstrumentLeg_51.insert(LegRepoCollateralSecurityType_51.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_51;
    LegRepurchaseRate_51.setString("43.470000");
    noLegs_0_0.set(LegRepurchaseRate_51);
    InstrumentLeg_51.insert(LegRepurchaseRate_51.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_51(1019034559);
    noLegs_0_0.set(LegRepurchaseTerm_51);
    InstrumentLeg_51.insert(LegRepurchaseTerm_51.getString());
    FIX::LegSecurityDesc LegSecurityDesc_51("STRING_648467808");
    noLegs_0_0.set(LegSecurityDesc_51);
    InstrumentLeg_51.insert(LegSecurityDesc_51.getString());
    FIX::LegSecurityExchange LegSecurityExchange_51("EXCHANGE_1217142020");
    noLegs_0_0.set(LegSecurityExchange_51);
    InstrumentLeg_51.insert(LegSecurityExchange_51.getString());
    FIX::LegSecurityID LegSecurityID_51("STRING_1818781829");
    noLegs_0_0.set(LegSecurityID_51);
    InstrumentLeg_51.insert(LegSecurityID_51.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_51("STRING_654516332");
    noLegs_0_0.set(LegSecurityIDSource_51);
    InstrumentLeg_51.insert(LegSecurityIDSource_51.getString());
    FIX::LegSecuritySubType LegSecuritySubType_51("STRING_1563146619");
    noLegs_0_0.set(LegSecuritySubType_51);
    InstrumentLeg_51.insert(LegSecuritySubType_51.getString());
    FIX::LegSecurityType LegSecurityType_51("STRING_1468406519");
    noLegs_0_0.set(LegSecurityType_51);
    InstrumentLeg_51.insert(LegSecurityType_51.getString());
    FIX::LegSide LegSide_51('1');
    noLegs_0_0.set(LegSide_51);
    InstrumentLeg_51.insert(LegSide_51.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_51("STRING_688078561");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_51);
    InstrumentLeg_51.insert(LegStateOrProvinceOfIssue_51.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_51("GBP");
    noLegs_0_0.set(LegStrikeCurrency_51);
    InstrumentLeg_51.insert(LegStrikeCurrency_51.getString());
    FIX::LegStrikePrice LegStrikePrice_51;
    LegStrikePrice_51.setString("15848133");
    noLegs_0_0.set(LegStrikePrice_51);
    InstrumentLeg_51.insert(LegStrikePrice_51.getString());
    FIX::LegSymbol LegSymbol_51("STRING_674329114");
    noLegs_0_0.set(LegSymbol_51);
    InstrumentLeg_51.insert(LegSymbol_51.getString());
    FIX::LegSymbolSfx LegSymbolSfx_51("STRING_1068392270");
    noLegs_0_0.set(LegSymbolSfx_51);
    InstrumentLeg_51.insert(LegSymbolSfx_51.getString());
    FIX::LegTimeUnit LegTimeUnit_51("STRING_1296089134");
    noLegs_0_0.set(LegTimeUnit_51);
    InstrumentLeg_51.insert(LegTimeUnit_51.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_51("STRING_1353922917");
    noLegs_0_0.set(LegUnitOfMeasure_51);
    InstrumentLeg_51.insert(LegUnitOfMeasure_51.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_51;
    LegUnitOfMeasureQty_51.setString("2450718");
    noLegs_0_0.set(LegUnitOfMeasureQty_51);
    InstrumentLeg_51.insert(LegUnitOfMeasureQty_51.getString());
    all_values.push_back(InstrumentLeg_51);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_93;
      FIX::LegSecurityAltID LegSecurityAltID_93("STRING_1933107870");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltID_93.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_93("STRING_794138824");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltIDSource_93.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_93);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_94;
      FIX::LegSecurityAltID LegSecurityAltID_94("STRING_999866965");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltID_94.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_94("STRING_916898703");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltIDSource_94.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_94);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_52;
    FIX::EncodedLegIssuer EncodedLegIssuer_52("DATA_766416473");
    noLegs_0_1.set(EncodedLegIssuer_52);
    InstrumentLeg_52.insert(EncodedLegIssuer_52.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_52(1908586689);
    noLegs_0_1.set(EncodedLegIssuerLen_52);
    InstrumentLeg_52.insert(EncodedLegIssuerLen_52.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_52("DATA_2027268908");
    noLegs_0_1.set(EncodedLegSecurityDesc_52);
    InstrumentLeg_52.insert(EncodedLegSecurityDesc_52.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_52(752394485);
    noLegs_0_1.set(EncodedLegSecurityDescLen_52);
    InstrumentLeg_52.insert(EncodedLegSecurityDescLen_52.getString());
    FIX::LegCFICode LegCFICode_52("STRING_139952329");
    noLegs_0_1.set(LegCFICode_52);
    InstrumentLeg_52.insert(LegCFICode_52.getString());
    FIX::LegContractMultiplier LegContractMultiplier_52;
    LegContractMultiplier_52.setString("16385591");
    noLegs_0_1.set(LegContractMultiplier_52);
    InstrumentLeg_52.insert(LegContractMultiplier_52.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_52(1027053880);
    noLegs_0_1.set(LegContractMultiplierUnit_52);
    InstrumentLeg_52.insert(LegContractMultiplierUnit_52.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_52("MONTHYEAR_1063912082");
    noLegs_0_1.set(LegContractSettlMonth_52);
    InstrumentLeg_52.insert(LegContractSettlMonth_52.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_52("COUNTRY_642139813");
    noLegs_0_1.set(LegCountryOfIssue_52);
    InstrumentLeg_52.insert(LegCountryOfIssue_52.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_52("LOCALMKTDATE_2046088440");
    noLegs_0_1.set(LegCouponPaymentDate_52);
    InstrumentLeg_52.insert(LegCouponPaymentDate_52.getString());
    FIX::LegCouponRate LegCouponRate_52;
    LegCouponRate_52.setString("98.910000");
    noLegs_0_1.set(LegCouponRate_52);
    InstrumentLeg_52.insert(LegCouponRate_52.getString());
    FIX::LegCreditRating LegCreditRating_52("STRING_1859281833");
    noLegs_0_1.set(LegCreditRating_52);
    InstrumentLeg_52.insert(LegCreditRating_52.getString());
    FIX::LegCurrency LegCurrency_52("CHF");
    noLegs_0_1.set(LegCurrency_52);
    InstrumentLeg_52.insert(LegCurrency_52.getString());
    FIX::LegDatedDate LegDatedDate_52("LOCALMKTDATE_1274944804");
    noLegs_0_1.set(LegDatedDate_52);
    InstrumentLeg_52.insert(LegDatedDate_52.getString());
    FIX::LegExerciseStyle LegExerciseStyle_52(1038309492);
    noLegs_0_1.set(LegExerciseStyle_52);
    InstrumentLeg_52.insert(LegExerciseStyle_52.getString());
    FIX::LegFactor LegFactor_52;
    LegFactor_52.setString("13964833");
    noLegs_0_1.set(LegFactor_52);
    InstrumentLeg_52.insert(LegFactor_52.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_52(1963023365);
    noLegs_0_1.set(LegFlowScheduleType_52);
    InstrumentLeg_52.insert(LegFlowScheduleType_52.getString());
    FIX::LegInstrRegistry LegInstrRegistry_52("STRING_1345779638");
    noLegs_0_1.set(LegInstrRegistry_52);
    InstrumentLeg_52.insert(LegInstrRegistry_52.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_52("LOCALMKTDATE_831073244");
    noLegs_0_1.set(LegInterestAccrualDate_52);
    InstrumentLeg_52.insert(LegInterestAccrualDate_52.getString());
    FIX::LegIssueDate LegIssueDate_52("LOCALMKTDATE_1400353040");
    noLegs_0_1.set(LegIssueDate_52);
    InstrumentLeg_52.insert(LegIssueDate_52.getString());
    FIX::LegIssuer LegIssuer_52("STRING_2020108752");
    noLegs_0_1.set(LegIssuer_52);
    InstrumentLeg_52.insert(LegIssuer_52.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_52("STRING_1899465514");
    noLegs_0_1.set(LegLocaleOfIssue_52);
    InstrumentLeg_52.insert(LegLocaleOfIssue_52.getString());
    FIX::LegMaturityDate LegMaturityDate_52("LOCALMKTDATE_548958526");
    noLegs_0_1.set(LegMaturityDate_52);
    InstrumentLeg_52.insert(LegMaturityDate_52.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_52("MONTHYEAR_1226548021");
    noLegs_0_1.set(LegMaturityMonthYear_52);
    InstrumentLeg_52.insert(LegMaturityMonthYear_52.getString());
    FIX::LegMaturityTime LegMaturityTime_52("TZTIMEONLY_2144537342");
    noLegs_0_1.set(LegMaturityTime_52);
    InstrumentLeg_52.insert(LegMaturityTime_52.getString());
    FIX::LegOptAttribute LegOptAttribute_52('1');
    noLegs_0_1.set(LegOptAttribute_52);
    InstrumentLeg_52.insert(LegOptAttribute_52.getString());
    FIX::LegOptionRatio LegOptionRatio_52;
    LegOptionRatio_52.setString("10121722");
    noLegs_0_1.set(LegOptionRatio_52);
    InstrumentLeg_52.insert(LegOptionRatio_52.getString());
    FIX::LegPool LegPool_52("STRING_791192518");
    noLegs_0_1.set(LegPool_52);
    InstrumentLeg_52.insert(LegPool_52.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_52("STRING_163022192");
    noLegs_0_1.set(LegPriceUnitOfMeasure_52);
    InstrumentLeg_52.insert(LegPriceUnitOfMeasure_52.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_52;
    LegPriceUnitOfMeasureQty_52.setString("19290709");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_52);
    InstrumentLeg_52.insert(LegPriceUnitOfMeasureQty_52.getString());
    FIX::LegProduct LegProduct_52(1557608992);
    noLegs_0_1.set(LegProduct_52);
    InstrumentLeg_52.insert(LegProduct_52.getString());
    FIX::LegPutOrCall LegPutOrCall_52(2071608881);
    noLegs_0_1.set(LegPutOrCall_52);
    InstrumentLeg_52.insert(LegPutOrCall_52.getString());
    FIX::LegRatioQty LegRatioQty_52;
    LegRatioQty_52.setString("18088562");
    noLegs_0_1.set(LegRatioQty_52);
    InstrumentLeg_52.insert(LegRatioQty_52.getString());
    FIX::LegRedemptionDate LegRedemptionDate_52("LOCALMKTDATE_162519829");
    noLegs_0_1.set(LegRedemptionDate_52);
    InstrumentLeg_52.insert(LegRedemptionDate_52.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_52("STRING_64077563");
    noLegs_0_1.set(LegRepoCollateralSecurityType_52);
    InstrumentLeg_52.insert(LegRepoCollateralSecurityType_52.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_52;
    LegRepurchaseRate_52.setString("16.730000");
    noLegs_0_1.set(LegRepurchaseRate_52);
    InstrumentLeg_52.insert(LegRepurchaseRate_52.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_52(1189573709);
    noLegs_0_1.set(LegRepurchaseTerm_52);
    InstrumentLeg_52.insert(LegRepurchaseTerm_52.getString());
    FIX::LegSecurityDesc LegSecurityDesc_52("STRING_1127989645");
    noLegs_0_1.set(LegSecurityDesc_52);
    InstrumentLeg_52.insert(LegSecurityDesc_52.getString());
    FIX::LegSecurityExchange LegSecurityExchange_52("EXCHANGE_1942071486");
    noLegs_0_1.set(LegSecurityExchange_52);
    InstrumentLeg_52.insert(LegSecurityExchange_52.getString());
    FIX::LegSecurityID LegSecurityID_52("STRING_1088178501");
    noLegs_0_1.set(LegSecurityID_52);
    InstrumentLeg_52.insert(LegSecurityID_52.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_52("STRING_692885888");
    noLegs_0_1.set(LegSecurityIDSource_52);
    InstrumentLeg_52.insert(LegSecurityIDSource_52.getString());
    FIX::LegSecuritySubType LegSecuritySubType_52("STRING_1653869672");
    noLegs_0_1.set(LegSecuritySubType_52);
    InstrumentLeg_52.insert(LegSecuritySubType_52.getString());
    FIX::LegSecurityType LegSecurityType_52("STRING_658081474");
    noLegs_0_1.set(LegSecurityType_52);
    InstrumentLeg_52.insert(LegSecurityType_52.getString());
    FIX::LegSide LegSide_52('9');
    noLegs_0_1.set(LegSide_52);
    InstrumentLeg_52.insert(LegSide_52.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_52("STRING_781330828");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_52);
    InstrumentLeg_52.insert(LegStateOrProvinceOfIssue_52.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_52("CAN");
    noLegs_0_1.set(LegStrikeCurrency_52);
    InstrumentLeg_52.insert(LegStrikeCurrency_52.getString());
    FIX::LegStrikePrice LegStrikePrice_52;
    LegStrikePrice_52.setString("5968705");
    noLegs_0_1.set(LegStrikePrice_52);
    InstrumentLeg_52.insert(LegStrikePrice_52.getString());
    FIX::LegSymbol LegSymbol_52("STRING_894686956");
    noLegs_0_1.set(LegSymbol_52);
    InstrumentLeg_52.insert(LegSymbol_52.getString());
    FIX::LegSymbolSfx LegSymbolSfx_52("STRING_992371453");
    noLegs_0_1.set(LegSymbolSfx_52);
    InstrumentLeg_52.insert(LegSymbolSfx_52.getString());
    FIX::LegTimeUnit LegTimeUnit_52("STRING_1997223586");
    noLegs_0_1.set(LegTimeUnit_52);
    InstrumentLeg_52.insert(LegTimeUnit_52.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_52("STRING_767312061");
    noLegs_0_1.set(LegUnitOfMeasure_52);
    InstrumentLeg_52.insert(LegUnitOfMeasure_52.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_52;
    LegUnitOfMeasureQty_52.setString("7443533");
    noLegs_0_1.set(LegUnitOfMeasureQty_52);
    InstrumentLeg_52.insert(LegUnitOfMeasureQty_52.getString());
    all_values.push_back(InstrumentLeg_52);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_95;
      FIX::LegSecurityAltID LegSecurityAltID_95("STRING_1993860082");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltID_95.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_95("STRING_741407014");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltIDSource_95.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_95);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_53;
    FIX::EncodedLegIssuer EncodedLegIssuer_53("DATA_1709337339");
    noLegs_0_2.set(EncodedLegIssuer_53);
    InstrumentLeg_53.insert(EncodedLegIssuer_53.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_53(858548678);
    noLegs_0_2.set(EncodedLegIssuerLen_53);
    InstrumentLeg_53.insert(EncodedLegIssuerLen_53.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_53("DATA_1532599533");
    noLegs_0_2.set(EncodedLegSecurityDesc_53);
    InstrumentLeg_53.insert(EncodedLegSecurityDesc_53.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_53(1872359532);
    noLegs_0_2.set(EncodedLegSecurityDescLen_53);
    InstrumentLeg_53.insert(EncodedLegSecurityDescLen_53.getString());
    FIX::LegCFICode LegCFICode_53("STRING_640135977");
    noLegs_0_2.set(LegCFICode_53);
    InstrumentLeg_53.insert(LegCFICode_53.getString());
    FIX::LegContractMultiplier LegContractMultiplier_53;
    LegContractMultiplier_53.setString("9427248");
    noLegs_0_2.set(LegContractMultiplier_53);
    InstrumentLeg_53.insert(LegContractMultiplier_53.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_53(1796484765);
    noLegs_0_2.set(LegContractMultiplierUnit_53);
    InstrumentLeg_53.insert(LegContractMultiplierUnit_53.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_53("MONTHYEAR_301508536");
    noLegs_0_2.set(LegContractSettlMonth_53);
    InstrumentLeg_53.insert(LegContractSettlMonth_53.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_53("COUNTRY_1105244706");
    noLegs_0_2.set(LegCountryOfIssue_53);
    InstrumentLeg_53.insert(LegCountryOfIssue_53.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_53("LOCALMKTDATE_1860562328");
    noLegs_0_2.set(LegCouponPaymentDate_53);
    InstrumentLeg_53.insert(LegCouponPaymentDate_53.getString());
    FIX::LegCouponRate LegCouponRate_53;
    LegCouponRate_53.setString("2.090000");
    noLegs_0_2.set(LegCouponRate_53);
    InstrumentLeg_53.insert(LegCouponRate_53.getString());
    FIX::LegCreditRating LegCreditRating_53("STRING_147334767");
    noLegs_0_2.set(LegCreditRating_53);
    InstrumentLeg_53.insert(LegCreditRating_53.getString());
    FIX::LegCurrency LegCurrency_53("GBP");
    noLegs_0_2.set(LegCurrency_53);
    InstrumentLeg_53.insert(LegCurrency_53.getString());
    FIX::LegDatedDate LegDatedDate_53("LOCALMKTDATE_1235513269");
    noLegs_0_2.set(LegDatedDate_53);
    InstrumentLeg_53.insert(LegDatedDate_53.getString());
    FIX::LegExerciseStyle LegExerciseStyle_53(1533954214);
    noLegs_0_2.set(LegExerciseStyle_53);
    InstrumentLeg_53.insert(LegExerciseStyle_53.getString());
    FIX::LegFactor LegFactor_53;
    LegFactor_53.setString("9024140");
    noLegs_0_2.set(LegFactor_53);
    InstrumentLeg_53.insert(LegFactor_53.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_53(1893594743);
    noLegs_0_2.set(LegFlowScheduleType_53);
    InstrumentLeg_53.insert(LegFlowScheduleType_53.getString());
    FIX::LegInstrRegistry LegInstrRegistry_53("STRING_298769030");
    noLegs_0_2.set(LegInstrRegistry_53);
    InstrumentLeg_53.insert(LegInstrRegistry_53.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_53("LOCALMKTDATE_1683744900");
    noLegs_0_2.set(LegInterestAccrualDate_53);
    InstrumentLeg_53.insert(LegInterestAccrualDate_53.getString());
    FIX::LegIssueDate LegIssueDate_53("LOCALMKTDATE_1442502062");
    noLegs_0_2.set(LegIssueDate_53);
    InstrumentLeg_53.insert(LegIssueDate_53.getString());
    FIX::LegIssuer LegIssuer_53("STRING_460067240");
    noLegs_0_2.set(LegIssuer_53);
    InstrumentLeg_53.insert(LegIssuer_53.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_53("STRING_133131798");
    noLegs_0_2.set(LegLocaleOfIssue_53);
    InstrumentLeg_53.insert(LegLocaleOfIssue_53.getString());
    FIX::LegMaturityDate LegMaturityDate_53("LOCALMKTDATE_189705370");
    noLegs_0_2.set(LegMaturityDate_53);
    InstrumentLeg_53.insert(LegMaturityDate_53.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_53("MONTHYEAR_1452438693");
    noLegs_0_2.set(LegMaturityMonthYear_53);
    InstrumentLeg_53.insert(LegMaturityMonthYear_53.getString());
    FIX::LegMaturityTime LegMaturityTime_53("TZTIMEONLY_2130355384");
    noLegs_0_2.set(LegMaturityTime_53);
    InstrumentLeg_53.insert(LegMaturityTime_53.getString());
    FIX::LegOptAttribute LegOptAttribute_53('9');
    noLegs_0_2.set(LegOptAttribute_53);
    InstrumentLeg_53.insert(LegOptAttribute_53.getString());
    FIX::LegOptionRatio LegOptionRatio_53;
    LegOptionRatio_53.setString("493083");
    noLegs_0_2.set(LegOptionRatio_53);
    InstrumentLeg_53.insert(LegOptionRatio_53.getString());
    FIX::LegPool LegPool_53("STRING_381570201");
    noLegs_0_2.set(LegPool_53);
    InstrumentLeg_53.insert(LegPool_53.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_53("STRING_803393866");
    noLegs_0_2.set(LegPriceUnitOfMeasure_53);
    InstrumentLeg_53.insert(LegPriceUnitOfMeasure_53.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
    LegPriceUnitOfMeasureQty_53.setString("7907153");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_53);
    InstrumentLeg_53.insert(LegPriceUnitOfMeasureQty_53.getString());
    FIX::LegProduct LegProduct_53(2090907540);
    noLegs_0_2.set(LegProduct_53);
    InstrumentLeg_53.insert(LegProduct_53.getString());
    FIX::LegPutOrCall LegPutOrCall_53(1661942544);
    noLegs_0_2.set(LegPutOrCall_53);
    InstrumentLeg_53.insert(LegPutOrCall_53.getString());
    FIX::LegRatioQty LegRatioQty_53;
    LegRatioQty_53.setString("1758312");
    noLegs_0_2.set(LegRatioQty_53);
    InstrumentLeg_53.insert(LegRatioQty_53.getString());
    FIX::LegRedemptionDate LegRedemptionDate_53("LOCALMKTDATE_1815783424");
    noLegs_0_2.set(LegRedemptionDate_53);
    InstrumentLeg_53.insert(LegRedemptionDate_53.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_53("STRING_154594874");
    noLegs_0_2.set(LegRepoCollateralSecurityType_53);
    InstrumentLeg_53.insert(LegRepoCollateralSecurityType_53.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_53;
    LegRepurchaseRate_53.setString("61.420000");
    noLegs_0_2.set(LegRepurchaseRate_53);
    InstrumentLeg_53.insert(LegRepurchaseRate_53.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_53(1464784542);
    noLegs_0_2.set(LegRepurchaseTerm_53);
    InstrumentLeg_53.insert(LegRepurchaseTerm_53.getString());
    FIX::LegSecurityDesc LegSecurityDesc_53("STRING_456103410");
    noLegs_0_2.set(LegSecurityDesc_53);
    InstrumentLeg_53.insert(LegSecurityDesc_53.getString());
    FIX::LegSecurityExchange LegSecurityExchange_53("EXCHANGE_76317200");
    noLegs_0_2.set(LegSecurityExchange_53);
    InstrumentLeg_53.insert(LegSecurityExchange_53.getString());
    FIX::LegSecurityID LegSecurityID_53("STRING_1177863222");
    noLegs_0_2.set(LegSecurityID_53);
    InstrumentLeg_53.insert(LegSecurityID_53.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_53("STRING_2057543620");
    noLegs_0_2.set(LegSecurityIDSource_53);
    InstrumentLeg_53.insert(LegSecurityIDSource_53.getString());
    FIX::LegSecuritySubType LegSecuritySubType_53("STRING_223651967");
    noLegs_0_2.set(LegSecuritySubType_53);
    InstrumentLeg_53.insert(LegSecuritySubType_53.getString());
    FIX::LegSecurityType LegSecurityType_53("STRING_2018931548");
    noLegs_0_2.set(LegSecurityType_53);
    InstrumentLeg_53.insert(LegSecurityType_53.getString());
    FIX::LegSide LegSide_53('1');
    noLegs_0_2.set(LegSide_53);
    InstrumentLeg_53.insert(LegSide_53.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_53("STRING_1459165236");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_53);
    InstrumentLeg_53.insert(LegStateOrProvinceOfIssue_53.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_53("JPY");
    noLegs_0_2.set(LegStrikeCurrency_53);
    InstrumentLeg_53.insert(LegStrikeCurrency_53.getString());
    FIX::LegStrikePrice LegStrikePrice_53;
    LegStrikePrice_53.setString("12052763");
    noLegs_0_2.set(LegStrikePrice_53);
    InstrumentLeg_53.insert(LegStrikePrice_53.getString());
    FIX::LegSymbol LegSymbol_53("STRING_1704171145");
    noLegs_0_2.set(LegSymbol_53);
    InstrumentLeg_53.insert(LegSymbol_53.getString());
    FIX::LegSymbolSfx LegSymbolSfx_53("STRING_1744763344");
    noLegs_0_2.set(LegSymbolSfx_53);
    InstrumentLeg_53.insert(LegSymbolSfx_53.getString());
    FIX::LegTimeUnit LegTimeUnit_53("STRING_500294746");
    noLegs_0_2.set(LegTimeUnit_53);
    InstrumentLeg_53.insert(LegTimeUnit_53.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_53("STRING_16754737");
    noLegs_0_2.set(LegUnitOfMeasure_53);
    InstrumentLeg_53.insert(LegUnitOfMeasure_53.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
    LegUnitOfMeasureQty_53.setString("18778951");
    noLegs_0_2.set(LegUnitOfMeasureQty_53);
    InstrumentLeg_53.insert(LegUnitOfMeasureQty_53.getString());
    all_values.push_back(InstrumentLeg_53);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_96;
      FIX::LegSecurityAltID LegSecurityAltID_96("STRING_1469193431");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_96);
      LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltID_96.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_96("STRING_1860766879");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_96);
      LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltIDSource_96.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_96);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_97;
      FIX::LegSecurityAltID LegSecurityAltID_97("STRING_1647017548");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_97);
      LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltID_97.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_97("STRING_1518501796");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_97);
      LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltIDSource_97.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_97);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_98;
      FIX::LegSecurityAltID LegSecurityAltID_98("STRING_94853432");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_98);
      LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltID_98.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_98("STRING_302927766");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_98);
      LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltIDSource_98.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_98);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_31;
  FIX::AttachmentPoint AttachmentPoint_31;
  AttachmentPoint_31.setString("35.280000");
  msg.set(AttachmentPoint_31);
  Instrument_31.insert(AttachmentPoint_31.getString());
  FIX::CFICode CFICode_31("STRING_38277325");
  msg.set(CFICode_31);
  Instrument_31.insert(CFICode_31.getString());
  FIX::CPProgram CPProgram_31(1);
  msg.set(CPProgram_31);
  Instrument_31.insert(CPProgram_31.getString());
  FIX::CPRegType CPRegType_31("STRING_337564793");
  msg.set(CPRegType_31);
  Instrument_31.insert(CPRegType_31.getString());
  FIX::CapPrice CapPrice_31;
  CapPrice_31.setString("18540607");
  msg.set(CapPrice_31);
  Instrument_31.insert(CapPrice_31.getString());
  FIX::ContractMultiplier ContractMultiplier_31;
  ContractMultiplier_31.setString("21194651");
  msg.set(ContractMultiplier_31);
  Instrument_31.insert(ContractMultiplier_31.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_31(0);
  msg.set(ContractMultiplierUnit_31);
  Instrument_31.insert(ContractMultiplierUnit_31.getString());
  FIX::ContractSettlMonth ContractSettlMonth_31("MONTHYEAR_1171361643");
  msg.set(ContractSettlMonth_31);
  Instrument_31.insert(ContractSettlMonth_31.getString());
  FIX::CountryOfIssue CountryOfIssue_31("COUNTRY_428084947");
  msg.set(CountryOfIssue_31);
  Instrument_31.insert(CountryOfIssue_31.getString());
  FIX::CouponPaymentDate CouponPaymentDate_31("LOCALMKTDATE_1532438135");
  msg.set(CouponPaymentDate_31);
  Instrument_31.insert(CouponPaymentDate_31.getString());
  FIX::CouponRate CouponRate_31;
  CouponRate_31.setString("12.180000");
  msg.set(CouponRate_31);
  Instrument_31.insert(CouponRate_31.getString());
  FIX::CreditRating CreditRating_31("STRING_338144919");
  msg.set(CreditRating_31);
  Instrument_31.insert(CreditRating_31.getString());
  FIX::DatedDate DatedDate_31("LOCALMKTDATE_1756090103");
  msg.set(DatedDate_31);
  Instrument_31.insert(DatedDate_31.getString());
  FIX::DetachmentPoint DetachmentPoint_31;
  DetachmentPoint_31.setString("91.180000");
  msg.set(DetachmentPoint_31);
  Instrument_31.insert(DetachmentPoint_31.getString());
  FIX::EncodedIssuer EncodedIssuer_31("DATA_1644232939");
  msg.set(EncodedIssuer_31);
  Instrument_31.insert(EncodedIssuer_31.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_31(1067771691);
  msg.set(EncodedIssuerLen_31);
  Instrument_31.insert(EncodedIssuerLen_31.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_31("DATA_1478591233");
  msg.set(EncodedSecurityDesc_31);
  Instrument_31.insert(EncodedSecurityDesc_31.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_31(1705251383);
  msg.set(EncodedSecurityDescLen_31);
  Instrument_31.insert(EncodedSecurityDescLen_31.getString());
  FIX::ExerciseStyle ExerciseStyle_31(2);
  msg.set(ExerciseStyle_31);
  Instrument_31.insert(ExerciseStyle_31.getString());
  FIX::Factor Factor_31;
  Factor_31.setString("10352787");
  msg.set(Factor_31);
  Instrument_31.insert(Factor_31.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_31(false);
  msg.set(FlexProductEligibilityIndicator_31);
  Instrument_31.insert(FlexProductEligibilityIndicator_31.getString());
  FIX::FlexibleIndicator FlexibleIndicator_31(false);
  msg.set(FlexibleIndicator_31);
  Instrument_31.insert(FlexibleIndicator_31.getString());
  FIX::FloorPrice FloorPrice_31;
  FloorPrice_31.setString("10520334");
  msg.set(FloorPrice_31);
  Instrument_31.insert(FloorPrice_31.getString());
  FIX::FlowScheduleType FlowScheduleType_31(4);
  msg.set(FlowScheduleType_31);
  Instrument_31.insert(FlowScheduleType_31.getString());
  FIX::InstrRegistry InstrRegistry_31("STRING_1315859238");
  msg.set(InstrRegistry_31);
  Instrument_31.insert(InstrRegistry_31.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_31('3');
  msg.set(InstrmtAssignmentMethod_31);
  Instrument_31.insert(InstrmtAssignmentMethod_31.getString());
  FIX::InterestAccrualDate InterestAccrualDate_31("LOCALMKTDATE_746225806");
  msg.set(InterestAccrualDate_31);
  Instrument_31.insert(InterestAccrualDate_31.getString());
  FIX::IssueDate IssueDate_31("LOCALMKTDATE_815393138");
  msg.set(IssueDate_31);
  Instrument_31.insert(IssueDate_31.getString());
  FIX::Issuer Issuer_31("STRING_1892245048");
  msg.set(Issuer_31);
  Instrument_31.insert(Issuer_31.getString());
  FIX::ListMethod ListMethod_31(0);
  msg.set(ListMethod_31);
  Instrument_31.insert(ListMethod_31.getString());
  FIX::LocaleOfIssue LocaleOfIssue_31("STRING_1118320904");
  msg.set(LocaleOfIssue_31);
  Instrument_31.insert(LocaleOfIssue_31.getString());
  FIX::MaturityDate MaturityDate_31("LOCALMKTDATE_2053978576");
  msg.set(MaturityDate_31);
  Instrument_31.insert(MaturityDate_31.getString());
  FIX::MaturityMonthYear MaturityMonthYear_31("MONTHYEAR_879356563");
  msg.set(MaturityMonthYear_31);
  Instrument_31.insert(MaturityMonthYear_31.getString());
  FIX::MaturityTime MaturityTime_31("TZTIMEONLY_935707566");
  msg.set(MaturityTime_31);
  Instrument_31.insert(MaturityTime_31.getString());
  FIX::MinPriceIncrement MinPriceIncrement_31;
  MinPriceIncrement_31.setString("2440597");
  msg.set(MinPriceIncrement_31);
  Instrument_31.insert(MinPriceIncrement_31.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_31;
  MinPriceIncrementAmount_31.setString("5859336");
  msg.set(MinPriceIncrementAmount_31);
  Instrument_31.insert(MinPriceIncrementAmount_31.getString());
  FIX::NTPositionLimit NTPositionLimit_31(907689103);
  msg.set(NTPositionLimit_31);
  Instrument_31.insert(NTPositionLimit_31.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_31;
  NotionalPercentageOutstanding_31.setString("6.570000");
  msg.set(NotionalPercentageOutstanding_31);
  Instrument_31.insert(NotionalPercentageOutstanding_31.getString());
  FIX::OptAttribute OptAttribute_31('1');
  msg.set(OptAttribute_31);
  Instrument_31.insert(OptAttribute_31.getString());
  FIX::OptPayoutAmount OptPayoutAmount_31;
  OptPayoutAmount_31.setString("13357740");
  msg.set(OptPayoutAmount_31);
  Instrument_31.insert(OptPayoutAmount_31.getString());
  FIX::OptPayoutType OptPayoutType_31(1);
  msg.set(OptPayoutType_31);
  Instrument_31.insert(OptPayoutType_31.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_31;
  OriginalNotionalPercentageOutstanding_31.setString("65.260000");
  msg.set(OriginalNotionalPercentageOutstanding_31);
  Instrument_31.insert(OriginalNotionalPercentageOutstanding_31.getString());
  FIX::Pool Pool_31("STRING_1673918969");
  msg.set(Pool_31);
  Instrument_31.insert(Pool_31.getString());
  FIX::PositionLimit PositionLimit_31(693741600);
  msg.set(PositionLimit_31);
  Instrument_31.insert(PositionLimit_31.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_31("STRING_INX");
  msg.set(PriceQuoteMethod_31);
  Instrument_31.insert(PriceQuoteMethod_31.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_31("STRING_1170668260");
  msg.set(PriceUnitOfMeasure_31);
  Instrument_31.insert(PriceUnitOfMeasure_31.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_31;
  PriceUnitOfMeasureQty_31.setString("17615132");
  msg.set(PriceUnitOfMeasureQty_31);
  Instrument_31.insert(PriceUnitOfMeasureQty_31.getString());
  FIX::Product Product_33(13);
  msg.set(Product_33);
  Instrument_31.insert(Product_33.getString());
  FIX::ProductComplex ProductComplex_31("STRING_728435995");
  msg.set(ProductComplex_31);
  Instrument_31.insert(ProductComplex_31.getString());
  FIX::PutOrCall PutOrCall_31(1);
  msg.set(PutOrCall_31);
  Instrument_31.insert(PutOrCall_31.getString());
  FIX::RedemptionDate RedemptionDate_31("LOCALMKTDATE_251128313");
  msg.set(RedemptionDate_31);
  Instrument_31.insert(RedemptionDate_31.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_31("STRING_2030967074");
  msg.set(RepoCollateralSecurityType_31);
  Instrument_31.insert(RepoCollateralSecurityType_31.getString());
  FIX::RepurchaseRate RepurchaseRate_31;
  RepurchaseRate_31.setString("31.400000");
  msg.set(RepurchaseRate_31);
  Instrument_31.insert(RepurchaseRate_31.getString());
  FIX::RepurchaseTerm RepurchaseTerm_31(1303161782);
  msg.set(RepurchaseTerm_31);
  Instrument_31.insert(RepurchaseTerm_31.getString());
  FIX::RestructuringType RestructuringType_31("STRING_MR");
  msg.set(RestructuringType_31);
  Instrument_31.insert(RestructuringType_31.getString());
  FIX::SecurityDesc SecurityDesc_31("STRING_1681312378");
  msg.set(SecurityDesc_31);
  Instrument_31.insert(SecurityDesc_31.getString());
  FIX::SecurityExchange SecurityExchange_31("EXCHANGE_1676905033");
  msg.set(SecurityExchange_31);
  Instrument_31.insert(SecurityExchange_31.getString());
  FIX::SecurityGroup SecurityGroup_31("STRING_1662651807");
  msg.set(SecurityGroup_31);
  Instrument_31.insert(SecurityGroup_31.getString());
  FIX::SecurityID SecurityID_31("STRING_349221868");
  msg.set(SecurityID_31);
  Instrument_31.insert(SecurityID_31.getString());
  FIX::SecurityIDSource SecurityIDSource_31("STRING_C");
  msg.set(SecurityIDSource_31);
  Instrument_31.insert(SecurityIDSource_31.getString());
  FIX::SecurityStatus SecurityStatus_31("STRING_2");
  msg.set(SecurityStatus_31);
  Instrument_31.insert(SecurityStatus_31.getString());
  FIX::SecuritySubType SecuritySubType_32("STRING_1467542772");
  msg.set(SecuritySubType_32);
  Instrument_31.insert(SecuritySubType_32.getString());
  FIX::SecurityType SecurityType_33("STRING_PFAND");
  msg.set(SecurityType_33);
  Instrument_31.insert(SecurityType_33.getString());
  FIX::Seniority Seniority_31("STRING_SD");
  msg.set(Seniority_31);
  Instrument_31.insert(Seniority_31.getString());
  FIX::SettlMethod SettlMethod_31('P');
  msg.set(SettlMethod_31);
  Instrument_31.insert(SettlMethod_31.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_31("STRING_1572221084");
  msg.set(SettleOnOpenFlag_31);
  Instrument_31.insert(SettleOnOpenFlag_31.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_31("STRING_1821537626");
  msg.set(StateOrProvinceOfIssue_31);
  Instrument_31.insert(StateOrProvinceOfIssue_31.getString());
  FIX::StrikeCurrency StrikeCurrency_31("CAN");
  msg.set(StrikeCurrency_31);
  Instrument_31.insert(StrikeCurrency_31.getString());
  FIX::StrikeMultiplier StrikeMultiplier_31;
  StrikeMultiplier_31.setString("14313492");
  msg.set(StrikeMultiplier_31);
  Instrument_31.insert(StrikeMultiplier_31.getString());
  FIX::StrikePrice StrikePrice_31;
  StrikePrice_31.setString("3517461");
  msg.set(StrikePrice_31);
  Instrument_31.insert(StrikePrice_31.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_31(1);
  msg.set(StrikePriceBoundaryMethod_31);
  Instrument_31.insert(StrikePriceBoundaryMethod_31.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_31;
  StrikePriceBoundaryPrecision_31.setString("21.650000");
  msg.set(StrikePriceBoundaryPrecision_31);
  Instrument_31.insert(StrikePriceBoundaryPrecision_31.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_31(2);
  msg.set(StrikePriceDeterminationMethod_31);
  Instrument_31.insert(StrikePriceDeterminationMethod_31.getString());
  FIX::StrikeValue StrikeValue_31;
  StrikeValue_31.setString("7563111");
  msg.set(StrikeValue_31);
  Instrument_31.insert(StrikeValue_31.getString());
  FIX::Symbol Symbol_31("STRING_1127644162");
  msg.set(Symbol_31);
  Instrument_31.insert(Symbol_31.getString());
  FIX::SymbolSfx SymbolSfx_31("STRING_WI");
  msg.set(SymbolSfx_31);
  Instrument_31.insert(SymbolSfx_31.getString());
  FIX::TimeUnit TimeUnit_31("STRING_D");
  msg.set(TimeUnit_31);
  Instrument_31.insert(TimeUnit_31.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_31(1);
  msg.set(UnderlyingPriceDeterminationMethod_31);
  Instrument_31.insert(UnderlyingPriceDeterminationMethod_31.getString());
  FIX::UnitOfMeasure UnitOfMeasure_31("STRING_MMBtu");
  msg.set(UnitOfMeasure_31);
  Instrument_31.insert(UnitOfMeasure_31.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_31;
  UnitOfMeasureQty_31.setString("1099348");
  msg.set(UnitOfMeasureQty_31);
  Instrument_31.insert(UnitOfMeasureQty_31.getString());
  FIX::ValuationMethod ValuationMethod_31("STRING_CDS");
  msg.set(ValuationMethod_31);
  Instrument_31.insert(ValuationMethod_31.getString());
  all_values.push_back(Instrument_31);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_63;
    FIX::ComplexEventCondition ComplexEventCondition_63(2);
    noComplexEvents_0_0.set(ComplexEventCondition_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventCondition_63.getString());
    FIX::ComplexEventPrice ComplexEventPrice_63;
    ComplexEventPrice_63.setString("18977838");
    noComplexEvents_0_0.set(ComplexEventPrice_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventPrice_63.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_63(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryMethod_63.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_63;
    ComplexEventPriceBoundaryPrecision_63.setString("67.240000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryPrecision_63.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_63(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceTimeType_63.getString());
    FIX::ComplexEventType ComplexEventType_63(6);
    noComplexEvents_0_0.set(ComplexEventType_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexEventType_63.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_63;
    ComplexOptPayoutAmount_63.setString("3584385");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_63);
    ComplexEvents_NoComplexEvents_63.insert(ComplexOptPayoutAmount_63.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_63);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_133;
      FIX::ComplexEventEndDate ComplexEventEndDate_133(FIX::UTCTIMESTAMP(21, 53, 29, 24, 62017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_133);
      ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventEndDate_133.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_133(FIX::UTCTIMESTAMP(14, 5, 18, 13, 112009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_133);
      ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventStartDate_133.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_133);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_272;
        FIX::ComplexEventEndTime ComplexEventEndTime_272(FIX::UTCTIMEONLY(20, 29, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_272);
        ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventEndTime_272.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_272(FIX::UTCTIMEONLY(2, 47, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_272);
        ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventStartTime_272.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_272);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_134;
      FIX::ComplexEventEndDate ComplexEventEndDate_134(FIX::UTCTIMESTAMP(7, 58, 12, 8, 52014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_134);
      ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventEndDate_134.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_134(FIX::UTCTIMESTAMP(16, 21, 52, 21, 102013));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_134);
      ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventStartDate_134.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_134);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_273;
        FIX::ComplexEventEndTime ComplexEventEndTime_273(FIX::UTCTIMEONLY(16, 42, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_273);
        ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventEndTime_273.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_273(FIX::UTCTIMEONLY(20, 16, 20));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_273);
        ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventStartTime_273.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_273);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_135;
      FIX::ComplexEventEndDate ComplexEventEndDate_135(FIX::UTCTIMESTAMP(12, 42, 10, 4, 92009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_135);
      ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventEndDate_135.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_135(FIX::UTCTIMESTAMP(4, 8, 37, 24, 52015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_135);
      ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventStartDate_135.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_135);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_274;
        FIX::ComplexEventEndTime ComplexEventEndTime_274(FIX::UTCTIMEONLY(14, 2, 48));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_274);
        ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventEndTime_274.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_274(FIX::UTCTIMEONLY(0, 2, 52));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_274);
        ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventStartTime_274.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_274);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_275;
        FIX::ComplexEventEndTime ComplexEventEndTime_275(FIX::UTCTIMEONLY(18, 34, 5));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_275);
        ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventEndTime_275.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_275(FIX::UTCTIMEONLY(22, 13, 55));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_275);
        ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventStartTime_275.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_275);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_276;
        FIX::ComplexEventEndTime ComplexEventEndTime_276(FIX::UTCTIMEONLY(18, 37, 21));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_276);
        ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventEndTime_276.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_276(FIX::UTCTIMEONLY(14, 10, 45));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_276);
        ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventStartTime_276.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_276);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_64;
    FIX::ComplexEventCondition ComplexEventCondition_64(1);
    noComplexEvents_0_1.set(ComplexEventCondition_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventCondition_64.getString());
    FIX::ComplexEventPrice ComplexEventPrice_64;
    ComplexEventPrice_64.setString("14529711");
    noComplexEvents_0_1.set(ComplexEventPrice_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPrice_64.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_64(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryMethod_64.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_64;
    ComplexEventPriceBoundaryPrecision_64.setString("82.550000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryPrecision_64.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_64(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceTimeType_64.getString());
    FIX::ComplexEventType ComplexEventType_64(9);
    noComplexEvents_0_1.set(ComplexEventType_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexEventType_64.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_64;
    ComplexOptPayoutAmount_64.setString("13355681");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_64);
    ComplexEvents_NoComplexEvents_64.insert(ComplexOptPayoutAmount_64.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_64);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_136;
      FIX::ComplexEventEndDate ComplexEventEndDate_136(FIX::UTCTIMESTAMP(14, 59, 53, 26, 22015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_136);
      ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventEndDate_136.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_136(FIX::UTCTIMESTAMP(23, 11, 43, 18, 32012));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_136);
      ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventStartDate_136.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_136);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_277;
        FIX::ComplexEventEndTime ComplexEventEndTime_277(FIX::UTCTIMEONLY(18, 15, 47));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_277);
        ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventEndTime_277.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_277(FIX::UTCTIMEONLY(9, 57, 38));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_277);
        ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventStartTime_277.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_277);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_278;
        FIX::ComplexEventEndTime ComplexEventEndTime_278(FIX::UTCTIMEONLY(16, 53, 7));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_278);
        ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventEndTime_278.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_278(FIX::UTCTIMEONLY(5, 35, 34));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_278);
        ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventStartTime_278.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_278);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_279;
        FIX::ComplexEventEndTime ComplexEventEndTime_279(FIX::UTCTIMEONLY(5, 25, 36));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_279);
        ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventEndTime_279.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_279(FIX::UTCTIMEONLY(15, 14, 34));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_279);
        ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventStartTime_279.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_279);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_137;
      FIX::ComplexEventEndDate ComplexEventEndDate_137(FIX::UTCTIMESTAMP(17, 9, 33, 7, 102017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_137);
      ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventEndDate_137.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_137(FIX::UTCTIMESTAMP(8, 18, 44, 13, 92003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_137);
      ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventStartDate_137.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_137);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_280;
        FIX::ComplexEventEndTime ComplexEventEndTime_280(FIX::UTCTIMEONLY(5, 0, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_280);
        ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventEndTime_280.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_280(FIX::UTCTIMEONLY(5, 10, 30));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_280);
        ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventStartTime_280.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_280);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_281;
        FIX::ComplexEventEndTime ComplexEventEndTime_281(FIX::UTCTIMEONLY(3, 56, 17));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_281);
        ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventEndTime_281.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_281(FIX::UTCTIMEONLY(15, 23, 29));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_281);
        ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventStartTime_281.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_281);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_138;
      FIX::ComplexEventEndDate ComplexEventEndDate_138(FIX::UTCTIMESTAMP(4, 38, 22, 0, 52009));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_138);
      ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventEndDate_138.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_138(FIX::UTCTIMESTAMP(12, 44, 37, 25, 52010));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_138);
      ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventStartDate_138.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_138);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_282;
        FIX::ComplexEventEndTime ComplexEventEndTime_282(FIX::UTCTIMEONLY(4, 41, 35));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_282);
        ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventEndTime_282.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_282(FIX::UTCTIMEONLY(14, 45, 19));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_282);
        ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventStartTime_282.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_282);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_283;
        FIX::ComplexEventEndTime ComplexEventEndTime_283(FIX::UTCTIMEONLY(16, 7, 28));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_283);
        ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventEndTime_283.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_283(FIX::UTCTIMEONLY(10, 51, 17));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_283);
        ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventStartTime_283.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_283);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_65;
    FIX::ComplexEventCondition ComplexEventCondition_65(2);
    noComplexEvents_0_2.set(ComplexEventCondition_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventCondition_65.getString());
    FIX::ComplexEventPrice ComplexEventPrice_65;
    ComplexEventPrice_65.setString("2320572");
    noComplexEvents_0_2.set(ComplexEventPrice_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventPrice_65.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_65(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryMethod_65.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_65;
    ComplexEventPriceBoundaryPrecision_65.setString("51.620000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryPrecision_65.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_65(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceTimeType_65.getString());
    FIX::ComplexEventType ComplexEventType_65(2);
    noComplexEvents_0_2.set(ComplexEventType_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexEventType_65.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_65;
    ComplexOptPayoutAmount_65.setString("13308672");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_65);
    ComplexEvents_NoComplexEvents_65.insert(ComplexOptPayoutAmount_65.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_65);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_139;
      FIX::ComplexEventEndDate ComplexEventEndDate_139(FIX::UTCTIMESTAMP(3, 57, 53, 15, 12015));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_139);
      ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventEndDate_139.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_139(FIX::UTCTIMESTAMP(20, 6, 18, 4, 22001));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_139);
      ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventStartDate_139.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_139);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_284;
        FIX::ComplexEventEndTime ComplexEventEndTime_284(FIX::UTCTIMEONLY(4, 50, 24));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_284);
        ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventEndTime_284.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_284(FIX::UTCTIMEONLY(16, 7, 45));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_284);
        ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventStartTime_284.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_284);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_285;
        FIX::ComplexEventEndTime ComplexEventEndTime_285(FIX::UTCTIMEONLY(18, 41, 50));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_285);
        ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventEndTime_285.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_285(FIX::UTCTIMEONLY(1, 57, 18));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_285);
        ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventStartTime_285.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_285);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_140;
      FIX::ComplexEventEndDate ComplexEventEndDate_140(FIX::UTCTIMESTAMP(5, 8, 2, 4, 92016));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_140);
      ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventEndDate_140.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_140(FIX::UTCTIMESTAMP(20, 34, 34, 12, 122004));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_140);
      ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventStartDate_140.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_140);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
        FIX::ComplexEventEndTime ComplexEventEndTime_286(FIX::UTCTIMEONLY(2, 34, 23));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_286);
        ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventEndTime_286.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_286(FIX::UTCTIMEONLY(15, 30, 15));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_286);
        ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventStartTime_286.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
        FIX::ComplexEventEndTime ComplexEventEndTime_287(FIX::UTCTIMEONLY(13, 49, 45));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_287);
        ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventEndTime_287.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_287(FIX::UTCTIMEONLY(2, 34, 1));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_287);
        ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventStartTime_287.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_141;
      FIX::ComplexEventEndDate ComplexEventEndDate_141(FIX::UTCTIMESTAMP(7, 9, 42, 4, 102004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_141);
      ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventEndDate_141.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_141(FIX::UTCTIMESTAMP(5, 37, 22, 6, 12012));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_141);
      ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventStartDate_141.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_141);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
        FIX::ComplexEventEndTime ComplexEventEndTime_288(FIX::UTCTIMEONLY(2, 20, 3));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_288);
        ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventEndTime_288.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_288(FIX::UTCTIMEONLY(15, 26, 16));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_288);
        ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventStartTime_288.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
        FIX::ComplexEventEndTime ComplexEventEndTime_289(FIX::UTCTIMEONLY(7, 57, 15));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_289);
        ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventEndTime_289.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_289(FIX::UTCTIMEONLY(15, 50, 11));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_289);
        ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventStartTime_289.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_68;
    FIX::EventDate EventDate_68("LOCALMKTDATE_163227289");
    noEvents_0_0.set(EventDate_68);
    EvntGrp_NoEvents_68.insert(EventDate_68.getString());
    FIX::EventPx EventPx_68;
    EventPx_68.setString("3852912");
    noEvents_0_0.set(EventPx_68);
    EvntGrp_NoEvents_68.insert(EventPx_68.getString());
    FIX::EventText EventText_68("STRING_563913942");
    noEvents_0_0.set(EventText_68);
    EvntGrp_NoEvents_68.insert(EventText_68.getString());
    FIX::EventTime EventTime_68(FIX::UTCTIMESTAMP(22, 44, 25, 8, 102016));
    noEvents_0_0.set(EventTime_68);
    EvntGrp_NoEvents_68.insert(EventTime_68.getString());
    FIX::EventType EventType_68(11);
    noEvents_0_0.set(EventType_68);
    EvntGrp_NoEvents_68.insert(EventType_68.getString());
    all_values.push_back(EvntGrp_NoEvents_68);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_69;
    FIX::EventDate EventDate_69("LOCALMKTDATE_293828222");
    noEvents_0_1.set(EventDate_69);
    EvntGrp_NoEvents_69.insert(EventDate_69.getString());
    FIX::EventPx EventPx_69;
    EventPx_69.setString("7074692");
    noEvents_0_1.set(EventPx_69);
    EvntGrp_NoEvents_69.insert(EventPx_69.getString());
    FIX::EventText EventText_69("STRING_1391913416");
    noEvents_0_1.set(EventText_69);
    EvntGrp_NoEvents_69.insert(EventText_69.getString());
    FIX::EventTime EventTime_69(FIX::UTCTIMESTAMP(11, 8, 45, 3, 12017));
    noEvents_0_1.set(EventTime_69);
    EvntGrp_NoEvents_69.insert(EventTime_69.getString());
    FIX::EventType EventType_69(16);
    noEvents_0_1.set(EventType_69);
    EvntGrp_NoEvents_69.insert(EventType_69.getString());
    all_values.push_back(EvntGrp_NoEvents_69);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_58;
    FIX::InstrumentPartyID InstrumentPartyID_58("STRING_124582402");
    noInstrumentParties_0_0.set(InstrumentPartyID_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyID_58.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_58('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyIDSource_58.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_58(369991246);
    noInstrumentParties_0_0.set(InstrumentPartyRole_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyRole_58.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_58);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115;
      FIX::InstrumentPartySubID InstrumentPartySubID_115("STRING_219522852");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubID_115.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_115(47916208);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubIDType_115.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116;
      FIX::InstrumentPartySubID InstrumentPartySubID_116("STRING_987064296");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubID_116.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_116(1309840039);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubIDType_116.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117;
      FIX::InstrumentPartySubID InstrumentPartySubID_117("STRING_211143497");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_117);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubID_117.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_117(1372355509);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_117);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubIDType_117.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_59;
    FIX::InstrumentPartyID InstrumentPartyID_59("STRING_1873753981");
    noInstrumentParties_0_1.set(InstrumentPartyID_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyID_59.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_59('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyIDSource_59.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_59(305314203);
    noInstrumentParties_0_1.set(InstrumentPartyRole_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyRole_59.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_59);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
      FIX::InstrumentPartySubID InstrumentPartySubID_118("STRING_1106687764");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_118);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubID_118.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_118(347332271);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_118);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubIDType_118.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
      FIX::InstrumentPartySubID InstrumentPartySubID_119("STRING_526827959");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_119);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubID_119.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_119(1766070404);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_119);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubIDType_119.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_60;
    FIX::InstrumentPartyID InstrumentPartyID_60("STRING_1466963301");
    noInstrumentParties_0_2.set(InstrumentPartyID_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyID_60.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_60('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyIDSource_60.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_60(326056013);
    noInstrumentParties_0_2.set(InstrumentPartyRole_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyRole_60.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_60);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
      FIX::InstrumentPartySubID InstrumentPartySubID_120("STRING_789383983");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_120);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubID_120.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_120(471601000);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_120);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubIDType_120.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_65;
    FIX::SecurityAltID SecurityAltID_65("STRING_1915691609");
    noSecurityAltID_0_0.set(SecurityAltID_65);
    SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltID_65.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_65("STRING_1300645107");
    noSecurityAltID_0_0.set(SecurityAltIDSource_65);
    SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltIDSource_65.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_65);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_62;
  FIX::SecurityXML SecurityXML_63("XMLDATA_599038030");
  msg.set(SecurityXML_63);
  FIX::SecurityXMLLen SecurityXMLLen_31(1535529932);
  msg.set(SecurityXMLLen_31);
  FIX::SecurityXMLSchema SecurityXMLSchema_31("STRING_1988359283");
  msg.set(SecurityXMLSchema_31);
  SecurityXML_62.insert(SecurityXMLSchema_31.getString());
  all_values.push_back(SecurityXML_62);

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    FIX::Currency Currency_26("EUR");
    noMDEntries_0_0.set(Currency_26);
    MDFullGrp_NoMDEntries_0.insert(Currency_26.getString());
    FIX::DealingCapacity DealingCapacity_1('R');
    noMDEntries_0_0.set(DealingCapacity_1);
    MDFullGrp_NoMDEntries_0.insert(DealingCapacity_1.getString());
    FIX::DeskID DeskID_1("STRING_1074595819");
    noMDEntries_0_0.set(DeskID_1);
    MDFullGrp_NoMDEntries_0.insert(DeskID_1.getString());
    FIX::EncodedText EncodedText_46("DATA_1813121779");
    noMDEntries_0_0.set(EncodedText_46);
    MDFullGrp_NoMDEntries_0.insert(EncodedText_46.getString());
    FIX::EncodedTextLen EncodedTextLen_46(903631914);
    noMDEntries_0_0.set(EncodedTextLen_46);
    MDFullGrp_NoMDEntries_0.insert(EncodedTextLen_46.getString());
    FIX::ExecInst ExecInst_3("MULTIPLECHARVALUE_B");
    noMDEntries_0_0.set(ExecInst_3);
    MDFullGrp_NoMDEntries_0.insert(ExecInst_3.getString());
    FIX::ExpireDate ExpireDate_4("LOCALMKTDATE_975478171");
    noMDEntries_0_0.set(ExpireDate_4);
    MDFullGrp_NoMDEntries_0.insert(ExpireDate_4.getString());
    FIX::ExpireTime ExpireTime_5(FIX::UTCTIMESTAMP(0, 24, 51, 8, 32001));
    noMDEntries_0_0.set(ExpireTime_5);
    MDFullGrp_NoMDEntries_0.insert(ExpireTime_5.getString());
    FIX::FirstPx FirstPx_1;
    FirstPx_1.setString("19391784");
    noMDEntries_0_0.set(FirstPx_1);
    MDFullGrp_NoMDEntries_0.insert(FirstPx_1.getString());
    FIX::HaltReasonInt HaltReasonInt_1(2);
    noMDEntries_0_0.set(HaltReasonInt_1);
    FIX::HighPx HighPx_1;
    HighPx_1.setString("9169577");
    noMDEntries_0_0.set(HighPx_1);
    MDFullGrp_NoMDEntries_0.insert(HighPx_1.getString());
    FIX::LastPx LastPx_12;
    LastPx_12.setString("12586581");
    noMDEntries_0_0.set(LastPx_12);
    MDFullGrp_NoMDEntries_0.insert(LastPx_12.getString());
    FIX::LocationID LocationID_1("STRING_1874468823");
    noMDEntries_0_0.set(LocationID_1);
    MDFullGrp_NoMDEntries_0.insert(LocationID_1.getString());
    FIX::LotType LotType_11('2');
    noMDEntries_0_0.set(LotType_11);
    MDFullGrp_NoMDEntries_0.insert(LotType_11.getString());
    FIX::LowPx LowPx_1;
    LowPx_1.setString("19700511");
    noMDEntries_0_0.set(LowPx_1);
    MDFullGrp_NoMDEntries_0.insert(LowPx_1.getString());
    FIX::MDEntryBuyer MDEntryBuyer_1("STRING_516369159");
    noMDEntries_0_0.set(MDEntryBuyer_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryBuyer_1.getString());
    FIX::MDEntryDate MDEntryDate_1(FIX::UTCDATEONLY(8, 1, 2006));
    noMDEntries_0_0.set(MDEntryDate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryDate_1.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_1;
    MDEntryForwardPoints_1.setString("17316740");
    noMDEntries_0_0.set(MDEntryForwardPoints_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryForwardPoints_1.getString());
    FIX::MDEntryID MDEntryID_1("STRING_1820107052");
    noMDEntries_0_0.set(MDEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryID_1.getString());
    FIX::MDEntryOriginator MDEntryOriginator_1("STRING_708651879");
    noMDEntries_0_0.set(MDEntryOriginator_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryOriginator_1.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_1(69914887);
    noMDEntries_0_0.set(MDEntryPositionNo_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPositionNo_1.getString());
    FIX::MDEntryPx MDEntryPx_1;
    MDEntryPx_1.setString("13327357");
    noMDEntries_0_0.set(MDEntryPx_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPx_1.getString());
    FIX::MDEntrySeller MDEntrySeller_1("STRING_154767159");
    noMDEntries_0_0.set(MDEntrySeller_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySeller_1.getString());
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("9256305");
    noMDEntries_0_0.set(MDEntrySize_3);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySize_3.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_1;
    MDEntrySpotRate_1.setString("2598479");
    noMDEntries_0_0.set(MDEntrySpotRate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySpotRate_1.getString());
    FIX::MDEntryTime MDEntryTime_1(FIX::UTCTIMEONLY(4, 18, 21));
    noMDEntries_0_0.set(MDEntryTime_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryTime_1.getString());
    FIX::MDEntryType MDEntryType_2('L');
    noMDEntries_0_0.set(MDEntryType_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryType_2.getString());
    FIX::MDMkt MDMkt_1("EXCHANGE_1460556355");
    noMDEntries_0_0.set(MDMkt_1);
    MDFullGrp_NoMDEntries_0.insert(MDMkt_1.getString());
    FIX::MDOriginType MDOriginType_1(1);
    noMDEntries_0_0.set(MDOriginType_1);
    MDFullGrp_NoMDEntries_0.insert(MDOriginType_1.getString());
    FIX::MDPriceLevel MDPriceLevel_1(988237523);
    noMDEntries_0_0.set(MDPriceLevel_1);
    MDFullGrp_NoMDEntries_0.insert(MDPriceLevel_1.getString());
    FIX::MDQuoteType MDQuoteType_2(2);
    noMDEntries_0_0.set(MDQuoteType_2);
    MDFullGrp_NoMDEntries_0.insert(MDQuoteType_2.getString());
    FIX::MinQty MinQty_3;
    MinQty_3.setString("20246166");
    noMDEntries_0_0.set(MinQty_3);
    MDFullGrp_NoMDEntries_0.insert(MinQty_3.getString());
    FIX::NumberOfOrders NumberOfOrders_1(139124890);
    noMDEntries_0_0.set(NumberOfOrders_1);
    MDFullGrp_NoMDEntries_0.insert(NumberOfOrders_1.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_2("MULTIPLECHARVALUE_4");
    noMDEntries_0_0.set(OpenCloseSettlFlag_2);
    MDFullGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_2.getString());
    FIX::OrdType OrdType_27('J');
    noMDEntries_0_0.set(OrdType_27);
    MDFullGrp_NoMDEntries_0.insert(OrdType_27.getString());
    FIX::OrderCapacity OrderCapacity_8('A');
    noMDEntries_0_0.set(OrderCapacity_8);
    MDFullGrp_NoMDEntries_0.insert(OrderCapacity_8.getString());
    FIX::OrderID OrderID_23("STRING_1955271795");
    noMDEntries_0_0.set(OrderID_23);
    MDFullGrp_NoMDEntries_0.insert(OrderID_23.getString());
    FIX::PriceDelta PriceDelta_2;
    PriceDelta_2.setString("6579308");
    noMDEntries_0_0.set(PriceDelta_2);
    MDFullGrp_NoMDEntries_0.insert(PriceDelta_2.getString());
    FIX::PriceType PriceType_20(6);
    noMDEntries_0_0.set(PriceType_20);
    MDFullGrp_NoMDEntries_0.insert(PriceType_20.getString());
    FIX::QuoteCondition QuoteCondition_1("MULTIPLESTRINGVALUE_W");
    noMDEntries_0_0.set(QuoteCondition_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteCondition_1.getString());
    FIX::QuoteEntryID QuoteEntryID_1("STRING_1174299977");
    noMDEntries_0_0.set(QuoteEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteEntryID_1.getString());
    FIX::RptSeq RptSeq_2(1866227584);
    noMDEntries_0_0.set(RptSeq_2);
    MDFullGrp_NoMDEntries_0.insert(RptSeq_2.getString());
    FIX::Scope Scope_2("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(Scope_2);
    MDFullGrp_NoMDEntries_0.insert(Scope_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_19("STRING_1458877097");
    noMDEntries_0_0.set(SecondaryOrderID_19);
    MDFullGrp_NoMDEntries_0.insert(SecondaryOrderID_19.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_1(7);
    noMDEntries_0_0.set(SecurityTradingStatus_1);
    MDFullGrp_NoMDEntries_0.insert(SecurityTradingStatus_1.getString());
    FIX::SellerDays SellerDays_1(347182145);
    noMDEntries_0_0.set(SellerDays_1);
    MDFullGrp_NoMDEntries_0.insert(SellerDays_1.getString());
    FIX::SettlCurrency SettlCurrency_11("USD");
    noMDEntries_0_0.set(SettlCurrency_11);
    MDFullGrp_NoMDEntries_0.insert(SettlCurrency_11.getString());
    FIX::SettlDate SettlDate_18("LOCALMKTDATE_417097032");
    noMDEntries_0_0.set(SettlDate_18);
    MDFullGrp_NoMDEntries_0.insert(SettlDate_18.getString());
    FIX::SettlType SettlType_12("STRING_5");
    noMDEntries_0_0.set(SettlType_12);
    MDFullGrp_NoMDEntries_0.insert(SettlType_12.getString());
    FIX::Text Text_46("STRING_1449939219");
    noMDEntries_0_0.set(Text_46);
    MDFullGrp_NoMDEntries_0.insert(Text_46.getString());
    FIX::TickDirection TickDirection_1('1');
    noMDEntries_0_0.set(TickDirection_1);
    MDFullGrp_NoMDEntries_0.insert(TickDirection_1.getString());
    FIX::TimeInForce TimeInForce_29('4');
    noMDEntries_0_0.set(TimeInForce_29);
    MDFullGrp_NoMDEntries_0.insert(TimeInForce_29.getString());
    FIX::TradeCondition TradeCondition_1("MULTIPLESTRINGVALUE_z");
    noMDEntries_0_0.set(TradeCondition_1);
    MDFullGrp_NoMDEntries_0.insert(TradeCondition_1.getString());
    FIX::TradeVolume TradeVolume_1;
    TradeVolume_1.setString("10245064");
    noMDEntries_0_0.set(TradeVolume_1);
    MDFullGrp_NoMDEntries_0.insert(TradeVolume_1.getString());
    FIX::TradingSessionID TradingSessionID_29("STRING_1");
    noMDEntries_0_0.set(TradingSessionID_29);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionID_29.getString());
    FIX::TradingSessionSubID TradingSessionSubID_29("STRING_4");
    noMDEntries_0_0.set(TradingSessionSubID_29);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionSubID_29.getString());
    FIX::TrdType TrdType_4(25);
    noMDEntries_0_0.set(TrdType_4);
    MDFullGrp_NoMDEntries_0.insert(TrdType_4.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_60;
      FIX::PartyID PartyID_60("STRING_1416376289");
      noPartyIDs_0_1_0.set(PartyID_60);
      Parties_NoPartyIDs_60.insert(PartyID_60.getString());
      FIX::PartyIDSource PartyIDSource_60('I');
      noPartyIDs_0_1_0.set(PartyIDSource_60);
      Parties_NoPartyIDs_60.insert(PartyIDSource_60.getString());
      FIX::PartyRole PartyRole_60(46);
      noPartyIDs_0_1_0.set(PartyRole_60);
      Parties_NoPartyIDs_60.insert(PartyRole_60.getString());
      all_values.push_back(Parties_NoPartyIDs_60);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_122;
        FIX::PartySubID PartySubID_122("STRING_800939523");
        noPartySubIDs_0_0_2_0.set(PartySubID_122);
        PtysSubGrp_NoPartySubIDs_122.insert(PartySubID_122.getString());
        FIX::PartySubIDType PartySubIDType_122(8);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_122);
        PtysSubGrp_NoPartySubIDs_122.insert(PartySubIDType_122.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_122);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_123;
        FIX::PartySubID PartySubID_123("STRING_76971284");
        noPartySubIDs_0_0_2_1.set(PartySubID_123);
        PtysSubGrp_NoPartySubIDs_123.insert(PartySubID_123.getString());
        FIX::PartySubIDType PartySubIDType_123(19);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_123);
        PtysSubGrp_NoPartySubIDs_123.insert(PartySubIDType_123.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_123);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_61;
      FIX::PartyID PartyID_61("STRING_1473018314");
      noPartyIDs_0_1_1.set(PartyID_61);
      Parties_NoPartyIDs_61.insert(PartyID_61.getString());
      FIX::PartyIDSource PartyIDSource_61('I');
      noPartyIDs_0_1_1.set(PartyIDSource_61);
      Parties_NoPartyIDs_61.insert(PartyIDSource_61.getString());
      FIX::PartyRole PartyRole_61(22);
      noPartyIDs_0_1_1.set(PartyRole_61);
      Parties_NoPartyIDs_61.insert(PartyRole_61.getString());
      all_values.push_back(Parties_NoPartyIDs_61);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_124;
        FIX::PartySubID PartySubID_124("STRING_1909202079");
        noPartySubIDs_0_1_2_0.set(PartySubID_124);
        PtysSubGrp_NoPartySubIDs_124.insert(PartySubID_124.getString());
        FIX::PartySubIDType PartySubIDType_124(27);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_124);
        PtysSubGrp_NoPartySubIDs_124.insert(PartySubIDType_124.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_124);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_125;
        FIX::PartySubID PartySubID_125("STRING_1866365707");
        noPartySubIDs_0_1_2_1.set(PartySubID_125);
        PtysSubGrp_NoPartySubIDs_125.insert(PartySubID_125.getString());
        FIX::PartySubIDType PartySubIDType_125(10);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_125);
        PtysSubGrp_NoPartySubIDs_125.insert(PartySubIDType_125.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_125);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_62;
      FIX::PartyID PartyID_62("STRING_166415454");
      noPartyIDs_0_1_2.set(PartyID_62);
      Parties_NoPartyIDs_62.insert(PartyID_62.getString());
      FIX::PartyIDSource PartyIDSource_62('I');
      noPartyIDs_0_1_2.set(PartyIDSource_62);
      Parties_NoPartyIDs_62.insert(PartyIDSource_62.getString());
      FIX::PartyRole PartyRole_62(60);
      noPartyIDs_0_1_2.set(PartyRole_62);
      Parties_NoPartyIDs_62.insert(PartyRole_62.getString());
      all_values.push_back(Parties_NoPartyIDs_62);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_126;
        FIX::PartySubID PartySubID_126("STRING_483161236");
        noPartySubIDs_0_2_2_0.set(PartySubID_126);
        PtysSubGrp_NoPartySubIDs_126.insert(PartySubID_126.getString());
        FIX::PartySubIDType PartySubIDType_126(22);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_126);
        PtysSubGrp_NoPartySubIDs_126.insert(PartySubIDType_126.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_126);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_127;
        FIX::PartySubID PartySubID_127("STRING_764043086");
        noPartySubIDs_0_2_2_1.set(PartySubID_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubID_127.getString());
        FIX::PartySubIDType PartySubIDType_127(17);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubIDType_127.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_127);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_9;
      FIX::RateSource RateSource_14(0);
      noRateSources_0_1_0.set(RateSource_14);
      RateSource_NoRateSources_9.insert(RateSource_14.getString());
      FIX::RateSourceType RateSourceType_9(1);
      noRateSources_0_1_0.set(RateSourceType_9);
      RateSource_NoRateSources_9.insert(RateSourceType_9.getString());
      FIX::ReferencePage ReferencePage_9("STRING_1848590361");
      noRateSources_0_1_0.set(ReferencePage_9);
      RateSource_NoRateSources_9.insert(ReferencePage_9.getString());
      all_values.push_back(RateSource_NoRateSources_9);

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_3;
      FIX::MDSecSize MDSecSize_3;
      MDSecSize_3.setString("3764888");
      noOfSecSizes_0_1_0.set(MDSecSize_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSize_3.getString());
      FIX::MDSecSizeType MDSecSizeType_3(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_3);
      SecSizesGrp_NoOfSecSizes_3.insert(MDSecSizeType_3.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_3);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_4;
      FIX::MDSecSize MDSecSize_4;
      MDSecSize_4.setString("12220245");
      noOfSecSizes_0_1_1.set(MDSecSize_4);
      SecSizesGrp_NoOfSecSizes_4.insert(MDSecSize_4.getString());
      FIX::MDSecSizeType MDSecSizeType_4(1);
      noOfSecSizes_0_1_1.set(MDSecSizeType_4);
      SecSizesGrp_NoOfSecSizes_4.insert(MDSecSizeType_4.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_4);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_13;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_13("CHF");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveCurrency_13.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_13("STRING_EONIA");
    noMDEntries_0_0.set(BenchmarkCurveName_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveName_13.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_13("STRING_251167298");
    noMDEntries_0_0.set(BenchmarkCurvePoint_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurvePoint_13.getString());
    FIX::BenchmarkPrice BenchmarkPrice_13;
    BenchmarkPrice_13.setString("4450214");
    noMDEntries_0_0.set(BenchmarkPrice_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPrice_13.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_13(1548781501);
    noMDEntries_0_0.set(BenchmarkPriceType_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPriceType_13.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_13("STRING_1724185613");
    noMDEntries_0_0.set(BenchmarkSecurityID_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityID_13.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_13("STRING_1179923590");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityIDSource_13.getString());
    FIX::Spread Spread_13;
    Spread_13.setString("14099328");
    noMDEntries_0_0.set(Spread_13);
    SpreadOrBenchmarkCurveData_13.insert(Spread_13.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_13);

    // YieldData
    multiset<string> YieldData_8;
    FIX::Yield Yield_8;
    Yield_8.setString("59.530000");
    noMDEntries_0_0.set(Yield_8);
    YieldData_8.insert(Yield_8.getString());
    FIX::YieldCalcDate YieldCalcDate_8("LOCALMKTDATE_941642022");
    noMDEntries_0_0.set(YieldCalcDate_8);
    YieldData_8.insert(YieldCalcDate_8.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_8("LOCALMKTDATE_989828112");
    noMDEntries_0_0.set(YieldRedemptionDate_8);
    YieldData_8.insert(YieldRedemptionDate_8.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_8;
    YieldRedemptionPrice_8.setString("3989580");
    noMDEntries_0_0.set(YieldRedemptionPrice_8);
    YieldData_8.insert(YieldRedemptionPrice_8.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_8(14753902);
    noMDEntries_0_0.set(YieldRedemptionPriceType_8);
    YieldData_8.insert(YieldRedemptionPriceType_8.getString());
    FIX::YieldType YieldType_8("STRING_PROCEEDS");
    noMDEntries_0_0.set(YieldType_8);
    YieldData_8.insert(YieldType_8.getString());
    all_values.push_back(YieldData_8);

    msg.addGroup(noMDEntries_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_1;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_1;
    FIX::Currency Currency_27("GBP");
    noMDEntries_0_1.set(Currency_27);
    MDFullGrp_NoMDEntries_1.insert(Currency_27.getString());
    FIX::DealingCapacity DealingCapacity_2('R');
    noMDEntries_0_1.set(DealingCapacity_2);
    MDFullGrp_NoMDEntries_1.insert(DealingCapacity_2.getString());
    FIX::DeskID DeskID_2("STRING_948183452");
    noMDEntries_0_1.set(DeskID_2);
    MDFullGrp_NoMDEntries_1.insert(DeskID_2.getString());
    FIX::EncodedText EncodedText_47("DATA_740731259");
    noMDEntries_0_1.set(EncodedText_47);
    MDFullGrp_NoMDEntries_1.insert(EncodedText_47.getString());
    FIX::EncodedTextLen EncodedTextLen_47(1234390520);
    noMDEntries_0_1.set(EncodedTextLen_47);
    MDFullGrp_NoMDEntries_1.insert(EncodedTextLen_47.getString());
    FIX::ExecInst ExecInst_4("MULTIPLECHARVALUE_I");
    noMDEntries_0_1.set(ExecInst_4);
    MDFullGrp_NoMDEntries_1.insert(ExecInst_4.getString());
    FIX::ExpireDate ExpireDate_5("LOCALMKTDATE_1838696738");
    noMDEntries_0_1.set(ExpireDate_5);
    MDFullGrp_NoMDEntries_1.insert(ExpireDate_5.getString());
    FIX::ExpireTime ExpireTime_6(FIX::UTCTIMESTAMP(13, 52, 40, 21, 122004));
    noMDEntries_0_1.set(ExpireTime_6);
    MDFullGrp_NoMDEntries_1.insert(ExpireTime_6.getString());
    FIX::FirstPx FirstPx_2;
    FirstPx_2.setString("5968089");
    noMDEntries_0_1.set(FirstPx_2);
    MDFullGrp_NoMDEntries_1.insert(FirstPx_2.getString());
    FIX::HaltReasonInt HaltReasonInt_2(2);
    noMDEntries_0_1.set(HaltReasonInt_2);
    FIX::HighPx HighPx_2;
    HighPx_2.setString("3695338");
    noMDEntries_0_1.set(HighPx_2);
    MDFullGrp_NoMDEntries_1.insert(HighPx_2.getString());
    FIX::LastPx LastPx_13;
    LastPx_13.setString("2885682");
    noMDEntries_0_1.set(LastPx_13);
    MDFullGrp_NoMDEntries_1.insert(LastPx_13.getString());
    FIX::LocationID LocationID_2("STRING_141712185");
    noMDEntries_0_1.set(LocationID_2);
    MDFullGrp_NoMDEntries_1.insert(LocationID_2.getString());
    FIX::LotType LotType_12('2');
    noMDEntries_0_1.set(LotType_12);
    MDFullGrp_NoMDEntries_1.insert(LotType_12.getString());
    FIX::LowPx LowPx_2;
    LowPx_2.setString("18373497");
    noMDEntries_0_1.set(LowPx_2);
    MDFullGrp_NoMDEntries_1.insert(LowPx_2.getString());
    FIX::MDEntryBuyer MDEntryBuyer_2("STRING_1865897798");
    noMDEntries_0_1.set(MDEntryBuyer_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryBuyer_2.getString());
    FIX::MDEntryDate MDEntryDate_2(FIX::UTCDATEONLY(22, 8, 2016));
    noMDEntries_0_1.set(MDEntryDate_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryDate_2.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_2;
    MDEntryForwardPoints_2.setString("20896270");
    noMDEntries_0_1.set(MDEntryForwardPoints_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryForwardPoints_2.getString());
    FIX::MDEntryID MDEntryID_2("STRING_797448116");
    noMDEntries_0_1.set(MDEntryID_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryID_2.getString());
    FIX::MDEntryOriginator MDEntryOriginator_2("STRING_803391212");
    noMDEntries_0_1.set(MDEntryOriginator_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryOriginator_2.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_2(1098387005);
    noMDEntries_0_1.set(MDEntryPositionNo_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPositionNo_2.getString());
    FIX::MDEntryPx MDEntryPx_2;
    MDEntryPx_2.setString("12624703");
    noMDEntries_0_1.set(MDEntryPx_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPx_2.getString());
    FIX::MDEntrySeller MDEntrySeller_2("STRING_1022757497");
    noMDEntries_0_1.set(MDEntrySeller_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySeller_2.getString());
    FIX::MDEntrySize MDEntrySize_4;
    MDEntrySize_4.setString("15687344");
    noMDEntries_0_1.set(MDEntrySize_4);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySize_4.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_2;
    MDEntrySpotRate_2.setString("631701");
    noMDEntries_0_1.set(MDEntrySpotRate_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySpotRate_2.getString());
    FIX::MDEntryTime MDEntryTime_2(FIX::UTCTIMEONLY(22, 3, 47));
    noMDEntries_0_1.set(MDEntryTime_2);
    MDFullGrp_NoMDEntries_1.insert(MDEntryTime_2.getString());
    FIX::MDEntryType MDEntryType_3('7');
    noMDEntries_0_1.set(MDEntryType_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryType_3.getString());
    FIX::MDMkt MDMkt_2("EXCHANGE_2019259168");
    noMDEntries_0_1.set(MDMkt_2);
    MDFullGrp_NoMDEntries_1.insert(MDMkt_2.getString());
    FIX::MDOriginType MDOriginType_2(1);
    noMDEntries_0_1.set(MDOriginType_2);
    MDFullGrp_NoMDEntries_1.insert(MDOriginType_2.getString());
    FIX::MDPriceLevel MDPriceLevel_2(556394871);
    noMDEntries_0_1.set(MDPriceLevel_2);
    MDFullGrp_NoMDEntries_1.insert(MDPriceLevel_2.getString());
    FIX::MDQuoteType MDQuoteType_3(3);
    noMDEntries_0_1.set(MDQuoteType_3);
    MDFullGrp_NoMDEntries_1.insert(MDQuoteType_3.getString());
    FIX::MinQty MinQty_4;
    MinQty_4.setString("41457");
    noMDEntries_0_1.set(MinQty_4);
    MDFullGrp_NoMDEntries_1.insert(MinQty_4.getString());
    FIX::NumberOfOrders NumberOfOrders_2(557878525);
    noMDEntries_0_1.set(NumberOfOrders_2);
    MDFullGrp_NoMDEntries_1.insert(NumberOfOrders_2.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_3("MULTIPLECHARVALUE_0");
    noMDEntries_0_1.set(OpenCloseSettlFlag_3);
    MDFullGrp_NoMDEntries_1.insert(OpenCloseSettlFlag_3.getString());
    FIX::OrdType OrdType_28('D');
    noMDEntries_0_1.set(OrdType_28);
    MDFullGrp_NoMDEntries_1.insert(OrdType_28.getString());
    FIX::OrderCapacity OrderCapacity_9('P');
    noMDEntries_0_1.set(OrderCapacity_9);
    MDFullGrp_NoMDEntries_1.insert(OrderCapacity_9.getString());
    FIX::OrderID OrderID_24("STRING_315658294");
    noMDEntries_0_1.set(OrderID_24);
    MDFullGrp_NoMDEntries_1.insert(OrderID_24.getString());
    FIX::PriceDelta PriceDelta_3;
    PriceDelta_3.setString("364028");
    noMDEntries_0_1.set(PriceDelta_3);
    MDFullGrp_NoMDEntries_1.insert(PriceDelta_3.getString());
    FIX::PriceType PriceType_21(18);
    noMDEntries_0_1.set(PriceType_21);
    MDFullGrp_NoMDEntries_1.insert(PriceType_21.getString());
    FIX::QuoteCondition QuoteCondition_2("MULTIPLESTRINGVALUE_y");
    noMDEntries_0_1.set(QuoteCondition_2);
    MDFullGrp_NoMDEntries_1.insert(QuoteCondition_2.getString());
    FIX::QuoteEntryID QuoteEntryID_2("STRING_1902300627");
    noMDEntries_0_1.set(QuoteEntryID_2);
    MDFullGrp_NoMDEntries_1.insert(QuoteEntryID_2.getString());
    FIX::RptSeq RptSeq_3(1588963016);
    noMDEntries_0_1.set(RptSeq_3);
    MDFullGrp_NoMDEntries_1.insert(RptSeq_3.getString());
    FIX::Scope Scope_3("MULTIPLECHARVALUE_1");
    noMDEntries_0_1.set(Scope_3);
    MDFullGrp_NoMDEntries_1.insert(Scope_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_20("STRING_153307083");
    noMDEntries_0_1.set(SecondaryOrderID_20);
    MDFullGrp_NoMDEntries_1.insert(SecondaryOrderID_20.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_2(4);
    noMDEntries_0_1.set(SecurityTradingStatus_2);
    MDFullGrp_NoMDEntries_1.insert(SecurityTradingStatus_2.getString());
    FIX::SellerDays SellerDays_2(1047466843);
    noMDEntries_0_1.set(SellerDays_2);
    MDFullGrp_NoMDEntries_1.insert(SellerDays_2.getString());
    FIX::SettlCurrency SettlCurrency_12("EUR");
    noMDEntries_0_1.set(SettlCurrency_12);
    MDFullGrp_NoMDEntries_1.insert(SettlCurrency_12.getString());
    FIX::SettlDate SettlDate_19("LOCALMKTDATE_2145853848");
    noMDEntries_0_1.set(SettlDate_19);
    MDFullGrp_NoMDEntries_1.insert(SettlDate_19.getString());
    FIX::SettlType SettlType_13("STRING_3");
    noMDEntries_0_1.set(SettlType_13);
    MDFullGrp_NoMDEntries_1.insert(SettlType_13.getString());
    FIX::Text Text_47("STRING_2056265388");
    noMDEntries_0_1.set(Text_47);
    MDFullGrp_NoMDEntries_1.insert(Text_47.getString());
    FIX::TickDirection TickDirection_2('3');
    noMDEntries_0_1.set(TickDirection_2);
    MDFullGrp_NoMDEntries_1.insert(TickDirection_2.getString());
    FIX::TimeInForce TimeInForce_30('0');
    noMDEntries_0_1.set(TimeInForce_30);
    MDFullGrp_NoMDEntries_1.insert(TimeInForce_30.getString());
    FIX::TradeCondition TradeCondition_2("MULTIPLESTRINGVALUE_z");
    noMDEntries_0_1.set(TradeCondition_2);
    MDFullGrp_NoMDEntries_1.insert(TradeCondition_2.getString());
    FIX::TradeVolume TradeVolume_2;
    TradeVolume_2.setString("752623");
    noMDEntries_0_1.set(TradeVolume_2);
    MDFullGrp_NoMDEntries_1.insert(TradeVolume_2.getString());
    FIX::TradingSessionID TradingSessionID_30("STRING_2");
    noMDEntries_0_1.set(TradingSessionID_30);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionID_30.getString());
    FIX::TradingSessionSubID TradingSessionSubID_30("STRING_4");
    noMDEntries_0_1.set(TradingSessionSubID_30);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionSubID_30.getString());
    FIX::TrdType TrdType_5(33);
    noMDEntries_0_1.set(TrdType_5);
    MDFullGrp_NoMDEntries_1.insert(TrdType_5.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_63;
      FIX::PartyID PartyID_63("STRING_1826510346");
      noPartyIDs_1_1_0.set(PartyID_63);
      Parties_NoPartyIDs_63.insert(PartyID_63.getString());
      FIX::PartyIDSource PartyIDSource_63('4');
      noPartyIDs_1_1_0.set(PartyIDSource_63);
      Parties_NoPartyIDs_63.insert(PartyIDSource_63.getString());
      FIX::PartyRole PartyRole_63(71);
      noPartyIDs_1_1_0.set(PartyRole_63);
      Parties_NoPartyIDs_63.insert(PartyRole_63.getString());
      all_values.push_back(Parties_NoPartyIDs_63);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_128;
        FIX::PartySubID PartySubID_128("STRING_818987829");
        noPartySubIDs_1_0_2_0.set(PartySubID_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubID_128.getString());
        FIX::PartySubIDType PartySubIDType_128(7);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubIDType_128.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_128);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_129;
        FIX::PartySubID PartySubID_129("STRING_1725346749");
        noPartySubIDs_1_0_2_1.set(PartySubID_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubID_129.getString());
        FIX::PartySubIDType PartySubIDType_129(19);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubIDType_129.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_129);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_10;
      FIX::RateSource RateSource_16(2);
      noRateSources_1_1_0.set(RateSource_16);
      RateSource_NoRateSources_10.insert(RateSource_16.getString());
      FIX::RateSourceType RateSourceType_10(1);
      noRateSources_1_1_0.set(RateSourceType_10);
      RateSource_NoRateSources_10.insert(RateSourceType_10.getString());
      FIX::ReferencePage ReferencePage_10("STRING_469000126");
      noRateSources_1_1_0.set(ReferencePage_10);
      RateSource_NoRateSources_10.insert(ReferencePage_10.getString());
      all_values.push_back(RateSource_NoRateSources_10);

      noMDEntries_0_1.addGroup(noRateSources_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_11;
      FIX::RateSource RateSource_17(2);
      noRateSources_1_1_1.set(RateSource_17);
      RateSource_NoRateSources_11.insert(RateSource_17.getString());
      FIX::RateSourceType RateSourceType_11(1);
      noRateSources_1_1_1.set(RateSourceType_11);
      RateSource_NoRateSources_11.insert(RateSourceType_11.getString());
      FIX::ReferencePage ReferencePage_11("STRING_1574323531");
      noRateSources_1_1_1.set(ReferencePage_11);
      RateSource_NoRateSources_11.insert(ReferencePage_11.getString());
      all_values.push_back(RateSource_NoRateSources_11);

      noMDEntries_0_1.addGroup(noRateSources_1_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_5;
      FIX::MDSecSize MDSecSize_5;
      MDSecSize_5.setString("10124803");
      noOfSecSizes_1_1_0.set(MDSecSize_5);
      SecSizesGrp_NoOfSecSizes_5.insert(MDSecSize_5.getString());
      FIX::MDSecSizeType MDSecSizeType_5(1);
      noOfSecSizes_1_1_0.set(MDSecSizeType_5);
      SecSizesGrp_NoOfSecSizes_5.insert(MDSecSizeType_5.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_5);

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_14;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_14("CHF");
    noMDEntries_0_1.set(BenchmarkCurveCurrency_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveCurrency_14.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_14("STRING_Treasury");
    noMDEntries_0_1.set(BenchmarkCurveName_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveName_14.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_14("STRING_538887075");
    noMDEntries_0_1.set(BenchmarkCurvePoint_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurvePoint_14.getString());
    FIX::BenchmarkPrice BenchmarkPrice_14;
    BenchmarkPrice_14.setString("19547699");
    noMDEntries_0_1.set(BenchmarkPrice_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPrice_14.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_14(2039781566);
    noMDEntries_0_1.set(BenchmarkPriceType_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPriceType_14.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_14("STRING_667799096");
    noMDEntries_0_1.set(BenchmarkSecurityID_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityID_14.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_14("STRING_1479556819");
    noMDEntries_0_1.set(BenchmarkSecurityIDSource_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityIDSource_14.getString());
    FIX::Spread Spread_14;
    Spread_14.setString("21150438");
    noMDEntries_0_1.set(Spread_14);
    SpreadOrBenchmarkCurveData_14.insert(Spread_14.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_14);

    // YieldData
    multiset<string> YieldData_9;
    FIX::Yield Yield_9;
    Yield_9.setString("99.190000");
    noMDEntries_0_1.set(Yield_9);
    YieldData_9.insert(Yield_9.getString());
    FIX::YieldCalcDate YieldCalcDate_9("LOCALMKTDATE_311561867");
    noMDEntries_0_1.set(YieldCalcDate_9);
    YieldData_9.insert(YieldCalcDate_9.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_9("LOCALMKTDATE_1819758300");
    noMDEntries_0_1.set(YieldRedemptionDate_9);
    YieldData_9.insert(YieldRedemptionDate_9.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_9;
    YieldRedemptionPrice_9.setString("294326");
    noMDEntries_0_1.set(YieldRedemptionPrice_9);
    YieldData_9.insert(YieldRedemptionPrice_9.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_9(2138072213);
    noMDEntries_0_1.set(YieldRedemptionPriceType_9);
    YieldData_9.insert(YieldRedemptionPriceType_9.getString());
    FIX::YieldType YieldType_9("STRING_INFLATION");
    noMDEntries_0_1.set(YieldType_9);
    YieldData_9.insert(YieldType_9.getString());
    all_values.push_back(YieldData_9);

    msg.addGroup(noMDEntries_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_4;
    FIX::RoutingID RoutingID_4("STRING_1821244670");
    noRoutingIDs_0_0.set(RoutingID_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingID_4.getString());
    FIX::RoutingType RoutingType_4(2);
    noRoutingIDs_0_0.set(RoutingType_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingType_4.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_4);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    FIX::RoutingID RoutingID_5("STRING_297977405");
    noRoutingIDs_0_1.set(RoutingID_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingID_5.getString());
    FIX::RoutingType RoutingType_5(4);
    noRoutingIDs_0_1.set(RoutingType_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingType_5.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_5);

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_6;
    FIX::RoutingID RoutingID_6("STRING_351288350");
    noRoutingIDs_0_2.set(RoutingID_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingID_6.getString());
    FIX::RoutingType RoutingType_6(1);
    noRoutingIDs_0_2.set(RoutingType_6);
    RoutingGrp_NoRoutingIDs_6.insert(RoutingType_6.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_50;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_50("DATA_1692172643");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingIssuer_50.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_50(1230453226);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingIssuerLen_50.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_50("DATA_382456611");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDesc_50.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_50(327052656);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_50);
    UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDescLen_50.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
    UnderlyingAdjustedQuantity_50.setString("6572931");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_50);
    UnderlyingInstrument_50.insert(UnderlyingAdjustedQuantity_50.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
    UnderlyingAllocationPercent_50.setString("2.520000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_50);
    UnderlyingInstrument_50.insert(UnderlyingAllocationPercent_50.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
    UnderlyingAttachmentPoint_50.setString("29.960000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_50);
    UnderlyingInstrument_50.insert(UnderlyingAttachmentPoint_50.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_50("STRING_1131599836");
    noUnderlyings_0_0.set(UnderlyingCFICode_50);
    UnderlyingInstrument_50.insert(UnderlyingCFICode_50.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_50("STRING_377991796");
    noUnderlyings_0_0.set(UnderlyingCPProgram_50);
    UnderlyingInstrument_50.insert(UnderlyingCPProgram_50.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_50("STRING_1238037579");
    noUnderlyings_0_0.set(UnderlyingCPRegType_50);
    UnderlyingInstrument_50.insert(UnderlyingCPRegType_50.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_50;
    UnderlyingCapValue_50.setString("16042767");
    noUnderlyings_0_0.set(UnderlyingCapValue_50);
    UnderlyingInstrument_50.insert(UnderlyingCapValue_50.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
    UnderlyingCashAmount_50.setString("9168788");
    noUnderlyings_0_0.set(UnderlyingCashAmount_50);
    UnderlyingInstrument_50.insert(UnderlyingCashAmount_50.getString());
    FIX::UnderlyingCashType UnderlyingCashType_50("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_50);
    UnderlyingInstrument_50.insert(UnderlyingCashType_50.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
    UnderlyingContractMultiplier_50.setString("14965746");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_50);
    UnderlyingInstrument_50.insert(UnderlyingContractMultiplier_50.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_50(1584677968);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_50);
    UnderlyingInstrument_50.insert(UnderlyingContractMultiplierUnit_50.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_50("COUNTRY_377397074");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingCountryOfIssue_50.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_50("LOCALMKTDATE_1464134900");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_50);
    UnderlyingInstrument_50.insert(UnderlyingCouponPaymentDate_50.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
    UnderlyingCouponRate_50.setString("42.390000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_50);
    UnderlyingInstrument_50.insert(UnderlyingCouponRate_50.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_50("STRING_688958941");
    noUnderlyings_0_0.set(UnderlyingCreditRating_50);
    UnderlyingInstrument_50.insert(UnderlyingCreditRating_50.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_50("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_50);
    UnderlyingInstrument_50.insert(UnderlyingCurrency_50.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
    UnderlyingCurrentValue_50.setString("6795475");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_50);
    UnderlyingInstrument_50.insert(UnderlyingCurrentValue_50.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
    UnderlyingDetachmentPoint_50.setString("35.080000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_50);
    UnderlyingInstrument_50.insert(UnderlyingDetachmentPoint_50.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
    UnderlyingDirtyPrice_50.setString("11032568");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_50);
    UnderlyingInstrument_50.insert(UnderlyingDirtyPrice_50.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
    UnderlyingEndPrice_50.setString("3533085");
    noUnderlyings_0_0.set(UnderlyingEndPrice_50);
    UnderlyingInstrument_50.insert(UnderlyingEndPrice_50.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_50;
    UnderlyingEndValue_50.setString("18221652");
    noUnderlyings_0_0.set(UnderlyingEndValue_50);
    UnderlyingInstrument_50.insert(UnderlyingEndValue_50.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_50(1401234263);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_50);
    UnderlyingInstrument_50.insert(UnderlyingExerciseStyle_50.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_50;
    UnderlyingFXRate_50.setString("17524162");
    noUnderlyings_0_0.set(UnderlyingFXRate_50);
    UnderlyingInstrument_50.insert(UnderlyingFXRate_50.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_50('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_50);
    UnderlyingInstrument_50.insert(UnderlyingFXRateCalc_50.getString());
    FIX::UnderlyingFactor UnderlyingFactor_50;
    UnderlyingFactor_50.setString("152037");
    noUnderlyings_0_0.set(UnderlyingFactor_50);
    UnderlyingInstrument_50.insert(UnderlyingFactor_50.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_50(618306353);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_50);
    UnderlyingInstrument_50.insert(UnderlyingFlowScheduleType_50.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_50("STRING_1718142639");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_50);
    UnderlyingInstrument_50.insert(UnderlyingInstrRegistry_50.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_50("LOCALMKTDATE_1245656942");
    noUnderlyings_0_0.set(UnderlyingIssueDate_50);
    UnderlyingInstrument_50.insert(UnderlyingIssueDate_50.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_50("STRING_1000762964");
    noUnderlyings_0_0.set(UnderlyingIssuer_50);
    UnderlyingInstrument_50.insert(UnderlyingIssuer_50.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_50("STRING_2045195295");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingLocaleOfIssue_50.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_50("LOCALMKTDATE_1902950052");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityDate_50.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_50("MONTHYEAR_905609569");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityMonthYear_50.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_50("TZTIMEONLY_1237244644");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_50);
    UnderlyingInstrument_50.insert(UnderlyingMaturityTime_50.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
    UnderlyingNotionalPercentageOutstanding_50.setString("62.400000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_50);
    UnderlyingInstrument_50.insert(UnderlyingNotionalPercentageOutstanding_50.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_50('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_50);
    UnderlyingInstrument_50.insert(UnderlyingOptAttribute_50.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
    UnderlyingOriginalNotionalPercentageOutstanding_50.setString("85.750000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_50);
    UnderlyingInstrument_50.insert(UnderlyingOriginalNotionalPercentageOutstanding_50.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_50("STRING_343859355");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_50);
    UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasure_50.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
    UnderlyingPriceUnitOfMeasureQty_50.setString("529965");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_50);
    UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasureQty_50.getString());
    FIX::UnderlyingProduct UnderlyingProduct_50(1373122478);
    noUnderlyings_0_0.set(UnderlyingProduct_50);
    UnderlyingInstrument_50.insert(UnderlyingProduct_50.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_50(1840434036);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_50);
    UnderlyingInstrument_50.insert(UnderlyingPutOrCall_50.getString());
    FIX::UnderlyingPx UnderlyingPx_50;
    UnderlyingPx_50.setString("16376745");
    noUnderlyings_0_0.set(UnderlyingPx_50);
    UnderlyingInstrument_50.insert(UnderlyingPx_50.getString());
    FIX::UnderlyingQty UnderlyingQty_50;
    UnderlyingQty_50.setString("17505195");
    noUnderlyings_0_0.set(UnderlyingQty_50);
    UnderlyingInstrument_50.insert(UnderlyingQty_50.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_50("LOCALMKTDATE_1157085288");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_50);
    UnderlyingInstrument_50.insert(UnderlyingRedemptionDate_50.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_50("STRING_413855149");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_50);
    UnderlyingInstrument_50.insert(UnderlyingRepoCollateralSecurityType_50.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
    UnderlyingRepurchaseRate_50.setString("48.450000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_50);
    UnderlyingInstrument_50.insert(UnderlyingRepurchaseRate_50.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_50(146011193);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_50);
    UnderlyingInstrument_50.insert(UnderlyingRepurchaseTerm_50.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_50("STRING_1366952003");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_50);
    UnderlyingInstrument_50.insert(UnderlyingRestructuringType_50.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_50("STRING_971542351");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityDesc_50.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_50("EXCHANGE_1215804701");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityExchange_50.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_50("STRING_322725214");
    noUnderlyings_0_0.set(UnderlyingSecurityID_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityID_50.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_50("STRING_1324850880");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityIDSource_50.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_50("STRING_890486347");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_50);
    UnderlyingInstrument_50.insert(UnderlyingSecuritySubType_50.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_50("STRING_1723959477");
    noUnderlyings_0_0.set(UnderlyingSecurityType_50);
    UnderlyingInstrument_50.insert(UnderlyingSecurityType_50.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_50("STRING_929783531");
    noUnderlyings_0_0.set(UnderlyingSeniority_50);
    UnderlyingInstrument_50.insert(UnderlyingSeniority_50.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_50("STRING_916456343");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_50);
    UnderlyingInstrument_50.insert(UnderlyingSettlMethod_50.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_50(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_50);
    UnderlyingInstrument_50.insert(UnderlyingSettlementType_50.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_50;
    UnderlyingStartValue_50.setString("15480898");
    noUnderlyings_0_0.set(UnderlyingStartValue_50);
    UnderlyingInstrument_50.insert(UnderlyingStartValue_50.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_50("STRING_487115334");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_50);
    UnderlyingInstrument_50.insert(UnderlyingStateOrProvinceOfIssue_50.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_50("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_50);
    UnderlyingInstrument_50.insert(UnderlyingStrikeCurrency_50.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
    UnderlyingStrikePrice_50.setString("3848269");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_50);
    UnderlyingInstrument_50.insert(UnderlyingStrikePrice_50.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_50("STRING_592802892");
    noUnderlyings_0_0.set(UnderlyingSymbol_50);
    UnderlyingInstrument_50.insert(UnderlyingSymbol_50.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_50("STRING_1306978770");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_50);
    UnderlyingInstrument_50.insert(UnderlyingSymbolSfx_50.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_50("STRING_1622071626");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_50);
    UnderlyingInstrument_50.insert(UnderlyingTimeUnit_50.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_50("STRING_1479869132");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_50);
    UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasure_50.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
    UnderlyingUnitOfMeasureQty_50.setString("4430964");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_50);
    UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasureQty_50.getString());
    all_values.push_back(UnderlyingInstrument_50);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_98;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_98("STRING_1823728487");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_98);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltID_98.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_98("STRING_496093077");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_98);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltIDSource_98.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_99;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_99("STRING_1175509031");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_99);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltID_99.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_99("STRING_1516678875");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_99);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltIDSource_99.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_100;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_100("STRING_2133767634");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_100);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltID_100.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_100("STRING_778544935");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_100);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltIDSource_100.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
      FIX::UnderlyingStipType UnderlyingStipType_101("STRING_400139135");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipType_101.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_101("STRING_1070539780");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipValue_101.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
      FIX::UnderlyingStipType UnderlyingStipType_102("STRING_672291708");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipType_102.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_102("STRING_1767091139");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipValue_102.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_100;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_100("STRING_1888096410");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyID_100.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_100('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyIDSource_100.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_100(1219449364);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_100);
      UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyRole_100.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_100);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_193("STRING_1666292182");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_193);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubID_193.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_193(1749247);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_193);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubIDType_193.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_194("STRING_1547555453");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_194);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubID_194.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_194(1257971728);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_194);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubIDType_194.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_195("STRING_1549839132");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_195);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubID_195.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_195(2034670787);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_195);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubIDType_195.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_51;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_51("DATA_2095308216");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingIssuer_51.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_51(1951208333);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingIssuerLen_51.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_51("DATA_272014121");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDesc_51.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_51(540627460);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDescLen_51.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
    UnderlyingAdjustedQuantity_51.setString("11107034");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_51);
    UnderlyingInstrument_51.insert(UnderlyingAdjustedQuantity_51.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
    UnderlyingAllocationPercent_51.setString("57.470000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_51);
    UnderlyingInstrument_51.insert(UnderlyingAllocationPercent_51.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
    UnderlyingAttachmentPoint_51.setString("65.920000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_51);
    UnderlyingInstrument_51.insert(UnderlyingAttachmentPoint_51.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_51("STRING_1553799942");
    noUnderlyings_0_1.set(UnderlyingCFICode_51);
    UnderlyingInstrument_51.insert(UnderlyingCFICode_51.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_51("STRING_1696472301");
    noUnderlyings_0_1.set(UnderlyingCPProgram_51);
    UnderlyingInstrument_51.insert(UnderlyingCPProgram_51.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_51("STRING_1696741431");
    noUnderlyings_0_1.set(UnderlyingCPRegType_51);
    UnderlyingInstrument_51.insert(UnderlyingCPRegType_51.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_51;
    UnderlyingCapValue_51.setString("20498930");
    noUnderlyings_0_1.set(UnderlyingCapValue_51);
    UnderlyingInstrument_51.insert(UnderlyingCapValue_51.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
    UnderlyingCashAmount_51.setString("7244976");
    noUnderlyings_0_1.set(UnderlyingCashAmount_51);
    UnderlyingInstrument_51.insert(UnderlyingCashAmount_51.getString());
    FIX::UnderlyingCashType UnderlyingCashType_51("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_51);
    UnderlyingInstrument_51.insert(UnderlyingCashType_51.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
    UnderlyingContractMultiplier_51.setString("20361770");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_51);
    UnderlyingInstrument_51.insert(UnderlyingContractMultiplier_51.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_51(1503042620);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_51);
    UnderlyingInstrument_51.insert(UnderlyingContractMultiplierUnit_51.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_51("COUNTRY_1592217173");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingCountryOfIssue_51.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_51("LOCALMKTDATE_288832493");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_51);
    UnderlyingInstrument_51.insert(UnderlyingCouponPaymentDate_51.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
    UnderlyingCouponRate_51.setString("87.520000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_51);
    UnderlyingInstrument_51.insert(UnderlyingCouponRate_51.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_51("STRING_117025234");
    noUnderlyings_0_1.set(UnderlyingCreditRating_51);
    UnderlyingInstrument_51.insert(UnderlyingCreditRating_51.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_51("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_51);
    UnderlyingInstrument_51.insert(UnderlyingCurrency_51.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
    UnderlyingCurrentValue_51.setString("20051216");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_51);
    UnderlyingInstrument_51.insert(UnderlyingCurrentValue_51.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
    UnderlyingDetachmentPoint_51.setString("63.370000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_51);
    UnderlyingInstrument_51.insert(UnderlyingDetachmentPoint_51.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
    UnderlyingDirtyPrice_51.setString("15401466");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_51);
    UnderlyingInstrument_51.insert(UnderlyingDirtyPrice_51.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
    UnderlyingEndPrice_51.setString("4887371");
    noUnderlyings_0_1.set(UnderlyingEndPrice_51);
    UnderlyingInstrument_51.insert(UnderlyingEndPrice_51.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_51;
    UnderlyingEndValue_51.setString("15170648");
    noUnderlyings_0_1.set(UnderlyingEndValue_51);
    UnderlyingInstrument_51.insert(UnderlyingEndValue_51.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_51(1541895848);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_51);
    UnderlyingInstrument_51.insert(UnderlyingExerciseStyle_51.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_51;
    UnderlyingFXRate_51.setString("20362925");
    noUnderlyings_0_1.set(UnderlyingFXRate_51);
    UnderlyingInstrument_51.insert(UnderlyingFXRate_51.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_51('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_51);
    UnderlyingInstrument_51.insert(UnderlyingFXRateCalc_51.getString());
    FIX::UnderlyingFactor UnderlyingFactor_51;
    UnderlyingFactor_51.setString("9442513");
    noUnderlyings_0_1.set(UnderlyingFactor_51);
    UnderlyingInstrument_51.insert(UnderlyingFactor_51.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_51(1923479698);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_51);
    UnderlyingInstrument_51.insert(UnderlyingFlowScheduleType_51.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_51("STRING_575377520");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_51);
    UnderlyingInstrument_51.insert(UnderlyingInstrRegistry_51.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_51("LOCALMKTDATE_747976017");
    noUnderlyings_0_1.set(UnderlyingIssueDate_51);
    UnderlyingInstrument_51.insert(UnderlyingIssueDate_51.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_51("STRING_48010171");
    noUnderlyings_0_1.set(UnderlyingIssuer_51);
    UnderlyingInstrument_51.insert(UnderlyingIssuer_51.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_51("STRING_1116004980");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingLocaleOfIssue_51.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_51("LOCALMKTDATE_1858679472");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityDate_51.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_51("MONTHYEAR_1942095919");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityMonthYear_51.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_51("TZTIMEONLY_989017924");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityTime_51.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
    UnderlyingNotionalPercentageOutstanding_51.setString("57.660000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_51);
    UnderlyingInstrument_51.insert(UnderlyingNotionalPercentageOutstanding_51.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_51('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_51);
    UnderlyingInstrument_51.insert(UnderlyingOptAttribute_51.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
    UnderlyingOriginalNotionalPercentageOutstanding_51.setString("57.070000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_51);
    UnderlyingInstrument_51.insert(UnderlyingOriginalNotionalPercentageOutstanding_51.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_51("STRING_1167405138");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_51);
    UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasure_51.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
    UnderlyingPriceUnitOfMeasureQty_51.setString("680986");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_51);
    UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasureQty_51.getString());
    FIX::UnderlyingProduct UnderlyingProduct_51(1604212365);
    noUnderlyings_0_1.set(UnderlyingProduct_51);
    UnderlyingInstrument_51.insert(UnderlyingProduct_51.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_51(1056098496);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_51);
    UnderlyingInstrument_51.insert(UnderlyingPutOrCall_51.getString());
    FIX::UnderlyingPx UnderlyingPx_51;
    UnderlyingPx_51.setString("15711412");
    noUnderlyings_0_1.set(UnderlyingPx_51);
    UnderlyingInstrument_51.insert(UnderlyingPx_51.getString());
    FIX::UnderlyingQty UnderlyingQty_51;
    UnderlyingQty_51.setString("10489458");
    noUnderlyings_0_1.set(UnderlyingQty_51);
    UnderlyingInstrument_51.insert(UnderlyingQty_51.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_51("LOCALMKTDATE_1344930989");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_51);
    UnderlyingInstrument_51.insert(UnderlyingRedemptionDate_51.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_51("STRING_1997239981");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_51);
    UnderlyingInstrument_51.insert(UnderlyingRepoCollateralSecurityType_51.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
    UnderlyingRepurchaseRate_51.setString("11.240000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_51);
    UnderlyingInstrument_51.insert(UnderlyingRepurchaseRate_51.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_51(1253370974);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_51);
    UnderlyingInstrument_51.insert(UnderlyingRepurchaseTerm_51.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_51("STRING_170453569");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_51);
    UnderlyingInstrument_51.insert(UnderlyingRestructuringType_51.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_51("STRING_1023609120");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityDesc_51.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_51("EXCHANGE_1104143663");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityExchange_51.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_51("STRING_1710600170");
    noUnderlyings_0_1.set(UnderlyingSecurityID_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityID_51.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_51("STRING_1512346226");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityIDSource_51.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_51("STRING_473724887");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_51);
    UnderlyingInstrument_51.insert(UnderlyingSecuritySubType_51.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_51("STRING_1105012370");
    noUnderlyings_0_1.set(UnderlyingSecurityType_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityType_51.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_51("STRING_1401155136");
    noUnderlyings_0_1.set(UnderlyingSeniority_51);
    UnderlyingInstrument_51.insert(UnderlyingSeniority_51.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_51("STRING_1101277839");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_51);
    UnderlyingInstrument_51.insert(UnderlyingSettlMethod_51.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_51(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_51);
    UnderlyingInstrument_51.insert(UnderlyingSettlementType_51.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_51;
    UnderlyingStartValue_51.setString("11771511");
    noUnderlyings_0_1.set(UnderlyingStartValue_51);
    UnderlyingInstrument_51.insert(UnderlyingStartValue_51.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_51("STRING_1676655359");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingStateOrProvinceOfIssue_51.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_51("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_51);
    UnderlyingInstrument_51.insert(UnderlyingStrikeCurrency_51.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
    UnderlyingStrikePrice_51.setString("6451766");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_51);
    UnderlyingInstrument_51.insert(UnderlyingStrikePrice_51.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_51("STRING_360951895");
    noUnderlyings_0_1.set(UnderlyingSymbol_51);
    UnderlyingInstrument_51.insert(UnderlyingSymbol_51.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_51("STRING_1019773629");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_51);
    UnderlyingInstrument_51.insert(UnderlyingSymbolSfx_51.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_51("STRING_1634194615");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_51);
    UnderlyingInstrument_51.insert(UnderlyingTimeUnit_51.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_51("STRING_1625947661");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_51);
    UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasure_51.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
    UnderlyingUnitOfMeasureQty_51.setString("3633745");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_51);
    UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasureQty_51.getString());
    all_values.push_back(UnderlyingInstrument_51);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_101;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_101("STRING_645869151");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_101);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltID_101.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_101("STRING_431473161");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_101);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltIDSource_101.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_102("STRING_1629199039");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_102);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltID_102.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_102("STRING_1701967647");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_102);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltIDSource_102.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
      FIX::UnderlyingStipType UnderlyingStipType_103("STRING_530661282");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipType_103.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_103("STRING_899414989");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipValue_103.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_101;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_101("STRING_1696632406");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyID_101.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_101('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyIDSource_101.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_101(2022824292);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyRole_101.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_101);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_196("STRING_1109445978");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_196);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubID_196.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_196(1585940814);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_196);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubIDType_196.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_102;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_102("STRING_2085104105");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyID_102.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_102('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyIDSource_102.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_102(543469536);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyRole_102.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_102);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_197("STRING_536965057");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_197);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubID_197.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_197(445249590);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_197);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubIDType_197.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_103;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_103("STRING_368443132");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyID_103.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_103('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyIDSource_103.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_103(1095005661);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyRole_103.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_103);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_198("STRING_711313460");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_198);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubID_198.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_198(1455957556);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_198);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubIDType_198.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_199("STRING_465894471");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_199);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubID_199.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_199(198024428);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_199);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubIDType_199.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_200("STRING_934421570");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_200);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubID_200.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_200(829269024);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_200);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubIDType_200.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_52;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_52("DATA_223011102");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuer_52.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_52(1580290721);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuerLen_52.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_52("DATA_1260742185");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDesc_52.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_52(1852210142);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDescLen_52.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
    UnderlyingAdjustedQuantity_52.setString("11347747");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_52);
    UnderlyingInstrument_52.insert(UnderlyingAdjustedQuantity_52.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
    UnderlyingAllocationPercent_52.setString("29.270000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_52);
    UnderlyingInstrument_52.insert(UnderlyingAllocationPercent_52.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
    UnderlyingAttachmentPoint_52.setString("77.760000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingAttachmentPoint_52.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_52("STRING_2034189710");
    noUnderlyings_0_2.set(UnderlyingCFICode_52);
    UnderlyingInstrument_52.insert(UnderlyingCFICode_52.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_52("STRING_820760002");
    noUnderlyings_0_2.set(UnderlyingCPProgram_52);
    UnderlyingInstrument_52.insert(UnderlyingCPProgram_52.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_52("STRING_1932020182");
    noUnderlyings_0_2.set(UnderlyingCPRegType_52);
    UnderlyingInstrument_52.insert(UnderlyingCPRegType_52.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_52;
    UnderlyingCapValue_52.setString("20394920");
    noUnderlyings_0_2.set(UnderlyingCapValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCapValue_52.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
    UnderlyingCashAmount_52.setString("6961006");
    noUnderlyings_0_2.set(UnderlyingCashAmount_52);
    UnderlyingInstrument_52.insert(UnderlyingCashAmount_52.getString());
    FIX::UnderlyingCashType UnderlyingCashType_52("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_52);
    UnderlyingInstrument_52.insert(UnderlyingCashType_52.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
    UnderlyingContractMultiplier_52.setString("10014543");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplier_52.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_52(134557813);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplierUnit_52.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_52("COUNTRY_294914870");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingCountryOfIssue_52.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_52("LOCALMKTDATE_437141573");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponPaymentDate_52.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
    UnderlyingCouponRate_52.setString("73.500000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponRate_52.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_52("STRING_1633690464");
    noUnderlyings_0_2.set(UnderlyingCreditRating_52);
    UnderlyingInstrument_52.insert(UnderlyingCreditRating_52.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_52("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrency_52.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
    UnderlyingCurrentValue_52.setString("20021335");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrentValue_52.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
    UnderlyingDetachmentPoint_52.setString("34.000000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingDetachmentPoint_52.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
    UnderlyingDirtyPrice_52.setString("707989");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingDirtyPrice_52.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
    UnderlyingEndPrice_52.setString("14482544");
    noUnderlyings_0_2.set(UnderlyingEndPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingEndPrice_52.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_52;
    UnderlyingEndValue_52.setString("17515568");
    noUnderlyings_0_2.set(UnderlyingEndValue_52);
    UnderlyingInstrument_52.insert(UnderlyingEndValue_52.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_52(1526756510);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_52);
    UnderlyingInstrument_52.insert(UnderlyingExerciseStyle_52.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_52;
    UnderlyingFXRate_52.setString("19141489");
    noUnderlyings_0_2.set(UnderlyingFXRate_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRate_52.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_52('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRateCalc_52.getString());
    FIX::UnderlyingFactor UnderlyingFactor_52;
    UnderlyingFactor_52.setString("3136944");
    noUnderlyings_0_2.set(UnderlyingFactor_52);
    UnderlyingInstrument_52.insert(UnderlyingFactor_52.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_52(595934285);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_52);
    UnderlyingInstrument_52.insert(UnderlyingFlowScheduleType_52.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_52("STRING_25108743");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_52);
    UnderlyingInstrument_52.insert(UnderlyingInstrRegistry_52.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_52("LOCALMKTDATE_1893985154");
    noUnderlyings_0_2.set(UnderlyingIssueDate_52);
    UnderlyingInstrument_52.insert(UnderlyingIssueDate_52.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_52("STRING_1856676470");
    noUnderlyings_0_2.set(UnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(UnderlyingIssuer_52.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_52("STRING_1877318885");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingLocaleOfIssue_52.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_52("LOCALMKTDATE_881276227");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityDate_52.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_52("MONTHYEAR_825065750");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityMonthYear_52.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_52("TZTIMEONLY_2112706661");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityTime_52.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
    UnderlyingNotionalPercentageOutstanding_52.setString("22.890000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_52('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_52);
    UnderlyingInstrument_52.insert(UnderlyingOptAttribute_52.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
    UnderlyingOriginalNotionalPercentageOutstanding_52.setString("31.950000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingOriginalNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_52("STRING_659990666");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasure_52.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
    UnderlyingPriceUnitOfMeasureQty_52.setString("1944427");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasureQty_52.getString());
    FIX::UnderlyingProduct UnderlyingProduct_52(107053961);
    noUnderlyings_0_2.set(UnderlyingProduct_52);
    UnderlyingInstrument_52.insert(UnderlyingProduct_52.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_52(1661445021);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_52);
    UnderlyingInstrument_52.insert(UnderlyingPutOrCall_52.getString());
    FIX::UnderlyingPx UnderlyingPx_52;
    UnderlyingPx_52.setString("3290005");
    noUnderlyings_0_2.set(UnderlyingPx_52);
    UnderlyingInstrument_52.insert(UnderlyingPx_52.getString());
    FIX::UnderlyingQty UnderlyingQty_52;
    UnderlyingQty_52.setString("4019688");
    noUnderlyings_0_2.set(UnderlyingQty_52);
    UnderlyingInstrument_52.insert(UnderlyingQty_52.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_52("LOCALMKTDATE_2098586595");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_52);
    UnderlyingInstrument_52.insert(UnderlyingRedemptionDate_52.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_52("STRING_1007027915");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingRepoCollateralSecurityType_52.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
    UnderlyingRepurchaseRate_52.setString("92.950000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseRate_52.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_52(925209578);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseTerm_52.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_52("STRING_2130304855");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_52);
    UnderlyingInstrument_52.insert(UnderlyingRestructuringType_52.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_52("STRING_1890309243");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityDesc_52.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_52("EXCHANGE_1965452978");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityExchange_52.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_52("STRING_53620161");
    noUnderlyings_0_2.set(UnderlyingSecurityID_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityID_52.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_52("STRING_1191080033");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityIDSource_52.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_52("STRING_1569526190");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecuritySubType_52.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_52("STRING_1580376672");
    noUnderlyings_0_2.set(UnderlyingSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityType_52.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_52("STRING_957745294");
    noUnderlyings_0_2.set(UnderlyingSeniority_52);
    UnderlyingInstrument_52.insert(UnderlyingSeniority_52.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_52("STRING_1371623831");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlMethod_52.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_52(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlementType_52.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_52;
    UnderlyingStartValue_52.setString("15536795");
    noUnderlyings_0_2.set(UnderlyingStartValue_52);
    UnderlyingInstrument_52.insert(UnderlyingStartValue_52.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_52("STRING_1396732574");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingStateOrProvinceOfIssue_52.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_52("JPY");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikeCurrency_52.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
    UnderlyingStrikePrice_52.setString("11265678");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikePrice_52.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_52("STRING_374365189");
    noUnderlyings_0_2.set(UnderlyingSymbol_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbol_52.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_52("STRING_2087938152");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbolSfx_52.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_52("STRING_1091790824");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingTimeUnit_52.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_52("STRING_1142347478");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasure_52.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
    UnderlyingUnitOfMeasureQty_52.setString("15862802");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasureQty_52.getString());
    all_values.push_back(UnderlyingInstrument_52);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_103("STRING_1802338144");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_103);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltID_103.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_103("STRING_1780723008");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_103);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltIDSource_103.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_104("STRING_948604332");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_104);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltID_104.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_104("STRING_1316299518");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_104);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltIDSource_104.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
      FIX::UnderlyingStipType UnderlyingStipType_104("STRING_1350573164");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipType_104.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_104("STRING_1267402465");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipValue_104.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_104;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_104("STRING_1238748811");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyID_104.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_104('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyIDSource_104.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_104(952089047);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyRole_104.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_104);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_201("STRING_2010581373");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_201);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubID_201.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_201(1005709209);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_201);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubIDType_201.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
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
