#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityListRequest_0;
  FIX::Currency Currency_63("CAN");
  msg.set(Currency_63);
  SecurityListRequest_0.insert(Currency_63.getString());
  FIX::EncodedText EncodedText_79("DATA_1918265417");
  msg.set(EncodedText_79);
  SecurityListRequest_0.insert(EncodedText_79.getString());
  FIX::EncodedTextLen EncodedTextLen_79(424772206);
  msg.set(EncodedTextLen_79);
  SecurityListRequest_0.insert(EncodedTextLen_79.getString());
  FIX::MarketID MarketID_17("EXCHANGE_1211489348");
  msg.set(MarketID_17);
  SecurityListRequest_0.insert(MarketID_17.getString());
  FIX::MarketSegmentID MarketSegmentID_17("STRING_1041761721");
  msg.set(MarketSegmentID_17);
  SecurityListRequest_0.insert(MarketSegmentID_17.getString());
  FIX::SecurityListID SecurityListID_1("STRING_1639473024");
  msg.set(SecurityListID_1);
  SecurityListRequest_0.insert(SecurityListID_1.getString());
  FIX::SecurityListRequestType SecurityListRequestType_1(5);
  msg.set(SecurityListRequestType_1);
  SecurityListRequest_0.insert(SecurityListRequestType_1.getString());
  FIX::SecurityListType SecurityListType_1(2);
  msg.set(SecurityListType_1);
  SecurityListRequest_0.insert(SecurityListType_1.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_1(1);
  msg.set(SecurityListTypeSource_1);
  SecurityListRequest_0.insert(SecurityListTypeSource_1.getString());
  FIX::SecurityReqID SecurityReqID_7("STRING_519010841");
  msg.set(SecurityReqID_7);
  SecurityListRequest_0.insert(SecurityReqID_7.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_10('2');
  msg.set(SubscriptionRequestType_10);
  SecurityListRequest_0.insert(SubscriptionRequestType_10.getString());
  FIX::Text Text_79("STRING_883071898");
  msg.set(Text_79);
  SecurityListRequest_0.insert(Text_79.getString());
  FIX::TradingSessionID TradingSessionID_81("STRING_3");
  msg.set(TradingSessionID_81);
  SecurityListRequest_0.insert(TradingSessionID_81.getString());
  FIX::TradingSessionSubID TradingSessionSubID_81("STRING_6");
  msg.set(TradingSessionSubID_81);
  SecurityListRequest_0.insert(TradingSessionSubID_81.getString());
  all_values.push_back(SecurityListRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_28;
  FIX::AgreementCurrency AgreementCurrency_28("GBP");
  msg.set(AgreementCurrency_28);
  FinancingDetails_28.insert(AgreementCurrency_28.getString());
  FIX::AgreementDate AgreementDate_28("LOCALMKTDATE_865378698");
  msg.set(AgreementDate_28);
  FinancingDetails_28.insert(AgreementDate_28.getString());
  FIX::AgreementDesc AgreementDesc_28("STRING_85096589");
  msg.set(AgreementDesc_28);
  FinancingDetails_28.insert(AgreementDesc_28.getString());
  FIX::AgreementID AgreementID_28("STRING_1029445780");
  msg.set(AgreementID_28);
  FinancingDetails_28.insert(AgreementID_28.getString());
  FIX::DeliveryType DeliveryType_28(2);
  msg.set(DeliveryType_28);
  FinancingDetails_28.insert(DeliveryType_28.getString());
  FIX::EndDate EndDate_28("LOCALMKTDATE_1041380239");
  msg.set(EndDate_28);
  FinancingDetails_28.insert(EndDate_28.getString());
  FIX::MarginRatio MarginRatio_28;
  MarginRatio_28.setString("2.640000");
  msg.set(MarginRatio_28);
  FinancingDetails_28.insert(MarginRatio_28.getString());
  FIX::StartDate StartDate_28("LOCALMKTDATE_1760863833");
  msg.set(StartDate_28);
  FinancingDetails_28.insert(StartDate_28.getString());
  FIX::TerminationType TerminationType_28(3);
  msg.set(TerminationType_28);
  FinancingDetails_28.insert(TerminationType_28.getString());
  all_values.push_back(FinancingDetails_28);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_132;
    FIX::EncodedLegIssuer EncodedLegIssuer_132("DATA_1572181968");
    noLegs_0_0.set(EncodedLegIssuer_132);
    InstrumentLeg_132.insert(EncodedLegIssuer_132.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_132(917513592);
    noLegs_0_0.set(EncodedLegIssuerLen_132);
    InstrumentLeg_132.insert(EncodedLegIssuerLen_132.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_132("DATA_345556710");
    noLegs_0_0.set(EncodedLegSecurityDesc_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDesc_132.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_132(999895772);
    noLegs_0_0.set(EncodedLegSecurityDescLen_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDescLen_132.getString());
    FIX::LegCFICode LegCFICode_132("STRING_1295865797");
    noLegs_0_0.set(LegCFICode_132);
    InstrumentLeg_132.insert(LegCFICode_132.getString());
    FIX::LegContractMultiplier LegContractMultiplier_132;
    LegContractMultiplier_132.setString("333841");
    noLegs_0_0.set(LegContractMultiplier_132);
    InstrumentLeg_132.insert(LegContractMultiplier_132.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_132(1456287751);
    noLegs_0_0.set(LegContractMultiplierUnit_132);
    InstrumentLeg_132.insert(LegContractMultiplierUnit_132.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_132("MONTHYEAR_1066647567");
    noLegs_0_0.set(LegContractSettlMonth_132);
    InstrumentLeg_132.insert(LegContractSettlMonth_132.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_132("COUNTRY_458156369");
    noLegs_0_0.set(LegCountryOfIssue_132);
    InstrumentLeg_132.insert(LegCountryOfIssue_132.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_132("LOCALMKTDATE_520293451");
    noLegs_0_0.set(LegCouponPaymentDate_132);
    InstrumentLeg_132.insert(LegCouponPaymentDate_132.getString());
    FIX::LegCouponRate LegCouponRate_132;
    LegCouponRate_132.setString("92.880000");
    noLegs_0_0.set(LegCouponRate_132);
    InstrumentLeg_132.insert(LegCouponRate_132.getString());
    FIX::LegCreditRating LegCreditRating_132("STRING_2097629393");
    noLegs_0_0.set(LegCreditRating_132);
    InstrumentLeg_132.insert(LegCreditRating_132.getString());
    FIX::LegCurrency LegCurrency_132("EUR");
    noLegs_0_0.set(LegCurrency_132);
    InstrumentLeg_132.insert(LegCurrency_132.getString());
    FIX::LegDatedDate LegDatedDate_132("LOCALMKTDATE_1623938992");
    noLegs_0_0.set(LegDatedDate_132);
    InstrumentLeg_132.insert(LegDatedDate_132.getString());
    FIX::LegExerciseStyle LegExerciseStyle_132(255394546);
    noLegs_0_0.set(LegExerciseStyle_132);
    InstrumentLeg_132.insert(LegExerciseStyle_132.getString());
    FIX::LegFactor LegFactor_132;
    LegFactor_132.setString("5020954");
    noLegs_0_0.set(LegFactor_132);
    InstrumentLeg_132.insert(LegFactor_132.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_132(359527242);
    noLegs_0_0.set(LegFlowScheduleType_132);
    InstrumentLeg_132.insert(LegFlowScheduleType_132.getString());
    FIX::LegInstrRegistry LegInstrRegistry_132("STRING_1777965486");
    noLegs_0_0.set(LegInstrRegistry_132);
    InstrumentLeg_132.insert(LegInstrRegistry_132.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_132("LOCALMKTDATE_2001996412");
    noLegs_0_0.set(LegInterestAccrualDate_132);
    InstrumentLeg_132.insert(LegInterestAccrualDate_132.getString());
    FIX::LegIssueDate LegIssueDate_132("LOCALMKTDATE_1390270920");
    noLegs_0_0.set(LegIssueDate_132);
    InstrumentLeg_132.insert(LegIssueDate_132.getString());
    FIX::LegIssuer LegIssuer_132("STRING_1183843224");
    noLegs_0_0.set(LegIssuer_132);
    InstrumentLeg_132.insert(LegIssuer_132.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_132("STRING_719891462");
    noLegs_0_0.set(LegLocaleOfIssue_132);
    InstrumentLeg_132.insert(LegLocaleOfIssue_132.getString());
    FIX::LegMaturityDate LegMaturityDate_132("LOCALMKTDATE_1475367509");
    noLegs_0_0.set(LegMaturityDate_132);
    InstrumentLeg_132.insert(LegMaturityDate_132.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_132("MONTHYEAR_65805357");
    noLegs_0_0.set(LegMaturityMonthYear_132);
    InstrumentLeg_132.insert(LegMaturityMonthYear_132.getString());
    FIX::LegMaturityTime LegMaturityTime_132("TZTIMEONLY_629098493");
    noLegs_0_0.set(LegMaturityTime_132);
    InstrumentLeg_132.insert(LegMaturityTime_132.getString());
    FIX::LegOptAttribute LegOptAttribute_132('3');
    noLegs_0_0.set(LegOptAttribute_132);
    InstrumentLeg_132.insert(LegOptAttribute_132.getString());
    FIX::LegOptionRatio LegOptionRatio_132;
    LegOptionRatio_132.setString("19463056");
    noLegs_0_0.set(LegOptionRatio_132);
    InstrumentLeg_132.insert(LegOptionRatio_132.getString());
    FIX::LegPool LegPool_132("STRING_242478678");
    noLegs_0_0.set(LegPool_132);
    InstrumentLeg_132.insert(LegPool_132.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_132("STRING_1540517819");
    noLegs_0_0.set(LegPriceUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasure_132.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_132;
    LegPriceUnitOfMeasureQty_132.setString("20704897");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasureQty_132.getString());
    FIX::LegProduct LegProduct_132(1814660647);
    noLegs_0_0.set(LegProduct_132);
    InstrumentLeg_132.insert(LegProduct_132.getString());
    FIX::LegPutOrCall LegPutOrCall_132(310547763);
    noLegs_0_0.set(LegPutOrCall_132);
    InstrumentLeg_132.insert(LegPutOrCall_132.getString());
    FIX::LegRatioQty LegRatioQty_132;
    LegRatioQty_132.setString("2685628");
    noLegs_0_0.set(LegRatioQty_132);
    InstrumentLeg_132.insert(LegRatioQty_132.getString());
    FIX::LegRedemptionDate LegRedemptionDate_132("LOCALMKTDATE_667072771");
    noLegs_0_0.set(LegRedemptionDate_132);
    InstrumentLeg_132.insert(LegRedemptionDate_132.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_132("STRING_1606413561");
    noLegs_0_0.set(LegRepoCollateralSecurityType_132);
    InstrumentLeg_132.insert(LegRepoCollateralSecurityType_132.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_132;
    LegRepurchaseRate_132.setString("69.990000");
    noLegs_0_0.set(LegRepurchaseRate_132);
    InstrumentLeg_132.insert(LegRepurchaseRate_132.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_132(2123360522);
    noLegs_0_0.set(LegRepurchaseTerm_132);
    InstrumentLeg_132.insert(LegRepurchaseTerm_132.getString());
    FIX::LegSecurityDesc LegSecurityDesc_132("STRING_525577480");
    noLegs_0_0.set(LegSecurityDesc_132);
    InstrumentLeg_132.insert(LegSecurityDesc_132.getString());
    FIX::LegSecurityExchange LegSecurityExchange_132("EXCHANGE_760103369");
    noLegs_0_0.set(LegSecurityExchange_132);
    InstrumentLeg_132.insert(LegSecurityExchange_132.getString());
    FIX::LegSecurityID LegSecurityID_132("STRING_496170325");
    noLegs_0_0.set(LegSecurityID_132);
    InstrumentLeg_132.insert(LegSecurityID_132.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_132("STRING_486503120");
    noLegs_0_0.set(LegSecurityIDSource_132);
    InstrumentLeg_132.insert(LegSecurityIDSource_132.getString());
    FIX::LegSecuritySubType LegSecuritySubType_132("STRING_710249114");
    noLegs_0_0.set(LegSecuritySubType_132);
    InstrumentLeg_132.insert(LegSecuritySubType_132.getString());
    FIX::LegSecurityType LegSecurityType_132("STRING_232554030");
    noLegs_0_0.set(LegSecurityType_132);
    InstrumentLeg_132.insert(LegSecurityType_132.getString());
    FIX::LegSide LegSide_132('3');
    noLegs_0_0.set(LegSide_132);
    InstrumentLeg_132.insert(LegSide_132.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_132("STRING_186704458");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_132);
    InstrumentLeg_132.insert(LegStateOrProvinceOfIssue_132.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_132("EUR");
    noLegs_0_0.set(LegStrikeCurrency_132);
    InstrumentLeg_132.insert(LegStrikeCurrency_132.getString());
    FIX::LegStrikePrice LegStrikePrice_132;
    LegStrikePrice_132.setString("5462317");
    noLegs_0_0.set(LegStrikePrice_132);
    InstrumentLeg_132.insert(LegStrikePrice_132.getString());
    FIX::LegSymbol LegSymbol_132("STRING_118430414");
    noLegs_0_0.set(LegSymbol_132);
    InstrumentLeg_132.insert(LegSymbol_132.getString());
    FIX::LegSymbolSfx LegSymbolSfx_132("STRING_699805413");
    noLegs_0_0.set(LegSymbolSfx_132);
    InstrumentLeg_132.insert(LegSymbolSfx_132.getString());
    FIX::LegTimeUnit LegTimeUnit_132("STRING_1936502621");
    noLegs_0_0.set(LegTimeUnit_132);
    InstrumentLeg_132.insert(LegTimeUnit_132.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_132("STRING_1302273639");
    noLegs_0_0.set(LegUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegUnitOfMeasure_132.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_132;
    LegUnitOfMeasureQty_132.setString("14196968");
    noLegs_0_0.set(LegUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegUnitOfMeasureQty_132.getString());
    all_values.push_back(InstrumentLeg_132);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_255;
      FIX::LegSecurityAltID LegSecurityAltID_255("STRING_1368078996");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_255);
      LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltID_255.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_255("STRING_2048795369");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_255);
      LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltIDSource_255.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_255);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_256;
      FIX::LegSecurityAltID LegSecurityAltID_256("STRING_1633650583");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_256);
      LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltID_256.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_256("STRING_1166900969");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_256);
      LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltIDSource_256.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_256);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_257;
      FIX::LegSecurityAltID LegSecurityAltID_257("STRING_143790399");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_257);
      LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltID_257.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_257("STRING_1026684755");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_257);
      LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltIDSource_257.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_257);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_133;
    FIX::EncodedLegIssuer EncodedLegIssuer_133("DATA_1089907094");
    noLegs_0_1.set(EncodedLegIssuer_133);
    InstrumentLeg_133.insert(EncodedLegIssuer_133.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_133(1958451046);
    noLegs_0_1.set(EncodedLegIssuerLen_133);
    InstrumentLeg_133.insert(EncodedLegIssuerLen_133.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_133("DATA_1337232518");
    noLegs_0_1.set(EncodedLegSecurityDesc_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDesc_133.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_133(1358469930);
    noLegs_0_1.set(EncodedLegSecurityDescLen_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDescLen_133.getString());
    FIX::LegCFICode LegCFICode_133("STRING_478040169");
    noLegs_0_1.set(LegCFICode_133);
    InstrumentLeg_133.insert(LegCFICode_133.getString());
    FIX::LegContractMultiplier LegContractMultiplier_133;
    LegContractMultiplier_133.setString("7961624");
    noLegs_0_1.set(LegContractMultiplier_133);
    InstrumentLeg_133.insert(LegContractMultiplier_133.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_133(1660416930);
    noLegs_0_1.set(LegContractMultiplierUnit_133);
    InstrumentLeg_133.insert(LegContractMultiplierUnit_133.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_133("MONTHYEAR_453917043");
    noLegs_0_1.set(LegContractSettlMonth_133);
    InstrumentLeg_133.insert(LegContractSettlMonth_133.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_133("COUNTRY_1321739911");
    noLegs_0_1.set(LegCountryOfIssue_133);
    InstrumentLeg_133.insert(LegCountryOfIssue_133.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_133("LOCALMKTDATE_273036651");
    noLegs_0_1.set(LegCouponPaymentDate_133);
    InstrumentLeg_133.insert(LegCouponPaymentDate_133.getString());
    FIX::LegCouponRate LegCouponRate_133;
    LegCouponRate_133.setString("73.690000");
    noLegs_0_1.set(LegCouponRate_133);
    InstrumentLeg_133.insert(LegCouponRate_133.getString());
    FIX::LegCreditRating LegCreditRating_133("STRING_1808243032");
    noLegs_0_1.set(LegCreditRating_133);
    InstrumentLeg_133.insert(LegCreditRating_133.getString());
    FIX::LegCurrency LegCurrency_133("CAN");
    noLegs_0_1.set(LegCurrency_133);
    InstrumentLeg_133.insert(LegCurrency_133.getString());
    FIX::LegDatedDate LegDatedDate_133("LOCALMKTDATE_3956602");
    noLegs_0_1.set(LegDatedDate_133);
    InstrumentLeg_133.insert(LegDatedDate_133.getString());
    FIX::LegExerciseStyle LegExerciseStyle_133(1169990224);
    noLegs_0_1.set(LegExerciseStyle_133);
    InstrumentLeg_133.insert(LegExerciseStyle_133.getString());
    FIX::LegFactor LegFactor_133;
    LegFactor_133.setString("16705899");
    noLegs_0_1.set(LegFactor_133);
    InstrumentLeg_133.insert(LegFactor_133.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_133(849249251);
    noLegs_0_1.set(LegFlowScheduleType_133);
    InstrumentLeg_133.insert(LegFlowScheduleType_133.getString());
    FIX::LegInstrRegistry LegInstrRegistry_133("STRING_1716221924");
    noLegs_0_1.set(LegInstrRegistry_133);
    InstrumentLeg_133.insert(LegInstrRegistry_133.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_133("LOCALMKTDATE_1789020390");
    noLegs_0_1.set(LegInterestAccrualDate_133);
    InstrumentLeg_133.insert(LegInterestAccrualDate_133.getString());
    FIX::LegIssueDate LegIssueDate_133("LOCALMKTDATE_1549054664");
    noLegs_0_1.set(LegIssueDate_133);
    InstrumentLeg_133.insert(LegIssueDate_133.getString());
    FIX::LegIssuer LegIssuer_133("STRING_1505240897");
    noLegs_0_1.set(LegIssuer_133);
    InstrumentLeg_133.insert(LegIssuer_133.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_133("STRING_943810381");
    noLegs_0_1.set(LegLocaleOfIssue_133);
    InstrumentLeg_133.insert(LegLocaleOfIssue_133.getString());
    FIX::LegMaturityDate LegMaturityDate_133("LOCALMKTDATE_821267892");
    noLegs_0_1.set(LegMaturityDate_133);
    InstrumentLeg_133.insert(LegMaturityDate_133.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_133("MONTHYEAR_622143732");
    noLegs_0_1.set(LegMaturityMonthYear_133);
    InstrumentLeg_133.insert(LegMaturityMonthYear_133.getString());
    FIX::LegMaturityTime LegMaturityTime_133("TZTIMEONLY_164405729");
    noLegs_0_1.set(LegMaturityTime_133);
    InstrumentLeg_133.insert(LegMaturityTime_133.getString());
    FIX::LegOptAttribute LegOptAttribute_133('7');
    noLegs_0_1.set(LegOptAttribute_133);
    InstrumentLeg_133.insert(LegOptAttribute_133.getString());
    FIX::LegOptionRatio LegOptionRatio_133;
    LegOptionRatio_133.setString("1083106");
    noLegs_0_1.set(LegOptionRatio_133);
    InstrumentLeg_133.insert(LegOptionRatio_133.getString());
    FIX::LegPool LegPool_133("STRING_1331306698");
    noLegs_0_1.set(LegPool_133);
    InstrumentLeg_133.insert(LegPool_133.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_133("STRING_866370013");
    noLegs_0_1.set(LegPriceUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasure_133.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_133;
    LegPriceUnitOfMeasureQty_133.setString("11349954");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasureQty_133.getString());
    FIX::LegProduct LegProduct_133(273730145);
    noLegs_0_1.set(LegProduct_133);
    InstrumentLeg_133.insert(LegProduct_133.getString());
    FIX::LegPutOrCall LegPutOrCall_133(677337411);
    noLegs_0_1.set(LegPutOrCall_133);
    InstrumentLeg_133.insert(LegPutOrCall_133.getString());
    FIX::LegRatioQty LegRatioQty_133;
    LegRatioQty_133.setString("3247442");
    noLegs_0_1.set(LegRatioQty_133);
    InstrumentLeg_133.insert(LegRatioQty_133.getString());
    FIX::LegRedemptionDate LegRedemptionDate_133("LOCALMKTDATE_1632200075");
    noLegs_0_1.set(LegRedemptionDate_133);
    InstrumentLeg_133.insert(LegRedemptionDate_133.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_133("STRING_1155377581");
    noLegs_0_1.set(LegRepoCollateralSecurityType_133);
    InstrumentLeg_133.insert(LegRepoCollateralSecurityType_133.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_133;
    LegRepurchaseRate_133.setString("67.240000");
    noLegs_0_1.set(LegRepurchaseRate_133);
    InstrumentLeg_133.insert(LegRepurchaseRate_133.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_133(1145133357);
    noLegs_0_1.set(LegRepurchaseTerm_133);
    InstrumentLeg_133.insert(LegRepurchaseTerm_133.getString());
    FIX::LegSecurityDesc LegSecurityDesc_133("STRING_1609294624");
    noLegs_0_1.set(LegSecurityDesc_133);
    InstrumentLeg_133.insert(LegSecurityDesc_133.getString());
    FIX::LegSecurityExchange LegSecurityExchange_133("EXCHANGE_295162988");
    noLegs_0_1.set(LegSecurityExchange_133);
    InstrumentLeg_133.insert(LegSecurityExchange_133.getString());
    FIX::LegSecurityID LegSecurityID_133("STRING_1418170008");
    noLegs_0_1.set(LegSecurityID_133);
    InstrumentLeg_133.insert(LegSecurityID_133.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_133("STRING_411898345");
    noLegs_0_1.set(LegSecurityIDSource_133);
    InstrumentLeg_133.insert(LegSecurityIDSource_133.getString());
    FIX::LegSecuritySubType LegSecuritySubType_133("STRING_2103406020");
    noLegs_0_1.set(LegSecuritySubType_133);
    InstrumentLeg_133.insert(LegSecuritySubType_133.getString());
    FIX::LegSecurityType LegSecurityType_133("STRING_253972126");
    noLegs_0_1.set(LegSecurityType_133);
    InstrumentLeg_133.insert(LegSecurityType_133.getString());
    FIX::LegSide LegSide_133('1');
    noLegs_0_1.set(LegSide_133);
    InstrumentLeg_133.insert(LegSide_133.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_133("STRING_2107362622");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_133);
    InstrumentLeg_133.insert(LegStateOrProvinceOfIssue_133.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_133("CHF");
    noLegs_0_1.set(LegStrikeCurrency_133);
    InstrumentLeg_133.insert(LegStrikeCurrency_133.getString());
    FIX::LegStrikePrice LegStrikePrice_133;
    LegStrikePrice_133.setString("8091282");
    noLegs_0_1.set(LegStrikePrice_133);
    InstrumentLeg_133.insert(LegStrikePrice_133.getString());
    FIX::LegSymbol LegSymbol_133("STRING_992700626");
    noLegs_0_1.set(LegSymbol_133);
    InstrumentLeg_133.insert(LegSymbol_133.getString());
    FIX::LegSymbolSfx LegSymbolSfx_133("STRING_759182815");
    noLegs_0_1.set(LegSymbolSfx_133);
    InstrumentLeg_133.insert(LegSymbolSfx_133.getString());
    FIX::LegTimeUnit LegTimeUnit_133("STRING_210699241");
    noLegs_0_1.set(LegTimeUnit_133);
    InstrumentLeg_133.insert(LegTimeUnit_133.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_133("STRING_350457876");
    noLegs_0_1.set(LegUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegUnitOfMeasure_133.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_133;
    LegUnitOfMeasureQty_133.setString("17029931");
    noLegs_0_1.set(LegUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegUnitOfMeasureQty_133.getString());
    all_values.push_back(InstrumentLeg_133);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_258;
      FIX::LegSecurityAltID LegSecurityAltID_258("STRING_972601608");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_258);
      LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltID_258.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_258("STRING_1867398926");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_258);
      LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltIDSource_258.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_258);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_259;
      FIX::LegSecurityAltID LegSecurityAltID_259("STRING_1754546747");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltID_259.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_259("STRING_1080912275");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltIDSource_259.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_259);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_260;
      FIX::LegSecurityAltID LegSecurityAltID_260("STRING_1051221977");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltID_260.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_260("STRING_473433112");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltIDSource_260.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_260);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_83;
  FIX::AttachmentPoint AttachmentPoint_83;
  AttachmentPoint_83.setString("40.500000");
  msg.set(AttachmentPoint_83);
  Instrument_83.insert(AttachmentPoint_83.getString());
  FIX::CFICode CFICode_83("STRING_1324952122");
  msg.set(CFICode_83);
  Instrument_83.insert(CFICode_83.getString());
  FIX::CPProgram CPProgram_83(99);
  msg.set(CPProgram_83);
  Instrument_83.insert(CPProgram_83.getString());
  FIX::CPRegType CPRegType_83("STRING_393168343");
  msg.set(CPRegType_83);
  Instrument_83.insert(CPRegType_83.getString());
  FIX::CapPrice CapPrice_83;
  CapPrice_83.setString("8096685");
  msg.set(CapPrice_83);
  Instrument_83.insert(CapPrice_83.getString());
  FIX::ContractMultiplier ContractMultiplier_83;
  ContractMultiplier_83.setString("1586644");
  msg.set(ContractMultiplier_83);
  Instrument_83.insert(ContractMultiplier_83.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_83(0);
  msg.set(ContractMultiplierUnit_83);
  Instrument_83.insert(ContractMultiplierUnit_83.getString());
  FIX::ContractSettlMonth ContractSettlMonth_83("MONTHYEAR_1954801907");
  msg.set(ContractSettlMonth_83);
  Instrument_83.insert(ContractSettlMonth_83.getString());
  FIX::CountryOfIssue CountryOfIssue_83("COUNTRY_1767959081");
  msg.set(CountryOfIssue_83);
  Instrument_83.insert(CountryOfIssue_83.getString());
  FIX::CouponPaymentDate CouponPaymentDate_83("LOCALMKTDATE_1809238055");
  msg.set(CouponPaymentDate_83);
  Instrument_83.insert(CouponPaymentDate_83.getString());
  FIX::CouponRate CouponRate_83;
  CouponRate_83.setString("82.670000");
  msg.set(CouponRate_83);
  Instrument_83.insert(CouponRate_83.getString());
  FIX::CreditRating CreditRating_83("STRING_32373779");
  msg.set(CreditRating_83);
  Instrument_83.insert(CreditRating_83.getString());
  FIX::DatedDate DatedDate_83("LOCALMKTDATE_1765160427");
  msg.set(DatedDate_83);
  Instrument_83.insert(DatedDate_83.getString());
  FIX::DetachmentPoint DetachmentPoint_83;
  DetachmentPoint_83.setString("3.930000");
  msg.set(DetachmentPoint_83);
  Instrument_83.insert(DetachmentPoint_83.getString());
  FIX::EncodedIssuer EncodedIssuer_83("DATA_1626913524");
  msg.set(EncodedIssuer_83);
  Instrument_83.insert(EncodedIssuer_83.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_83(1725039401);
  msg.set(EncodedIssuerLen_83);
  Instrument_83.insert(EncodedIssuerLen_83.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_83("DATA_755939095");
  msg.set(EncodedSecurityDesc_83);
  Instrument_83.insert(EncodedSecurityDesc_83.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_83(597075949);
  msg.set(EncodedSecurityDescLen_83);
  Instrument_83.insert(EncodedSecurityDescLen_83.getString());
  FIX::ExerciseStyle ExerciseStyle_83(1);
  msg.set(ExerciseStyle_83);
  Instrument_83.insert(ExerciseStyle_83.getString());
  FIX::Factor Factor_83;
  Factor_83.setString("17486397");
  msg.set(Factor_83);
  Instrument_83.insert(Factor_83.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_83(true);
  msg.set(FlexProductEligibilityIndicator_83);
  Instrument_83.insert(FlexProductEligibilityIndicator_83.getString());
  FIX::FlexibleIndicator FlexibleIndicator_83(true);
  msg.set(FlexibleIndicator_83);
  Instrument_83.insert(FlexibleIndicator_83.getString());
  FIX::FloorPrice FloorPrice_83;
  FloorPrice_83.setString("20990975");
  msg.set(FloorPrice_83);
  Instrument_83.insert(FloorPrice_83.getString());
  FIX::FlowScheduleType FlowScheduleType_83(3);
  msg.set(FlowScheduleType_83);
  Instrument_83.insert(FlowScheduleType_83.getString());
  FIX::InstrRegistry InstrRegistry_83("STRING_1629350354");
  msg.set(InstrRegistry_83);
  Instrument_83.insert(InstrRegistry_83.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_83('9');
  msg.set(InstrmtAssignmentMethod_83);
  Instrument_83.insert(InstrmtAssignmentMethod_83.getString());
  FIX::InterestAccrualDate InterestAccrualDate_83("LOCALMKTDATE_631683592");
  msg.set(InterestAccrualDate_83);
  Instrument_83.insert(InterestAccrualDate_83.getString());
  FIX::IssueDate IssueDate_83("LOCALMKTDATE_1236413453");
  msg.set(IssueDate_83);
  Instrument_83.insert(IssueDate_83.getString());
  FIX::Issuer Issuer_83("STRING_2005127833");
  msg.set(Issuer_83);
  Instrument_83.insert(Issuer_83.getString());
  FIX::ListMethod ListMethod_83(1);
  msg.set(ListMethod_83);
  Instrument_83.insert(ListMethod_83.getString());
  FIX::LocaleOfIssue LocaleOfIssue_83("STRING_1709846566");
  msg.set(LocaleOfIssue_83);
  Instrument_83.insert(LocaleOfIssue_83.getString());
  FIX::MaturityDate MaturityDate_83("LOCALMKTDATE_2073551883");
  msg.set(MaturityDate_83);
  Instrument_83.insert(MaturityDate_83.getString());
  FIX::MaturityMonthYear MaturityMonthYear_83("MONTHYEAR_860374043");
  msg.set(MaturityMonthYear_83);
  Instrument_83.insert(MaturityMonthYear_83.getString());
  FIX::MaturityTime MaturityTime_83("TZTIMEONLY_713133442");
  msg.set(MaturityTime_83);
  Instrument_83.insert(MaturityTime_83.getString());
  FIX::MinPriceIncrement MinPriceIncrement_83;
  MinPriceIncrement_83.setString("3192365");
  msg.set(MinPriceIncrement_83);
  Instrument_83.insert(MinPriceIncrement_83.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
  MinPriceIncrementAmount_83.setString("16700425");
  msg.set(MinPriceIncrementAmount_83);
  Instrument_83.insert(MinPriceIncrementAmount_83.getString());
  FIX::NTPositionLimit NTPositionLimit_83(871797899);
  msg.set(NTPositionLimit_83);
  Instrument_83.insert(NTPositionLimit_83.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
  NotionalPercentageOutstanding_83.setString("16.460000");
  msg.set(NotionalPercentageOutstanding_83);
  Instrument_83.insert(NotionalPercentageOutstanding_83.getString());
  FIX::OptAttribute OptAttribute_83('1');
  msg.set(OptAttribute_83);
  Instrument_83.insert(OptAttribute_83.getString());
  FIX::OptPayoutAmount OptPayoutAmount_83;
  OptPayoutAmount_83.setString("4922733");
  msg.set(OptPayoutAmount_83);
  Instrument_83.insert(OptPayoutAmount_83.getString());
  FIX::OptPayoutType OptPayoutType_83(1);
  msg.set(OptPayoutType_83);
  Instrument_83.insert(OptPayoutType_83.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
  OriginalNotionalPercentageOutstanding_83.setString("54.710000");
  msg.set(OriginalNotionalPercentageOutstanding_83);
  Instrument_83.insert(OriginalNotionalPercentageOutstanding_83.getString());
  FIX::Pool Pool_83("STRING_524647111");
  msg.set(Pool_83);
  Instrument_83.insert(Pool_83.getString());
  FIX::PositionLimit PositionLimit_83(1112742833);
  msg.set(PositionLimit_83);
  Instrument_83.insert(PositionLimit_83.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_83("STRING_STD");
  msg.set(PriceQuoteMethod_83);
  Instrument_83.insert(PriceQuoteMethod_83.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_83("STRING_4076987");
  msg.set(PriceUnitOfMeasure_83);
  Instrument_83.insert(PriceUnitOfMeasure_83.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
  PriceUnitOfMeasureQty_83.setString("6902985");
  msg.set(PriceUnitOfMeasureQty_83);
  Instrument_83.insert(PriceUnitOfMeasureQty_83.getString());
  FIX::Product Product_85(12);
  msg.set(Product_85);
  Instrument_83.insert(Product_85.getString());
  FIX::ProductComplex ProductComplex_83("STRING_601152936");
  msg.set(ProductComplex_83);
  Instrument_83.insert(ProductComplex_83.getString());
  FIX::PutOrCall PutOrCall_83(1);
  msg.set(PutOrCall_83);
  Instrument_83.insert(PutOrCall_83.getString());
  FIX::RedemptionDate RedemptionDate_83("LOCALMKTDATE_244437386");
  msg.set(RedemptionDate_83);
  Instrument_83.insert(RedemptionDate_83.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_83("STRING_1957411701");
  msg.set(RepoCollateralSecurityType_83);
  Instrument_83.insert(RepoCollateralSecurityType_83.getString());
  FIX::RepurchaseRate RepurchaseRate_83;
  RepurchaseRate_83.setString("57.850000");
  msg.set(RepurchaseRate_83);
  Instrument_83.insert(RepurchaseRate_83.getString());
  FIX::RepurchaseTerm RepurchaseTerm_83(196051336);
  msg.set(RepurchaseTerm_83);
  Instrument_83.insert(RepurchaseTerm_83.getString());
  FIX::RestructuringType RestructuringType_83("STRING_MM");
  msg.set(RestructuringType_83);
  Instrument_83.insert(RestructuringType_83.getString());
  FIX::SecurityDesc SecurityDesc_83("STRING_1156232491");
  msg.set(SecurityDesc_83);
  Instrument_83.insert(SecurityDesc_83.getString());
  FIX::SecurityExchange SecurityExchange_83("EXCHANGE_1120266894");
  msg.set(SecurityExchange_83);
  Instrument_83.insert(SecurityExchange_83.getString());
  FIX::SecurityGroup SecurityGroup_83("STRING_1353379958");
  msg.set(SecurityGroup_83);
  Instrument_83.insert(SecurityGroup_83.getString());
  FIX::SecurityID SecurityID_83("STRING_245162296");
  msg.set(SecurityID_83);
  Instrument_83.insert(SecurityID_83.getString());
  FIX::SecurityIDSource SecurityIDSource_83("STRING_E");
  msg.set(SecurityIDSource_83);
  Instrument_83.insert(SecurityIDSource_83.getString());
  FIX::SecurityStatus SecurityStatus_83("STRING_2");
  msg.set(SecurityStatus_83);
  Instrument_83.insert(SecurityStatus_83.getString());
  FIX::SecuritySubType SecuritySubType_84("STRING_1955008862");
  msg.set(SecuritySubType_84);
  Instrument_83.insert(SecuritySubType_84.getString());
  FIX::SecurityType SecurityType_85("STRING_TLQN");
  msg.set(SecurityType_85);
  Instrument_83.insert(SecurityType_85.getString());
  FIX::Seniority Seniority_83("STRING_SB");
  msg.set(Seniority_83);
  Instrument_83.insert(Seniority_83.getString());
  FIX::SettlMethod SettlMethod_83('C');
  msg.set(SettlMethod_83);
  Instrument_83.insert(SettlMethod_83.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_83("STRING_1223215893");
  msg.set(SettleOnOpenFlag_83);
  Instrument_83.insert(SettleOnOpenFlag_83.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_83("STRING_1271734867");
  msg.set(StateOrProvinceOfIssue_83);
  Instrument_83.insert(StateOrProvinceOfIssue_83.getString());
  FIX::StrikeCurrency StrikeCurrency_83("EUR");
  msg.set(StrikeCurrency_83);
  Instrument_83.insert(StrikeCurrency_83.getString());
  FIX::StrikeMultiplier StrikeMultiplier_83;
  StrikeMultiplier_83.setString("6016120");
  msg.set(StrikeMultiplier_83);
  Instrument_83.insert(StrikeMultiplier_83.getString());
  FIX::StrikePrice StrikePrice_83;
  StrikePrice_83.setString("18847298");
  msg.set(StrikePrice_83);
  Instrument_83.insert(StrikePrice_83.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_83(3);
  msg.set(StrikePriceBoundaryMethod_83);
  Instrument_83.insert(StrikePriceBoundaryMethod_83.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
  StrikePriceBoundaryPrecision_83.setString("75.410000");
  msg.set(StrikePriceBoundaryPrecision_83);
  Instrument_83.insert(StrikePriceBoundaryPrecision_83.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_83(4);
  msg.set(StrikePriceDeterminationMethod_83);
  Instrument_83.insert(StrikePriceDeterminationMethod_83.getString());
  FIX::StrikeValue StrikeValue_83;
  StrikeValue_83.setString("13693691");
  msg.set(StrikeValue_83);
  Instrument_83.insert(StrikeValue_83.getString());
  FIX::Symbol Symbol_83("STRING_1044319758");
  msg.set(Symbol_83);
  Instrument_83.insert(Symbol_83.getString());
  FIX::SymbolSfx SymbolSfx_83("STRING_WI");
  msg.set(SymbolSfx_83);
  Instrument_83.insert(SymbolSfx_83.getString());
  FIX::TimeUnit TimeUnit_83("STRING_Min");
  msg.set(TimeUnit_83);
  Instrument_83.insert(TimeUnit_83.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_83(3);
  msg.set(UnderlyingPriceDeterminationMethod_83);
  Instrument_83.insert(UnderlyingPriceDeterminationMethod_83.getString());
  FIX::UnitOfMeasure UnitOfMeasure_83("STRING_Bu");
  msg.set(UnitOfMeasure_83);
  Instrument_83.insert(UnitOfMeasure_83.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
  UnitOfMeasureQty_83.setString("9891666");
  msg.set(UnitOfMeasureQty_83);
  Instrument_83.insert(UnitOfMeasureQty_83.getString());
  FIX::ValuationMethod ValuationMethod_83("STRING_FUT");
  msg.set(ValuationMethod_83);
  Instrument_83.insert(ValuationMethod_83.getString());
  all_values.push_back(Instrument_83);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_156;
    FIX::ComplexEventCondition ComplexEventCondition_156(1);
    noComplexEvents_0_0.set(ComplexEventCondition_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventCondition_156.getString());
    FIX::ComplexEventPrice ComplexEventPrice_156;
    ComplexEventPrice_156.setString("21280897");
    noComplexEvents_0_0.set(ComplexEventPrice_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPrice_156.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_156(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryMethod_156.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
    ComplexEventPriceBoundaryPrecision_156.setString("12.610000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryPrecision_156.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_156(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceTimeType_156.getString());
    FIX::ComplexEventType ComplexEventType_156(3);
    noComplexEvents_0_0.set(ComplexEventType_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexEventType_156.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
    ComplexOptPayoutAmount_156.setString("19174435");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_156);
    ComplexEvents_NoComplexEvents_156.insert(ComplexOptPayoutAmount_156.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_156);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_318;
      FIX::ComplexEventEndDate ComplexEventEndDate_318(FIX::UTCTIMESTAMP(20, 44, 39, 1, 7, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventEndDate_318.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_318(FIX::UTCTIMESTAMP(17, 29, 36, 10, 7, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_318);
      ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventStartDate_318.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_318);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
        FIX::ComplexEventEndTime ComplexEventEndTime_639(FIX::UTCTIMEONLY(11, 29, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventEndTime_639.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_639(FIX::UTCTIMEONLY(2, 50, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventStartTime_639.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
        FIX::ComplexEventEndTime ComplexEventEndTime_640(FIX::UTCTIMEONLY(18, 30, 6));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_640);
        ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventEndTime_640.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_640(FIX::UTCTIMEONLY(11, 36, 42));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_640);
        ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventStartTime_640.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
        FIX::ComplexEventEndTime ComplexEventEndTime_641(FIX::UTCTIMEONLY(13, 26, 52));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_641);
        ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventEndTime_641.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_641(FIX::UTCTIMEONLY(12, 30, 30));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_641);
        ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventStartTime_641.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_165;
    FIX::EventDate EventDate_165("LOCALMKTDATE_342316851");
    noEvents_0_0.set(EventDate_165);
    EvntGrp_NoEvents_165.insert(EventDate_165.getString());
    FIX::EventPx EventPx_165;
    EventPx_165.setString("12573168");
    noEvents_0_0.set(EventPx_165);
    EvntGrp_NoEvents_165.insert(EventPx_165.getString());
    FIX::EventText EventText_165("STRING_1707813288");
    noEvents_0_0.set(EventText_165);
    EvntGrp_NoEvents_165.insert(EventText_165.getString());
    FIX::EventTime EventTime_165(FIX::UTCTIMESTAMP(11, 9, 54, 6, 7, 2003));
    noEvents_0_0.set(EventTime_165);
    EvntGrp_NoEvents_165.insert(EventTime_165.getString());
    FIX::EventType EventType_165(1);
    noEvents_0_0.set(EventType_165);
    EvntGrp_NoEvents_165.insert(EventType_165.getString());
    all_values.push_back(EvntGrp_NoEvents_165);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_166;
    FIX::EventDate EventDate_166("LOCALMKTDATE_1269567512");
    noEvents_0_1.set(EventDate_166);
    EvntGrp_NoEvents_166.insert(EventDate_166.getString());
    FIX::EventPx EventPx_166;
    EventPx_166.setString("16620471");
    noEvents_0_1.set(EventPx_166);
    EvntGrp_NoEvents_166.insert(EventPx_166.getString());
    FIX::EventText EventText_166("STRING_1835550883");
    noEvents_0_1.set(EventText_166);
    EvntGrp_NoEvents_166.insert(EventText_166.getString());
    FIX::EventTime EventTime_166(FIX::UTCTIMESTAMP(6, 5, 24, 26, 6, 2016));
    noEvents_0_1.set(EventTime_166);
    EvntGrp_NoEvents_166.insert(EventTime_166.getString());
    FIX::EventType EventType_166(1);
    noEvents_0_1.set(EventType_166);
    EvntGrp_NoEvents_166.insert(EventType_166.getString());
    all_values.push_back(EvntGrp_NoEvents_166);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_168;
    FIX::InstrumentPartyID InstrumentPartyID_168("STRING_1530266693");
    noInstrumentParties_0_0.set(InstrumentPartyID_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyID_168.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_168('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyIDSource_168.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_168(756239317);
    noInstrumentParties_0_0.set(InstrumentPartyRole_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyRole_168.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_168);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354;
      FIX::InstrumentPartySubID InstrumentPartySubID_354("STRING_1899028735");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubID_354.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_354(277554720);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubIDType_354.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_169;
    FIX::InstrumentPartyID InstrumentPartyID_169("STRING_98606938");
    noInstrumentParties_0_1.set(InstrumentPartyID_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyID_169.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_169('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyIDSource_169.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_169(619871571);
    noInstrumentParties_0_1.set(InstrumentPartyRole_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyRole_169.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_169);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355;
      FIX::InstrumentPartySubID InstrumentPartySubID_355("STRING_2090489446");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubID_355.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_355(792683765);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubIDType_355.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356;
      FIX::InstrumentPartySubID InstrumentPartySubID_356("STRING_1955496952");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubID_356.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_356(1949386787);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubIDType_356.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357;
      FIX::InstrumentPartySubID InstrumentPartySubID_357("STRING_1840311060");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubID_357.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_357(15813070);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubIDType_357.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_170;
    FIX::InstrumentPartyID InstrumentPartyID_170("STRING_2019035897");
    noInstrumentParties_0_2.set(InstrumentPartyID_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyID_170.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_170('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyIDSource_170.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_170(698962730);
    noInstrumentParties_0_2.set(InstrumentPartyRole_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyRole_170.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_170);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358;
      FIX::InstrumentPartySubID InstrumentPartySubID_358("STRING_669950728");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubID_358.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_358(387029966);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubIDType_358.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359;
      FIX::InstrumentPartySubID InstrumentPartySubID_359("STRING_1979170799");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubID_359.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_359(364607702);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubIDType_359.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360;
      FIX::InstrumentPartySubID InstrumentPartySubID_360("STRING_478762471");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubID_360.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_360(1910502975);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubIDType_360.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_184;
    FIX::SecurityAltID SecurityAltID_184("STRING_1578804252");
    noSecurityAltID_0_0.set(SecurityAltID_184);
    SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltID_184.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_184("STRING_705076199");
    noSecurityAltID_0_0.set(SecurityAltIDSource_184);
    SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltIDSource_184.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_184);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_185;
    FIX::SecurityAltID SecurityAltID_185("STRING_1380638009");
    noSecurityAltID_0_1.set(SecurityAltID_185);
    SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltID_185.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_185("STRING_885633898");
    noSecurityAltID_0_1.set(SecurityAltIDSource_185);
    SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltIDSource_185.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_185);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_186;
    FIX::SecurityAltID SecurityAltID_186("STRING_87859245");
    noSecurityAltID_0_2.set(SecurityAltID_186);
    SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltID_186.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_186("STRING_1321107948");
    noSecurityAltID_0_2.set(SecurityAltIDSource_186);
    SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltIDSource_186.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_186);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_166;
  FIX::SecurityXML SecurityXML_167("XMLDATA_1641873215");
  msg.set(SecurityXML_167);
  FIX::SecurityXMLLen SecurityXMLLen_83(156995892);
  msg.set(SecurityXMLLen_83);
  FIX::SecurityXMLSchema SecurityXMLSchema_83("STRING_1072653036");
  msg.set(SecurityXMLSchema_83);
  SecurityXML_166.insert(SecurityXMLSchema_83.getString());
  all_values.push_back(SecurityXML_166);

  // InstrumentExtension
  multiset<string> InstrumentExtension_13;
  FIX::DeliveryForm DeliveryForm_13(2);
  msg.set(DeliveryForm_13);
  InstrumentExtension_13.insert(DeliveryForm_13.getString());
  FIX::PctAtRisk PctAtRisk_13;
  PctAtRisk_13.setString("28.300000");
  msg.set(PctAtRisk_13);
  InstrumentExtension_13.insert(PctAtRisk_13.getString());
  all_values.push_back(InstrumentExtension_13);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_27;
    FIX::InstrAttribType InstrAttribType_27(20);
    noInstrAttrib_0_0.set(InstrAttribType_27);
    AttrbGrp_NoInstrAttrib_27.insert(InstrAttribType_27.getString());
    FIX::InstrAttribValue InstrAttribValue_27("STRING_1611526635");
    noInstrAttrib_0_0.set(InstrAttribValue_27);
    AttrbGrp_NoInstrAttrib_27.insert(InstrAttribValue_27.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_27);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_128;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_128("DATA_1184499624");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuer_128.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_128(1419539939);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuerLen_128.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_128("DATA_1200238130");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDesc_128.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_128(877327036);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDescLen_128.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
    UnderlyingAdjustedQuantity_128.setString("14353530");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_128);
    UnderlyingInstrument_128.insert(UnderlyingAdjustedQuantity_128.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
    UnderlyingAllocationPercent_128.setString("3.790000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_128);
    UnderlyingInstrument_128.insert(UnderlyingAllocationPercent_128.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
    UnderlyingAttachmentPoint_128.setString("42.650000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingAttachmentPoint_128.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_128("STRING_2134315740");
    noUnderlyings_0_0.set(UnderlyingCFICode_128);
    UnderlyingInstrument_128.insert(UnderlyingCFICode_128.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_128("STRING_65426493");
    noUnderlyings_0_0.set(UnderlyingCPProgram_128);
    UnderlyingInstrument_128.insert(UnderlyingCPProgram_128.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_128("STRING_555181346");
    noUnderlyings_0_0.set(UnderlyingCPRegType_128);
    UnderlyingInstrument_128.insert(UnderlyingCPRegType_128.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_128;
    UnderlyingCapValue_128.setString("3738620");
    noUnderlyings_0_0.set(UnderlyingCapValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCapValue_128.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
    UnderlyingCashAmount_128.setString("20445972");
    noUnderlyings_0_0.set(UnderlyingCashAmount_128);
    UnderlyingInstrument_128.insert(UnderlyingCashAmount_128.getString());
    FIX::UnderlyingCashType UnderlyingCashType_128("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_128);
    UnderlyingInstrument_128.insert(UnderlyingCashType_128.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
    UnderlyingContractMultiplier_128.setString("8526245");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplier_128.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_128(1807616619);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplierUnit_128.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_128("COUNTRY_112536589");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingCountryOfIssue_128.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_128("LOCALMKTDATE_283945134");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponPaymentDate_128.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
    UnderlyingCouponRate_128.setString("91.700000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponRate_128.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_128("STRING_1493174599");
    noUnderlyings_0_0.set(UnderlyingCreditRating_128);
    UnderlyingInstrument_128.insert(UnderlyingCreditRating_128.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_128("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrency_128.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
    UnderlyingCurrentValue_128.setString("6667988");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrentValue_128.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
    UnderlyingDetachmentPoint_128.setString("85.990000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingDetachmentPoint_128.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
    UnderlyingDirtyPrice_128.setString("6100643");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingDirtyPrice_128.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
    UnderlyingEndPrice_128.setString("17394519");
    noUnderlyings_0_0.set(UnderlyingEndPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingEndPrice_128.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_128;
    UnderlyingEndValue_128.setString("4359128");
    noUnderlyings_0_0.set(UnderlyingEndValue_128);
    UnderlyingInstrument_128.insert(UnderlyingEndValue_128.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_128(865667138);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_128);
    UnderlyingInstrument_128.insert(UnderlyingExerciseStyle_128.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_128;
    UnderlyingFXRate_128.setString("10472974");
    noUnderlyings_0_0.set(UnderlyingFXRate_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRate_128.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_128('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRateCalc_128.getString());
    FIX::UnderlyingFactor UnderlyingFactor_128;
    UnderlyingFactor_128.setString("3297101");
    noUnderlyings_0_0.set(UnderlyingFactor_128);
    UnderlyingInstrument_128.insert(UnderlyingFactor_128.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_128(298148824);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_128);
    UnderlyingInstrument_128.insert(UnderlyingFlowScheduleType_128.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_128("STRING_2012228370");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_128);
    UnderlyingInstrument_128.insert(UnderlyingInstrRegistry_128.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_128("LOCALMKTDATE_1749250065");
    noUnderlyings_0_0.set(UnderlyingIssueDate_128);
    UnderlyingInstrument_128.insert(UnderlyingIssueDate_128.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_128("STRING_1498386955");
    noUnderlyings_0_0.set(UnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(UnderlyingIssuer_128.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_128("STRING_742071759");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingLocaleOfIssue_128.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_128("LOCALMKTDATE_1037119427");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityDate_128.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_128("MONTHYEAR_422693686");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityMonthYear_128.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_128("TZTIMEONLY_627302376");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityTime_128.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
    UnderlyingNotionalPercentageOutstanding_128.setString("15.190000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_128('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_128);
    UnderlyingInstrument_128.insert(UnderlyingOptAttribute_128.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
    UnderlyingOriginalNotionalPercentageOutstanding_128.setString("37.220000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingOriginalNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_128("STRING_1397813577");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasure_128.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
    UnderlyingPriceUnitOfMeasureQty_128.setString("3852338");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasureQty_128.getString());
    FIX::UnderlyingProduct UnderlyingProduct_128(2102272771);
    noUnderlyings_0_0.set(UnderlyingProduct_128);
    UnderlyingInstrument_128.insert(UnderlyingProduct_128.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_128(102954458);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_128);
    UnderlyingInstrument_128.insert(UnderlyingPutOrCall_128.getString());
    FIX::UnderlyingPx UnderlyingPx_128;
    UnderlyingPx_128.setString("453667");
    noUnderlyings_0_0.set(UnderlyingPx_128);
    UnderlyingInstrument_128.insert(UnderlyingPx_128.getString());
    FIX::UnderlyingQty UnderlyingQty_128;
    UnderlyingQty_128.setString("673257");
    noUnderlyings_0_0.set(UnderlyingQty_128);
    UnderlyingInstrument_128.insert(UnderlyingQty_128.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_128("LOCALMKTDATE_386899592");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_128);
    UnderlyingInstrument_128.insert(UnderlyingRedemptionDate_128.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_128("STRING_410575965");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingRepoCollateralSecurityType_128.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
    UnderlyingRepurchaseRate_128.setString("3.110000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseRate_128.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_128(1556478624);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseTerm_128.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_128("STRING_863644380");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_128);
    UnderlyingInstrument_128.insert(UnderlyingRestructuringType_128.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_128("STRING_79815563");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityDesc_128.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_128("EXCHANGE_72963576");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityExchange_128.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_128("STRING_1473708688");
    noUnderlyings_0_0.set(UnderlyingSecurityID_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityID_128.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_128("STRING_1819267498");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityIDSource_128.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_128("STRING_508876463");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecuritySubType_128.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_128("STRING_191892179");
    noUnderlyings_0_0.set(UnderlyingSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityType_128.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_128("STRING_719081331");
    noUnderlyings_0_0.set(UnderlyingSeniority_128);
    UnderlyingInstrument_128.insert(UnderlyingSeniority_128.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_128("STRING_1336605209");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlMethod_128.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_128(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlementType_128.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_128;
    UnderlyingStartValue_128.setString("10172301");
    noUnderlyings_0_0.set(UnderlyingStartValue_128);
    UnderlyingInstrument_128.insert(UnderlyingStartValue_128.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_128("STRING_1201349931");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingStateOrProvinceOfIssue_128.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_128("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikeCurrency_128.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
    UnderlyingStrikePrice_128.setString("19434216");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikePrice_128.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_128("STRING_1160488149");
    noUnderlyings_0_0.set(UnderlyingSymbol_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbol_128.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_128("STRING_790827149");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbolSfx_128.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_128("STRING_423240419");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingTimeUnit_128.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_128("STRING_36956020");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasure_128.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
    UnderlyingUnitOfMeasureQty_128.setString("12789473");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasureQty_128.getString());
    all_values.push_back(UnderlyingInstrument_128);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_256("STRING_1434769597");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltID_256.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_256("STRING_1664181152");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltIDSource_256.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_257("STRING_1560513264");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltID_257.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_257("STRING_1537724056");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltIDSource_257.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
      FIX::UnderlyingStipType UnderlyingStipType_243("STRING_1627838977");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipType_243.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_243("STRING_1924623648");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipValue_243.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      FIX::UnderlyingStipType UnderlyingStipType_244("STRING_2120123912");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipType_244.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_244("STRING_1040855640");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipValue_244.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      FIX::UnderlyingStipType UnderlyingStipType_245("STRING_1333618625");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipType_245.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_245("STRING_836284644");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipValue_245.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_261("STRING_1406582201");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyID_261.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_261('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyIDSource_261.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_261(792455054);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyRole_261.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_487("STRING_354401864");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubID_487.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_487(1511536385);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubIDType_487.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_488("STRING_1104580225");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubID_488.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_488(876004169);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubIDType_488.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_262("STRING_381282893");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyID_262.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_262('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyIDSource_262.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_262(999372891);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyRole_262.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_489("STRING_2101868199");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubID_489.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_489(12377393);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubIDType_489.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_263("STRING_1540243506");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyID_263.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_263('3');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyIDSource_263.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_263(49333413);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyRole_263.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_490("STRING_1983349111");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubID_490.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_490(1484103011);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubIDType_490.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_491("STRING_188404691");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubID_491.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_491(1396378728);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubIDType_491.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_492("STRING_874343419");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubID_492.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_492(1897952638);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubIDType_492.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_129;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_129("DATA_876734057");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuer_129.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_129(651483419);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuerLen_129.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_129("DATA_1870592902");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDesc_129.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_129(1917589697);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDescLen_129.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_129;
    UnderlyingAdjustedQuantity_129.setString("19851020");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_129);
    UnderlyingInstrument_129.insert(UnderlyingAdjustedQuantity_129.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_129;
    UnderlyingAllocationPercent_129.setString("38.990000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_129);
    UnderlyingInstrument_129.insert(UnderlyingAllocationPercent_129.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_129;
    UnderlyingAttachmentPoint_129.setString("72.530000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingAttachmentPoint_129.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_129("STRING_1244200597");
    noUnderlyings_0_1.set(UnderlyingCFICode_129);
    UnderlyingInstrument_129.insert(UnderlyingCFICode_129.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_129("STRING_721903584");
    noUnderlyings_0_1.set(UnderlyingCPProgram_129);
    UnderlyingInstrument_129.insert(UnderlyingCPProgram_129.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_129("STRING_1683232307");
    noUnderlyings_0_1.set(UnderlyingCPRegType_129);
    UnderlyingInstrument_129.insert(UnderlyingCPRegType_129.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_129;
    UnderlyingCapValue_129.setString("10121756");
    noUnderlyings_0_1.set(UnderlyingCapValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCapValue_129.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_129;
    UnderlyingCashAmount_129.setString("10763054");
    noUnderlyings_0_1.set(UnderlyingCashAmount_129);
    UnderlyingInstrument_129.insert(UnderlyingCashAmount_129.getString());
    FIX::UnderlyingCashType UnderlyingCashType_129("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_129);
    UnderlyingInstrument_129.insert(UnderlyingCashType_129.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_129;
    UnderlyingContractMultiplier_129.setString("21167558");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplier_129.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_129(1952309617);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplierUnit_129.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_129("COUNTRY_1428567938");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingCountryOfIssue_129.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_129("LOCALMKTDATE_127718699");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponPaymentDate_129.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_129;
    UnderlyingCouponRate_129.setString("88.600000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponRate_129.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_129("STRING_30500646");
    noUnderlyings_0_1.set(UnderlyingCreditRating_129);
    UnderlyingInstrument_129.insert(UnderlyingCreditRating_129.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_129("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrency_129.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_129;
    UnderlyingCurrentValue_129.setString("15707441");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrentValue_129.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_129;
    UnderlyingDetachmentPoint_129.setString("82.200000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingDetachmentPoint_129.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_129;
    UnderlyingDirtyPrice_129.setString("8659096");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingDirtyPrice_129.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_129;
    UnderlyingEndPrice_129.setString("949676");
    noUnderlyings_0_1.set(UnderlyingEndPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingEndPrice_129.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_129;
    UnderlyingEndValue_129.setString("2955936");
    noUnderlyings_0_1.set(UnderlyingEndValue_129);
    UnderlyingInstrument_129.insert(UnderlyingEndValue_129.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_129(202529030);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_129);
    UnderlyingInstrument_129.insert(UnderlyingExerciseStyle_129.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_129;
    UnderlyingFXRate_129.setString("2833723");
    noUnderlyings_0_1.set(UnderlyingFXRate_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRate_129.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_129('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRateCalc_129.getString());
    FIX::UnderlyingFactor UnderlyingFactor_129;
    UnderlyingFactor_129.setString("10768724");
    noUnderlyings_0_1.set(UnderlyingFactor_129);
    UnderlyingInstrument_129.insert(UnderlyingFactor_129.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_129(33841373);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_129);
    UnderlyingInstrument_129.insert(UnderlyingFlowScheduleType_129.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_129("STRING_421222820");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_129);
    UnderlyingInstrument_129.insert(UnderlyingInstrRegistry_129.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_129("LOCALMKTDATE_1728355868");
    noUnderlyings_0_1.set(UnderlyingIssueDate_129);
    UnderlyingInstrument_129.insert(UnderlyingIssueDate_129.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_129("STRING_1904434276");
    noUnderlyings_0_1.set(UnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(UnderlyingIssuer_129.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_129("STRING_191328870");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingLocaleOfIssue_129.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_129("LOCALMKTDATE_1565974265");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityDate_129.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_129("MONTHYEAR_316344527");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityMonthYear_129.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_129("TZTIMEONLY_1082106123");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityTime_129.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_129;
    UnderlyingNotionalPercentageOutstanding_129.setString("12.140000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_129('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_129);
    UnderlyingInstrument_129.insert(UnderlyingOptAttribute_129.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_129;
    UnderlyingOriginalNotionalPercentageOutstanding_129.setString("47.820000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingOriginalNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_129("STRING_1674866828");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasure_129.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_129;
    UnderlyingPriceUnitOfMeasureQty_129.setString("21145535");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasureQty_129.getString());
    FIX::UnderlyingProduct UnderlyingProduct_129(1665139826);
    noUnderlyings_0_1.set(UnderlyingProduct_129);
    UnderlyingInstrument_129.insert(UnderlyingProduct_129.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_129(1644139018);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_129);
    UnderlyingInstrument_129.insert(UnderlyingPutOrCall_129.getString());
    FIX::UnderlyingPx UnderlyingPx_129;
    UnderlyingPx_129.setString("19193795");
    noUnderlyings_0_1.set(UnderlyingPx_129);
    UnderlyingInstrument_129.insert(UnderlyingPx_129.getString());
    FIX::UnderlyingQty UnderlyingQty_129;
    UnderlyingQty_129.setString("9462241");
    noUnderlyings_0_1.set(UnderlyingQty_129);
    UnderlyingInstrument_129.insert(UnderlyingQty_129.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_129("LOCALMKTDATE_1771857717");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_129);
    UnderlyingInstrument_129.insert(UnderlyingRedemptionDate_129.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_129("STRING_576094740");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingRepoCollateralSecurityType_129.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_129;
    UnderlyingRepurchaseRate_129.setString("47.630000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseRate_129.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_129(1853960967);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseTerm_129.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_129("STRING_1392670994");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_129);
    UnderlyingInstrument_129.insert(UnderlyingRestructuringType_129.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_129("STRING_399985267");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityDesc_129.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_129("EXCHANGE_166205539");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityExchange_129.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_129("STRING_111097013");
    noUnderlyings_0_1.set(UnderlyingSecurityID_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityID_129.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_129("STRING_494952959");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityIDSource_129.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_129("STRING_461799223");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecuritySubType_129.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_129("STRING_313626043");
    noUnderlyings_0_1.set(UnderlyingSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityType_129.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_129("STRING_778325342");
    noUnderlyings_0_1.set(UnderlyingSeniority_129);
    UnderlyingInstrument_129.insert(UnderlyingSeniority_129.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_129("STRING_6287986");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlMethod_129.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_129(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlementType_129.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_129;
    UnderlyingStartValue_129.setString("8121667");
    noUnderlyings_0_1.set(UnderlyingStartValue_129);
    UnderlyingInstrument_129.insert(UnderlyingStartValue_129.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_129("STRING_427510807");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingStateOrProvinceOfIssue_129.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_129("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikeCurrency_129.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_129;
    UnderlyingStrikePrice_129.setString("6188396");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikePrice_129.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_129("STRING_389861329");
    noUnderlyings_0_1.set(UnderlyingSymbol_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbol_129.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_129("STRING_885461870");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbolSfx_129.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_129("STRING_1700945800");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingTimeUnit_129.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_129("STRING_1052552544");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasure_129.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_129;
    UnderlyingUnitOfMeasureQty_129.setString("19237099");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasureQty_129.getString());
    all_values.push_back(UnderlyingInstrument_129);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_258("STRING_579935724");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltID_258.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_258("STRING_1890779892");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltIDSource_258.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_259("STRING_1836456760");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_259);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltID_259.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_259("STRING_76591094");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_259);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltIDSource_259.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_260("STRING_1662675772");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_260);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltID_260.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_260("STRING_635197229");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_260);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltIDSource_260.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      FIX::UnderlyingStipType UnderlyingStipType_246("STRING_91286865");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipType_246.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_246("STRING_1611921992");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipValue_246.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_264("STRING_1483957859");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyID_264.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_264('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyIDSource_264.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_264(1721131671);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyRole_264.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_493("STRING_359376570");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubID_493.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_493(35447246);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubIDType_493.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_494("STRING_1908680915");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubID_494.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_494(1137701912);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubIDType_494.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_265("STRING_41735232");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyID_265.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_265('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyIDSource_265.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_265(1949868628);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyRole_265.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_495("STRING_2123066471");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubID_495.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_495(371502323);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubIDType_495.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_496("STRING_1088085716");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubID_496.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_496(365444153);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubIDType_496.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_130;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_130("DATA_1256964194");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingIssuer_130.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_130(641547868);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingIssuerLen_130.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_130("DATA_1417996697");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDesc_130.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_130(1033190527);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDescLen_130.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_130;
    UnderlyingAdjustedQuantity_130.setString("8128648");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_130);
    UnderlyingInstrument_130.insert(UnderlyingAdjustedQuantity_130.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_130;
    UnderlyingAllocationPercent_130.setString("24.210000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_130);
    UnderlyingInstrument_130.insert(UnderlyingAllocationPercent_130.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_130;
    UnderlyingAttachmentPoint_130.setString("67.720000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_130);
    UnderlyingInstrument_130.insert(UnderlyingAttachmentPoint_130.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_130("STRING_501837915");
    noUnderlyings_0_2.set(UnderlyingCFICode_130);
    UnderlyingInstrument_130.insert(UnderlyingCFICode_130.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_130("STRING_2074523515");
    noUnderlyings_0_2.set(UnderlyingCPProgram_130);
    UnderlyingInstrument_130.insert(UnderlyingCPProgram_130.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_130("STRING_291678896");
    noUnderlyings_0_2.set(UnderlyingCPRegType_130);
    UnderlyingInstrument_130.insert(UnderlyingCPRegType_130.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_130;
    UnderlyingCapValue_130.setString("11370351");
    noUnderlyings_0_2.set(UnderlyingCapValue_130);
    UnderlyingInstrument_130.insert(UnderlyingCapValue_130.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_130;
    UnderlyingCashAmount_130.setString("17754886");
    noUnderlyings_0_2.set(UnderlyingCashAmount_130);
    UnderlyingInstrument_130.insert(UnderlyingCashAmount_130.getString());
    FIX::UnderlyingCashType UnderlyingCashType_130("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_130);
    UnderlyingInstrument_130.insert(UnderlyingCashType_130.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_130;
    UnderlyingContractMultiplier_130.setString("6014734");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_130);
    UnderlyingInstrument_130.insert(UnderlyingContractMultiplier_130.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_130(1182931163);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_130);
    UnderlyingInstrument_130.insert(UnderlyingContractMultiplierUnit_130.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_130("COUNTRY_1866923620");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingCountryOfIssue_130.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_130("LOCALMKTDATE_465897099");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_130);
    UnderlyingInstrument_130.insert(UnderlyingCouponPaymentDate_130.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_130;
    UnderlyingCouponRate_130.setString("91.860000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_130);
    UnderlyingInstrument_130.insert(UnderlyingCouponRate_130.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_130("STRING_1314494844");
    noUnderlyings_0_2.set(UnderlyingCreditRating_130);
    UnderlyingInstrument_130.insert(UnderlyingCreditRating_130.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_130("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_130);
    UnderlyingInstrument_130.insert(UnderlyingCurrency_130.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_130;
    UnderlyingCurrentValue_130.setString("10756921");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_130);
    UnderlyingInstrument_130.insert(UnderlyingCurrentValue_130.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_130;
    UnderlyingDetachmentPoint_130.setString("55.820000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_130);
    UnderlyingInstrument_130.insert(UnderlyingDetachmentPoint_130.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_130;
    UnderlyingDirtyPrice_130.setString("8337616");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_130);
    UnderlyingInstrument_130.insert(UnderlyingDirtyPrice_130.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_130;
    UnderlyingEndPrice_130.setString("799042");
    noUnderlyings_0_2.set(UnderlyingEndPrice_130);
    UnderlyingInstrument_130.insert(UnderlyingEndPrice_130.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_130;
    UnderlyingEndValue_130.setString("17653605");
    noUnderlyings_0_2.set(UnderlyingEndValue_130);
    UnderlyingInstrument_130.insert(UnderlyingEndValue_130.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_130(1303007704);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_130);
    UnderlyingInstrument_130.insert(UnderlyingExerciseStyle_130.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_130;
    UnderlyingFXRate_130.setString("554870");
    noUnderlyings_0_2.set(UnderlyingFXRate_130);
    UnderlyingInstrument_130.insert(UnderlyingFXRate_130.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_130('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_130);
    UnderlyingInstrument_130.insert(UnderlyingFXRateCalc_130.getString());
    FIX::UnderlyingFactor UnderlyingFactor_130;
    UnderlyingFactor_130.setString("2436097");
    noUnderlyings_0_2.set(UnderlyingFactor_130);
    UnderlyingInstrument_130.insert(UnderlyingFactor_130.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_130(420931199);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_130);
    UnderlyingInstrument_130.insert(UnderlyingFlowScheduleType_130.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_130("STRING_1246343432");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_130);
    UnderlyingInstrument_130.insert(UnderlyingInstrRegistry_130.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_130("LOCALMKTDATE_885157641");
    noUnderlyings_0_2.set(UnderlyingIssueDate_130);
    UnderlyingInstrument_130.insert(UnderlyingIssueDate_130.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_130("STRING_1838927896");
    noUnderlyings_0_2.set(UnderlyingIssuer_130);
    UnderlyingInstrument_130.insert(UnderlyingIssuer_130.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_130("STRING_132050311");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingLocaleOfIssue_130.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_130("LOCALMKTDATE_1698022443");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityDate_130.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_130("MONTHYEAR_1689376669");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityMonthYear_130.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_130("TZTIMEONLY_908537083");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityTime_130.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_130;
    UnderlyingNotionalPercentageOutstanding_130.setString("67.100000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_130);
    UnderlyingInstrument_130.insert(UnderlyingNotionalPercentageOutstanding_130.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_130('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_130);
    UnderlyingInstrument_130.insert(UnderlyingOptAttribute_130.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_130;
    UnderlyingOriginalNotionalPercentageOutstanding_130.setString("59.800000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_130);
    UnderlyingInstrument_130.insert(UnderlyingOriginalNotionalPercentageOutstanding_130.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_130("STRING_1189411854");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_130);
    UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasure_130.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_130;
    UnderlyingPriceUnitOfMeasureQty_130.setString("12444215");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_130);
    UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasureQty_130.getString());
    FIX::UnderlyingProduct UnderlyingProduct_130(1583181741);
    noUnderlyings_0_2.set(UnderlyingProduct_130);
    UnderlyingInstrument_130.insert(UnderlyingProduct_130.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_130(1790885342);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_130);
    UnderlyingInstrument_130.insert(UnderlyingPutOrCall_130.getString());
    FIX::UnderlyingPx UnderlyingPx_130;
    UnderlyingPx_130.setString("2798690");
    noUnderlyings_0_2.set(UnderlyingPx_130);
    UnderlyingInstrument_130.insert(UnderlyingPx_130.getString());
    FIX::UnderlyingQty UnderlyingQty_130;
    UnderlyingQty_130.setString("13026217");
    noUnderlyings_0_2.set(UnderlyingQty_130);
    UnderlyingInstrument_130.insert(UnderlyingQty_130.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_130("LOCALMKTDATE_109298794");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_130);
    UnderlyingInstrument_130.insert(UnderlyingRedemptionDate_130.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_130("STRING_1036448269");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_130);
    UnderlyingInstrument_130.insert(UnderlyingRepoCollateralSecurityType_130.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_130;
    UnderlyingRepurchaseRate_130.setString("29.100000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_130);
    UnderlyingInstrument_130.insert(UnderlyingRepurchaseRate_130.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_130(934572464);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_130);
    UnderlyingInstrument_130.insert(UnderlyingRepurchaseTerm_130.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_130("STRING_1828474701");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_130);
    UnderlyingInstrument_130.insert(UnderlyingRestructuringType_130.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_130("STRING_1545325022");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityDesc_130.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_130("EXCHANGE_750064398");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityExchange_130.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_130("STRING_514752717");
    noUnderlyings_0_2.set(UnderlyingSecurityID_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityID_130.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_130("STRING_1625229244");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityIDSource_130.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_130("STRING_367941313");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_130);
    UnderlyingInstrument_130.insert(UnderlyingSecuritySubType_130.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_130("STRING_1817760421");
    noUnderlyings_0_2.set(UnderlyingSecurityType_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityType_130.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_130("STRING_1680716290");
    noUnderlyings_0_2.set(UnderlyingSeniority_130);
    UnderlyingInstrument_130.insert(UnderlyingSeniority_130.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_130("STRING_357320551");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_130);
    UnderlyingInstrument_130.insert(UnderlyingSettlMethod_130.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_130(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_130);
    UnderlyingInstrument_130.insert(UnderlyingSettlementType_130.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_130;
    UnderlyingStartValue_130.setString("21016474");
    noUnderlyings_0_2.set(UnderlyingStartValue_130);
    UnderlyingInstrument_130.insert(UnderlyingStartValue_130.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_130("STRING_1603663983");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingStateOrProvinceOfIssue_130.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_130("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_130);
    UnderlyingInstrument_130.insert(UnderlyingStrikeCurrency_130.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_130;
    UnderlyingStrikePrice_130.setString("17357142");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_130);
    UnderlyingInstrument_130.insert(UnderlyingStrikePrice_130.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_130("STRING_349582982");
    noUnderlyings_0_2.set(UnderlyingSymbol_130);
    UnderlyingInstrument_130.insert(UnderlyingSymbol_130.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_130("STRING_1334984758");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_130);
    UnderlyingInstrument_130.insert(UnderlyingSymbolSfx_130.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_130("STRING_496767730");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_130);
    UnderlyingInstrument_130.insert(UnderlyingTimeUnit_130.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_130("STRING_401959693");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_130);
    UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasure_130.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_130;
    UnderlyingUnitOfMeasureQty_130.setString("8039176");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_130);
    UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasureQty_130.getString());
    all_values.push_back(UnderlyingInstrument_130);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_261("STRING_1591371547");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_261);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltID_261.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_261("STRING_2048339215");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_261);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltIDSource_261.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_262("STRING_1132681803");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltID_262.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_262("STRING_1234773242");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltIDSource_262.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_263("STRING_180724650");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltID_263.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_263("STRING_287819869");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltIDSource_263.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
      FIX::UnderlyingStipType UnderlyingStipType_247("STRING_1217172919");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipType_247.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_247("STRING_757452780");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipValue_247.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_266("STRING_898163972");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyID_266.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_266('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyIDSource_266.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_266(881225250);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyRole_266.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_497("STRING_1780523398");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubID_497.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_497(1249166563);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubIDType_497.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_498("STRING_1083193463");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubID_498.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_498(1313756041);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubIDType_498.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_499("STRING_1606487114");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubID_499.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_499(997080009);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubIDType_499.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
