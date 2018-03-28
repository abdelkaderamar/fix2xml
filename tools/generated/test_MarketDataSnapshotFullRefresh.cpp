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
  FIX::ApplQueueDepth ApplQueueDepth_1(846356630);
  msg.set(ApplQueueDepth_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueDepth_1.getString());
  FIX::ApplQueueResolution ApplQueueResolution_1(2);
  msg.set(ApplQueueResolution_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueResolution_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_14("LOCALMKTDATE_477880543");
  msg.set(ClearingBusinessDate_14);
  MarketDataSnapshotFullRefresh_0.insert(ClearingBusinessDate_14.getString());
  FIX::CorporateAction CorporateAction_7("MULTIPLECHARVALUE_E");
  msg.set(CorporateAction_7);
  MarketDataSnapshotFullRefresh_0.insert(CorporateAction_7.getString());
  FIX::FinancialStatus FinancialStatus_4("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_4);
  MarketDataSnapshotFullRefresh_0.insert(FinancialStatus_4.getString());
  FIX::MDBookType MDBookType_20(2);
  msg.set(MDBookType_20);
  MarketDataSnapshotFullRefresh_0.insert(MDBookType_20.getString());
  FIX::MDFeedType MDFeedType_20("STRING_170378340");
  msg.set(MDFeedType_20);
  MarketDataSnapshotFullRefresh_0.insert(MDFeedType_20.getString());
  FIX::MDReportID MDReportID_0(941173097);
  msg.set(MDReportID_0);
  MarketDataSnapshotFullRefresh_0.insert(MDReportID_0.getString());
  FIX::MDReqID MDReqID_3("STRING_1951064252");
  msg.set(MDReqID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDReqID_3.getString());
  FIX::MDStreamID MDStreamID_4("STRING_1083006255");
  msg.set(MDStreamID_4);
  MarketDataSnapshotFullRefresh_0.insert(MDStreamID_4.getString());
  FIX::MDSubBookType MDSubBookType_2(1860990890);
  msg.set(MDSubBookType_2);
  MarketDataSnapshotFullRefresh_0.insert(MDSubBookType_2.getString());
  FIX::MarketDepth MarketDepth_22(325753580);
  msg.set(MarketDepth_22);
  MarketDataSnapshotFullRefresh_0.insert(MarketDepth_22.getString());
  FIX::NetChgPrevDay NetChgPrevDay_2;
  NetChgPrevDay_2.setString("155968");
  msg.set(NetChgPrevDay_2);
  MarketDataSnapshotFullRefresh_0.insert(NetChgPrevDay_2.getString());
  FIX::RefreshIndicator RefreshIndicator_0(false);
  msg.set(RefreshIndicator_0);
  MarketDataSnapshotFullRefresh_0.insert(RefreshIndicator_0.getString());
  FIX::TotNumReports TotNumReports_3(49334776);
  msg.set(TotNumReports_3);
  MarketDataSnapshotFullRefresh_0.insert(TotNumReports_3.getString());
  FIX::TradeDate TradeDate_17("LOCALMKTDATE_615580641");
  msg.set(TradeDate_17);
  MarketDataSnapshotFullRefresh_0.insert(TradeDate_17.getString());
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  FIX::ApplID ApplID_7("STRING_1584226013");
  msg.set(ApplID_7);
  ApplicationSequenceControl_7.insert(ApplID_7.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_7(597394142);
  msg.set(ApplLastSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplLastSeqNum_7.getString());
  FIX::ApplResendFlag ApplResendFlag_7(true);
  msg.set(ApplResendFlag_7);
  ApplicationSequenceControl_7.insert(ApplResendFlag_7.getString());
  FIX::ApplSeqNum ApplSeqNum_7(669672109);
  msg.set(ApplSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplSeqNum_7.getString());
  all_values.push_back(ApplicationSequenceControl_7);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_55;
    FIX::EncodedLegIssuer EncodedLegIssuer_55("DATA_1867621788");
    noLegs_0_0.set(EncodedLegIssuer_55);
    InstrumentLeg_55.insert(EncodedLegIssuer_55.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_55(1458684001);
    noLegs_0_0.set(EncodedLegIssuerLen_55);
    InstrumentLeg_55.insert(EncodedLegIssuerLen_55.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_55("DATA_2084055859");
    noLegs_0_0.set(EncodedLegSecurityDesc_55);
    InstrumentLeg_55.insert(EncodedLegSecurityDesc_55.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_55(544318207);
    noLegs_0_0.set(EncodedLegSecurityDescLen_55);
    InstrumentLeg_55.insert(EncodedLegSecurityDescLen_55.getString());
    FIX::LegCFICode LegCFICode_55("STRING_427287188");
    noLegs_0_0.set(LegCFICode_55);
    InstrumentLeg_55.insert(LegCFICode_55.getString());
    FIX::LegContractMultiplier LegContractMultiplier_55;
    LegContractMultiplier_55.setString("15360094");
    noLegs_0_0.set(LegContractMultiplier_55);
    InstrumentLeg_55.insert(LegContractMultiplier_55.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_55(1478255236);
    noLegs_0_0.set(LegContractMultiplierUnit_55);
    InstrumentLeg_55.insert(LegContractMultiplierUnit_55.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_55("MONTHYEAR_1430825721");
    noLegs_0_0.set(LegContractSettlMonth_55);
    InstrumentLeg_55.insert(LegContractSettlMonth_55.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_55("COUNTRY_990633121");
    noLegs_0_0.set(LegCountryOfIssue_55);
    InstrumentLeg_55.insert(LegCountryOfIssue_55.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_55("LOCALMKTDATE_2038378044");
    noLegs_0_0.set(LegCouponPaymentDate_55);
    InstrumentLeg_55.insert(LegCouponPaymentDate_55.getString());
    FIX::LegCouponRate LegCouponRate_55;
    LegCouponRate_55.setString("87.030000");
    noLegs_0_0.set(LegCouponRate_55);
    InstrumentLeg_55.insert(LegCouponRate_55.getString());
    FIX::LegCreditRating LegCreditRating_55("STRING_464380259");
    noLegs_0_0.set(LegCreditRating_55);
    InstrumentLeg_55.insert(LegCreditRating_55.getString());
    FIX::LegCurrency LegCurrency_55("EUR");
    noLegs_0_0.set(LegCurrency_55);
    InstrumentLeg_55.insert(LegCurrency_55.getString());
    FIX::LegDatedDate LegDatedDate_55("LOCALMKTDATE_1268229291");
    noLegs_0_0.set(LegDatedDate_55);
    InstrumentLeg_55.insert(LegDatedDate_55.getString());
    FIX::LegExerciseStyle LegExerciseStyle_55(1162194969);
    noLegs_0_0.set(LegExerciseStyle_55);
    InstrumentLeg_55.insert(LegExerciseStyle_55.getString());
    FIX::LegFactor LegFactor_55;
    LegFactor_55.setString("12920061");
    noLegs_0_0.set(LegFactor_55);
    InstrumentLeg_55.insert(LegFactor_55.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_55(61918741);
    noLegs_0_0.set(LegFlowScheduleType_55);
    InstrumentLeg_55.insert(LegFlowScheduleType_55.getString());
    FIX::LegInstrRegistry LegInstrRegistry_55("STRING_965775574");
    noLegs_0_0.set(LegInstrRegistry_55);
    InstrumentLeg_55.insert(LegInstrRegistry_55.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_55("LOCALMKTDATE_227528751");
    noLegs_0_0.set(LegInterestAccrualDate_55);
    InstrumentLeg_55.insert(LegInterestAccrualDate_55.getString());
    FIX::LegIssueDate LegIssueDate_55("LOCALMKTDATE_1922909631");
    noLegs_0_0.set(LegIssueDate_55);
    InstrumentLeg_55.insert(LegIssueDate_55.getString());
    FIX::LegIssuer LegIssuer_55("STRING_1291529154");
    noLegs_0_0.set(LegIssuer_55);
    InstrumentLeg_55.insert(LegIssuer_55.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_55("STRING_243125558");
    noLegs_0_0.set(LegLocaleOfIssue_55);
    InstrumentLeg_55.insert(LegLocaleOfIssue_55.getString());
    FIX::LegMaturityDate LegMaturityDate_55("LOCALMKTDATE_916943764");
    noLegs_0_0.set(LegMaturityDate_55);
    InstrumentLeg_55.insert(LegMaturityDate_55.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_55("MONTHYEAR_1340863930");
    noLegs_0_0.set(LegMaturityMonthYear_55);
    InstrumentLeg_55.insert(LegMaturityMonthYear_55.getString());
    FIX::LegMaturityTime LegMaturityTime_55("TZTIMEONLY_858706199");
    noLegs_0_0.set(LegMaturityTime_55);
    InstrumentLeg_55.insert(LegMaturityTime_55.getString());
    FIX::LegOptAttribute LegOptAttribute_55('3');
    noLegs_0_0.set(LegOptAttribute_55);
    InstrumentLeg_55.insert(LegOptAttribute_55.getString());
    FIX::LegOptionRatio LegOptionRatio_55;
    LegOptionRatio_55.setString("19382580");
    noLegs_0_0.set(LegOptionRatio_55);
    InstrumentLeg_55.insert(LegOptionRatio_55.getString());
    FIX::LegPool LegPool_55("STRING_1965257692");
    noLegs_0_0.set(LegPool_55);
    InstrumentLeg_55.insert(LegPool_55.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_55("STRING_1023358239");
    noLegs_0_0.set(LegPriceUnitOfMeasure_55);
    InstrumentLeg_55.insert(LegPriceUnitOfMeasure_55.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
    LegPriceUnitOfMeasureQty_55.setString("20267290");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_55);
    InstrumentLeg_55.insert(LegPriceUnitOfMeasureQty_55.getString());
    FIX::LegProduct LegProduct_55(1685395832);
    noLegs_0_0.set(LegProduct_55);
    InstrumentLeg_55.insert(LegProduct_55.getString());
    FIX::LegPutOrCall LegPutOrCall_55(334558592);
    noLegs_0_0.set(LegPutOrCall_55);
    InstrumentLeg_55.insert(LegPutOrCall_55.getString());
    FIX::LegRatioQty LegRatioQty_55;
    LegRatioQty_55.setString("19633012");
    noLegs_0_0.set(LegRatioQty_55);
    InstrumentLeg_55.insert(LegRatioQty_55.getString());
    FIX::LegRedemptionDate LegRedemptionDate_55("LOCALMKTDATE_82230391");
    noLegs_0_0.set(LegRedemptionDate_55);
    InstrumentLeg_55.insert(LegRedemptionDate_55.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_55("STRING_761845780");
    noLegs_0_0.set(LegRepoCollateralSecurityType_55);
    InstrumentLeg_55.insert(LegRepoCollateralSecurityType_55.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_55;
    LegRepurchaseRate_55.setString("69.890000");
    noLegs_0_0.set(LegRepurchaseRate_55);
    InstrumentLeg_55.insert(LegRepurchaseRate_55.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_55(1560485628);
    noLegs_0_0.set(LegRepurchaseTerm_55);
    InstrumentLeg_55.insert(LegRepurchaseTerm_55.getString());
    FIX::LegSecurityDesc LegSecurityDesc_55("STRING_45187853");
    noLegs_0_0.set(LegSecurityDesc_55);
    InstrumentLeg_55.insert(LegSecurityDesc_55.getString());
    FIX::LegSecurityExchange LegSecurityExchange_55("EXCHANGE_194976462");
    noLegs_0_0.set(LegSecurityExchange_55);
    InstrumentLeg_55.insert(LegSecurityExchange_55.getString());
    FIX::LegSecurityID LegSecurityID_55("STRING_1451380024");
    noLegs_0_0.set(LegSecurityID_55);
    InstrumentLeg_55.insert(LegSecurityID_55.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_55("STRING_174886557");
    noLegs_0_0.set(LegSecurityIDSource_55);
    InstrumentLeg_55.insert(LegSecurityIDSource_55.getString());
    FIX::LegSecuritySubType LegSecuritySubType_55("STRING_659356721");
    noLegs_0_0.set(LegSecuritySubType_55);
    InstrumentLeg_55.insert(LegSecuritySubType_55.getString());
    FIX::LegSecurityType LegSecurityType_55("STRING_1820154963");
    noLegs_0_0.set(LegSecurityType_55);
    InstrumentLeg_55.insert(LegSecurityType_55.getString());
    FIX::LegSide LegSide_55('1');
    noLegs_0_0.set(LegSide_55);
    InstrumentLeg_55.insert(LegSide_55.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_55("STRING_1927586013");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_55);
    InstrumentLeg_55.insert(LegStateOrProvinceOfIssue_55.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_55("JPY");
    noLegs_0_0.set(LegStrikeCurrency_55);
    InstrumentLeg_55.insert(LegStrikeCurrency_55.getString());
    FIX::LegStrikePrice LegStrikePrice_55;
    LegStrikePrice_55.setString("19895047");
    noLegs_0_0.set(LegStrikePrice_55);
    InstrumentLeg_55.insert(LegStrikePrice_55.getString());
    FIX::LegSymbol LegSymbol_55("STRING_1800641858");
    noLegs_0_0.set(LegSymbol_55);
    InstrumentLeg_55.insert(LegSymbol_55.getString());
    FIX::LegSymbolSfx LegSymbolSfx_55("STRING_668565607");
    noLegs_0_0.set(LegSymbolSfx_55);
    InstrumentLeg_55.insert(LegSymbolSfx_55.getString());
    FIX::LegTimeUnit LegTimeUnit_55("STRING_1764930737");
    noLegs_0_0.set(LegTimeUnit_55);
    InstrumentLeg_55.insert(LegTimeUnit_55.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_55("STRING_944687364");
    noLegs_0_0.set(LegUnitOfMeasure_55);
    InstrumentLeg_55.insert(LegUnitOfMeasure_55.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
    LegUnitOfMeasureQty_55.setString("9116911");
    noLegs_0_0.set(LegUnitOfMeasureQty_55);
    InstrumentLeg_55.insert(LegUnitOfMeasureQty_55.getString());
    all_values.push_back(InstrumentLeg_55);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
      FIX::LegSecurityAltID LegSecurityAltID_115("STRING_138067646");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltID_115.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_115("STRING_1770397364");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_115);
      LegSecAltIDGrp_NoLegSecurityAltID_115.insert(LegSecurityAltIDSource_115.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
      FIX::LegSecurityAltID LegSecurityAltID_116("STRING_888076983");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltID_116.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_116("STRING_2076325719");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_116);
      LegSecAltIDGrp_NoLegSecurityAltID_116.insert(LegSecurityAltIDSource_116.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
      FIX::LegSecurityAltID LegSecurityAltID_117("STRING_1588171408");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltID_117.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_117("STRING_1911435222");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_117);
      LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltIDSource_117.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_35;
  FIX::AttachmentPoint AttachmentPoint_35;
  AttachmentPoint_35.setString("10.890000");
  msg.set(AttachmentPoint_35);
  Instrument_35.insert(AttachmentPoint_35.getString());
  FIX::CFICode CFICode_35("STRING_1126083593");
  msg.set(CFICode_35);
  Instrument_35.insert(CFICode_35.getString());
  FIX::CPProgram CPProgram_35(1);
  msg.set(CPProgram_35);
  Instrument_35.insert(CPProgram_35.getString());
  FIX::CPRegType CPRegType_35("STRING_1771388670");
  msg.set(CPRegType_35);
  Instrument_35.insert(CPRegType_35.getString());
  FIX::CapPrice CapPrice_35;
  CapPrice_35.setString("12083139");
  msg.set(CapPrice_35);
  Instrument_35.insert(CapPrice_35.getString());
  FIX::ContractMultiplier ContractMultiplier_35;
  ContractMultiplier_35.setString("8603559");
  msg.set(ContractMultiplier_35);
  Instrument_35.insert(ContractMultiplier_35.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_35(2);
  msg.set(ContractMultiplierUnit_35);
  Instrument_35.insert(ContractMultiplierUnit_35.getString());
  FIX::ContractSettlMonth ContractSettlMonth_35("MONTHYEAR_621315964");
  msg.set(ContractSettlMonth_35);
  Instrument_35.insert(ContractSettlMonth_35.getString());
  FIX::CountryOfIssue CountryOfIssue_35("COUNTRY_905543800");
  msg.set(CountryOfIssue_35);
  Instrument_35.insert(CountryOfIssue_35.getString());
  FIX::CouponPaymentDate CouponPaymentDate_35("LOCALMKTDATE_1170708473");
  msg.set(CouponPaymentDate_35);
  Instrument_35.insert(CouponPaymentDate_35.getString());
  FIX::CouponRate CouponRate_35;
  CouponRate_35.setString("59.880000");
  msg.set(CouponRate_35);
  Instrument_35.insert(CouponRate_35.getString());
  FIX::CreditRating CreditRating_35("STRING_1080430357");
  msg.set(CreditRating_35);
  Instrument_35.insert(CreditRating_35.getString());
  FIX::DatedDate DatedDate_35("LOCALMKTDATE_1830065194");
  msg.set(DatedDate_35);
  Instrument_35.insert(DatedDate_35.getString());
  FIX::DetachmentPoint DetachmentPoint_35;
  DetachmentPoint_35.setString("73.030000");
  msg.set(DetachmentPoint_35);
  Instrument_35.insert(DetachmentPoint_35.getString());
  FIX::EncodedIssuer EncodedIssuer_35("DATA_229461069");
  msg.set(EncodedIssuer_35);
  Instrument_35.insert(EncodedIssuer_35.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_35(1610167559);
  msg.set(EncodedIssuerLen_35);
  Instrument_35.insert(EncodedIssuerLen_35.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_35("DATA_432749940");
  msg.set(EncodedSecurityDesc_35);
  Instrument_35.insert(EncodedSecurityDesc_35.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_35(670497925);
  msg.set(EncodedSecurityDescLen_35);
  Instrument_35.insert(EncodedSecurityDescLen_35.getString());
  FIX::ExerciseStyle ExerciseStyle_35(1);
  msg.set(ExerciseStyle_35);
  Instrument_35.insert(ExerciseStyle_35.getString());
  FIX::Factor Factor_35;
  Factor_35.setString("859081");
  msg.set(Factor_35);
  Instrument_35.insert(Factor_35.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_35(true);
  msg.set(FlexProductEligibilityIndicator_35);
  Instrument_35.insert(FlexProductEligibilityIndicator_35.getString());
  FIX::FlexibleIndicator FlexibleIndicator_35(false);
  msg.set(FlexibleIndicator_35);
  Instrument_35.insert(FlexibleIndicator_35.getString());
  FIX::FloorPrice FloorPrice_35;
  FloorPrice_35.setString("10305955");
  msg.set(FloorPrice_35);
  Instrument_35.insert(FloorPrice_35.getString());
  FIX::FlowScheduleType FlowScheduleType_35(4);
  msg.set(FlowScheduleType_35);
  Instrument_35.insert(FlowScheduleType_35.getString());
  FIX::InstrRegistry InstrRegistry_35("STRING_1604026609");
  msg.set(InstrRegistry_35);
  Instrument_35.insert(InstrRegistry_35.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_35('1');
  msg.set(InstrmtAssignmentMethod_35);
  Instrument_35.insert(InstrmtAssignmentMethod_35.getString());
  FIX::InterestAccrualDate InterestAccrualDate_35("LOCALMKTDATE_1873668414");
  msg.set(InterestAccrualDate_35);
  Instrument_35.insert(InterestAccrualDate_35.getString());
  FIX::IssueDate IssueDate_35("LOCALMKTDATE_344619944");
  msg.set(IssueDate_35);
  Instrument_35.insert(IssueDate_35.getString());
  FIX::Issuer Issuer_35("STRING_1097505232");
  msg.set(Issuer_35);
  Instrument_35.insert(Issuer_35.getString());
  FIX::ListMethod ListMethod_35(0);
  msg.set(ListMethod_35);
  Instrument_35.insert(ListMethod_35.getString());
  FIX::LocaleOfIssue LocaleOfIssue_35("STRING_108571519");
  msg.set(LocaleOfIssue_35);
  Instrument_35.insert(LocaleOfIssue_35.getString());
  FIX::MaturityDate MaturityDate_35("LOCALMKTDATE_905592673");
  msg.set(MaturityDate_35);
  Instrument_35.insert(MaturityDate_35.getString());
  FIX::MaturityMonthYear MaturityMonthYear_35("MONTHYEAR_292956119");
  msg.set(MaturityMonthYear_35);
  Instrument_35.insert(MaturityMonthYear_35.getString());
  FIX::MaturityTime MaturityTime_35("TZTIMEONLY_207081685");
  msg.set(MaturityTime_35);
  Instrument_35.insert(MaturityTime_35.getString());
  FIX::MinPriceIncrement MinPriceIncrement_35;
  MinPriceIncrement_35.setString("5294976");
  msg.set(MinPriceIncrement_35);
  Instrument_35.insert(MinPriceIncrement_35.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
  MinPriceIncrementAmount_35.setString("15012701");
  msg.set(MinPriceIncrementAmount_35);
  Instrument_35.insert(MinPriceIncrementAmount_35.getString());
  FIX::NTPositionLimit NTPositionLimit_35(1067437632);
  msg.set(NTPositionLimit_35);
  Instrument_35.insert(NTPositionLimit_35.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
  NotionalPercentageOutstanding_35.setString("97.060000");
  msg.set(NotionalPercentageOutstanding_35);
  Instrument_35.insert(NotionalPercentageOutstanding_35.getString());
  FIX::OptAttribute OptAttribute_35('2');
  msg.set(OptAttribute_35);
  Instrument_35.insert(OptAttribute_35.getString());
  FIX::OptPayoutAmount OptPayoutAmount_35;
  OptPayoutAmount_35.setString("19729814");
  msg.set(OptPayoutAmount_35);
  Instrument_35.insert(OptPayoutAmount_35.getString());
  FIX::OptPayoutType OptPayoutType_35(2);
  msg.set(OptPayoutType_35);
  Instrument_35.insert(OptPayoutType_35.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
  OriginalNotionalPercentageOutstanding_35.setString("84.090000");
  msg.set(OriginalNotionalPercentageOutstanding_35);
  Instrument_35.insert(OriginalNotionalPercentageOutstanding_35.getString());
  FIX::Pool Pool_35("STRING_905928141");
  msg.set(Pool_35);
  Instrument_35.insert(Pool_35.getString());
  FIX::PositionLimit PositionLimit_35(211036078);
  msg.set(PositionLimit_35);
  Instrument_35.insert(PositionLimit_35.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_35("STRING_STD");
  msg.set(PriceQuoteMethod_35);
  Instrument_35.insert(PriceQuoteMethod_35.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_35("STRING_1135389210");
  msg.set(PriceUnitOfMeasure_35);
  Instrument_35.insert(PriceUnitOfMeasure_35.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
  PriceUnitOfMeasureQty_35.setString("18212036");
  msg.set(PriceUnitOfMeasureQty_35);
  Instrument_35.insert(PriceUnitOfMeasureQty_35.getString());
  FIX::Product Product_37(13);
  msg.set(Product_37);
  Instrument_35.insert(Product_37.getString());
  FIX::ProductComplex ProductComplex_35("STRING_1805887136");
  msg.set(ProductComplex_35);
  Instrument_35.insert(ProductComplex_35.getString());
  FIX::PutOrCall PutOrCall_35(1);
  msg.set(PutOrCall_35);
  Instrument_35.insert(PutOrCall_35.getString());
  FIX::RedemptionDate RedemptionDate_35("LOCALMKTDATE_16856507");
  msg.set(RedemptionDate_35);
  Instrument_35.insert(RedemptionDate_35.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_35("STRING_997467020");
  msg.set(RepoCollateralSecurityType_35);
  Instrument_35.insert(RepoCollateralSecurityType_35.getString());
  FIX::RepurchaseRate RepurchaseRate_35;
  RepurchaseRate_35.setString("7.620000");
  msg.set(RepurchaseRate_35);
  Instrument_35.insert(RepurchaseRate_35.getString());
  FIX::RepurchaseTerm RepurchaseTerm_35(1047452022);
  msg.set(RepurchaseTerm_35);
  Instrument_35.insert(RepurchaseTerm_35.getString());
  FIX::RestructuringType RestructuringType_35("STRING_MM");
  msg.set(RestructuringType_35);
  Instrument_35.insert(RestructuringType_35.getString());
  FIX::SecurityDesc SecurityDesc_35("STRING_1652087371");
  msg.set(SecurityDesc_35);
  Instrument_35.insert(SecurityDesc_35.getString());
  FIX::SecurityExchange SecurityExchange_35("EXCHANGE_68631535");
  msg.set(SecurityExchange_35);
  Instrument_35.insert(SecurityExchange_35.getString());
  FIX::SecurityGroup SecurityGroup_35("STRING_826922836");
  msg.set(SecurityGroup_35);
  Instrument_35.insert(SecurityGroup_35.getString());
  FIX::SecurityID SecurityID_35("STRING_1996707315");
  msg.set(SecurityID_35);
  Instrument_35.insert(SecurityID_35.getString());
  FIX::SecurityIDSource SecurityIDSource_35("STRING_H");
  msg.set(SecurityIDSource_35);
  Instrument_35.insert(SecurityIDSource_35.getString());
  FIX::SecurityStatus SecurityStatus_35("STRING_1");
  msg.set(SecurityStatus_35);
  Instrument_35.insert(SecurityStatus_35.getString());
  FIX::SecuritySubType SecuritySubType_36("STRING_2105278834");
  msg.set(SecuritySubType_36);
  Instrument_35.insert(SecuritySubType_36.getString());
  FIX::SecurityType SecurityType_37("STRING_FUT");
  msg.set(SecurityType_37);
  Instrument_35.insert(SecurityType_37.getString());
  FIX::Seniority Seniority_35("STRING_SR");
  msg.set(Seniority_35);
  Instrument_35.insert(Seniority_35.getString());
  FIX::SettlMethod SettlMethod_35('C');
  msg.set(SettlMethod_35);
  Instrument_35.insert(SettlMethod_35.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_35("STRING_453743489");
  msg.set(SettleOnOpenFlag_35);
  Instrument_35.insert(SettleOnOpenFlag_35.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_35("STRING_1788021586");
  msg.set(StateOrProvinceOfIssue_35);
  Instrument_35.insert(StateOrProvinceOfIssue_35.getString());
  FIX::StrikeCurrency StrikeCurrency_35("CHF");
  msg.set(StrikeCurrency_35);
  Instrument_35.insert(StrikeCurrency_35.getString());
  FIX::StrikeMultiplier StrikeMultiplier_35;
  StrikeMultiplier_35.setString("17631240");
  msg.set(StrikeMultiplier_35);
  Instrument_35.insert(StrikeMultiplier_35.getString());
  FIX::StrikePrice StrikePrice_35;
  StrikePrice_35.setString("10578122");
  msg.set(StrikePrice_35);
  Instrument_35.insert(StrikePrice_35.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_35(5);
  msg.set(StrikePriceBoundaryMethod_35);
  Instrument_35.insert(StrikePriceBoundaryMethod_35.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
  StrikePriceBoundaryPrecision_35.setString("87.670000");
  msg.set(StrikePriceBoundaryPrecision_35);
  Instrument_35.insert(StrikePriceBoundaryPrecision_35.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_35(2);
  msg.set(StrikePriceDeterminationMethod_35);
  Instrument_35.insert(StrikePriceDeterminationMethod_35.getString());
  FIX::StrikeValue StrikeValue_35;
  StrikeValue_35.setString("5509801");
  msg.set(StrikeValue_35);
  Instrument_35.insert(StrikeValue_35.getString());
  FIX::Symbol Symbol_35("STRING_1161637184");
  msg.set(Symbol_35);
  Instrument_35.insert(Symbol_35.getString());
  FIX::SymbolSfx SymbolSfx_35("STRING_WI");
  msg.set(SymbolSfx_35);
  Instrument_35.insert(SymbolSfx_35.getString());
  FIX::TimeUnit TimeUnit_35("STRING_Yr");
  msg.set(TimeUnit_35);
  Instrument_35.insert(TimeUnit_35.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_35(1);
  msg.set(UnderlyingPriceDeterminationMethod_35);
  Instrument_35.insert(UnderlyingPriceDeterminationMethod_35.getString());
  FIX::UnitOfMeasure UnitOfMeasure_35("STRING_Bcf");
  msg.set(UnitOfMeasure_35);
  Instrument_35.insert(UnitOfMeasure_35.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
  UnitOfMeasureQty_35.setString("13506088");
  msg.set(UnitOfMeasureQty_35);
  Instrument_35.insert(UnitOfMeasureQty_35.getString());
  FIX::ValuationMethod ValuationMethod_35("STRING_FUTDA");
  msg.set(ValuationMethod_35);
  Instrument_35.insert(ValuationMethod_35.getString());
  all_values.push_back(Instrument_35);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_71;
    FIX::ComplexEventCondition ComplexEventCondition_71(2);
    noComplexEvents_0_0.set(ComplexEventCondition_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventCondition_71.getString());
    FIX::ComplexEventPrice ComplexEventPrice_71;
    ComplexEventPrice_71.setString("94104");
    noComplexEvents_0_0.set(ComplexEventPrice_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventPrice_71.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_71(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryMethod_71.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
    ComplexEventPriceBoundaryPrecision_71.setString("32.860000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryPrecision_71.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_71(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceTimeType_71.getString());
    FIX::ComplexEventType ComplexEventType_71(4);
    noComplexEvents_0_0.set(ComplexEventType_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexEventType_71.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
    ComplexOptPayoutAmount_71.setString("7524969");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_71);
    ComplexEvents_NoComplexEvents_71.insert(ComplexOptPayoutAmount_71.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_71);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_146;
      FIX::ComplexEventEndDate ComplexEventEndDate_146(FIX::UTCTIMESTAMP(20, 58, 2, 4, 4, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_146);
      ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventEndDate_146.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_146(FIX::UTCTIMESTAMP(11, 39, 56, 14, 11, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_146);
      ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventStartDate_146.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_146);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
        FIX::ComplexEventEndTime ComplexEventEndTime_306(FIX::UTCTIMEONLY(17, 9, 35));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_306);
        ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventEndTime_306.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_306(FIX::UTCTIMEONLY(3, 22, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_306);
        ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventStartTime_306.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
        FIX::ComplexEventEndTime ComplexEventEndTime_307(FIX::UTCTIMEONLY(20, 14, 53));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_307);
        ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventEndTime_307.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_307(FIX::UTCTIMEONLY(20, 39, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_307);
        ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventStartTime_307.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_147;
      FIX::ComplexEventEndDate ComplexEventEndDate_147(FIX::UTCTIMESTAMP(11, 56, 59, 24, 5, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_147);
      ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventEndDate_147.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_147(FIX::UTCTIMESTAMP(7, 11, 9, 25, 10, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_147);
      ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventStartDate_147.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_147);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
        FIX::ComplexEventEndTime ComplexEventEndTime_308(FIX::UTCTIMEONLY(3, 41, 19));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_308);
        ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventEndTime_308.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_308(FIX::UTCTIMEONLY(12, 33, 20));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_308);
        ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventStartTime_308.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
        FIX::ComplexEventEndTime ComplexEventEndTime_309(FIX::UTCTIMEONLY(5, 35, 16));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_309);
        ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventEndTime_309.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_309(FIX::UTCTIMEONLY(11, 55, 0));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_309);
        ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventStartTime_309.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
        FIX::ComplexEventEndTime ComplexEventEndTime_310(FIX::UTCTIMEONLY(10, 49, 56));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_310);
        ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventEndTime_310.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_310(FIX::UTCTIMEONLY(5, 36, 3));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_310);
        ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventStartTime_310.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_148;
      FIX::ComplexEventEndDate ComplexEventEndDate_148(FIX::UTCTIMESTAMP(3, 12, 29, 0, 11, 2013));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_148);
      ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventEndDate_148.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_148(FIX::UTCTIMESTAMP(6, 34, 43, 14, 12, 2005));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_148);
      ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventStartDate_148.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_148);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
        FIX::ComplexEventEndTime ComplexEventEndTime_311(FIX::UTCTIMEONLY(2, 17, 38));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_311);
        ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventEndTime_311.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_311(FIX::UTCTIMEONLY(5, 25, 29));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_311);
        ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventStartTime_311.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
        FIX::ComplexEventEndTime ComplexEventEndTime_312(FIX::UTCTIMEONLY(15, 18, 1));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_312);
        ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventEndTime_312.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_312(FIX::UTCTIMEONLY(3, 37, 57));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_312);
        ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventStartTime_312.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
        FIX::ComplexEventEndTime ComplexEventEndTime_313(FIX::UTCTIMEONLY(20, 1, 24));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_313);
        ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventEndTime_313.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_313(FIX::UTCTIMEONLY(3, 17, 21));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_313);
        ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventStartTime_313.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_72;
    FIX::ComplexEventCondition ComplexEventCondition_72(2);
    noComplexEvents_0_1.set(ComplexEventCondition_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventCondition_72.getString());
    FIX::ComplexEventPrice ComplexEventPrice_72;
    ComplexEventPrice_72.setString("12344842");
    noComplexEvents_0_1.set(ComplexEventPrice_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPrice_72.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_72(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryMethod_72.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
    ComplexEventPriceBoundaryPrecision_72.setString("66.430000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryPrecision_72.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_72(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceTimeType_72.getString());
    FIX::ComplexEventType ComplexEventType_72(6);
    noComplexEvents_0_1.set(ComplexEventType_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventType_72.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
    ComplexOptPayoutAmount_72.setString("3998330");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexOptPayoutAmount_72.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_72);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_149;
      FIX::ComplexEventEndDate ComplexEventEndDate_149(FIX::UTCTIMESTAMP(15, 43, 9, 12, 1, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_149);
      ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventEndDate_149.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_149(FIX::UTCTIMESTAMP(3, 49, 19, 17, 10, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_149);
      ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventStartDate_149.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_149);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
        FIX::ComplexEventEndTime ComplexEventEndTime_314(FIX::UTCTIMEONLY(21, 39, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_314);
        ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventEndTime_314.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_314(FIX::UTCTIMEONLY(19, 26, 8));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_314);
        ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventStartTime_314.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
        FIX::ComplexEventEndTime ComplexEventEndTime_315(FIX::UTCTIMEONLY(10, 5, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_315);
        ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventEndTime_315.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_315(FIX::UTCTIMEONLY(7, 58, 58));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_315);
        ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventStartTime_315.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_150;
      FIX::ComplexEventEndDate ComplexEventEndDate_150(FIX::UTCTIMESTAMP(5, 33, 53, 22, 10, 2012));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_150);
      ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventEndDate_150.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_150(FIX::UTCTIMESTAMP(13, 5, 35, 18, 3, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_150);
      ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventStartDate_150.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_150);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
        FIX::ComplexEventEndTime ComplexEventEndTime_316(FIX::UTCTIMEONLY(2, 44, 56));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_316);
        ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventEndTime_316.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_316(FIX::UTCTIMEONLY(3, 14, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_316);
        ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventStartTime_316.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
        FIX::ComplexEventEndTime ComplexEventEndTime_317(FIX::UTCTIMEONLY(13, 57, 48));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_317);
        ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventEndTime_317.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_317(FIX::UTCTIMEONLY(20, 46, 9));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_317);
        ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventStartTime_317.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
        FIX::ComplexEventEndTime ComplexEventEndTime_318(FIX::UTCTIMEONLY(19, 34, 45));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_318);
        ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventEndTime_318.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_318(FIX::UTCTIMEONLY(8, 9, 53));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_318);
        ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventStartTime_318.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_151;
      FIX::ComplexEventEndDate ComplexEventEndDate_151(FIX::UTCTIMESTAMP(2, 21, 3, 9, 2, 2002));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_151);
      ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventEndDate_151.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_151(FIX::UTCTIMESTAMP(19, 53, 52, 12, 1, 2012));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_151);
      ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventStartDate_151.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_151);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
        FIX::ComplexEventEndTime ComplexEventEndTime_319(FIX::UTCTIMEONLY(11, 26, 28));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_319);
        ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventEndTime_319.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_319(FIX::UTCTIMEONLY(14, 14, 35));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_319);
        ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventStartTime_319.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
        FIX::ComplexEventEndTime ComplexEventEndTime_320(FIX::UTCTIMEONLY(14, 9, 3));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_320);
        ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventEndTime_320.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_320(FIX::UTCTIMEONLY(21, 12, 1));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_320);
        ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventStartTime_320.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_64;
    FIX::EventDate EventDate_64("LOCALMKTDATE_1494690079");
    noEvents_0_0.set(EventDate_64);
    EvntGrp_NoEvents_64.insert(EventDate_64.getString());
    FIX::EventPx EventPx_64;
    EventPx_64.setString("20163645");
    noEvents_0_0.set(EventPx_64);
    EvntGrp_NoEvents_64.insert(EventPx_64.getString());
    FIX::EventText EventText_64("STRING_1145810802");
    noEvents_0_0.set(EventText_64);
    EvntGrp_NoEvents_64.insert(EventText_64.getString());
    FIX::EventTime EventTime_64(FIX::UTCTIMESTAMP(3, 42, 24, 3, 4, 2002));
    noEvents_0_0.set(EventTime_64);
    EvntGrp_NoEvents_64.insert(EventTime_64.getString());
    FIX::EventType EventType_64(4);
    noEvents_0_0.set(EventType_64);
    EvntGrp_NoEvents_64.insert(EventType_64.getString());
    all_values.push_back(EvntGrp_NoEvents_64);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_65;
    FIX::EventDate EventDate_65("LOCALMKTDATE_1682738560");
    noEvents_0_1.set(EventDate_65);
    EvntGrp_NoEvents_65.insert(EventDate_65.getString());
    FIX::EventPx EventPx_65;
    EventPx_65.setString("19201339");
    noEvents_0_1.set(EventPx_65);
    EvntGrp_NoEvents_65.insert(EventPx_65.getString());
    FIX::EventText EventText_65("STRING_920220391");
    noEvents_0_1.set(EventText_65);
    EvntGrp_NoEvents_65.insert(EventText_65.getString());
    FIX::EventTime EventTime_65(FIX::UTCTIMESTAMP(6, 49, 49, 24, 5, 2001));
    noEvents_0_1.set(EventTime_65);
    EvntGrp_NoEvents_65.insert(EventTime_65.getString());
    FIX::EventType EventType_65(4);
    noEvents_0_1.set(EventType_65);
    EvntGrp_NoEvents_65.insert(EventType_65.getString());
    all_values.push_back(EvntGrp_NoEvents_65);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_64;
    FIX::InstrumentPartyID InstrumentPartyID_64("STRING_844349313");
    noInstrumentParties_0_0.set(InstrumentPartyID_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyID_64.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_64('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyIDSource_64.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_64(517560150);
    noInstrumentParties_0_0.set(InstrumentPartyRole_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyRole_64.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_64);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
      FIX::InstrumentPartySubID InstrumentPartySubID_137("STRING_1047749614");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_137);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubID_137.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_137(307476994);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_137);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubIDType_137.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
      FIX::InstrumentPartySubID InstrumentPartySubID_138("STRING_1244926122");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_138);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubID_138.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_138(381328992);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_138);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubIDType_138.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
      FIX::InstrumentPartySubID InstrumentPartySubID_139("STRING_1802167073");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_139);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubID_139.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_139(1113806996);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_139);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubIDType_139.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_65;
    FIX::InstrumentPartyID InstrumentPartyID_65("STRING_1527139794");
    noInstrumentParties_0_1.set(InstrumentPartyID_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyID_65.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_65('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyIDSource_65.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_65(15276879);
    noInstrumentParties_0_1.set(InstrumentPartyRole_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyRole_65.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_65);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
      FIX::InstrumentPartySubID InstrumentPartySubID_140("STRING_912563789");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_140);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubID_140.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_140(1648411574);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_140);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubIDType_140.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
      FIX::InstrumentPartySubID InstrumentPartySubID_141("STRING_1077883856");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_141);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubID_141.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_141(1278970657);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_141);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubIDType_141.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
      FIX::InstrumentPartySubID InstrumentPartySubID_142("STRING_1888508297");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_142);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubID_142.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_142(613138768);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_142);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubIDType_142.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_72;
    FIX::SecurityAltID SecurityAltID_72("STRING_661245041");
    noSecurityAltID_0_0.set(SecurityAltID_72);
    SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltID_72.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_72("STRING_1386791749");
    noSecurityAltID_0_0.set(SecurityAltIDSource_72);
    SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltIDSource_72.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_73;
    FIX::SecurityAltID SecurityAltID_73("STRING_2141859914");
    noSecurityAltID_0_1.set(SecurityAltID_73);
    SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltID_73.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_73("STRING_1413382050");
    noSecurityAltID_0_1.set(SecurityAltIDSource_73);
    SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltIDSource_73.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_74;
    FIX::SecurityAltID SecurityAltID_74("STRING_106362030");
    noSecurityAltID_0_2.set(SecurityAltID_74);
    SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltID_74.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_74("STRING_1022552222");
    noSecurityAltID_0_2.set(SecurityAltIDSource_74);
    SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltIDSource_74.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_70;
  FIX::SecurityXML SecurityXML_71("XMLDATA_775829738");
  msg.set(SecurityXML_71);
  FIX::SecurityXMLLen SecurityXMLLen_35(935332465);
  msg.set(SecurityXMLLen_35);
  FIX::SecurityXMLSchema SecurityXMLSchema_35("STRING_1633517665");
  msg.set(SecurityXMLSchema_35);
  SecurityXML_70.insert(SecurityXMLSchema_35.getString());
  all_values.push_back(SecurityXML_70);

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    FIX::Currency Currency_28("EUR");
    noMDEntries_0_0.set(Currency_28);
    MDFullGrp_NoMDEntries_0.insert(Currency_28.getString());
    FIX::DealingCapacity DealingCapacity_2('R');
    noMDEntries_0_0.set(DealingCapacity_2);
    MDFullGrp_NoMDEntries_0.insert(DealingCapacity_2.getString());
    FIX::DeskID DeskID_2("STRING_1955797240");
    noMDEntries_0_0.set(DeskID_2);
    MDFullGrp_NoMDEntries_0.insert(DeskID_2.getString());
    FIX::EncodedText EncodedText_54("DATA_797626095");
    noMDEntries_0_0.set(EncodedText_54);
    MDFullGrp_NoMDEntries_0.insert(EncodedText_54.getString());
    FIX::EncodedTextLen EncodedTextLen_54(1423197489);
    noMDEntries_0_0.set(EncodedTextLen_54);
    MDFullGrp_NoMDEntries_0.insert(EncodedTextLen_54.getString());
    FIX::ExecInst ExecInst_4("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(ExecInst_4);
    MDFullGrp_NoMDEntries_0.insert(ExecInst_4.getString());
    FIX::ExpireDate ExpireDate_5("LOCALMKTDATE_1178955088");
    noMDEntries_0_0.set(ExpireDate_5);
    MDFullGrp_NoMDEntries_0.insert(ExpireDate_5.getString());
    FIX::ExpireTime ExpireTime_6(FIX::UTCTIMESTAMP(14, 14, 0, 17, 8, 2000));
    noMDEntries_0_0.set(ExpireTime_6);
    MDFullGrp_NoMDEntries_0.insert(ExpireTime_6.getString());
    FIX::FirstPx FirstPx_2;
    FirstPx_2.setString("16832515");
    noMDEntries_0_0.set(FirstPx_2);
    MDFullGrp_NoMDEntries_0.insert(FirstPx_2.getString());
    FIX::HaltReasonInt HaltReasonInt_2(4);
    noMDEntries_0_0.set(HaltReasonInt_2);
    FIX::HighPx HighPx_2;
    HighPx_2.setString("3312070");
    noMDEntries_0_0.set(HighPx_2);
    MDFullGrp_NoMDEntries_0.insert(HighPx_2.getString());
    FIX::LastPx LastPx_12;
    LastPx_12.setString("14242761");
    noMDEntries_0_0.set(LastPx_12);
    MDFullGrp_NoMDEntries_0.insert(LastPx_12.getString());
    FIX::LocationID LocationID_2("STRING_346886640");
    noMDEntries_0_0.set(LocationID_2);
    MDFullGrp_NoMDEntries_0.insert(LocationID_2.getString());
    FIX::LotType LotType_15('4');
    noMDEntries_0_0.set(LotType_15);
    MDFullGrp_NoMDEntries_0.insert(LotType_15.getString());
    FIX::LowPx LowPx_2;
    LowPx_2.setString("20855212");
    noMDEntries_0_0.set(LowPx_2);
    MDFullGrp_NoMDEntries_0.insert(LowPx_2.getString());
    FIX::MDEntryBuyer MDEntryBuyer_2("STRING_1733678389");
    noMDEntries_0_0.set(MDEntryBuyer_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryBuyer_2.getString());
    FIX::MDEntryDate MDEntryDate_2(FIX::UTCDATEONLY(1, 8, 2007));
    noMDEntries_0_0.set(MDEntryDate_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryDate_2.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_2;
    MDEntryForwardPoints_2.setString("21272493");
    noMDEntries_0_0.set(MDEntryForwardPoints_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryForwardPoints_2.getString());
    FIX::MDEntryID MDEntryID_2("STRING_627889237");
    noMDEntries_0_0.set(MDEntryID_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryID_2.getString());
    FIX::MDEntryOriginator MDEntryOriginator_2("STRING_1885790588");
    noMDEntries_0_0.set(MDEntryOriginator_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryOriginator_2.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_2(577926044);
    noMDEntries_0_0.set(MDEntryPositionNo_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPositionNo_2.getString());
    FIX::MDEntryPx MDEntryPx_2;
    MDEntryPx_2.setString("2600873");
    noMDEntries_0_0.set(MDEntryPx_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPx_2.getString());
    FIX::MDEntrySeller MDEntrySeller_2("STRING_1635667070");
    noMDEntries_0_0.set(MDEntrySeller_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySeller_2.getString());
    FIX::MDEntrySize MDEntrySize_4;
    MDEntrySize_4.setString("16936465");
    noMDEntries_0_0.set(MDEntrySize_4);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySize_4.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_2;
    MDEntrySpotRate_2.setString("684009");
    noMDEntries_0_0.set(MDEntrySpotRate_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySpotRate_2.getString());
    FIX::MDEntryTime MDEntryTime_2(FIX::UTCTIMEONLY(21, 14, 25));
    noMDEntries_0_0.set(MDEntryTime_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryTime_2.getString());
    FIX::MDEntryType MDEntryType_5('T');
    noMDEntries_0_0.set(MDEntryType_5);
    MDFullGrp_NoMDEntries_0.insert(MDEntryType_5.getString());
    FIX::MDMkt MDMkt_2("EXCHANGE_1141203736");
    noMDEntries_0_0.set(MDMkt_2);
    MDFullGrp_NoMDEntries_0.insert(MDMkt_2.getString());
    FIX::MDOriginType MDOriginType_2(1);
    noMDEntries_0_0.set(MDOriginType_2);
    MDFullGrp_NoMDEntries_0.insert(MDOriginType_2.getString());
    FIX::MDPriceLevel MDPriceLevel_2(186913928);
    noMDEntries_0_0.set(MDPriceLevel_2);
    MDFullGrp_NoMDEntries_0.insert(MDPriceLevel_2.getString());
    FIX::MDQuoteType MDQuoteType_3(2);
    noMDEntries_0_0.set(MDQuoteType_3);
    MDFullGrp_NoMDEntries_0.insert(MDQuoteType_3.getString());
    FIX::MinQty MinQty_4;
    MinQty_4.setString("6792398");
    noMDEntries_0_0.set(MinQty_4);
    MDFullGrp_NoMDEntries_0.insert(MinQty_4.getString());
    FIX::NumberOfOrders NumberOfOrders_2(1386633998);
    noMDEntries_0_0.set(NumberOfOrders_2);
    MDFullGrp_NoMDEntries_0.insert(NumberOfOrders_2.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_3("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(OpenCloseSettlFlag_3);
    MDFullGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_3.getString());
    FIX::OrdType OrdType_25('Q');
    noMDEntries_0_0.set(OrdType_25);
    MDFullGrp_NoMDEntries_0.insert(OrdType_25.getString());
    FIX::OrderCapacity OrderCapacity_6('I');
    noMDEntries_0_0.set(OrderCapacity_6);
    MDFullGrp_NoMDEntries_0.insert(OrderCapacity_6.getString());
    FIX::OrderID OrderID_25("STRING_2136087711");
    noMDEntries_0_0.set(OrderID_25);
    MDFullGrp_NoMDEntries_0.insert(OrderID_25.getString());
    FIX::PriceDelta PriceDelta_3;
    PriceDelta_3.setString("7598743");
    noMDEntries_0_0.set(PriceDelta_3);
    MDFullGrp_NoMDEntries_0.insert(PriceDelta_3.getString());
    FIX::PriceType PriceType_23(15);
    noMDEntries_0_0.set(PriceType_23);
    MDFullGrp_NoMDEntries_0.insert(PriceType_23.getString());
    FIX::QuoteCondition QuoteCondition_2("MULTIPLESTRINGVALUE_d");
    noMDEntries_0_0.set(QuoteCondition_2);
    MDFullGrp_NoMDEntries_0.insert(QuoteCondition_2.getString());
    FIX::QuoteEntryID QuoteEntryID_2("STRING_346069109");
    noMDEntries_0_0.set(QuoteEntryID_2);
    MDFullGrp_NoMDEntries_0.insert(QuoteEntryID_2.getString());
    FIX::RptSeq RptSeq_3(182906215);
    noMDEntries_0_0.set(RptSeq_3);
    MDFullGrp_NoMDEntries_0.insert(RptSeq_3.getString());
    FIX::Scope Scope_3("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(Scope_3);
    MDFullGrp_NoMDEntries_0.insert(Scope_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_19("STRING_38625881");
    noMDEntries_0_0.set(SecondaryOrderID_19);
    MDFullGrp_NoMDEntries_0.insert(SecondaryOrderID_19.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_2(15);
    noMDEntries_0_0.set(SecurityTradingStatus_2);
    MDFullGrp_NoMDEntries_0.insert(SecurityTradingStatus_2.getString());
    FIX::SellerDays SellerDays_2(1257826930);
    noMDEntries_0_0.set(SellerDays_2);
    MDFullGrp_NoMDEntries_0.insert(SellerDays_2.getString());
    FIX::SettlCurrency SettlCurrency_11("CHF");
    noMDEntries_0_0.set(SettlCurrency_11);
    MDFullGrp_NoMDEntries_0.insert(SettlCurrency_11.getString());
    FIX::SettlDate SettlDate_22("LOCALMKTDATE_1835752974");
    noMDEntries_0_0.set(SettlDate_22);
    MDFullGrp_NoMDEntries_0.insert(SettlDate_22.getString());
    FIX::SettlType SettlType_16("STRING_B");
    noMDEntries_0_0.set(SettlType_16);
    MDFullGrp_NoMDEntries_0.insert(SettlType_16.getString());
    FIX::Text Text_54("STRING_1809153149");
    noMDEntries_0_0.set(Text_54);
    MDFullGrp_NoMDEntries_0.insert(Text_54.getString());
    FIX::TickDirection TickDirection_2('2');
    noMDEntries_0_0.set(TickDirection_2);
    MDFullGrp_NoMDEntries_0.insert(TickDirection_2.getString());
    FIX::TimeInForce TimeInForce_21('6');
    noMDEntries_0_0.set(TimeInForce_21);
    MDFullGrp_NoMDEntries_0.insert(TimeInForce_21.getString());
    FIX::TradeCondition TradeCondition_2("MULTIPLESTRINGVALUE_c");
    noMDEntries_0_0.set(TradeCondition_2);
    MDFullGrp_NoMDEntries_0.insert(TradeCondition_2.getString());
    FIX::TradeVolume TradeVolume_2;
    TradeVolume_2.setString("2037925");
    noMDEntries_0_0.set(TradeVolume_2);
    MDFullGrp_NoMDEntries_0.insert(TradeVolume_2.getString());
    FIX::TradingSessionID TradingSessionID_34("STRING_1");
    noMDEntries_0_0.set(TradingSessionID_34);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionID_34.getString());
    FIX::TradingSessionSubID TradingSessionSubID_34("STRING_2");
    noMDEntries_0_0.set(TradingSessionSubID_34);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionSubID_34.getString());
    FIX::TrdType TrdType_5(35);
    noMDEntries_0_0.set(TrdType_5);
    MDFullGrp_NoMDEntries_0.insert(TrdType_5.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_62;
      FIX::PartyID PartyID_62("STRING_1288135816");
      noPartyIDs_0_1_0.set(PartyID_62);
      Parties_NoPartyIDs_62.insert(PartyID_62.getString());
      FIX::PartyIDSource PartyIDSource_62('B');
      noPartyIDs_0_1_0.set(PartyIDSource_62);
      Parties_NoPartyIDs_62.insert(PartyIDSource_62.getString());
      FIX::PartyRole PartyRole_62(83);
      noPartyIDs_0_1_0.set(PartyRole_62);
      Parties_NoPartyIDs_62.insert(PartyRole_62.getString());
      all_values.push_back(Parties_NoPartyIDs_62);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_127;
        FIX::PartySubID PartySubID_127("STRING_1677098174");
        noPartySubIDs_0_0_2_0.set(PartySubID_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubID_127.getString());
        FIX::PartySubIDType PartySubIDType_127(8);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubIDType_127.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_127);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_128;
        FIX::PartySubID PartySubID_128("STRING_232879751");
        noPartySubIDs_0_0_2_1.set(PartySubID_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubID_128.getString());
        FIX::PartySubIDType PartySubIDType_128(33);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubIDType_128.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_128);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_63;
      FIX::PartyID PartyID_63("STRING_839339846");
      noPartyIDs_0_1_1.set(PartyID_63);
      Parties_NoPartyIDs_63.insert(PartyID_63.getString());
      FIX::PartyIDSource PartyIDSource_63('B');
      noPartyIDs_0_1_1.set(PartyIDSource_63);
      Parties_NoPartyIDs_63.insert(PartyIDSource_63.getString());
      FIX::PartyRole PartyRole_63(2);
      noPartyIDs_0_1_1.set(PartyRole_63);
      Parties_NoPartyIDs_63.insert(PartyRole_63.getString());
      all_values.push_back(Parties_NoPartyIDs_63);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_129;
        FIX::PartySubID PartySubID_129("STRING_1338823228");
        noPartySubIDs_0_1_2_0.set(PartySubID_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubID_129.getString());
        FIX::PartySubIDType PartySubIDType_129(33);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubIDType_129.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_129);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_130;
        FIX::PartySubID PartySubID_130("STRING_2044042698");
        noPartySubIDs_0_1_2_1.set(PartySubID_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubID_130.getString());
        FIX::PartySubIDType PartySubIDType_130(4);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubIDType_130.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_130);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_131;
        FIX::PartySubID PartySubID_131("STRING_671242823");
        noPartySubIDs_0_1_2_2.set(PartySubID_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubID_131.getString());
        FIX::PartySubIDType PartySubIDType_131(12);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubIDType_131.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_131);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_64;
      FIX::PartyID PartyID_64("STRING_2043964227");
      noPartyIDs_0_1_2.set(PartyID_64);
      Parties_NoPartyIDs_64.insert(PartyID_64.getString());
      FIX::PartyIDSource PartyIDSource_64('4');
      noPartyIDs_0_1_2.set(PartyIDSource_64);
      Parties_NoPartyIDs_64.insert(PartyIDSource_64.getString());
      FIX::PartyRole PartyRole_64(68);
      noPartyIDs_0_1_2.set(PartyRole_64);
      Parties_NoPartyIDs_64.insert(PartyRole_64.getString());
      all_values.push_back(Parties_NoPartyIDs_64);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_132;
        FIX::PartySubID PartySubID_132("STRING_506398403");
        noPartySubIDs_0_2_2_0.set(PartySubID_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubID_132.getString());
        FIX::PartySubIDType PartySubIDType_132(20);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubIDType_132.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_132);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_133;
        FIX::PartySubID PartySubID_133("STRING_1818086511");
        noPartySubIDs_0_2_2_1.set(PartySubID_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubID_133.getString());
        FIX::PartySubIDType PartySubIDType_133(9);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubIDType_133.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_133);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_134;
        FIX::PartySubID PartySubID_134("STRING_280880123");
        noPartySubIDs_0_2_2_2.set(PartySubID_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubID_134.getString());
        FIX::PartySubIDType PartySubIDType_134(17);
        noPartySubIDs_0_2_2_2.set(PartySubIDType_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubIDType_134.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_134);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_2);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_10;
      FIX::RateSource RateSource_16(2);
      noRateSources_0_1_0.set(RateSource_16);
      RateSource_NoRateSources_10.insert(RateSource_16.getString());
      FIX::RateSourceType RateSourceType_10(1);
      noRateSources_0_1_0.set(RateSourceType_10);
      RateSource_NoRateSources_10.insert(RateSourceType_10.getString());
      FIX::ReferencePage ReferencePage_10("STRING_1006773213");
      noRateSources_0_1_0.set(ReferencePage_10);
      RateSource_NoRateSources_10.insert(ReferencePage_10.getString());
      all_values.push_back(RateSource_NoRateSources_10);

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_11;
      FIX::RateSource RateSource_17(2);
      noRateSources_0_1_1.set(RateSource_17);
      RateSource_NoRateSources_11.insert(RateSource_17.getString());
      FIX::RateSourceType RateSourceType_11(1);
      noRateSources_0_1_1.set(RateSourceType_11);
      RateSource_NoRateSources_11.insert(RateSourceType_11.getString());
      FIX::ReferencePage ReferencePage_11("STRING_826665237");
      noRateSources_0_1_1.set(ReferencePage_11);
      RateSource_NoRateSources_11.insert(ReferencePage_11.getString());
      all_values.push_back(RateSource_NoRateSources_11);

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_5;
      FIX::MDSecSize MDSecSize_5;
      MDSecSize_5.setString("17397875");
      noOfSecSizes_0_1_0.set(MDSecSize_5);
      SecSizesGrp_NoOfSecSizes_5.insert(MDSecSize_5.getString());
      FIX::MDSecSizeType MDSecSizeType_5(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_5);
      SecSizesGrp_NoOfSecSizes_5.insert(MDSecSizeType_5.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_5);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_6;
      FIX::MDSecSize MDSecSize_6;
      MDSecSize_6.setString("14519646");
      noOfSecSizes_0_1_1.set(MDSecSize_6);
      SecSizesGrp_NoOfSecSizes_6.insert(MDSecSize_6.getString());
      FIX::MDSecSizeType MDSecSizeType_6(1);
      noOfSecSizes_0_1_1.set(MDSecSizeType_6);
      SecSizesGrp_NoOfSecSizes_6.insert(MDSecSizeType_6.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_6);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_2;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_7;
      FIX::MDSecSize MDSecSize_7;
      MDSecSize_7.setString("20522991");
      noOfSecSizes_0_1_2.set(MDSecSize_7);
      SecSizesGrp_NoOfSecSizes_7.insert(MDSecSize_7.getString());
      FIX::MDSecSizeType MDSecSizeType_7(1);
      noOfSecSizes_0_1_2.set(MDSecSizeType_7);
      SecSizesGrp_NoOfSecSizes_7.insert(MDSecSizeType_7.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_7);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_14;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_14("CHF");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveCurrency_14.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_14("STRING_Euribor");
    noMDEntries_0_0.set(BenchmarkCurveName_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurveName_14.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_14("STRING_1094184279");
    noMDEntries_0_0.set(BenchmarkCurvePoint_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkCurvePoint_14.getString());
    FIX::BenchmarkPrice BenchmarkPrice_14;
    BenchmarkPrice_14.setString("4736041");
    noMDEntries_0_0.set(BenchmarkPrice_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPrice_14.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_14(264945005);
    noMDEntries_0_0.set(BenchmarkPriceType_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkPriceType_14.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_14("STRING_101086611");
    noMDEntries_0_0.set(BenchmarkSecurityID_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityID_14.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_14("STRING_370084728");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_14);
    SpreadOrBenchmarkCurveData_14.insert(BenchmarkSecurityIDSource_14.getString());
    FIX::Spread Spread_14;
    Spread_14.setString("11096739");
    noMDEntries_0_0.set(Spread_14);
    SpreadOrBenchmarkCurveData_14.insert(Spread_14.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_14);

    // YieldData
    multiset<string> YieldData_9;
    FIX::Yield Yield_9;
    Yield_9.setString("19.180000");
    noMDEntries_0_0.set(Yield_9);
    YieldData_9.insert(Yield_9.getString());
    FIX::YieldCalcDate YieldCalcDate_9("LOCALMKTDATE_1193167794");
    noMDEntries_0_0.set(YieldCalcDate_9);
    YieldData_9.insert(YieldCalcDate_9.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_9("LOCALMKTDATE_1616072310");
    noMDEntries_0_0.set(YieldRedemptionDate_9);
    YieldData_9.insert(YieldRedemptionDate_9.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_9;
    YieldRedemptionPrice_9.setString("10208294");
    noMDEntries_0_0.set(YieldRedemptionPrice_9);
    YieldData_9.insert(YieldRedemptionPrice_9.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_9(863770657);
    noMDEntries_0_0.set(YieldRedemptionPriceType_9);
    YieldData_9.insert(YieldRedemptionPriceType_9.getString());
    FIX::YieldType YieldType_9("STRING_LASTMONTH");
    noMDEntries_0_0.set(YieldType_9);
    YieldData_9.insert(YieldType_9.getString());
    all_values.push_back(YieldData_9);

    msg.addGroup(noMDEntries_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_1;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_1;
    FIX::Currency Currency_29("EUR");
    noMDEntries_0_1.set(Currency_29);
    MDFullGrp_NoMDEntries_1.insert(Currency_29.getString());
    FIX::DealingCapacity DealingCapacity_3('R');
    noMDEntries_0_1.set(DealingCapacity_3);
    MDFullGrp_NoMDEntries_1.insert(DealingCapacity_3.getString());
    FIX::DeskID DeskID_3("STRING_1686139936");
    noMDEntries_0_1.set(DeskID_3);
    MDFullGrp_NoMDEntries_1.insert(DeskID_3.getString());
    FIX::EncodedText EncodedText_55("DATA_1253661536");
    noMDEntries_0_1.set(EncodedText_55);
    MDFullGrp_NoMDEntries_1.insert(EncodedText_55.getString());
    FIX::EncodedTextLen EncodedTextLen_55(647876694);
    noMDEntries_0_1.set(EncodedTextLen_55);
    MDFullGrp_NoMDEntries_1.insert(EncodedTextLen_55.getString());
    FIX::ExecInst ExecInst_5("MULTIPLECHARVALUE_g");
    noMDEntries_0_1.set(ExecInst_5);
    MDFullGrp_NoMDEntries_1.insert(ExecInst_5.getString());
    FIX::ExpireDate ExpireDate_6("LOCALMKTDATE_2142713317");
    noMDEntries_0_1.set(ExpireDate_6);
    MDFullGrp_NoMDEntries_1.insert(ExpireDate_6.getString());
    FIX::ExpireTime ExpireTime_7(FIX::UTCTIMESTAMP(18, 53, 51, 6, 4, 2008));
    noMDEntries_0_1.set(ExpireTime_7);
    MDFullGrp_NoMDEntries_1.insert(ExpireTime_7.getString());
    FIX::FirstPx FirstPx_3;
    FirstPx_3.setString("12276630");
    noMDEntries_0_1.set(FirstPx_3);
    MDFullGrp_NoMDEntries_1.insert(FirstPx_3.getString());
    FIX::HaltReasonInt HaltReasonInt_3(3);
    noMDEntries_0_1.set(HaltReasonInt_3);
    FIX::HighPx HighPx_3;
    HighPx_3.setString("15350574");
    noMDEntries_0_1.set(HighPx_3);
    MDFullGrp_NoMDEntries_1.insert(HighPx_3.getString());
    FIX::LastPx LastPx_13;
    LastPx_13.setString("8213652");
    noMDEntries_0_1.set(LastPx_13);
    MDFullGrp_NoMDEntries_1.insert(LastPx_13.getString());
    FIX::LocationID LocationID_3("STRING_163503208");
    noMDEntries_0_1.set(LocationID_3);
    MDFullGrp_NoMDEntries_1.insert(LocationID_3.getString());
    FIX::LotType LotType_16('4');
    noMDEntries_0_1.set(LotType_16);
    MDFullGrp_NoMDEntries_1.insert(LotType_16.getString());
    FIX::LowPx LowPx_3;
    LowPx_3.setString("10863102");
    noMDEntries_0_1.set(LowPx_3);
    MDFullGrp_NoMDEntries_1.insert(LowPx_3.getString());
    FIX::MDEntryBuyer MDEntryBuyer_3("STRING_264589820");
    noMDEntries_0_1.set(MDEntryBuyer_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryBuyer_3.getString());
    FIX::MDEntryDate MDEntryDate_3(FIX::UTCDATEONLY(18, 7, 2009));
    noMDEntries_0_1.set(MDEntryDate_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryDate_3.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_3;
    MDEntryForwardPoints_3.setString("16645728");
    noMDEntries_0_1.set(MDEntryForwardPoints_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryForwardPoints_3.getString());
    FIX::MDEntryID MDEntryID_3("STRING_81677532");
    noMDEntries_0_1.set(MDEntryID_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryID_3.getString());
    FIX::MDEntryOriginator MDEntryOriginator_3("STRING_140717451");
    noMDEntries_0_1.set(MDEntryOriginator_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryOriginator_3.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_3(1587038919);
    noMDEntries_0_1.set(MDEntryPositionNo_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPositionNo_3.getString());
    FIX::MDEntryPx MDEntryPx_3;
    MDEntryPx_3.setString("13833870");
    noMDEntries_0_1.set(MDEntryPx_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryPx_3.getString());
    FIX::MDEntrySeller MDEntrySeller_3("STRING_644251444");
    noMDEntries_0_1.set(MDEntrySeller_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySeller_3.getString());
    FIX::MDEntrySize MDEntrySize_5;
    MDEntrySize_5.setString("12281424");
    noMDEntries_0_1.set(MDEntrySize_5);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySize_5.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_3;
    MDEntrySpotRate_3.setString("9220433");
    noMDEntries_0_1.set(MDEntrySpotRate_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntrySpotRate_3.getString());
    FIX::MDEntryTime MDEntryTime_3(FIX::UTCTIMEONLY(7, 21, 30));
    noMDEntries_0_1.set(MDEntryTime_3);
    MDFullGrp_NoMDEntries_1.insert(MDEntryTime_3.getString());
    FIX::MDEntryType MDEntryType_6('2');
    noMDEntries_0_1.set(MDEntryType_6);
    MDFullGrp_NoMDEntries_1.insert(MDEntryType_6.getString());
    FIX::MDMkt MDMkt_3("EXCHANGE_1553654128");
    noMDEntries_0_1.set(MDMkt_3);
    MDFullGrp_NoMDEntries_1.insert(MDMkt_3.getString());
    FIX::MDOriginType MDOriginType_3(0);
    noMDEntries_0_1.set(MDOriginType_3);
    MDFullGrp_NoMDEntries_1.insert(MDOriginType_3.getString());
    FIX::MDPriceLevel MDPriceLevel_3(1589680650);
    noMDEntries_0_1.set(MDPriceLevel_3);
    MDFullGrp_NoMDEntries_1.insert(MDPriceLevel_3.getString());
    FIX::MDQuoteType MDQuoteType_4(2);
    noMDEntries_0_1.set(MDQuoteType_4);
    MDFullGrp_NoMDEntries_1.insert(MDQuoteType_4.getString());
    FIX::MinQty MinQty_5;
    MinQty_5.setString("14998535");
    noMDEntries_0_1.set(MinQty_5);
    MDFullGrp_NoMDEntries_1.insert(MinQty_5.getString());
    FIX::NumberOfOrders NumberOfOrders_3(1881099380);
    noMDEntries_0_1.set(NumberOfOrders_3);
    MDFullGrp_NoMDEntries_1.insert(NumberOfOrders_3.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_4("MULTIPLECHARVALUE_0");
    noMDEntries_0_1.set(OpenCloseSettlFlag_4);
    MDFullGrp_NoMDEntries_1.insert(OpenCloseSettlFlag_4.getString());
    FIX::OrdType OrdType_26('9');
    noMDEntries_0_1.set(OrdType_26);
    MDFullGrp_NoMDEntries_1.insert(OrdType_26.getString());
    FIX::OrderCapacity OrderCapacity_7('A');
    noMDEntries_0_1.set(OrderCapacity_7);
    MDFullGrp_NoMDEntries_1.insert(OrderCapacity_7.getString());
    FIX::OrderID OrderID_26("STRING_1177739756");
    noMDEntries_0_1.set(OrderID_26);
    MDFullGrp_NoMDEntries_1.insert(OrderID_26.getString());
    FIX::PriceDelta PriceDelta_4;
    PriceDelta_4.setString("7326757");
    noMDEntries_0_1.set(PriceDelta_4);
    MDFullGrp_NoMDEntries_1.insert(PriceDelta_4.getString());
    FIX::PriceType PriceType_24(17);
    noMDEntries_0_1.set(PriceType_24);
    MDFullGrp_NoMDEntries_1.insert(PriceType_24.getString());
    FIX::QuoteCondition QuoteCondition_3("MULTIPLESTRINGVALUE_3");
    noMDEntries_0_1.set(QuoteCondition_3);
    MDFullGrp_NoMDEntries_1.insert(QuoteCondition_3.getString());
    FIX::QuoteEntryID QuoteEntryID_3("STRING_997265540");
    noMDEntries_0_1.set(QuoteEntryID_3);
    MDFullGrp_NoMDEntries_1.insert(QuoteEntryID_3.getString());
    FIX::RptSeq RptSeq_4(1361113717);
    noMDEntries_0_1.set(RptSeq_4);
    MDFullGrp_NoMDEntries_1.insert(RptSeq_4.getString());
    FIX::Scope Scope_4("MULTIPLECHARVALUE_2");
    noMDEntries_0_1.set(Scope_4);
    MDFullGrp_NoMDEntries_1.insert(Scope_4.getString());
    FIX::SecondaryOrderID SecondaryOrderID_20("STRING_58113630");
    noMDEntries_0_1.set(SecondaryOrderID_20);
    MDFullGrp_NoMDEntries_1.insert(SecondaryOrderID_20.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_3(12);
    noMDEntries_0_1.set(SecurityTradingStatus_3);
    MDFullGrp_NoMDEntries_1.insert(SecurityTradingStatus_3.getString());
    FIX::SellerDays SellerDays_3(1829639737);
    noMDEntries_0_1.set(SellerDays_3);
    MDFullGrp_NoMDEntries_1.insert(SellerDays_3.getString());
    FIX::SettlCurrency SettlCurrency_12("CAN");
    noMDEntries_0_1.set(SettlCurrency_12);
    MDFullGrp_NoMDEntries_1.insert(SettlCurrency_12.getString());
    FIX::SettlDate SettlDate_23("LOCALMKTDATE_1269195009");
    noMDEntries_0_1.set(SettlDate_23);
    MDFullGrp_NoMDEntries_1.insert(SettlDate_23.getString());
    FIX::SettlType SettlType_17("STRING_9");
    noMDEntries_0_1.set(SettlType_17);
    MDFullGrp_NoMDEntries_1.insert(SettlType_17.getString());
    FIX::Text Text_55("STRING_1423029405");
    noMDEntries_0_1.set(Text_55);
    MDFullGrp_NoMDEntries_1.insert(Text_55.getString());
    FIX::TickDirection TickDirection_3('1');
    noMDEntries_0_1.set(TickDirection_3);
    MDFullGrp_NoMDEntries_1.insert(TickDirection_3.getString());
    FIX::TimeInForce TimeInForce_22('0');
    noMDEntries_0_1.set(TimeInForce_22);
    MDFullGrp_NoMDEntries_1.insert(TimeInForce_22.getString());
    FIX::TradeCondition TradeCondition_3("MULTIPLESTRINGVALUE_AP");
    noMDEntries_0_1.set(TradeCondition_3);
    MDFullGrp_NoMDEntries_1.insert(TradeCondition_3.getString());
    FIX::TradeVolume TradeVolume_3;
    TradeVolume_3.setString("783892");
    noMDEntries_0_1.set(TradeVolume_3);
    MDFullGrp_NoMDEntries_1.insert(TradeVolume_3.getString());
    FIX::TradingSessionID TradingSessionID_35("STRING_5");
    noMDEntries_0_1.set(TradingSessionID_35);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionID_35.getString());
    FIX::TradingSessionSubID TradingSessionSubID_35("STRING_3");
    noMDEntries_0_1.set(TradingSessionSubID_35);
    MDFullGrp_NoMDEntries_1.insert(TradingSessionSubID_35.getString());
    FIX::TrdType TrdType_6(52);
    noMDEntries_0_1.set(TrdType_6);
    MDFullGrp_NoMDEntries_1.insert(TrdType_6.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_65;
      FIX::PartyID PartyID_65("STRING_252310327");
      noPartyIDs_1_1_0.set(PartyID_65);
      Parties_NoPartyIDs_65.insert(PartyID_65.getString());
      FIX::PartyIDSource PartyIDSource_65('D');
      noPartyIDs_1_1_0.set(PartyIDSource_65);
      Parties_NoPartyIDs_65.insert(PartyIDSource_65.getString());
      FIX::PartyRole PartyRole_65(13);
      noPartyIDs_1_1_0.set(PartyRole_65);
      Parties_NoPartyIDs_65.insert(PartyRole_65.getString());
      all_values.push_back(Parties_NoPartyIDs_65);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_135;
        FIX::PartySubID PartySubID_135("STRING_457279321");
        noPartySubIDs_1_0_2_0.set(PartySubID_135);
        PtysSubGrp_NoPartySubIDs_135.insert(PartySubID_135.getString());
        FIX::PartySubIDType PartySubIDType_135(18);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_135);
        PtysSubGrp_NoPartySubIDs_135.insert(PartySubIDType_135.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_135);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_136;
        FIX::PartySubID PartySubID_136("STRING_173852774");
        noPartySubIDs_1_0_2_1.set(PartySubID_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubID_136.getString());
        FIX::PartySubIDType PartySubIDType_136(3);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_136);
        PtysSubGrp_NoPartySubIDs_136.insert(PartySubIDType_136.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_136);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_137;
        FIX::PartySubID PartySubID_137("STRING_1502328367");
        noPartySubIDs_1_0_2_2.set(PartySubID_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubID_137.getString());
        FIX::PartySubIDType PartySubIDType_137(16);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_137);
        PtysSubGrp_NoPartySubIDs_137.insert(PartySubIDType_137.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_137);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_12;
      FIX::RateSource RateSource_19(99);
      noRateSources_1_1_0.set(RateSource_19);
      RateSource_NoRateSources_12.insert(RateSource_19.getString());
      FIX::RateSourceType RateSourceType_12(1);
      noRateSources_1_1_0.set(RateSourceType_12);
      RateSource_NoRateSources_12.insert(RateSourceType_12.getString());
      FIX::ReferencePage ReferencePage_12("STRING_2069433610");
      noRateSources_1_1_0.set(ReferencePage_12);
      RateSource_NoRateSources_12.insert(ReferencePage_12.getString());
      all_values.push_back(RateSource_NoRateSources_12);

      noMDEntries_0_1.addGroup(noRateSources_1_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_8;
      FIX::MDSecSize MDSecSize_8;
      MDSecSize_8.setString("19619076");
      noOfSecSizes_1_1_0.set(MDSecSize_8);
      SecSizesGrp_NoOfSecSizes_8.insert(MDSecSize_8.getString());
      FIX::MDSecSizeType MDSecSizeType_8(1);
      noOfSecSizes_1_1_0.set(MDSecSizeType_8);
      SecSizesGrp_NoOfSecSizes_8.insert(MDSecSizeType_8.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_8);

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_9;
      FIX::MDSecSize MDSecSize_9;
      MDSecSize_9.setString("14661177");
      noOfSecSizes_1_1_1.set(MDSecSize_9);
      SecSizesGrp_NoOfSecSizes_9.insert(MDSecSize_9.getString());
      FIX::MDSecSizeType MDSecSizeType_9(1);
      noOfSecSizes_1_1_1.set(MDSecSizeType_9);
      SecSizesGrp_NoOfSecSizes_9.insert(MDSecSizeType_9.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_9);

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_15;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_15("CAN");
    noMDEntries_0_1.set(BenchmarkCurveCurrency_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveCurrency_15.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_15("STRING_Euribor");
    noMDEntries_0_1.set(BenchmarkCurveName_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveName_15.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_15("STRING_614334192");
    noMDEntries_0_1.set(BenchmarkCurvePoint_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurvePoint_15.getString());
    FIX::BenchmarkPrice BenchmarkPrice_15;
    BenchmarkPrice_15.setString("9376828");
    noMDEntries_0_1.set(BenchmarkPrice_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkPrice_15.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_15(1775131443);
    noMDEntries_0_1.set(BenchmarkPriceType_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkPriceType_15.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_15("STRING_1787792930");
    noMDEntries_0_1.set(BenchmarkSecurityID_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityID_15.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_15("STRING_1016072065");
    noMDEntries_0_1.set(BenchmarkSecurityIDSource_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityIDSource_15.getString());
    FIX::Spread Spread_15;
    Spread_15.setString("10609800");
    noMDEntries_0_1.set(Spread_15);
    SpreadOrBenchmarkCurveData_15.insert(Spread_15.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_15);

    // YieldData
    multiset<string> YieldData_10;
    FIX::Yield Yield_10;
    Yield_10.setString("70.220000");
    noMDEntries_0_1.set(Yield_10);
    YieldData_10.insert(Yield_10.getString());
    FIX::YieldCalcDate YieldCalcDate_10("LOCALMKTDATE_150055004");
    noMDEntries_0_1.set(YieldCalcDate_10);
    YieldData_10.insert(YieldCalcDate_10.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_10("LOCALMKTDATE_1900482719");
    noMDEntries_0_1.set(YieldRedemptionDate_10);
    YieldData_10.insert(YieldRedemptionDate_10.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
    YieldRedemptionPrice_10.setString("8117373");
    noMDEntries_0_1.set(YieldRedemptionPrice_10);
    YieldData_10.insert(YieldRedemptionPrice_10.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_10(873718593);
    noMDEntries_0_1.set(YieldRedemptionPriceType_10);
    YieldData_10.insert(YieldRedemptionPriceType_10.getString());
    FIX::YieldType YieldType_10("STRING_NEXTREFUND");
    noMDEntries_0_1.set(YieldType_10);
    YieldData_10.insert(YieldType_10.getString());
    all_values.push_back(YieldData_10);

    msg.addGroup(noMDEntries_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_2;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_2;
    FIX::Currency Currency_30("JPY");
    noMDEntries_0_2.set(Currency_30);
    MDFullGrp_NoMDEntries_2.insert(Currency_30.getString());
    FIX::DealingCapacity DealingCapacity_4('A');
    noMDEntries_0_2.set(DealingCapacity_4);
    MDFullGrp_NoMDEntries_2.insert(DealingCapacity_4.getString());
    FIX::DeskID DeskID_4("STRING_590270386");
    noMDEntries_0_2.set(DeskID_4);
    MDFullGrp_NoMDEntries_2.insert(DeskID_4.getString());
    FIX::EncodedText EncodedText_56("DATA_909466738");
    noMDEntries_0_2.set(EncodedText_56);
    MDFullGrp_NoMDEntries_2.insert(EncodedText_56.getString());
    FIX::EncodedTextLen EncodedTextLen_56(1548130166);
    noMDEntries_0_2.set(EncodedTextLen_56);
    MDFullGrp_NoMDEntries_2.insert(EncodedTextLen_56.getString());
    FIX::ExecInst ExecInst_6("MULTIPLECHARVALUE_P");
    noMDEntries_0_2.set(ExecInst_6);
    MDFullGrp_NoMDEntries_2.insert(ExecInst_6.getString());
    FIX::ExpireDate ExpireDate_7("LOCALMKTDATE_1617786632");
    noMDEntries_0_2.set(ExpireDate_7);
    MDFullGrp_NoMDEntries_2.insert(ExpireDate_7.getString());
    FIX::ExpireTime ExpireTime_8(FIX::UTCTIMESTAMP(5, 34, 17, 23, 4, 2009));
    noMDEntries_0_2.set(ExpireTime_8);
    MDFullGrp_NoMDEntries_2.insert(ExpireTime_8.getString());
    FIX::FirstPx FirstPx_4;
    FirstPx_4.setString("10217484");
    noMDEntries_0_2.set(FirstPx_4);
    MDFullGrp_NoMDEntries_2.insert(FirstPx_4.getString());
    FIX::HaltReasonInt HaltReasonInt_4(0);
    noMDEntries_0_2.set(HaltReasonInt_4);
    FIX::HighPx HighPx_4;
    HighPx_4.setString("5624824");
    noMDEntries_0_2.set(HighPx_4);
    MDFullGrp_NoMDEntries_2.insert(HighPx_4.getString());
    FIX::LastPx LastPx_14;
    LastPx_14.setString("3516582");
    noMDEntries_0_2.set(LastPx_14);
    MDFullGrp_NoMDEntries_2.insert(LastPx_14.getString());
    FIX::LocationID LocationID_4("STRING_1905386046");
    noMDEntries_0_2.set(LocationID_4);
    MDFullGrp_NoMDEntries_2.insert(LocationID_4.getString());
    FIX::LotType LotType_17('4');
    noMDEntries_0_2.set(LotType_17);
    MDFullGrp_NoMDEntries_2.insert(LotType_17.getString());
    FIX::LowPx LowPx_4;
    LowPx_4.setString("21267897");
    noMDEntries_0_2.set(LowPx_4);
    MDFullGrp_NoMDEntries_2.insert(LowPx_4.getString());
    FIX::MDEntryBuyer MDEntryBuyer_4("STRING_1545695328");
    noMDEntries_0_2.set(MDEntryBuyer_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryBuyer_4.getString());
    FIX::MDEntryDate MDEntryDate_4(FIX::UTCDATEONLY(2, 7, 2008));
    noMDEntries_0_2.set(MDEntryDate_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryDate_4.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_4;
    MDEntryForwardPoints_4.setString("7932851");
    noMDEntries_0_2.set(MDEntryForwardPoints_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryForwardPoints_4.getString());
    FIX::MDEntryID MDEntryID_4("STRING_769376051");
    noMDEntries_0_2.set(MDEntryID_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryID_4.getString());
    FIX::MDEntryOriginator MDEntryOriginator_4("STRING_1392527309");
    noMDEntries_0_2.set(MDEntryOriginator_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryOriginator_4.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_4(514498333);
    noMDEntries_0_2.set(MDEntryPositionNo_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryPositionNo_4.getString());
    FIX::MDEntryPx MDEntryPx_4;
    MDEntryPx_4.setString("11857936");
    noMDEntries_0_2.set(MDEntryPx_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryPx_4.getString());
    FIX::MDEntrySeller MDEntrySeller_4("STRING_576041575");
    noMDEntries_0_2.set(MDEntrySeller_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntrySeller_4.getString());
    FIX::MDEntrySize MDEntrySize_6;
    MDEntrySize_6.setString("5603001");
    noMDEntries_0_2.set(MDEntrySize_6);
    MDFullGrp_NoMDEntries_2.insert(MDEntrySize_6.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_4;
    MDEntrySpotRate_4.setString("17760640");
    noMDEntries_0_2.set(MDEntrySpotRate_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntrySpotRate_4.getString());
    FIX::MDEntryTime MDEntryTime_4(FIX::UTCTIMEONLY(9, 23, 18));
    noMDEntries_0_2.set(MDEntryTime_4);
    MDFullGrp_NoMDEntries_2.insert(MDEntryTime_4.getString());
    FIX::MDEntryType MDEntryType_7('A');
    noMDEntries_0_2.set(MDEntryType_7);
    MDFullGrp_NoMDEntries_2.insert(MDEntryType_7.getString());
    FIX::MDMkt MDMkt_4("EXCHANGE_231004904");
    noMDEntries_0_2.set(MDMkt_4);
    MDFullGrp_NoMDEntries_2.insert(MDMkt_4.getString());
    FIX::MDOriginType MDOriginType_4(2);
    noMDEntries_0_2.set(MDOriginType_4);
    MDFullGrp_NoMDEntries_2.insert(MDOriginType_4.getString());
    FIX::MDPriceLevel MDPriceLevel_4(1636507168);
    noMDEntries_0_2.set(MDPriceLevel_4);
    MDFullGrp_NoMDEntries_2.insert(MDPriceLevel_4.getString());
    FIX::MDQuoteType MDQuoteType_5(1);
    noMDEntries_0_2.set(MDQuoteType_5);
    MDFullGrp_NoMDEntries_2.insert(MDQuoteType_5.getString());
    FIX::MinQty MinQty_6;
    MinQty_6.setString("3003276");
    noMDEntries_0_2.set(MinQty_6);
    MDFullGrp_NoMDEntries_2.insert(MinQty_6.getString());
    FIX::NumberOfOrders NumberOfOrders_4(1611160511);
    noMDEntries_0_2.set(NumberOfOrders_4);
    MDFullGrp_NoMDEntries_2.insert(NumberOfOrders_4.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_5("MULTIPLECHARVALUE_5");
    noMDEntries_0_2.set(OpenCloseSettlFlag_5);
    MDFullGrp_NoMDEntries_2.insert(OpenCloseSettlFlag_5.getString());
    FIX::OrdType OrdType_27('P');
    noMDEntries_0_2.set(OrdType_27);
    MDFullGrp_NoMDEntries_2.insert(OrdType_27.getString());
    FIX::OrderCapacity OrderCapacity_8('R');
    noMDEntries_0_2.set(OrderCapacity_8);
    MDFullGrp_NoMDEntries_2.insert(OrderCapacity_8.getString());
    FIX::OrderID OrderID_27("STRING_524461274");
    noMDEntries_0_2.set(OrderID_27);
    MDFullGrp_NoMDEntries_2.insert(OrderID_27.getString());
    FIX::PriceDelta PriceDelta_5;
    PriceDelta_5.setString("13492819");
    noMDEntries_0_2.set(PriceDelta_5);
    MDFullGrp_NoMDEntries_2.insert(PriceDelta_5.getString());
    FIX::PriceType PriceType_25(19);
    noMDEntries_0_2.set(PriceType_25);
    MDFullGrp_NoMDEntries_2.insert(PriceType_25.getString());
    FIX::QuoteCondition QuoteCondition_4("MULTIPLESTRINGVALUE_K");
    noMDEntries_0_2.set(QuoteCondition_4);
    MDFullGrp_NoMDEntries_2.insert(QuoteCondition_4.getString());
    FIX::QuoteEntryID QuoteEntryID_4("STRING_747493596");
    noMDEntries_0_2.set(QuoteEntryID_4);
    MDFullGrp_NoMDEntries_2.insert(QuoteEntryID_4.getString());
    FIX::RptSeq RptSeq_5(1895078309);
    noMDEntries_0_2.set(RptSeq_5);
    MDFullGrp_NoMDEntries_2.insert(RptSeq_5.getString());
    FIX::Scope Scope_5("MULTIPLECHARVALUE_3");
    noMDEntries_0_2.set(Scope_5);
    MDFullGrp_NoMDEntries_2.insert(Scope_5.getString());
    FIX::SecondaryOrderID SecondaryOrderID_21("STRING_705132298");
    noMDEntries_0_2.set(SecondaryOrderID_21);
    MDFullGrp_NoMDEntries_2.insert(SecondaryOrderID_21.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_4(3);
    noMDEntries_0_2.set(SecurityTradingStatus_4);
    MDFullGrp_NoMDEntries_2.insert(SecurityTradingStatus_4.getString());
    FIX::SellerDays SellerDays_4(189854903);
    noMDEntries_0_2.set(SellerDays_4);
    MDFullGrp_NoMDEntries_2.insert(SellerDays_4.getString());
    FIX::SettlCurrency SettlCurrency_13("JPY");
    noMDEntries_0_2.set(SettlCurrency_13);
    MDFullGrp_NoMDEntries_2.insert(SettlCurrency_13.getString());
    FIX::SettlDate SettlDate_24("LOCALMKTDATE_704353236");
    noMDEntries_0_2.set(SettlDate_24);
    MDFullGrp_NoMDEntries_2.insert(SettlDate_24.getString());
    FIX::SettlType SettlType_18("STRING_9");
    noMDEntries_0_2.set(SettlType_18);
    MDFullGrp_NoMDEntries_2.insert(SettlType_18.getString());
    FIX::Text Text_56("STRING_87488613");
    noMDEntries_0_2.set(Text_56);
    MDFullGrp_NoMDEntries_2.insert(Text_56.getString());
    FIX::TickDirection TickDirection_4('0');
    noMDEntries_0_2.set(TickDirection_4);
    MDFullGrp_NoMDEntries_2.insert(TickDirection_4.getString());
    FIX::TimeInForce TimeInForce_23('7');
    noMDEntries_0_2.set(TimeInForce_23);
    MDFullGrp_NoMDEntries_2.insert(TimeInForce_23.getString());
    FIX::TradeCondition TradeCondition_4("MULTIPLESTRINGVALUE_p");
    noMDEntries_0_2.set(TradeCondition_4);
    MDFullGrp_NoMDEntries_2.insert(TradeCondition_4.getString());
    FIX::TradeVolume TradeVolume_4;
    TradeVolume_4.setString("12256000");
    noMDEntries_0_2.set(TradeVolume_4);
    MDFullGrp_NoMDEntries_2.insert(TradeVolume_4.getString());
    FIX::TradingSessionID TradingSessionID_36("STRING_1");
    noMDEntries_0_2.set(TradingSessionID_36);
    MDFullGrp_NoMDEntries_2.insert(TradingSessionID_36.getString());
    FIX::TradingSessionSubID TradingSessionSubID_36("STRING_5");
    noMDEntries_0_2.set(TradingSessionSubID_36);
    MDFullGrp_NoMDEntries_2.insert(TradingSessionSubID_36.getString());
    FIX::TrdType TrdType_7(20);
    noMDEntries_0_2.set(TrdType_7);
    MDFullGrp_NoMDEntries_2.insert(TrdType_7.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_2);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_66;
      FIX::PartyID PartyID_66("STRING_729388822");
      noPartyIDs_2_1_0.set(PartyID_66);
      Parties_NoPartyIDs_66.insert(PartyID_66.getString());
      FIX::PartyIDSource PartyIDSource_66('A');
      noPartyIDs_2_1_0.set(PartyIDSource_66);
      Parties_NoPartyIDs_66.insert(PartyIDSource_66.getString());
      FIX::PartyRole PartyRole_66(80);
      noPartyIDs_2_1_0.set(PartyRole_66);
      Parties_NoPartyIDs_66.insert(PartyRole_66.getString());
      all_values.push_back(Parties_NoPartyIDs_66);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_138;
        FIX::PartySubID PartySubID_138("STRING_1158788311");
        noPartySubIDs_2_0_2_0.set(PartySubID_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubID_138.getString());
        FIX::PartySubIDType PartySubIDType_138(10);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_138);
        PtysSubGrp_NoPartySubIDs_138.insert(PartySubIDType_138.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_138);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_139;
        FIX::PartySubID PartySubID_139("STRING_473612356");
        noPartySubIDs_2_0_2_1.set(PartySubID_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubID_139.getString());
        FIX::PartySubIDType PartySubIDType_139(15);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubIDType_139.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_139);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_140;
        FIX::PartySubID PartySubID_140("STRING_1346101784");
        noPartySubIDs_2_0_2_2.set(PartySubID_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubID_140.getString());
        FIX::PartySubIDType PartySubIDType_140(13);
        noPartySubIDs_2_0_2_2.set(PartySubIDType_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubIDType_140.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_140);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noMDEntries_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_13;
      FIX::RateSource RateSource_21(99);
      noRateSources_2_1_0.set(RateSource_21);
      RateSource_NoRateSources_13.insert(RateSource_21.getString());
      FIX::RateSourceType RateSourceType_13(0);
      noRateSources_2_1_0.set(RateSourceType_13);
      RateSource_NoRateSources_13.insert(RateSourceType_13.getString());
      FIX::ReferencePage ReferencePage_13("STRING_311383223");
      noRateSources_2_1_0.set(ReferencePage_13);
      RateSource_NoRateSources_13.insert(ReferencePage_13.getString());
      all_values.push_back(RateSource_NoRateSources_13);

      noMDEntries_0_2.addGroup(noRateSources_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_14;
      FIX::RateSource RateSource_22(1);
      noRateSources_2_1_1.set(RateSource_22);
      RateSource_NoRateSources_14.insert(RateSource_22.getString());
      FIX::RateSourceType RateSourceType_14(0);
      noRateSources_2_1_1.set(RateSourceType_14);
      RateSource_NoRateSources_14.insert(RateSourceType_14.getString());
      FIX::ReferencePage ReferencePage_14("STRING_577786600");
      noRateSources_2_1_1.set(ReferencePage_14);
      RateSource_NoRateSources_14.insert(ReferencePage_14.getString());
      all_values.push_back(RateSource_NoRateSources_14);

      noMDEntries_0_2.addGroup(noRateSources_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_15;
      FIX::RateSource RateSource_23(1);
      noRateSources_2_1_2.set(RateSource_23);
      RateSource_NoRateSources_15.insert(RateSource_23.getString());
      FIX::RateSourceType RateSourceType_15(1);
      noRateSources_2_1_2.set(RateSourceType_15);
      RateSource_NoRateSources_15.insert(RateSourceType_15.getString());
      FIX::ReferencePage ReferencePage_15("STRING_89233638");
      noRateSources_2_1_2.set(ReferencePage_15);
      RateSource_NoRateSources_15.insert(ReferencePage_15.getString());
      all_values.push_back(RateSource_NoRateSources_15);

      noMDEntries_0_2.addGroup(noRateSources_2_1_2);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_10;
      FIX::MDSecSize MDSecSize_10;
      MDSecSize_10.setString("9678795");
      noOfSecSizes_2_1_0.set(MDSecSize_10);
      SecSizesGrp_NoOfSecSizes_10.insert(MDSecSize_10.getString());
      FIX::MDSecSizeType MDSecSizeType_10(1);
      noOfSecSizes_2_1_0.set(MDSecSizeType_10);
      SecSizesGrp_NoOfSecSizes_10.insert(MDSecSizeType_10.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_10);

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_11;
      FIX::MDSecSize MDSecSize_11;
      MDSecSize_11.setString("12578167");
      noOfSecSizes_2_1_1.set(MDSecSize_11);
      SecSizesGrp_NoOfSecSizes_11.insert(MDSecSize_11.getString());
      FIX::MDSecSizeType MDSecSizeType_11(1);
      noOfSecSizes_2_1_1.set(MDSecSizeType_11);
      SecSizesGrp_NoOfSecSizes_11.insert(MDSecSizeType_11.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_11);

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_16;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_16("CHF");
    noMDEntries_0_2.set(BenchmarkCurveCurrency_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveCurrency_16.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_16("STRING_MuniAAA");
    noMDEntries_0_2.set(BenchmarkCurveName_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveName_16.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_16("STRING_2131043757");
    noMDEntries_0_2.set(BenchmarkCurvePoint_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurvePoint_16.getString());
    FIX::BenchmarkPrice BenchmarkPrice_16;
    BenchmarkPrice_16.setString("3945373");
    noMDEntries_0_2.set(BenchmarkPrice_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPrice_16.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_16(1726355709);
    noMDEntries_0_2.set(BenchmarkPriceType_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPriceType_16.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_16("STRING_712948931");
    noMDEntries_0_2.set(BenchmarkSecurityID_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityID_16.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_16("STRING_2089648831");
    noMDEntries_0_2.set(BenchmarkSecurityIDSource_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityIDSource_16.getString());
    FIX::Spread Spread_16;
    Spread_16.setString("2277095");
    noMDEntries_0_2.set(Spread_16);
    SpreadOrBenchmarkCurveData_16.insert(Spread_16.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_16);

    // YieldData
    multiset<string> YieldData_11;
    FIX::Yield Yield_11;
    Yield_11.setString("54.170000");
    noMDEntries_0_2.set(Yield_11);
    YieldData_11.insert(Yield_11.getString());
    FIX::YieldCalcDate YieldCalcDate_11("LOCALMKTDATE_1100953494");
    noMDEntries_0_2.set(YieldCalcDate_11);
    YieldData_11.insert(YieldCalcDate_11.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_11("LOCALMKTDATE_1049350069");
    noMDEntries_0_2.set(YieldRedemptionDate_11);
    YieldData_11.insert(YieldRedemptionDate_11.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
    YieldRedemptionPrice_11.setString("687941");
    noMDEntries_0_2.set(YieldRedemptionPrice_11);
    YieldData_11.insert(YieldRedemptionPrice_11.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_11(138417460);
    noMDEntries_0_2.set(YieldRedemptionPriceType_11);
    YieldData_11.insert(YieldRedemptionPriceType_11.getString());
    FIX::YieldType YieldType_11("STRING_LASTYEAR");
    noMDEntries_0_2.set(YieldType_11);
    YieldData_11.insert(YieldType_11.getString());
    all_values.push_back(YieldData_11);

    msg.addGroup(noMDEntries_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    FIX::RoutingID RoutingID_5("STRING_702206022");
    noRoutingIDs_0_0.set(RoutingID_5);
    RoutingGrp_NoRoutingIDs_5.insert(RoutingID_5.getString());
    FIX::RoutingType RoutingType_5(2);
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
    multiset<string> UnderlyingInstrument_52;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_52("DATA_1013589246");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuer_52.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_52(1196792546);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuerLen_52.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_52("DATA_1295145487");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDesc_52.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_52(1591375846);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDescLen_52.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
    UnderlyingAdjustedQuantity_52.setString("4856026");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_52);
    UnderlyingInstrument_52.insert(UnderlyingAdjustedQuantity_52.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
    UnderlyingAllocationPercent_52.setString("67.060000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_52);
    UnderlyingInstrument_52.insert(UnderlyingAllocationPercent_52.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
    UnderlyingAttachmentPoint_52.setString("94.850000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingAttachmentPoint_52.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_52("STRING_478766041");
    noUnderlyings_0_0.set(UnderlyingCFICode_52);
    UnderlyingInstrument_52.insert(UnderlyingCFICode_52.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_52("STRING_570602643");
    noUnderlyings_0_0.set(UnderlyingCPProgram_52);
    UnderlyingInstrument_52.insert(UnderlyingCPProgram_52.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_52("STRING_1857331737");
    noUnderlyings_0_0.set(UnderlyingCPRegType_52);
    UnderlyingInstrument_52.insert(UnderlyingCPRegType_52.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_52;
    UnderlyingCapValue_52.setString("17365827");
    noUnderlyings_0_0.set(UnderlyingCapValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCapValue_52.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
    UnderlyingCashAmount_52.setString("16798809");
    noUnderlyings_0_0.set(UnderlyingCashAmount_52);
    UnderlyingInstrument_52.insert(UnderlyingCashAmount_52.getString());
    FIX::UnderlyingCashType UnderlyingCashType_52("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_52);
    UnderlyingInstrument_52.insert(UnderlyingCashType_52.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
    UnderlyingContractMultiplier_52.setString("20725158");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplier_52.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_52(1908453748);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplierUnit_52.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_52("COUNTRY_1443127377");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingCountryOfIssue_52.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_52("LOCALMKTDATE_319569612");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponPaymentDate_52.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
    UnderlyingCouponRate_52.setString("58.090000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponRate_52.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_52("STRING_8592660");
    noUnderlyings_0_0.set(UnderlyingCreditRating_52);
    UnderlyingInstrument_52.insert(UnderlyingCreditRating_52.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_52("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrency_52.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
    UnderlyingCurrentValue_52.setString("17512580");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrentValue_52.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
    UnderlyingDetachmentPoint_52.setString("82.900000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingDetachmentPoint_52.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
    UnderlyingDirtyPrice_52.setString("6169017");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingDirtyPrice_52.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
    UnderlyingEndPrice_52.setString("18200522");
    noUnderlyings_0_0.set(UnderlyingEndPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingEndPrice_52.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_52;
    UnderlyingEndValue_52.setString("15011057");
    noUnderlyings_0_0.set(UnderlyingEndValue_52);
    UnderlyingInstrument_52.insert(UnderlyingEndValue_52.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_52(864869996);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_52);
    UnderlyingInstrument_52.insert(UnderlyingExerciseStyle_52.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_52;
    UnderlyingFXRate_52.setString("15642569");
    noUnderlyings_0_0.set(UnderlyingFXRate_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRate_52.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_52('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRateCalc_52.getString());
    FIX::UnderlyingFactor UnderlyingFactor_52;
    UnderlyingFactor_52.setString("8152236");
    noUnderlyings_0_0.set(UnderlyingFactor_52);
    UnderlyingInstrument_52.insert(UnderlyingFactor_52.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_52(1731365920);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_52);
    UnderlyingInstrument_52.insert(UnderlyingFlowScheduleType_52.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_52("STRING_1069417370");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_52);
    UnderlyingInstrument_52.insert(UnderlyingInstrRegistry_52.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_52("LOCALMKTDATE_2012016215");
    noUnderlyings_0_0.set(UnderlyingIssueDate_52);
    UnderlyingInstrument_52.insert(UnderlyingIssueDate_52.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_52("STRING_879027759");
    noUnderlyings_0_0.set(UnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(UnderlyingIssuer_52.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_52("STRING_513309569");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingLocaleOfIssue_52.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_52("LOCALMKTDATE_350135243");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityDate_52.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_52("MONTHYEAR_481750818");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityMonthYear_52.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_52("TZTIMEONLY_46435406");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityTime_52.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
    UnderlyingNotionalPercentageOutstanding_52.setString("12.840000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_52('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_52);
    UnderlyingInstrument_52.insert(UnderlyingOptAttribute_52.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
    UnderlyingOriginalNotionalPercentageOutstanding_52.setString("71.430000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingOriginalNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_52("STRING_418000410");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasure_52.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
    UnderlyingPriceUnitOfMeasureQty_52.setString("5847508");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasureQty_52.getString());
    FIX::UnderlyingProduct UnderlyingProduct_52(1215850763);
    noUnderlyings_0_0.set(UnderlyingProduct_52);
    UnderlyingInstrument_52.insert(UnderlyingProduct_52.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_52(343032640);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_52);
    UnderlyingInstrument_52.insert(UnderlyingPutOrCall_52.getString());
    FIX::UnderlyingPx UnderlyingPx_52;
    UnderlyingPx_52.setString("3457209");
    noUnderlyings_0_0.set(UnderlyingPx_52);
    UnderlyingInstrument_52.insert(UnderlyingPx_52.getString());
    FIX::UnderlyingQty UnderlyingQty_52;
    UnderlyingQty_52.setString("5114944");
    noUnderlyings_0_0.set(UnderlyingQty_52);
    UnderlyingInstrument_52.insert(UnderlyingQty_52.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_52("LOCALMKTDATE_662602252");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_52);
    UnderlyingInstrument_52.insert(UnderlyingRedemptionDate_52.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_52("STRING_1833046717");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingRepoCollateralSecurityType_52.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
    UnderlyingRepurchaseRate_52.setString("71.530000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseRate_52.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_52(924337048);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseTerm_52.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_52("STRING_1400598438");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_52);
    UnderlyingInstrument_52.insert(UnderlyingRestructuringType_52.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_52("STRING_123861583");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityDesc_52.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_52("EXCHANGE_139541690");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityExchange_52.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_52("STRING_2017500229");
    noUnderlyings_0_0.set(UnderlyingSecurityID_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityID_52.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_52("STRING_1943913785");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityIDSource_52.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_52("STRING_1640647440");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecuritySubType_52.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_52("STRING_734886577");
    noUnderlyings_0_0.set(UnderlyingSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityType_52.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_52("STRING_1360687089");
    noUnderlyings_0_0.set(UnderlyingSeniority_52);
    UnderlyingInstrument_52.insert(UnderlyingSeniority_52.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_52("STRING_1696475564");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlMethod_52.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_52(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlementType_52.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_52;
    UnderlyingStartValue_52.setString("9445693");
    noUnderlyings_0_0.set(UnderlyingStartValue_52);
    UnderlyingInstrument_52.insert(UnderlyingStartValue_52.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_52("STRING_618409287");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingStateOrProvinceOfIssue_52.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_52("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikeCurrency_52.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
    UnderlyingStrikePrice_52.setString("11317188");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikePrice_52.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_52("STRING_1764778056");
    noUnderlyings_0_0.set(UnderlyingSymbol_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbol_52.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_52("STRING_157864291");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbolSfx_52.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_52("STRING_1178154262");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingTimeUnit_52.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_52("STRING_446195692");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasure_52.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
    UnderlyingUnitOfMeasureQty_52.setString("12102177");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasureQty_52.getString());
    all_values.push_back(UnderlyingInstrument_52);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_107("STRING_864196103");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltID_107.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_107("STRING_1794968559");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltIDSource_107.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_108("STRING_2804872");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltID_108.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_108("STRING_1207228743");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltIDSource_108.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
      FIX::UnderlyingStipType UnderlyingStipType_100("STRING_514299365");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_100);
      UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipType_100.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_100("STRING_1869830995");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_100);
      UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipValue_100.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
      FIX::UnderlyingStipType UnderlyingStipType_101("STRING_1826252537");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipType_101.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_101("STRING_1034386519");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipValue_101.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
      FIX::UnderlyingStipType UnderlyingStipType_102("STRING_646684395");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipType_102.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_102("STRING_1079367327");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipValue_102.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_114("STRING_786226085");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyID_114.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_114('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyIDSource_114.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_114(954678239);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyRole_114.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_235("STRING_1684270485");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubID_235.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_235(167881680);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubIDType_235.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_115("STRING_1975865442");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyID_115.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_115('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyIDSource_115.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_115(1112451042);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyRole_115.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_236("STRING_354056249");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubID_236.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_236(788564515);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubIDType_236.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_237("STRING_1578509937");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubID_237.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_237(2118834305);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubIDType_237.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_116("STRING_946428806");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyID_116.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_116('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyIDSource_116.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_116(417546350);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyRole_116.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_238("STRING_1543618308");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubID_238.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_238(1281742453);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubIDType_238.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_239("STRING_1804131469");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubID_239.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_239(1546423180);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubIDType_239.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_53;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_53("DATA_341487548");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuer_53.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_53(1797337289);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuerLen_53.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_53("DATA_2060722546");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDesc_53.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_53(63834895);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDescLen_53.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
    UnderlyingAdjustedQuantity_53.setString("14761061");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_53);
    UnderlyingInstrument_53.insert(UnderlyingAdjustedQuantity_53.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
    UnderlyingAllocationPercent_53.setString("54.170000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_53);
    UnderlyingInstrument_53.insert(UnderlyingAllocationPercent_53.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
    UnderlyingAttachmentPoint_53.setString("92.910000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingAttachmentPoint_53.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_53("STRING_407989857");
    noUnderlyings_0_1.set(UnderlyingCFICode_53);
    UnderlyingInstrument_53.insert(UnderlyingCFICode_53.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_53("STRING_2105873519");
    noUnderlyings_0_1.set(UnderlyingCPProgram_53);
    UnderlyingInstrument_53.insert(UnderlyingCPProgram_53.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_53("STRING_1496745376");
    noUnderlyings_0_1.set(UnderlyingCPRegType_53);
    UnderlyingInstrument_53.insert(UnderlyingCPRegType_53.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_53;
    UnderlyingCapValue_53.setString("13573737");
    noUnderlyings_0_1.set(UnderlyingCapValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCapValue_53.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
    UnderlyingCashAmount_53.setString("9130681");
    noUnderlyings_0_1.set(UnderlyingCashAmount_53);
    UnderlyingInstrument_53.insert(UnderlyingCashAmount_53.getString());
    FIX::UnderlyingCashType UnderlyingCashType_53("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_53);
    UnderlyingInstrument_53.insert(UnderlyingCashType_53.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
    UnderlyingContractMultiplier_53.setString("8941606");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplier_53.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_53(1080949791);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplierUnit_53.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_53("COUNTRY_1604517048");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingCountryOfIssue_53.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_53("LOCALMKTDATE_1981057687");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponPaymentDate_53.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
    UnderlyingCouponRate_53.setString("71.850000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponRate_53.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_53("STRING_2051308129");
    noUnderlyings_0_1.set(UnderlyingCreditRating_53);
    UnderlyingInstrument_53.insert(UnderlyingCreditRating_53.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_53("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrency_53.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
    UnderlyingCurrentValue_53.setString("14823344");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrentValue_53.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
    UnderlyingDetachmentPoint_53.setString("9.450000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingDetachmentPoint_53.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
    UnderlyingDirtyPrice_53.setString("17809105");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingDirtyPrice_53.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
    UnderlyingEndPrice_53.setString("20915149");
    noUnderlyings_0_1.set(UnderlyingEndPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingEndPrice_53.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_53;
    UnderlyingEndValue_53.setString("5765272");
    noUnderlyings_0_1.set(UnderlyingEndValue_53);
    UnderlyingInstrument_53.insert(UnderlyingEndValue_53.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_53(1790073416);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_53);
    UnderlyingInstrument_53.insert(UnderlyingExerciseStyle_53.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_53;
    UnderlyingFXRate_53.setString("14876496");
    noUnderlyings_0_1.set(UnderlyingFXRate_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRate_53.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_53('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRateCalc_53.getString());
    FIX::UnderlyingFactor UnderlyingFactor_53;
    UnderlyingFactor_53.setString("14467212");
    noUnderlyings_0_1.set(UnderlyingFactor_53);
    UnderlyingInstrument_53.insert(UnderlyingFactor_53.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_53(886589161);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_53);
    UnderlyingInstrument_53.insert(UnderlyingFlowScheduleType_53.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_53("STRING_52273648");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_53);
    UnderlyingInstrument_53.insert(UnderlyingInstrRegistry_53.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_53("LOCALMKTDATE_1096574878");
    noUnderlyings_0_1.set(UnderlyingIssueDate_53);
    UnderlyingInstrument_53.insert(UnderlyingIssueDate_53.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_53("STRING_799828059");
    noUnderlyings_0_1.set(UnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(UnderlyingIssuer_53.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_53("STRING_116108544");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingLocaleOfIssue_53.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_53("LOCALMKTDATE_425197408");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityDate_53.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_53("MONTHYEAR_1747453476");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityMonthYear_53.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_53("TZTIMEONLY_826627835");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityTime_53.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
    UnderlyingNotionalPercentageOutstanding_53.setString("72.660000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_53('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_53);
    UnderlyingInstrument_53.insert(UnderlyingOptAttribute_53.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
    UnderlyingOriginalNotionalPercentageOutstanding_53.setString("95.630000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingOriginalNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_53("STRING_43077384");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasure_53.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
    UnderlyingPriceUnitOfMeasureQty_53.setString("4714278");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasureQty_53.getString());
    FIX::UnderlyingProduct UnderlyingProduct_53(1952024817);
    noUnderlyings_0_1.set(UnderlyingProduct_53);
    UnderlyingInstrument_53.insert(UnderlyingProduct_53.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_53(937237987);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_53);
    UnderlyingInstrument_53.insert(UnderlyingPutOrCall_53.getString());
    FIX::UnderlyingPx UnderlyingPx_53;
    UnderlyingPx_53.setString("15523776");
    noUnderlyings_0_1.set(UnderlyingPx_53);
    UnderlyingInstrument_53.insert(UnderlyingPx_53.getString());
    FIX::UnderlyingQty UnderlyingQty_53;
    UnderlyingQty_53.setString("14090582");
    noUnderlyings_0_1.set(UnderlyingQty_53);
    UnderlyingInstrument_53.insert(UnderlyingQty_53.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_53("LOCALMKTDATE_770812026");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_53);
    UnderlyingInstrument_53.insert(UnderlyingRedemptionDate_53.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_53("STRING_1598294786");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingRepoCollateralSecurityType_53.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
    UnderlyingRepurchaseRate_53.setString("26.980000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseRate_53.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_53(958442314);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseTerm_53.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_53("STRING_285292838");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_53);
    UnderlyingInstrument_53.insert(UnderlyingRestructuringType_53.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_53("STRING_647733468");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityDesc_53.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_53("EXCHANGE_1117423260");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityExchange_53.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_53("STRING_2066203344");
    noUnderlyings_0_1.set(UnderlyingSecurityID_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityID_53.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_53("STRING_591764789");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityIDSource_53.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_53("STRING_1693950555");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecuritySubType_53.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_53("STRING_1708793112");
    noUnderlyings_0_1.set(UnderlyingSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityType_53.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_53("STRING_2079414418");
    noUnderlyings_0_1.set(UnderlyingSeniority_53);
    UnderlyingInstrument_53.insert(UnderlyingSeniority_53.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_53("STRING_1404736656");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlMethod_53.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_53(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlementType_53.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_53;
    UnderlyingStartValue_53.setString("8185199");
    noUnderlyings_0_1.set(UnderlyingStartValue_53);
    UnderlyingInstrument_53.insert(UnderlyingStartValue_53.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_53("STRING_1457010304");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingStateOrProvinceOfIssue_53.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_53("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikeCurrency_53.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
    UnderlyingStrikePrice_53.setString("15731188");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikePrice_53.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_53("STRING_382319340");
    noUnderlyings_0_1.set(UnderlyingSymbol_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbol_53.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_53("STRING_1218317820");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbolSfx_53.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_53("STRING_252263035");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingTimeUnit_53.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_53("STRING_1215506606");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasure_53.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
    UnderlyingUnitOfMeasureQty_53.setString("7766775");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasureQty_53.getString());
    all_values.push_back(UnderlyingInstrument_53);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_109("STRING_1258583990");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltID_109.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_109("STRING_1248105329");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltIDSource_109.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
      FIX::UnderlyingStipType UnderlyingStipType_103("STRING_48338330");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipType_103.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_103("STRING_652999282");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipValue_103.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
      FIX::UnderlyingStipType UnderlyingStipType_104("STRING_1641751986");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipType_104.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_104("STRING_819150356");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipValue_104.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_117("STRING_807151036");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyID_117.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_117('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyIDSource_117.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_117(389103258);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyRole_117.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_240("STRING_747532283");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubID_240.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_240(307822954);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubIDType_240.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_241("STRING_2046649294");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubID_241.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_241(293999190);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubIDType_241.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_242("STRING_2016616066");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubID_242.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_242(1978580065);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubIDType_242.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_118("STRING_1698735846");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyID_118.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_118('8');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyIDSource_118.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_118(649616349);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyRole_118.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_243("STRING_834285052");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubID_243.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_243(120480692);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubIDType_243.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_54;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_54("DATA_433897703");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuer_54.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_54(1216604392);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuerLen_54.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_54("DATA_1338798512");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDesc_54.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_54(686160739);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDescLen_54.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
    UnderlyingAdjustedQuantity_54.setString("2846273");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_54);
    UnderlyingInstrument_54.insert(UnderlyingAdjustedQuantity_54.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
    UnderlyingAllocationPercent_54.setString("60.320000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_54);
    UnderlyingInstrument_54.insert(UnderlyingAllocationPercent_54.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
    UnderlyingAttachmentPoint_54.setString("33.380000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingAttachmentPoint_54.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_54("STRING_1543211341");
    noUnderlyings_0_2.set(UnderlyingCFICode_54);
    UnderlyingInstrument_54.insert(UnderlyingCFICode_54.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_54("STRING_1216097713");
    noUnderlyings_0_2.set(UnderlyingCPProgram_54);
    UnderlyingInstrument_54.insert(UnderlyingCPProgram_54.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_54("STRING_1347007106");
    noUnderlyings_0_2.set(UnderlyingCPRegType_54);
    UnderlyingInstrument_54.insert(UnderlyingCPRegType_54.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_54;
    UnderlyingCapValue_54.setString("15915496");
    noUnderlyings_0_2.set(UnderlyingCapValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCapValue_54.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
    UnderlyingCashAmount_54.setString("18690969");
    noUnderlyings_0_2.set(UnderlyingCashAmount_54);
    UnderlyingInstrument_54.insert(UnderlyingCashAmount_54.getString());
    FIX::UnderlyingCashType UnderlyingCashType_54("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_54);
    UnderlyingInstrument_54.insert(UnderlyingCashType_54.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
    UnderlyingContractMultiplier_54.setString("2632163");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplier_54.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_54(1972907416);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplierUnit_54.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_54("COUNTRY_1648426481");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingCountryOfIssue_54.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_54("LOCALMKTDATE_2040809051");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponPaymentDate_54.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
    UnderlyingCouponRate_54.setString("70.270000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponRate_54.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_54("STRING_955827338");
    noUnderlyings_0_2.set(UnderlyingCreditRating_54);
    UnderlyingInstrument_54.insert(UnderlyingCreditRating_54.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_54("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrency_54.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
    UnderlyingCurrentValue_54.setString("8549929");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrentValue_54.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
    UnderlyingDetachmentPoint_54.setString("68.760000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingDetachmentPoint_54.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
    UnderlyingDirtyPrice_54.setString("3914824");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingDirtyPrice_54.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
    UnderlyingEndPrice_54.setString("6860894");
    noUnderlyings_0_2.set(UnderlyingEndPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingEndPrice_54.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_54;
    UnderlyingEndValue_54.setString("4861090");
    noUnderlyings_0_2.set(UnderlyingEndValue_54);
    UnderlyingInstrument_54.insert(UnderlyingEndValue_54.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_54(1268645520);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_54);
    UnderlyingInstrument_54.insert(UnderlyingExerciseStyle_54.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_54;
    UnderlyingFXRate_54.setString("13357057");
    noUnderlyings_0_2.set(UnderlyingFXRate_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRate_54.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_54('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRateCalc_54.getString());
    FIX::UnderlyingFactor UnderlyingFactor_54;
    UnderlyingFactor_54.setString("21029305");
    noUnderlyings_0_2.set(UnderlyingFactor_54);
    UnderlyingInstrument_54.insert(UnderlyingFactor_54.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_54(1456186443);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_54);
    UnderlyingInstrument_54.insert(UnderlyingFlowScheduleType_54.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_54("STRING_1928269281");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_54);
    UnderlyingInstrument_54.insert(UnderlyingInstrRegistry_54.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_54("LOCALMKTDATE_1172051316");
    noUnderlyings_0_2.set(UnderlyingIssueDate_54);
    UnderlyingInstrument_54.insert(UnderlyingIssueDate_54.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_54("STRING_647501307");
    noUnderlyings_0_2.set(UnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(UnderlyingIssuer_54.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_54("STRING_466946372");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingLocaleOfIssue_54.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_54("LOCALMKTDATE_1456678667");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityDate_54.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_54("MONTHYEAR_615493691");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityMonthYear_54.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_54("TZTIMEONLY_1581259710");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityTime_54.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
    UnderlyingNotionalPercentageOutstanding_54.setString("63.610000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_54('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_54);
    UnderlyingInstrument_54.insert(UnderlyingOptAttribute_54.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
    UnderlyingOriginalNotionalPercentageOutstanding_54.setString("31.690000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingOriginalNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_54("STRING_296472384");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasure_54.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
    UnderlyingPriceUnitOfMeasureQty_54.setString("15532047");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasureQty_54.getString());
    FIX::UnderlyingProduct UnderlyingProduct_54(1622058613);
    noUnderlyings_0_2.set(UnderlyingProduct_54);
    UnderlyingInstrument_54.insert(UnderlyingProduct_54.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_54(559688764);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_54);
    UnderlyingInstrument_54.insert(UnderlyingPutOrCall_54.getString());
    FIX::UnderlyingPx UnderlyingPx_54;
    UnderlyingPx_54.setString("13786285");
    noUnderlyings_0_2.set(UnderlyingPx_54);
    UnderlyingInstrument_54.insert(UnderlyingPx_54.getString());
    FIX::UnderlyingQty UnderlyingQty_54;
    UnderlyingQty_54.setString("11230014");
    noUnderlyings_0_2.set(UnderlyingQty_54);
    UnderlyingInstrument_54.insert(UnderlyingQty_54.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_54("LOCALMKTDATE_453014167");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_54);
    UnderlyingInstrument_54.insert(UnderlyingRedemptionDate_54.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_54("STRING_1593155548");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingRepoCollateralSecurityType_54.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
    UnderlyingRepurchaseRate_54.setString("87.840000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseRate_54.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_54(1093871853);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseTerm_54.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_54("STRING_2115505530");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_54);
    UnderlyingInstrument_54.insert(UnderlyingRestructuringType_54.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_54("STRING_786338121");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityDesc_54.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_54("EXCHANGE_2028728730");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityExchange_54.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_54("STRING_359504282");
    noUnderlyings_0_2.set(UnderlyingSecurityID_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityID_54.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_54("STRING_1472427522");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityIDSource_54.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_54("STRING_367354157");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecuritySubType_54.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_54("STRING_1628149802");
    noUnderlyings_0_2.set(UnderlyingSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityType_54.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_54("STRING_660649625");
    noUnderlyings_0_2.set(UnderlyingSeniority_54);
    UnderlyingInstrument_54.insert(UnderlyingSeniority_54.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_54("STRING_1861725735");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlMethod_54.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_54(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlementType_54.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_54;
    UnderlyingStartValue_54.setString("21168360");
    noUnderlyings_0_2.set(UnderlyingStartValue_54);
    UnderlyingInstrument_54.insert(UnderlyingStartValue_54.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_54("STRING_1642511368");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingStateOrProvinceOfIssue_54.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_54("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikeCurrency_54.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
    UnderlyingStrikePrice_54.setString("21094577");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikePrice_54.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_54("STRING_2064843062");
    noUnderlyings_0_2.set(UnderlyingSymbol_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbol_54.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_54("STRING_1232347419");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbolSfx_54.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_54("STRING_1543233803");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingTimeUnit_54.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_54("STRING_769765775");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasure_54.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
    UnderlyingUnitOfMeasureQty_54.setString("9164551");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasureQty_54.getString());
    all_values.push_back(UnderlyingInstrument_54);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_110("STRING_1066238159");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltID_110.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_110("STRING_322176281");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltIDSource_110.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_111("STRING_1798591938");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltID_111.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_111("STRING_1625926924");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltIDSource_111.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
      FIX::UnderlyingStipType UnderlyingStipType_105("STRING_774109736");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipType_105.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_105("STRING_2078941091");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipValue_105.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_119("STRING_705454873");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyID_119.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_119('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyIDSource_119.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_119(1114498585);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyRole_119.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_244("STRING_906574379");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubID_244.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_244(1474002867);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubIDType_244.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_245("STRING_816736868");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubID_245.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_245(1273928536);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubIDType_245.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
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
