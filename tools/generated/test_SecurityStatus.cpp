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
  BuyVolume_0.setString("14910793");
  msg.set(BuyVolume_0);
  SecurityStatus_79.insert(BuyVolume_0.getString());
  FIX::CorporateAction CorporateAction_9("MULTIPLECHARVALUE_C");
  msg.set(CorporateAction_9);
  SecurityStatus_79.insert(CorporateAction_9.getString());
  FIX::Currency Currency_61("CHF");
  msg.set(Currency_61);
  SecurityStatus_79.insert(Currency_61.getString());
  FIX::DueToRelated DueToRelated_0(true);
  msg.set(DueToRelated_0);
  SecurityStatus_79.insert(DueToRelated_0.getString());
  FIX::EncodedText EncodedText_85("DATA_1122919576");
  msg.set(EncodedText_85);
  SecurityStatus_79.insert(EncodedText_85.getString());
  FIX::EncodedTextLen EncodedTextLen_85(1349505290);
  msg.set(EncodedTextLen_85);
  SecurityStatus_79.insert(EncodedTextLen_85.getString());
  FIX::FinancialStatus FinancialStatus_4("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_4);
  SecurityStatus_79.insert(FinancialStatus_4.getString());
  FIX::FirstPx FirstPx_3;
  FirstPx_3.setString("18741776");
  msg.set(FirstPx_3);
  SecurityStatus_79.insert(FirstPx_3.getString());
  FIX::HaltReasonInt HaltReasonInt_3(2);
  msg.set(HaltReasonInt_3);
  FIX::HighPx HighPx_3;
  HighPx_3.setString("21104052");
  msg.set(HighPx_3);
  SecurityStatus_79.insert(HighPx_3.getString());
  FIX::InViewOfCommon InViewOfCommon_0(true);
  msg.set(InViewOfCommon_0);
  SecurityStatus_79.insert(InViewOfCommon_0.getString());
  FIX::LastPx LastPx_14;
  LastPx_14.setString("13941265");
  msg.set(LastPx_14);
  SecurityStatus_79.insert(LastPx_14.getString());
  FIX::LowPx LowPx_3;
  LowPx_3.setString("993936");
  msg.set(LowPx_3);
  SecurityStatus_79.insert(LowPx_3.getString());
  FIX::MDBookType MDBookType_67(3);
  msg.set(MDBookType_67);
  SecurityStatus_79.insert(MDBookType_67.getString());
  FIX::MarketDepth MarketDepth_68(1637427924);
  msg.set(MarketDepth_68);
  SecurityStatus_79.insert(MarketDepth_68.getString());
  FIX::MarketID MarketID_24("EXCHANGE_1987753837");
  msg.set(MarketID_24);
  SecurityStatus_79.insert(MarketID_24.getString());
  FIX::MarketSegmentID MarketSegmentID_24("STRING_161278490");
  msg.set(MarketSegmentID_24);
  SecurityStatus_79.insert(MarketSegmentID_24.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_0("STRING_1380797558");
  msg.set(SecurityStatusReqID_0);
  SecurityStatus_79.insert(SecurityStatusReqID_0.getString());
  FIX::SecurityTradingEvent SecurityTradingEvent_0(7);
  msg.set(SecurityTradingEvent_0);
  SecurityStatus_79.insert(SecurityTradingEvent_0.getString());
  FIX::SecurityTradingStatus SecurityTradingStatus_3(5);
  msg.set(SecurityTradingStatus_3);
  SecurityStatus_79.insert(SecurityTradingStatus_3.getString());
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("13652706");
  msg.set(SellVolume_0);
  SecurityStatus_79.insert(SellVolume_0.getString());
  FIX::Text Text_85("STRING_1345126782");
  msg.set(Text_85);
  SecurityStatus_79.insert(Text_85.getString());
  FIX::TradingSessionID TradingSessionID_96("STRING_3");
  msg.set(TradingSessionID_96);
  SecurityStatus_79.insert(TradingSessionID_96.getString());
  FIX::TradingSessionSubID TradingSessionSubID_96("STRING_5");
  msg.set(TradingSessionSubID_96);
  SecurityStatus_79.insert(TradingSessionSubID_96.getString());
  FIX::TransactTime TransactTime_57(FIX::UTCTIMESTAMP(8, 29, 17, 9, 12017));
  msg.set(TransactTime_57);
  SecurityStatus_79.insert(TransactTime_57.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_2(true);
  msg.set(UnsolicitedIndicator_2);
  SecurityStatus_79.insert(UnsolicitedIndicator_2.getString());
  all_values.push_back(SecurityStatus_79);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  FIX::ApplID ApplID_16("STRING_405449562");
  msg.set(ApplID_16);
  ApplicationSequenceControl_16.insert(ApplID_16.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_16(197884519);
  msg.set(ApplLastSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplLastSeqNum_16.getString());
  FIX::ApplResendFlag ApplResendFlag_16(true);
  msg.set(ApplResendFlag_16);
  ApplicationSequenceControl_16.insert(ApplResendFlag_16.getString());
  FIX::ApplSeqNum ApplSeqNum_16(1528369138);
  msg.set(ApplSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplSeqNum_16.getString());
  all_values.push_back(ApplicationSequenceControl_16);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    FIX::EncodedLegIssuer EncodedLegIssuer_115("DATA_1918296016");
    noLegs_0_0.set(EncodedLegIssuer_115);
    InstrumentLeg_115.insert(EncodedLegIssuer_115.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_115(1255063093);
    noLegs_0_0.set(EncodedLegIssuerLen_115);
    InstrumentLeg_115.insert(EncodedLegIssuerLen_115.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_115("DATA_471471441");
    noLegs_0_0.set(EncodedLegSecurityDesc_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDesc_115.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_115(1881217631);
    noLegs_0_0.set(EncodedLegSecurityDescLen_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDescLen_115.getString());
    FIX::LegCFICode LegCFICode_115("STRING_2017620077");
    noLegs_0_0.set(LegCFICode_115);
    InstrumentLeg_115.insert(LegCFICode_115.getString());
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("18655980");
    noLegs_0_0.set(LegContractMultiplier_115);
    InstrumentLeg_115.insert(LegContractMultiplier_115.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_115(1980611321);
    noLegs_0_0.set(LegContractMultiplierUnit_115);
    InstrumentLeg_115.insert(LegContractMultiplierUnit_115.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_115("MONTHYEAR_516927800");
    noLegs_0_0.set(LegContractSettlMonth_115);
    InstrumentLeg_115.insert(LegContractSettlMonth_115.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_115("COUNTRY_1355542279");
    noLegs_0_0.set(LegCountryOfIssue_115);
    InstrumentLeg_115.insert(LegCountryOfIssue_115.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_115("LOCALMKTDATE_1820881510");
    noLegs_0_0.set(LegCouponPaymentDate_115);
    InstrumentLeg_115.insert(LegCouponPaymentDate_115.getString());
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("62.900000");
    noLegs_0_0.set(LegCouponRate_115);
    InstrumentLeg_115.insert(LegCouponRate_115.getString());
    FIX::LegCreditRating LegCreditRating_115("STRING_588856189");
    noLegs_0_0.set(LegCreditRating_115);
    InstrumentLeg_115.insert(LegCreditRating_115.getString());
    FIX::LegCurrency LegCurrency_115("CAN");
    noLegs_0_0.set(LegCurrency_115);
    InstrumentLeg_115.insert(LegCurrency_115.getString());
    FIX::LegDatedDate LegDatedDate_115("LOCALMKTDATE_1954126882");
    noLegs_0_0.set(LegDatedDate_115);
    InstrumentLeg_115.insert(LegDatedDate_115.getString());
    FIX::LegExerciseStyle LegExerciseStyle_115(1307071459);
    noLegs_0_0.set(LegExerciseStyle_115);
    InstrumentLeg_115.insert(LegExerciseStyle_115.getString());
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("2182801");
    noLegs_0_0.set(LegFactor_115);
    InstrumentLeg_115.insert(LegFactor_115.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_115(1885266281);
    noLegs_0_0.set(LegFlowScheduleType_115);
    InstrumentLeg_115.insert(LegFlowScheduleType_115.getString());
    FIX::LegInstrRegistry LegInstrRegistry_115("STRING_556459183");
    noLegs_0_0.set(LegInstrRegistry_115);
    InstrumentLeg_115.insert(LegInstrRegistry_115.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_115("LOCALMKTDATE_1107688970");
    noLegs_0_0.set(LegInterestAccrualDate_115);
    InstrumentLeg_115.insert(LegInterestAccrualDate_115.getString());
    FIX::LegIssueDate LegIssueDate_115("LOCALMKTDATE_1089064082");
    noLegs_0_0.set(LegIssueDate_115);
    InstrumentLeg_115.insert(LegIssueDate_115.getString());
    FIX::LegIssuer LegIssuer_115("STRING_1472765460");
    noLegs_0_0.set(LegIssuer_115);
    InstrumentLeg_115.insert(LegIssuer_115.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_115("STRING_1074795964");
    noLegs_0_0.set(LegLocaleOfIssue_115);
    InstrumentLeg_115.insert(LegLocaleOfIssue_115.getString());
    FIX::LegMaturityDate LegMaturityDate_115("LOCALMKTDATE_1317323234");
    noLegs_0_0.set(LegMaturityDate_115);
    InstrumentLeg_115.insert(LegMaturityDate_115.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_115("MONTHYEAR_1732667442");
    noLegs_0_0.set(LegMaturityMonthYear_115);
    InstrumentLeg_115.insert(LegMaturityMonthYear_115.getString());
    FIX::LegMaturityTime LegMaturityTime_115("TZTIMEONLY_772303784");
    noLegs_0_0.set(LegMaturityTime_115);
    InstrumentLeg_115.insert(LegMaturityTime_115.getString());
    FIX::LegOptAttribute LegOptAttribute_115('1');
    noLegs_0_0.set(LegOptAttribute_115);
    InstrumentLeg_115.insert(LegOptAttribute_115.getString());
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("19305519");
    noLegs_0_0.set(LegOptionRatio_115);
    InstrumentLeg_115.insert(LegOptionRatio_115.getString());
    FIX::LegPool LegPool_115("STRING_443025543");
    noLegs_0_0.set(LegPool_115);
    InstrumentLeg_115.insert(LegPool_115.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_115("STRING_1103658287");
    noLegs_0_0.set(LegPriceUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasure_115.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("13304581");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasureQty_115.getString());
    FIX::LegProduct LegProduct_115(213837911);
    noLegs_0_0.set(LegProduct_115);
    InstrumentLeg_115.insert(LegProduct_115.getString());
    FIX::LegPutOrCall LegPutOrCall_115(211237732);
    noLegs_0_0.set(LegPutOrCall_115);
    InstrumentLeg_115.insert(LegPutOrCall_115.getString());
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("18019295");
    noLegs_0_0.set(LegRatioQty_115);
    InstrumentLeg_115.insert(LegRatioQty_115.getString());
    FIX::LegRedemptionDate LegRedemptionDate_115("LOCALMKTDATE_2095055542");
    noLegs_0_0.set(LegRedemptionDate_115);
    InstrumentLeg_115.insert(LegRedemptionDate_115.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_115("STRING_81374161");
    noLegs_0_0.set(LegRepoCollateralSecurityType_115);
    InstrumentLeg_115.insert(LegRepoCollateralSecurityType_115.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("39.180000");
    noLegs_0_0.set(LegRepurchaseRate_115);
    InstrumentLeg_115.insert(LegRepurchaseRate_115.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_115(1928183215);
    noLegs_0_0.set(LegRepurchaseTerm_115);
    InstrumentLeg_115.insert(LegRepurchaseTerm_115.getString());
    FIX::LegSecurityDesc LegSecurityDesc_115("STRING_598301962");
    noLegs_0_0.set(LegSecurityDesc_115);
    InstrumentLeg_115.insert(LegSecurityDesc_115.getString());
    FIX::LegSecurityExchange LegSecurityExchange_115("EXCHANGE_728102549");
    noLegs_0_0.set(LegSecurityExchange_115);
    InstrumentLeg_115.insert(LegSecurityExchange_115.getString());
    FIX::LegSecurityID LegSecurityID_115("STRING_1601581077");
    noLegs_0_0.set(LegSecurityID_115);
    InstrumentLeg_115.insert(LegSecurityID_115.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_115("STRING_1276508252");
    noLegs_0_0.set(LegSecurityIDSource_115);
    InstrumentLeg_115.insert(LegSecurityIDSource_115.getString());
    FIX::LegSecuritySubType LegSecuritySubType_115("STRING_1316958738");
    noLegs_0_0.set(LegSecuritySubType_115);
    InstrumentLeg_115.insert(LegSecuritySubType_115.getString());
    FIX::LegSecurityType LegSecurityType_115("STRING_1563525754");
    noLegs_0_0.set(LegSecurityType_115);
    InstrumentLeg_115.insert(LegSecurityType_115.getString());
    FIX::LegSide LegSide_115('2');
    noLegs_0_0.set(LegSide_115);
    InstrumentLeg_115.insert(LegSide_115.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_115("STRING_1123601972");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_115);
    InstrumentLeg_115.insert(LegStateOrProvinceOfIssue_115.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_115("USD");
    noLegs_0_0.set(LegStrikeCurrency_115);
    InstrumentLeg_115.insert(LegStrikeCurrency_115.getString());
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("8613846");
    noLegs_0_0.set(LegStrikePrice_115);
    InstrumentLeg_115.insert(LegStrikePrice_115.getString());
    FIX::LegSymbol LegSymbol_115("STRING_1279572749");
    noLegs_0_0.set(LegSymbol_115);
    InstrumentLeg_115.insert(LegSymbol_115.getString());
    FIX::LegSymbolSfx LegSymbolSfx_115("STRING_1223059808");
    noLegs_0_0.set(LegSymbolSfx_115);
    InstrumentLeg_115.insert(LegSymbolSfx_115.getString());
    FIX::LegTimeUnit LegTimeUnit_115("STRING_1950448688");
    noLegs_0_0.set(LegTimeUnit_115);
    InstrumentLeg_115.insert(LegTimeUnit_115.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_115("STRING_604854561");
    noLegs_0_0.set(LegUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegUnitOfMeasure_115.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("1503721");
    noLegs_0_0.set(LegUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegUnitOfMeasureQty_115.getString());
    all_values.push_back(InstrumentLeg_115);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
      FIX::LegSecurityAltID LegSecurityAltID_208("STRING_190038355");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltID_208.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_208("STRING_922675909");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltIDSource_208.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
      FIX::LegSecurityAltID LegSecurityAltID_209("STRING_695577423");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltID_209.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_209("STRING_2120590316");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltIDSource_209.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
      FIX::LegSecurityAltID LegSecurityAltID_210("STRING_1365701452");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_210);
      LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltID_210.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_210("STRING_1799235710");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_210);
      LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltIDSource_210.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_79;
  FIX::AttachmentPoint AttachmentPoint_79;
  AttachmentPoint_79.setString("47.900000");
  msg.set(AttachmentPoint_79);
  Instrument_79.insert(AttachmentPoint_79.getString());
  FIX::CFICode CFICode_79("STRING_1579539363");
  msg.set(CFICode_79);
  Instrument_79.insert(CFICode_79.getString());
  FIX::CPProgram CPProgram_79(1);
  msg.set(CPProgram_79);
  Instrument_79.insert(CPProgram_79.getString());
  FIX::CPRegType CPRegType_79("STRING_958010706");
  msg.set(CPRegType_79);
  Instrument_79.insert(CPRegType_79.getString());
  FIX::CapPrice CapPrice_79;
  CapPrice_79.setString("15271112");
  msg.set(CapPrice_79);
  Instrument_79.insert(CapPrice_79.getString());
  FIX::ContractMultiplier ContractMultiplier_79;
  ContractMultiplier_79.setString("20918476");
  msg.set(ContractMultiplier_79);
  Instrument_79.insert(ContractMultiplier_79.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_79(1);
  msg.set(ContractMultiplierUnit_79);
  Instrument_79.insert(ContractMultiplierUnit_79.getString());
  FIX::ContractSettlMonth ContractSettlMonth_79("MONTHYEAR_1307810824");
  msg.set(ContractSettlMonth_79);
  Instrument_79.insert(ContractSettlMonth_79.getString());
  FIX::CountryOfIssue CountryOfIssue_79("COUNTRY_542665917");
  msg.set(CountryOfIssue_79);
  Instrument_79.insert(CountryOfIssue_79.getString());
  FIX::CouponPaymentDate CouponPaymentDate_79("LOCALMKTDATE_1058673525");
  msg.set(CouponPaymentDate_79);
  Instrument_79.insert(CouponPaymentDate_79.getString());
  FIX::CouponRate CouponRate_79;
  CouponRate_79.setString("82.530000");
  msg.set(CouponRate_79);
  Instrument_79.insert(CouponRate_79.getString());
  FIX::CreditRating CreditRating_79("STRING_1819174170");
  msg.set(CreditRating_79);
  Instrument_79.insert(CreditRating_79.getString());
  FIX::DatedDate DatedDate_79("LOCALMKTDATE_228148615");
  msg.set(DatedDate_79);
  Instrument_79.insert(DatedDate_79.getString());
  FIX::DetachmentPoint DetachmentPoint_79;
  DetachmentPoint_79.setString("3.600000");
  msg.set(DetachmentPoint_79);
  Instrument_79.insert(DetachmentPoint_79.getString());
  FIX::EncodedIssuer EncodedIssuer_79("DATA_1716264894");
  msg.set(EncodedIssuer_79);
  Instrument_79.insert(EncodedIssuer_79.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_79(1351750588);
  msg.set(EncodedIssuerLen_79);
  Instrument_79.insert(EncodedIssuerLen_79.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_79("DATA_901063925");
  msg.set(EncodedSecurityDesc_79);
  Instrument_79.insert(EncodedSecurityDesc_79.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_79(1831635732);
  msg.set(EncodedSecurityDescLen_79);
  Instrument_79.insert(EncodedSecurityDescLen_79.getString());
  FIX::ExerciseStyle ExerciseStyle_79(1);
  msg.set(ExerciseStyle_79);
  Instrument_79.insert(ExerciseStyle_79.getString());
  FIX::Factor Factor_79;
  Factor_79.setString("331530");
  msg.set(Factor_79);
  Instrument_79.insert(Factor_79.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_79(true);
  msg.set(FlexProductEligibilityIndicator_79);
  Instrument_79.insert(FlexProductEligibilityIndicator_79.getString());
  FIX::FlexibleIndicator FlexibleIndicator_79(false);
  msg.set(FlexibleIndicator_79);
  Instrument_79.insert(FlexibleIndicator_79.getString());
  FIX::FloorPrice FloorPrice_79;
  FloorPrice_79.setString("6380075");
  msg.set(FloorPrice_79);
  Instrument_79.insert(FloorPrice_79.getString());
  FIX::FlowScheduleType FlowScheduleType_79(2);
  msg.set(FlowScheduleType_79);
  Instrument_79.insert(FlowScheduleType_79.getString());
  FIX::InstrRegistry InstrRegistry_79("STRING_988904860");
  msg.set(InstrRegistry_79);
  Instrument_79.insert(InstrRegistry_79.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_79('8');
  msg.set(InstrmtAssignmentMethod_79);
  Instrument_79.insert(InstrmtAssignmentMethod_79.getString());
  FIX::InterestAccrualDate InterestAccrualDate_79("LOCALMKTDATE_1980259926");
  msg.set(InterestAccrualDate_79);
  Instrument_79.insert(InterestAccrualDate_79.getString());
  FIX::IssueDate IssueDate_79("LOCALMKTDATE_1684482283");
  msg.set(IssueDate_79);
  Instrument_79.insert(IssueDate_79.getString());
  FIX::Issuer Issuer_79("STRING_801152612");
  msg.set(Issuer_79);
  Instrument_79.insert(Issuer_79.getString());
  FIX::ListMethod ListMethod_79(0);
  msg.set(ListMethod_79);
  Instrument_79.insert(ListMethod_79.getString());
  FIX::LocaleOfIssue LocaleOfIssue_79("STRING_1336234345");
  msg.set(LocaleOfIssue_79);
  Instrument_79.insert(LocaleOfIssue_79.getString());
  FIX::MaturityDate MaturityDate_79("LOCALMKTDATE_2104717402");
  msg.set(MaturityDate_79);
  Instrument_79.insert(MaturityDate_79.getString());
  FIX::MaturityMonthYear MaturityMonthYear_79("MONTHYEAR_630533445");
  msg.set(MaturityMonthYear_79);
  Instrument_79.insert(MaturityMonthYear_79.getString());
  FIX::MaturityTime MaturityTime_79("TZTIMEONLY_1199224139");
  msg.set(MaturityTime_79);
  Instrument_79.insert(MaturityTime_79.getString());
  FIX::MinPriceIncrement MinPriceIncrement_79;
  MinPriceIncrement_79.setString("9152444");
  msg.set(MinPriceIncrement_79);
  Instrument_79.insert(MinPriceIncrement_79.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
  MinPriceIncrementAmount_79.setString("101610");
  msg.set(MinPriceIncrementAmount_79);
  Instrument_79.insert(MinPriceIncrementAmount_79.getString());
  FIX::NTPositionLimit NTPositionLimit_79(1143588094);
  msg.set(NTPositionLimit_79);
  Instrument_79.insert(NTPositionLimit_79.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
  NotionalPercentageOutstanding_79.setString("54.360000");
  msg.set(NotionalPercentageOutstanding_79);
  Instrument_79.insert(NotionalPercentageOutstanding_79.getString());
  FIX::OptAttribute OptAttribute_79('1');
  msg.set(OptAttribute_79);
  Instrument_79.insert(OptAttribute_79.getString());
  FIX::OptPayoutAmount OptPayoutAmount_79;
  OptPayoutAmount_79.setString("16862540");
  msg.set(OptPayoutAmount_79);
  Instrument_79.insert(OptPayoutAmount_79.getString());
  FIX::OptPayoutType OptPayoutType_79(2);
  msg.set(OptPayoutType_79);
  Instrument_79.insert(OptPayoutType_79.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
  OriginalNotionalPercentageOutstanding_79.setString("1.310000");
  msg.set(OriginalNotionalPercentageOutstanding_79);
  Instrument_79.insert(OriginalNotionalPercentageOutstanding_79.getString());
  FIX::Pool Pool_79("STRING_1357944534");
  msg.set(Pool_79);
  Instrument_79.insert(Pool_79.getString());
  FIX::PositionLimit PositionLimit_79(385153929);
  msg.set(PositionLimit_79);
  Instrument_79.insert(PositionLimit_79.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_79("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_79);
  Instrument_79.insert(PriceQuoteMethod_79.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_79("STRING_926725780");
  msg.set(PriceUnitOfMeasure_79);
  Instrument_79.insert(PriceUnitOfMeasure_79.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
  PriceUnitOfMeasureQty_79.setString("17369045");
  msg.set(PriceUnitOfMeasureQty_79);
  Instrument_79.insert(PriceUnitOfMeasureQty_79.getString());
  FIX::Product Product_81(6);
  msg.set(Product_81);
  Instrument_79.insert(Product_81.getString());
  FIX::ProductComplex ProductComplex_79("STRING_610877864");
  msg.set(ProductComplex_79);
  Instrument_79.insert(ProductComplex_79.getString());
  FIX::PutOrCall PutOrCall_79(0);
  msg.set(PutOrCall_79);
  Instrument_79.insert(PutOrCall_79.getString());
  FIX::RedemptionDate RedemptionDate_79("LOCALMKTDATE_1044563795");
  msg.set(RedemptionDate_79);
  Instrument_79.insert(RedemptionDate_79.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_79("STRING_1518089756");
  msg.set(RepoCollateralSecurityType_79);
  Instrument_79.insert(RepoCollateralSecurityType_79.getString());
  FIX::RepurchaseRate RepurchaseRate_79;
  RepurchaseRate_79.setString("26.480000");
  msg.set(RepurchaseRate_79);
  Instrument_79.insert(RepurchaseRate_79.getString());
  FIX::RepurchaseTerm RepurchaseTerm_79(1682571383);
  msg.set(RepurchaseTerm_79);
  Instrument_79.insert(RepurchaseTerm_79.getString());
  FIX::RestructuringType RestructuringType_79("STRING_MR");
  msg.set(RestructuringType_79);
  Instrument_79.insert(RestructuringType_79.getString());
  FIX::SecurityDesc SecurityDesc_79("STRING_512593860");
  msg.set(SecurityDesc_79);
  Instrument_79.insert(SecurityDesc_79.getString());
  FIX::SecurityExchange SecurityExchange_79("EXCHANGE_363133679");
  msg.set(SecurityExchange_79);
  Instrument_79.insert(SecurityExchange_79.getString());
  FIX::SecurityGroup SecurityGroup_79("STRING_260966403");
  msg.set(SecurityGroup_79);
  Instrument_79.insert(SecurityGroup_79.getString());
  FIX::SecurityID SecurityID_79("STRING_49592495");
  msg.set(SecurityID_79);
  Instrument_79.insert(SecurityID_79.getString());
  FIX::SecurityIDSource SecurityIDSource_79("STRING_4");
  msg.set(SecurityIDSource_79);
  Instrument_79.insert(SecurityIDSource_79.getString());
  FIX::SecurityStatus SecurityStatus_80("STRING_2");
  msg.set(SecurityStatus_80);
  Instrument_79.insert(SecurityStatus_80.getString());
  FIX::SecuritySubType SecuritySubType_80("STRING_1385826840");
  msg.set(SecuritySubType_80);
  Instrument_79.insert(SecuritySubType_80.getString());
  FIX::SecurityType SecurityType_81("STRING_FUT");
  msg.set(SecurityType_81);
  Instrument_79.insert(SecurityType_81.getString());
  FIX::Seniority Seniority_79("STRING_SB");
  msg.set(Seniority_79);
  Instrument_79.insert(Seniority_79.getString());
  FIX::SettlMethod SettlMethod_79('P');
  msg.set(SettlMethod_79);
  Instrument_79.insert(SettlMethod_79.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_79("STRING_2036764506");
  msg.set(SettleOnOpenFlag_79);
  Instrument_79.insert(SettleOnOpenFlag_79.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_79("STRING_2100138632");
  msg.set(StateOrProvinceOfIssue_79);
  Instrument_79.insert(StateOrProvinceOfIssue_79.getString());
  FIX::StrikeCurrency StrikeCurrency_79("JPY");
  msg.set(StrikeCurrency_79);
  Instrument_79.insert(StrikeCurrency_79.getString());
  FIX::StrikeMultiplier StrikeMultiplier_79;
  StrikeMultiplier_79.setString("12706268");
  msg.set(StrikeMultiplier_79);
  Instrument_79.insert(StrikeMultiplier_79.getString());
  FIX::StrikePrice StrikePrice_79;
  StrikePrice_79.setString("11199257");
  msg.set(StrikePrice_79);
  Instrument_79.insert(StrikePrice_79.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_79(4);
  msg.set(StrikePriceBoundaryMethod_79);
  Instrument_79.insert(StrikePriceBoundaryMethod_79.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
  StrikePriceBoundaryPrecision_79.setString("33.460000");
  msg.set(StrikePriceBoundaryPrecision_79);
  Instrument_79.insert(StrikePriceBoundaryPrecision_79.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_79(4);
  msg.set(StrikePriceDeterminationMethod_79);
  Instrument_79.insert(StrikePriceDeterminationMethod_79.getString());
  FIX::StrikeValue StrikeValue_79;
  StrikeValue_79.setString("16772555");
  msg.set(StrikeValue_79);
  Instrument_79.insert(StrikeValue_79.getString());
  FIX::Symbol Symbol_79("STRING_1313370189");
  msg.set(Symbol_79);
  Instrument_79.insert(Symbol_79.getString());
  FIX::SymbolSfx SymbolSfx_79("STRING_WI");
  msg.set(SymbolSfx_79);
  Instrument_79.insert(SymbolSfx_79.getString());
  FIX::TimeUnit TimeUnit_79("STRING_S");
  msg.set(TimeUnit_79);
  Instrument_79.insert(TimeUnit_79.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_79(3);
  msg.set(UnderlyingPriceDeterminationMethod_79);
  Instrument_79.insert(UnderlyingPriceDeterminationMethod_79.getString());
  FIX::UnitOfMeasure UnitOfMeasure_79("STRING_Bcf");
  msg.set(UnitOfMeasure_79);
  Instrument_79.insert(UnitOfMeasure_79.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
  UnitOfMeasureQty_79.setString("9217488");
  msg.set(UnitOfMeasureQty_79);
  Instrument_79.insert(UnitOfMeasureQty_79.getString());
  FIX::ValuationMethod ValuationMethod_79("STRING_FUT");
  msg.set(ValuationMethod_79);
  Instrument_79.insert(ValuationMethod_79.getString());
  all_values.push_back(Instrument_79);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_148;
    FIX::ComplexEventCondition ComplexEventCondition_148(1);
    noComplexEvents_0_0.set(ComplexEventCondition_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventCondition_148.getString());
    FIX::ComplexEventPrice ComplexEventPrice_148;
    ComplexEventPrice_148.setString("7569488");
    noComplexEvents_0_0.set(ComplexEventPrice_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPrice_148.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_148(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryMethod_148.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
    ComplexEventPriceBoundaryPrecision_148.setString("16.800000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryPrecision_148.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_148(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceTimeType_148.getString());
    FIX::ComplexEventType ComplexEventType_148(1);
    noComplexEvents_0_0.set(ComplexEventType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventType_148.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
    ComplexOptPayoutAmount_148.setString("10076241");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexOptPayoutAmount_148.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_148);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_311;
      FIX::ComplexEventEndDate ComplexEventEndDate_311(FIX::UTCTIMESTAMP(7, 9, 13, 14, 82013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventEndDate_311.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_311(FIX::UTCTIMESTAMP(9, 52, 5, 25, 112011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventStartDate_311.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_311);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
        FIX::ComplexEventEndTime ComplexEventEndTime_622(FIX::UTCTIMEONLY(12, 28, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventEndTime_622.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_622(FIX::UTCTIMEONLY(13, 56, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventStartTime_622.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
        FIX::ComplexEventEndTime ComplexEventEndTime_623(FIX::UTCTIMEONLY(13, 13, 2));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventEndTime_623.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_623(FIX::UTCTIMEONLY(14, 17, 13));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventStartTime_623.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_312;
      FIX::ComplexEventEndDate ComplexEventEndDate_312(FIX::UTCTIMESTAMP(1, 14, 50, 19, 22001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventEndDate_312.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_312(FIX::UTCTIMESTAMP(23, 11, 37, 24, 102016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventStartDate_312.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_312);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
        FIX::ComplexEventEndTime ComplexEventEndTime_624(FIX::UTCTIMEONLY(10, 39, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventEndTime_624.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_624(FIX::UTCTIMEONLY(16, 59, 58));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventStartTime_624.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
        FIX::ComplexEventEndTime ComplexEventEndTime_625(FIX::UTCTIMEONLY(12, 4, 52));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventEndTime_625.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_625(FIX::UTCTIMEONLY(6, 1, 36));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventStartTime_625.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
        FIX::ComplexEventEndTime ComplexEventEndTime_626(FIX::UTCTIMEONLY(14, 50, 25));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventEndTime_626.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_626(FIX::UTCTIMEONLY(4, 45, 13));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventStartTime_626.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_313;
      FIX::ComplexEventEndDate ComplexEventEndDate_313(FIX::UTCTIMESTAMP(8, 42, 51, 22, 52008));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventEndDate_313.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_313(FIX::UTCTIMESTAMP(19, 34, 2, 1, 32013));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventStartDate_313.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_313);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
        FIX::ComplexEventEndTime ComplexEventEndTime_627(FIX::UTCTIMEONLY(5, 8, 36));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventEndTime_627.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_627(FIX::UTCTIMEONLY(14, 38, 40));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventStartTime_627.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
        FIX::ComplexEventEndTime ComplexEventEndTime_628(FIX::UTCTIMEONLY(20, 22, 15));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventEndTime_628.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_628(FIX::UTCTIMEONLY(6, 52, 36));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventStartTime_628.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_153;
    FIX::EventDate EventDate_153("LOCALMKTDATE_1097563789");
    noEvents_0_0.set(EventDate_153);
    EvntGrp_NoEvents_153.insert(EventDate_153.getString());
    FIX::EventPx EventPx_153;
    EventPx_153.setString("12301636");
    noEvents_0_0.set(EventPx_153);
    EvntGrp_NoEvents_153.insert(EventPx_153.getString());
    FIX::EventText EventText_153("STRING_578212245");
    noEvents_0_0.set(EventText_153);
    EvntGrp_NoEvents_153.insert(EventText_153.getString());
    FIX::EventTime EventTime_153(FIX::UTCTIMESTAMP(3, 39, 38, 6, 22016));
    noEvents_0_0.set(EventTime_153);
    EvntGrp_NoEvents_153.insert(EventTime_153.getString());
    FIX::EventType EventType_153(12);
    noEvents_0_0.set(EventType_153);
    EvntGrp_NoEvents_153.insert(EventType_153.getString());
    all_values.push_back(EvntGrp_NoEvents_153);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_154;
    FIX::EventDate EventDate_154("LOCALMKTDATE_368925248");
    noEvents_0_1.set(EventDate_154);
    EvntGrp_NoEvents_154.insert(EventDate_154.getString());
    FIX::EventPx EventPx_154;
    EventPx_154.setString("5310150");
    noEvents_0_1.set(EventPx_154);
    EvntGrp_NoEvents_154.insert(EventPx_154.getString());
    FIX::EventText EventText_154("STRING_1287611455");
    noEvents_0_1.set(EventText_154);
    EvntGrp_NoEvents_154.insert(EventText_154.getString());
    FIX::EventTime EventTime_154(FIX::UTCTIMESTAMP(2, 3, 29, 14, 112011));
    noEvents_0_1.set(EventTime_154);
    EvntGrp_NoEvents_154.insert(EventTime_154.getString());
    FIX::EventType EventType_154(11);
    noEvents_0_1.set(EventType_154);
    EvntGrp_NoEvents_154.insert(EventType_154.getString());
    all_values.push_back(EvntGrp_NoEvents_154);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_153;
    FIX::InstrumentPartyID InstrumentPartyID_153("STRING_232631927");
    noInstrumentParties_0_0.set(InstrumentPartyID_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyID_153.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_153('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyIDSource_153.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_153(103295159);
    noInstrumentParties_0_0.set(InstrumentPartyRole_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyRole_153.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_153);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
      FIX::InstrumentPartySubID InstrumentPartySubID_308("STRING_582033983");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_308);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubID_308.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_308(131167252);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_308);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubIDType_308.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_154;
    FIX::InstrumentPartyID InstrumentPartyID_154("STRING_857387334");
    noInstrumentParties_0_1.set(InstrumentPartyID_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyID_154.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_154('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyIDSource_154.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_154(1228731041);
    noInstrumentParties_0_1.set(InstrumentPartyRole_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyRole_154.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_154);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
      FIX::InstrumentPartySubID InstrumentPartySubID_309("STRING_106015502");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_309);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubID_309.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_309(1017692660);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_309);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubIDType_309.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    FIX::SecurityAltID SecurityAltID_166("STRING_545205401");
    noSecurityAltID_0_0.set(SecurityAltID_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltID_166.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_166("STRING_2041640998");
    noSecurityAltID_0_0.set(SecurityAltIDSource_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltIDSource_166.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_167;
    FIX::SecurityAltID SecurityAltID_167("STRING_993725985");
    noSecurityAltID_0_1.set(SecurityAltID_167);
    SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltID_167.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_167("STRING_1297756255");
    noSecurityAltID_0_1.set(SecurityAltIDSource_167);
    SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltIDSource_167.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_158;
  FIX::SecurityXML SecurityXML_159("XMLDATA_1205926770");
  msg.set(SecurityXML_159);
  FIX::SecurityXMLLen SecurityXMLLen_79(2057919697);
  msg.set(SecurityXMLLen_79);
  FIX::SecurityXMLSchema SecurityXMLSchema_79("STRING_1666681503");
  msg.set(SecurityXMLSchema_79);
  SecurityXML_158.insert(SecurityXMLSchema_79.getString());
  all_values.push_back(SecurityXML_158);

  // InstrumentExtension
  multiset<string> InstrumentExtension_16;
  FIX::DeliveryForm DeliveryForm_16(2);
  msg.set(DeliveryForm_16);
  InstrumentExtension_16.insert(DeliveryForm_16.getString());
  FIX::PctAtRisk PctAtRisk_16;
  PctAtRisk_16.setString("75.040000");
  msg.set(PctAtRisk_16);
  InstrumentExtension_16.insert(PctAtRisk_16.getString());
  all_values.push_back(InstrumentExtension_16);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_32;
    FIX::InstrAttribType InstrAttribType_32(10);
    noInstrAttrib_0_0.set(InstrAttribType_32);
    AttrbGrp_NoInstrAttrib_32.insert(InstrAttribType_32.getString());
    FIX::InstrAttribValue InstrAttribValue_32("STRING_951348800");
    noInstrAttrib_0_0.set(InstrAttribValue_32);
    AttrbGrp_NoInstrAttrib_32.insert(InstrAttribValue_32.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_32);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_33;
    FIX::InstrAttribType InstrAttribType_33(9);
    noInstrAttrib_0_1.set(InstrAttribType_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribType_33.getString());
    FIX::InstrAttribValue InstrAttribValue_33("STRING_480185300");
    noInstrAttrib_0_1.set(InstrAttribValue_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribValue_33.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_33);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_34;
    FIX::InstrAttribType InstrAttribType_34(23);
    noInstrAttrib_0_2.set(InstrAttribType_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribType_34.getString());
    FIX::InstrAttribValue InstrAttribValue_34("STRING_1625541907");
    noInstrAttrib_0_2.set(InstrAttribValue_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribValue_34.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_34);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_137;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_137("DATA_1185388994");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuer_137.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_137(1858173835);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuerLen_137.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_137("DATA_637501515");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDesc_137.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_137(1288684153);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDescLen_137.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_137;
    UnderlyingAdjustedQuantity_137.setString("4157981");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_137);
    UnderlyingInstrument_137.insert(UnderlyingAdjustedQuantity_137.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_137;
    UnderlyingAllocationPercent_137.setString("54.990000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_137);
    UnderlyingInstrument_137.insert(UnderlyingAllocationPercent_137.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_137;
    UnderlyingAttachmentPoint_137.setString("14.050000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingAttachmentPoint_137.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_137("STRING_1273185479");
    noUnderlyings_0_0.set(UnderlyingCFICode_137);
    UnderlyingInstrument_137.insert(UnderlyingCFICode_137.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_137("STRING_747338756");
    noUnderlyings_0_0.set(UnderlyingCPProgram_137);
    UnderlyingInstrument_137.insert(UnderlyingCPProgram_137.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_137("STRING_501098798");
    noUnderlyings_0_0.set(UnderlyingCPRegType_137);
    UnderlyingInstrument_137.insert(UnderlyingCPRegType_137.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_137;
    UnderlyingCapValue_137.setString("12132528");
    noUnderlyings_0_0.set(UnderlyingCapValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCapValue_137.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_137;
    UnderlyingCashAmount_137.setString("8533542");
    noUnderlyings_0_0.set(UnderlyingCashAmount_137);
    UnderlyingInstrument_137.insert(UnderlyingCashAmount_137.getString());
    FIX::UnderlyingCashType UnderlyingCashType_137("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_137);
    UnderlyingInstrument_137.insert(UnderlyingCashType_137.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_137;
    UnderlyingContractMultiplier_137.setString("21320008");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplier_137.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_137(1398559659);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplierUnit_137.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_137("COUNTRY_1412948808");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingCountryOfIssue_137.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_137("LOCALMKTDATE_978243228");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponPaymentDate_137.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_137;
    UnderlyingCouponRate_137.setString("22.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponRate_137.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_137("STRING_471391930");
    noUnderlyings_0_0.set(UnderlyingCreditRating_137);
    UnderlyingInstrument_137.insert(UnderlyingCreditRating_137.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_137("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrency_137.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_137;
    UnderlyingCurrentValue_137.setString("608501");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrentValue_137.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_137;
    UnderlyingDetachmentPoint_137.setString("67.820000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingDetachmentPoint_137.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_137;
    UnderlyingDirtyPrice_137.setString("3190926");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingDirtyPrice_137.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_137;
    UnderlyingEndPrice_137.setString("11150164");
    noUnderlyings_0_0.set(UnderlyingEndPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingEndPrice_137.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_137;
    UnderlyingEndValue_137.setString("8905919");
    noUnderlyings_0_0.set(UnderlyingEndValue_137);
    UnderlyingInstrument_137.insert(UnderlyingEndValue_137.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_137(518140397);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_137);
    UnderlyingInstrument_137.insert(UnderlyingExerciseStyle_137.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_137;
    UnderlyingFXRate_137.setString("15952017");
    noUnderlyings_0_0.set(UnderlyingFXRate_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRate_137.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_137('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRateCalc_137.getString());
    FIX::UnderlyingFactor UnderlyingFactor_137;
    UnderlyingFactor_137.setString("21436823");
    noUnderlyings_0_0.set(UnderlyingFactor_137);
    UnderlyingInstrument_137.insert(UnderlyingFactor_137.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_137(530325337);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_137);
    UnderlyingInstrument_137.insert(UnderlyingFlowScheduleType_137.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_137("STRING_424416022");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_137);
    UnderlyingInstrument_137.insert(UnderlyingInstrRegistry_137.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_137("LOCALMKTDATE_1854372492");
    noUnderlyings_0_0.set(UnderlyingIssueDate_137);
    UnderlyingInstrument_137.insert(UnderlyingIssueDate_137.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_137("STRING_1167826853");
    noUnderlyings_0_0.set(UnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(UnderlyingIssuer_137.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_137("STRING_1713100175");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingLocaleOfIssue_137.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_137("LOCALMKTDATE_122686989");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityDate_137.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_137("MONTHYEAR_239878704");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityMonthYear_137.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_137("TZTIMEONLY_985467933");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityTime_137.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_137;
    UnderlyingNotionalPercentageOutstanding_137.setString("24.680000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_137('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_137);
    UnderlyingInstrument_137.insert(UnderlyingOptAttribute_137.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_137;
    UnderlyingOriginalNotionalPercentageOutstanding_137.setString("67.310000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingOriginalNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_137("STRING_461641683");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasure_137.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_137;
    UnderlyingPriceUnitOfMeasureQty_137.setString("18405717");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasureQty_137.getString());
    FIX::UnderlyingProduct UnderlyingProduct_137(857874542);
    noUnderlyings_0_0.set(UnderlyingProduct_137);
    UnderlyingInstrument_137.insert(UnderlyingProduct_137.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_137(446158926);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_137);
    UnderlyingInstrument_137.insert(UnderlyingPutOrCall_137.getString());
    FIX::UnderlyingPx UnderlyingPx_137;
    UnderlyingPx_137.setString("10916477");
    noUnderlyings_0_0.set(UnderlyingPx_137);
    UnderlyingInstrument_137.insert(UnderlyingPx_137.getString());
    FIX::UnderlyingQty UnderlyingQty_137;
    UnderlyingQty_137.setString("1233397");
    noUnderlyings_0_0.set(UnderlyingQty_137);
    UnderlyingInstrument_137.insert(UnderlyingQty_137.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_137("LOCALMKTDATE_1424402155");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_137);
    UnderlyingInstrument_137.insert(UnderlyingRedemptionDate_137.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_137("STRING_1640479996");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingRepoCollateralSecurityType_137.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_137;
    UnderlyingRepurchaseRate_137.setString("16.330000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseRate_137.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_137(165597784);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseTerm_137.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_137("STRING_1708510117");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_137);
    UnderlyingInstrument_137.insert(UnderlyingRestructuringType_137.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_137("STRING_655581778");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityDesc_137.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_137("EXCHANGE_104840918");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityExchange_137.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_137("STRING_2027602786");
    noUnderlyings_0_0.set(UnderlyingSecurityID_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityID_137.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_137("STRING_1770598213");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityIDSource_137.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_137("STRING_995432852");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecuritySubType_137.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_137("STRING_398259536");
    noUnderlyings_0_0.set(UnderlyingSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityType_137.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_137("STRING_1218316300");
    noUnderlyings_0_0.set(UnderlyingSeniority_137);
    UnderlyingInstrument_137.insert(UnderlyingSeniority_137.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_137("STRING_234459880");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlMethod_137.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_137(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlementType_137.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_137;
    UnderlyingStartValue_137.setString("17486416");
    noUnderlyings_0_0.set(UnderlyingStartValue_137);
    UnderlyingInstrument_137.insert(UnderlyingStartValue_137.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_137("STRING_658875902");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingStateOrProvinceOfIssue_137.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_137("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikeCurrency_137.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_137;
    UnderlyingStrikePrice_137.setString("2244924");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikePrice_137.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_137("STRING_224034026");
    noUnderlyings_0_0.set(UnderlyingSymbol_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbol_137.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_137("STRING_1008863547");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbolSfx_137.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_137("STRING_1209960363");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingTimeUnit_137.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_137("STRING_1619906494");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasure_137.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_137;
    UnderlyingUnitOfMeasureQty_137.setString("19960810");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasureQty_137.getString());
    all_values.push_back(UnderlyingInstrument_137);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_278("STRING_2081548177");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltID_278.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_278("STRING_1689169077");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltIDSource_278.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_264;
      FIX::UnderlyingStipType UnderlyingStipType_264("STRING_380223456");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipType_264.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_264("STRING_633333158");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipValue_264.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_264);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_265;
      FIX::UnderlyingStipType UnderlyingStipType_265("STRING_1530257691");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipType_265.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_265("STRING_1804625611");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipValue_265.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_265);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_266;
      FIX::UnderlyingStipType UnderlyingStipType_266("STRING_126329506");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipType_266.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_266("STRING_2124989324");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipValue_266.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_266);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_278;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_278("STRING_1834839624");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyID_278.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_278('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyIDSource_278.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_278(2075064314);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyRole_278.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_278);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_545("STRING_256202020");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubID_545.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_545(923013518);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubIDType_545.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_546("STRING_2113218298");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubID_546.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_546(1474518320);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubIDType_546.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_547("STRING_1157473399");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubID_547.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_547(360192843);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubIDType_547.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_279;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_279("STRING_1075676310");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyID_279.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_279('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyIDSource_279.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_279(461539880);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyRole_279.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_279);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_548("STRING_2040841731");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubID_548.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_548(685573906);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubIDType_548.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_280;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_280("STRING_706041052");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyID_280.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_280('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyIDSource_280.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_280(157996752);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyRole_280.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_280);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_549("STRING_1652361893");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubID_549.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_549(92061282);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubIDType_549.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_550("STRING_96323840");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubID_550.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_550(911796233);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubIDType_550.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_138;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_138("DATA_472284738");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuer_138.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_138(729656999);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuerLen_138.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_138("DATA_294570276");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDesc_138.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_138(129426701);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDescLen_138.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_138;
    UnderlyingAdjustedQuantity_138.setString("8559865");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_138);
    UnderlyingInstrument_138.insert(UnderlyingAdjustedQuantity_138.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_138;
    UnderlyingAllocationPercent_138.setString("59.520000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_138);
    UnderlyingInstrument_138.insert(UnderlyingAllocationPercent_138.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_138;
    UnderlyingAttachmentPoint_138.setString("0.960000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingAttachmentPoint_138.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_138("STRING_543342481");
    noUnderlyings_0_1.set(UnderlyingCFICode_138);
    UnderlyingInstrument_138.insert(UnderlyingCFICode_138.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_138("STRING_905163407");
    noUnderlyings_0_1.set(UnderlyingCPProgram_138);
    UnderlyingInstrument_138.insert(UnderlyingCPProgram_138.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_138("STRING_2027230762");
    noUnderlyings_0_1.set(UnderlyingCPRegType_138);
    UnderlyingInstrument_138.insert(UnderlyingCPRegType_138.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_138;
    UnderlyingCapValue_138.setString("1108175");
    noUnderlyings_0_1.set(UnderlyingCapValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCapValue_138.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_138;
    UnderlyingCashAmount_138.setString("11613654");
    noUnderlyings_0_1.set(UnderlyingCashAmount_138);
    UnderlyingInstrument_138.insert(UnderlyingCashAmount_138.getString());
    FIX::UnderlyingCashType UnderlyingCashType_138("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_138);
    UnderlyingInstrument_138.insert(UnderlyingCashType_138.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_138;
    UnderlyingContractMultiplier_138.setString("765522");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplier_138.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_138(488400099);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplierUnit_138.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_138("COUNTRY_1960234032");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingCountryOfIssue_138.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_138("LOCALMKTDATE_436745090");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponPaymentDate_138.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_138;
    UnderlyingCouponRate_138.setString("64.100000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponRate_138.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_138("STRING_1629099685");
    noUnderlyings_0_1.set(UnderlyingCreditRating_138);
    UnderlyingInstrument_138.insert(UnderlyingCreditRating_138.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_138("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrency_138.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_138;
    UnderlyingCurrentValue_138.setString("15224577");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrentValue_138.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_138;
    UnderlyingDetachmentPoint_138.setString("88.770000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingDetachmentPoint_138.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_138;
    UnderlyingDirtyPrice_138.setString("19672949");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingDirtyPrice_138.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_138;
    UnderlyingEndPrice_138.setString("4782925");
    noUnderlyings_0_1.set(UnderlyingEndPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingEndPrice_138.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_138;
    UnderlyingEndValue_138.setString("17418556");
    noUnderlyings_0_1.set(UnderlyingEndValue_138);
    UnderlyingInstrument_138.insert(UnderlyingEndValue_138.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_138(374449731);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_138);
    UnderlyingInstrument_138.insert(UnderlyingExerciseStyle_138.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_138;
    UnderlyingFXRate_138.setString("21306544");
    noUnderlyings_0_1.set(UnderlyingFXRate_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRate_138.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_138('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRateCalc_138.getString());
    FIX::UnderlyingFactor UnderlyingFactor_138;
    UnderlyingFactor_138.setString("4707735");
    noUnderlyings_0_1.set(UnderlyingFactor_138);
    UnderlyingInstrument_138.insert(UnderlyingFactor_138.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_138(894967046);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_138);
    UnderlyingInstrument_138.insert(UnderlyingFlowScheduleType_138.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_138("STRING_158718001");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_138);
    UnderlyingInstrument_138.insert(UnderlyingInstrRegistry_138.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_138("LOCALMKTDATE_1200430571");
    noUnderlyings_0_1.set(UnderlyingIssueDate_138);
    UnderlyingInstrument_138.insert(UnderlyingIssueDate_138.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_138("STRING_1189537322");
    noUnderlyings_0_1.set(UnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(UnderlyingIssuer_138.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_138("STRING_288144702");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingLocaleOfIssue_138.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_138("LOCALMKTDATE_2056417076");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityDate_138.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_138("MONTHYEAR_1461613275");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityMonthYear_138.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_138("TZTIMEONLY_240311151");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityTime_138.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_138;
    UnderlyingNotionalPercentageOutstanding_138.setString("59.100000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_138('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_138);
    UnderlyingInstrument_138.insert(UnderlyingOptAttribute_138.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_138;
    UnderlyingOriginalNotionalPercentageOutstanding_138.setString("82.650000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingOriginalNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_138("STRING_563093506");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasure_138.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_138;
    UnderlyingPriceUnitOfMeasureQty_138.setString("13806584");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasureQty_138.getString());
    FIX::UnderlyingProduct UnderlyingProduct_138(922818898);
    noUnderlyings_0_1.set(UnderlyingProduct_138);
    UnderlyingInstrument_138.insert(UnderlyingProduct_138.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_138(639645752);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_138);
    UnderlyingInstrument_138.insert(UnderlyingPutOrCall_138.getString());
    FIX::UnderlyingPx UnderlyingPx_138;
    UnderlyingPx_138.setString("18690585");
    noUnderlyings_0_1.set(UnderlyingPx_138);
    UnderlyingInstrument_138.insert(UnderlyingPx_138.getString());
    FIX::UnderlyingQty UnderlyingQty_138;
    UnderlyingQty_138.setString("7355692");
    noUnderlyings_0_1.set(UnderlyingQty_138);
    UnderlyingInstrument_138.insert(UnderlyingQty_138.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_138("LOCALMKTDATE_1076390842");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_138);
    UnderlyingInstrument_138.insert(UnderlyingRedemptionDate_138.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_138("STRING_1285651322");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingRepoCollateralSecurityType_138.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_138;
    UnderlyingRepurchaseRate_138.setString("53.200000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseRate_138.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_138(1974675813);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseTerm_138.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_138("STRING_399421590");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_138);
    UnderlyingInstrument_138.insert(UnderlyingRestructuringType_138.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_138("STRING_1739643089");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityDesc_138.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_138("EXCHANGE_1411051042");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityExchange_138.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_138("STRING_219232910");
    noUnderlyings_0_1.set(UnderlyingSecurityID_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityID_138.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_138("STRING_70452008");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityIDSource_138.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_138("STRING_1005423023");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecuritySubType_138.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_138("STRING_593682641");
    noUnderlyings_0_1.set(UnderlyingSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityType_138.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_138("STRING_53622821");
    noUnderlyings_0_1.set(UnderlyingSeniority_138);
    UnderlyingInstrument_138.insert(UnderlyingSeniority_138.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_138("STRING_691856287");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlMethod_138.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_138(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlementType_138.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_138;
    UnderlyingStartValue_138.setString("9485898");
    noUnderlyings_0_1.set(UnderlyingStartValue_138);
    UnderlyingInstrument_138.insert(UnderlyingStartValue_138.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_138("STRING_850574288");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingStateOrProvinceOfIssue_138.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_138("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikeCurrency_138.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_138;
    UnderlyingStrikePrice_138.setString("11387189");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikePrice_138.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_138("STRING_26336565");
    noUnderlyings_0_1.set(UnderlyingSymbol_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbol_138.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_138("STRING_1452256816");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbolSfx_138.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_138("STRING_1379030142");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingTimeUnit_138.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_138("STRING_478612475");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasure_138.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_138;
    UnderlyingUnitOfMeasureQty_138.setString("16715498");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasureQty_138.getString());
    all_values.push_back(UnderlyingInstrument_138);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_279("STRING_1041705981");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltID_279.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_279("STRING_904724663");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltIDSource_279.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_280("STRING_274423658");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltID_280.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_280("STRING_1681351733");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltIDSource_280.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_281("STRING_626299576");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltID_281.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_281("STRING_1009992940");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltIDSource_281.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_267;
      FIX::UnderlyingStipType UnderlyingStipType_267("STRING_1911950898");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipType_267.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_267("STRING_1227178260");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipValue_267.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_267);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
      FIX::UnderlyingStipType UnderlyingStipType_268("STRING_437451093");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipType_268.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_268("STRING_163888840");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipValue_268.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
      FIX::UnderlyingStipType UnderlyingStipType_269("STRING_819337701");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipType_269.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_269("STRING_1848502135");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipValue_269.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_281;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_281("STRING_889789710");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyID_281.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_281('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyIDSource_281.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_281(976804392);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyRole_281.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_281);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_551("STRING_1398297797");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubID_551.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_551(2041260605);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubIDType_551.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_552("STRING_1892002398");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubID_552.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_552(101388438);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubIDType_552.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_553("STRING_11180094");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubID_553.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_553(1882645939);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubIDType_553.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
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
