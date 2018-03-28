#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteStatusRequest_0;
  FIX::Account Account_35("STRING_1125610827");
  msg.set(Account_35);
  QuoteStatusRequest_0.insert(Account_35.getString());
  FIX::AccountType AccountType_32(1);
  msg.set(AccountType_32);
  QuoteStatusRequest_0.insert(AccountType_32.getString());
  FIX::AcctIDSource AcctIDSource_28(99);
  msg.set(AcctIDSource_28);
  QuoteStatusRequest_0.insert(AcctIDSource_28.getString());
  FIX::QuoteID QuoteID_13("STRING_149888461");
  msg.set(QuoteID_13);
  QuoteStatusRequest_0.insert(QuoteID_13.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_1("STRING_255650762");
  msg.set(QuoteStatusReqID_1);
  QuoteStatusRequest_0.insert(QuoteStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_5('1');
  msg.set(SubscriptionRequestType_5);
  QuoteStatusRequest_0.insert(SubscriptionRequestType_5.getString());
  FIX::TradingSessionID TradingSessionID_69("STRING_6");
  msg.set(TradingSessionID_69);
  QuoteStatusRequest_0.insert(TradingSessionID_69.getString());
  FIX::TradingSessionSubID TradingSessionSubID_69("STRING_6");
  msg.set(TradingSessionSubID_69);
  QuoteStatusRequest_0.insert(TradingSessionSubID_69.getString());
  all_values.push_back(QuoteStatusRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_26;
  FIX::AgreementCurrency AgreementCurrency_26("CAN");
  msg.set(AgreementCurrency_26);
  FinancingDetails_26.insert(AgreementCurrency_26.getString());
  FIX::AgreementDate AgreementDate_26("LOCALMKTDATE_1546658385");
  msg.set(AgreementDate_26);
  FinancingDetails_26.insert(AgreementDate_26.getString());
  FIX::AgreementDesc AgreementDesc_26("STRING_2088803874");
  msg.set(AgreementDesc_26);
  FinancingDetails_26.insert(AgreementDesc_26.getString());
  FIX::AgreementID AgreementID_26("STRING_2057506995");
  msg.set(AgreementID_26);
  FinancingDetails_26.insert(AgreementID_26.getString());
  FIX::DeliveryType DeliveryType_26(3);
  msg.set(DeliveryType_26);
  FinancingDetails_26.insert(DeliveryType_26.getString());
  FIX::EndDate EndDate_26("LOCALMKTDATE_74424786");
  msg.set(EndDate_26);
  FinancingDetails_26.insert(EndDate_26.getString());
  FIX::MarginRatio MarginRatio_26;
  MarginRatio_26.setString("6.490000");
  msg.set(MarginRatio_26);
  FinancingDetails_26.insert(MarginRatio_26.getString());
  FIX::StartDate StartDate_26("LOCALMKTDATE_963794408");
  msg.set(StartDate_26);
  FinancingDetails_26.insert(StartDate_26.getString());
  FIX::TerminationType TerminationType_26(2);
  msg.set(TerminationType_26);
  FinancingDetails_26.insert(TerminationType_26.getString());
  all_values.push_back(FinancingDetails_26);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_118;
    FIX::EncodedLegIssuer EncodedLegIssuer_118("DATA_877515909");
    noLegs_0_0.set(EncodedLegIssuer_118);
    InstrumentLeg_118.insert(EncodedLegIssuer_118.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_118(980493464);
    noLegs_0_0.set(EncodedLegIssuerLen_118);
    InstrumentLeg_118.insert(EncodedLegIssuerLen_118.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_118("DATA_1740861897");
    noLegs_0_0.set(EncodedLegSecurityDesc_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDesc_118.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_118(1804058912);
    noLegs_0_0.set(EncodedLegSecurityDescLen_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDescLen_118.getString());
    FIX::LegCFICode LegCFICode_118("STRING_1006614607");
    noLegs_0_0.set(LegCFICode_118);
    InstrumentLeg_118.insert(LegCFICode_118.getString());
    FIX::LegContractMultiplier LegContractMultiplier_118;
    LegContractMultiplier_118.setString("373728");
    noLegs_0_0.set(LegContractMultiplier_118);
    InstrumentLeg_118.insert(LegContractMultiplier_118.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_118(1951017309);
    noLegs_0_0.set(LegContractMultiplierUnit_118);
    InstrumentLeg_118.insert(LegContractMultiplierUnit_118.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_118("MONTHYEAR_1336486249");
    noLegs_0_0.set(LegContractSettlMonth_118);
    InstrumentLeg_118.insert(LegContractSettlMonth_118.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_118("COUNTRY_1568709715");
    noLegs_0_0.set(LegCountryOfIssue_118);
    InstrumentLeg_118.insert(LegCountryOfIssue_118.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_118("LOCALMKTDATE_985601735");
    noLegs_0_0.set(LegCouponPaymentDate_118);
    InstrumentLeg_118.insert(LegCouponPaymentDate_118.getString());
    FIX::LegCouponRate LegCouponRate_118;
    LegCouponRate_118.setString("16.530000");
    noLegs_0_0.set(LegCouponRate_118);
    InstrumentLeg_118.insert(LegCouponRate_118.getString());
    FIX::LegCreditRating LegCreditRating_118("STRING_1733639388");
    noLegs_0_0.set(LegCreditRating_118);
    InstrumentLeg_118.insert(LegCreditRating_118.getString());
    FIX::LegCurrency LegCurrency_118("CHF");
    noLegs_0_0.set(LegCurrency_118);
    InstrumentLeg_118.insert(LegCurrency_118.getString());
    FIX::LegDatedDate LegDatedDate_118("LOCALMKTDATE_1514202825");
    noLegs_0_0.set(LegDatedDate_118);
    InstrumentLeg_118.insert(LegDatedDate_118.getString());
    FIX::LegExerciseStyle LegExerciseStyle_118(113617376);
    noLegs_0_0.set(LegExerciseStyle_118);
    InstrumentLeg_118.insert(LegExerciseStyle_118.getString());
    FIX::LegFactor LegFactor_118;
    LegFactor_118.setString("6296263");
    noLegs_0_0.set(LegFactor_118);
    InstrumentLeg_118.insert(LegFactor_118.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_118(1530585565);
    noLegs_0_0.set(LegFlowScheduleType_118);
    InstrumentLeg_118.insert(LegFlowScheduleType_118.getString());
    FIX::LegInstrRegistry LegInstrRegistry_118("STRING_1419396565");
    noLegs_0_0.set(LegInstrRegistry_118);
    InstrumentLeg_118.insert(LegInstrRegistry_118.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_118("LOCALMKTDATE_2146020156");
    noLegs_0_0.set(LegInterestAccrualDate_118);
    InstrumentLeg_118.insert(LegInterestAccrualDate_118.getString());
    FIX::LegIssueDate LegIssueDate_118("LOCALMKTDATE_309053041");
    noLegs_0_0.set(LegIssueDate_118);
    InstrumentLeg_118.insert(LegIssueDate_118.getString());
    FIX::LegIssuer LegIssuer_118("STRING_909493636");
    noLegs_0_0.set(LegIssuer_118);
    InstrumentLeg_118.insert(LegIssuer_118.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_118("STRING_1545194893");
    noLegs_0_0.set(LegLocaleOfIssue_118);
    InstrumentLeg_118.insert(LegLocaleOfIssue_118.getString());
    FIX::LegMaturityDate LegMaturityDate_118("LOCALMKTDATE_250373268");
    noLegs_0_0.set(LegMaturityDate_118);
    InstrumentLeg_118.insert(LegMaturityDate_118.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_118("MONTHYEAR_819516984");
    noLegs_0_0.set(LegMaturityMonthYear_118);
    InstrumentLeg_118.insert(LegMaturityMonthYear_118.getString());
    FIX::LegMaturityTime LegMaturityTime_118("TZTIMEONLY_999592045");
    noLegs_0_0.set(LegMaturityTime_118);
    InstrumentLeg_118.insert(LegMaturityTime_118.getString());
    FIX::LegOptAttribute LegOptAttribute_118('3');
    noLegs_0_0.set(LegOptAttribute_118);
    InstrumentLeg_118.insert(LegOptAttribute_118.getString());
    FIX::LegOptionRatio LegOptionRatio_118;
    LegOptionRatio_118.setString("20651276");
    noLegs_0_0.set(LegOptionRatio_118);
    InstrumentLeg_118.insert(LegOptionRatio_118.getString());
    FIX::LegPool LegPool_118("STRING_1963386453");
    noLegs_0_0.set(LegPool_118);
    InstrumentLeg_118.insert(LegPool_118.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_118("STRING_996197683");
    noLegs_0_0.set(LegPriceUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasure_118.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
    LegPriceUnitOfMeasureQty_118.setString("2300224");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasureQty_118.getString());
    FIX::LegProduct LegProduct_118(693418714);
    noLegs_0_0.set(LegProduct_118);
    InstrumentLeg_118.insert(LegProduct_118.getString());
    FIX::LegPutOrCall LegPutOrCall_118(1976691147);
    noLegs_0_0.set(LegPutOrCall_118);
    InstrumentLeg_118.insert(LegPutOrCall_118.getString());
    FIX::LegRatioQty LegRatioQty_118;
    LegRatioQty_118.setString("19708843");
    noLegs_0_0.set(LegRatioQty_118);
    InstrumentLeg_118.insert(LegRatioQty_118.getString());
    FIX::LegRedemptionDate LegRedemptionDate_118("LOCALMKTDATE_349993979");
    noLegs_0_0.set(LegRedemptionDate_118);
    InstrumentLeg_118.insert(LegRedemptionDate_118.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_118("STRING_835822106");
    noLegs_0_0.set(LegRepoCollateralSecurityType_118);
    InstrumentLeg_118.insert(LegRepoCollateralSecurityType_118.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_118;
    LegRepurchaseRate_118.setString("72.580000");
    noLegs_0_0.set(LegRepurchaseRate_118);
    InstrumentLeg_118.insert(LegRepurchaseRate_118.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_118(153527640);
    noLegs_0_0.set(LegRepurchaseTerm_118);
    InstrumentLeg_118.insert(LegRepurchaseTerm_118.getString());
    FIX::LegSecurityDesc LegSecurityDesc_118("STRING_24824708");
    noLegs_0_0.set(LegSecurityDesc_118);
    InstrumentLeg_118.insert(LegSecurityDesc_118.getString());
    FIX::LegSecurityExchange LegSecurityExchange_118("EXCHANGE_1429483325");
    noLegs_0_0.set(LegSecurityExchange_118);
    InstrumentLeg_118.insert(LegSecurityExchange_118.getString());
    FIX::LegSecurityID LegSecurityID_118("STRING_1139129376");
    noLegs_0_0.set(LegSecurityID_118);
    InstrumentLeg_118.insert(LegSecurityID_118.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_118("STRING_1739826361");
    noLegs_0_0.set(LegSecurityIDSource_118);
    InstrumentLeg_118.insert(LegSecurityIDSource_118.getString());
    FIX::LegSecuritySubType LegSecuritySubType_118("STRING_1015639065");
    noLegs_0_0.set(LegSecuritySubType_118);
    InstrumentLeg_118.insert(LegSecuritySubType_118.getString());
    FIX::LegSecurityType LegSecurityType_118("STRING_1102858291");
    noLegs_0_0.set(LegSecurityType_118);
    InstrumentLeg_118.insert(LegSecurityType_118.getString());
    FIX::LegSide LegSide_118('2');
    noLegs_0_0.set(LegSide_118);
    InstrumentLeg_118.insert(LegSide_118.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_118("STRING_382358242");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_118);
    InstrumentLeg_118.insert(LegStateOrProvinceOfIssue_118.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_118("EUR");
    noLegs_0_0.set(LegStrikeCurrency_118);
    InstrumentLeg_118.insert(LegStrikeCurrency_118.getString());
    FIX::LegStrikePrice LegStrikePrice_118;
    LegStrikePrice_118.setString("19129438");
    noLegs_0_0.set(LegStrikePrice_118);
    InstrumentLeg_118.insert(LegStrikePrice_118.getString());
    FIX::LegSymbol LegSymbol_118("STRING_488388584");
    noLegs_0_0.set(LegSymbol_118);
    InstrumentLeg_118.insert(LegSymbol_118.getString());
    FIX::LegSymbolSfx LegSymbolSfx_118("STRING_594481242");
    noLegs_0_0.set(LegSymbolSfx_118);
    InstrumentLeg_118.insert(LegSymbolSfx_118.getString());
    FIX::LegTimeUnit LegTimeUnit_118("STRING_74513201");
    noLegs_0_0.set(LegTimeUnit_118);
    InstrumentLeg_118.insert(LegTimeUnit_118.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_118("STRING_1397882221");
    noLegs_0_0.set(LegUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegUnitOfMeasure_118.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
    LegUnitOfMeasureQty_118.setString("21396761");
    noLegs_0_0.set(LegUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegUnitOfMeasureQty_118.getString());
    all_values.push_back(InstrumentLeg_118);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_228;
      FIX::LegSecurityAltID LegSecurityAltID_228("STRING_69915557");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_228);
      LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltID_228.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_228("STRING_991784532");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_228);
      LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltIDSource_228.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_228);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_229;
      FIX::LegSecurityAltID LegSecurityAltID_229("STRING_649684523");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_229);
      LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltID_229.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_229("STRING_2135043190");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_229);
      LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltIDSource_229.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_229);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_230;
      FIX::LegSecurityAltID LegSecurityAltID_230("STRING_807687338");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_230);
      LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltID_230.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_230("STRING_1645882206");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_230);
      LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltIDSource_230.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_230);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_119;
    FIX::EncodedLegIssuer EncodedLegIssuer_119("DATA_217582017");
    noLegs_0_1.set(EncodedLegIssuer_119);
    InstrumentLeg_119.insert(EncodedLegIssuer_119.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_119(1501106052);
    noLegs_0_1.set(EncodedLegIssuerLen_119);
    InstrumentLeg_119.insert(EncodedLegIssuerLen_119.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_119("DATA_1475089705");
    noLegs_0_1.set(EncodedLegSecurityDesc_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDesc_119.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_119(40982741);
    noLegs_0_1.set(EncodedLegSecurityDescLen_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDescLen_119.getString());
    FIX::LegCFICode LegCFICode_119("STRING_1851100031");
    noLegs_0_1.set(LegCFICode_119);
    InstrumentLeg_119.insert(LegCFICode_119.getString());
    FIX::LegContractMultiplier LegContractMultiplier_119;
    LegContractMultiplier_119.setString("1634281");
    noLegs_0_1.set(LegContractMultiplier_119);
    InstrumentLeg_119.insert(LegContractMultiplier_119.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_119(2049239999);
    noLegs_0_1.set(LegContractMultiplierUnit_119);
    InstrumentLeg_119.insert(LegContractMultiplierUnit_119.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_119("MONTHYEAR_2004627672");
    noLegs_0_1.set(LegContractSettlMonth_119);
    InstrumentLeg_119.insert(LegContractSettlMonth_119.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_119("COUNTRY_188252872");
    noLegs_0_1.set(LegCountryOfIssue_119);
    InstrumentLeg_119.insert(LegCountryOfIssue_119.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_119("LOCALMKTDATE_1331239676");
    noLegs_0_1.set(LegCouponPaymentDate_119);
    InstrumentLeg_119.insert(LegCouponPaymentDate_119.getString());
    FIX::LegCouponRate LegCouponRate_119;
    LegCouponRate_119.setString("34.000000");
    noLegs_0_1.set(LegCouponRate_119);
    InstrumentLeg_119.insert(LegCouponRate_119.getString());
    FIX::LegCreditRating LegCreditRating_119("STRING_1928079233");
    noLegs_0_1.set(LegCreditRating_119);
    InstrumentLeg_119.insert(LegCreditRating_119.getString());
    FIX::LegCurrency LegCurrency_119("CAN");
    noLegs_0_1.set(LegCurrency_119);
    InstrumentLeg_119.insert(LegCurrency_119.getString());
    FIX::LegDatedDate LegDatedDate_119("LOCALMKTDATE_1894397575");
    noLegs_0_1.set(LegDatedDate_119);
    InstrumentLeg_119.insert(LegDatedDate_119.getString());
    FIX::LegExerciseStyle LegExerciseStyle_119(581753336);
    noLegs_0_1.set(LegExerciseStyle_119);
    InstrumentLeg_119.insert(LegExerciseStyle_119.getString());
    FIX::LegFactor LegFactor_119;
    LegFactor_119.setString("11681237");
    noLegs_0_1.set(LegFactor_119);
    InstrumentLeg_119.insert(LegFactor_119.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_119(342858660);
    noLegs_0_1.set(LegFlowScheduleType_119);
    InstrumentLeg_119.insert(LegFlowScheduleType_119.getString());
    FIX::LegInstrRegistry LegInstrRegistry_119("STRING_347213496");
    noLegs_0_1.set(LegInstrRegistry_119);
    InstrumentLeg_119.insert(LegInstrRegistry_119.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_119("LOCALMKTDATE_1656512294");
    noLegs_0_1.set(LegInterestAccrualDate_119);
    InstrumentLeg_119.insert(LegInterestAccrualDate_119.getString());
    FIX::LegIssueDate LegIssueDate_119("LOCALMKTDATE_937339902");
    noLegs_0_1.set(LegIssueDate_119);
    InstrumentLeg_119.insert(LegIssueDate_119.getString());
    FIX::LegIssuer LegIssuer_119("STRING_421726698");
    noLegs_0_1.set(LegIssuer_119);
    InstrumentLeg_119.insert(LegIssuer_119.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_119("STRING_906910867");
    noLegs_0_1.set(LegLocaleOfIssue_119);
    InstrumentLeg_119.insert(LegLocaleOfIssue_119.getString());
    FIX::LegMaturityDate LegMaturityDate_119("LOCALMKTDATE_929532390");
    noLegs_0_1.set(LegMaturityDate_119);
    InstrumentLeg_119.insert(LegMaturityDate_119.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_119("MONTHYEAR_746613167");
    noLegs_0_1.set(LegMaturityMonthYear_119);
    InstrumentLeg_119.insert(LegMaturityMonthYear_119.getString());
    FIX::LegMaturityTime LegMaturityTime_119("TZTIMEONLY_976826424");
    noLegs_0_1.set(LegMaturityTime_119);
    InstrumentLeg_119.insert(LegMaturityTime_119.getString());
    FIX::LegOptAttribute LegOptAttribute_119('1');
    noLegs_0_1.set(LegOptAttribute_119);
    InstrumentLeg_119.insert(LegOptAttribute_119.getString());
    FIX::LegOptionRatio LegOptionRatio_119;
    LegOptionRatio_119.setString("13962976");
    noLegs_0_1.set(LegOptionRatio_119);
    InstrumentLeg_119.insert(LegOptionRatio_119.getString());
    FIX::LegPool LegPool_119("STRING_964385966");
    noLegs_0_1.set(LegPool_119);
    InstrumentLeg_119.insert(LegPool_119.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_119("STRING_581520612");
    noLegs_0_1.set(LegPriceUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasure_119.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
    LegPriceUnitOfMeasureQty_119.setString("8946962");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasureQty_119.getString());
    FIX::LegProduct LegProduct_119(1181967983);
    noLegs_0_1.set(LegProduct_119);
    InstrumentLeg_119.insert(LegProduct_119.getString());
    FIX::LegPutOrCall LegPutOrCall_119(2082626665);
    noLegs_0_1.set(LegPutOrCall_119);
    InstrumentLeg_119.insert(LegPutOrCall_119.getString());
    FIX::LegRatioQty LegRatioQty_119;
    LegRatioQty_119.setString("2223023");
    noLegs_0_1.set(LegRatioQty_119);
    InstrumentLeg_119.insert(LegRatioQty_119.getString());
    FIX::LegRedemptionDate LegRedemptionDate_119("LOCALMKTDATE_1222950724");
    noLegs_0_1.set(LegRedemptionDate_119);
    InstrumentLeg_119.insert(LegRedemptionDate_119.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_119("STRING_1786243048");
    noLegs_0_1.set(LegRepoCollateralSecurityType_119);
    InstrumentLeg_119.insert(LegRepoCollateralSecurityType_119.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_119;
    LegRepurchaseRate_119.setString("4.710000");
    noLegs_0_1.set(LegRepurchaseRate_119);
    InstrumentLeg_119.insert(LegRepurchaseRate_119.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_119(1124707075);
    noLegs_0_1.set(LegRepurchaseTerm_119);
    InstrumentLeg_119.insert(LegRepurchaseTerm_119.getString());
    FIX::LegSecurityDesc LegSecurityDesc_119("STRING_1643387072");
    noLegs_0_1.set(LegSecurityDesc_119);
    InstrumentLeg_119.insert(LegSecurityDesc_119.getString());
    FIX::LegSecurityExchange LegSecurityExchange_119("EXCHANGE_573983343");
    noLegs_0_1.set(LegSecurityExchange_119);
    InstrumentLeg_119.insert(LegSecurityExchange_119.getString());
    FIX::LegSecurityID LegSecurityID_119("STRING_308463104");
    noLegs_0_1.set(LegSecurityID_119);
    InstrumentLeg_119.insert(LegSecurityID_119.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_119("STRING_492176824");
    noLegs_0_1.set(LegSecurityIDSource_119);
    InstrumentLeg_119.insert(LegSecurityIDSource_119.getString());
    FIX::LegSecuritySubType LegSecuritySubType_119("STRING_354578928");
    noLegs_0_1.set(LegSecuritySubType_119);
    InstrumentLeg_119.insert(LegSecuritySubType_119.getString());
    FIX::LegSecurityType LegSecurityType_119("STRING_507858198");
    noLegs_0_1.set(LegSecurityType_119);
    InstrumentLeg_119.insert(LegSecurityType_119.getString());
    FIX::LegSide LegSide_119('4');
    noLegs_0_1.set(LegSide_119);
    InstrumentLeg_119.insert(LegSide_119.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_119("STRING_101492855");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_119);
    InstrumentLeg_119.insert(LegStateOrProvinceOfIssue_119.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_119("EUR");
    noLegs_0_1.set(LegStrikeCurrency_119);
    InstrumentLeg_119.insert(LegStrikeCurrency_119.getString());
    FIX::LegStrikePrice LegStrikePrice_119;
    LegStrikePrice_119.setString("4443515");
    noLegs_0_1.set(LegStrikePrice_119);
    InstrumentLeg_119.insert(LegStrikePrice_119.getString());
    FIX::LegSymbol LegSymbol_119("STRING_1436825031");
    noLegs_0_1.set(LegSymbol_119);
    InstrumentLeg_119.insert(LegSymbol_119.getString());
    FIX::LegSymbolSfx LegSymbolSfx_119("STRING_1120977224");
    noLegs_0_1.set(LegSymbolSfx_119);
    InstrumentLeg_119.insert(LegSymbolSfx_119.getString());
    FIX::LegTimeUnit LegTimeUnit_119("STRING_1381691418");
    noLegs_0_1.set(LegTimeUnit_119);
    InstrumentLeg_119.insert(LegTimeUnit_119.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_119("STRING_1858551729");
    noLegs_0_1.set(LegUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegUnitOfMeasure_119.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
    LegUnitOfMeasureQty_119.setString("20278880");
    noLegs_0_1.set(LegUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegUnitOfMeasureQty_119.getString());
    all_values.push_back(InstrumentLeg_119);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_231;
      FIX::LegSecurityAltID LegSecurityAltID_231("STRING_457681248");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_231);
      LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltID_231.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_231("STRING_857230868");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_231);
      LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltIDSource_231.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_231);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_232;
      FIX::LegSecurityAltID LegSecurityAltID_232("STRING_2085057082");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_232);
      LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltID_232.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_232("STRING_1853978939");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_232);
      LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltIDSource_232.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_232);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_75;
  FIX::AttachmentPoint AttachmentPoint_75;
  AttachmentPoint_75.setString("68.340000");
  msg.set(AttachmentPoint_75);
  Instrument_75.insert(AttachmentPoint_75.getString());
  FIX::CFICode CFICode_75("STRING_519094047");
  msg.set(CFICode_75);
  Instrument_75.insert(CFICode_75.getString());
  FIX::CPProgram CPProgram_75(2);
  msg.set(CPProgram_75);
  Instrument_75.insert(CPProgram_75.getString());
  FIX::CPRegType CPRegType_75("STRING_856101170");
  msg.set(CPRegType_75);
  Instrument_75.insert(CPRegType_75.getString());
  FIX::CapPrice CapPrice_75;
  CapPrice_75.setString("4542370");
  msg.set(CapPrice_75);
  Instrument_75.insert(CapPrice_75.getString());
  FIX::ContractMultiplier ContractMultiplier_75;
  ContractMultiplier_75.setString("8234938");
  msg.set(ContractMultiplier_75);
  Instrument_75.insert(ContractMultiplier_75.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_75(0);
  msg.set(ContractMultiplierUnit_75);
  Instrument_75.insert(ContractMultiplierUnit_75.getString());
  FIX::ContractSettlMonth ContractSettlMonth_75("MONTHYEAR_92996464");
  msg.set(ContractSettlMonth_75);
  Instrument_75.insert(ContractSettlMonth_75.getString());
  FIX::CountryOfIssue CountryOfIssue_75("COUNTRY_1209224319");
  msg.set(CountryOfIssue_75);
  Instrument_75.insert(CountryOfIssue_75.getString());
  FIX::CouponPaymentDate CouponPaymentDate_75("LOCALMKTDATE_1056275322");
  msg.set(CouponPaymentDate_75);
  Instrument_75.insert(CouponPaymentDate_75.getString());
  FIX::CouponRate CouponRate_75;
  CouponRate_75.setString("35.370000");
  msg.set(CouponRate_75);
  Instrument_75.insert(CouponRate_75.getString());
  FIX::CreditRating CreditRating_75("STRING_1783207662");
  msg.set(CreditRating_75);
  Instrument_75.insert(CreditRating_75.getString());
  FIX::DatedDate DatedDate_75("LOCALMKTDATE_1364738426");
  msg.set(DatedDate_75);
  Instrument_75.insert(DatedDate_75.getString());
  FIX::DetachmentPoint DetachmentPoint_75;
  DetachmentPoint_75.setString("67.130000");
  msg.set(DetachmentPoint_75);
  Instrument_75.insert(DetachmentPoint_75.getString());
  FIX::EncodedIssuer EncodedIssuer_75("DATA_2137786590");
  msg.set(EncodedIssuer_75);
  Instrument_75.insert(EncodedIssuer_75.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_75(1872596624);
  msg.set(EncodedIssuerLen_75);
  Instrument_75.insert(EncodedIssuerLen_75.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_75("DATA_524901581");
  msg.set(EncodedSecurityDesc_75);
  Instrument_75.insert(EncodedSecurityDesc_75.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_75(91795797);
  msg.set(EncodedSecurityDescLen_75);
  Instrument_75.insert(EncodedSecurityDescLen_75.getString());
  FIX::ExerciseStyle ExerciseStyle_75(2);
  msg.set(ExerciseStyle_75);
  Instrument_75.insert(ExerciseStyle_75.getString());
  FIX::Factor Factor_75;
  Factor_75.setString("21368501");
  msg.set(Factor_75);
  Instrument_75.insert(Factor_75.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_75(true);
  msg.set(FlexProductEligibilityIndicator_75);
  Instrument_75.insert(FlexProductEligibilityIndicator_75.getString());
  FIX::FlexibleIndicator FlexibleIndicator_75(false);
  msg.set(FlexibleIndicator_75);
  Instrument_75.insert(FlexibleIndicator_75.getString());
  FIX::FloorPrice FloorPrice_75;
  FloorPrice_75.setString("11103437");
  msg.set(FloorPrice_75);
  Instrument_75.insert(FloorPrice_75.getString());
  FIX::FlowScheduleType FlowScheduleType_75(0);
  msg.set(FlowScheduleType_75);
  Instrument_75.insert(FlowScheduleType_75.getString());
  FIX::InstrRegistry InstrRegistry_75("STRING_1962617622");
  msg.set(InstrRegistry_75);
  Instrument_75.insert(InstrRegistry_75.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_75('9');
  msg.set(InstrmtAssignmentMethod_75);
  Instrument_75.insert(InstrmtAssignmentMethod_75.getString());
  FIX::InterestAccrualDate InterestAccrualDate_75("LOCALMKTDATE_2081578890");
  msg.set(InterestAccrualDate_75);
  Instrument_75.insert(InterestAccrualDate_75.getString());
  FIX::IssueDate IssueDate_75("LOCALMKTDATE_272815223");
  msg.set(IssueDate_75);
  Instrument_75.insert(IssueDate_75.getString());
  FIX::Issuer Issuer_75("STRING_1847979046");
  msg.set(Issuer_75);
  Instrument_75.insert(Issuer_75.getString());
  FIX::ListMethod ListMethod_75(1);
  msg.set(ListMethod_75);
  Instrument_75.insert(ListMethod_75.getString());
  FIX::LocaleOfIssue LocaleOfIssue_75("STRING_2126794162");
  msg.set(LocaleOfIssue_75);
  Instrument_75.insert(LocaleOfIssue_75.getString());
  FIX::MaturityDate MaturityDate_75("LOCALMKTDATE_1522112232");
  msg.set(MaturityDate_75);
  Instrument_75.insert(MaturityDate_75.getString());
  FIX::MaturityMonthYear MaturityMonthYear_75("MONTHYEAR_390762724");
  msg.set(MaturityMonthYear_75);
  Instrument_75.insert(MaturityMonthYear_75.getString());
  FIX::MaturityTime MaturityTime_75("TZTIMEONLY_580502055");
  msg.set(MaturityTime_75);
  Instrument_75.insert(MaturityTime_75.getString());
  FIX::MinPriceIncrement MinPriceIncrement_75;
  MinPriceIncrement_75.setString("2307297");
  msg.set(MinPriceIncrement_75);
  Instrument_75.insert(MinPriceIncrement_75.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
  MinPriceIncrementAmount_75.setString("8449997");
  msg.set(MinPriceIncrementAmount_75);
  Instrument_75.insert(MinPriceIncrementAmount_75.getString());
  FIX::NTPositionLimit NTPositionLimit_75(1403995903);
  msg.set(NTPositionLimit_75);
  Instrument_75.insert(NTPositionLimit_75.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
  NotionalPercentageOutstanding_75.setString("80.010000");
  msg.set(NotionalPercentageOutstanding_75);
  Instrument_75.insert(NotionalPercentageOutstanding_75.getString());
  FIX::OptAttribute OptAttribute_75('9');
  msg.set(OptAttribute_75);
  Instrument_75.insert(OptAttribute_75.getString());
  FIX::OptPayoutAmount OptPayoutAmount_75;
  OptPayoutAmount_75.setString("4657365");
  msg.set(OptPayoutAmount_75);
  Instrument_75.insert(OptPayoutAmount_75.getString());
  FIX::OptPayoutType OptPayoutType_75(3);
  msg.set(OptPayoutType_75);
  Instrument_75.insert(OptPayoutType_75.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
  OriginalNotionalPercentageOutstanding_75.setString("61.410000");
  msg.set(OriginalNotionalPercentageOutstanding_75);
  Instrument_75.insert(OriginalNotionalPercentageOutstanding_75.getString());
  FIX::Pool Pool_75("STRING_101460588");
  msg.set(Pool_75);
  Instrument_75.insert(Pool_75.getString());
  FIX::PositionLimit PositionLimit_75(435828101);
  msg.set(PositionLimit_75);
  Instrument_75.insert(PositionLimit_75.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_75("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_75);
  Instrument_75.insert(PriceQuoteMethod_75.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_75("STRING_91763530");
  msg.set(PriceUnitOfMeasure_75);
  Instrument_75.insert(PriceUnitOfMeasure_75.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
  PriceUnitOfMeasureQty_75.setString("1609410");
  msg.set(PriceUnitOfMeasureQty_75);
  Instrument_75.insert(PriceUnitOfMeasureQty_75.getString());
  FIX::Product Product_77(6);
  msg.set(Product_77);
  Instrument_75.insert(Product_77.getString());
  FIX::ProductComplex ProductComplex_75("STRING_183559327");
  msg.set(ProductComplex_75);
  Instrument_75.insert(ProductComplex_75.getString());
  FIX::PutOrCall PutOrCall_75(1);
  msg.set(PutOrCall_75);
  Instrument_75.insert(PutOrCall_75.getString());
  FIX::RedemptionDate RedemptionDate_75("LOCALMKTDATE_1122240946");
  msg.set(RedemptionDate_75);
  Instrument_75.insert(RedemptionDate_75.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_75("STRING_719706640");
  msg.set(RepoCollateralSecurityType_75);
  Instrument_75.insert(RepoCollateralSecurityType_75.getString());
  FIX::RepurchaseRate RepurchaseRate_75;
  RepurchaseRate_75.setString("14.810000");
  msg.set(RepurchaseRate_75);
  Instrument_75.insert(RepurchaseRate_75.getString());
  FIX::RepurchaseTerm RepurchaseTerm_75(85101033);
  msg.set(RepurchaseTerm_75);
  Instrument_75.insert(RepurchaseTerm_75.getString());
  FIX::RestructuringType RestructuringType_75("STRING_MM");
  msg.set(RestructuringType_75);
  Instrument_75.insert(RestructuringType_75.getString());
  FIX::SecurityDesc SecurityDesc_75("STRING_894865455");
  msg.set(SecurityDesc_75);
  Instrument_75.insert(SecurityDesc_75.getString());
  FIX::SecurityExchange SecurityExchange_75("EXCHANGE_1075849211");
  msg.set(SecurityExchange_75);
  Instrument_75.insert(SecurityExchange_75.getString());
  FIX::SecurityGroup SecurityGroup_75("STRING_424156965");
  msg.set(SecurityGroup_75);
  Instrument_75.insert(SecurityGroup_75.getString());
  FIX::SecurityID SecurityID_75("STRING_1167680678");
  msg.set(SecurityID_75);
  Instrument_75.insert(SecurityID_75.getString());
  FIX::SecurityIDSource SecurityIDSource_75("STRING_8");
  msg.set(SecurityIDSource_75);
  Instrument_75.insert(SecurityIDSource_75.getString());
  FIX::SecurityStatus SecurityStatus_75("STRING_1");
  msg.set(SecurityStatus_75);
  Instrument_75.insert(SecurityStatus_75.getString());
  FIX::SecuritySubType SecuritySubType_76("STRING_1146991193");
  msg.set(SecuritySubType_76);
  Instrument_75.insert(SecuritySubType_76.getString());
  FIX::SecurityType SecurityType_77("STRING_SPCLA");
  msg.set(SecurityType_77);
  Instrument_75.insert(SecurityType_77.getString());
  FIX::Seniority Seniority_75("STRING_SB");
  msg.set(Seniority_75);
  Instrument_75.insert(Seniority_75.getString());
  FIX::SettlMethod SettlMethod_75('C');
  msg.set(SettlMethod_75);
  Instrument_75.insert(SettlMethod_75.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_75("STRING_381702948");
  msg.set(SettleOnOpenFlag_75);
  Instrument_75.insert(SettleOnOpenFlag_75.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_75("STRING_1531588154");
  msg.set(StateOrProvinceOfIssue_75);
  Instrument_75.insert(StateOrProvinceOfIssue_75.getString());
  FIX::StrikeCurrency StrikeCurrency_75("CAN");
  msg.set(StrikeCurrency_75);
  Instrument_75.insert(StrikeCurrency_75.getString());
  FIX::StrikeMultiplier StrikeMultiplier_75;
  StrikeMultiplier_75.setString("3221007");
  msg.set(StrikeMultiplier_75);
  Instrument_75.insert(StrikeMultiplier_75.getString());
  FIX::StrikePrice StrikePrice_75;
  StrikePrice_75.setString("14497420");
  msg.set(StrikePrice_75);
  Instrument_75.insert(StrikePrice_75.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_75(3);
  msg.set(StrikePriceBoundaryMethod_75);
  Instrument_75.insert(StrikePriceBoundaryMethod_75.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
  StrikePriceBoundaryPrecision_75.setString("69.000000");
  msg.set(StrikePriceBoundaryPrecision_75);
  Instrument_75.insert(StrikePriceBoundaryPrecision_75.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_75(4);
  msg.set(StrikePriceDeterminationMethod_75);
  Instrument_75.insert(StrikePriceDeterminationMethod_75.getString());
  FIX::StrikeValue StrikeValue_75;
  StrikeValue_75.setString("509187");
  msg.set(StrikeValue_75);
  Instrument_75.insert(StrikeValue_75.getString());
  FIX::Symbol Symbol_75("STRING_1456969755");
  msg.set(Symbol_75);
  Instrument_75.insert(Symbol_75.getString());
  FIX::SymbolSfx SymbolSfx_75("STRING_WI");
  msg.set(SymbolSfx_75);
  Instrument_75.insert(SymbolSfx_75.getString());
  FIX::TimeUnit TimeUnit_75("STRING_H");
  msg.set(TimeUnit_75);
  Instrument_75.insert(TimeUnit_75.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_75(4);
  msg.set(UnderlyingPriceDeterminationMethod_75);
  Instrument_75.insert(UnderlyingPriceDeterminationMethod_75.getString());
  FIX::UnitOfMeasure UnitOfMeasure_75("STRING_lbs");
  msg.set(UnitOfMeasure_75);
  Instrument_75.insert(UnitOfMeasure_75.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
  UnitOfMeasureQty_75.setString("11875253");
  msg.set(UnitOfMeasureQty_75);
  Instrument_75.insert(UnitOfMeasureQty_75.getString());
  FIX::ValuationMethod ValuationMethod_75("STRING_CDSD");
  msg.set(ValuationMethod_75);
  Instrument_75.insert(ValuationMethod_75.getString());
  all_values.push_back(Instrument_75);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_144;
    FIX::ComplexEventCondition ComplexEventCondition_144(1);
    noComplexEvents_0_0.set(ComplexEventCondition_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventCondition_144.getString());
    FIX::ComplexEventPrice ComplexEventPrice_144;
    ComplexEventPrice_144.setString("16497025");
    noComplexEvents_0_0.set(ComplexEventPrice_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPrice_144.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_144(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryMethod_144.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
    ComplexEventPriceBoundaryPrecision_144.setString("86.780000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryPrecision_144.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_144(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceTimeType_144.getString());
    FIX::ComplexEventType ComplexEventType_144(9);
    noComplexEvents_0_0.set(ComplexEventType_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexEventType_144.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
    ComplexOptPayoutAmount_144.setString("348357");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_144);
    ComplexEvents_NoComplexEvents_144.insert(ComplexOptPayoutAmount_144.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_144);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_295;
      FIX::ComplexEventEndDate ComplexEventEndDate_295(FIX::UTCTIMESTAMP(13, 48, 24, 14, 1, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventEndDate_295.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_295(FIX::UTCTIMESTAMP(9, 37, 36, 21, 2, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventStartDate_295.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_295);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
        FIX::ComplexEventEndTime ComplexEventEndTime_597(FIX::UTCTIMEONLY(13, 48, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_597);
        ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventEndTime_597.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_597(FIX::UTCTIMEONLY(13, 8, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_597);
        ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventStartTime_597.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
        FIX::ComplexEventEndTime ComplexEventEndTime_598(FIX::UTCTIMEONLY(15, 38, 30));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_598);
        ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventEndTime_598.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_598(FIX::UTCTIMEONLY(3, 38, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_598);
        ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventStartTime_598.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
        FIX::ComplexEventEndTime ComplexEventEndTime_599(FIX::UTCTIMEONLY(4, 35, 46));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_599);
        ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventEndTime_599.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_599(FIX::UTCTIMEONLY(15, 16, 20));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_599);
        ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventStartTime_599.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_145;
    FIX::ComplexEventCondition ComplexEventCondition_145(1);
    noComplexEvents_0_1.set(ComplexEventCondition_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventCondition_145.getString());
    FIX::ComplexEventPrice ComplexEventPrice_145;
    ComplexEventPrice_145.setString("12221815");
    noComplexEvents_0_1.set(ComplexEventPrice_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPrice_145.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_145(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryMethod_145.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
    ComplexEventPriceBoundaryPrecision_145.setString("42.010000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryPrecision_145.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_145(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceTimeType_145.getString());
    FIX::ComplexEventType ComplexEventType_145(8);
    noComplexEvents_0_1.set(ComplexEventType_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventType_145.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
    ComplexOptPayoutAmount_145.setString("5361896");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexOptPayoutAmount_145.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_145);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_296;
      FIX::ComplexEventEndDate ComplexEventEndDate_296(FIX::UTCTIMESTAMP(23, 1, 11, 24, 3, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventEndDate_296.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_296(FIX::UTCTIMESTAMP(5, 28, 34, 9, 8, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventStartDate_296.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_296);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
        FIX::ComplexEventEndTime ComplexEventEndTime_600(FIX::UTCTIMEONLY(21, 27, 35));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_600);
        ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventEndTime_600.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_600(FIX::UTCTIMEONLY(6, 43, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_600);
        ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventStartTime_600.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
        FIX::ComplexEventEndTime ComplexEventEndTime_601(FIX::UTCTIMEONLY(17, 11, 3));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_601);
        ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventEndTime_601.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_601(FIX::UTCTIMEONLY(15, 50, 18));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_601);
        ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventStartTime_601.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_152;
    FIX::EventDate EventDate_152("LOCALMKTDATE_33068597");
    noEvents_0_0.set(EventDate_152);
    EvntGrp_NoEvents_152.insert(EventDate_152.getString());
    FIX::EventPx EventPx_152;
    EventPx_152.setString("13428254");
    noEvents_0_0.set(EventPx_152);
    EvntGrp_NoEvents_152.insert(EventPx_152.getString());
    FIX::EventText EventText_152("STRING_1247056227");
    noEvents_0_0.set(EventText_152);
    EvntGrp_NoEvents_152.insert(EventText_152.getString());
    FIX::EventTime EventTime_152(FIX::UTCTIMESTAMP(9, 17, 26, 2, 3, 2005));
    noEvents_0_0.set(EventTime_152);
    EvntGrp_NoEvents_152.insert(EventTime_152.getString());
    FIX::EventType EventType_152(17);
    noEvents_0_0.set(EventType_152);
    EvntGrp_NoEvents_152.insert(EventType_152.getString());
    all_values.push_back(EvntGrp_NoEvents_152);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_153;
    FIX::EventDate EventDate_153("LOCALMKTDATE_1451163193");
    noEvents_0_1.set(EventDate_153);
    EvntGrp_NoEvents_153.insert(EventDate_153.getString());
    FIX::EventPx EventPx_153;
    EventPx_153.setString("7837735");
    noEvents_0_1.set(EventPx_153);
    EvntGrp_NoEvents_153.insert(EventPx_153.getString());
    FIX::EventText EventText_153("STRING_1146717068");
    noEvents_0_1.set(EventText_153);
    EvntGrp_NoEvents_153.insert(EventText_153.getString());
    FIX::EventTime EventTime_153(FIX::UTCTIMESTAMP(11, 28, 37, 6, 3, 2003));
    noEvents_0_1.set(EventTime_153);
    EvntGrp_NoEvents_153.insert(EventTime_153.getString());
    FIX::EventType EventType_153(18);
    noEvents_0_1.set(EventType_153);
    EvntGrp_NoEvents_153.insert(EventType_153.getString());
    all_values.push_back(EvntGrp_NoEvents_153);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_155;
    FIX::InstrumentPartyID InstrumentPartyID_155("STRING_1477126962");
    noInstrumentParties_0_0.set(InstrumentPartyID_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyID_155.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_155('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyIDSource_155.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_155(1393758616);
    noInstrumentParties_0_0.set(InstrumentPartyRole_155);
    InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyRole_155.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_155);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
      FIX::InstrumentPartySubID InstrumentPartySubID_326("STRING_300856956");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_326);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubID_326.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_326(729162239);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_326);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubIDType_326.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
      FIX::InstrumentPartySubID InstrumentPartySubID_327("STRING_1734251207");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_327);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubID_327.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_327(709044652);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_327);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubIDType_327.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
      FIX::InstrumentPartySubID InstrumentPartySubID_328("STRING_762230836");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_328);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubID_328.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_328(929593019);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_328);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubIDType_328.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_156;
    FIX::InstrumentPartyID InstrumentPartyID_156("STRING_1956100880");
    noInstrumentParties_0_1.set(InstrumentPartyID_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyID_156.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_156('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyIDSource_156.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_156(242328852);
    noInstrumentParties_0_1.set(InstrumentPartyRole_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyRole_156.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_156);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
      FIX::InstrumentPartySubID InstrumentPartySubID_329("STRING_1994687945");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_329);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubID_329.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_329(1194225451);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_329);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubIDType_329.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
      FIX::InstrumentPartySubID InstrumentPartySubID_330("STRING_1513547819");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_330);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubID_330.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_330(703811990);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_330);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubIDType_330.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
      FIX::InstrumentPartySubID InstrumentPartySubID_331("STRING_1590150347");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_331);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubID_331.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_331(817227365);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_331);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubIDType_331.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_169;
    FIX::SecurityAltID SecurityAltID_169("STRING_589383767");
    noSecurityAltID_0_0.set(SecurityAltID_169);
    SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltID_169.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_169("STRING_1518852067");
    noSecurityAltID_0_0.set(SecurityAltIDSource_169);
    SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltIDSource_169.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_150;
  FIX::SecurityXML SecurityXML_151("XMLDATA_1603632743");
  msg.set(SecurityXML_151);
  FIX::SecurityXMLLen SecurityXMLLen_75(1004075475);
  msg.set(SecurityXMLLen_75);
  FIX::SecurityXMLSchema SecurityXMLSchema_75("STRING_1159531237");
  msg.set(SecurityXMLSchema_75);
  SecurityXML_150.insert(SecurityXMLSchema_75.getString());
  all_values.push_back(SecurityXML_150);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_113;
    FIX::PartyID PartyID_113("STRING_1091013126");
    noPartyIDs_0_0.set(PartyID_113);
    Parties_NoPartyIDs_113.insert(PartyID_113.getString());
    FIX::PartyIDSource PartyIDSource_113('8');
    noPartyIDs_0_0.set(PartyIDSource_113);
    Parties_NoPartyIDs_113.insert(PartyIDSource_113.getString());
    FIX::PartyRole PartyRole_113(7);
    noPartyIDs_0_0.set(PartyRole_113);
    Parties_NoPartyIDs_113.insert(PartyRole_113.getString());
    all_values.push_back(Parties_NoPartyIDs_113);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_235;
      FIX::PartySubID PartySubID_235("STRING_436986864");
      noPartySubIDs_0_1_0.set(PartySubID_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubID_235.getString());
      FIX::PartySubIDType PartySubIDType_235(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubIDType_235.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_235);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_236;
      FIX::PartySubID PartySubID_236("STRING_784349127");
      noPartySubIDs_0_1_1.set(PartySubID_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubID_236.getString());
      FIX::PartySubIDType PartySubIDType_236(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_236);
      PtysSubGrp_NoPartySubIDs_236.insert(PartySubIDType_236.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_236);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    FIX::TargetPartyID TargetPartyID_16("STRING_1513511366");
    noTargetPartyIDs_0_0.set(TargetPartyID_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyID_16.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_16('6');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyIDSource_16.getString());
    FIX::TargetPartyRole TargetPartyRole_16(66296167);
    noTargetPartyIDs_0_0.set(TargetPartyRole_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyRole_16.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_17;
    FIX::TargetPartyID TargetPartyID_17("STRING_128258555");
    noTargetPartyIDs_0_1.set(TargetPartyID_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyID_17.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_17('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyIDSource_17.getString());
    FIX::TargetPartyRole TargetPartyRole_17(2022397047);
    noTargetPartyIDs_0_1.set(TargetPartyRole_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyRole_17.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_17);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_111;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_111("DATA_1832431844");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuer_111.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_111(1794547788);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuerLen_111.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_111("DATA_669944290");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDesc_111.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_111(879173647);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDescLen_111.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
    UnderlyingAdjustedQuantity_111.setString("11606119");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_111);
    UnderlyingInstrument_111.insert(UnderlyingAdjustedQuantity_111.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
    UnderlyingAllocationPercent_111.setString("62.800000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_111);
    UnderlyingInstrument_111.insert(UnderlyingAllocationPercent_111.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
    UnderlyingAttachmentPoint_111.setString("3.460000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingAttachmentPoint_111.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_111("STRING_1977839325");
    noUnderlyings_0_0.set(UnderlyingCFICode_111);
    UnderlyingInstrument_111.insert(UnderlyingCFICode_111.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_111("STRING_713858140");
    noUnderlyings_0_0.set(UnderlyingCPProgram_111);
    UnderlyingInstrument_111.insert(UnderlyingCPProgram_111.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_111("STRING_911224114");
    noUnderlyings_0_0.set(UnderlyingCPRegType_111);
    UnderlyingInstrument_111.insert(UnderlyingCPRegType_111.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_111;
    UnderlyingCapValue_111.setString("13492077");
    noUnderlyings_0_0.set(UnderlyingCapValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCapValue_111.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
    UnderlyingCashAmount_111.setString("1700072");
    noUnderlyings_0_0.set(UnderlyingCashAmount_111);
    UnderlyingInstrument_111.insert(UnderlyingCashAmount_111.getString());
    FIX::UnderlyingCashType UnderlyingCashType_111("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_111);
    UnderlyingInstrument_111.insert(UnderlyingCashType_111.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
    UnderlyingContractMultiplier_111.setString("3612553");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplier_111.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_111(1388905324);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplierUnit_111.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_111("COUNTRY_858829067");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingCountryOfIssue_111.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_111("LOCALMKTDATE_1468598883");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponPaymentDate_111.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
    UnderlyingCouponRate_111.setString("96.220000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponRate_111.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_111("STRING_249419578");
    noUnderlyings_0_0.set(UnderlyingCreditRating_111);
    UnderlyingInstrument_111.insert(UnderlyingCreditRating_111.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_111("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrency_111.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
    UnderlyingCurrentValue_111.setString("10337687");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrentValue_111.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
    UnderlyingDetachmentPoint_111.setString("45.130000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingDetachmentPoint_111.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
    UnderlyingDirtyPrice_111.setString("20487193");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingDirtyPrice_111.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
    UnderlyingEndPrice_111.setString("3997964");
    noUnderlyings_0_0.set(UnderlyingEndPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingEndPrice_111.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_111;
    UnderlyingEndValue_111.setString("14923544");
    noUnderlyings_0_0.set(UnderlyingEndValue_111);
    UnderlyingInstrument_111.insert(UnderlyingEndValue_111.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_111(2115015510);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_111);
    UnderlyingInstrument_111.insert(UnderlyingExerciseStyle_111.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_111;
    UnderlyingFXRate_111.setString("5280549");
    noUnderlyings_0_0.set(UnderlyingFXRate_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRate_111.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_111('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRateCalc_111.getString());
    FIX::UnderlyingFactor UnderlyingFactor_111;
    UnderlyingFactor_111.setString("19899289");
    noUnderlyings_0_0.set(UnderlyingFactor_111);
    UnderlyingInstrument_111.insert(UnderlyingFactor_111.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_111(1350794973);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_111);
    UnderlyingInstrument_111.insert(UnderlyingFlowScheduleType_111.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_111("STRING_619922026");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_111);
    UnderlyingInstrument_111.insert(UnderlyingInstrRegistry_111.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_111("LOCALMKTDATE_1636993050");
    noUnderlyings_0_0.set(UnderlyingIssueDate_111);
    UnderlyingInstrument_111.insert(UnderlyingIssueDate_111.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_111("STRING_2020739263");
    noUnderlyings_0_0.set(UnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(UnderlyingIssuer_111.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_111("STRING_1499095674");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingLocaleOfIssue_111.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_111("LOCALMKTDATE_650121362");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityDate_111.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_111("MONTHYEAR_1247011896");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityMonthYear_111.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_111("TZTIMEONLY_1820936020");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityTime_111.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
    UnderlyingNotionalPercentageOutstanding_111.setString("70.390000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_111('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_111);
    UnderlyingInstrument_111.insert(UnderlyingOptAttribute_111.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
    UnderlyingOriginalNotionalPercentageOutstanding_111.setString("64.860000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingOriginalNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_111("STRING_1829684783");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasure_111.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
    UnderlyingPriceUnitOfMeasureQty_111.setString("21308772");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasureQty_111.getString());
    FIX::UnderlyingProduct UnderlyingProduct_111(352492428);
    noUnderlyings_0_0.set(UnderlyingProduct_111);
    UnderlyingInstrument_111.insert(UnderlyingProduct_111.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_111(43456469);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_111);
    UnderlyingInstrument_111.insert(UnderlyingPutOrCall_111.getString());
    FIX::UnderlyingPx UnderlyingPx_111;
    UnderlyingPx_111.setString("13722989");
    noUnderlyings_0_0.set(UnderlyingPx_111);
    UnderlyingInstrument_111.insert(UnderlyingPx_111.getString());
    FIX::UnderlyingQty UnderlyingQty_111;
    UnderlyingQty_111.setString("12113214");
    noUnderlyings_0_0.set(UnderlyingQty_111);
    UnderlyingInstrument_111.insert(UnderlyingQty_111.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_111("LOCALMKTDATE_1512055352");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_111);
    UnderlyingInstrument_111.insert(UnderlyingRedemptionDate_111.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_111("STRING_712404923");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingRepoCollateralSecurityType_111.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
    UnderlyingRepurchaseRate_111.setString("10.740000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseRate_111.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_111(1270157452);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseTerm_111.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_111("STRING_1256389104");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_111);
    UnderlyingInstrument_111.insert(UnderlyingRestructuringType_111.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_111("STRING_347026132");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityDesc_111.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_111("EXCHANGE_2102001965");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityExchange_111.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_111("STRING_1157624799");
    noUnderlyings_0_0.set(UnderlyingSecurityID_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityID_111.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_111("STRING_746822556");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityIDSource_111.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_111("STRING_1446872803");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecuritySubType_111.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_111("STRING_1125156662");
    noUnderlyings_0_0.set(UnderlyingSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityType_111.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_111("STRING_1274877536");
    noUnderlyings_0_0.set(UnderlyingSeniority_111);
    UnderlyingInstrument_111.insert(UnderlyingSeniority_111.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_111("STRING_234362985");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlMethod_111.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_111(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlementType_111.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_111;
    UnderlyingStartValue_111.setString("4781888");
    noUnderlyings_0_0.set(UnderlyingStartValue_111);
    UnderlyingInstrument_111.insert(UnderlyingStartValue_111.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_111("STRING_854285011");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingStateOrProvinceOfIssue_111.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_111("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikeCurrency_111.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
    UnderlyingStrikePrice_111.setString("2058970");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikePrice_111.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_111("STRING_1107232687");
    noUnderlyings_0_0.set(UnderlyingSymbol_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbol_111.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_111("STRING_1598456372");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbolSfx_111.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_111("STRING_2026833058");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingTimeUnit_111.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_111("STRING_1587709726");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasure_111.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
    UnderlyingUnitOfMeasureQty_111.setString("14118427");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasureQty_111.getString());
    all_values.push_back(UnderlyingInstrument_111);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_220("STRING_1269910862");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltID_220.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_220("STRING_1395236385");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_220);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltIDSource_220.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_221("STRING_816518324");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltID_221.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_221("STRING_1313367331");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_221);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltIDSource_221.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_222("STRING_620051685");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltID_222.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_222("STRING_2027839820");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_222);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltIDSource_222.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
      FIX::UnderlyingStipType UnderlyingStipType_209("STRING_1332456608");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_209);
      UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipType_209.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_209("STRING_1341097246");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_209);
      UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipValue_209.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
      FIX::UnderlyingStipType UnderlyingStipType_210("STRING_1948096487");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_210);
      UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipType_210.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_210("STRING_441362064");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_210);
      UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipValue_210.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_223("STRING_1902614804");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyID_223.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_223('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyIDSource_223.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_223(287462286);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_223);
      UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyRole_223.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_419("STRING_576659878");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubID_419.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_419(1562339822);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubIDType_419.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_420("STRING_1436366944");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubID_420.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_420(1544261801);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubIDType_420.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_224("STRING_2040528683");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyID_224.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_224('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyIDSource_224.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_224(2001373127);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_224);
      UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyRole_224.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_421("STRING_349065345");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubID_421.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_421(961122166);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubIDType_421.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_225("STRING_1842945884");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyID_225.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_225('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyIDSource_225.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_225(401348245);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_225);
      UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyRole_225.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_422("STRING_692440652");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubID_422.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_422(1671259107);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubIDType_422.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_423("STRING_355057734");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubID_423.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_423(1508958976);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubIDType_423.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_424("STRING_837142790");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubID_424.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_424(975109420);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubIDType_424.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_112;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_112("DATA_1389315148");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuer_112.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_112(1515081825);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingIssuerLen_112.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_112("DATA_160082380");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDesc_112.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_112(582928746);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_112);
    UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDescLen_112.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
    UnderlyingAdjustedQuantity_112.setString("13156946");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_112);
    UnderlyingInstrument_112.insert(UnderlyingAdjustedQuantity_112.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
    UnderlyingAllocationPercent_112.setString("44.450000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_112);
    UnderlyingInstrument_112.insert(UnderlyingAllocationPercent_112.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
    UnderlyingAttachmentPoint_112.setString("84.760000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingAttachmentPoint_112.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_112("STRING_1070825821");
    noUnderlyings_0_1.set(UnderlyingCFICode_112);
    UnderlyingInstrument_112.insert(UnderlyingCFICode_112.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_112("STRING_52947661");
    noUnderlyings_0_1.set(UnderlyingCPProgram_112);
    UnderlyingInstrument_112.insert(UnderlyingCPProgram_112.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_112("STRING_411030763");
    noUnderlyings_0_1.set(UnderlyingCPRegType_112);
    UnderlyingInstrument_112.insert(UnderlyingCPRegType_112.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_112;
    UnderlyingCapValue_112.setString("1253461");
    noUnderlyings_0_1.set(UnderlyingCapValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCapValue_112.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
    UnderlyingCashAmount_112.setString("6296075");
    noUnderlyings_0_1.set(UnderlyingCashAmount_112);
    UnderlyingInstrument_112.insert(UnderlyingCashAmount_112.getString());
    FIX::UnderlyingCashType UnderlyingCashType_112("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_112);
    UnderlyingInstrument_112.insert(UnderlyingCashType_112.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
    UnderlyingContractMultiplier_112.setString("15617130");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplier_112.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_112(26385692);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingContractMultiplierUnit_112.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_112("COUNTRY_1866415621");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingCountryOfIssue_112.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_112("LOCALMKTDATE_1704881385");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponPaymentDate_112.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
    UnderlyingCouponRate_112.setString("88.190000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_112);
    UnderlyingInstrument_112.insert(UnderlyingCouponRate_112.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_112("STRING_2110905133");
    noUnderlyings_0_1.set(UnderlyingCreditRating_112);
    UnderlyingInstrument_112.insert(UnderlyingCreditRating_112.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_112("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrency_112.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
    UnderlyingCurrentValue_112.setString("18063673");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_112);
    UnderlyingInstrument_112.insert(UnderlyingCurrentValue_112.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
    UnderlyingDetachmentPoint_112.setString("78.380000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_112);
    UnderlyingInstrument_112.insert(UnderlyingDetachmentPoint_112.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
    UnderlyingDirtyPrice_112.setString("12427455");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingDirtyPrice_112.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
    UnderlyingEndPrice_112.setString("7661887");
    noUnderlyings_0_1.set(UnderlyingEndPrice_112);
    UnderlyingInstrument_112.insert(UnderlyingEndPrice_112.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_112;
    UnderlyingEndValue_112.setString("8273184");
    noUnderlyings_0_1.set(UnderlyingEndValue_112);
    UnderlyingInstrument_112.insert(UnderlyingEndValue_112.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_112(766521042);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_112);
    UnderlyingInstrument_112.insert(UnderlyingExerciseStyle_112.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_112;
    UnderlyingFXRate_112.setString("11212464");
    noUnderlyings_0_1.set(UnderlyingFXRate_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRate_112.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_112('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_112);
    UnderlyingInstrument_112.insert(UnderlyingFXRateCalc_112.getString());
    FIX::UnderlyingFactor UnderlyingFactor_112;
    UnderlyingFactor_112.setString("16036638");
    noUnderlyings_0_1.set(UnderlyingFactor_112);
    UnderlyingInstrument_112.insert(UnderlyingFactor_112.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_112(2096355873);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_112);
    UnderlyingInstrument_112.insert(UnderlyingFlowScheduleType_112.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_112("STRING_1578108967");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_112);
    UnderlyingInstrument_112.insert(UnderlyingInstrRegistry_112.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_112("LOCALMKTDATE_971262009");
    noUnderlyings_0_1.set(UnderlyingIssueDate_112);
    UnderlyingInstrument_112.insert(UnderlyingIssueDate_112.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_112("STRING_108954606");
    noUnderlyings_0_1.set(UnderlyingIssuer_112);
    UnderlyingInstrument_112.insert(UnderlyingIssuer_112.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_112("STRING_13554066");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingLocaleOfIssue_112.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_112("LOCALMKTDATE_139473026");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityDate_112.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_112("MONTHYEAR_710399051");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityMonthYear_112.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_112("TZTIMEONLY_137122542");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_112);
    UnderlyingInstrument_112.insert(UnderlyingMaturityTime_112.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
    UnderlyingNotionalPercentageOutstanding_112.setString("88.480000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_112('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_112);
    UnderlyingInstrument_112.insert(UnderlyingOptAttribute_112.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
    UnderlyingOriginalNotionalPercentageOutstanding_112.setString("33.050000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_112);
    UnderlyingInstrument_112.insert(UnderlyingOriginalNotionalPercentageOutstanding_112.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_112("STRING_1335644981");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasure_112.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
    UnderlyingPriceUnitOfMeasureQty_112.setString("13929542");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasureQty_112.getString());
    FIX::UnderlyingProduct UnderlyingProduct_112(374040243);
    noUnderlyings_0_1.set(UnderlyingProduct_112);
    UnderlyingInstrument_112.insert(UnderlyingProduct_112.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_112(749874410);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_112);
    UnderlyingInstrument_112.insert(UnderlyingPutOrCall_112.getString());
    FIX::UnderlyingPx UnderlyingPx_112;
    UnderlyingPx_112.setString("14193399");
    noUnderlyings_0_1.set(UnderlyingPx_112);
    UnderlyingInstrument_112.insert(UnderlyingPx_112.getString());
    FIX::UnderlyingQty UnderlyingQty_112;
    UnderlyingQty_112.setString("929722");
    noUnderlyings_0_1.set(UnderlyingQty_112);
    UnderlyingInstrument_112.insert(UnderlyingQty_112.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_112("LOCALMKTDATE_307272148");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_112);
    UnderlyingInstrument_112.insert(UnderlyingRedemptionDate_112.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_112("STRING_1299615115");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingRepoCollateralSecurityType_112.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
    UnderlyingRepurchaseRate_112.setString("37.010000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseRate_112.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_112(213735231);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_112);
    UnderlyingInstrument_112.insert(UnderlyingRepurchaseTerm_112.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_112("STRING_2141012453");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_112);
    UnderlyingInstrument_112.insert(UnderlyingRestructuringType_112.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_112("STRING_1862761070");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityDesc_112.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_112("EXCHANGE_348613069");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityExchange_112.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_112("STRING_1236274388");
    noUnderlyings_0_1.set(UnderlyingSecurityID_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityID_112.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_112("STRING_481466141");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityIDSource_112.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_112("STRING_1175931560");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecuritySubType_112.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_112("STRING_2002795430");
    noUnderlyings_0_1.set(UnderlyingSecurityType_112);
    UnderlyingInstrument_112.insert(UnderlyingSecurityType_112.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_112("STRING_1602712595");
    noUnderlyings_0_1.set(UnderlyingSeniority_112);
    UnderlyingInstrument_112.insert(UnderlyingSeniority_112.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_112("STRING_1364725379");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlMethod_112.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_112(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_112);
    UnderlyingInstrument_112.insert(UnderlyingSettlementType_112.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_112;
    UnderlyingStartValue_112.setString("15515848");
    noUnderlyings_0_1.set(UnderlyingStartValue_112);
    UnderlyingInstrument_112.insert(UnderlyingStartValue_112.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_112("STRING_795350698");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_112);
    UnderlyingInstrument_112.insert(UnderlyingStateOrProvinceOfIssue_112.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_112("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikeCurrency_112.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
    UnderlyingStrikePrice_112.setString("8089047");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_112);
    UnderlyingInstrument_112.insert(UnderlyingStrikePrice_112.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_112("STRING_422227002");
    noUnderlyings_0_1.set(UnderlyingSymbol_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbol_112.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_112("STRING_223454829");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_112);
    UnderlyingInstrument_112.insert(UnderlyingSymbolSfx_112.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_112("STRING_946027307");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_112);
    UnderlyingInstrument_112.insert(UnderlyingTimeUnit_112.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_112("STRING_1632525850");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasure_112.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
    UnderlyingUnitOfMeasureQty_112.setString("9868015");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_112);
    UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasureQty_112.getString());
    all_values.push_back(UnderlyingInstrument_112);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_223("STRING_820687183");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltID_223.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_223("STRING_232272144");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_223);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltIDSource_223.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
      FIX::UnderlyingStipType UnderlyingStipType_211("STRING_1570561593");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipType_211.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_211("STRING_1651612088");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipValue_211.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_226("STRING_1877833741");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyID_226.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_226('8');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyIDSource_226.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_226(2017586772);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_226);
      UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyRole_226.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_425("STRING_797272360");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubID_425.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_425(1732864195);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubIDType_425.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_426("STRING_292698394");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubID_426.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_426(2033546748);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubIDType_426.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_227("STRING_66846688");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyID_227.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_227('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyIDSource_227.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_227(1888858530);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_227);
      UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyRole_227.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_427("STRING_685871685");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubID_427.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_427(1200350496);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubIDType_427.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_228("STRING_1073660456");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyID_228.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_228('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyIDSource_228.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_228(1483104471);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyRole_228.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_428("STRING_142643500");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubID_428.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_428(1905331473);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubIDType_428.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
