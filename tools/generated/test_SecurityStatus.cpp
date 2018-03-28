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
  multiset<string> SecurityStatus_86;
  FIX::Adjustment Adjustment_0(2);
  msg.set(Adjustment_0);
  SecurityStatus_86.insert(Adjustment_0.getString());
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("1676736");
  msg.set(BuyVolume_0);
  SecurityStatus_86.insert(BuyVolume_0.getString());
  FIX::CorporateAction CorporateAction_10("MULTIPLECHARVALUE_T");
  msg.set(CorporateAction_10);
  SecurityStatus_86.insert(CorporateAction_10.getString());
  FIX::Currency Currency_66("USD");
  msg.set(Currency_66);
  SecurityStatus_86.insert(Currency_66.getString());
  FIX::DueToRelated DueToRelated_0(true);
  msg.set(DueToRelated_0);
  SecurityStatus_86.insert(DueToRelated_0.getString());
  FIX::EncodedText EncodedText_82("DATA_969552835");
  msg.set(EncodedText_82);
  SecurityStatus_86.insert(EncodedText_82.getString());
  FIX::EncodedTextLen EncodedTextLen_82(2003287265);
  msg.set(EncodedTextLen_82);
  SecurityStatus_86.insert(EncodedTextLen_82.getString());
  FIX::FinancialStatus FinancialStatus_4("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_4);
  SecurityStatus_86.insert(FinancialStatus_4.getString());
  FIX::FirstPx FirstPx_2;
  FirstPx_2.setString("10199241");
  msg.set(FirstPx_2);
  SecurityStatus_86.insert(FirstPx_2.getString());
  FIX::HaltReasonInt HaltReasonInt_2(2);
  msg.set(HaltReasonInt_2);
  FIX::HighPx HighPx_2;
  HighPx_2.setString("12309138");
  msg.set(HighPx_2);
  SecurityStatus_86.insert(HighPx_2.getString());
  FIX::InViewOfCommon InViewOfCommon_0(true);
  msg.set(InViewOfCommon_0);
  SecurityStatus_86.insert(InViewOfCommon_0.getString());
  FIX::LastPx LastPx_11;
  LastPx_11.setString("8335559");
  msg.set(LastPx_11);
  SecurityStatus_86.insert(LastPx_11.getString());
  FIX::LowPx LowPx_2;
  LowPx_2.setString("16408310");
  msg.set(LowPx_2);
  SecurityStatus_86.insert(LowPx_2.getString());
  FIX::MDBookType MDBookType_34(1);
  msg.set(MDBookType_34);
  SecurityStatus_86.insert(MDBookType_34.getString());
  FIX::MarketDepth MarketDepth_35(763862201);
  msg.set(MarketDepth_35);
  SecurityStatus_86.insert(MarketDepth_35.getString());
  FIX::MarketID MarketID_19("EXCHANGE_1986187143");
  msg.set(MarketID_19);
  SecurityStatus_86.insert(MarketID_19.getString());
  FIX::MarketSegmentID MarketSegmentID_19("STRING_2032657462");
  msg.set(MarketSegmentID_19);
  SecurityStatus_86.insert(MarketSegmentID_19.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_0("STRING_279358613");
  msg.set(SecurityStatusReqID_0);
  SecurityStatus_86.insert(SecurityStatusReqID_0.getString());
  FIX::SecurityTradingEvent SecurityTradingEvent_0(7);
  msg.set(SecurityTradingEvent_0);
  SecurityStatus_86.insert(SecurityTradingEvent_0.getString());
  FIX::SecurityTradingStatus SecurityTradingStatus_2(5);
  msg.set(SecurityTradingStatus_2);
  SecurityStatus_86.insert(SecurityTradingStatus_2.getString());
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("11868153");
  msg.set(SellVolume_0);
  SecurityStatus_86.insert(SellVolume_0.getString());
  FIX::Text Text_82("STRING_1198502019");
  msg.set(Text_82);
  SecurityStatus_86.insert(Text_82.getString());
  FIX::TradingSessionID TradingSessionID_86("STRING_3");
  msg.set(TradingSessionID_86);
  SecurityStatus_86.insert(TradingSessionID_86.getString());
  FIX::TradingSessionSubID TradingSessionSubID_86("STRING_5");
  msg.set(TradingSessionSubID_86);
  SecurityStatus_86.insert(TradingSessionSubID_86.getString());
  FIX::TransactTime TransactTime_64(FIX::UTCTIMESTAMP(1, 56, 26, 10, 8, 2014));
  msg.set(TransactTime_64);
  SecurityStatus_86.insert(TransactTime_64.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_2(true);
  msg.set(UnsolicitedIndicator_2);
  SecurityStatus_86.insert(UnsolicitedIndicator_2.getString());
  all_values.push_back(SecurityStatus_86);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  FIX::ApplID ApplID_16("STRING_367146173");
  msg.set(ApplID_16);
  ApplicationSequenceControl_16.insert(ApplID_16.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_16(506707470);
  msg.set(ApplLastSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplLastSeqNum_16.getString());
  FIX::ApplResendFlag ApplResendFlag_16(false);
  msg.set(ApplResendFlag_16);
  ApplicationSequenceControl_16.insert(ApplResendFlag_16.getString());
  FIX::ApplSeqNum ApplSeqNum_16(1336699008);
  msg.set(ApplSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplSeqNum_16.getString());
  all_values.push_back(ApplicationSequenceControl_16);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_138;
    FIX::EncodedLegIssuer EncodedLegIssuer_138("DATA_1430693562");
    noLegs_0_0.set(EncodedLegIssuer_138);
    InstrumentLeg_138.insert(EncodedLegIssuer_138.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_138(209139529);
    noLegs_0_0.set(EncodedLegIssuerLen_138);
    InstrumentLeg_138.insert(EncodedLegIssuerLen_138.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_138("DATA_654745139");
    noLegs_0_0.set(EncodedLegSecurityDesc_138);
    InstrumentLeg_138.insert(EncodedLegSecurityDesc_138.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_138(514123774);
    noLegs_0_0.set(EncodedLegSecurityDescLen_138);
    InstrumentLeg_138.insert(EncodedLegSecurityDescLen_138.getString());
    FIX::LegCFICode LegCFICode_138("STRING_487744717");
    noLegs_0_0.set(LegCFICode_138);
    InstrumentLeg_138.insert(LegCFICode_138.getString());
    FIX::LegContractMultiplier LegContractMultiplier_138;
    LegContractMultiplier_138.setString("14883011");
    noLegs_0_0.set(LegContractMultiplier_138);
    InstrumentLeg_138.insert(LegContractMultiplier_138.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_138(7471164);
    noLegs_0_0.set(LegContractMultiplierUnit_138);
    InstrumentLeg_138.insert(LegContractMultiplierUnit_138.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_138("MONTHYEAR_1041846065");
    noLegs_0_0.set(LegContractSettlMonth_138);
    InstrumentLeg_138.insert(LegContractSettlMonth_138.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_138("COUNTRY_104679655");
    noLegs_0_0.set(LegCountryOfIssue_138);
    InstrumentLeg_138.insert(LegCountryOfIssue_138.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_138("LOCALMKTDATE_1993658308");
    noLegs_0_0.set(LegCouponPaymentDate_138);
    InstrumentLeg_138.insert(LegCouponPaymentDate_138.getString());
    FIX::LegCouponRate LegCouponRate_138;
    LegCouponRate_138.setString("98.790000");
    noLegs_0_0.set(LegCouponRate_138);
    InstrumentLeg_138.insert(LegCouponRate_138.getString());
    FIX::LegCreditRating LegCreditRating_138("STRING_384038268");
    noLegs_0_0.set(LegCreditRating_138);
    InstrumentLeg_138.insert(LegCreditRating_138.getString());
    FIX::LegCurrency LegCurrency_138("CAN");
    noLegs_0_0.set(LegCurrency_138);
    InstrumentLeg_138.insert(LegCurrency_138.getString());
    FIX::LegDatedDate LegDatedDate_138("LOCALMKTDATE_1570853664");
    noLegs_0_0.set(LegDatedDate_138);
    InstrumentLeg_138.insert(LegDatedDate_138.getString());
    FIX::LegExerciseStyle LegExerciseStyle_138(849793221);
    noLegs_0_0.set(LegExerciseStyle_138);
    InstrumentLeg_138.insert(LegExerciseStyle_138.getString());
    FIX::LegFactor LegFactor_138;
    LegFactor_138.setString("16381302");
    noLegs_0_0.set(LegFactor_138);
    InstrumentLeg_138.insert(LegFactor_138.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_138(600138263);
    noLegs_0_0.set(LegFlowScheduleType_138);
    InstrumentLeg_138.insert(LegFlowScheduleType_138.getString());
    FIX::LegInstrRegistry LegInstrRegistry_138("STRING_1530285342");
    noLegs_0_0.set(LegInstrRegistry_138);
    InstrumentLeg_138.insert(LegInstrRegistry_138.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_138("LOCALMKTDATE_1528879061");
    noLegs_0_0.set(LegInterestAccrualDate_138);
    InstrumentLeg_138.insert(LegInterestAccrualDate_138.getString());
    FIX::LegIssueDate LegIssueDate_138("LOCALMKTDATE_1971883880");
    noLegs_0_0.set(LegIssueDate_138);
    InstrumentLeg_138.insert(LegIssueDate_138.getString());
    FIX::LegIssuer LegIssuer_138("STRING_2120496308");
    noLegs_0_0.set(LegIssuer_138);
    InstrumentLeg_138.insert(LegIssuer_138.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_138("STRING_824255275");
    noLegs_0_0.set(LegLocaleOfIssue_138);
    InstrumentLeg_138.insert(LegLocaleOfIssue_138.getString());
    FIX::LegMaturityDate LegMaturityDate_138("LOCALMKTDATE_420735787");
    noLegs_0_0.set(LegMaturityDate_138);
    InstrumentLeg_138.insert(LegMaturityDate_138.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_138("MONTHYEAR_730897256");
    noLegs_0_0.set(LegMaturityMonthYear_138);
    InstrumentLeg_138.insert(LegMaturityMonthYear_138.getString());
    FIX::LegMaturityTime LegMaturityTime_138("TZTIMEONLY_836848029");
    noLegs_0_0.set(LegMaturityTime_138);
    InstrumentLeg_138.insert(LegMaturityTime_138.getString());
    FIX::LegOptAttribute LegOptAttribute_138('7');
    noLegs_0_0.set(LegOptAttribute_138);
    InstrumentLeg_138.insert(LegOptAttribute_138.getString());
    FIX::LegOptionRatio LegOptionRatio_138;
    LegOptionRatio_138.setString("12376047");
    noLegs_0_0.set(LegOptionRatio_138);
    InstrumentLeg_138.insert(LegOptionRatio_138.getString());
    FIX::LegPool LegPool_138("STRING_454325140");
    noLegs_0_0.set(LegPool_138);
    InstrumentLeg_138.insert(LegPool_138.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_138("STRING_2124580968");
    noLegs_0_0.set(LegPriceUnitOfMeasure_138);
    InstrumentLeg_138.insert(LegPriceUnitOfMeasure_138.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_138;
    LegPriceUnitOfMeasureQty_138.setString("16001158");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_138);
    InstrumentLeg_138.insert(LegPriceUnitOfMeasureQty_138.getString());
    FIX::LegProduct LegProduct_138(1885018702);
    noLegs_0_0.set(LegProduct_138);
    InstrumentLeg_138.insert(LegProduct_138.getString());
    FIX::LegPutOrCall LegPutOrCall_138(186236849);
    noLegs_0_0.set(LegPutOrCall_138);
    InstrumentLeg_138.insert(LegPutOrCall_138.getString());
    FIX::LegRatioQty LegRatioQty_138;
    LegRatioQty_138.setString("1073773");
    noLegs_0_0.set(LegRatioQty_138);
    InstrumentLeg_138.insert(LegRatioQty_138.getString());
    FIX::LegRedemptionDate LegRedemptionDate_138("LOCALMKTDATE_251658828");
    noLegs_0_0.set(LegRedemptionDate_138);
    InstrumentLeg_138.insert(LegRedemptionDate_138.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_138("STRING_673981567");
    noLegs_0_0.set(LegRepoCollateralSecurityType_138);
    InstrumentLeg_138.insert(LegRepoCollateralSecurityType_138.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_138;
    LegRepurchaseRate_138.setString("84.060000");
    noLegs_0_0.set(LegRepurchaseRate_138);
    InstrumentLeg_138.insert(LegRepurchaseRate_138.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_138(259129993);
    noLegs_0_0.set(LegRepurchaseTerm_138);
    InstrumentLeg_138.insert(LegRepurchaseTerm_138.getString());
    FIX::LegSecurityDesc LegSecurityDesc_138("STRING_1715827632");
    noLegs_0_0.set(LegSecurityDesc_138);
    InstrumentLeg_138.insert(LegSecurityDesc_138.getString());
    FIX::LegSecurityExchange LegSecurityExchange_138("EXCHANGE_1700358061");
    noLegs_0_0.set(LegSecurityExchange_138);
    InstrumentLeg_138.insert(LegSecurityExchange_138.getString());
    FIX::LegSecurityID LegSecurityID_138("STRING_105304653");
    noLegs_0_0.set(LegSecurityID_138);
    InstrumentLeg_138.insert(LegSecurityID_138.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_138("STRING_495363863");
    noLegs_0_0.set(LegSecurityIDSource_138);
    InstrumentLeg_138.insert(LegSecurityIDSource_138.getString());
    FIX::LegSecuritySubType LegSecuritySubType_138("STRING_2084396330");
    noLegs_0_0.set(LegSecuritySubType_138);
    InstrumentLeg_138.insert(LegSecuritySubType_138.getString());
    FIX::LegSecurityType LegSecurityType_138("STRING_1904079503");
    noLegs_0_0.set(LegSecurityType_138);
    InstrumentLeg_138.insert(LegSecurityType_138.getString());
    FIX::LegSide LegSide_138('2');
    noLegs_0_0.set(LegSide_138);
    InstrumentLeg_138.insert(LegSide_138.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_138("STRING_1507766346");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_138);
    InstrumentLeg_138.insert(LegStateOrProvinceOfIssue_138.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_138("CHF");
    noLegs_0_0.set(LegStrikeCurrency_138);
    InstrumentLeg_138.insert(LegStrikeCurrency_138.getString());
    FIX::LegStrikePrice LegStrikePrice_138;
    LegStrikePrice_138.setString("21079046");
    noLegs_0_0.set(LegStrikePrice_138);
    InstrumentLeg_138.insert(LegStrikePrice_138.getString());
    FIX::LegSymbol LegSymbol_138("STRING_2136674419");
    noLegs_0_0.set(LegSymbol_138);
    InstrumentLeg_138.insert(LegSymbol_138.getString());
    FIX::LegSymbolSfx LegSymbolSfx_138("STRING_1241248422");
    noLegs_0_0.set(LegSymbolSfx_138);
    InstrumentLeg_138.insert(LegSymbolSfx_138.getString());
    FIX::LegTimeUnit LegTimeUnit_138("STRING_1932304842");
    noLegs_0_0.set(LegTimeUnit_138);
    InstrumentLeg_138.insert(LegTimeUnit_138.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_138("STRING_2109687080");
    noLegs_0_0.set(LegUnitOfMeasure_138);
    InstrumentLeg_138.insert(LegUnitOfMeasure_138.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_138;
    LegUnitOfMeasureQty_138.setString("20655036");
    noLegs_0_0.set(LegUnitOfMeasureQty_138);
    InstrumentLeg_138.insert(LegUnitOfMeasureQty_138.getString());
    all_values.push_back(InstrumentLeg_138);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_267;
      FIX::LegSecurityAltID LegSecurityAltID_267("STRING_693100688");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_267);
      LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltID_267.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_267("STRING_754868078");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_267);
      LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltIDSource_267.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_267);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_268;
      FIX::LegSecurityAltID LegSecurityAltID_268("STRING_993438942");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_268);
      LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltID_268.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_268("STRING_1930705415");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_268);
      LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltIDSource_268.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_268);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_269;
      FIX::LegSecurityAltID LegSecurityAltID_269("STRING_1209193219");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_269);
      LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltID_269.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_269("STRING_970536262");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_269);
      LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltIDSource_269.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_269);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_86;
  FIX::AttachmentPoint AttachmentPoint_86;
  AttachmentPoint_86.setString("75.800000");
  msg.set(AttachmentPoint_86);
  Instrument_86.insert(AttachmentPoint_86.getString());
  FIX::CFICode CFICode_86("STRING_946728273");
  msg.set(CFICode_86);
  Instrument_86.insert(CFICode_86.getString());
  FIX::CPProgram CPProgram_86(2);
  msg.set(CPProgram_86);
  Instrument_86.insert(CPProgram_86.getString());
  FIX::CPRegType CPRegType_86("STRING_1490714885");
  msg.set(CPRegType_86);
  Instrument_86.insert(CPRegType_86.getString());
  FIX::CapPrice CapPrice_86;
  CapPrice_86.setString("11983871");
  msg.set(CapPrice_86);
  Instrument_86.insert(CapPrice_86.getString());
  FIX::ContractMultiplier ContractMultiplier_86;
  ContractMultiplier_86.setString("18307546");
  msg.set(ContractMultiplier_86);
  Instrument_86.insert(ContractMultiplier_86.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_86(0);
  msg.set(ContractMultiplierUnit_86);
  Instrument_86.insert(ContractMultiplierUnit_86.getString());
  FIX::ContractSettlMonth ContractSettlMonth_86("MONTHYEAR_1457517095");
  msg.set(ContractSettlMonth_86);
  Instrument_86.insert(ContractSettlMonth_86.getString());
  FIX::CountryOfIssue CountryOfIssue_86("COUNTRY_1399098663");
  msg.set(CountryOfIssue_86);
  Instrument_86.insert(CountryOfIssue_86.getString());
  FIX::CouponPaymentDate CouponPaymentDate_86("LOCALMKTDATE_491784057");
  msg.set(CouponPaymentDate_86);
  Instrument_86.insert(CouponPaymentDate_86.getString());
  FIX::CouponRate CouponRate_86;
  CouponRate_86.setString("17.480000");
  msg.set(CouponRate_86);
  Instrument_86.insert(CouponRate_86.getString());
  FIX::CreditRating CreditRating_86("STRING_1894462526");
  msg.set(CreditRating_86);
  Instrument_86.insert(CreditRating_86.getString());
  FIX::DatedDate DatedDate_86("LOCALMKTDATE_428696739");
  msg.set(DatedDate_86);
  Instrument_86.insert(DatedDate_86.getString());
  FIX::DetachmentPoint DetachmentPoint_86;
  DetachmentPoint_86.setString("76.030000");
  msg.set(DetachmentPoint_86);
  Instrument_86.insert(DetachmentPoint_86.getString());
  FIX::EncodedIssuer EncodedIssuer_86("DATA_2116185275");
  msg.set(EncodedIssuer_86);
  Instrument_86.insert(EncodedIssuer_86.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_86(1936463085);
  msg.set(EncodedIssuerLen_86);
  Instrument_86.insert(EncodedIssuerLen_86.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_86("DATA_1925806680");
  msg.set(EncodedSecurityDesc_86);
  Instrument_86.insert(EncodedSecurityDesc_86.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_86(1828554636);
  msg.set(EncodedSecurityDescLen_86);
  Instrument_86.insert(EncodedSecurityDescLen_86.getString());
  FIX::ExerciseStyle ExerciseStyle_86(1);
  msg.set(ExerciseStyle_86);
  Instrument_86.insert(ExerciseStyle_86.getString());
  FIX::Factor Factor_86;
  Factor_86.setString("19149974");
  msg.set(Factor_86);
  Instrument_86.insert(Factor_86.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_86(true);
  msg.set(FlexProductEligibilityIndicator_86);
  Instrument_86.insert(FlexProductEligibilityIndicator_86.getString());
  FIX::FlexibleIndicator FlexibleIndicator_86(false);
  msg.set(FlexibleIndicator_86);
  Instrument_86.insert(FlexibleIndicator_86.getString());
  FIX::FloorPrice FloorPrice_86;
  FloorPrice_86.setString("18772008");
  msg.set(FloorPrice_86);
  Instrument_86.insert(FloorPrice_86.getString());
  FIX::FlowScheduleType FlowScheduleType_86(4);
  msg.set(FlowScheduleType_86);
  Instrument_86.insert(FlowScheduleType_86.getString());
  FIX::InstrRegistry InstrRegistry_86("STRING_1887262223");
  msg.set(InstrRegistry_86);
  Instrument_86.insert(InstrRegistry_86.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_86('4');
  msg.set(InstrmtAssignmentMethod_86);
  Instrument_86.insert(InstrmtAssignmentMethod_86.getString());
  FIX::InterestAccrualDate InterestAccrualDate_86("LOCALMKTDATE_1595207538");
  msg.set(InterestAccrualDate_86);
  Instrument_86.insert(InterestAccrualDate_86.getString());
  FIX::IssueDate IssueDate_86("LOCALMKTDATE_733217517");
  msg.set(IssueDate_86);
  Instrument_86.insert(IssueDate_86.getString());
  FIX::Issuer Issuer_86("STRING_206039691");
  msg.set(Issuer_86);
  Instrument_86.insert(Issuer_86.getString());
  FIX::ListMethod ListMethod_86(1);
  msg.set(ListMethod_86);
  Instrument_86.insert(ListMethod_86.getString());
  FIX::LocaleOfIssue LocaleOfIssue_86("STRING_1703753779");
  msg.set(LocaleOfIssue_86);
  Instrument_86.insert(LocaleOfIssue_86.getString());
  FIX::MaturityDate MaturityDate_86("LOCALMKTDATE_1589377272");
  msg.set(MaturityDate_86);
  Instrument_86.insert(MaturityDate_86.getString());
  FIX::MaturityMonthYear MaturityMonthYear_86("MONTHYEAR_1603645382");
  msg.set(MaturityMonthYear_86);
  Instrument_86.insert(MaturityMonthYear_86.getString());
  FIX::MaturityTime MaturityTime_86("TZTIMEONLY_713043243");
  msg.set(MaturityTime_86);
  Instrument_86.insert(MaturityTime_86.getString());
  FIX::MinPriceIncrement MinPriceIncrement_86;
  MinPriceIncrement_86.setString("9326085");
  msg.set(MinPriceIncrement_86);
  Instrument_86.insert(MinPriceIncrement_86.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
  MinPriceIncrementAmount_86.setString("6545488");
  msg.set(MinPriceIncrementAmount_86);
  Instrument_86.insert(MinPriceIncrementAmount_86.getString());
  FIX::NTPositionLimit NTPositionLimit_86(396314274);
  msg.set(NTPositionLimit_86);
  Instrument_86.insert(NTPositionLimit_86.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
  NotionalPercentageOutstanding_86.setString("81.520000");
  msg.set(NotionalPercentageOutstanding_86);
  Instrument_86.insert(NotionalPercentageOutstanding_86.getString());
  FIX::OptAttribute OptAttribute_86('2');
  msg.set(OptAttribute_86);
  Instrument_86.insert(OptAttribute_86.getString());
  FIX::OptPayoutAmount OptPayoutAmount_86;
  OptPayoutAmount_86.setString("17954129");
  msg.set(OptPayoutAmount_86);
  Instrument_86.insert(OptPayoutAmount_86.getString());
  FIX::OptPayoutType OptPayoutType_86(2);
  msg.set(OptPayoutType_86);
  Instrument_86.insert(OptPayoutType_86.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
  OriginalNotionalPercentageOutstanding_86.setString("40.310000");
  msg.set(OriginalNotionalPercentageOutstanding_86);
  Instrument_86.insert(OriginalNotionalPercentageOutstanding_86.getString());
  FIX::Pool Pool_86("STRING_1542391816");
  msg.set(Pool_86);
  Instrument_86.insert(Pool_86.getString());
  FIX::PositionLimit PositionLimit_86(644515300);
  msg.set(PositionLimit_86);
  Instrument_86.insert(PositionLimit_86.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_86("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_86);
  Instrument_86.insert(PriceQuoteMethod_86.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_86("STRING_1511093443");
  msg.set(PriceUnitOfMeasure_86);
  Instrument_86.insert(PriceUnitOfMeasure_86.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
  PriceUnitOfMeasureQty_86.setString("4334947");
  msg.set(PriceUnitOfMeasureQty_86);
  Instrument_86.insert(PriceUnitOfMeasureQty_86.getString());
  FIX::Product Product_88(5);
  msg.set(Product_88);
  Instrument_86.insert(Product_88.getString());
  FIX::ProductComplex ProductComplex_86("STRING_1192164432");
  msg.set(ProductComplex_86);
  Instrument_86.insert(ProductComplex_86.getString());
  FIX::PutOrCall PutOrCall_86(1);
  msg.set(PutOrCall_86);
  Instrument_86.insert(PutOrCall_86.getString());
  FIX::RedemptionDate RedemptionDate_86("LOCALMKTDATE_245174823");
  msg.set(RedemptionDate_86);
  Instrument_86.insert(RedemptionDate_86.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_86("STRING_2114483842");
  msg.set(RepoCollateralSecurityType_86);
  Instrument_86.insert(RepoCollateralSecurityType_86.getString());
  FIX::RepurchaseRate RepurchaseRate_86;
  RepurchaseRate_86.setString("3.790000");
  msg.set(RepurchaseRate_86);
  Instrument_86.insert(RepurchaseRate_86.getString());
  FIX::RepurchaseTerm RepurchaseTerm_86(2122375707);
  msg.set(RepurchaseTerm_86);
  Instrument_86.insert(RepurchaseTerm_86.getString());
  FIX::RestructuringType RestructuringType_86("STRING_MM");
  msg.set(RestructuringType_86);
  Instrument_86.insert(RestructuringType_86.getString());
  FIX::SecurityDesc SecurityDesc_86("STRING_1604378954");
  msg.set(SecurityDesc_86);
  Instrument_86.insert(SecurityDesc_86.getString());
  FIX::SecurityExchange SecurityExchange_86("EXCHANGE_397709984");
  msg.set(SecurityExchange_86);
  Instrument_86.insert(SecurityExchange_86.getString());
  FIX::SecurityGroup SecurityGroup_86("STRING_255063544");
  msg.set(SecurityGroup_86);
  Instrument_86.insert(SecurityGroup_86.getString());
  FIX::SecurityID SecurityID_86("STRING_190112823");
  msg.set(SecurityID_86);
  Instrument_86.insert(SecurityID_86.getString());
  FIX::SecurityIDSource SecurityIDSource_86("STRING_2");
  msg.set(SecurityIDSource_86);
  Instrument_86.insert(SecurityIDSource_86.getString());
  FIX::SecurityStatus SecurityStatus_87("STRING_2");
  msg.set(SecurityStatus_87);
  Instrument_86.insert(SecurityStatus_87.getString());
  FIX::SecuritySubType SecuritySubType_87("STRING_1893866602");
  msg.set(SecuritySubType_87);
  Instrument_86.insert(SecuritySubType_87.getString());
  FIX::SecurityType SecurityType_88("STRING_STN");
  msg.set(SecurityType_88);
  Instrument_86.insert(SecurityType_88.getString());
  FIX::Seniority Seniority_86("STRING_SD");
  msg.set(Seniority_86);
  Instrument_86.insert(Seniority_86.getString());
  FIX::SettlMethod SettlMethod_86('C');
  msg.set(SettlMethod_86);
  Instrument_86.insert(SettlMethod_86.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_86("STRING_978251808");
  msg.set(SettleOnOpenFlag_86);
  Instrument_86.insert(SettleOnOpenFlag_86.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_86("STRING_1022691224");
  msg.set(StateOrProvinceOfIssue_86);
  Instrument_86.insert(StateOrProvinceOfIssue_86.getString());
  FIX::StrikeCurrency StrikeCurrency_86("CAN");
  msg.set(StrikeCurrency_86);
  Instrument_86.insert(StrikeCurrency_86.getString());
  FIX::StrikeMultiplier StrikeMultiplier_86;
  StrikeMultiplier_86.setString("9872735");
  msg.set(StrikeMultiplier_86);
  Instrument_86.insert(StrikeMultiplier_86.getString());
  FIX::StrikePrice StrikePrice_86;
  StrikePrice_86.setString("5036697");
  msg.set(StrikePrice_86);
  Instrument_86.insert(StrikePrice_86.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_86(5);
  msg.set(StrikePriceBoundaryMethod_86);
  Instrument_86.insert(StrikePriceBoundaryMethod_86.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
  StrikePriceBoundaryPrecision_86.setString("38.910000");
  msg.set(StrikePriceBoundaryPrecision_86);
  Instrument_86.insert(StrikePriceBoundaryPrecision_86.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_86(3);
  msg.set(StrikePriceDeterminationMethod_86);
  Instrument_86.insert(StrikePriceDeterminationMethod_86.getString());
  FIX::StrikeValue StrikeValue_86;
  StrikeValue_86.setString("15626201");
  msg.set(StrikeValue_86);
  Instrument_86.insert(StrikeValue_86.getString());
  FIX::Symbol Symbol_86("STRING_1066531878");
  msg.set(Symbol_86);
  Instrument_86.insert(Symbol_86.getString());
  FIX::SymbolSfx SymbolSfx_86("STRING_WI");
  msg.set(SymbolSfx_86);
  Instrument_86.insert(SymbolSfx_86.getString());
  FIX::TimeUnit TimeUnit_86("STRING_S");
  msg.set(TimeUnit_86);
  Instrument_86.insert(TimeUnit_86.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_86(2);
  msg.set(UnderlyingPriceDeterminationMethod_86);
  Instrument_86.insert(UnderlyingPriceDeterminationMethod_86.getString());
  FIX::UnitOfMeasure UnitOfMeasure_86("STRING_Alw");
  msg.set(UnitOfMeasure_86);
  Instrument_86.insert(UnitOfMeasure_86.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
  UnitOfMeasureQty_86.setString("315264");
  msg.set(UnitOfMeasureQty_86);
  Instrument_86.insert(UnitOfMeasureQty_86.getString());
  FIX::ValuationMethod ValuationMethod_86("STRING_FUT");
  msg.set(ValuationMethod_86);
  Instrument_86.insert(ValuationMethod_86.getString());
  all_values.push_back(Instrument_86);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_163;
    FIX::ComplexEventCondition ComplexEventCondition_163(2);
    noComplexEvents_0_0.set(ComplexEventCondition_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventCondition_163.getString());
    FIX::ComplexEventPrice ComplexEventPrice_163;
    ComplexEventPrice_163.setString("17642597");
    noComplexEvents_0_0.set(ComplexEventPrice_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPrice_163.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_163(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryMethod_163.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
    ComplexEventPriceBoundaryPrecision_163.setString("20.870000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryPrecision_163.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_163(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceTimeType_163.getString());
    FIX::ComplexEventType ComplexEventType_163(8);
    noComplexEvents_0_0.set(ComplexEventType_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventType_163.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
    ComplexOptPayoutAmount_163.setString("15431349");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexOptPayoutAmount_163.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_163);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_328;
      FIX::ComplexEventEndDate ComplexEventEndDate_328(FIX::UTCTIMESTAMP(1, 31, 2, 27, 9, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_328);
      ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventEndDate_328.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_328(FIX::UTCTIMESTAMP(5, 6, 49, 11, 6, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_328);
      ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventStartDate_328.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_328);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
        FIX::ComplexEventEndTime ComplexEventEndTime_658(FIX::UTCTIMEONLY(9, 11, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_658);
        ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventEndTime_658.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_658(FIX::UTCTIMEONLY(2, 57, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_658);
        ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventStartTime_658.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
        FIX::ComplexEventEndTime ComplexEventEndTime_659(FIX::UTCTIMEONLY(18, 52, 15));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_659);
        ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventEndTime_659.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_659(FIX::UTCTIMEONLY(2, 17, 38));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_659);
        ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventStartTime_659.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
        FIX::ComplexEventEndTime ComplexEventEndTime_660(FIX::UTCTIMEONLY(22, 10, 32));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_660);
        ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventEndTime_660.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_660(FIX::UTCTIMEONLY(22, 18, 57));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_660);
        ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventStartTime_660.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_329;
      FIX::ComplexEventEndDate ComplexEventEndDate_329(FIX::UTCTIMESTAMP(4, 46, 18, 13, 11, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_329);
      ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventEndDate_329.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_329(FIX::UTCTIMESTAMP(19, 56, 37, 1, 11, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_329);
      ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventStartDate_329.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_329);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
        FIX::ComplexEventEndTime ComplexEventEndTime_661(FIX::UTCTIMEONLY(16, 52, 25));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_661);
        ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventEndTime_661.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_661(FIX::UTCTIMEONLY(23, 34, 21));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_661);
        ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventStartTime_661.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_171;
    FIX::EventDate EventDate_171("LOCALMKTDATE_176360469");
    noEvents_0_0.set(EventDate_171);
    EvntGrp_NoEvents_171.insert(EventDate_171.getString());
    FIX::EventPx EventPx_171;
    EventPx_171.setString("8948844");
    noEvents_0_0.set(EventPx_171);
    EvntGrp_NoEvents_171.insert(EventPx_171.getString());
    FIX::EventText EventText_171("STRING_912058248");
    noEvents_0_0.set(EventText_171);
    EvntGrp_NoEvents_171.insert(EventText_171.getString());
    FIX::EventTime EventTime_171(FIX::UTCTIMESTAMP(13, 59, 23, 8, 4, 2014));
    noEvents_0_0.set(EventTime_171);
    EvntGrp_NoEvents_171.insert(EventTime_171.getString());
    FIX::EventType EventType_171(16);
    noEvents_0_0.set(EventType_171);
    EvntGrp_NoEvents_171.insert(EventType_171.getString());
    all_values.push_back(EvntGrp_NoEvents_171);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_172;
    FIX::EventDate EventDate_172("LOCALMKTDATE_2029093489");
    noEvents_0_1.set(EventDate_172);
    EvntGrp_NoEvents_172.insert(EventDate_172.getString());
    FIX::EventPx EventPx_172;
    EventPx_172.setString("7862443");
    noEvents_0_1.set(EventPx_172);
    EvntGrp_NoEvents_172.insert(EventPx_172.getString());
    FIX::EventText EventText_172("STRING_1092880380");
    noEvents_0_1.set(EventText_172);
    EvntGrp_NoEvents_172.insert(EventText_172.getString());
    FIX::EventTime EventTime_172(FIX::UTCTIMESTAMP(3, 48, 18, 8, 4, 2017));
    noEvents_0_1.set(EventTime_172);
    EvntGrp_NoEvents_172.insert(EventTime_172.getString());
    FIX::EventType EventType_172(1);
    noEvents_0_1.set(EventType_172);
    EvntGrp_NoEvents_172.insert(EventType_172.getString());
    all_values.push_back(EvntGrp_NoEvents_172);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_175;
    FIX::InstrumentPartyID InstrumentPartyID_175("STRING_1134510589");
    noInstrumentParties_0_0.set(InstrumentPartyID_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyID_175.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_175('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyIDSource_175.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_175(1294649306);
    noInstrumentParties_0_0.set(InstrumentPartyRole_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyRole_175.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_175);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369;
      FIX::InstrumentPartySubID InstrumentPartySubID_369("STRING_873255392");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubID_369.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_369(1421326440);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubIDType_369.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370;
      FIX::InstrumentPartySubID InstrumentPartySubID_370("STRING_141925426");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubID_370.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_370(1505845068);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_370);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubIDType_370.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371;
      FIX::InstrumentPartySubID InstrumentPartySubID_371("STRING_1597686909");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_371);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubID_371.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_371(1036809849);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_371);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubIDType_371.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_192;
    FIX::SecurityAltID SecurityAltID_192("STRING_1425191128");
    noSecurityAltID_0_0.set(SecurityAltID_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltID_192.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_192("STRING_1143430127");
    noSecurityAltID_0_0.set(SecurityAltIDSource_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltIDSource_192.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_192);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_193;
    FIX::SecurityAltID SecurityAltID_193("STRING_953549008");
    noSecurityAltID_0_1.set(SecurityAltID_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltID_193.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_193("STRING_1361039983");
    noSecurityAltID_0_1.set(SecurityAltIDSource_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltIDSource_193.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_193);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_194;
    FIX::SecurityAltID SecurityAltID_194("STRING_658719823");
    noSecurityAltID_0_2.set(SecurityAltID_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltID_194.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_194("STRING_1886625463");
    noSecurityAltID_0_2.set(SecurityAltIDSource_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltIDSource_194.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_194);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_172;
  FIX::SecurityXML SecurityXML_173("XMLDATA_218620477");
  msg.set(SecurityXML_173);
  FIX::SecurityXMLLen SecurityXMLLen_86(697717378);
  msg.set(SecurityXMLLen_86);
  FIX::SecurityXMLSchema SecurityXMLSchema_86("STRING_1768235304");
  msg.set(SecurityXMLSchema_86);
  SecurityXML_172.insert(SecurityXMLSchema_86.getString());
  all_values.push_back(SecurityXML_172);

  // InstrumentExtension
  multiset<string> InstrumentExtension_16;
  FIX::DeliveryForm DeliveryForm_16(2);
  msg.set(DeliveryForm_16);
  InstrumentExtension_16.insert(DeliveryForm_16.getString());
  FIX::PctAtRisk PctAtRisk_16;
  PctAtRisk_16.setString("77.580000");
  msg.set(PctAtRisk_16);
  InstrumentExtension_16.insert(PctAtRisk_16.getString());
  all_values.push_back(InstrumentExtension_16);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_33;
    FIX::InstrAttribType InstrAttribType_33(21);
    noInstrAttrib_0_0.set(InstrAttribType_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribType_33.getString());
    FIX::InstrAttribValue InstrAttribValue_33("STRING_21199899");
    noInstrAttrib_0_0.set(InstrAttribValue_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribValue_33.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_33);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_34;
    FIX::InstrAttribType InstrAttribType_34(17);
    noInstrAttrib_0_1.set(InstrAttribType_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribType_34.getString());
    FIX::InstrAttribValue InstrAttribValue_34("STRING_714307941");
    noInstrAttrib_0_1.set(InstrAttribValue_34);
    AttrbGrp_NoInstrAttrib_34.insert(InstrAttribValue_34.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_34);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_135;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_135("DATA_721585921");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingIssuer_135.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_135(1210835961);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingIssuerLen_135.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_135("DATA_22961371");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDesc_135.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_135(1856096511);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDescLen_135.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
    UnderlyingAdjustedQuantity_135.setString("11145753");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_135);
    UnderlyingInstrument_135.insert(UnderlyingAdjustedQuantity_135.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
    UnderlyingAllocationPercent_135.setString("6.770000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_135);
    UnderlyingInstrument_135.insert(UnderlyingAllocationPercent_135.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
    UnderlyingAttachmentPoint_135.setString("61.150000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_135);
    UnderlyingInstrument_135.insert(UnderlyingAttachmentPoint_135.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_135("STRING_1987830698");
    noUnderlyings_0_0.set(UnderlyingCFICode_135);
    UnderlyingInstrument_135.insert(UnderlyingCFICode_135.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_135("STRING_591453469");
    noUnderlyings_0_0.set(UnderlyingCPProgram_135);
    UnderlyingInstrument_135.insert(UnderlyingCPProgram_135.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_135("STRING_962151541");
    noUnderlyings_0_0.set(UnderlyingCPRegType_135);
    UnderlyingInstrument_135.insert(UnderlyingCPRegType_135.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_135;
    UnderlyingCapValue_135.setString("13461921");
    noUnderlyings_0_0.set(UnderlyingCapValue_135);
    UnderlyingInstrument_135.insert(UnderlyingCapValue_135.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
    UnderlyingCashAmount_135.setString("416567");
    noUnderlyings_0_0.set(UnderlyingCashAmount_135);
    UnderlyingInstrument_135.insert(UnderlyingCashAmount_135.getString());
    FIX::UnderlyingCashType UnderlyingCashType_135("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_135);
    UnderlyingInstrument_135.insert(UnderlyingCashType_135.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
    UnderlyingContractMultiplier_135.setString("16166117");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_135);
    UnderlyingInstrument_135.insert(UnderlyingContractMultiplier_135.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_135(1466847859);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_135);
    UnderlyingInstrument_135.insert(UnderlyingContractMultiplierUnit_135.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_135("COUNTRY_994907870");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingCountryOfIssue_135.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_135("LOCALMKTDATE_422677148");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_135);
    UnderlyingInstrument_135.insert(UnderlyingCouponPaymentDate_135.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
    UnderlyingCouponRate_135.setString("41.940000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_135);
    UnderlyingInstrument_135.insert(UnderlyingCouponRate_135.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_135("STRING_1653627693");
    noUnderlyings_0_0.set(UnderlyingCreditRating_135);
    UnderlyingInstrument_135.insert(UnderlyingCreditRating_135.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_135("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_135);
    UnderlyingInstrument_135.insert(UnderlyingCurrency_135.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
    UnderlyingCurrentValue_135.setString("2038614");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_135);
    UnderlyingInstrument_135.insert(UnderlyingCurrentValue_135.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
    UnderlyingDetachmentPoint_135.setString("42.680000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_135);
    UnderlyingInstrument_135.insert(UnderlyingDetachmentPoint_135.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
    UnderlyingDirtyPrice_135.setString("19038895");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_135);
    UnderlyingInstrument_135.insert(UnderlyingDirtyPrice_135.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
    UnderlyingEndPrice_135.setString("19944591");
    noUnderlyings_0_0.set(UnderlyingEndPrice_135);
    UnderlyingInstrument_135.insert(UnderlyingEndPrice_135.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_135;
    UnderlyingEndValue_135.setString("1460672");
    noUnderlyings_0_0.set(UnderlyingEndValue_135);
    UnderlyingInstrument_135.insert(UnderlyingEndValue_135.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_135(1450331582);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_135);
    UnderlyingInstrument_135.insert(UnderlyingExerciseStyle_135.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_135;
    UnderlyingFXRate_135.setString("20156590");
    noUnderlyings_0_0.set(UnderlyingFXRate_135);
    UnderlyingInstrument_135.insert(UnderlyingFXRate_135.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_135('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_135);
    UnderlyingInstrument_135.insert(UnderlyingFXRateCalc_135.getString());
    FIX::UnderlyingFactor UnderlyingFactor_135;
    UnderlyingFactor_135.setString("171558");
    noUnderlyings_0_0.set(UnderlyingFactor_135);
    UnderlyingInstrument_135.insert(UnderlyingFactor_135.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_135(2110482811);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_135);
    UnderlyingInstrument_135.insert(UnderlyingFlowScheduleType_135.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_135("STRING_1996857496");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_135);
    UnderlyingInstrument_135.insert(UnderlyingInstrRegistry_135.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_135("LOCALMKTDATE_1227991836");
    noUnderlyings_0_0.set(UnderlyingIssueDate_135);
    UnderlyingInstrument_135.insert(UnderlyingIssueDate_135.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_135("STRING_2133444182");
    noUnderlyings_0_0.set(UnderlyingIssuer_135);
    UnderlyingInstrument_135.insert(UnderlyingIssuer_135.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_135("STRING_1705470359");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingLocaleOfIssue_135.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_135("LOCALMKTDATE_195083495");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityDate_135.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_135("MONTHYEAR_1303571211");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityMonthYear_135.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_135("TZTIMEONLY_378212826");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityTime_135.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
    UnderlyingNotionalPercentageOutstanding_135.setString("5.450000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_135);
    UnderlyingInstrument_135.insert(UnderlyingNotionalPercentageOutstanding_135.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_135('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_135);
    UnderlyingInstrument_135.insert(UnderlyingOptAttribute_135.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
    UnderlyingOriginalNotionalPercentageOutstanding_135.setString("43.680000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_135);
    UnderlyingInstrument_135.insert(UnderlyingOriginalNotionalPercentageOutstanding_135.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_135("STRING_1381622664");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_135);
    UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasure_135.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
    UnderlyingPriceUnitOfMeasureQty_135.setString("19366814");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_135);
    UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasureQty_135.getString());
    FIX::UnderlyingProduct UnderlyingProduct_135(1191842111);
    noUnderlyings_0_0.set(UnderlyingProduct_135);
    UnderlyingInstrument_135.insert(UnderlyingProduct_135.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_135(850750804);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_135);
    UnderlyingInstrument_135.insert(UnderlyingPutOrCall_135.getString());
    FIX::UnderlyingPx UnderlyingPx_135;
    UnderlyingPx_135.setString("12560456");
    noUnderlyings_0_0.set(UnderlyingPx_135);
    UnderlyingInstrument_135.insert(UnderlyingPx_135.getString());
    FIX::UnderlyingQty UnderlyingQty_135;
    UnderlyingQty_135.setString("392663");
    noUnderlyings_0_0.set(UnderlyingQty_135);
    UnderlyingInstrument_135.insert(UnderlyingQty_135.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_135("LOCALMKTDATE_1273427952");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_135);
    UnderlyingInstrument_135.insert(UnderlyingRedemptionDate_135.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_135("STRING_1936449817");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_135);
    UnderlyingInstrument_135.insert(UnderlyingRepoCollateralSecurityType_135.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
    UnderlyingRepurchaseRate_135.setString("40.260000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_135);
    UnderlyingInstrument_135.insert(UnderlyingRepurchaseRate_135.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_135(1435246916);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_135);
    UnderlyingInstrument_135.insert(UnderlyingRepurchaseTerm_135.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_135("STRING_687990841");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_135);
    UnderlyingInstrument_135.insert(UnderlyingRestructuringType_135.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_135("STRING_1896755450");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityDesc_135.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_135("EXCHANGE_1217817536");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityExchange_135.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_135("STRING_444396703");
    noUnderlyings_0_0.set(UnderlyingSecurityID_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityID_135.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_135("STRING_1743730985");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityIDSource_135.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_135("STRING_1363884834");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_135);
    UnderlyingInstrument_135.insert(UnderlyingSecuritySubType_135.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_135("STRING_1894728285");
    noUnderlyings_0_0.set(UnderlyingSecurityType_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityType_135.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_135("STRING_1611906418");
    noUnderlyings_0_0.set(UnderlyingSeniority_135);
    UnderlyingInstrument_135.insert(UnderlyingSeniority_135.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_135("STRING_491672760");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_135);
    UnderlyingInstrument_135.insert(UnderlyingSettlMethod_135.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_135(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_135);
    UnderlyingInstrument_135.insert(UnderlyingSettlementType_135.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_135;
    UnderlyingStartValue_135.setString("15749055");
    noUnderlyings_0_0.set(UnderlyingStartValue_135);
    UnderlyingInstrument_135.insert(UnderlyingStartValue_135.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_135("STRING_341046608");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingStateOrProvinceOfIssue_135.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_135("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_135);
    UnderlyingInstrument_135.insert(UnderlyingStrikeCurrency_135.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
    UnderlyingStrikePrice_135.setString("20465169");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_135);
    UnderlyingInstrument_135.insert(UnderlyingStrikePrice_135.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_135("STRING_1187475843");
    noUnderlyings_0_0.set(UnderlyingSymbol_135);
    UnderlyingInstrument_135.insert(UnderlyingSymbol_135.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_135("STRING_716953680");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_135);
    UnderlyingInstrument_135.insert(UnderlyingSymbolSfx_135.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_135("STRING_277246146");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_135);
    UnderlyingInstrument_135.insert(UnderlyingTimeUnit_135.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_135("STRING_1222906389");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_135);
    UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasure_135.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
    UnderlyingUnitOfMeasureQty_135.setString("4644947");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_135);
    UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasureQty_135.getString());
    all_values.push_back(UnderlyingInstrument_135);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_274("STRING_457045405");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltID_274.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_274("STRING_253692477");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltIDSource_274.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_275("STRING_661968977");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltID_275.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_275("STRING_1307796210");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltIDSource_275.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_276("STRING_1509738100");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltID_276.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_276("STRING_701235310");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltIDSource_276.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
      FIX::UnderlyingStipType UnderlyingStipType_253("STRING_1298704269");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipType_253.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_253("STRING_246645688");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipValue_253.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
      FIX::UnderlyingStipType UnderlyingStipType_254("STRING_1868987430");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipType_254.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_254("STRING_1986695111");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipValue_254.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_277;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_277("STRING_939321318");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyID_277.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_277('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyIDSource_277.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_277(1739648476);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyRole_277.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_277);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_521("STRING_30852803");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubID_521.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_521(1204071246);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubIDType_521.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_522("STRING_647395265");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubID_522.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_522(1942736963);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubIDType_522.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_278;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_278("STRING_631493180");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyID_278.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_278('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyIDSource_278.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_278(787645663);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyRole_278.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_278);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_523("STRING_887475193");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubID_523.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_523(1975121507);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubIDType_523.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_524("STRING_761829329");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_524);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubID_524.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_524(1164721339);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_524);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubIDType_524.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_525("STRING_1050544248");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubID_525.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_525(1226324042);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubIDType_525.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
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
