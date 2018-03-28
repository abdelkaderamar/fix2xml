#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> Advertisement_0;
  FIX::AdvId AdvId_0("STRING_169512691");
  msg.set(AdvId_0);
  Advertisement_0.insert(AdvId_0.getString());
  FIX::AdvRefID AdvRefID_0("STRING_664230518");
  msg.set(AdvRefID_0);
  Advertisement_0.insert(AdvRefID_0.getString());
  FIX::AdvSide AdvSide_0('T');
  msg.set(AdvSide_0);
  Advertisement_0.insert(AdvSide_0.getString());
  FIX::AdvTransType AdvTransType_0("STRING_R");
  msg.set(AdvTransType_0);
  Advertisement_0.insert(AdvTransType_0.getString());
  FIX::Currency Currency_0("USD");
  msg.set(Currency_0);
  Advertisement_0.insert(Currency_0.getString());
  FIX::EncodedText EncodedText_0("DATA_704591858");
  msg.set(EncodedText_0);
  Advertisement_0.insert(EncodedText_0.getString());
  FIX::EncodedTextLen EncodedTextLen_0(1141697681);
  msg.set(EncodedTextLen_0);
  Advertisement_0.insert(EncodedTextLen_0.getString());
  FIX::LastMkt LastMkt_0("EXCHANGE_1503818512");
  msg.set(LastMkt_0);
  Advertisement_0.insert(LastMkt_0.getString());
  FIX::Price Price_0;
  Price_0.setString("9509771");
  msg.set(Price_0);
  Advertisement_0.insert(Price_0.getString());
  FIX::QtyType QtyType_0(0);
  msg.set(QtyType_0);
  Advertisement_0.insert(QtyType_0.getString());
  FIX::Quantity Quantity_0;
  Quantity_0.setString("5265168");
  msg.set(Quantity_0);
  Advertisement_0.insert(Quantity_0.getString());
  FIX::Text Text_0("STRING_1380841924");
  msg.set(Text_0);
  Advertisement_0.insert(Text_0.getString());
  FIX::TradeDate TradeDate_0("LOCALMKTDATE_262019936");
  msg.set(TradeDate_0);
  Advertisement_0.insert(TradeDate_0.getString());
  FIX::TradingSessionID TradingSessionID_0("STRING_3");
  msg.set(TradingSessionID_0);
  Advertisement_0.insert(TradingSessionID_0.getString());
  FIX::TradingSessionSubID TradingSessionSubID_0("STRING_7");
  msg.set(TradingSessionSubID_0);
  Advertisement_0.insert(TradingSessionSubID_0.getString());
  FIX::TransactTime TransactTime_0(FIX::UTCTIMESTAMP(9, 58, 20, 7, 3, 2017));
  msg.set(TransactTime_0);
  Advertisement_0.insert(TransactTime_0.getString());
  FIX::URLLink URLLink_0("STRING_703261546");
  msg.set(URLLink_0);
  Advertisement_0.insert(URLLink_0.getString());
  all_values.push_back(Advertisement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    FIX::EncodedLegIssuer EncodedLegIssuer_0("DATA_1217654737");
    noLegs_0_0.set(EncodedLegIssuer_0);
    InstrumentLeg_0.insert(EncodedLegIssuer_0.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_0(1854156329);
    noLegs_0_0.set(EncodedLegIssuerLen_0);
    InstrumentLeg_0.insert(EncodedLegIssuerLen_0.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_0("DATA_1723297053");
    noLegs_0_0.set(EncodedLegSecurityDesc_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDesc_0.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_0(438601990);
    noLegs_0_0.set(EncodedLegSecurityDescLen_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDescLen_0.getString());
    FIX::LegCFICode LegCFICode_0("STRING_845707934");
    noLegs_0_0.set(LegCFICode_0);
    InstrumentLeg_0.insert(LegCFICode_0.getString());
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("3758195");
    noLegs_0_0.set(LegContractMultiplier_0);
    InstrumentLeg_0.insert(LegContractMultiplier_0.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_0(608114681);
    noLegs_0_0.set(LegContractMultiplierUnit_0);
    InstrumentLeg_0.insert(LegContractMultiplierUnit_0.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_0("MONTHYEAR_1509938452");
    noLegs_0_0.set(LegContractSettlMonth_0);
    InstrumentLeg_0.insert(LegContractSettlMonth_0.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_0("COUNTRY_1633773136");
    noLegs_0_0.set(LegCountryOfIssue_0);
    InstrumentLeg_0.insert(LegCountryOfIssue_0.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_0("LOCALMKTDATE_1111419265");
    noLegs_0_0.set(LegCouponPaymentDate_0);
    InstrumentLeg_0.insert(LegCouponPaymentDate_0.getString());
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("27.590000");
    noLegs_0_0.set(LegCouponRate_0);
    InstrumentLeg_0.insert(LegCouponRate_0.getString());
    FIX::LegCreditRating LegCreditRating_0("STRING_1597573274");
    noLegs_0_0.set(LegCreditRating_0);
    InstrumentLeg_0.insert(LegCreditRating_0.getString());
    FIX::LegCurrency LegCurrency_0("GBP");
    noLegs_0_0.set(LegCurrency_0);
    InstrumentLeg_0.insert(LegCurrency_0.getString());
    FIX::LegDatedDate LegDatedDate_0("LOCALMKTDATE_953908139");
    noLegs_0_0.set(LegDatedDate_0);
    InstrumentLeg_0.insert(LegDatedDate_0.getString());
    FIX::LegExerciseStyle LegExerciseStyle_0(619504582);
    noLegs_0_0.set(LegExerciseStyle_0);
    InstrumentLeg_0.insert(LegExerciseStyle_0.getString());
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("1293908");
    noLegs_0_0.set(LegFactor_0);
    InstrumentLeg_0.insert(LegFactor_0.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_0(1480424970);
    noLegs_0_0.set(LegFlowScheduleType_0);
    InstrumentLeg_0.insert(LegFlowScheduleType_0.getString());
    FIX::LegInstrRegistry LegInstrRegistry_0("STRING_2000346506");
    noLegs_0_0.set(LegInstrRegistry_0);
    InstrumentLeg_0.insert(LegInstrRegistry_0.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_0("LOCALMKTDATE_391410746");
    noLegs_0_0.set(LegInterestAccrualDate_0);
    InstrumentLeg_0.insert(LegInterestAccrualDate_0.getString());
    FIX::LegIssueDate LegIssueDate_0("LOCALMKTDATE_947961882");
    noLegs_0_0.set(LegIssueDate_0);
    InstrumentLeg_0.insert(LegIssueDate_0.getString());
    FIX::LegIssuer LegIssuer_0("STRING_469327160");
    noLegs_0_0.set(LegIssuer_0);
    InstrumentLeg_0.insert(LegIssuer_0.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_0("STRING_1961609775");
    noLegs_0_0.set(LegLocaleOfIssue_0);
    InstrumentLeg_0.insert(LegLocaleOfIssue_0.getString());
    FIX::LegMaturityDate LegMaturityDate_0("LOCALMKTDATE_1687416531");
    noLegs_0_0.set(LegMaturityDate_0);
    InstrumentLeg_0.insert(LegMaturityDate_0.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_0("MONTHYEAR_1208129179");
    noLegs_0_0.set(LegMaturityMonthYear_0);
    InstrumentLeg_0.insert(LegMaturityMonthYear_0.getString());
    FIX::LegMaturityTime LegMaturityTime_0("TZTIMEONLY_30877827");
    noLegs_0_0.set(LegMaturityTime_0);
    InstrumentLeg_0.insert(LegMaturityTime_0.getString());
    FIX::LegOptAttribute LegOptAttribute_0('9');
    noLegs_0_0.set(LegOptAttribute_0);
    InstrumentLeg_0.insert(LegOptAttribute_0.getString());
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("8014032");
    noLegs_0_0.set(LegOptionRatio_0);
    InstrumentLeg_0.insert(LegOptionRatio_0.getString());
    FIX::LegPool LegPool_0("STRING_913131519");
    noLegs_0_0.set(LegPool_0);
    InstrumentLeg_0.insert(LegPool_0.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_0("STRING_797672836");
    noLegs_0_0.set(LegPriceUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasure_0.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("17186637");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasureQty_0.getString());
    FIX::LegProduct LegProduct_0(2130786256);
    noLegs_0_0.set(LegProduct_0);
    InstrumentLeg_0.insert(LegProduct_0.getString());
    FIX::LegPutOrCall LegPutOrCall_0(504345517);
    noLegs_0_0.set(LegPutOrCall_0);
    InstrumentLeg_0.insert(LegPutOrCall_0.getString());
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("12944771");
    noLegs_0_0.set(LegRatioQty_0);
    InstrumentLeg_0.insert(LegRatioQty_0.getString());
    FIX::LegRedemptionDate LegRedemptionDate_0("LOCALMKTDATE_421904598");
    noLegs_0_0.set(LegRedemptionDate_0);
    InstrumentLeg_0.insert(LegRedemptionDate_0.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_0("STRING_1350053451");
    noLegs_0_0.set(LegRepoCollateralSecurityType_0);
    InstrumentLeg_0.insert(LegRepoCollateralSecurityType_0.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("67.320000");
    noLegs_0_0.set(LegRepurchaseRate_0);
    InstrumentLeg_0.insert(LegRepurchaseRate_0.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_0(1030019280);
    noLegs_0_0.set(LegRepurchaseTerm_0);
    InstrumentLeg_0.insert(LegRepurchaseTerm_0.getString());
    FIX::LegSecurityDesc LegSecurityDesc_0("STRING_712508255");
    noLegs_0_0.set(LegSecurityDesc_0);
    InstrumentLeg_0.insert(LegSecurityDesc_0.getString());
    FIX::LegSecurityExchange LegSecurityExchange_0("EXCHANGE_1156586220");
    noLegs_0_0.set(LegSecurityExchange_0);
    InstrumentLeg_0.insert(LegSecurityExchange_0.getString());
    FIX::LegSecurityID LegSecurityID_0("STRING_2141438545");
    noLegs_0_0.set(LegSecurityID_0);
    InstrumentLeg_0.insert(LegSecurityID_0.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_0("STRING_1918841014");
    noLegs_0_0.set(LegSecurityIDSource_0);
    InstrumentLeg_0.insert(LegSecurityIDSource_0.getString());
    FIX::LegSecuritySubType LegSecuritySubType_0("STRING_606675847");
    noLegs_0_0.set(LegSecuritySubType_0);
    InstrumentLeg_0.insert(LegSecuritySubType_0.getString());
    FIX::LegSecurityType LegSecurityType_0("STRING_1809966021");
    noLegs_0_0.set(LegSecurityType_0);
    InstrumentLeg_0.insert(LegSecurityType_0.getString());
    FIX::LegSide LegSide_0('2');
    noLegs_0_0.set(LegSide_0);
    InstrumentLeg_0.insert(LegSide_0.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_0("STRING_1560583986");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_0);
    InstrumentLeg_0.insert(LegStateOrProvinceOfIssue_0.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_0("JPY");
    noLegs_0_0.set(LegStrikeCurrency_0);
    InstrumentLeg_0.insert(LegStrikeCurrency_0.getString());
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("8935253");
    noLegs_0_0.set(LegStrikePrice_0);
    InstrumentLeg_0.insert(LegStrikePrice_0.getString());
    FIX::LegSymbol LegSymbol_0("STRING_134849813");
    noLegs_0_0.set(LegSymbol_0);
    InstrumentLeg_0.insert(LegSymbol_0.getString());
    FIX::LegSymbolSfx LegSymbolSfx_0("STRING_492705715");
    noLegs_0_0.set(LegSymbolSfx_0);
    InstrumentLeg_0.insert(LegSymbolSfx_0.getString());
    FIX::LegTimeUnit LegTimeUnit_0("STRING_1841487190");
    noLegs_0_0.set(LegTimeUnit_0);
    InstrumentLeg_0.insert(LegTimeUnit_0.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_0("STRING_604176973");
    noLegs_0_0.set(LegUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegUnitOfMeasure_0.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("3068318");
    noLegs_0_0.set(LegUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegUnitOfMeasureQty_0.getString());
    all_values.push_back(InstrumentLeg_0);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      FIX::LegSecurityAltID LegSecurityAltID_0("STRING_1812306152");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltID_0.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_0("STRING_337709669");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltIDSource_0.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_0);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      FIX::LegSecurityAltID LegSecurityAltID_1("STRING_1475831363");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltID_1.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_1("STRING_466225801");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltIDSource_1.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      FIX::LegSecurityAltID LegSecurityAltID_2("STRING_1250841188");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltID_2.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_2("STRING_126020552");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltIDSource_2.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_2;
  FIX::AttachmentPoint AttachmentPoint_2;
  AttachmentPoint_2.setString("59.270000");
  msg.set(AttachmentPoint_2);
  Instrument_2.insert(AttachmentPoint_2.getString());
  FIX::CFICode CFICode_2("STRING_1234143796");
  msg.set(CFICode_2);
  Instrument_2.insert(CFICode_2.getString());
  FIX::CPProgram CPProgram_2(1);
  msg.set(CPProgram_2);
  Instrument_2.insert(CPProgram_2.getString());
  FIX::CPRegType CPRegType_2("STRING_1331883105");
  msg.set(CPRegType_2);
  Instrument_2.insert(CPRegType_2.getString());
  FIX::CapPrice CapPrice_2;
  CapPrice_2.setString("16560483");
  msg.set(CapPrice_2);
  Instrument_2.insert(CapPrice_2.getString());
  FIX::ContractMultiplier ContractMultiplier_2;
  ContractMultiplier_2.setString("19804195");
  msg.set(ContractMultiplier_2);
  Instrument_2.insert(ContractMultiplier_2.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_2(0);
  msg.set(ContractMultiplierUnit_2);
  Instrument_2.insert(ContractMultiplierUnit_2.getString());
  FIX::ContractSettlMonth ContractSettlMonth_2("MONTHYEAR_538584027");
  msg.set(ContractSettlMonth_2);
  Instrument_2.insert(ContractSettlMonth_2.getString());
  FIX::CountryOfIssue CountryOfIssue_2("COUNTRY_545444128");
  msg.set(CountryOfIssue_2);
  Instrument_2.insert(CountryOfIssue_2.getString());
  FIX::CouponPaymentDate CouponPaymentDate_2("LOCALMKTDATE_2011282410");
  msg.set(CouponPaymentDate_2);
  Instrument_2.insert(CouponPaymentDate_2.getString());
  FIX::CouponRate CouponRate_2;
  CouponRate_2.setString("89.240000");
  msg.set(CouponRate_2);
  Instrument_2.insert(CouponRate_2.getString());
  FIX::CreditRating CreditRating_2("STRING_316801495");
  msg.set(CreditRating_2);
  Instrument_2.insert(CreditRating_2.getString());
  FIX::DatedDate DatedDate_2("LOCALMKTDATE_470474609");
  msg.set(DatedDate_2);
  Instrument_2.insert(DatedDate_2.getString());
  FIX::DetachmentPoint DetachmentPoint_2;
  DetachmentPoint_2.setString("12.970000");
  msg.set(DetachmentPoint_2);
  Instrument_2.insert(DetachmentPoint_2.getString());
  FIX::EncodedIssuer EncodedIssuer_2("DATA_288705653");
  msg.set(EncodedIssuer_2);
  Instrument_2.insert(EncodedIssuer_2.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_2(2031058595);
  msg.set(EncodedIssuerLen_2);
  Instrument_2.insert(EncodedIssuerLen_2.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_2("DATA_477008252");
  msg.set(EncodedSecurityDesc_2);
  Instrument_2.insert(EncodedSecurityDesc_2.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_2(390000622);
  msg.set(EncodedSecurityDescLen_2);
  Instrument_2.insert(EncodedSecurityDescLen_2.getString());
  FIX::ExerciseStyle ExerciseStyle_2(1);
  msg.set(ExerciseStyle_2);
  Instrument_2.insert(ExerciseStyle_2.getString());
  FIX::Factor Factor_2;
  Factor_2.setString("6118580");
  msg.set(Factor_2);
  Instrument_2.insert(Factor_2.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_2(false);
  msg.set(FlexProductEligibilityIndicator_2);
  Instrument_2.insert(FlexProductEligibilityIndicator_2.getString());
  FIX::FlexibleIndicator FlexibleIndicator_2(false);
  msg.set(FlexibleIndicator_2);
  Instrument_2.insert(FlexibleIndicator_2.getString());
  FIX::FloorPrice FloorPrice_2;
  FloorPrice_2.setString("12160350");
  msg.set(FloorPrice_2);
  Instrument_2.insert(FloorPrice_2.getString());
  FIX::FlowScheduleType FlowScheduleType_2(4);
  msg.set(FlowScheduleType_2);
  Instrument_2.insert(FlowScheduleType_2.getString());
  FIX::InstrRegistry InstrRegistry_2("STRING_1852523870");
  msg.set(InstrRegistry_2);
  Instrument_2.insert(InstrRegistry_2.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_2('8');
  msg.set(InstrmtAssignmentMethod_2);
  Instrument_2.insert(InstrmtAssignmentMethod_2.getString());
  FIX::InterestAccrualDate InterestAccrualDate_2("LOCALMKTDATE_1527247848");
  msg.set(InterestAccrualDate_2);
  Instrument_2.insert(InterestAccrualDate_2.getString());
  FIX::IssueDate IssueDate_2("LOCALMKTDATE_1180871586");
  msg.set(IssueDate_2);
  Instrument_2.insert(IssueDate_2.getString());
  FIX::Issuer Issuer_2("STRING_1347083345");
  msg.set(Issuer_2);
  Instrument_2.insert(Issuer_2.getString());
  FIX::ListMethod ListMethod_2(1);
  msg.set(ListMethod_2);
  Instrument_2.insert(ListMethod_2.getString());
  FIX::LocaleOfIssue LocaleOfIssue_2("STRING_1306892138");
  msg.set(LocaleOfIssue_2);
  Instrument_2.insert(LocaleOfIssue_2.getString());
  FIX::MaturityDate MaturityDate_2("LOCALMKTDATE_1384489272");
  msg.set(MaturityDate_2);
  Instrument_2.insert(MaturityDate_2.getString());
  FIX::MaturityMonthYear MaturityMonthYear_2("MONTHYEAR_1864749185");
  msg.set(MaturityMonthYear_2);
  Instrument_2.insert(MaturityMonthYear_2.getString());
  FIX::MaturityTime MaturityTime_2("TZTIMEONLY_1937258207");
  msg.set(MaturityTime_2);
  Instrument_2.insert(MaturityTime_2.getString());
  FIX::MinPriceIncrement MinPriceIncrement_2;
  MinPriceIncrement_2.setString("5688887");
  msg.set(MinPriceIncrement_2);
  Instrument_2.insert(MinPriceIncrement_2.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
  MinPriceIncrementAmount_2.setString("13733139");
  msg.set(MinPriceIncrementAmount_2);
  Instrument_2.insert(MinPriceIncrementAmount_2.getString());
  FIX::NTPositionLimit NTPositionLimit_2(1770194080);
  msg.set(NTPositionLimit_2);
  Instrument_2.insert(NTPositionLimit_2.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
  NotionalPercentageOutstanding_2.setString("49.190000");
  msg.set(NotionalPercentageOutstanding_2);
  Instrument_2.insert(NotionalPercentageOutstanding_2.getString());
  FIX::OptAttribute OptAttribute_2('1');
  msg.set(OptAttribute_2);
  Instrument_2.insert(OptAttribute_2.getString());
  FIX::OptPayoutAmount OptPayoutAmount_2;
  OptPayoutAmount_2.setString("1681545");
  msg.set(OptPayoutAmount_2);
  Instrument_2.insert(OptPayoutAmount_2.getString());
  FIX::OptPayoutType OptPayoutType_2(1);
  msg.set(OptPayoutType_2);
  Instrument_2.insert(OptPayoutType_2.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
  OriginalNotionalPercentageOutstanding_2.setString("32.360000");
  msg.set(OriginalNotionalPercentageOutstanding_2);
  Instrument_2.insert(OriginalNotionalPercentageOutstanding_2.getString());
  FIX::Pool Pool_2("STRING_484956056");
  msg.set(Pool_2);
  Instrument_2.insert(Pool_2.getString());
  FIX::PositionLimit PositionLimit_2(1757858291);
  msg.set(PositionLimit_2);
  Instrument_2.insert(PositionLimit_2.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_2("STRING_INX");
  msg.set(PriceQuoteMethod_2);
  Instrument_2.insert(PriceQuoteMethod_2.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_2("STRING_773661709");
  msg.set(PriceUnitOfMeasure_2);
  Instrument_2.insert(PriceUnitOfMeasure_2.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
  PriceUnitOfMeasureQty_2.setString("16414332");
  msg.set(PriceUnitOfMeasureQty_2);
  Instrument_2.insert(PriceUnitOfMeasureQty_2.getString());
  FIX::Product Product_2(6);
  msg.set(Product_2);
  Instrument_2.insert(Product_2.getString());
  FIX::ProductComplex ProductComplex_2("STRING_1163662331");
  msg.set(ProductComplex_2);
  Instrument_2.insert(ProductComplex_2.getString());
  FIX::PutOrCall PutOrCall_2(0);
  msg.set(PutOrCall_2);
  Instrument_2.insert(PutOrCall_2.getString());
  FIX::RedemptionDate RedemptionDate_2("LOCALMKTDATE_1580840851");
  msg.set(RedemptionDate_2);
  Instrument_2.insert(RedemptionDate_2.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_2("STRING_2046368668");
  msg.set(RepoCollateralSecurityType_2);
  Instrument_2.insert(RepoCollateralSecurityType_2.getString());
  FIX::RepurchaseRate RepurchaseRate_2;
  RepurchaseRate_2.setString("36.440000");
  msg.set(RepurchaseRate_2);
  Instrument_2.insert(RepurchaseRate_2.getString());
  FIX::RepurchaseTerm RepurchaseTerm_2(649392242);
  msg.set(RepurchaseTerm_2);
  Instrument_2.insert(RepurchaseTerm_2.getString());
  FIX::RestructuringType RestructuringType_2("STRING_XR");
  msg.set(RestructuringType_2);
  Instrument_2.insert(RestructuringType_2.getString());
  FIX::SecurityDesc SecurityDesc_2("STRING_447193866");
  msg.set(SecurityDesc_2);
  Instrument_2.insert(SecurityDesc_2.getString());
  FIX::SecurityExchange SecurityExchange_2("EXCHANGE_1530249786");
  msg.set(SecurityExchange_2);
  Instrument_2.insert(SecurityExchange_2.getString());
  FIX::SecurityGroup SecurityGroup_2("STRING_468187400");
  msg.set(SecurityGroup_2);
  Instrument_2.insert(SecurityGroup_2.getString());
  FIX::SecurityID SecurityID_2("STRING_1628065452");
  msg.set(SecurityID_2);
  Instrument_2.insert(SecurityID_2.getString());
  FIX::SecurityIDSource SecurityIDSource_2("STRING_C");
  msg.set(SecurityIDSource_2);
  Instrument_2.insert(SecurityIDSource_2.getString());
  FIX::SecurityStatus SecurityStatus_2("STRING_2");
  msg.set(SecurityStatus_2);
  Instrument_2.insert(SecurityStatus_2.getString());
  FIX::SecuritySubType SecuritySubType_2("STRING_787473942");
  msg.set(SecuritySubType_2);
  Instrument_2.insert(SecuritySubType_2.getString());
  FIX::SecurityType SecurityType_2("STRING_PEF");
  msg.set(SecurityType_2);
  Instrument_2.insert(SecurityType_2.getString());
  FIX::Seniority Seniority_2("STRING_SD");
  msg.set(Seniority_2);
  Instrument_2.insert(Seniority_2.getString());
  FIX::SettlMethod SettlMethod_2('C');
  msg.set(SettlMethod_2);
  Instrument_2.insert(SettlMethod_2.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_2("STRING_535743836");
  msg.set(SettleOnOpenFlag_2);
  Instrument_2.insert(SettleOnOpenFlag_2.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_2("STRING_41888611");
  msg.set(StateOrProvinceOfIssue_2);
  Instrument_2.insert(StateOrProvinceOfIssue_2.getString());
  FIX::StrikeCurrency StrikeCurrency_2("JPY");
  msg.set(StrikeCurrency_2);
  Instrument_2.insert(StrikeCurrency_2.getString());
  FIX::StrikeMultiplier StrikeMultiplier_2;
  StrikeMultiplier_2.setString("19537865");
  msg.set(StrikeMultiplier_2);
  Instrument_2.insert(StrikeMultiplier_2.getString());
  FIX::StrikePrice StrikePrice_2;
  StrikePrice_2.setString("3681134");
  msg.set(StrikePrice_2);
  Instrument_2.insert(StrikePrice_2.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_2(1);
  msg.set(StrikePriceBoundaryMethod_2);
  Instrument_2.insert(StrikePriceBoundaryMethod_2.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
  StrikePriceBoundaryPrecision_2.setString("61.580000");
  msg.set(StrikePriceBoundaryPrecision_2);
  Instrument_2.insert(StrikePriceBoundaryPrecision_2.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_2(4);
  msg.set(StrikePriceDeterminationMethod_2);
  Instrument_2.insert(StrikePriceDeterminationMethod_2.getString());
  FIX::StrikeValue StrikeValue_2;
  StrikeValue_2.setString("7096034");
  msg.set(StrikeValue_2);
  Instrument_2.insert(StrikeValue_2.getString());
  FIX::Symbol Symbol_2("STRING_595230692");
  msg.set(Symbol_2);
  Instrument_2.insert(Symbol_2.getString());
  FIX::SymbolSfx SymbolSfx_2("STRING_WI");
  msg.set(SymbolSfx_2);
  Instrument_2.insert(SymbolSfx_2.getString());
  FIX::TimeUnit TimeUnit_2("STRING_D");
  msg.set(TimeUnit_2);
  Instrument_2.insert(TimeUnit_2.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_2(3);
  msg.set(UnderlyingPriceDeterminationMethod_2);
  Instrument_2.insert(UnderlyingPriceDeterminationMethod_2.getString());
  FIX::UnitOfMeasure UnitOfMeasure_2("STRING_MMbbl");
  msg.set(UnitOfMeasure_2);
  Instrument_2.insert(UnitOfMeasure_2.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
  UnitOfMeasureQty_2.setString("4746028");
  msg.set(UnitOfMeasureQty_2);
  Instrument_2.insert(UnitOfMeasureQty_2.getString());
  FIX::ValuationMethod ValuationMethod_2("STRING_FUT");
  msg.set(ValuationMethod_2);
  Instrument_2.insert(ValuationMethod_2.getString());
  all_values.push_back(Instrument_2);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    FIX::ComplexEventCondition ComplexEventCondition_6(2);
    noComplexEvents_0_0.set(ComplexEventCondition_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventCondition_6.getString());
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("16469629");
    noComplexEvents_0_0.set(ComplexEventPrice_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPrice_6.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_6(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryMethod_6.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("3.810000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryPrecision_6.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_6(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceTimeType_6.getString());
    FIX::ComplexEventType ComplexEventType_6(8);
    noComplexEvents_0_0.set(ComplexEventType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventType_6.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("11445321");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexOptPayoutAmount_6.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_6);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_11;
      FIX::ComplexEventEndDate ComplexEventEndDate_11(FIX::UTCTIMESTAMP(8, 12, 12, 6, 1, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventEndDate_11.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_11(FIX::UTCTIMESTAMP(4, 5, 12, 2, 5, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventStartDate_11.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_11);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
        FIX::ComplexEventEndTime ComplexEventEndTime_21(FIX::UTCTIMEONLY(1, 16, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventEndTime_21.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_21(FIX::UTCTIMEONLY(11, 59, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventStartTime_21.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
        FIX::ComplexEventEndTime ComplexEventEndTime_22(FIX::UTCTIMEONLY(19, 3, 28));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventEndTime_22.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_22(FIX::UTCTIMEONLY(23, 54, 54));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventStartTime_22.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      FIX::ComplexEventEndDate ComplexEventEndDate_12(FIX::UTCTIMESTAMP(6, 58, 1, 21, 12, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventEndDate_12.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_12(FIX::UTCTIMESTAMP(19, 41, 38, 10, 2, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventStartDate_12.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
        FIX::ComplexEventEndTime ComplexEventEndTime_23(FIX::UTCTIMEONLY(3, 58, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventEndTime_23.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_23(FIX::UTCTIMEONLY(10, 55, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventStartTime_23.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
        FIX::ComplexEventEndTime ComplexEventEndTime_24(FIX::UTCTIMEONLY(14, 30, 32));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventEndTime_24.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_24(FIX::UTCTIMEONLY(6, 18, 34));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventStartTime_24.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
        FIX::ComplexEventEndTime ComplexEventEndTime_25(FIX::UTCTIMEONLY(17, 33, 20));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventEndTime_25.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_25(FIX::UTCTIMEONLY(8, 56, 40));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventStartTime_25.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      FIX::ComplexEventEndDate ComplexEventEndDate_13(FIX::UTCTIMESTAMP(5, 10, 37, 11, 2, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventEndDate_13.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_13(FIX::UTCTIMESTAMP(4, 18, 52, 5, 5, 2017));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventStartDate_13.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        FIX::ComplexEventEndTime ComplexEventEndTime_26(FIX::UTCTIMEONLY(13, 3, 45));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventEndTime_26.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_26(FIX::UTCTIMEONLY(1, 55, 52));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventStartTime_26.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    FIX::ComplexEventCondition ComplexEventCondition_7(1);
    noComplexEvents_0_1.set(ComplexEventCondition_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventCondition_7.getString());
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("19870233");
    noComplexEvents_0_1.set(ComplexEventPrice_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPrice_7.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_7(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryMethod_7.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("56.960000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryPrecision_7.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_7(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceTimeType_7.getString());
    FIX::ComplexEventType ComplexEventType_7(4);
    noComplexEvents_0_1.set(ComplexEventType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventType_7.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("10124393");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexOptPayoutAmount_7.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_7);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      FIX::ComplexEventEndDate ComplexEventEndDate_14(FIX::UTCTIMESTAMP(18, 41, 6, 25, 7, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventEndDate_14.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_14(FIX::UTCTIMESTAMP(14, 35, 53, 0, 4, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventStartDate_14.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
        FIX::ComplexEventEndTime ComplexEventEndTime_27(FIX::UTCTIMEONLY(22, 8, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventEndTime_27.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_27(FIX::UTCTIMEONLY(2, 36, 27));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventStartTime_27.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
        FIX::ComplexEventEndTime ComplexEventEndTime_28(FIX::UTCTIMEONLY(5, 44, 51));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventEndTime_28.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_28(FIX::UTCTIMEONLY(21, 35, 6));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventStartTime_28.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      FIX::ComplexEventEndDate ComplexEventEndDate_15(FIX::UTCTIMESTAMP(17, 39, 0, 18, 10, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventEndDate_15.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_15(FIX::UTCTIMESTAMP(11, 53, 25, 27, 1, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventStartDate_15.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
        FIX::ComplexEventEndTime ComplexEventEndTime_29(FIX::UTCTIMEONLY(20, 41, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventEndTime_29.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_29(FIX::UTCTIMEONLY(19, 42, 55));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventStartTime_29.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
        FIX::ComplexEventEndTime ComplexEventEndTime_30(FIX::UTCTIMEONLY(3, 39, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventEndTime_30.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_30(FIX::UTCTIMEONLY(13, 28, 28));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventStartTime_30.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      FIX::ComplexEventEndDate ComplexEventEndDate_16(FIX::UTCTIMESTAMP(9, 7, 7, 8, 9, 2012));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventEndDate_16.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_16(FIX::UTCTIMESTAMP(0, 9, 37, 19, 11, 2017));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventStartDate_16.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
        FIX::ComplexEventEndTime ComplexEventEndTime_31(FIX::UTCTIMEONLY(11, 17, 24));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventEndTime_31.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_31(FIX::UTCTIMEONLY(16, 6, 58));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventStartTime_31.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    FIX::ComplexEventCondition ComplexEventCondition_8(2);
    noComplexEvents_0_2.set(ComplexEventCondition_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventCondition_8.getString());
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("1000075");
    noComplexEvents_0_2.set(ComplexEventPrice_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPrice_8.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_8(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryMethod_8.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("27.580000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryPrecision_8.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_8(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceTimeType_8.getString());
    FIX::ComplexEventType ComplexEventType_8(4);
    noComplexEvents_0_2.set(ComplexEventType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventType_8.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("7583435");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexOptPayoutAmount_8.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_8);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      FIX::ComplexEventEndDate ComplexEventEndDate_17(FIX::UTCTIMESTAMP(23, 51, 48, 3, 5, 2005));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventEndDate_17.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_17(FIX::UTCTIMESTAMP(4, 14, 17, 11, 5, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventStartDate_17.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        FIX::ComplexEventEndTime ComplexEventEndTime_32(FIX::UTCTIMEONLY(8, 48, 35));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventEndTime_32.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_32(FIX::UTCTIMEONLY(16, 33, 21));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventStartTime_32.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      FIX::ComplexEventEndDate ComplexEventEndDate_18(FIX::UTCTIMESTAMP(10, 50, 40, 9, 2, 2008));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventEndDate_18.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_18(FIX::UTCTIMESTAMP(18, 13, 33, 3, 6, 2007));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_18);
      ComplexEventDates_NoComplexEventDates_18.insert(ComplexEventStartDate_18.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        FIX::ComplexEventEndTime ComplexEventEndTime_33(FIX::UTCTIMEONLY(21, 58, 37));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventEndTime_33.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_33(FIX::UTCTIMEONLY(19, 14, 4));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventStartTime_33.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        FIX::ComplexEventEndTime ComplexEventEndTime_34(FIX::UTCTIMEONLY(22, 44, 21));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventEndTime_34.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_34(FIX::UTCTIMEONLY(1, 54, 10));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_34);
        ComplexEventTimes_NoComplexEventTimes_34.insert(ComplexEventStartTime_34.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_6;
    FIX::EventDate EventDate_6("LOCALMKTDATE_1031499500");
    noEvents_0_0.set(EventDate_6);
    EvntGrp_NoEvents_6.insert(EventDate_6.getString());
    FIX::EventPx EventPx_6;
    EventPx_6.setString("4052671");
    noEvents_0_0.set(EventPx_6);
    EvntGrp_NoEvents_6.insert(EventPx_6.getString());
    FIX::EventText EventText_6("STRING_1086677323");
    noEvents_0_0.set(EventText_6);
    EvntGrp_NoEvents_6.insert(EventText_6.getString());
    FIX::EventTime EventTime_6(FIX::UTCTIMESTAMP(17, 1, 59, 24, 7, 2012));
    noEvents_0_0.set(EventTime_6);
    EvntGrp_NoEvents_6.insert(EventTime_6.getString());
    FIX::EventType EventType_6(4);
    noEvents_0_0.set(EventType_6);
    EvntGrp_NoEvents_6.insert(EventType_6.getString());
    all_values.push_back(EvntGrp_NoEvents_6);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_4;
    FIX::InstrumentPartyID InstrumentPartyID_4("STRING_372613949");
    noInstrumentParties_0_0.set(InstrumentPartyID_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyID_4.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_4('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyIDSource_4.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_4(1594232940);
    noInstrumentParties_0_0.set(InstrumentPartyRole_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyRole_4.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_4);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
      FIX::InstrumentPartySubID InstrumentPartySubID_8("STRING_333914917");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubID_8.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_8(1439232269);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubIDType_8.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
      FIX::InstrumentPartySubID InstrumentPartySubID_9("STRING_382062606");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubID_9.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_9(439700600);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubIDType_9.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
      FIX::InstrumentPartySubID InstrumentPartySubID_10("STRING_1444991203");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubID_10.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_10(264313862);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubIDType_10.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_4;
    FIX::SecurityAltID SecurityAltID_4("STRING_296248809");
    noSecurityAltID_0_0.set(SecurityAltID_4);
    SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltID_4.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_4("STRING_1123454687");
    noSecurityAltID_0_0.set(SecurityAltIDSource_4);
    SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltIDSource_4.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_5;
    FIX::SecurityAltID SecurityAltID_5("STRING_1138571007");
    noSecurityAltID_0_1.set(SecurityAltID_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltID_5.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_5("STRING_2021374026");
    noSecurityAltID_0_1.set(SecurityAltIDSource_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltIDSource_5.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_6;
    FIX::SecurityAltID SecurityAltID_6("STRING_1028412568");
    noSecurityAltID_0_2.set(SecurityAltID_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltID_6.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_6("STRING_1133307553");
    noSecurityAltID_0_2.set(SecurityAltIDSource_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltIDSource_6.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_4;
  FIX::SecurityXML SecurityXML_5("XMLDATA_897259988");
  msg.set(SecurityXML_5);
  FIX::SecurityXMLLen SecurityXMLLen_2(1300103791);
  msg.set(SecurityXMLLen_2);
  FIX::SecurityXMLSchema SecurityXMLSchema_2("STRING_17323405");
  msg.set(SecurityXMLSchema_2);
  SecurityXML_4.insert(SecurityXMLSchema_2.getString());
  all_values.push_back(SecurityXML_4);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_0("DATA_239297466");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuer_0.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_0(1799285383);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuerLen_0.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_0("DATA_602011750");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDesc_0.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_0(751820767);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDescLen_0.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("13788692");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_0);
    UnderlyingInstrument_0.insert(UnderlyingAdjustedQuantity_0.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("53.060000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_0);
    UnderlyingInstrument_0.insert(UnderlyingAllocationPercent_0.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("92.130000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingAttachmentPoint_0.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_0("STRING_2132542258");
    noUnderlyings_0_0.set(UnderlyingCFICode_0);
    UnderlyingInstrument_0.insert(UnderlyingCFICode_0.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_0("STRING_2003873129");
    noUnderlyings_0_0.set(UnderlyingCPProgram_0);
    UnderlyingInstrument_0.insert(UnderlyingCPProgram_0.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_0("STRING_1035013613");
    noUnderlyings_0_0.set(UnderlyingCPRegType_0);
    UnderlyingInstrument_0.insert(UnderlyingCPRegType_0.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("3576725");
    noUnderlyings_0_0.set(UnderlyingCapValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCapValue_0.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("6498605");
    noUnderlyings_0_0.set(UnderlyingCashAmount_0);
    UnderlyingInstrument_0.insert(UnderlyingCashAmount_0.getString());
    FIX::UnderlyingCashType UnderlyingCashType_0("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_0);
    UnderlyingInstrument_0.insert(UnderlyingCashType_0.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("20631645");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplier_0.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_0(983775466);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplierUnit_0.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_0("COUNTRY_1920995174");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingCountryOfIssue_0.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_0("LOCALMKTDATE_297743527");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponPaymentDate_0.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("60.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponRate_0.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_0("STRING_1218502730");
    noUnderlyings_0_0.set(UnderlyingCreditRating_0);
    UnderlyingInstrument_0.insert(UnderlyingCreditRating_0.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_0("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrency_0.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("15147515");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrentValue_0.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("20.770000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingDetachmentPoint_0.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("3476696");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingDirtyPrice_0.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("13886419");
    noUnderlyings_0_0.set(UnderlyingEndPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingEndPrice_0.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("5664409");
    noUnderlyings_0_0.set(UnderlyingEndValue_0);
    UnderlyingInstrument_0.insert(UnderlyingEndValue_0.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_0(1480977226);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_0);
    UnderlyingInstrument_0.insert(UnderlyingExerciseStyle_0.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("1384182");
    noUnderlyings_0_0.set(UnderlyingFXRate_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRate_0.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_0('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRateCalc_0.getString());
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("14983006");
    noUnderlyings_0_0.set(UnderlyingFactor_0);
    UnderlyingInstrument_0.insert(UnderlyingFactor_0.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_0(1440945359);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_0);
    UnderlyingInstrument_0.insert(UnderlyingFlowScheduleType_0.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_0("STRING_2105842254");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_0);
    UnderlyingInstrument_0.insert(UnderlyingInstrRegistry_0.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_0("LOCALMKTDATE_1150102366");
    noUnderlyings_0_0.set(UnderlyingIssueDate_0);
    UnderlyingInstrument_0.insert(UnderlyingIssueDate_0.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_0("STRING_2042957110");
    noUnderlyings_0_0.set(UnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(UnderlyingIssuer_0.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_0("STRING_710179373");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingLocaleOfIssue_0.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_0("LOCALMKTDATE_381487932");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityDate_0.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_0("MONTHYEAR_920698768");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityMonthYear_0.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_0("TZTIMEONLY_1698158586");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityTime_0.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("65.420000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_0('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_0);
    UnderlyingInstrument_0.insert(UnderlyingOptAttribute_0.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("85.510000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingOriginalNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_0("STRING_724219101");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasure_0.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("14269487");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasureQty_0.getString());
    FIX::UnderlyingProduct UnderlyingProduct_0(1067451456);
    noUnderlyings_0_0.set(UnderlyingProduct_0);
    UnderlyingInstrument_0.insert(UnderlyingProduct_0.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_0(639900022);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_0);
    UnderlyingInstrument_0.insert(UnderlyingPutOrCall_0.getString());
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("2632406");
    noUnderlyings_0_0.set(UnderlyingPx_0);
    UnderlyingInstrument_0.insert(UnderlyingPx_0.getString());
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("8409629");
    noUnderlyings_0_0.set(UnderlyingQty_0);
    UnderlyingInstrument_0.insert(UnderlyingQty_0.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_0("LOCALMKTDATE_937643550");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_0);
    UnderlyingInstrument_0.insert(UnderlyingRedemptionDate_0.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_0("STRING_1686716683");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingRepoCollateralSecurityType_0.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("57.130000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseRate_0.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_0(1499700940);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseTerm_0.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_0("STRING_895815348");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_0);
    UnderlyingInstrument_0.insert(UnderlyingRestructuringType_0.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_0("STRING_1426733604");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityDesc_0.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_0("EXCHANGE_1037729369");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityExchange_0.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_0("STRING_1243485020");
    noUnderlyings_0_0.set(UnderlyingSecurityID_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityID_0.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_0("STRING_667891874");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityIDSource_0.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_0("STRING_1604170366");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecuritySubType_0.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_0("STRING_576978598");
    noUnderlyings_0_0.set(UnderlyingSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityType_0.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_0("STRING_806310133");
    noUnderlyings_0_0.set(UnderlyingSeniority_0);
    UnderlyingInstrument_0.insert(UnderlyingSeniority_0.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_0("STRING_1323231506");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlMethod_0.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_0(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlementType_0.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("997718");
    noUnderlyings_0_0.set(UnderlyingStartValue_0);
    UnderlyingInstrument_0.insert(UnderlyingStartValue_0.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_0("STRING_1281590112");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingStateOrProvinceOfIssue_0.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_0("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikeCurrency_0.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("19917694");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikePrice_0.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_0("STRING_1459385881");
    noUnderlyings_0_0.set(UnderlyingSymbol_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbol_0.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_0("STRING_915944075");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbolSfx_0.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_0("STRING_1542444423");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingTimeUnit_0.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_0("STRING_1825932423");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasure_0.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("16930323");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasureQty_0.getString());
    all_values.push_back(UnderlyingInstrument_0);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_0("STRING_402667877");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltID_0.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_0("STRING_972497475");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltIDSource_0.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_1("STRING_1048100783");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltID_1.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_1("STRING_1042567899");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltIDSource_1.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_0;
      FIX::UnderlyingStipType UnderlyingStipType_0("STRING_1889063766");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipType_0.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_0("STRING_1980211449");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipValue_0.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      FIX::UnderlyingStipType UnderlyingStipType_1("STRING_774971127");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipType_1.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_1("STRING_1801045831");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipValue_1.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_0("STRING_1670786475");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyID_0.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_0('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyIDSource_0.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_0(222674462);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyRole_0.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_0("STRING_1748187662");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubID_0.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_0(1826844828);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubIDType_0.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_1("STRING_1343766446");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyID_1.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_1('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyIDSource_1.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_1(1002592686);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyRole_1.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_1("STRING_506785992");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubID_1.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_1(136699150);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubIDType_1.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_2("STRING_201976328");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubID_2.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_2(502031298);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubIDType_2.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_2("STRING_2128468635");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyID_2.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_2('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyIDSource_2.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_2(1417975373);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyRole_2.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_3("STRING_1339810985");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubID_3.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_3(963524050);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubIDType_3.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_4("STRING_1504078738");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubID_4.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_4(1742478862);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubIDType_4.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_5("STRING_1936021526");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubID_5.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_5(404695873);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubIDType_5.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_1("DATA_637563113");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuer_1.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_1(1024275970);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuerLen_1.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_1("DATA_146275992");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDesc_1.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_1(470290915);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDescLen_1.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("17992470");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_1);
    UnderlyingInstrument_1.insert(UnderlyingAdjustedQuantity_1.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("18.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_1);
    UnderlyingInstrument_1.insert(UnderlyingAllocationPercent_1.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("96.560000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingAttachmentPoint_1.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_1("STRING_1322549924");
    noUnderlyings_0_1.set(UnderlyingCFICode_1);
    UnderlyingInstrument_1.insert(UnderlyingCFICode_1.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_1("STRING_880133963");
    noUnderlyings_0_1.set(UnderlyingCPProgram_1);
    UnderlyingInstrument_1.insert(UnderlyingCPProgram_1.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_1("STRING_2025394119");
    noUnderlyings_0_1.set(UnderlyingCPRegType_1);
    UnderlyingInstrument_1.insert(UnderlyingCPRegType_1.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("20893377");
    noUnderlyings_0_1.set(UnderlyingCapValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCapValue_1.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("4808379");
    noUnderlyings_0_1.set(UnderlyingCashAmount_1);
    UnderlyingInstrument_1.insert(UnderlyingCashAmount_1.getString());
    FIX::UnderlyingCashType UnderlyingCashType_1("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_1);
    UnderlyingInstrument_1.insert(UnderlyingCashType_1.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("12856205");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplier_1.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_1(887852125);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplierUnit_1.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_1("COUNTRY_559864338");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingCountryOfIssue_1.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_1("LOCALMKTDATE_409698949");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponPaymentDate_1.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("81.170000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponRate_1.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_1("STRING_696563488");
    noUnderlyings_0_1.set(UnderlyingCreditRating_1);
    UnderlyingInstrument_1.insert(UnderlyingCreditRating_1.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_1("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrency_1.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("6775484");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrentValue_1.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("38.390000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingDetachmentPoint_1.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("11671611");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingDirtyPrice_1.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("534942");
    noUnderlyings_0_1.set(UnderlyingEndPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingEndPrice_1.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("14653648");
    noUnderlyings_0_1.set(UnderlyingEndValue_1);
    UnderlyingInstrument_1.insert(UnderlyingEndValue_1.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_1(2130685192);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_1);
    UnderlyingInstrument_1.insert(UnderlyingExerciseStyle_1.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("15575729");
    noUnderlyings_0_1.set(UnderlyingFXRate_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRate_1.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_1('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRateCalc_1.getString());
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("19192230");
    noUnderlyings_0_1.set(UnderlyingFactor_1);
    UnderlyingInstrument_1.insert(UnderlyingFactor_1.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_1(1962268850);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_1);
    UnderlyingInstrument_1.insert(UnderlyingFlowScheduleType_1.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_1("STRING_1697923152");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_1);
    UnderlyingInstrument_1.insert(UnderlyingInstrRegistry_1.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_1("LOCALMKTDATE_796015392");
    noUnderlyings_0_1.set(UnderlyingIssueDate_1);
    UnderlyingInstrument_1.insert(UnderlyingIssueDate_1.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_1("STRING_2108544842");
    noUnderlyings_0_1.set(UnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(UnderlyingIssuer_1.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_1("STRING_20730419");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingLocaleOfIssue_1.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_1("LOCALMKTDATE_447778841");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityDate_1.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_1("MONTHYEAR_1908383018");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityMonthYear_1.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_1("TZTIMEONLY_1823450075");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityTime_1.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("87.650000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_1('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_1);
    UnderlyingInstrument_1.insert(UnderlyingOptAttribute_1.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("5.460000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingOriginalNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_1("STRING_1712182888");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasure_1.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("11218713");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasureQty_1.getString());
    FIX::UnderlyingProduct UnderlyingProduct_1(1258632198);
    noUnderlyings_0_1.set(UnderlyingProduct_1);
    UnderlyingInstrument_1.insert(UnderlyingProduct_1.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_1(850319810);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_1);
    UnderlyingInstrument_1.insert(UnderlyingPutOrCall_1.getString());
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("20097234");
    noUnderlyings_0_1.set(UnderlyingPx_1);
    UnderlyingInstrument_1.insert(UnderlyingPx_1.getString());
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("18184965");
    noUnderlyings_0_1.set(UnderlyingQty_1);
    UnderlyingInstrument_1.insert(UnderlyingQty_1.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_1("LOCALMKTDATE_1260018759");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_1);
    UnderlyingInstrument_1.insert(UnderlyingRedemptionDate_1.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_1("STRING_1256877906");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingRepoCollateralSecurityType_1.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("63.760000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseRate_1.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_1(1871694037);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseTerm_1.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_1("STRING_1006063674");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_1);
    UnderlyingInstrument_1.insert(UnderlyingRestructuringType_1.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_1("STRING_1045124852");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityDesc_1.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_1("EXCHANGE_1997247877");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityExchange_1.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_1("STRING_25741168");
    noUnderlyings_0_1.set(UnderlyingSecurityID_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityID_1.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_1("STRING_1098619091");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityIDSource_1.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_1("STRING_1315129053");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecuritySubType_1.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_1("STRING_8942712");
    noUnderlyings_0_1.set(UnderlyingSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityType_1.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_1("STRING_508708420");
    noUnderlyings_0_1.set(UnderlyingSeniority_1);
    UnderlyingInstrument_1.insert(UnderlyingSeniority_1.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_1("STRING_228005444");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlMethod_1.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_1(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlementType_1.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("3234936");
    noUnderlyings_0_1.set(UnderlyingStartValue_1);
    UnderlyingInstrument_1.insert(UnderlyingStartValue_1.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_1("STRING_1925928596");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingStateOrProvinceOfIssue_1.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_1("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikeCurrency_1.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("19466590");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikePrice_1.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_1("STRING_1024476367");
    noUnderlyings_0_1.set(UnderlyingSymbol_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbol_1.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_1("STRING_45454187");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbolSfx_1.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_1("STRING_1622625442");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingTimeUnit_1.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_1("STRING_647321484");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasure_1.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("6864875");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasureQty_1.getString());
    all_values.push_back(UnderlyingInstrument_1);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_2("STRING_212020724");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltID_2.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_2("STRING_1808358832");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltIDSource_2.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      FIX::UnderlyingStipType UnderlyingStipType_2("STRING_1062340534");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipType_2.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_2("STRING_1670598621");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipValue_2.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      FIX::UnderlyingStipType UnderlyingStipType_3("STRING_2106147427");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipType_3.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_3("STRING_174875646");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipValue_3.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_3("STRING_326240155");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyID_3.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_3('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyIDSource_3.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_3(1786056554);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyRole_3.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_6("STRING_1896333912");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubID_6.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_6(1811797722);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubIDType_6.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_7("STRING_322500451");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubID_7.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_7(1063979318);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubIDType_7.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_4("STRING_1820740434");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyID_4.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_4('8');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyIDSource_4.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_4(1291984762);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyRole_4.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_8("STRING_1154702495");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubID_8.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_8(1070429710);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubIDType_8.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_9("STRING_30636446");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubID_9.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_9(1439257312);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubIDType_9.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_10("STRING_869605077");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubID_10.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_10(1055112813);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubIDType_10.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_5("STRING_1484711500");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyID_5.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_5('3');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyIDSource_5.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_5(1702434297);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyRole_5.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_11("STRING_1521249212");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubID_11.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_11(1914455022);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubIDType_11.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_12("STRING_1832074205");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubID_12.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_12(1808900103);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubIDType_12.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
