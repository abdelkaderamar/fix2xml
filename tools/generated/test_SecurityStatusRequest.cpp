#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityStatusRequest_0;
  FIX::Currency Currency_62("CHF");
  msg.set(Currency_62);
  SecurityStatusRequest_0.insert(Currency_62.getString());
  FIX::MarketID MarketID_25("EXCHANGE_1187419108");
  msg.set(MarketID_25);
  SecurityStatusRequest_0.insert(MarketID_25.getString());
  FIX::MarketSegmentID MarketSegmentID_25("STRING_471653923");
  msg.set(MarketSegmentID_25);
  SecurityStatusRequest_0.insert(MarketSegmentID_25.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_1("STRING_516129134");
  msg.set(SecurityStatusReqID_1);
  SecurityStatusRequest_0.insert(SecurityStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_11('0');
  msg.set(SubscriptionRequestType_11);
  SecurityStatusRequest_0.insert(SubscriptionRequestType_11.getString());
  FIX::TradingSessionID TradingSessionID_97("STRING_1");
  msg.set(TradingSessionID_97);
  SecurityStatusRequest_0.insert(TradingSessionID_97.getString());
  FIX::TradingSessionSubID TradingSessionSubID_97("STRING_5");
  msg.set(TradingSessionSubID_97);
  SecurityStatusRequest_0.insert(TradingSessionSubID_97.getString());
  all_values.push_back(SecurityStatusRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    FIX::EncodedLegIssuer EncodedLegIssuer_116("DATA_97682340");
    noLegs_0_0.set(EncodedLegIssuer_116);
    InstrumentLeg_116.insert(EncodedLegIssuer_116.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_116(1091703200);
    noLegs_0_0.set(EncodedLegIssuerLen_116);
    InstrumentLeg_116.insert(EncodedLegIssuerLen_116.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_116("DATA_95025902");
    noLegs_0_0.set(EncodedLegSecurityDesc_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDesc_116.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_116(1107675281);
    noLegs_0_0.set(EncodedLegSecurityDescLen_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDescLen_116.getString());
    FIX::LegCFICode LegCFICode_116("STRING_1701962128");
    noLegs_0_0.set(LegCFICode_116);
    InstrumentLeg_116.insert(LegCFICode_116.getString());
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("20069768");
    noLegs_0_0.set(LegContractMultiplier_116);
    InstrumentLeg_116.insert(LegContractMultiplier_116.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_116(187369893);
    noLegs_0_0.set(LegContractMultiplierUnit_116);
    InstrumentLeg_116.insert(LegContractMultiplierUnit_116.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_116("MONTHYEAR_2139413221");
    noLegs_0_0.set(LegContractSettlMonth_116);
    InstrumentLeg_116.insert(LegContractSettlMonth_116.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_116("COUNTRY_23381993");
    noLegs_0_0.set(LegCountryOfIssue_116);
    InstrumentLeg_116.insert(LegCountryOfIssue_116.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_116("LOCALMKTDATE_1006707595");
    noLegs_0_0.set(LegCouponPaymentDate_116);
    InstrumentLeg_116.insert(LegCouponPaymentDate_116.getString());
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("17.080000");
    noLegs_0_0.set(LegCouponRate_116);
    InstrumentLeg_116.insert(LegCouponRate_116.getString());
    FIX::LegCreditRating LegCreditRating_116("STRING_406503743");
    noLegs_0_0.set(LegCreditRating_116);
    InstrumentLeg_116.insert(LegCreditRating_116.getString());
    FIX::LegCurrency LegCurrency_116("CHF");
    noLegs_0_0.set(LegCurrency_116);
    InstrumentLeg_116.insert(LegCurrency_116.getString());
    FIX::LegDatedDate LegDatedDate_116("LOCALMKTDATE_1383308135");
    noLegs_0_0.set(LegDatedDate_116);
    InstrumentLeg_116.insert(LegDatedDate_116.getString());
    FIX::LegExerciseStyle LegExerciseStyle_116(692426188);
    noLegs_0_0.set(LegExerciseStyle_116);
    InstrumentLeg_116.insert(LegExerciseStyle_116.getString());
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("17976873");
    noLegs_0_0.set(LegFactor_116);
    InstrumentLeg_116.insert(LegFactor_116.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_116(1277085093);
    noLegs_0_0.set(LegFlowScheduleType_116);
    InstrumentLeg_116.insert(LegFlowScheduleType_116.getString());
    FIX::LegInstrRegistry LegInstrRegistry_116("STRING_436944938");
    noLegs_0_0.set(LegInstrRegistry_116);
    InstrumentLeg_116.insert(LegInstrRegistry_116.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_116("LOCALMKTDATE_1899075806");
    noLegs_0_0.set(LegInterestAccrualDate_116);
    InstrumentLeg_116.insert(LegInterestAccrualDate_116.getString());
    FIX::LegIssueDate LegIssueDate_116("LOCALMKTDATE_1288265187");
    noLegs_0_0.set(LegIssueDate_116);
    InstrumentLeg_116.insert(LegIssueDate_116.getString());
    FIX::LegIssuer LegIssuer_116("STRING_172107229");
    noLegs_0_0.set(LegIssuer_116);
    InstrumentLeg_116.insert(LegIssuer_116.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_116("STRING_991699587");
    noLegs_0_0.set(LegLocaleOfIssue_116);
    InstrumentLeg_116.insert(LegLocaleOfIssue_116.getString());
    FIX::LegMaturityDate LegMaturityDate_116("LOCALMKTDATE_1325781846");
    noLegs_0_0.set(LegMaturityDate_116);
    InstrumentLeg_116.insert(LegMaturityDate_116.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_116("MONTHYEAR_1359526337");
    noLegs_0_0.set(LegMaturityMonthYear_116);
    InstrumentLeg_116.insert(LegMaturityMonthYear_116.getString());
    FIX::LegMaturityTime LegMaturityTime_116("TZTIMEONLY_1463353510");
    noLegs_0_0.set(LegMaturityTime_116);
    InstrumentLeg_116.insert(LegMaturityTime_116.getString());
    FIX::LegOptAttribute LegOptAttribute_116('1');
    noLegs_0_0.set(LegOptAttribute_116);
    InstrumentLeg_116.insert(LegOptAttribute_116.getString());
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("20710116");
    noLegs_0_0.set(LegOptionRatio_116);
    InstrumentLeg_116.insert(LegOptionRatio_116.getString());
    FIX::LegPool LegPool_116("STRING_1286612193");
    noLegs_0_0.set(LegPool_116);
    InstrumentLeg_116.insert(LegPool_116.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_116("STRING_1252262447");
    noLegs_0_0.set(LegPriceUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasure_116.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("15397379");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasureQty_116.getString());
    FIX::LegProduct LegProduct_116(1384294533);
    noLegs_0_0.set(LegProduct_116);
    InstrumentLeg_116.insert(LegProduct_116.getString());
    FIX::LegPutOrCall LegPutOrCall_116(196481999);
    noLegs_0_0.set(LegPutOrCall_116);
    InstrumentLeg_116.insert(LegPutOrCall_116.getString());
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("16347638");
    noLegs_0_0.set(LegRatioQty_116);
    InstrumentLeg_116.insert(LegRatioQty_116.getString());
    FIX::LegRedemptionDate LegRedemptionDate_116("LOCALMKTDATE_344486166");
    noLegs_0_0.set(LegRedemptionDate_116);
    InstrumentLeg_116.insert(LegRedemptionDate_116.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_116("STRING_1898444128");
    noLegs_0_0.set(LegRepoCollateralSecurityType_116);
    InstrumentLeg_116.insert(LegRepoCollateralSecurityType_116.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("70.280000");
    noLegs_0_0.set(LegRepurchaseRate_116);
    InstrumentLeg_116.insert(LegRepurchaseRate_116.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_116(531856060);
    noLegs_0_0.set(LegRepurchaseTerm_116);
    InstrumentLeg_116.insert(LegRepurchaseTerm_116.getString());
    FIX::LegSecurityDesc LegSecurityDesc_116("STRING_1890373701");
    noLegs_0_0.set(LegSecurityDesc_116);
    InstrumentLeg_116.insert(LegSecurityDesc_116.getString());
    FIX::LegSecurityExchange LegSecurityExchange_116("EXCHANGE_1517639021");
    noLegs_0_0.set(LegSecurityExchange_116);
    InstrumentLeg_116.insert(LegSecurityExchange_116.getString());
    FIX::LegSecurityID LegSecurityID_116("STRING_1538563655");
    noLegs_0_0.set(LegSecurityID_116);
    InstrumentLeg_116.insert(LegSecurityID_116.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_116("STRING_1583321762");
    noLegs_0_0.set(LegSecurityIDSource_116);
    InstrumentLeg_116.insert(LegSecurityIDSource_116.getString());
    FIX::LegSecuritySubType LegSecuritySubType_116("STRING_1924142765");
    noLegs_0_0.set(LegSecuritySubType_116);
    InstrumentLeg_116.insert(LegSecuritySubType_116.getString());
    FIX::LegSecurityType LegSecurityType_116("STRING_1287577312");
    noLegs_0_0.set(LegSecurityType_116);
    InstrumentLeg_116.insert(LegSecurityType_116.getString());
    FIX::LegSide LegSide_116('1');
    noLegs_0_0.set(LegSide_116);
    InstrumentLeg_116.insert(LegSide_116.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_116("STRING_1159967252");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_116);
    InstrumentLeg_116.insert(LegStateOrProvinceOfIssue_116.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_116("CAN");
    noLegs_0_0.set(LegStrikeCurrency_116);
    InstrumentLeg_116.insert(LegStrikeCurrency_116.getString());
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("2895686");
    noLegs_0_0.set(LegStrikePrice_116);
    InstrumentLeg_116.insert(LegStrikePrice_116.getString());
    FIX::LegSymbol LegSymbol_116("STRING_269464790");
    noLegs_0_0.set(LegSymbol_116);
    InstrumentLeg_116.insert(LegSymbol_116.getString());
    FIX::LegSymbolSfx LegSymbolSfx_116("STRING_1384507212");
    noLegs_0_0.set(LegSymbolSfx_116);
    InstrumentLeg_116.insert(LegSymbolSfx_116.getString());
    FIX::LegTimeUnit LegTimeUnit_116("STRING_1577833884");
    noLegs_0_0.set(LegTimeUnit_116);
    InstrumentLeg_116.insert(LegTimeUnit_116.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_116("STRING_441572019");
    noLegs_0_0.set(LegUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegUnitOfMeasure_116.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("2287231");
    noLegs_0_0.set(LegUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegUnitOfMeasureQty_116.getString());
    all_values.push_back(InstrumentLeg_116);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
      FIX::LegSecurityAltID LegSecurityAltID_211("STRING_1801098357");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_211);
      LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltID_211.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_211("STRING_1692076662");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_211);
      LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltIDSource_211.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
      FIX::LegSecurityAltID LegSecurityAltID_212("STRING_450559414");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_212);
      LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltID_212.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_212("STRING_1724626357");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_212);
      LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltIDSource_212.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_80;
  FIX::AttachmentPoint AttachmentPoint_80;
  AttachmentPoint_80.setString("52.070000");
  msg.set(AttachmentPoint_80);
  Instrument_80.insert(AttachmentPoint_80.getString());
  FIX::CFICode CFICode_80("STRING_1702821861");
  msg.set(CFICode_80);
  Instrument_80.insert(CFICode_80.getString());
  FIX::CPProgram CPProgram_80(1);
  msg.set(CPProgram_80);
  Instrument_80.insert(CPProgram_80.getString());
  FIX::CPRegType CPRegType_80("STRING_68016092");
  msg.set(CPRegType_80);
  Instrument_80.insert(CPRegType_80.getString());
  FIX::CapPrice CapPrice_80;
  CapPrice_80.setString("18993038");
  msg.set(CapPrice_80);
  Instrument_80.insert(CapPrice_80.getString());
  FIX::ContractMultiplier ContractMultiplier_80;
  ContractMultiplier_80.setString("6041609");
  msg.set(ContractMultiplier_80);
  Instrument_80.insert(ContractMultiplier_80.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_80(0);
  msg.set(ContractMultiplierUnit_80);
  Instrument_80.insert(ContractMultiplierUnit_80.getString());
  FIX::ContractSettlMonth ContractSettlMonth_80("MONTHYEAR_1650264341");
  msg.set(ContractSettlMonth_80);
  Instrument_80.insert(ContractSettlMonth_80.getString());
  FIX::CountryOfIssue CountryOfIssue_80("COUNTRY_2098417939");
  msg.set(CountryOfIssue_80);
  Instrument_80.insert(CountryOfIssue_80.getString());
  FIX::CouponPaymentDate CouponPaymentDate_80("LOCALMKTDATE_944358319");
  msg.set(CouponPaymentDate_80);
  Instrument_80.insert(CouponPaymentDate_80.getString());
  FIX::CouponRate CouponRate_80;
  CouponRate_80.setString("43.940000");
  msg.set(CouponRate_80);
  Instrument_80.insert(CouponRate_80.getString());
  FIX::CreditRating CreditRating_80("STRING_1468573313");
  msg.set(CreditRating_80);
  Instrument_80.insert(CreditRating_80.getString());
  FIX::DatedDate DatedDate_80("LOCALMKTDATE_335438326");
  msg.set(DatedDate_80);
  Instrument_80.insert(DatedDate_80.getString());
  FIX::DetachmentPoint DetachmentPoint_80;
  DetachmentPoint_80.setString("25.080000");
  msg.set(DetachmentPoint_80);
  Instrument_80.insert(DetachmentPoint_80.getString());
  FIX::EncodedIssuer EncodedIssuer_80("DATA_1245232430");
  msg.set(EncodedIssuer_80);
  Instrument_80.insert(EncodedIssuer_80.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_80(1623015638);
  msg.set(EncodedIssuerLen_80);
  Instrument_80.insert(EncodedIssuerLen_80.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_80("DATA_664220193");
  msg.set(EncodedSecurityDesc_80);
  Instrument_80.insert(EncodedSecurityDesc_80.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_80(257716034);
  msg.set(EncodedSecurityDescLen_80);
  Instrument_80.insert(EncodedSecurityDescLen_80.getString());
  FIX::ExerciseStyle ExerciseStyle_80(2);
  msg.set(ExerciseStyle_80);
  Instrument_80.insert(ExerciseStyle_80.getString());
  FIX::Factor Factor_80;
  Factor_80.setString("1496515");
  msg.set(Factor_80);
  Instrument_80.insert(Factor_80.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_80(true);
  msg.set(FlexProductEligibilityIndicator_80);
  Instrument_80.insert(FlexProductEligibilityIndicator_80.getString());
  FIX::FlexibleIndicator FlexibleIndicator_80(true);
  msg.set(FlexibleIndicator_80);
  Instrument_80.insert(FlexibleIndicator_80.getString());
  FIX::FloorPrice FloorPrice_80;
  FloorPrice_80.setString("15341588");
  msg.set(FloorPrice_80);
  Instrument_80.insert(FloorPrice_80.getString());
  FIX::FlowScheduleType FlowScheduleType_80(1);
  msg.set(FlowScheduleType_80);
  Instrument_80.insert(FlowScheduleType_80.getString());
  FIX::InstrRegistry InstrRegistry_80("STRING_19088651");
  msg.set(InstrRegistry_80);
  Instrument_80.insert(InstrRegistry_80.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_80('1');
  msg.set(InstrmtAssignmentMethod_80);
  Instrument_80.insert(InstrmtAssignmentMethod_80.getString());
  FIX::InterestAccrualDate InterestAccrualDate_80("LOCALMKTDATE_733767051");
  msg.set(InterestAccrualDate_80);
  Instrument_80.insert(InterestAccrualDate_80.getString());
  FIX::IssueDate IssueDate_80("LOCALMKTDATE_1820187008");
  msg.set(IssueDate_80);
  Instrument_80.insert(IssueDate_80.getString());
  FIX::Issuer Issuer_80("STRING_1307474976");
  msg.set(Issuer_80);
  Instrument_80.insert(Issuer_80.getString());
  FIX::ListMethod ListMethod_80(1);
  msg.set(ListMethod_80);
  Instrument_80.insert(ListMethod_80.getString());
  FIX::LocaleOfIssue LocaleOfIssue_80("STRING_1397329717");
  msg.set(LocaleOfIssue_80);
  Instrument_80.insert(LocaleOfIssue_80.getString());
  FIX::MaturityDate MaturityDate_80("LOCALMKTDATE_2138680183");
  msg.set(MaturityDate_80);
  Instrument_80.insert(MaturityDate_80.getString());
  FIX::MaturityMonthYear MaturityMonthYear_80("MONTHYEAR_739664679");
  msg.set(MaturityMonthYear_80);
  Instrument_80.insert(MaturityMonthYear_80.getString());
  FIX::MaturityTime MaturityTime_80("TZTIMEONLY_366726752");
  msg.set(MaturityTime_80);
  Instrument_80.insert(MaturityTime_80.getString());
  FIX::MinPriceIncrement MinPriceIncrement_80;
  MinPriceIncrement_80.setString("592126");
  msg.set(MinPriceIncrement_80);
  Instrument_80.insert(MinPriceIncrement_80.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
  MinPriceIncrementAmount_80.setString("4914848");
  msg.set(MinPriceIncrementAmount_80);
  Instrument_80.insert(MinPriceIncrementAmount_80.getString());
  FIX::NTPositionLimit NTPositionLimit_80(970887663);
  msg.set(NTPositionLimit_80);
  Instrument_80.insert(NTPositionLimit_80.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
  NotionalPercentageOutstanding_80.setString("48.870000");
  msg.set(NotionalPercentageOutstanding_80);
  Instrument_80.insert(NotionalPercentageOutstanding_80.getString());
  FIX::OptAttribute OptAttribute_80('2');
  msg.set(OptAttribute_80);
  Instrument_80.insert(OptAttribute_80.getString());
  FIX::OptPayoutAmount OptPayoutAmount_80;
  OptPayoutAmount_80.setString("9218219");
  msg.set(OptPayoutAmount_80);
  Instrument_80.insert(OptPayoutAmount_80.getString());
  FIX::OptPayoutType OptPayoutType_80(1);
  msg.set(OptPayoutType_80);
  Instrument_80.insert(OptPayoutType_80.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
  OriginalNotionalPercentageOutstanding_80.setString("99.790000");
  msg.set(OriginalNotionalPercentageOutstanding_80);
  Instrument_80.insert(OriginalNotionalPercentageOutstanding_80.getString());
  FIX::Pool Pool_80("STRING_242911620");
  msg.set(Pool_80);
  Instrument_80.insert(Pool_80.getString());
  FIX::PositionLimit PositionLimit_80(1751511532);
  msg.set(PositionLimit_80);
  Instrument_80.insert(PositionLimit_80.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_80("STRING_STD");
  msg.set(PriceQuoteMethod_80);
  Instrument_80.insert(PriceQuoteMethod_80.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_80("STRING_1488144050");
  msg.set(PriceUnitOfMeasure_80);
  Instrument_80.insert(PriceUnitOfMeasure_80.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
  PriceUnitOfMeasureQty_80.setString("12270435");
  msg.set(PriceUnitOfMeasureQty_80);
  Instrument_80.insert(PriceUnitOfMeasureQty_80.getString());
  FIX::Product Product_82(7);
  msg.set(Product_82);
  Instrument_80.insert(Product_82.getString());
  FIX::ProductComplex ProductComplex_80("STRING_1745860084");
  msg.set(ProductComplex_80);
  Instrument_80.insert(ProductComplex_80.getString());
  FIX::PutOrCall PutOrCall_80(0);
  msg.set(PutOrCall_80);
  Instrument_80.insert(PutOrCall_80.getString());
  FIX::RedemptionDate RedemptionDate_80("LOCALMKTDATE_882800632");
  msg.set(RedemptionDate_80);
  Instrument_80.insert(RedemptionDate_80.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_80("STRING_145661168");
  msg.set(RepoCollateralSecurityType_80);
  Instrument_80.insert(RepoCollateralSecurityType_80.getString());
  FIX::RepurchaseRate RepurchaseRate_80;
  RepurchaseRate_80.setString("19.960000");
  msg.set(RepurchaseRate_80);
  Instrument_80.insert(RepurchaseRate_80.getString());
  FIX::RepurchaseTerm RepurchaseTerm_80(269475795);
  msg.set(RepurchaseTerm_80);
  Instrument_80.insert(RepurchaseTerm_80.getString());
  FIX::RestructuringType RestructuringType_80("STRING_MR");
  msg.set(RestructuringType_80);
  Instrument_80.insert(RestructuringType_80.getString());
  FIX::SecurityDesc SecurityDesc_80("STRING_131700647");
  msg.set(SecurityDesc_80);
  Instrument_80.insert(SecurityDesc_80.getString());
  FIX::SecurityExchange SecurityExchange_80("EXCHANGE_2032357758");
  msg.set(SecurityExchange_80);
  Instrument_80.insert(SecurityExchange_80.getString());
  FIX::SecurityGroup SecurityGroup_80("STRING_857063188");
  msg.set(SecurityGroup_80);
  Instrument_80.insert(SecurityGroup_80.getString());
  FIX::SecurityID SecurityID_80("STRING_1951887656");
  msg.set(SecurityID_80);
  Instrument_80.insert(SecurityID_80.getString());
  FIX::SecurityIDSource SecurityIDSource_80("STRING_H");
  msg.set(SecurityIDSource_80);
  Instrument_80.insert(SecurityIDSource_80.getString());
  FIX::SecurityStatus SecurityStatus_81("STRING_2");
  msg.set(SecurityStatus_81);
  Instrument_80.insert(SecurityStatus_81.getString());
  FIX::SecuritySubType SecuritySubType_81("STRING_1201733725");
  msg.set(SecuritySubType_81);
  Instrument_80.insert(SecuritySubType_81.getString());
  FIX::SecurityType SecurityType_82("STRING_TD");
  msg.set(SecurityType_82);
  Instrument_80.insert(SecurityType_82.getString());
  FIX::Seniority Seniority_80("STRING_SD");
  msg.set(Seniority_80);
  Instrument_80.insert(Seniority_80.getString());
  FIX::SettlMethod SettlMethod_80('C');
  msg.set(SettlMethod_80);
  Instrument_80.insert(SettlMethod_80.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_80("STRING_1242758250");
  msg.set(SettleOnOpenFlag_80);
  Instrument_80.insert(SettleOnOpenFlag_80.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_80("STRING_1125055576");
  msg.set(StateOrProvinceOfIssue_80);
  Instrument_80.insert(StateOrProvinceOfIssue_80.getString());
  FIX::StrikeCurrency StrikeCurrency_80("CAN");
  msg.set(StrikeCurrency_80);
  Instrument_80.insert(StrikeCurrency_80.getString());
  FIX::StrikeMultiplier StrikeMultiplier_80;
  StrikeMultiplier_80.setString("11193211");
  msg.set(StrikeMultiplier_80);
  Instrument_80.insert(StrikeMultiplier_80.getString());
  FIX::StrikePrice StrikePrice_80;
  StrikePrice_80.setString("13136864");
  msg.set(StrikePrice_80);
  Instrument_80.insert(StrikePrice_80.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_80(1);
  msg.set(StrikePriceBoundaryMethod_80);
  Instrument_80.insert(StrikePriceBoundaryMethod_80.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
  StrikePriceBoundaryPrecision_80.setString("74.930000");
  msg.set(StrikePriceBoundaryPrecision_80);
  Instrument_80.insert(StrikePriceBoundaryPrecision_80.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_80(1);
  msg.set(StrikePriceDeterminationMethod_80);
  Instrument_80.insert(StrikePriceDeterminationMethod_80.getString());
  FIX::StrikeValue StrikeValue_80;
  StrikeValue_80.setString("5870905");
  msg.set(StrikeValue_80);
  Instrument_80.insert(StrikeValue_80.getString());
  FIX::Symbol Symbol_80("STRING_428186333");
  msg.set(Symbol_80);
  Instrument_80.insert(Symbol_80.getString());
  FIX::SymbolSfx SymbolSfx_80("STRING_CD");
  msg.set(SymbolSfx_80);
  Instrument_80.insert(SymbolSfx_80.getString());
  FIX::TimeUnit TimeUnit_80("STRING_D");
  msg.set(TimeUnit_80);
  Instrument_80.insert(TimeUnit_80.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_80(3);
  msg.set(UnderlyingPriceDeterminationMethod_80);
  Instrument_80.insert(UnderlyingPriceDeterminationMethod_80.getString());
  FIX::UnitOfMeasure UnitOfMeasure_80("STRING_MMbbl");
  msg.set(UnitOfMeasure_80);
  Instrument_80.insert(UnitOfMeasure_80.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
  UnitOfMeasureQty_80.setString("2017458");
  msg.set(UnitOfMeasureQty_80);
  Instrument_80.insert(UnitOfMeasureQty_80.getString());
  FIX::ValuationMethod ValuationMethod_80("STRING_CDSD");
  msg.set(ValuationMethod_80);
  Instrument_80.insert(ValuationMethod_80.getString());
  all_values.push_back(Instrument_80);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_149;
    FIX::ComplexEventCondition ComplexEventCondition_149(2);
    noComplexEvents_0_0.set(ComplexEventCondition_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventCondition_149.getString());
    FIX::ComplexEventPrice ComplexEventPrice_149;
    ComplexEventPrice_149.setString("1661281");
    noComplexEvents_0_0.set(ComplexEventPrice_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPrice_149.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_149(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryMethod_149.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
    ComplexEventPriceBoundaryPrecision_149.setString("84.600000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryPrecision_149.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_149(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceTimeType_149.getString());
    FIX::ComplexEventType ComplexEventType_149(4);
    noComplexEvents_0_0.set(ComplexEventType_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventType_149.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
    ComplexOptPayoutAmount_149.setString("2504624");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexOptPayoutAmount_149.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_149);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_314;
      FIX::ComplexEventEndDate ComplexEventEndDate_314(FIX::UTCTIMESTAMP(18, 37, 2, 24, 82013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventEndDate_314.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_314(FIX::UTCTIMESTAMP(16, 52, 38, 3, 102016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventStartDate_314.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_314);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
        FIX::ComplexEventEndTime ComplexEventEndTime_629(FIX::UTCTIMEONLY(17, 35, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventEndTime_629.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_629(FIX::UTCTIMEONLY(16, 16, 11));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventStartTime_629.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
        FIX::ComplexEventEndTime ComplexEventEndTime_630(FIX::UTCTIMEONLY(6, 36, 25));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventEndTime_630.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_630(FIX::UTCTIMEONLY(12, 54, 34));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventStartTime_630.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_315;
      FIX::ComplexEventEndDate ComplexEventEndDate_315(FIX::UTCTIMESTAMP(16, 11, 17, 8, 112004));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventEndDate_315.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_315(FIX::UTCTIMESTAMP(2, 20, 31, 1, 72010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventStartDate_315.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_315);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
        FIX::ComplexEventEndTime ComplexEventEndTime_631(FIX::UTCTIMEONLY(15, 38, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventEndTime_631.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_631(FIX::UTCTIMEONLY(18, 49, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventStartTime_631.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_316;
      FIX::ComplexEventEndDate ComplexEventEndDate_316(FIX::UTCTIMESTAMP(12, 26, 32, 7, 82002));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_316);
      ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventEndDate_316.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_316(FIX::UTCTIMESTAMP(13, 58, 4, 10, 112008));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_316);
      ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventStartDate_316.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_316);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_632;
        FIX::ComplexEventEndTime ComplexEventEndTime_632(FIX::UTCTIMEONLY(8, 59, 39));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventEndTime_632.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_632(FIX::UTCTIMEONLY(5, 41, 16));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventStartTime_632.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_632);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_633;
        FIX::ComplexEventEndTime ComplexEventEndTime_633(FIX::UTCTIMEONLY(12, 54, 15));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventEndTime_633.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_633(FIX::UTCTIMEONLY(16, 56, 50));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventStartTime_633.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_633);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_634;
        FIX::ComplexEventEndTime ComplexEventEndTime_634(FIX::UTCTIMEONLY(20, 8, 55));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventEndTime_634.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_634(FIX::UTCTIMEONLY(3, 22, 40));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventStartTime_634.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_634);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_150;
    FIX::ComplexEventCondition ComplexEventCondition_150(2);
    noComplexEvents_0_1.set(ComplexEventCondition_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventCondition_150.getString());
    FIX::ComplexEventPrice ComplexEventPrice_150;
    ComplexEventPrice_150.setString("2600236");
    noComplexEvents_0_1.set(ComplexEventPrice_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPrice_150.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_150(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryMethod_150.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
    ComplexEventPriceBoundaryPrecision_150.setString("38.750000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryPrecision_150.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_150(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceTimeType_150.getString());
    FIX::ComplexEventType ComplexEventType_150(5);
    noComplexEvents_0_1.set(ComplexEventType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventType_150.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
    ComplexOptPayoutAmount_150.setString("12021072");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexOptPayoutAmount_150.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_150);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_317;
      FIX::ComplexEventEndDate ComplexEventEndDate_317(FIX::UTCTIMESTAMP(5, 6, 35, 18, 12003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_317);
      ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventEndDate_317.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_317(FIX::UTCTIMESTAMP(0, 37, 38, 16, 62015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_317);
      ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventStartDate_317.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_317);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_635;
        FIX::ComplexEventEndTime ComplexEventEndTime_635(FIX::UTCTIMEONLY(3, 50, 12));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventEndTime_635.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_635(FIX::UTCTIMEONLY(22, 34, 7));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventStartTime_635.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_635);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_318;
      FIX::ComplexEventEndDate ComplexEventEndDate_318(FIX::UTCTIMESTAMP(14, 52, 58, 21, 72004));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventEndDate_318.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_318(FIX::UTCTIMESTAMP(5, 37, 47, 8, 82015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventStartDate_318.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_318);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_636;
        FIX::ComplexEventEndTime ComplexEventEndTime_636(FIX::UTCTIMEONLY(3, 1, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventEndTime_636.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_636(FIX::UTCTIMEONLY(19, 40, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventStartTime_636.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_636);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_319;
      FIX::ComplexEventEndDate ComplexEventEndDate_319(FIX::UTCTIMESTAMP(20, 44, 23, 3, 72001));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_319);
      ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventEndDate_319.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_319(FIX::UTCTIMESTAMP(21, 28, 22, 23, 22017));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_319);
      ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventStartDate_319.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_319);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_637;
        FIX::ComplexEventEndTime ComplexEventEndTime_637(FIX::UTCTIMEONLY(10, 33, 45));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventEndTime_637.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_637(FIX::UTCTIMEONLY(21, 12, 6));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventStartTime_637.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_637);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_638;
        FIX::ComplexEventEndTime ComplexEventEndTime_638(FIX::UTCTIMEONLY(3, 8, 33));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventEndTime_638.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_638(FIX::UTCTIMEONLY(19, 14, 52));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventStartTime_638.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_638);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
        FIX::ComplexEventEndTime ComplexEventEndTime_639(FIX::UTCTIMEONLY(14, 36, 14));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventEndTime_639.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_639(FIX::UTCTIMEONLY(18, 55, 43));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventStartTime_639.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_155;
    FIX::EventDate EventDate_155("LOCALMKTDATE_283024095");
    noEvents_0_0.set(EventDate_155);
    EvntGrp_NoEvents_155.insert(EventDate_155.getString());
    FIX::EventPx EventPx_155;
    EventPx_155.setString("21321030");
    noEvents_0_0.set(EventPx_155);
    EvntGrp_NoEvents_155.insert(EventPx_155.getString());
    FIX::EventText EventText_155("STRING_2147482231");
    noEvents_0_0.set(EventText_155);
    EvntGrp_NoEvents_155.insert(EventText_155.getString());
    FIX::EventTime EventTime_155(FIX::UTCTIMESTAMP(15, 19, 47, 25, 52002));
    noEvents_0_0.set(EventTime_155);
    EvntGrp_NoEvents_155.insert(EventTime_155.getString());
    FIX::EventType EventType_155(8);
    noEvents_0_0.set(EventType_155);
    EvntGrp_NoEvents_155.insert(EventType_155.getString());
    all_values.push_back(EvntGrp_NoEvents_155);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_156;
    FIX::EventDate EventDate_156("LOCALMKTDATE_1768619017");
    noEvents_0_1.set(EventDate_156);
    EvntGrp_NoEvents_156.insert(EventDate_156.getString());
    FIX::EventPx EventPx_156;
    EventPx_156.setString("3444989");
    noEvents_0_1.set(EventPx_156);
    EvntGrp_NoEvents_156.insert(EventPx_156.getString());
    FIX::EventText EventText_156("STRING_428355526");
    noEvents_0_1.set(EventText_156);
    EvntGrp_NoEvents_156.insert(EventText_156.getString());
    FIX::EventTime EventTime_156(FIX::UTCTIMESTAMP(3, 46, 31, 2, 62007));
    noEvents_0_1.set(EventTime_156);
    EvntGrp_NoEvents_156.insert(EventTime_156.getString());
    FIX::EventType EventType_156(12);
    noEvents_0_1.set(EventType_156);
    EvntGrp_NoEvents_156.insert(EventType_156.getString());
    all_values.push_back(EvntGrp_NoEvents_156);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_155;
    FIX::InstrumentPartyID InstrumentPartyID_155("STRING_1686710763");
    noInstrumentParties_0_0.set(InstrumentPartyID_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyID_155.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_155('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyIDSource_155.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_155(1784877945);
    noInstrumentParties_0_0.set(InstrumentPartyRole_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyRole_155.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_155);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
      FIX::InstrumentPartySubID InstrumentPartySubID_310("STRING_1091065526");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_310);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubID_310.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_310(118079013);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_310);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubIDType_310.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_156;
    FIX::InstrumentPartyID InstrumentPartyID_156("STRING_914810135");
    noInstrumentParties_0_1.set(InstrumentPartyID_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyID_156.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_156('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyIDSource_156.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_156(401103108);
    noInstrumentParties_0_1.set(InstrumentPartyRole_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyRole_156.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_156);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
      FIX::InstrumentPartySubID InstrumentPartySubID_311("STRING_621749460");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_311);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubID_311.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_311(818063129);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_311);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubIDType_311.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_168;
    FIX::SecurityAltID SecurityAltID_168("STRING_704946139");
    noSecurityAltID_0_0.set(SecurityAltID_168);
    SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltID_168.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_168("STRING_293082668");
    noSecurityAltID_0_0.set(SecurityAltIDSource_168);
    SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltIDSource_168.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_160;
  FIX::SecurityXML SecurityXML_161("XMLDATA_431123073");
  msg.set(SecurityXML_161);
  FIX::SecurityXMLLen SecurityXMLLen_80(198409024);
  msg.set(SecurityXMLLen_80);
  FIX::SecurityXMLSchema SecurityXMLSchema_80("STRING_191347532");
  msg.set(SecurityXMLSchema_80);
  SecurityXML_160.insert(SecurityXMLSchema_80.getString());
  all_values.push_back(SecurityXML_160);

  // InstrumentExtension
  multiset<string> InstrumentExtension_17;
  FIX::DeliveryForm DeliveryForm_17(2);
  msg.set(DeliveryForm_17);
  InstrumentExtension_17.insert(DeliveryForm_17.getString());
  FIX::PctAtRisk PctAtRisk_17;
  PctAtRisk_17.setString("80.410000");
  msg.set(PctAtRisk_17);
  InstrumentExtension_17.insert(PctAtRisk_17.getString());
  all_values.push_back(InstrumentExtension_17);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_35;
    FIX::InstrAttribType InstrAttribType_35(99);
    noInstrAttrib_0_0.set(InstrAttribType_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribType_35.getString());
    FIX::InstrAttribValue InstrAttribValue_35("STRING_962864971");
    noInstrAttrib_0_0.set(InstrAttribValue_35);
    AttrbGrp_NoInstrAttrib_35.insert(InstrAttribValue_35.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_35);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_36;
    FIX::InstrAttribType InstrAttribType_36(17);
    noInstrAttrib_0_1.set(InstrAttribType_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribType_36.getString());
    FIX::InstrAttribValue InstrAttribValue_36("STRING_519268185");
    noInstrAttrib_0_1.set(InstrAttribValue_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribValue_36.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_36);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_37;
    FIX::InstrAttribType InstrAttribType_37(25);
    noInstrAttrib_0_2.set(InstrAttribType_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribType_37.getString());
    FIX::InstrAttribValue InstrAttribValue_37("STRING_1380868882");
    noInstrAttrib_0_2.set(InstrAttribValue_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribValue_37.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_37);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_139;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_139("DATA_1305347851");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingIssuer_139.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_139(1538318593);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingIssuerLen_139.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_139("DATA_1242091549");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDesc_139.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_139(844574966);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDescLen_139.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_139;
    UnderlyingAdjustedQuantity_139.setString("8612670");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_139);
    UnderlyingInstrument_139.insert(UnderlyingAdjustedQuantity_139.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_139;
    UnderlyingAllocationPercent_139.setString("58.470000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_139);
    UnderlyingInstrument_139.insert(UnderlyingAllocationPercent_139.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_139;
    UnderlyingAttachmentPoint_139.setString("89.660000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_139);
    UnderlyingInstrument_139.insert(UnderlyingAttachmentPoint_139.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_139("STRING_1952332619");
    noUnderlyings_0_0.set(UnderlyingCFICode_139);
    UnderlyingInstrument_139.insert(UnderlyingCFICode_139.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_139("STRING_997564860");
    noUnderlyings_0_0.set(UnderlyingCPProgram_139);
    UnderlyingInstrument_139.insert(UnderlyingCPProgram_139.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_139("STRING_704405453");
    noUnderlyings_0_0.set(UnderlyingCPRegType_139);
    UnderlyingInstrument_139.insert(UnderlyingCPRegType_139.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_139;
    UnderlyingCapValue_139.setString("4265998");
    noUnderlyings_0_0.set(UnderlyingCapValue_139);
    UnderlyingInstrument_139.insert(UnderlyingCapValue_139.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_139;
    UnderlyingCashAmount_139.setString("13986679");
    noUnderlyings_0_0.set(UnderlyingCashAmount_139);
    UnderlyingInstrument_139.insert(UnderlyingCashAmount_139.getString());
    FIX::UnderlyingCashType UnderlyingCashType_139("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_139);
    UnderlyingInstrument_139.insert(UnderlyingCashType_139.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_139;
    UnderlyingContractMultiplier_139.setString("10483493");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_139);
    UnderlyingInstrument_139.insert(UnderlyingContractMultiplier_139.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_139(69247450);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_139);
    UnderlyingInstrument_139.insert(UnderlyingContractMultiplierUnit_139.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_139("COUNTRY_1387595815");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingCountryOfIssue_139.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_139("LOCALMKTDATE_1753295448");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_139);
    UnderlyingInstrument_139.insert(UnderlyingCouponPaymentDate_139.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_139;
    UnderlyingCouponRate_139.setString("1.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_139);
    UnderlyingInstrument_139.insert(UnderlyingCouponRate_139.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_139("STRING_1818718889");
    noUnderlyings_0_0.set(UnderlyingCreditRating_139);
    UnderlyingInstrument_139.insert(UnderlyingCreditRating_139.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_139("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_139);
    UnderlyingInstrument_139.insert(UnderlyingCurrency_139.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_139;
    UnderlyingCurrentValue_139.setString("15289018");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_139);
    UnderlyingInstrument_139.insert(UnderlyingCurrentValue_139.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_139;
    UnderlyingDetachmentPoint_139.setString("88.660000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_139);
    UnderlyingInstrument_139.insert(UnderlyingDetachmentPoint_139.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_139;
    UnderlyingDirtyPrice_139.setString("10895241");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_139);
    UnderlyingInstrument_139.insert(UnderlyingDirtyPrice_139.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_139;
    UnderlyingEndPrice_139.setString("16674403");
    noUnderlyings_0_0.set(UnderlyingEndPrice_139);
    UnderlyingInstrument_139.insert(UnderlyingEndPrice_139.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_139;
    UnderlyingEndValue_139.setString("5866301");
    noUnderlyings_0_0.set(UnderlyingEndValue_139);
    UnderlyingInstrument_139.insert(UnderlyingEndValue_139.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_139(1156873335);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_139);
    UnderlyingInstrument_139.insert(UnderlyingExerciseStyle_139.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_139;
    UnderlyingFXRate_139.setString("392248");
    noUnderlyings_0_0.set(UnderlyingFXRate_139);
    UnderlyingInstrument_139.insert(UnderlyingFXRate_139.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_139('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_139);
    UnderlyingInstrument_139.insert(UnderlyingFXRateCalc_139.getString());
    FIX::UnderlyingFactor UnderlyingFactor_139;
    UnderlyingFactor_139.setString("3902585");
    noUnderlyings_0_0.set(UnderlyingFactor_139);
    UnderlyingInstrument_139.insert(UnderlyingFactor_139.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_139(349635756);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_139);
    UnderlyingInstrument_139.insert(UnderlyingFlowScheduleType_139.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_139("STRING_93219366");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_139);
    UnderlyingInstrument_139.insert(UnderlyingInstrRegistry_139.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_139("LOCALMKTDATE_1928577163");
    noUnderlyings_0_0.set(UnderlyingIssueDate_139);
    UnderlyingInstrument_139.insert(UnderlyingIssueDate_139.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_139("STRING_1591727305");
    noUnderlyings_0_0.set(UnderlyingIssuer_139);
    UnderlyingInstrument_139.insert(UnderlyingIssuer_139.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_139("STRING_937794332");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingLocaleOfIssue_139.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_139("LOCALMKTDATE_642360608");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityDate_139.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_139("MONTHYEAR_323729504");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityMonthYear_139.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_139("TZTIMEONLY_727389650");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityTime_139.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_139;
    UnderlyingNotionalPercentageOutstanding_139.setString("95.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_139);
    UnderlyingInstrument_139.insert(UnderlyingNotionalPercentageOutstanding_139.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_139('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_139);
    UnderlyingInstrument_139.insert(UnderlyingOptAttribute_139.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_139;
    UnderlyingOriginalNotionalPercentageOutstanding_139.setString("51.030000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_139);
    UnderlyingInstrument_139.insert(UnderlyingOriginalNotionalPercentageOutstanding_139.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_139("STRING_873809428");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_139);
    UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasure_139.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_139;
    UnderlyingPriceUnitOfMeasureQty_139.setString("5724786");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_139);
    UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasureQty_139.getString());
    FIX::UnderlyingProduct UnderlyingProduct_139(888146462);
    noUnderlyings_0_0.set(UnderlyingProduct_139);
    UnderlyingInstrument_139.insert(UnderlyingProduct_139.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_139(1922158737);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_139);
    UnderlyingInstrument_139.insert(UnderlyingPutOrCall_139.getString());
    FIX::UnderlyingPx UnderlyingPx_139;
    UnderlyingPx_139.setString("6417261");
    noUnderlyings_0_0.set(UnderlyingPx_139);
    UnderlyingInstrument_139.insert(UnderlyingPx_139.getString());
    FIX::UnderlyingQty UnderlyingQty_139;
    UnderlyingQty_139.setString("1282586");
    noUnderlyings_0_0.set(UnderlyingQty_139);
    UnderlyingInstrument_139.insert(UnderlyingQty_139.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_139("LOCALMKTDATE_1527970537");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_139);
    UnderlyingInstrument_139.insert(UnderlyingRedemptionDate_139.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_139("STRING_1004056253");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_139);
    UnderlyingInstrument_139.insert(UnderlyingRepoCollateralSecurityType_139.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_139;
    UnderlyingRepurchaseRate_139.setString("75.190000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_139);
    UnderlyingInstrument_139.insert(UnderlyingRepurchaseRate_139.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_139(1332191362);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_139);
    UnderlyingInstrument_139.insert(UnderlyingRepurchaseTerm_139.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_139("STRING_1557733904");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_139);
    UnderlyingInstrument_139.insert(UnderlyingRestructuringType_139.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_139("STRING_1328395733");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityDesc_139.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_139("EXCHANGE_955956580");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityExchange_139.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_139("STRING_499774416");
    noUnderlyings_0_0.set(UnderlyingSecurityID_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityID_139.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_139("STRING_848352446");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityIDSource_139.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_139("STRING_1542586769");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_139);
    UnderlyingInstrument_139.insert(UnderlyingSecuritySubType_139.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_139("STRING_1656647751");
    noUnderlyings_0_0.set(UnderlyingSecurityType_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityType_139.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_139("STRING_887577344");
    noUnderlyings_0_0.set(UnderlyingSeniority_139);
    UnderlyingInstrument_139.insert(UnderlyingSeniority_139.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_139("STRING_330458284");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_139);
    UnderlyingInstrument_139.insert(UnderlyingSettlMethod_139.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_139(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_139);
    UnderlyingInstrument_139.insert(UnderlyingSettlementType_139.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_139;
    UnderlyingStartValue_139.setString("12372131");
    noUnderlyings_0_0.set(UnderlyingStartValue_139);
    UnderlyingInstrument_139.insert(UnderlyingStartValue_139.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_139("STRING_423677650");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingStateOrProvinceOfIssue_139.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_139("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_139);
    UnderlyingInstrument_139.insert(UnderlyingStrikeCurrency_139.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_139;
    UnderlyingStrikePrice_139.setString("13614719");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_139);
    UnderlyingInstrument_139.insert(UnderlyingStrikePrice_139.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_139("STRING_322876797");
    noUnderlyings_0_0.set(UnderlyingSymbol_139);
    UnderlyingInstrument_139.insert(UnderlyingSymbol_139.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_139("STRING_1005186262");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_139);
    UnderlyingInstrument_139.insert(UnderlyingSymbolSfx_139.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_139("STRING_2088861632");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_139);
    UnderlyingInstrument_139.insert(UnderlyingTimeUnit_139.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_139("STRING_770086377");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_139);
    UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasure_139.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_139;
    UnderlyingUnitOfMeasureQty_139.setString("1789969");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_139);
    UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasureQty_139.getString());
    all_values.push_back(UnderlyingInstrument_139);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_282("STRING_1643895805");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltID_282.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_282("STRING_751475663");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltIDSource_282.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_283("STRING_113835902");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltID_283.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_283("STRING_1418570894");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltIDSource_283.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
      FIX::UnderlyingStipType UnderlyingStipType_270("STRING_242094532");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipType_270.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_270("STRING_799057783");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipValue_270.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_271;
      FIX::UnderlyingStipType UnderlyingStipType_271("STRING_249774404");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipType_271.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_271("STRING_41588403");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipValue_271.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_271);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_282;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_282("STRING_1807508308");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyID_282.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_282('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyIDSource_282.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_282(939722077);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyRole_282.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_282);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_554("STRING_70852934");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubID_554.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_554(334825198);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubIDType_554.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_555("STRING_1816446828");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubID_555.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_555(958430278);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubIDType_555.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_556("STRING_665283482");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubID_556.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_556(1715869501);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubIDType_556.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_283;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_283("STRING_48159730");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyID_283.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_283('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyIDSource_283.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_283(1396385690);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyRole_283.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_283);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_557("STRING_302949466");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubID_557.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_557(1719262488);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubIDType_557.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_558("STRING_1734802749");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubID_558.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_558(244327450);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubIDType_558.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_559("STRING_341865217");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubID_559.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_559(1913799728);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubIDType_559.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_284;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_284("STRING_1617500538");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyID_284.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_284('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyIDSource_284.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_284(517791743);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyRole_284.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_284);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_560("STRING_1256848268");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubID_560.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_560(1910993542);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubIDType_560.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_561("STRING_1973430972");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubID_561.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_561(2055906051);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubIDType_561.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_562("STRING_13284298");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubID_562.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_562(2015019375);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubIDType_562.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
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
