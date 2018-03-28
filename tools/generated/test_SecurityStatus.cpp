#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatus, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatus msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityStatus_79;
  FIX::Adjustment Adjustment_0(3);
  msg.set(Adjustment_0);
  SecurityStatus_79.insert(Adjustment_0.getString());
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("9845634");
  msg.set(BuyVolume_0);
  SecurityStatus_79.insert(BuyVolume_0.getString());
  FIX::CorporateAction CorporateAction_11("MULTIPLECHARVALUE_O");
  msg.set(CorporateAction_11);
  SecurityStatus_79.insert(CorporateAction_11.getString());
  FIX::Currency Currency_63("CAN");
  msg.set(Currency_63);
  SecurityStatus_79.insert(Currency_63.getString());
  FIX::DueToRelated DueToRelated_0(true);
  msg.set(DueToRelated_0);
  SecurityStatus_79.insert(DueToRelated_0.getString());
  FIX::EncodedText EncodedText_92("DATA_1090165201");
  msg.set(EncodedText_92);
  SecurityStatus_79.insert(EncodedText_92.getString());
  FIX::EncodedTextLen EncodedTextLen_92(329003621);
  msg.set(EncodedTextLen_92);
  SecurityStatus_79.insert(EncodedTextLen_92.getString());
  FIX::FinancialStatus FinancialStatus_5("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_5);
  SecurityStatus_79.insert(FinancialStatus_5.getString());
  FIX::FirstPx FirstPx_5;
  FirstPx_5.setString("4643105");
  msg.set(FirstPx_5);
  SecurityStatus_79.insert(FirstPx_5.getString());
  FIX::HaltReasonInt HaltReasonInt_5(5);
  msg.set(HaltReasonInt_5);
  FIX::HighPx HighPx_5;
  HighPx_5.setString("20028666");
  msg.set(HighPx_5);
  SecurityStatus_79.insert(HighPx_5.getString());
  FIX::InViewOfCommon InViewOfCommon_0(true);
  msg.set(InViewOfCommon_0);
  SecurityStatus_79.insert(InViewOfCommon_0.getString());
  FIX::LastPx LastPx_15;
  LastPx_15.setString("9101345");
  msg.set(LastPx_15);
  SecurityStatus_79.insert(LastPx_15.getString());
  FIX::LowPx LowPx_5;
  LowPx_5.setString("17091953");
  msg.set(LowPx_5);
  SecurityStatus_79.insert(LowPx_5.getString());
  FIX::MDBookType MDBookType_39(2);
  msg.set(MDBookType_39);
  SecurityStatus_79.insert(MDBookType_39.getString());
  FIX::MarketDepth MarketDepth_41(613712275);
  msg.set(MarketDepth_41);
  SecurityStatus_79.insert(MarketDepth_41.getString());
  FIX::MarketID MarketID_20("EXCHANGE_1479011705");
  msg.set(MarketID_20);
  SecurityStatus_79.insert(MarketID_20.getString());
  FIX::MarketSegmentID MarketSegmentID_20("STRING_1643446372");
  msg.set(MarketSegmentID_20);
  SecurityStatus_79.insert(MarketSegmentID_20.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_0("STRING_1761849981");
  msg.set(SecurityStatusReqID_0);
  SecurityStatus_79.insert(SecurityStatusReqID_0.getString());
  FIX::SecurityTradingEvent SecurityTradingEvent_0(6);
  msg.set(SecurityTradingEvent_0);
  SecurityStatus_79.insert(SecurityTradingEvent_0.getString());
  FIX::SecurityTradingStatus SecurityTradingStatus_5(1);
  msg.set(SecurityTradingStatus_5);
  SecurityStatus_79.insert(SecurityTradingStatus_5.getString());
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("11081931");
  msg.set(SellVolume_0);
  SecurityStatus_79.insert(SellVolume_0.getString());
  FIX::Text Text_92("STRING_599347655");
  msg.set(Text_92);
  SecurityStatus_79.insert(Text_92.getString());
  FIX::TradingSessionID TradingSessionID_88("STRING_5");
  msg.set(TradingSessionID_88);
  SecurityStatus_79.insert(TradingSessionID_88.getString());
  FIX::TradingSessionSubID TradingSessionSubID_88("STRING_1");
  msg.set(TradingSessionSubID_88);
  SecurityStatus_79.insert(TradingSessionSubID_88.getString());
  FIX::TransactTime TransactTime_59(FIX::UTCTIMESTAMP(10, 30, 22, 7, 3, 2012));
  msg.set(TransactTime_59);
  SecurityStatus_79.insert(TransactTime_59.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_2(true);
  msg.set(UnsolicitedIndicator_2);
  SecurityStatus_79.insert(UnsolicitedIndicator_2.getString());
  all_values.push_back(SecurityStatus_79);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  FIX::ApplID ApplID_16("STRING_195675530");
  msg.set(ApplID_16);
  ApplicationSequenceControl_16.insert(ApplID_16.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_16(66086829);
  msg.set(ApplLastSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplLastSeqNum_16.getString());
  FIX::ApplResendFlag ApplResendFlag_16(true);
  msg.set(ApplResendFlag_16);
  ApplicationSequenceControl_16.insert(ApplResendFlag_16.getString());
  FIX::ApplSeqNum ApplSeqNum_16(1285840731);
  msg.set(ApplSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplSeqNum_16.getString());
  all_values.push_back(ApplicationSequenceControl_16);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_129;
    FIX::EncodedLegIssuer EncodedLegIssuer_129("DATA_752860318");
    noLegs_0_0.set(EncodedLegIssuer_129);
    InstrumentLeg_129.insert(EncodedLegIssuer_129.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_129(1750151299);
    noLegs_0_0.set(EncodedLegIssuerLen_129);
    InstrumentLeg_129.insert(EncodedLegIssuerLen_129.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_129("DATA_1599321092");
    noLegs_0_0.set(EncodedLegSecurityDesc_129);
    InstrumentLeg_129.insert(EncodedLegSecurityDesc_129.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_129(608243339);
    noLegs_0_0.set(EncodedLegSecurityDescLen_129);
    InstrumentLeg_129.insert(EncodedLegSecurityDescLen_129.getString());
    FIX::LegCFICode LegCFICode_129("STRING_855811227");
    noLegs_0_0.set(LegCFICode_129);
    InstrumentLeg_129.insert(LegCFICode_129.getString());
    FIX::LegContractMultiplier LegContractMultiplier_129;
    LegContractMultiplier_129.setString("3619719");
    noLegs_0_0.set(LegContractMultiplier_129);
    InstrumentLeg_129.insert(LegContractMultiplier_129.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_129(169955038);
    noLegs_0_0.set(LegContractMultiplierUnit_129);
    InstrumentLeg_129.insert(LegContractMultiplierUnit_129.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_129("MONTHYEAR_59705046");
    noLegs_0_0.set(LegContractSettlMonth_129);
    InstrumentLeg_129.insert(LegContractSettlMonth_129.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_129("COUNTRY_975684233");
    noLegs_0_0.set(LegCountryOfIssue_129);
    InstrumentLeg_129.insert(LegCountryOfIssue_129.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_129("LOCALMKTDATE_1648966744");
    noLegs_0_0.set(LegCouponPaymentDate_129);
    InstrumentLeg_129.insert(LegCouponPaymentDate_129.getString());
    FIX::LegCouponRate LegCouponRate_129;
    LegCouponRate_129.setString("14.180000");
    noLegs_0_0.set(LegCouponRate_129);
    InstrumentLeg_129.insert(LegCouponRate_129.getString());
    FIX::LegCreditRating LegCreditRating_129("STRING_590050566");
    noLegs_0_0.set(LegCreditRating_129);
    InstrumentLeg_129.insert(LegCreditRating_129.getString());
    FIX::LegCurrency LegCurrency_129("USD");
    noLegs_0_0.set(LegCurrency_129);
    InstrumentLeg_129.insert(LegCurrency_129.getString());
    FIX::LegDatedDate LegDatedDate_129("LOCALMKTDATE_1698243671");
    noLegs_0_0.set(LegDatedDate_129);
    InstrumentLeg_129.insert(LegDatedDate_129.getString());
    FIX::LegExerciseStyle LegExerciseStyle_129(1427477884);
    noLegs_0_0.set(LegExerciseStyle_129);
    InstrumentLeg_129.insert(LegExerciseStyle_129.getString());
    FIX::LegFactor LegFactor_129;
    LegFactor_129.setString("14610388");
    noLegs_0_0.set(LegFactor_129);
    InstrumentLeg_129.insert(LegFactor_129.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_129(729364044);
    noLegs_0_0.set(LegFlowScheduleType_129);
    InstrumentLeg_129.insert(LegFlowScheduleType_129.getString());
    FIX::LegInstrRegistry LegInstrRegistry_129("STRING_105395259");
    noLegs_0_0.set(LegInstrRegistry_129);
    InstrumentLeg_129.insert(LegInstrRegistry_129.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_129("LOCALMKTDATE_1573815651");
    noLegs_0_0.set(LegInterestAccrualDate_129);
    InstrumentLeg_129.insert(LegInterestAccrualDate_129.getString());
    FIX::LegIssueDate LegIssueDate_129("LOCALMKTDATE_105067787");
    noLegs_0_0.set(LegIssueDate_129);
    InstrumentLeg_129.insert(LegIssueDate_129.getString());
    FIX::LegIssuer LegIssuer_129("STRING_1510636021");
    noLegs_0_0.set(LegIssuer_129);
    InstrumentLeg_129.insert(LegIssuer_129.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_129("STRING_835849294");
    noLegs_0_0.set(LegLocaleOfIssue_129);
    InstrumentLeg_129.insert(LegLocaleOfIssue_129.getString());
    FIX::LegMaturityDate LegMaturityDate_129("LOCALMKTDATE_2147025325");
    noLegs_0_0.set(LegMaturityDate_129);
    InstrumentLeg_129.insert(LegMaturityDate_129.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_129("MONTHYEAR_1752956606");
    noLegs_0_0.set(LegMaturityMonthYear_129);
    InstrumentLeg_129.insert(LegMaturityMonthYear_129.getString());
    FIX::LegMaturityTime LegMaturityTime_129("TZTIMEONLY_1018501536");
    noLegs_0_0.set(LegMaturityTime_129);
    InstrumentLeg_129.insert(LegMaturityTime_129.getString());
    FIX::LegOptAttribute LegOptAttribute_129('1');
    noLegs_0_0.set(LegOptAttribute_129);
    InstrumentLeg_129.insert(LegOptAttribute_129.getString());
    FIX::LegOptionRatio LegOptionRatio_129;
    LegOptionRatio_129.setString("18190434");
    noLegs_0_0.set(LegOptionRatio_129);
    InstrumentLeg_129.insert(LegOptionRatio_129.getString());
    FIX::LegPool LegPool_129("STRING_789460977");
    noLegs_0_0.set(LegPool_129);
    InstrumentLeg_129.insert(LegPool_129.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_129("STRING_1481057938");
    noLegs_0_0.set(LegPriceUnitOfMeasure_129);
    InstrumentLeg_129.insert(LegPriceUnitOfMeasure_129.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_129;
    LegPriceUnitOfMeasureQty_129.setString("666502");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_129);
    InstrumentLeg_129.insert(LegPriceUnitOfMeasureQty_129.getString());
    FIX::LegProduct LegProduct_129(1542321295);
    noLegs_0_0.set(LegProduct_129);
    InstrumentLeg_129.insert(LegProduct_129.getString());
    FIX::LegPutOrCall LegPutOrCall_129(1083725590);
    noLegs_0_0.set(LegPutOrCall_129);
    InstrumentLeg_129.insert(LegPutOrCall_129.getString());
    FIX::LegRatioQty LegRatioQty_129;
    LegRatioQty_129.setString("16659713");
    noLegs_0_0.set(LegRatioQty_129);
    InstrumentLeg_129.insert(LegRatioQty_129.getString());
    FIX::LegRedemptionDate LegRedemptionDate_129("LOCALMKTDATE_3080987");
    noLegs_0_0.set(LegRedemptionDate_129);
    InstrumentLeg_129.insert(LegRedemptionDate_129.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_129("STRING_1939536817");
    noLegs_0_0.set(LegRepoCollateralSecurityType_129);
    InstrumentLeg_129.insert(LegRepoCollateralSecurityType_129.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_129;
    LegRepurchaseRate_129.setString("32.890000");
    noLegs_0_0.set(LegRepurchaseRate_129);
    InstrumentLeg_129.insert(LegRepurchaseRate_129.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_129(173036025);
    noLegs_0_0.set(LegRepurchaseTerm_129);
    InstrumentLeg_129.insert(LegRepurchaseTerm_129.getString());
    FIX::LegSecurityDesc LegSecurityDesc_129("STRING_1999241863");
    noLegs_0_0.set(LegSecurityDesc_129);
    InstrumentLeg_129.insert(LegSecurityDesc_129.getString());
    FIX::LegSecurityExchange LegSecurityExchange_129("EXCHANGE_856143874");
    noLegs_0_0.set(LegSecurityExchange_129);
    InstrumentLeg_129.insert(LegSecurityExchange_129.getString());
    FIX::LegSecurityID LegSecurityID_129("STRING_1822002769");
    noLegs_0_0.set(LegSecurityID_129);
    InstrumentLeg_129.insert(LegSecurityID_129.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_129("STRING_1554909633");
    noLegs_0_0.set(LegSecurityIDSource_129);
    InstrumentLeg_129.insert(LegSecurityIDSource_129.getString());
    FIX::LegSecuritySubType LegSecuritySubType_129("STRING_1446194441");
    noLegs_0_0.set(LegSecuritySubType_129);
    InstrumentLeg_129.insert(LegSecuritySubType_129.getString());
    FIX::LegSecurityType LegSecurityType_129("STRING_502649350");
    noLegs_0_0.set(LegSecurityType_129);
    InstrumentLeg_129.insert(LegSecurityType_129.getString());
    FIX::LegSide LegSide_129('2');
    noLegs_0_0.set(LegSide_129);
    InstrumentLeg_129.insert(LegSide_129.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_129("STRING_996954464");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_129);
    InstrumentLeg_129.insert(LegStateOrProvinceOfIssue_129.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_129("USD");
    noLegs_0_0.set(LegStrikeCurrency_129);
    InstrumentLeg_129.insert(LegStrikeCurrency_129.getString());
    FIX::LegStrikePrice LegStrikePrice_129;
    LegStrikePrice_129.setString("17263185");
    noLegs_0_0.set(LegStrikePrice_129);
    InstrumentLeg_129.insert(LegStrikePrice_129.getString());
    FIX::LegSymbol LegSymbol_129("STRING_2035522494");
    noLegs_0_0.set(LegSymbol_129);
    InstrumentLeg_129.insert(LegSymbol_129.getString());
    FIX::LegSymbolSfx LegSymbolSfx_129("STRING_830090431");
    noLegs_0_0.set(LegSymbolSfx_129);
    InstrumentLeg_129.insert(LegSymbolSfx_129.getString());
    FIX::LegTimeUnit LegTimeUnit_129("STRING_1831386296");
    noLegs_0_0.set(LegTimeUnit_129);
    InstrumentLeg_129.insert(LegTimeUnit_129.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_129("STRING_1398674867");
    noLegs_0_0.set(LegUnitOfMeasure_129);
    InstrumentLeg_129.insert(LegUnitOfMeasure_129.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_129;
    LegUnitOfMeasureQty_129.setString("16659397");
    noLegs_0_0.set(LegUnitOfMeasureQty_129);
    InstrumentLeg_129.insert(LegUnitOfMeasureQty_129.getString());
    all_values.push_back(InstrumentLeg_129);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_259;
      FIX::LegSecurityAltID LegSecurityAltID_259("STRING_1004147825");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltID_259.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_259("STRING_536957613");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltIDSource_259.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_259);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_260;
      FIX::LegSecurityAltID LegSecurityAltID_260("STRING_2026145181");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltID_260.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_260("STRING_675707613");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltIDSource_260.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_260);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_79;
  FIX::AttachmentPoint AttachmentPoint_79;
  AttachmentPoint_79.setString("85.900000");
  msg.set(AttachmentPoint_79);
  Instrument_79.insert(AttachmentPoint_79.getString());
  FIX::CFICode CFICode_79("STRING_1359719471");
  msg.set(CFICode_79);
  Instrument_79.insert(CFICode_79.getString());
  FIX::CPProgram CPProgram_79(1);
  msg.set(CPProgram_79);
  Instrument_79.insert(CPProgram_79.getString());
  FIX::CPRegType CPRegType_79("STRING_721256238");
  msg.set(CPRegType_79);
  Instrument_79.insert(CPRegType_79.getString());
  FIX::CapPrice CapPrice_79;
  CapPrice_79.setString("2959614");
  msg.set(CapPrice_79);
  Instrument_79.insert(CapPrice_79.getString());
  FIX::ContractMultiplier ContractMultiplier_79;
  ContractMultiplier_79.setString("2608455");
  msg.set(ContractMultiplier_79);
  Instrument_79.insert(ContractMultiplier_79.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_79(2);
  msg.set(ContractMultiplierUnit_79);
  Instrument_79.insert(ContractMultiplierUnit_79.getString());
  FIX::ContractSettlMonth ContractSettlMonth_79("MONTHYEAR_88014583");
  msg.set(ContractSettlMonth_79);
  Instrument_79.insert(ContractSettlMonth_79.getString());
  FIX::CountryOfIssue CountryOfIssue_79("COUNTRY_141305175");
  msg.set(CountryOfIssue_79);
  Instrument_79.insert(CountryOfIssue_79.getString());
  FIX::CouponPaymentDate CouponPaymentDate_79("LOCALMKTDATE_897373250");
  msg.set(CouponPaymentDate_79);
  Instrument_79.insert(CouponPaymentDate_79.getString());
  FIX::CouponRate CouponRate_79;
  CouponRate_79.setString("64.460000");
  msg.set(CouponRate_79);
  Instrument_79.insert(CouponRate_79.getString());
  FIX::CreditRating CreditRating_79("STRING_997449050");
  msg.set(CreditRating_79);
  Instrument_79.insert(CreditRating_79.getString());
  FIX::DatedDate DatedDate_79("LOCALMKTDATE_571892372");
  msg.set(DatedDate_79);
  Instrument_79.insert(DatedDate_79.getString());
  FIX::DetachmentPoint DetachmentPoint_79;
  DetachmentPoint_79.setString("24.320000");
  msg.set(DetachmentPoint_79);
  Instrument_79.insert(DetachmentPoint_79.getString());
  FIX::EncodedIssuer EncodedIssuer_79("DATA_296159843");
  msg.set(EncodedIssuer_79);
  Instrument_79.insert(EncodedIssuer_79.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_79(1074541722);
  msg.set(EncodedIssuerLen_79);
  Instrument_79.insert(EncodedIssuerLen_79.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_79("DATA_1437401987");
  msg.set(EncodedSecurityDesc_79);
  Instrument_79.insert(EncodedSecurityDesc_79.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_79(1293114307);
  msg.set(EncodedSecurityDescLen_79);
  Instrument_79.insert(EncodedSecurityDescLen_79.getString());
  FIX::ExerciseStyle ExerciseStyle_79(1);
  msg.set(ExerciseStyle_79);
  Instrument_79.insert(ExerciseStyle_79.getString());
  FIX::Factor Factor_79;
  Factor_79.setString("6936767");
  msg.set(Factor_79);
  Instrument_79.insert(Factor_79.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_79(true);
  msg.set(FlexProductEligibilityIndicator_79);
  Instrument_79.insert(FlexProductEligibilityIndicator_79.getString());
  FIX::FlexibleIndicator FlexibleIndicator_79(false);
  msg.set(FlexibleIndicator_79);
  Instrument_79.insert(FlexibleIndicator_79.getString());
  FIX::FloorPrice FloorPrice_79;
  FloorPrice_79.setString("15237671");
  msg.set(FloorPrice_79);
  Instrument_79.insert(FloorPrice_79.getString());
  FIX::FlowScheduleType FlowScheduleType_79(1);
  msg.set(FlowScheduleType_79);
  Instrument_79.insert(FlowScheduleType_79.getString());
  FIX::InstrRegistry InstrRegistry_79("STRING_2143899023");
  msg.set(InstrRegistry_79);
  Instrument_79.insert(InstrRegistry_79.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_79('1');
  msg.set(InstrmtAssignmentMethod_79);
  Instrument_79.insert(InstrmtAssignmentMethod_79.getString());
  FIX::InterestAccrualDate InterestAccrualDate_79("LOCALMKTDATE_239296142");
  msg.set(InterestAccrualDate_79);
  Instrument_79.insert(InterestAccrualDate_79.getString());
  FIX::IssueDate IssueDate_79("LOCALMKTDATE_1000563200");
  msg.set(IssueDate_79);
  Instrument_79.insert(IssueDate_79.getString());
  FIX::Issuer Issuer_79("STRING_1579180889");
  msg.set(Issuer_79);
  Instrument_79.insert(Issuer_79.getString());
  FIX::ListMethod ListMethod_79(1);
  msg.set(ListMethod_79);
  Instrument_79.insert(ListMethod_79.getString());
  FIX::LocaleOfIssue LocaleOfIssue_79("STRING_1676270813");
  msg.set(LocaleOfIssue_79);
  Instrument_79.insert(LocaleOfIssue_79.getString());
  FIX::MaturityDate MaturityDate_79("LOCALMKTDATE_758115831");
  msg.set(MaturityDate_79);
  Instrument_79.insert(MaturityDate_79.getString());
  FIX::MaturityMonthYear MaturityMonthYear_79("MONTHYEAR_1477677146");
  msg.set(MaturityMonthYear_79);
  Instrument_79.insert(MaturityMonthYear_79.getString());
  FIX::MaturityTime MaturityTime_79("TZTIMEONLY_271145017");
  msg.set(MaturityTime_79);
  Instrument_79.insert(MaturityTime_79.getString());
  FIX::MinPriceIncrement MinPriceIncrement_79;
  MinPriceIncrement_79.setString("14793720");
  msg.set(MinPriceIncrement_79);
  Instrument_79.insert(MinPriceIncrement_79.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
  MinPriceIncrementAmount_79.setString("17736385");
  msg.set(MinPriceIncrementAmount_79);
  Instrument_79.insert(MinPriceIncrementAmount_79.getString());
  FIX::NTPositionLimit NTPositionLimit_79(531990551);
  msg.set(NTPositionLimit_79);
  Instrument_79.insert(NTPositionLimit_79.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
  NotionalPercentageOutstanding_79.setString("56.460000");
  msg.set(NotionalPercentageOutstanding_79);
  Instrument_79.insert(NotionalPercentageOutstanding_79.getString());
  FIX::OptAttribute OptAttribute_79('1');
  msg.set(OptAttribute_79);
  Instrument_79.insert(OptAttribute_79.getString());
  FIX::OptPayoutAmount OptPayoutAmount_79;
  OptPayoutAmount_79.setString("6732957");
  msg.set(OptPayoutAmount_79);
  Instrument_79.insert(OptPayoutAmount_79.getString());
  FIX::OptPayoutType OptPayoutType_79(1);
  msg.set(OptPayoutType_79);
  Instrument_79.insert(OptPayoutType_79.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
  OriginalNotionalPercentageOutstanding_79.setString("59.410000");
  msg.set(OriginalNotionalPercentageOutstanding_79);
  Instrument_79.insert(OriginalNotionalPercentageOutstanding_79.getString());
  FIX::Pool Pool_79("STRING_1670744777");
  msg.set(Pool_79);
  Instrument_79.insert(Pool_79.getString());
  FIX::PositionLimit PositionLimit_79(1525491269);
  msg.set(PositionLimit_79);
  Instrument_79.insert(PositionLimit_79.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_79("STRING_INX");
  msg.set(PriceQuoteMethod_79);
  Instrument_79.insert(PriceQuoteMethod_79.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_79("STRING_1966904620");
  msg.set(PriceUnitOfMeasure_79);
  Instrument_79.insert(PriceUnitOfMeasure_79.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
  PriceUnitOfMeasureQty_79.setString("4525493");
  msg.set(PriceUnitOfMeasureQty_79);
  Instrument_79.insert(PriceUnitOfMeasureQty_79.getString());
  FIX::Product Product_81(13);
  msg.set(Product_81);
  Instrument_79.insert(Product_81.getString());
  FIX::ProductComplex ProductComplex_79("STRING_1112535279");
  msg.set(ProductComplex_79);
  Instrument_79.insert(ProductComplex_79.getString());
  FIX::PutOrCall PutOrCall_79(1);
  msg.set(PutOrCall_79);
  Instrument_79.insert(PutOrCall_79.getString());
  FIX::RedemptionDate RedemptionDate_79("LOCALMKTDATE_1132219832");
  msg.set(RedemptionDate_79);
  Instrument_79.insert(RedemptionDate_79.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_79("STRING_1984484448");
  msg.set(RepoCollateralSecurityType_79);
  Instrument_79.insert(RepoCollateralSecurityType_79.getString());
  FIX::RepurchaseRate RepurchaseRate_79;
  RepurchaseRate_79.setString("88.080000");
  msg.set(RepurchaseRate_79);
  Instrument_79.insert(RepurchaseRate_79.getString());
  FIX::RepurchaseTerm RepurchaseTerm_79(508503383);
  msg.set(RepurchaseTerm_79);
  Instrument_79.insert(RepurchaseTerm_79.getString());
  FIX::RestructuringType RestructuringType_79("STRING_FR");
  msg.set(RestructuringType_79);
  Instrument_79.insert(RestructuringType_79.getString());
  FIX::SecurityDesc SecurityDesc_79("STRING_2051374183");
  msg.set(SecurityDesc_79);
  Instrument_79.insert(SecurityDesc_79.getString());
  FIX::SecurityExchange SecurityExchange_79("EXCHANGE_1550726658");
  msg.set(SecurityExchange_79);
  Instrument_79.insert(SecurityExchange_79.getString());
  FIX::SecurityGroup SecurityGroup_79("STRING_632148758");
  msg.set(SecurityGroup_79);
  Instrument_79.insert(SecurityGroup_79.getString());
  FIX::SecurityID SecurityID_79("STRING_904453736");
  msg.set(SecurityID_79);
  Instrument_79.insert(SecurityID_79.getString());
  FIX::SecurityIDSource SecurityIDSource_79("STRING_I");
  msg.set(SecurityIDSource_79);
  Instrument_79.insert(SecurityIDSource_79.getString());
  FIX::SecurityStatus SecurityStatus_80("STRING_2");
  msg.set(SecurityStatus_80);
  Instrument_79.insert(SecurityStatus_80.getString());
  FIX::SecuritySubType SecuritySubType_80("STRING_433240901");
  msg.set(SecuritySubType_80);
  Instrument_79.insert(SecuritySubType_80.getString());
  FIX::SecurityType SecurityType_81("STRING_CMO");
  msg.set(SecurityType_81);
  Instrument_79.insert(SecurityType_81.getString());
  FIX::Seniority Seniority_79("STRING_SD");
  msg.set(Seniority_79);
  Instrument_79.insert(Seniority_79.getString());
  FIX::SettlMethod SettlMethod_79('C');
  msg.set(SettlMethod_79);
  Instrument_79.insert(SettlMethod_79.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_79("STRING_1072428152");
  msg.set(SettleOnOpenFlag_79);
  Instrument_79.insert(SettleOnOpenFlag_79.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_79("STRING_1853938492");
  msg.set(StateOrProvinceOfIssue_79);
  Instrument_79.insert(StateOrProvinceOfIssue_79.getString());
  FIX::StrikeCurrency StrikeCurrency_79("CHF");
  msg.set(StrikeCurrency_79);
  Instrument_79.insert(StrikeCurrency_79.getString());
  FIX::StrikeMultiplier StrikeMultiplier_79;
  StrikeMultiplier_79.setString("15681079");
  msg.set(StrikeMultiplier_79);
  Instrument_79.insert(StrikeMultiplier_79.getString());
  FIX::StrikePrice StrikePrice_79;
  StrikePrice_79.setString("19096721");
  msg.set(StrikePrice_79);
  Instrument_79.insert(StrikePrice_79.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_79(2);
  msg.set(StrikePriceBoundaryMethod_79);
  Instrument_79.insert(StrikePriceBoundaryMethod_79.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
  StrikePriceBoundaryPrecision_79.setString("2.800000");
  msg.set(StrikePriceBoundaryPrecision_79);
  Instrument_79.insert(StrikePriceBoundaryPrecision_79.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_79(3);
  msg.set(StrikePriceDeterminationMethod_79);
  Instrument_79.insert(StrikePriceDeterminationMethod_79.getString());
  FIX::StrikeValue StrikeValue_79;
  StrikeValue_79.setString("14602603");
  msg.set(StrikeValue_79);
  Instrument_79.insert(StrikeValue_79.getString());
  FIX::Symbol Symbol_79("STRING_223191358");
  msg.set(Symbol_79);
  Instrument_79.insert(Symbol_79.getString());
  FIX::SymbolSfx SymbolSfx_79("STRING_CD");
  msg.set(SymbolSfx_79);
  Instrument_79.insert(SymbolSfx_79.getString());
  FIX::TimeUnit TimeUnit_79("STRING_Yr");
  msg.set(TimeUnit_79);
  Instrument_79.insert(TimeUnit_79.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_79(4);
  msg.set(UnderlyingPriceDeterminationMethod_79);
  Instrument_79.insert(UnderlyingPriceDeterminationMethod_79.getString());
  FIX::UnitOfMeasure UnitOfMeasure_79("STRING_Bcf");
  msg.set(UnitOfMeasure_79);
  Instrument_79.insert(UnitOfMeasure_79.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
  UnitOfMeasureQty_79.setString("10750606");
  msg.set(UnitOfMeasureQty_79);
  Instrument_79.insert(UnitOfMeasureQty_79.getString());
  FIX::ValuationMethod ValuationMethod_79("STRING_EQTY");
  msg.set(ValuationMethod_79);
  Instrument_79.insert(ValuationMethod_79.getString());
  all_values.push_back(Instrument_79);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_150;
    FIX::ComplexEventCondition ComplexEventCondition_150(1);
    noComplexEvents_0_0.set(ComplexEventCondition_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventCondition_150.getString());
    FIX::ComplexEventPrice ComplexEventPrice_150;
    ComplexEventPrice_150.setString("1549739");
    noComplexEvents_0_0.set(ComplexEventPrice_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPrice_150.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_150(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryMethod_150.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
    ComplexEventPriceBoundaryPrecision_150.setString("63.610000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryPrecision_150.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_150(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceTimeType_150.getString());
    FIX::ComplexEventType ComplexEventType_150(8);
    noComplexEvents_0_0.set(ComplexEventType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventType_150.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
    ComplexOptPayoutAmount_150.setString("17908800");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexOptPayoutAmount_150.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_150);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_309;
      FIX::ComplexEventEndDate ComplexEventEndDate_309(FIX::UTCTIMESTAMP(23, 3, 10, 5, 1, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventEndDate_309.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_309(FIX::UTCTIMESTAMP(7, 53, 48, 15, 2, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventStartDate_309.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_309);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
        FIX::ComplexEventEndTime ComplexEventEndTime_628(FIX::UTCTIMEONLY(16, 24, 26));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventEndTime_628.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_628(FIX::UTCTIMEONLY(2, 54, 15));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventStartTime_628.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
        FIX::ComplexEventEndTime ComplexEventEndTime_629(FIX::UTCTIMEONLY(8, 41, 49));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventEndTime_629.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_629(FIX::UTCTIMEONLY(22, 19, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventStartTime_629.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
        FIX::ComplexEventEndTime ComplexEventEndTime_630(FIX::UTCTIMEONLY(6, 29, 38));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventEndTime_630.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_630(FIX::UTCTIMEONLY(21, 24, 43));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventStartTime_630.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_310;
      FIX::ComplexEventEndDate ComplexEventEndDate_310(FIX::UTCTIMESTAMP(5, 31, 39, 26, 11, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventEndDate_310.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_310(FIX::UTCTIMESTAMP(14, 28, 24, 0, 7, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventStartDate_310.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_310);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
        FIX::ComplexEventEndTime ComplexEventEndTime_631(FIX::UTCTIMEONLY(19, 41, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventEndTime_631.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_631(FIX::UTCTIMEONLY(7, 22, 6));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventStartTime_631.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_632;
        FIX::ComplexEventEndTime ComplexEventEndTime_632(FIX::UTCTIMEONLY(16, 28, 25));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventEndTime_632.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_632(FIX::UTCTIMEONLY(13, 41, 19));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventStartTime_632.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_632);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_633;
        FIX::ComplexEventEndTime ComplexEventEndTime_633(FIX::UTCTIMEONLY(2, 42, 9));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventEndTime_633.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_633(FIX::UTCTIMEONLY(16, 13, 23));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventStartTime_633.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_633);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_151;
    FIX::ComplexEventCondition ComplexEventCondition_151(2);
    noComplexEvents_0_1.set(ComplexEventCondition_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventCondition_151.getString());
    FIX::ComplexEventPrice ComplexEventPrice_151;
    ComplexEventPrice_151.setString("2726442");
    noComplexEvents_0_1.set(ComplexEventPrice_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPrice_151.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_151(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryMethod_151.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
    ComplexEventPriceBoundaryPrecision_151.setString("19.350000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryPrecision_151.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_151(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceTimeType_151.getString());
    FIX::ComplexEventType ComplexEventType_151(2);
    noComplexEvents_0_1.set(ComplexEventType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventType_151.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
    ComplexOptPayoutAmount_151.setString("3280747");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexOptPayoutAmount_151.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_151);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_311;
      FIX::ComplexEventEndDate ComplexEventEndDate_311(FIX::UTCTIMESTAMP(13, 36, 25, 8, 12, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventEndDate_311.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_311(FIX::UTCTIMESTAMP(19, 52, 1, 15, 6, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventStartDate_311.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_311);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_634;
        FIX::ComplexEventEndTime ComplexEventEndTime_634(FIX::UTCTIMEONLY(9, 13, 49));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventEndTime_634.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_634(FIX::UTCTIMEONLY(21, 54, 21));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventStartTime_634.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_634);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_635;
        FIX::ComplexEventEndTime ComplexEventEndTime_635(FIX::UTCTIMEONLY(15, 1, 4));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventEndTime_635.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_635(FIX::UTCTIMEONLY(11, 59, 47));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventStartTime_635.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_635);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_636;
        FIX::ComplexEventEndTime ComplexEventEndTime_636(FIX::UTCTIMEONLY(4, 23, 9));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventEndTime_636.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_636(FIX::UTCTIMEONLY(14, 33, 53));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventStartTime_636.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_636);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_312;
      FIX::ComplexEventEndDate ComplexEventEndDate_312(FIX::UTCTIMESTAMP(1, 54, 9, 15, 6, 2012));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventEndDate_312.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_312(FIX::UTCTIMESTAMP(7, 53, 55, 17, 3, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventStartDate_312.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_312);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_637;
        FIX::ComplexEventEndTime ComplexEventEndTime_637(FIX::UTCTIMEONLY(20, 0, 55));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventEndTime_637.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_637(FIX::UTCTIMEONLY(15, 46, 17));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventStartTime_637.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_637);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_638;
        FIX::ComplexEventEndTime ComplexEventEndTime_638(FIX::UTCTIMEONLY(19, 33, 36));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventEndTime_638.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_638(FIX::UTCTIMEONLY(23, 2, 17));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventStartTime_638.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_638);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_157;
    FIX::EventDate EventDate_157("LOCALMKTDATE_513381679");
    noEvents_0_0.set(EventDate_157);
    EvntGrp_NoEvents_157.insert(EventDate_157.getString());
    FIX::EventPx EventPx_157;
    EventPx_157.setString("12582439");
    noEvents_0_0.set(EventPx_157);
    EvntGrp_NoEvents_157.insert(EventPx_157.getString());
    FIX::EventText EventText_157("STRING_1611104635");
    noEvents_0_0.set(EventText_157);
    EvntGrp_NoEvents_157.insert(EventText_157.getString());
    FIX::EventTime EventTime_157(FIX::UTCTIMESTAMP(13, 35, 1, 24, 9, 2002));
    noEvents_0_0.set(EventTime_157);
    EvntGrp_NoEvents_157.insert(EventTime_157.getString());
    FIX::EventType EventType_157(6);
    noEvents_0_0.set(EventType_157);
    EvntGrp_NoEvents_157.insert(EventType_157.getString());
    all_values.push_back(EvntGrp_NoEvents_157);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_154;
    FIX::InstrumentPartyID InstrumentPartyID_154("STRING_1072931678");
    noInstrumentParties_0_0.set(InstrumentPartyID_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyID_154.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_154('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyIDSource_154.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_154(1168913161);
    noInstrumentParties_0_0.set(InstrumentPartyRole_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyRole_154.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_154);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
      FIX::InstrumentPartySubID InstrumentPartySubID_313("STRING_505716844");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_313);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubID_313.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_313(906278448);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_313);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubIDType_313.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
      FIX::InstrumentPartySubID InstrumentPartySubID_314("STRING_1919544317");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_314);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubID_314.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_314(681243955);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_314);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubIDType_314.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_155;
    FIX::InstrumentPartyID InstrumentPartyID_155("STRING_550384527");
    noInstrumentParties_0_1.set(InstrumentPartyID_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyID_155.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_155('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyIDSource_155.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_155(99208942);
    noInstrumentParties_0_1.set(InstrumentPartyRole_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyRole_155.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_155);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
      FIX::InstrumentPartySubID InstrumentPartySubID_315("STRING_1576045859");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_315);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubID_315.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_315(1197534179);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_315);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubIDType_315.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
      FIX::InstrumentPartySubID InstrumentPartySubID_316("STRING_423372710");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_316);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubID_316.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_316(42547179);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_316);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubIDType_316.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_170;
    FIX::SecurityAltID SecurityAltID_170("STRING_5405159");
    noSecurityAltID_0_0.set(SecurityAltID_170);
    SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltID_170.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_170("STRING_1603047684");
    noSecurityAltID_0_0.set(SecurityAltIDSource_170);
    SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltIDSource_170.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_171;
    FIX::SecurityAltID SecurityAltID_171("STRING_96973152");
    noSecurityAltID_0_1.set(SecurityAltID_171);
    SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltID_171.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_171("STRING_1263649142");
    noSecurityAltID_0_1.set(SecurityAltIDSource_171);
    SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltIDSource_171.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_158;
  FIX::SecurityXML SecurityXML_159("XMLDATA_1066668671");
  msg.set(SecurityXML_159);
  FIX::SecurityXMLLen SecurityXMLLen_79(1866133567);
  msg.set(SecurityXMLLen_79);
  FIX::SecurityXMLSchema SecurityXMLSchema_79("STRING_1462026987");
  msg.set(SecurityXMLSchema_79);
  SecurityXML_158.insert(SecurityXMLSchema_79.getString());
  all_values.push_back(SecurityXML_158);

  // InstrumentExtension
  multiset<string> InstrumentExtension_15;
  FIX::DeliveryForm DeliveryForm_15(1);
  msg.set(DeliveryForm_15);
  InstrumentExtension_15.insert(DeliveryForm_15.getString());
  FIX::PctAtRisk PctAtRisk_15;
  PctAtRisk_15.setString("50.600000");
  msg.set(PctAtRisk_15);
  InstrumentExtension_15.insert(PctAtRisk_15.getString());
  all_values.push_back(InstrumentExtension_15);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_30;
    FIX::InstrAttribType InstrAttribType_30(29);
    noInstrAttrib_0_0.set(InstrAttribType_30);
    AttrbGrp_NoInstrAttrib_30.insert(InstrAttribType_30.getString());
    FIX::InstrAttribValue InstrAttribValue_30("STRING_384752868");
    noInstrAttrib_0_0.set(InstrAttribValue_30);
    AttrbGrp_NoInstrAttrib_30.insert(InstrAttribValue_30.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_30);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_124;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_124("DATA_1498962669");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuer_124.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_124(1457684546);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuerLen_124.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_124("DATA_881333449");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDesc_124.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_124(520392182);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDescLen_124.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
    UnderlyingAdjustedQuantity_124.setString("5625446");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_124);
    UnderlyingInstrument_124.insert(UnderlyingAdjustedQuantity_124.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
    UnderlyingAllocationPercent_124.setString("2.940000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_124);
    UnderlyingInstrument_124.insert(UnderlyingAllocationPercent_124.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
    UnderlyingAttachmentPoint_124.setString("6.310000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingAttachmentPoint_124.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_124("STRING_334605314");
    noUnderlyings_0_0.set(UnderlyingCFICode_124);
    UnderlyingInstrument_124.insert(UnderlyingCFICode_124.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_124("STRING_2068294249");
    noUnderlyings_0_0.set(UnderlyingCPProgram_124);
    UnderlyingInstrument_124.insert(UnderlyingCPProgram_124.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_124("STRING_1977055158");
    noUnderlyings_0_0.set(UnderlyingCPRegType_124);
    UnderlyingInstrument_124.insert(UnderlyingCPRegType_124.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_124;
    UnderlyingCapValue_124.setString("14093075");
    noUnderlyings_0_0.set(UnderlyingCapValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCapValue_124.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
    UnderlyingCashAmount_124.setString("200195");
    noUnderlyings_0_0.set(UnderlyingCashAmount_124);
    UnderlyingInstrument_124.insert(UnderlyingCashAmount_124.getString());
    FIX::UnderlyingCashType UnderlyingCashType_124("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_124);
    UnderlyingInstrument_124.insert(UnderlyingCashType_124.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
    UnderlyingContractMultiplier_124.setString("8378697");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplier_124.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_124(1217553723);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplierUnit_124.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_124("COUNTRY_1487513734");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingCountryOfIssue_124.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_124("LOCALMKTDATE_880416971");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponPaymentDate_124.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
    UnderlyingCouponRate_124.setString("51.960000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponRate_124.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_124("STRING_1492918893");
    noUnderlyings_0_0.set(UnderlyingCreditRating_124);
    UnderlyingInstrument_124.insert(UnderlyingCreditRating_124.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_124("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrency_124.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
    UnderlyingCurrentValue_124.setString("6090843");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrentValue_124.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
    UnderlyingDetachmentPoint_124.setString("96.790000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingDetachmentPoint_124.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
    UnderlyingDirtyPrice_124.setString("6167682");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingDirtyPrice_124.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
    UnderlyingEndPrice_124.setString("20711113");
    noUnderlyings_0_0.set(UnderlyingEndPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingEndPrice_124.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_124;
    UnderlyingEndValue_124.setString("18730095");
    noUnderlyings_0_0.set(UnderlyingEndValue_124);
    UnderlyingInstrument_124.insert(UnderlyingEndValue_124.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_124(1348963327);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_124);
    UnderlyingInstrument_124.insert(UnderlyingExerciseStyle_124.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_124;
    UnderlyingFXRate_124.setString("21299094");
    noUnderlyings_0_0.set(UnderlyingFXRate_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRate_124.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_124('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRateCalc_124.getString());
    FIX::UnderlyingFactor UnderlyingFactor_124;
    UnderlyingFactor_124.setString("17337161");
    noUnderlyings_0_0.set(UnderlyingFactor_124);
    UnderlyingInstrument_124.insert(UnderlyingFactor_124.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_124(718874951);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_124);
    UnderlyingInstrument_124.insert(UnderlyingFlowScheduleType_124.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_124("STRING_1713237257");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_124);
    UnderlyingInstrument_124.insert(UnderlyingInstrRegistry_124.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_124("LOCALMKTDATE_1043917094");
    noUnderlyings_0_0.set(UnderlyingIssueDate_124);
    UnderlyingInstrument_124.insert(UnderlyingIssueDate_124.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_124("STRING_1600208401");
    noUnderlyings_0_0.set(UnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(UnderlyingIssuer_124.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_124("STRING_86145791");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingLocaleOfIssue_124.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_124("LOCALMKTDATE_1606461739");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityDate_124.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_124("MONTHYEAR_839775047");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityMonthYear_124.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_124("TZTIMEONLY_1512816422");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityTime_124.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
    UnderlyingNotionalPercentageOutstanding_124.setString("70.530000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_124('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_124);
    UnderlyingInstrument_124.insert(UnderlyingOptAttribute_124.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
    UnderlyingOriginalNotionalPercentageOutstanding_124.setString("79.320000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingOriginalNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_124("STRING_1202890986");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasure_124.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
    UnderlyingPriceUnitOfMeasureQty_124.setString("7806051");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasureQty_124.getString());
    FIX::UnderlyingProduct UnderlyingProduct_124(259045308);
    noUnderlyings_0_0.set(UnderlyingProduct_124);
    UnderlyingInstrument_124.insert(UnderlyingProduct_124.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_124(2040760778);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_124);
    UnderlyingInstrument_124.insert(UnderlyingPutOrCall_124.getString());
    FIX::UnderlyingPx UnderlyingPx_124;
    UnderlyingPx_124.setString("19981589");
    noUnderlyings_0_0.set(UnderlyingPx_124);
    UnderlyingInstrument_124.insert(UnderlyingPx_124.getString());
    FIX::UnderlyingQty UnderlyingQty_124;
    UnderlyingQty_124.setString("17465590");
    noUnderlyings_0_0.set(UnderlyingQty_124);
    UnderlyingInstrument_124.insert(UnderlyingQty_124.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_124("LOCALMKTDATE_773694101");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_124);
    UnderlyingInstrument_124.insert(UnderlyingRedemptionDate_124.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_124("STRING_651820463");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingRepoCollateralSecurityType_124.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
    UnderlyingRepurchaseRate_124.setString("42.870000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseRate_124.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_124(1109675108);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseTerm_124.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_124("STRING_1549938812");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_124);
    UnderlyingInstrument_124.insert(UnderlyingRestructuringType_124.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_124("STRING_1701078675");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityDesc_124.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_124("EXCHANGE_364841139");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityExchange_124.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_124("STRING_19223431");
    noUnderlyings_0_0.set(UnderlyingSecurityID_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityID_124.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_124("STRING_1624706402");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityIDSource_124.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_124("STRING_90367009");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecuritySubType_124.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_124("STRING_1368186759");
    noUnderlyings_0_0.set(UnderlyingSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityType_124.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_124("STRING_1607132248");
    noUnderlyings_0_0.set(UnderlyingSeniority_124);
    UnderlyingInstrument_124.insert(UnderlyingSeniority_124.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_124("STRING_304641597");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlMethod_124.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_124(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlementType_124.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_124;
    UnderlyingStartValue_124.setString("1785235");
    noUnderlyings_0_0.set(UnderlyingStartValue_124);
    UnderlyingInstrument_124.insert(UnderlyingStartValue_124.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_124("STRING_2017878854");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingStateOrProvinceOfIssue_124.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_124("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikeCurrency_124.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
    UnderlyingStrikePrice_124.setString("21040246");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikePrice_124.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_124("STRING_1457314493");
    noUnderlyings_0_0.set(UnderlyingSymbol_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbol_124.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_124("STRING_471023352");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbolSfx_124.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_124("STRING_1469357420");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingTimeUnit_124.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_124("STRING_1250897898");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasure_124.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
    UnderlyingUnitOfMeasureQty_124.setString("12316090");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasureQty_124.getString());
    all_values.push_back(UnderlyingInstrument_124);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_256("STRING_306305236");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltID_256.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_256("STRING_2012214193");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltIDSource_256.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      FIX::UnderlyingStipType UnderlyingStipType_244("STRING_199582366");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipType_244.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_244("STRING_1862889460");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipValue_244.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      FIX::UnderlyingStipType UnderlyingStipType_245("STRING_522382407");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipType_245.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_245("STRING_973276467");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipValue_245.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_245("STRING_1614376695");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyID_245.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_245('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyIDSource_245.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_245(1917165088);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyRole_245.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_496("STRING_300309067");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubID_496.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_496(1936388519);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubIDType_496.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_497("STRING_645194476");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubID_497.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_497(390676076);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubIDType_497.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_246("STRING_1157091630");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyID_246.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_246('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyIDSource_246.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_246(695317673);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyRole_246.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_498("STRING_283366628");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubID_498.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_498(565712879);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubIDType_498.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_247("STRING_1962363691");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyID_247.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_247('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyIDSource_247.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_247(522253877);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyRole_247.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_499("STRING_385638285");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubID_499.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_499(1991611297);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubIDType_499.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_500("STRING_375608786");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubID_500.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_500(1617247286);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubIDType_500.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
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
