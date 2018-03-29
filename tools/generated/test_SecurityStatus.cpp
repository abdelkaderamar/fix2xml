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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_88;
  FIX::Adjustment Adjustment_0(1);
  msg.set(Adjustment_0);
  SecurityStatus_88.insert(Adjustment_0.getString());
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("7543523");
  msg.set(BuyVolume_0);
  SecurityStatus_88.insert(BuyVolume_0.getString());
  FIX::CorporateAction CorporateAction_10("MULTIPLECHARVALUE_J");
  msg.set(CorporateAction_10);
  SecurityStatus_88.insert(CorporateAction_10.getString());
  FIX::Currency Currency_71("CAN");
  msg.set(Currency_71);
  SecurityStatus_88.insert(Currency_71.getString());
  FIX::DueToRelated DueToRelated_0(true);
  msg.set(DueToRelated_0);
  SecurityStatus_88.insert(DueToRelated_0.getString());
  FIX::EncodedText EncodedText_90("DATA_451886904");
  msg.set(EncodedText_90);
  SecurityStatus_88.insert(EncodedText_90.getString());
  FIX::EncodedTextLen EncodedTextLen_90(831029009);
  msg.set(EncodedTextLen_90);
  SecurityStatus_88.insert(EncodedTextLen_90.getString());
  FIX::FinancialStatus FinancialStatus_4("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_4);
  SecurityStatus_88.insert(FinancialStatus_4.getString());
  FIX::FirstPx FirstPx_3;
  FirstPx_3.setString("15535344");
  msg.set(FirstPx_3);
  SecurityStatus_88.insert(FirstPx_3.getString());
  FIX::HaltReasonInt HaltReasonInt_3(5);
  msg.set(HaltReasonInt_3);
  FIX::HighPx HighPx_3;
  HighPx_3.setString("6332767");
  msg.set(HighPx_3);
  SecurityStatus_88.insert(HighPx_3.getString());
  FIX::InViewOfCommon InViewOfCommon_0(true);
  msg.set(InViewOfCommon_0);
  SecurityStatus_88.insert(InViewOfCommon_0.getString());
  FIX::LastPx LastPx_12;
  LastPx_12.setString("7477552");
  msg.set(LastPx_12);
  SecurityStatus_88.insert(LastPx_12.getString());
  FIX::LowPx LowPx_3;
  LowPx_3.setString("13507898");
  msg.set(LowPx_3);
  SecurityStatus_88.insert(LowPx_3.getString());
  FIX::MDBookType MDBookType_59(1);
  msg.set(MDBookType_59);
  SecurityStatus_88.insert(MDBookType_59.getString());
  FIX::MarketDepth MarketDepth_60(868816381);
  msg.set(MarketDepth_60);
  SecurityStatus_88.insert(MarketDepth_60.getString());
  FIX::MarketID MarketID_23("EXCHANGE_1443637843");
  msg.set(MarketID_23);
  SecurityStatus_88.insert(MarketID_23.getString());
  FIX::MarketSegmentID MarketSegmentID_23("STRING_1164626077");
  msg.set(MarketSegmentID_23);
  SecurityStatus_88.insert(MarketSegmentID_23.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_0("STRING_2140886035");
  msg.set(SecurityStatusReqID_0);
  SecurityStatus_88.insert(SecurityStatusReqID_0.getString());
  FIX::SecurityTradingEvent SecurityTradingEvent_0(2);
  msg.set(SecurityTradingEvent_0);
  SecurityStatus_88.insert(SecurityTradingEvent_0.getString());
  FIX::SecurityTradingStatus SecurityTradingStatus_3(2);
  msg.set(SecurityTradingStatus_3);
  SecurityStatus_88.insert(SecurityTradingStatus_3.getString());
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("8487813");
  msg.set(SellVolume_0);
  SecurityStatus_88.insert(SellVolume_0.getString());
  FIX::Text Text_90("STRING_1750845055");
  msg.set(Text_90);
  SecurityStatus_88.insert(Text_90.getString());
  FIX::TradingSessionID TradingSessionID_113("STRING_3");
  msg.set(TradingSessionID_113);
  SecurityStatus_88.insert(TradingSessionID_113.getString());
  FIX::TradingSessionSubID TradingSessionSubID_113("STRING_4");
  msg.set(TradingSessionSubID_113);
  SecurityStatus_88.insert(TradingSessionSubID_113.getString());
  FIX::TransactTime TransactTime_67(FIX::UTCTIMESTAMP(12, 22, 55, 8, 12, 2007));
  msg.set(TransactTime_67);
  SecurityStatus_88.insert(TransactTime_67.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_2(false);
  msg.set(UnsolicitedIndicator_2);
  SecurityStatus_88.insert(UnsolicitedIndicator_2.getString());
  all_values.push_back(SecurityStatus_88);

  all_compo_names.insert("SecurityStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  FIX::ApplID ApplID_16("STRING_15211788");
  msg.set(ApplID_16);
  ApplicationSequenceControl_16.insert(ApplID_16.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_16(1567735416);
  msg.set(ApplLastSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplLastSeqNum_16.getString());
  FIX::ApplResendFlag ApplResendFlag_16(false);
  msg.set(ApplResendFlag_16);
  ApplicationSequenceControl_16.insert(ApplResendFlag_16.getString());
  FIX::ApplSeqNum ApplSeqNum_16(467098692);
  msg.set(ApplSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplSeqNum_16.getString());
  all_values.push_back(ApplicationSequenceControl_16);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_146;
    FIX::EncodedLegIssuer EncodedLegIssuer_146("DATA_1599821100");
    noLegs_0_0.set(EncodedLegIssuer_146);
    InstrumentLeg_146.insert(EncodedLegIssuer_146.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_146(2020633117);
    noLegs_0_0.set(EncodedLegIssuerLen_146);
    InstrumentLeg_146.insert(EncodedLegIssuerLen_146.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_146("DATA_1254075572");
    noLegs_0_0.set(EncodedLegSecurityDesc_146);
    InstrumentLeg_146.insert(EncodedLegSecurityDesc_146.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_146(85614184);
    noLegs_0_0.set(EncodedLegSecurityDescLen_146);
    InstrumentLeg_146.insert(EncodedLegSecurityDescLen_146.getString());
    FIX::LegCFICode LegCFICode_146("STRING_2039179019");
    noLegs_0_0.set(LegCFICode_146);
    InstrumentLeg_146.insert(LegCFICode_146.getString());
    FIX::LegContractMultiplier LegContractMultiplier_146;
    LegContractMultiplier_146.setString("20018308");
    noLegs_0_0.set(LegContractMultiplier_146);
    InstrumentLeg_146.insert(LegContractMultiplier_146.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_146(1436404062);
    noLegs_0_0.set(LegContractMultiplierUnit_146);
    InstrumentLeg_146.insert(LegContractMultiplierUnit_146.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_146("MONTHYEAR_183602451");
    noLegs_0_0.set(LegContractSettlMonth_146);
    InstrumentLeg_146.insert(LegContractSettlMonth_146.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_146("COUNTRY_723163604");
    noLegs_0_0.set(LegCountryOfIssue_146);
    InstrumentLeg_146.insert(LegCountryOfIssue_146.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_146("LOCALMKTDATE_732558257");
    noLegs_0_0.set(LegCouponPaymentDate_146);
    InstrumentLeg_146.insert(LegCouponPaymentDate_146.getString());
    FIX::LegCouponRate LegCouponRate_146;
    LegCouponRate_146.setString("85.280000");
    noLegs_0_0.set(LegCouponRate_146);
    InstrumentLeg_146.insert(LegCouponRate_146.getString());
    FIX::LegCreditRating LegCreditRating_146("STRING_716565991");
    noLegs_0_0.set(LegCreditRating_146);
    InstrumentLeg_146.insert(LegCreditRating_146.getString());
    FIX::LegCurrency LegCurrency_146("USD");
    noLegs_0_0.set(LegCurrency_146);
    InstrumentLeg_146.insert(LegCurrency_146.getString());
    FIX::LegDatedDate LegDatedDate_146("LOCALMKTDATE_1565347383");
    noLegs_0_0.set(LegDatedDate_146);
    InstrumentLeg_146.insert(LegDatedDate_146.getString());
    FIX::LegExerciseStyle LegExerciseStyle_146(1812181825);
    noLegs_0_0.set(LegExerciseStyle_146);
    InstrumentLeg_146.insert(LegExerciseStyle_146.getString());
    FIX::LegFactor LegFactor_146;
    LegFactor_146.setString("12244453");
    noLegs_0_0.set(LegFactor_146);
    InstrumentLeg_146.insert(LegFactor_146.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_146(984165251);
    noLegs_0_0.set(LegFlowScheduleType_146);
    InstrumentLeg_146.insert(LegFlowScheduleType_146.getString());
    FIX::LegInstrRegistry LegInstrRegistry_146("STRING_1881322975");
    noLegs_0_0.set(LegInstrRegistry_146);
    InstrumentLeg_146.insert(LegInstrRegistry_146.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_146("LOCALMKTDATE_1848123690");
    noLegs_0_0.set(LegInterestAccrualDate_146);
    InstrumentLeg_146.insert(LegInterestAccrualDate_146.getString());
    FIX::LegIssueDate LegIssueDate_146("LOCALMKTDATE_87951085");
    noLegs_0_0.set(LegIssueDate_146);
    InstrumentLeg_146.insert(LegIssueDate_146.getString());
    FIX::LegIssuer LegIssuer_146("STRING_1584467683");
    noLegs_0_0.set(LegIssuer_146);
    InstrumentLeg_146.insert(LegIssuer_146.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_146("STRING_1485348542");
    noLegs_0_0.set(LegLocaleOfIssue_146);
    InstrumentLeg_146.insert(LegLocaleOfIssue_146.getString());
    FIX::LegMaturityDate LegMaturityDate_146("LOCALMKTDATE_991304712");
    noLegs_0_0.set(LegMaturityDate_146);
    InstrumentLeg_146.insert(LegMaturityDate_146.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_146("MONTHYEAR_2041964762");
    noLegs_0_0.set(LegMaturityMonthYear_146);
    InstrumentLeg_146.insert(LegMaturityMonthYear_146.getString());
    FIX::LegMaturityTime LegMaturityTime_146("TZTIMEONLY_947467451");
    noLegs_0_0.set(LegMaturityTime_146);
    InstrumentLeg_146.insert(LegMaturityTime_146.getString());
    FIX::LegOptAttribute LegOptAttribute_146('1');
    noLegs_0_0.set(LegOptAttribute_146);
    InstrumentLeg_146.insert(LegOptAttribute_146.getString());
    FIX::LegOptionRatio LegOptionRatio_146;
    LegOptionRatio_146.setString("14622165");
    noLegs_0_0.set(LegOptionRatio_146);
    InstrumentLeg_146.insert(LegOptionRatio_146.getString());
    FIX::LegPool LegPool_146("STRING_1403114790");
    noLegs_0_0.set(LegPool_146);
    InstrumentLeg_146.insert(LegPool_146.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_146("STRING_1473615193");
    noLegs_0_0.set(LegPriceUnitOfMeasure_146);
    InstrumentLeg_146.insert(LegPriceUnitOfMeasure_146.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_146;
    LegPriceUnitOfMeasureQty_146.setString("17134973");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_146);
    InstrumentLeg_146.insert(LegPriceUnitOfMeasureQty_146.getString());
    FIX::LegProduct LegProduct_146(855452242);
    noLegs_0_0.set(LegProduct_146);
    InstrumentLeg_146.insert(LegProduct_146.getString());
    FIX::LegPutOrCall LegPutOrCall_146(1346764662);
    noLegs_0_0.set(LegPutOrCall_146);
    InstrumentLeg_146.insert(LegPutOrCall_146.getString());
    FIX::LegRatioQty LegRatioQty_146;
    LegRatioQty_146.setString("8200892");
    noLegs_0_0.set(LegRatioQty_146);
    InstrumentLeg_146.insert(LegRatioQty_146.getString());
    FIX::LegRedemptionDate LegRedemptionDate_146("LOCALMKTDATE_941066427");
    noLegs_0_0.set(LegRedemptionDate_146);
    InstrumentLeg_146.insert(LegRedemptionDate_146.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_146("STRING_1238460033");
    noLegs_0_0.set(LegRepoCollateralSecurityType_146);
    InstrumentLeg_146.insert(LegRepoCollateralSecurityType_146.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_146;
    LegRepurchaseRate_146.setString("64.550000");
    noLegs_0_0.set(LegRepurchaseRate_146);
    InstrumentLeg_146.insert(LegRepurchaseRate_146.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_146(229986841);
    noLegs_0_0.set(LegRepurchaseTerm_146);
    InstrumentLeg_146.insert(LegRepurchaseTerm_146.getString());
    FIX::LegSecurityDesc LegSecurityDesc_146("STRING_1422062485");
    noLegs_0_0.set(LegSecurityDesc_146);
    InstrumentLeg_146.insert(LegSecurityDesc_146.getString());
    FIX::LegSecurityExchange LegSecurityExchange_146("EXCHANGE_1397600059");
    noLegs_0_0.set(LegSecurityExchange_146);
    InstrumentLeg_146.insert(LegSecurityExchange_146.getString());
    FIX::LegSecurityID LegSecurityID_146("STRING_962545098");
    noLegs_0_0.set(LegSecurityID_146);
    InstrumentLeg_146.insert(LegSecurityID_146.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_146("STRING_622807365");
    noLegs_0_0.set(LegSecurityIDSource_146);
    InstrumentLeg_146.insert(LegSecurityIDSource_146.getString());
    FIX::LegSecuritySubType LegSecuritySubType_146("STRING_2114166050");
    noLegs_0_0.set(LegSecuritySubType_146);
    InstrumentLeg_146.insert(LegSecuritySubType_146.getString());
    FIX::LegSecurityType LegSecurityType_146("STRING_1023881869");
    noLegs_0_0.set(LegSecurityType_146);
    InstrumentLeg_146.insert(LegSecurityType_146.getString());
    FIX::LegSide LegSide_146('2');
    noLegs_0_0.set(LegSide_146);
    InstrumentLeg_146.insert(LegSide_146.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_146("STRING_1532029785");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_146);
    InstrumentLeg_146.insert(LegStateOrProvinceOfIssue_146.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_146("EUR");
    noLegs_0_0.set(LegStrikeCurrency_146);
    InstrumentLeg_146.insert(LegStrikeCurrency_146.getString());
    FIX::LegStrikePrice LegStrikePrice_146;
    LegStrikePrice_146.setString("3687113");
    noLegs_0_0.set(LegStrikePrice_146);
    InstrumentLeg_146.insert(LegStrikePrice_146.getString());
    FIX::LegSymbol LegSymbol_146("STRING_422419374");
    noLegs_0_0.set(LegSymbol_146);
    InstrumentLeg_146.insert(LegSymbol_146.getString());
    FIX::LegSymbolSfx LegSymbolSfx_146("STRING_821504837");
    noLegs_0_0.set(LegSymbolSfx_146);
    InstrumentLeg_146.insert(LegSymbolSfx_146.getString());
    FIX::LegTimeUnit LegTimeUnit_146("STRING_456662473");
    noLegs_0_0.set(LegTimeUnit_146);
    InstrumentLeg_146.insert(LegTimeUnit_146.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_146("STRING_2006887057");
    noLegs_0_0.set(LegUnitOfMeasure_146);
    InstrumentLeg_146.insert(LegUnitOfMeasure_146.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_146;
    LegUnitOfMeasureQty_146.setString("1593697");
    noLegs_0_0.set(LegUnitOfMeasureQty_146);
    InstrumentLeg_146.insert(LegUnitOfMeasureQty_146.getString());
    all_values.push_back(InstrumentLeg_146);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_282;
      FIX::LegSecurityAltID LegSecurityAltID_282("STRING_1901368171");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltID_282.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_282("STRING_1106837182");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltIDSource_282.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_282);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_283;
      FIX::LegSecurityAltID LegSecurityAltID_283("STRING_307000038");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltID_283.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_283("STRING_1216101053");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltIDSource_283.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_283);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_284;
      FIX::LegSecurityAltID LegSecurityAltID_284("STRING_362468324");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltID_284.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_284("STRING_1780615231");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltIDSource_284.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_284);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_88;
  FIX::AttachmentPoint AttachmentPoint_88;
  AttachmentPoint_88.setString("47.130000");
  msg.set(AttachmentPoint_88);
  Instrument_88.insert(AttachmentPoint_88.getString());
  FIX::CFICode CFICode_88("STRING_1217920567");
  msg.set(CFICode_88);
  Instrument_88.insert(CFICode_88.getString());
  FIX::CPProgram CPProgram_88(99);
  msg.set(CPProgram_88);
  Instrument_88.insert(CPProgram_88.getString());
  FIX::CPRegType CPRegType_88("STRING_1602203946");
  msg.set(CPRegType_88);
  Instrument_88.insert(CPRegType_88.getString());
  FIX::CapPrice CapPrice_88;
  CapPrice_88.setString("115033");
  msg.set(CapPrice_88);
  Instrument_88.insert(CapPrice_88.getString());
  FIX::ContractMultiplier ContractMultiplier_88;
  ContractMultiplier_88.setString("708726");
  msg.set(ContractMultiplier_88);
  Instrument_88.insert(ContractMultiplier_88.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_88(0);
  msg.set(ContractMultiplierUnit_88);
  Instrument_88.insert(ContractMultiplierUnit_88.getString());
  FIX::ContractSettlMonth ContractSettlMonth_88("MONTHYEAR_241490187");
  msg.set(ContractSettlMonth_88);
  Instrument_88.insert(ContractSettlMonth_88.getString());
  FIX::CountryOfIssue CountryOfIssue_88("COUNTRY_1492935116");
  msg.set(CountryOfIssue_88);
  Instrument_88.insert(CountryOfIssue_88.getString());
  FIX::CouponPaymentDate CouponPaymentDate_88("LOCALMKTDATE_1526756813");
  msg.set(CouponPaymentDate_88);
  Instrument_88.insert(CouponPaymentDate_88.getString());
  FIX::CouponRate CouponRate_88;
  CouponRate_88.setString("52.850000");
  msg.set(CouponRate_88);
  Instrument_88.insert(CouponRate_88.getString());
  FIX::CreditRating CreditRating_88("STRING_2115742481");
  msg.set(CreditRating_88);
  Instrument_88.insert(CreditRating_88.getString());
  FIX::DatedDate DatedDate_88("LOCALMKTDATE_1493439215");
  msg.set(DatedDate_88);
  Instrument_88.insert(DatedDate_88.getString());
  FIX::DetachmentPoint DetachmentPoint_88;
  DetachmentPoint_88.setString("35.060000");
  msg.set(DetachmentPoint_88);
  Instrument_88.insert(DetachmentPoint_88.getString());
  FIX::EncodedIssuer EncodedIssuer_88("DATA_2012161879");
  msg.set(EncodedIssuer_88);
  Instrument_88.insert(EncodedIssuer_88.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_88(877985353);
  msg.set(EncodedIssuerLen_88);
  Instrument_88.insert(EncodedIssuerLen_88.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_88("DATA_769013553");
  msg.set(EncodedSecurityDesc_88);
  Instrument_88.insert(EncodedSecurityDesc_88.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_88(985543026);
  msg.set(EncodedSecurityDescLen_88);
  Instrument_88.insert(EncodedSecurityDescLen_88.getString());
  FIX::ExerciseStyle ExerciseStyle_88(1);
  msg.set(ExerciseStyle_88);
  Instrument_88.insert(ExerciseStyle_88.getString());
  FIX::Factor Factor_88;
  Factor_88.setString("11914329");
  msg.set(Factor_88);
  Instrument_88.insert(Factor_88.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_88(true);
  msg.set(FlexProductEligibilityIndicator_88);
  Instrument_88.insert(FlexProductEligibilityIndicator_88.getString());
  FIX::FlexibleIndicator FlexibleIndicator_88(false);
  msg.set(FlexibleIndicator_88);
  Instrument_88.insert(FlexibleIndicator_88.getString());
  FIX::FloorPrice FloorPrice_88;
  FloorPrice_88.setString("10508363");
  msg.set(FloorPrice_88);
  Instrument_88.insert(FloorPrice_88.getString());
  FIX::FlowScheduleType FlowScheduleType_88(0);
  msg.set(FlowScheduleType_88);
  Instrument_88.insert(FlowScheduleType_88.getString());
  FIX::InstrRegistry InstrRegistry_88("STRING_1003842753");
  msg.set(InstrRegistry_88);
  Instrument_88.insert(InstrRegistry_88.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_88('8');
  msg.set(InstrmtAssignmentMethod_88);
  Instrument_88.insert(InstrmtAssignmentMethod_88.getString());
  FIX::InterestAccrualDate InterestAccrualDate_88("LOCALMKTDATE_925771130");
  msg.set(InterestAccrualDate_88);
  Instrument_88.insert(InterestAccrualDate_88.getString());
  FIX::IssueDate IssueDate_88("LOCALMKTDATE_1310842791");
  msg.set(IssueDate_88);
  Instrument_88.insert(IssueDate_88.getString());
  FIX::Issuer Issuer_88("STRING_2020821912");
  msg.set(Issuer_88);
  Instrument_88.insert(Issuer_88.getString());
  FIX::ListMethod ListMethod_88(0);
  msg.set(ListMethod_88);
  Instrument_88.insert(ListMethod_88.getString());
  FIX::LocaleOfIssue LocaleOfIssue_88("STRING_943974375");
  msg.set(LocaleOfIssue_88);
  Instrument_88.insert(LocaleOfIssue_88.getString());
  FIX::MaturityDate MaturityDate_88("LOCALMKTDATE_655452978");
  msg.set(MaturityDate_88);
  Instrument_88.insert(MaturityDate_88.getString());
  FIX::MaturityMonthYear MaturityMonthYear_88("MONTHYEAR_358676373");
  msg.set(MaturityMonthYear_88);
  Instrument_88.insert(MaturityMonthYear_88.getString());
  FIX::MaturityTime MaturityTime_88("TZTIMEONLY_1923870620");
  msg.set(MaturityTime_88);
  Instrument_88.insert(MaturityTime_88.getString());
  FIX::MinPriceIncrement MinPriceIncrement_88;
  MinPriceIncrement_88.setString("1101732");
  msg.set(MinPriceIncrement_88);
  Instrument_88.insert(MinPriceIncrement_88.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_88;
  MinPriceIncrementAmount_88.setString("3701797");
  msg.set(MinPriceIncrementAmount_88);
  Instrument_88.insert(MinPriceIncrementAmount_88.getString());
  FIX::NTPositionLimit NTPositionLimit_88(1994743251);
  msg.set(NTPositionLimit_88);
  Instrument_88.insert(NTPositionLimit_88.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_88;
  NotionalPercentageOutstanding_88.setString("0.290000");
  msg.set(NotionalPercentageOutstanding_88);
  Instrument_88.insert(NotionalPercentageOutstanding_88.getString());
  FIX::OptAttribute OptAttribute_88('6');
  msg.set(OptAttribute_88);
  Instrument_88.insert(OptAttribute_88.getString());
  FIX::OptPayoutAmount OptPayoutAmount_88;
  OptPayoutAmount_88.setString("13401947");
  msg.set(OptPayoutAmount_88);
  Instrument_88.insert(OptPayoutAmount_88.getString());
  FIX::OptPayoutType OptPayoutType_88(1);
  msg.set(OptPayoutType_88);
  Instrument_88.insert(OptPayoutType_88.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_88;
  OriginalNotionalPercentageOutstanding_88.setString("51.920000");
  msg.set(OriginalNotionalPercentageOutstanding_88);
  Instrument_88.insert(OriginalNotionalPercentageOutstanding_88.getString());
  FIX::Pool Pool_88("STRING_1308453553");
  msg.set(Pool_88);
  Instrument_88.insert(Pool_88.getString());
  FIX::PositionLimit PositionLimit_88(1112042410);
  msg.set(PositionLimit_88);
  Instrument_88.insert(PositionLimit_88.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_88("STRING_INT");
  msg.set(PriceQuoteMethod_88);
  Instrument_88.insert(PriceQuoteMethod_88.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_88("STRING_1173131784");
  msg.set(PriceUnitOfMeasure_88);
  Instrument_88.insert(PriceUnitOfMeasure_88.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_88;
  PriceUnitOfMeasureQty_88.setString("19900277");
  msg.set(PriceUnitOfMeasureQty_88);
  Instrument_88.insert(PriceUnitOfMeasureQty_88.getString());
  FIX::Product Product_90(11);
  msg.set(Product_90);
  Instrument_88.insert(Product_90.getString());
  FIX::ProductComplex ProductComplex_88("STRING_11191162");
  msg.set(ProductComplex_88);
  Instrument_88.insert(ProductComplex_88.getString());
  FIX::PutOrCall PutOrCall_88(0);
  msg.set(PutOrCall_88);
  Instrument_88.insert(PutOrCall_88.getString());
  FIX::RedemptionDate RedemptionDate_88("LOCALMKTDATE_1709101530");
  msg.set(RedemptionDate_88);
  Instrument_88.insert(RedemptionDate_88.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_88("STRING_1818239026");
  msg.set(RepoCollateralSecurityType_88);
  Instrument_88.insert(RepoCollateralSecurityType_88.getString());
  FIX::RepurchaseRate RepurchaseRate_88;
  RepurchaseRate_88.setString("64.230000");
  msg.set(RepurchaseRate_88);
  Instrument_88.insert(RepurchaseRate_88.getString());
  FIX::RepurchaseTerm RepurchaseTerm_88(612454218);
  msg.set(RepurchaseTerm_88);
  Instrument_88.insert(RepurchaseTerm_88.getString());
  FIX::RestructuringType RestructuringType_88("STRING_MM");
  msg.set(RestructuringType_88);
  Instrument_88.insert(RestructuringType_88.getString());
  FIX::SecurityDesc SecurityDesc_88("STRING_1648959176");
  msg.set(SecurityDesc_88);
  Instrument_88.insert(SecurityDesc_88.getString());
  FIX::SecurityExchange SecurityExchange_88("EXCHANGE_1417175077");
  msg.set(SecurityExchange_88);
  Instrument_88.insert(SecurityExchange_88.getString());
  FIX::SecurityGroup SecurityGroup_88("STRING_415460456");
  msg.set(SecurityGroup_88);
  Instrument_88.insert(SecurityGroup_88.getString());
  FIX::SecurityID SecurityID_88("STRING_812318320");
  msg.set(SecurityID_88);
  Instrument_88.insert(SecurityID_88.getString());
  FIX::SecurityIDSource SecurityIDSource_88("STRING_9");
  msg.set(SecurityIDSource_88);
  Instrument_88.insert(SecurityIDSource_88.getString());
  FIX::SecurityStatus SecurityStatus_89("STRING_1");
  msg.set(SecurityStatus_89);
  Instrument_88.insert(SecurityStatus_89.getString());
  FIX::SecuritySubType SecuritySubType_89("STRING_1756292695");
  msg.set(SecuritySubType_89);
  Instrument_88.insert(SecuritySubType_89.getString());
  FIX::SecurityType SecurityType_90("STRING_UST");
  msg.set(SecurityType_90);
  Instrument_88.insert(SecurityType_90.getString());
  FIX::Seniority Seniority_88("STRING_SR");
  msg.set(Seniority_88);
  Instrument_88.insert(Seniority_88.getString());
  FIX::SettlMethod SettlMethod_88('P');
  msg.set(SettlMethod_88);
  Instrument_88.insert(SettlMethod_88.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_88("STRING_2056139596");
  msg.set(SettleOnOpenFlag_88);
  Instrument_88.insert(SettleOnOpenFlag_88.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_88("STRING_285072355");
  msg.set(StateOrProvinceOfIssue_88);
  Instrument_88.insert(StateOrProvinceOfIssue_88.getString());
  FIX::StrikeCurrency StrikeCurrency_88("CHF");
  msg.set(StrikeCurrency_88);
  Instrument_88.insert(StrikeCurrency_88.getString());
  FIX::StrikeMultiplier StrikeMultiplier_88;
  StrikeMultiplier_88.setString("8967422");
  msg.set(StrikeMultiplier_88);
  Instrument_88.insert(StrikeMultiplier_88.getString());
  FIX::StrikePrice StrikePrice_88;
  StrikePrice_88.setString("5726503");
  msg.set(StrikePrice_88);
  Instrument_88.insert(StrikePrice_88.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_88(1);
  msg.set(StrikePriceBoundaryMethod_88);
  Instrument_88.insert(StrikePriceBoundaryMethod_88.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_88;
  StrikePriceBoundaryPrecision_88.setString("38.060000");
  msg.set(StrikePriceBoundaryPrecision_88);
  Instrument_88.insert(StrikePriceBoundaryPrecision_88.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_88(4);
  msg.set(StrikePriceDeterminationMethod_88);
  Instrument_88.insert(StrikePriceDeterminationMethod_88.getString());
  FIX::StrikeValue StrikeValue_88;
  StrikeValue_88.setString("8786315");
  msg.set(StrikeValue_88);
  Instrument_88.insert(StrikeValue_88.getString());
  FIX::Symbol Symbol_88("STRING_313618856");
  msg.set(Symbol_88);
  Instrument_88.insert(Symbol_88.getString());
  FIX::SymbolSfx SymbolSfx_88("STRING_WI");
  msg.set(SymbolSfx_88);
  Instrument_88.insert(SymbolSfx_88.getString());
  FIX::TimeUnit TimeUnit_88("STRING_Wk");
  msg.set(TimeUnit_88);
  Instrument_88.insert(TimeUnit_88.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_88(1);
  msg.set(UnderlyingPriceDeterminationMethod_88);
  Instrument_88.insert(UnderlyingPriceDeterminationMethod_88.getString());
  FIX::UnitOfMeasure UnitOfMeasure_88("STRING_Alw");
  msg.set(UnitOfMeasure_88);
  Instrument_88.insert(UnitOfMeasure_88.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_88;
  UnitOfMeasureQty_88.setString("18104165");
  msg.set(UnitOfMeasureQty_88);
  Instrument_88.insert(UnitOfMeasureQty_88.getString());
  FIX::ValuationMethod ValuationMethod_88("STRING_FUTDA");
  msg.set(ValuationMethod_88);
  Instrument_88.insert(ValuationMethod_88.getString());
  all_values.push_back(Instrument_88);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_179;
    FIX::ComplexEventCondition ComplexEventCondition_179(2);
    noComplexEvents_0_0.set(ComplexEventCondition_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventCondition_179.getString());
    FIX::ComplexEventPrice ComplexEventPrice_179;
    ComplexEventPrice_179.setString("10053595");
    noComplexEvents_0_0.set(ComplexEventPrice_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPrice_179.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_179(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryMethod_179.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_179;
    ComplexEventPriceBoundaryPrecision_179.setString("85.050000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryPrecision_179.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_179(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceTimeType_179.getString());
    FIX::ComplexEventType ComplexEventType_179(4);
    noComplexEvents_0_0.set(ComplexEventType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventType_179.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_179;
    ComplexOptPayoutAmount_179.setString("6218431");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexOptPayoutAmount_179.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_179);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_363;
      FIX::ComplexEventEndDate ComplexEventEndDate_363(FIX::UTCTIMESTAMP(8, 44, 21, 0, 5, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_363);
      ComplexEventDates_NoComplexEventDates_363.insert(ComplexEventEndDate_363.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_363(FIX::UTCTIMESTAMP(2, 30, 57, 10, 9, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_363);
      ComplexEventDates_NoComplexEventDates_363.insert(ComplexEventStartDate_363.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_363);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_737;
        FIX::ComplexEventEndTime ComplexEventEndTime_737(FIX::UTCTIMEONLY(8, 53, 45));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventEndTime_737.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_737(FIX::UTCTIMEONLY(22, 7, 15));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventStartTime_737.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_737);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_738;
        FIX::ComplexEventEndTime ComplexEventEndTime_738(FIX::UTCTIMEONLY(0, 13, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventEndTime_738.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_738(FIX::UTCTIMEONLY(20, 42, 43));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventStartTime_738.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_738);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_364;
      FIX::ComplexEventEndDate ComplexEventEndDate_364(FIX::UTCTIMESTAMP(3, 20, 30, 11, 5, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_364);
      ComplexEventDates_NoComplexEventDates_364.insert(ComplexEventEndDate_364.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_364(FIX::UTCTIMESTAMP(18, 9, 35, 8, 10, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_364);
      ComplexEventDates_NoComplexEventDates_364.insert(ComplexEventStartDate_364.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_364);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_739;
        FIX::ComplexEventEndTime ComplexEventEndTime_739(FIX::UTCTIMEONLY(13, 57, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventEndTime_739.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_739(FIX::UTCTIMEONLY(8, 27, 30));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventStartTime_739.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_739);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_740;
        FIX::ComplexEventEndTime ComplexEventEndTime_740(FIX::UTCTIMEONLY(19, 36, 0));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventEndTime_740.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_740(FIX::UTCTIMEONLY(12, 43, 34));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventStartTime_740.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_740);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_180;
    FIX::ComplexEventCondition ComplexEventCondition_180(2);
    noComplexEvents_0_1.set(ComplexEventCondition_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventCondition_180.getString());
    FIX::ComplexEventPrice ComplexEventPrice_180;
    ComplexEventPrice_180.setString("5136651");
    noComplexEvents_0_1.set(ComplexEventPrice_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPrice_180.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_180(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryMethod_180.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_180;
    ComplexEventPriceBoundaryPrecision_180.setString("10.030000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryPrecision_180.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_180(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceTimeType_180.getString());
    FIX::ComplexEventType ComplexEventType_180(5);
    noComplexEvents_0_1.set(ComplexEventType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventType_180.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_180;
    ComplexOptPayoutAmount_180.setString("7207433");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexOptPayoutAmount_180.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_180);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_365;
      FIX::ComplexEventEndDate ComplexEventEndDate_365(FIX::UTCTIMESTAMP(22, 18, 53, 24, 12, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_365);
      ComplexEventDates_NoComplexEventDates_365.insert(ComplexEventEndDate_365.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_365(FIX::UTCTIMESTAMP(12, 47, 2, 7, 12, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_365);
      ComplexEventDates_NoComplexEventDates_365.insert(ComplexEventStartDate_365.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_365);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_741;
        FIX::ComplexEventEndTime ComplexEventEndTime_741(FIX::UTCTIMEONLY(16, 34, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventEndTime_741.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_741(FIX::UTCTIMEONLY(14, 34, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventStartTime_741.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_741);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_742;
        FIX::ComplexEventEndTime ComplexEventEndTime_742(FIX::UTCTIMEONLY(16, 47, 18));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventEndTime_742.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_742(FIX::UTCTIMEONLY(21, 19, 24));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventStartTime_742.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_742);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_175;
    FIX::EventDate EventDate_175("LOCALMKTDATE_1852606462");
    noEvents_0_0.set(EventDate_175);
    EvntGrp_NoEvents_175.insert(EventDate_175.getString());
    FIX::EventPx EventPx_175;
    EventPx_175.setString("11046329");
    noEvents_0_0.set(EventPx_175);
    EvntGrp_NoEvents_175.insert(EventPx_175.getString());
    FIX::EventText EventText_175("STRING_19188248");
    noEvents_0_0.set(EventText_175);
    EvntGrp_NoEvents_175.insert(EventText_175.getString());
    FIX::EventTime EventTime_175(FIX::UTCTIMESTAMP(6, 6, 48, 10, 10, 2014));
    noEvents_0_0.set(EventTime_175);
    EvntGrp_NoEvents_175.insert(EventTime_175.getString());
    FIX::EventType EventType_175(6);
    noEvents_0_0.set(EventType_175);
    EvntGrp_NoEvents_175.insert(EventType_175.getString());
    all_values.push_back(EvntGrp_NoEvents_175);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_176;
    FIX::EventDate EventDate_176("LOCALMKTDATE_1386755541");
    noEvents_0_1.set(EventDate_176);
    EvntGrp_NoEvents_176.insert(EventDate_176.getString());
    FIX::EventPx EventPx_176;
    EventPx_176.setString("10636465");
    noEvents_0_1.set(EventPx_176);
    EvntGrp_NoEvents_176.insert(EventPx_176.getString());
    FIX::EventText EventText_176("STRING_1024975335");
    noEvents_0_1.set(EventText_176);
    EvntGrp_NoEvents_176.insert(EventText_176.getString());
    FIX::EventTime EventTime_176(FIX::UTCTIMESTAMP(16, 41, 55, 7, 8, 2004));
    noEvents_0_1.set(EventTime_176);
    EvntGrp_NoEvents_176.insert(EventTime_176.getString());
    FIX::EventType EventType_176(1);
    noEvents_0_1.set(EventType_176);
    EvntGrp_NoEvents_176.insert(EventType_176.getString());
    all_values.push_back(EvntGrp_NoEvents_176);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_184;
    FIX::InstrumentPartyID InstrumentPartyID_184("STRING_527725070");
    noInstrumentParties_0_0.set(InstrumentPartyID_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyID_184.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_184('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyIDSource_184.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_184(781916208);
    noInstrumentParties_0_0.set(InstrumentPartyRole_184);
    InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyRole_184.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_184);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357;
      FIX::InstrumentPartySubID InstrumentPartySubID_357("STRING_813569304");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubID_357.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_357(509235120);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubIDType_357.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_185;
    FIX::InstrumentPartyID InstrumentPartyID_185("STRING_1004948208");
    noInstrumentParties_0_1.set(InstrumentPartyID_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyID_185.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_185('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyIDSource_185.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_185(214357934);
    noInstrumentParties_0_1.set(InstrumentPartyRole_185);
    InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyRole_185.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_185);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358;
      FIX::InstrumentPartySubID InstrumentPartySubID_358("STRING_1463202775");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubID_358.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_358(866080888);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubIDType_358.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359;
      FIX::InstrumentPartySubID InstrumentPartySubID_359("STRING_1823083637");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubID_359.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_359(1392381053);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubIDType_359.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_186;
    FIX::InstrumentPartyID InstrumentPartyID_186("STRING_1163587456");
    noInstrumentParties_0_2.set(InstrumentPartyID_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyID_186.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_186('6');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyIDSource_186.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_186(244914450);
    noInstrumentParties_0_2.set(InstrumentPartyRole_186);
    InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyRole_186.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_186);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360;
      FIX::InstrumentPartySubID InstrumentPartySubID_360("STRING_140347165");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubID_360.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_360(1631669991);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubIDType_360.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361;
      FIX::InstrumentPartySubID InstrumentPartySubID_361("STRING_1578866050");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubID_361.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_361(1165322500);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubIDType_361.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362;
      FIX::InstrumentPartySubID InstrumentPartySubID_362("STRING_1184164075");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubID_362.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_362(529905042);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubIDType_362.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_164;
    FIX::SecurityAltID SecurityAltID_164("STRING_1396472871");
    noSecurityAltID_0_0.set(SecurityAltID_164);
    SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltID_164.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_164("STRING_221155781");
    noSecurityAltID_0_0.set(SecurityAltIDSource_164);
    SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltIDSource_164.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_165;
    FIX::SecurityAltID SecurityAltID_165("STRING_950483757");
    noSecurityAltID_0_1.set(SecurityAltID_165);
    SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltID_165.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_165("STRING_1509657253");
    noSecurityAltID_0_1.set(SecurityAltIDSource_165);
    SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltIDSource_165.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_176;
  FIX::SecurityXML SecurityXML_177("XMLDATA_1011025241");
  msg.set(SecurityXML_177);
  FIX::SecurityXMLLen SecurityXMLLen_88(578340748);
  msg.set(SecurityXMLLen_88);
  FIX::SecurityXMLSchema SecurityXMLSchema_88("STRING_2037382323");
  msg.set(SecurityXMLSchema_88);
  SecurityXML_176.insert(SecurityXMLSchema_88.getString());
  all_values.push_back(SecurityXML_176);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_17;
  FIX::DeliveryForm DeliveryForm_17(1);
  msg.set(DeliveryForm_17);
  InstrumentExtension_17.insert(DeliveryForm_17.getString());
  FIX::PctAtRisk PctAtRisk_17;
  PctAtRisk_17.setString("69.560000");
  msg.set(PctAtRisk_17);
  InstrumentExtension_17.insert(PctAtRisk_17.getString());
  all_values.push_back(InstrumentExtension_17);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_34;
    FIX::InstrAttribType InstrAttribType_34(16);
    noInstrAttrib_0_0.set(InstrAttribType_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribType_34.getString());
    FIX::InstrAttribValue InstrAttribValue_34("STRING_1869492076");
    noInstrAttrib_0_0.set(InstrAttribValue_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribValue_34.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_34);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_35;
    FIX::InstrAttribType InstrAttribType_35(9);
    noInstrAttrib_0_1.set(InstrAttribType_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribType_35.getString());
    FIX::InstrAttribValue InstrAttribValue_35("STRING_90171564");
    noInstrAttrib_0_1.set(InstrAttribValue_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribValue_35.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_35);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_142;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_142("DATA_1053844111");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuer_142.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_142(1553374339);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuerLen_142.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_142("DATA_802447250");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDesc_142.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_142(729444101);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDescLen_142.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_142;
    UnderlyingAdjustedQuantity_142.setString("7982717");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_142);
    UnderlyingInstrument_142.insert(UnderlyingAdjustedQuantity_142.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_142;
    UnderlyingAllocationPercent_142.setString("47.070000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_142);
    UnderlyingInstrument_142.insert(UnderlyingAllocationPercent_142.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_142;
    UnderlyingAttachmentPoint_142.setString("47.880000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingAttachmentPoint_142.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_142("STRING_1043186194");
    noUnderlyings_0_0.set(UnderlyingCFICode_142);
    UnderlyingInstrument_142.insert(UnderlyingCFICode_142.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_142("STRING_333770518");
    noUnderlyings_0_0.set(UnderlyingCPProgram_142);
    UnderlyingInstrument_142.insert(UnderlyingCPProgram_142.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_142("STRING_1536341953");
    noUnderlyings_0_0.set(UnderlyingCPRegType_142);
    UnderlyingInstrument_142.insert(UnderlyingCPRegType_142.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_142;
    UnderlyingCapValue_142.setString("5273725");
    noUnderlyings_0_0.set(UnderlyingCapValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCapValue_142.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_142;
    UnderlyingCashAmount_142.setString("19126365");
    noUnderlyings_0_0.set(UnderlyingCashAmount_142);
    UnderlyingInstrument_142.insert(UnderlyingCashAmount_142.getString());
    FIX::UnderlyingCashType UnderlyingCashType_142("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_142);
    UnderlyingInstrument_142.insert(UnderlyingCashType_142.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_142;
    UnderlyingContractMultiplier_142.setString("17115366");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplier_142.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_142(295057963);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplierUnit_142.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_142("COUNTRY_420412140");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingCountryOfIssue_142.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_142("LOCALMKTDATE_960525836");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponPaymentDate_142.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_142;
    UnderlyingCouponRate_142.setString("37.440000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponRate_142.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_142("STRING_1370895897");
    noUnderlyings_0_0.set(UnderlyingCreditRating_142);
    UnderlyingInstrument_142.insert(UnderlyingCreditRating_142.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_142("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrency_142.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_142;
    UnderlyingCurrentValue_142.setString("19492366");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrentValue_142.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_142;
    UnderlyingDetachmentPoint_142.setString("81.170000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingDetachmentPoint_142.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_142;
    UnderlyingDirtyPrice_142.setString("15073103");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingDirtyPrice_142.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_142;
    UnderlyingEndPrice_142.setString("11620099");
    noUnderlyings_0_0.set(UnderlyingEndPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingEndPrice_142.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_142;
    UnderlyingEndValue_142.setString("2993964");
    noUnderlyings_0_0.set(UnderlyingEndValue_142);
    UnderlyingInstrument_142.insert(UnderlyingEndValue_142.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_142(153467403);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_142);
    UnderlyingInstrument_142.insert(UnderlyingExerciseStyle_142.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_142;
    UnderlyingFXRate_142.setString("8840183");
    noUnderlyings_0_0.set(UnderlyingFXRate_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRate_142.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_142('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRateCalc_142.getString());
    FIX::UnderlyingFactor UnderlyingFactor_142;
    UnderlyingFactor_142.setString("2436389");
    noUnderlyings_0_0.set(UnderlyingFactor_142);
    UnderlyingInstrument_142.insert(UnderlyingFactor_142.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_142(820384745);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_142);
    UnderlyingInstrument_142.insert(UnderlyingFlowScheduleType_142.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_142("STRING_297503508");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_142);
    UnderlyingInstrument_142.insert(UnderlyingInstrRegistry_142.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_142("LOCALMKTDATE_1797013306");
    noUnderlyings_0_0.set(UnderlyingIssueDate_142);
    UnderlyingInstrument_142.insert(UnderlyingIssueDate_142.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_142("STRING_1622831995");
    noUnderlyings_0_0.set(UnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(UnderlyingIssuer_142.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_142("STRING_1026947609");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingLocaleOfIssue_142.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_142("LOCALMKTDATE_447801402");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityDate_142.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_142("MONTHYEAR_1441383054");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityMonthYear_142.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_142("TZTIMEONLY_275458749");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityTime_142.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_142;
    UnderlyingNotionalPercentageOutstanding_142.setString("75.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_142('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_142);
    UnderlyingInstrument_142.insert(UnderlyingOptAttribute_142.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_142;
    UnderlyingOriginalNotionalPercentageOutstanding_142.setString("7.030000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingOriginalNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_142("STRING_2018360135");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasure_142.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_142;
    UnderlyingPriceUnitOfMeasureQty_142.setString("15403064");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasureQty_142.getString());
    FIX::UnderlyingProduct UnderlyingProduct_142(218497861);
    noUnderlyings_0_0.set(UnderlyingProduct_142);
    UnderlyingInstrument_142.insert(UnderlyingProduct_142.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_142(1582413100);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_142);
    UnderlyingInstrument_142.insert(UnderlyingPutOrCall_142.getString());
    FIX::UnderlyingPx UnderlyingPx_142;
    UnderlyingPx_142.setString("18353644");
    noUnderlyings_0_0.set(UnderlyingPx_142);
    UnderlyingInstrument_142.insert(UnderlyingPx_142.getString());
    FIX::UnderlyingQty UnderlyingQty_142;
    UnderlyingQty_142.setString("6389100");
    noUnderlyings_0_0.set(UnderlyingQty_142);
    UnderlyingInstrument_142.insert(UnderlyingQty_142.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_142("LOCALMKTDATE_395455289");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_142);
    UnderlyingInstrument_142.insert(UnderlyingRedemptionDate_142.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_142("STRING_204094552");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingRepoCollateralSecurityType_142.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_142;
    UnderlyingRepurchaseRate_142.setString("58.980000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseRate_142.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_142(718154730);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseTerm_142.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_142("STRING_1731333538");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_142);
    UnderlyingInstrument_142.insert(UnderlyingRestructuringType_142.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_142("STRING_1811558896");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityDesc_142.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_142("EXCHANGE_930752847");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityExchange_142.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_142("STRING_1091160257");
    noUnderlyings_0_0.set(UnderlyingSecurityID_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityID_142.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_142("STRING_826085202");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityIDSource_142.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_142("STRING_1230149324");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecuritySubType_142.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_142("STRING_1244627660");
    noUnderlyings_0_0.set(UnderlyingSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityType_142.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_142("STRING_1710103584");
    noUnderlyings_0_0.set(UnderlyingSeniority_142);
    UnderlyingInstrument_142.insert(UnderlyingSeniority_142.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_142("STRING_473808720");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlMethod_142.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_142(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlementType_142.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_142;
    UnderlyingStartValue_142.setString("3830046");
    noUnderlyings_0_0.set(UnderlyingStartValue_142);
    UnderlyingInstrument_142.insert(UnderlyingStartValue_142.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_142("STRING_771312228");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingStateOrProvinceOfIssue_142.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_142("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikeCurrency_142.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_142;
    UnderlyingStrikePrice_142.setString("17982598");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikePrice_142.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_142("STRING_1585597689");
    noUnderlyings_0_0.set(UnderlyingSymbol_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbol_142.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_142("STRING_1299736083");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbolSfx_142.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_142("STRING_2073718587");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingTimeUnit_142.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_142("STRING_929101638");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasure_142.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_142;
    UnderlyingUnitOfMeasureQty_142.setString("9274060");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasureQty_142.getString());
    all_values.push_back(UnderlyingInstrument_142);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_285;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_285("STRING_799978125");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltID_285.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_285("STRING_320228853");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltIDSource_285.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_278;
      FIX::UnderlyingStipType UnderlyingStipType_278("STRING_234907577");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_278);
      UnderlyingStipulations_NoUnderlyingStips_278.insert(UnderlyingStipType_278.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_278("STRING_8109661");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_278);
      UnderlyingStipulations_NoUnderlyingStips_278.insert(UnderlyingStipValue_278.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_278);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_279;
      FIX::UnderlyingStipType UnderlyingStipType_279("STRING_447959856");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_279);
      UnderlyingStipulations_NoUnderlyingStips_279.insert(UnderlyingStipType_279.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_279("STRING_630362866");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_279);
      UnderlyingStipulations_NoUnderlyingStips_279.insert(UnderlyingStipValue_279.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_279);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_272("STRING_310282106");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyID_272.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_272('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyIDSource_272.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_272(1943537752);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyRole_272.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_547("STRING_131786796");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubID_547.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_547(887214361);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubIDType_547.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_273;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_273("STRING_800442556");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_273);
      UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyID_273.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_273('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_273);
      UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyIDSource_273.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_273(2131842021);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_273);
      UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyRole_273.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_273);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_548("STRING_1835744841");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubID_548.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_548(1472625001);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubIDType_548.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_274;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_274("STRING_746067174");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_274);
      UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyID_274.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_274('4');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_274);
      UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyIDSource_274.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_274(462937640);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_274);
      UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyRole_274.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_274);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_549("STRING_110349611");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubID_549.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_549(2048535329);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubIDType_549.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
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
