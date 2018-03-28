#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralInquiry.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiry, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralInquiry msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralInquiry_0;
  FIX::Account Account_5("STRING_1854182776");
  msg.set(Account_5);
  CollateralInquiry_0.insert(Account_5.getString());
  FIX::AccountType AccountType_2(1);
  msg.set(AccountType_2);
  CollateralInquiry_0.insert(AccountType_2.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("1736001");
  msg.set(AccruedInterestAmt_4);
  CollateralInquiry_0.insert(AccruedInterestAmt_4.getString());
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("7642708");
  msg.set(CashOutstanding_1);
  CollateralInquiry_0.insert(CashOutstanding_1.getString());
  FIX::ClOrdID ClOrdID_7("STRING_1444204844");
  msg.set(ClOrdID_7);
  CollateralInquiry_0.insert(ClOrdID_7.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_7("LOCALMKTDATE_1979246940");
  msg.set(ClearingBusinessDate_7);
  CollateralInquiry_0.insert(ClearingBusinessDate_7.getString());
  FIX::CollInquiryID CollInquiryID_0("STRING_1608157037");
  msg.set(CollInquiryID_0);
  CollateralInquiry_0.insert(CollInquiryID_0.getString());
  FIX::Currency Currency_7("CHF");
  msg.set(Currency_7);
  CollateralInquiry_0.insert(Currency_7.getString());
  FIX::EncodedText EncodedText_16("DATA_1731231795");
  msg.set(EncodedText_16);
  CollateralInquiry_0.insert(EncodedText_16.getString());
  FIX::EncodedTextLen EncodedTextLen_16(591752030);
  msg.set(EncodedTextLen_16);
  CollateralInquiry_0.insert(EncodedTextLen_16.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("7355862");
  msg.set(EndAccruedInterestAmt_4);
  CollateralInquiry_0.insert(EndAccruedInterestAmt_4.getString());
  FIX::EndCash EndCash_4;
  EndCash_4.setString("12369902");
  msg.set(EndCash_4);
  CollateralInquiry_0.insert(EndCash_4.getString());
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("14364771");
  msg.set(MarginExcess_1);
  CollateralInquiry_0.insert(MarginExcess_1.getString());
  FIX::OrderID OrderID_7("STRING_1425367874");
  msg.set(OrderID_7);
  CollateralInquiry_0.insert(OrderID_7.getString());
  FIX::Price Price_5;
  Price_5.setString("2995788");
  msg.set(Price_5);
  CollateralInquiry_0.insert(Price_5.getString());
  FIX::PriceType PriceType_7(11);
  msg.set(PriceType_7);
  CollateralInquiry_0.insert(PriceType_7.getString());
  FIX::QtyType QtyType_5(1);
  msg.set(QtyType_5);
  CollateralInquiry_0.insert(QtyType_5.getString());
  FIX::Quantity Quantity_6;
  Quantity_6.setString("12092598");
  msg.set(Quantity_6);
  CollateralInquiry_0.insert(Quantity_6.getString());
  FIX::ResponseDestination ResponseDestination_0("STRING_241280762");
  msg.set(ResponseDestination_0);
  CollateralInquiry_0.insert(ResponseDestination_0.getString());
  FIX::ResponseTransportType ResponseTransportType_0(0);
  msg.set(ResponseTransportType_0);
  CollateralInquiry_0.insert(ResponseTransportType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_7("STRING_1247965924");
  msg.set(SecondaryClOrdID_7);
  CollateralInquiry_0.insert(SecondaryClOrdID_7.getString());
  FIX::SecondaryOrderID SecondaryOrderID_7("STRING_1413145191");
  msg.set(SecondaryOrderID_7);
  CollateralInquiry_0.insert(SecondaryOrderID_7.getString());
  FIX::SettlDate SettlDate_10("LOCALMKTDATE_945467655");
  msg.set(SettlDate_10);
  CollateralInquiry_0.insert(SettlDate_10.getString());
  FIX::SettlSessID SettlSessID_3("STRING_EOD");
  msg.set(SettlSessID_3);
  CollateralInquiry_0.insert(SettlSessID_3.getString());
  FIX::SettlSessSubID SettlSessSubID_2("STRING_1149561961");
  msg.set(SettlSessSubID_2);
  CollateralInquiry_0.insert(SettlSessSubID_2.getString());
  FIX::Side Side_10('4');
  msg.set(Side_10);
  CollateralInquiry_0.insert(Side_10.getString());
  FIX::StartCash StartCash_4;
  StartCash_4.setString("7613277");
  msg.set(StartCash_4);
  CollateralInquiry_0.insert(StartCash_4.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_0('1');
  msg.set(SubscriptionRequestType_0);
  CollateralInquiry_0.insert(SubscriptionRequestType_0.getString());
  FIX::Text Text_16("STRING_2058269491");
  msg.set(Text_16);
  CollateralInquiry_0.insert(Text_16.getString());
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("11310719");
  msg.set(TotalNetValue_1);
  CollateralInquiry_0.insert(TotalNetValue_1.getString());
  FIX::TradingSessionID TradingSessionID_11("STRING_6");
  msg.set(TradingSessionID_11);
  CollateralInquiry_0.insert(TradingSessionID_11.getString());
  FIX::TradingSessionSubID TradingSessionSubID_11("STRING_4");
  msg.set(TradingSessionSubID_11);
  CollateralInquiry_0.insert(TradingSessionSubID_11.getString());
  all_values.push_back(CollateralInquiry_0);

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_0;
    FIX::CollInquiryQualifier CollInquiryQualifier_0(1);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_0);
    CollInqQualGrp_NoCollInquiryQualifier_0.insert(CollInquiryQualifier_0.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_0);

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    FIX::CollInquiryQualifier CollInquiryQualifier_1(2);
    noCollInquiryQualifier_0_1.set(CollInquiryQualifier_1);
    CollInqQualGrp_NoCollInquiryQualifier_1.insert(CollInquiryQualifier_1.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_2;
    FIX::CollInquiryQualifier CollInquiryQualifier_2(5);
    noCollInquiryQualifier_0_2.set(CollInquiryQualifier_2);
    CollInqQualGrp_NoCollInquiryQualifier_2.insert(CollInquiryQualifier_2.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_2);

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    FIX::ExecID ExecID_9("STRING_1566228440");
    noExecs_0_0.set(ExecID_9);
    ExecCollGrp_NoExecs_2.insert(ExecID_9.getString());
    all_values.push_back(ExecCollGrp_NoExecs_2);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  FIX::AgreementCurrency AgreementCurrency_4("CHF");
  msg.set(AgreementCurrency_4);
  FinancingDetails_4.insert(AgreementCurrency_4.getString());
  FIX::AgreementDate AgreementDate_4("LOCALMKTDATE_10496822");
  msg.set(AgreementDate_4);
  FinancingDetails_4.insert(AgreementDate_4.getString());
  FIX::AgreementDesc AgreementDesc_4("STRING_154524994");
  msg.set(AgreementDesc_4);
  FinancingDetails_4.insert(AgreementDesc_4.getString());
  FIX::AgreementID AgreementID_4("STRING_883348227");
  msg.set(AgreementID_4);
  FinancingDetails_4.insert(AgreementID_4.getString());
  FIX::DeliveryType DeliveryType_4(1);
  msg.set(DeliveryType_4);
  FinancingDetails_4.insert(DeliveryType_4.getString());
  FIX::EndDate EndDate_4("LOCALMKTDATE_1579892868");
  msg.set(EndDate_4);
  FinancingDetails_4.insert(EndDate_4.getString());
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("71.090000");
  msg.set(MarginRatio_4);
  FinancingDetails_4.insert(MarginRatio_4.getString());
  FIX::StartDate StartDate_4("LOCALMKTDATE_1577731439");
  msg.set(StartDate_4);
  FinancingDetails_4.insert(StartDate_4.getString());
  FIX::TerminationType TerminationType_4(3);
  msg.set(TerminationType_4);
  FinancingDetails_4.insert(TerminationType_4.getString());
  all_values.push_back(FinancingDetails_4);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_11;
    FIX::EncodedLegIssuer EncodedLegIssuer_11("DATA_1819012201");
    noLegs_0_0.set(EncodedLegIssuer_11);
    InstrumentLeg_11.insert(EncodedLegIssuer_11.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_11(291142530);
    noLegs_0_0.set(EncodedLegIssuerLen_11);
    InstrumentLeg_11.insert(EncodedLegIssuerLen_11.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_11("DATA_1492669192");
    noLegs_0_0.set(EncodedLegSecurityDesc_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDesc_11.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_11(1084673744);
    noLegs_0_0.set(EncodedLegSecurityDescLen_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDescLen_11.getString());
    FIX::LegCFICode LegCFICode_11("STRING_1236610186");
    noLegs_0_0.set(LegCFICode_11);
    InstrumentLeg_11.insert(LegCFICode_11.getString());
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("13639706");
    noLegs_0_0.set(LegContractMultiplier_11);
    InstrumentLeg_11.insert(LegContractMultiplier_11.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_11(86752057);
    noLegs_0_0.set(LegContractMultiplierUnit_11);
    InstrumentLeg_11.insert(LegContractMultiplierUnit_11.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_11("MONTHYEAR_724856429");
    noLegs_0_0.set(LegContractSettlMonth_11);
    InstrumentLeg_11.insert(LegContractSettlMonth_11.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_11("COUNTRY_2125298403");
    noLegs_0_0.set(LegCountryOfIssue_11);
    InstrumentLeg_11.insert(LegCountryOfIssue_11.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_11("LOCALMKTDATE_217718511");
    noLegs_0_0.set(LegCouponPaymentDate_11);
    InstrumentLeg_11.insert(LegCouponPaymentDate_11.getString());
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("22.720000");
    noLegs_0_0.set(LegCouponRate_11);
    InstrumentLeg_11.insert(LegCouponRate_11.getString());
    FIX::LegCreditRating LegCreditRating_11("STRING_1108886754");
    noLegs_0_0.set(LegCreditRating_11);
    InstrumentLeg_11.insert(LegCreditRating_11.getString());
    FIX::LegCurrency LegCurrency_11("GBP");
    noLegs_0_0.set(LegCurrency_11);
    InstrumentLeg_11.insert(LegCurrency_11.getString());
    FIX::LegDatedDate LegDatedDate_11("LOCALMKTDATE_266075259");
    noLegs_0_0.set(LegDatedDate_11);
    InstrumentLeg_11.insert(LegDatedDate_11.getString());
    FIX::LegExerciseStyle LegExerciseStyle_11(657320565);
    noLegs_0_0.set(LegExerciseStyle_11);
    InstrumentLeg_11.insert(LegExerciseStyle_11.getString());
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("13053731");
    noLegs_0_0.set(LegFactor_11);
    InstrumentLeg_11.insert(LegFactor_11.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_11(1402510705);
    noLegs_0_0.set(LegFlowScheduleType_11);
    InstrumentLeg_11.insert(LegFlowScheduleType_11.getString());
    FIX::LegInstrRegistry LegInstrRegistry_11("STRING_719930428");
    noLegs_0_0.set(LegInstrRegistry_11);
    InstrumentLeg_11.insert(LegInstrRegistry_11.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_11("LOCALMKTDATE_724117904");
    noLegs_0_0.set(LegInterestAccrualDate_11);
    InstrumentLeg_11.insert(LegInterestAccrualDate_11.getString());
    FIX::LegIssueDate LegIssueDate_11("LOCALMKTDATE_821449445");
    noLegs_0_0.set(LegIssueDate_11);
    InstrumentLeg_11.insert(LegIssueDate_11.getString());
    FIX::LegIssuer LegIssuer_11("STRING_366288437");
    noLegs_0_0.set(LegIssuer_11);
    InstrumentLeg_11.insert(LegIssuer_11.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_11("STRING_734614727");
    noLegs_0_0.set(LegLocaleOfIssue_11);
    InstrumentLeg_11.insert(LegLocaleOfIssue_11.getString());
    FIX::LegMaturityDate LegMaturityDate_11("LOCALMKTDATE_975974440");
    noLegs_0_0.set(LegMaturityDate_11);
    InstrumentLeg_11.insert(LegMaturityDate_11.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_11("MONTHYEAR_1249636665");
    noLegs_0_0.set(LegMaturityMonthYear_11);
    InstrumentLeg_11.insert(LegMaturityMonthYear_11.getString());
    FIX::LegMaturityTime LegMaturityTime_11("TZTIMEONLY_34105036");
    noLegs_0_0.set(LegMaturityTime_11);
    InstrumentLeg_11.insert(LegMaturityTime_11.getString());
    FIX::LegOptAttribute LegOptAttribute_11('4');
    noLegs_0_0.set(LegOptAttribute_11);
    InstrumentLeg_11.insert(LegOptAttribute_11.getString());
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("2850801");
    noLegs_0_0.set(LegOptionRatio_11);
    InstrumentLeg_11.insert(LegOptionRatio_11.getString());
    FIX::LegPool LegPool_11("STRING_1611836475");
    noLegs_0_0.set(LegPool_11);
    InstrumentLeg_11.insert(LegPool_11.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_11("STRING_1837057298");
    noLegs_0_0.set(LegPriceUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasure_11.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("5297833");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasureQty_11.getString());
    FIX::LegProduct LegProduct_11(1283365028);
    noLegs_0_0.set(LegProduct_11);
    InstrumentLeg_11.insert(LegProduct_11.getString());
    FIX::LegPutOrCall LegPutOrCall_11(2128199829);
    noLegs_0_0.set(LegPutOrCall_11);
    InstrumentLeg_11.insert(LegPutOrCall_11.getString());
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("20224525");
    noLegs_0_0.set(LegRatioQty_11);
    InstrumentLeg_11.insert(LegRatioQty_11.getString());
    FIX::LegRedemptionDate LegRedemptionDate_11("LOCALMKTDATE_220555125");
    noLegs_0_0.set(LegRedemptionDate_11);
    InstrumentLeg_11.insert(LegRedemptionDate_11.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_11("STRING_1217326367");
    noLegs_0_0.set(LegRepoCollateralSecurityType_11);
    InstrumentLeg_11.insert(LegRepoCollateralSecurityType_11.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("95.790000");
    noLegs_0_0.set(LegRepurchaseRate_11);
    InstrumentLeg_11.insert(LegRepurchaseRate_11.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_11(307307182);
    noLegs_0_0.set(LegRepurchaseTerm_11);
    InstrumentLeg_11.insert(LegRepurchaseTerm_11.getString());
    FIX::LegSecurityDesc LegSecurityDesc_11("STRING_1942182796");
    noLegs_0_0.set(LegSecurityDesc_11);
    InstrumentLeg_11.insert(LegSecurityDesc_11.getString());
    FIX::LegSecurityExchange LegSecurityExchange_11("EXCHANGE_1216754334");
    noLegs_0_0.set(LegSecurityExchange_11);
    InstrumentLeg_11.insert(LegSecurityExchange_11.getString());
    FIX::LegSecurityID LegSecurityID_11("STRING_525025693");
    noLegs_0_0.set(LegSecurityID_11);
    InstrumentLeg_11.insert(LegSecurityID_11.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_11("STRING_430341420");
    noLegs_0_0.set(LegSecurityIDSource_11);
    InstrumentLeg_11.insert(LegSecurityIDSource_11.getString());
    FIX::LegSecuritySubType LegSecuritySubType_11("STRING_178157440");
    noLegs_0_0.set(LegSecuritySubType_11);
    InstrumentLeg_11.insert(LegSecuritySubType_11.getString());
    FIX::LegSecurityType LegSecurityType_11("STRING_580409786");
    noLegs_0_0.set(LegSecurityType_11);
    InstrumentLeg_11.insert(LegSecurityType_11.getString());
    FIX::LegSide LegSide_11('6');
    noLegs_0_0.set(LegSide_11);
    InstrumentLeg_11.insert(LegSide_11.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_11("STRING_444232699");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_11);
    InstrumentLeg_11.insert(LegStateOrProvinceOfIssue_11.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_11("JPY");
    noLegs_0_0.set(LegStrikeCurrency_11);
    InstrumentLeg_11.insert(LegStrikeCurrency_11.getString());
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("18467434");
    noLegs_0_0.set(LegStrikePrice_11);
    InstrumentLeg_11.insert(LegStrikePrice_11.getString());
    FIX::LegSymbol LegSymbol_11("STRING_1957660779");
    noLegs_0_0.set(LegSymbol_11);
    InstrumentLeg_11.insert(LegSymbol_11.getString());
    FIX::LegSymbolSfx LegSymbolSfx_11("STRING_560754059");
    noLegs_0_0.set(LegSymbolSfx_11);
    InstrumentLeg_11.insert(LegSymbolSfx_11.getString());
    FIX::LegTimeUnit LegTimeUnit_11("STRING_520709202");
    noLegs_0_0.set(LegTimeUnit_11);
    InstrumentLeg_11.insert(LegTimeUnit_11.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_11("STRING_176465569");
    noLegs_0_0.set(LegUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegUnitOfMeasure_11.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("12953687");
    noLegs_0_0.set(LegUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegUnitOfMeasureQty_11.getString());
    all_values.push_back(InstrumentLeg_11);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      FIX::LegSecurityAltID LegSecurityAltID_24("STRING_1426102234");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltID_24.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_24("STRING_1329473822");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltIDSource_24.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      FIX::LegSecurityAltID LegSecurityAltID_25("STRING_1905067302");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltID_25.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_25("STRING_1711182360");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltIDSource_25.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("66.490000");
  msg.set(AttachmentPoint_8);
  Instrument_8.insert(AttachmentPoint_8.getString());
  FIX::CFICode CFICode_8("STRING_1594640953");
  msg.set(CFICode_8);
  Instrument_8.insert(CFICode_8.getString());
  FIX::CPProgram CPProgram_8(2);
  msg.set(CPProgram_8);
  Instrument_8.insert(CPProgram_8.getString());
  FIX::CPRegType CPRegType_8("STRING_2077191677");
  msg.set(CPRegType_8);
  Instrument_8.insert(CPRegType_8.getString());
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("15753571");
  msg.set(CapPrice_8);
  Instrument_8.insert(CapPrice_8.getString());
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("21159346");
  msg.set(ContractMultiplier_8);
  Instrument_8.insert(ContractMultiplier_8.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_8(0);
  msg.set(ContractMultiplierUnit_8);
  Instrument_8.insert(ContractMultiplierUnit_8.getString());
  FIX::ContractSettlMonth ContractSettlMonth_8("MONTHYEAR_645199853");
  msg.set(ContractSettlMonth_8);
  Instrument_8.insert(ContractSettlMonth_8.getString());
  FIX::CountryOfIssue CountryOfIssue_8("COUNTRY_1207390626");
  msg.set(CountryOfIssue_8);
  Instrument_8.insert(CountryOfIssue_8.getString());
  FIX::CouponPaymentDate CouponPaymentDate_8("LOCALMKTDATE_457570337");
  msg.set(CouponPaymentDate_8);
  Instrument_8.insert(CouponPaymentDate_8.getString());
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("90.010000");
  msg.set(CouponRate_8);
  Instrument_8.insert(CouponRate_8.getString());
  FIX::CreditRating CreditRating_8("STRING_276661312");
  msg.set(CreditRating_8);
  Instrument_8.insert(CreditRating_8.getString());
  FIX::DatedDate DatedDate_8("LOCALMKTDATE_982596030");
  msg.set(DatedDate_8);
  Instrument_8.insert(DatedDate_8.getString());
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("4.210000");
  msg.set(DetachmentPoint_8);
  Instrument_8.insert(DetachmentPoint_8.getString());
  FIX::EncodedIssuer EncodedIssuer_8("DATA_454818752");
  msg.set(EncodedIssuer_8);
  Instrument_8.insert(EncodedIssuer_8.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_8(1563005816);
  msg.set(EncodedIssuerLen_8);
  Instrument_8.insert(EncodedIssuerLen_8.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_8("DATA_1548987112");
  msg.set(EncodedSecurityDesc_8);
  Instrument_8.insert(EncodedSecurityDesc_8.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_8(899051451);
  msg.set(EncodedSecurityDescLen_8);
  Instrument_8.insert(EncodedSecurityDescLen_8.getString());
  FIX::ExerciseStyle ExerciseStyle_8(0);
  msg.set(ExerciseStyle_8);
  Instrument_8.insert(ExerciseStyle_8.getString());
  FIX::Factor Factor_8;
  Factor_8.setString("13856232");
  msg.set(Factor_8);
  Instrument_8.insert(Factor_8.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_8(true);
  msg.set(FlexProductEligibilityIndicator_8);
  Instrument_8.insert(FlexProductEligibilityIndicator_8.getString());
  FIX::FlexibleIndicator FlexibleIndicator_8(false);
  msg.set(FlexibleIndicator_8);
  Instrument_8.insert(FlexibleIndicator_8.getString());
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("19463773");
  msg.set(FloorPrice_8);
  Instrument_8.insert(FloorPrice_8.getString());
  FIX::FlowScheduleType FlowScheduleType_8(0);
  msg.set(FlowScheduleType_8);
  Instrument_8.insert(FlowScheduleType_8.getString());
  FIX::InstrRegistry InstrRegistry_8("STRING_639895220");
  msg.set(InstrRegistry_8);
  Instrument_8.insert(InstrRegistry_8.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_8('1');
  msg.set(InstrmtAssignmentMethod_8);
  Instrument_8.insert(InstrmtAssignmentMethod_8.getString());
  FIX::InterestAccrualDate InterestAccrualDate_8("LOCALMKTDATE_468220404");
  msg.set(InterestAccrualDate_8);
  Instrument_8.insert(InterestAccrualDate_8.getString());
  FIX::IssueDate IssueDate_8("LOCALMKTDATE_2065997454");
  msg.set(IssueDate_8);
  Instrument_8.insert(IssueDate_8.getString());
  FIX::Issuer Issuer_8("STRING_276252637");
  msg.set(Issuer_8);
  Instrument_8.insert(Issuer_8.getString());
  FIX::ListMethod ListMethod_8(0);
  msg.set(ListMethod_8);
  Instrument_8.insert(ListMethod_8.getString());
  FIX::LocaleOfIssue LocaleOfIssue_8("STRING_1629696167");
  msg.set(LocaleOfIssue_8);
  Instrument_8.insert(LocaleOfIssue_8.getString());
  FIX::MaturityDate MaturityDate_8("LOCALMKTDATE_1070079286");
  msg.set(MaturityDate_8);
  Instrument_8.insert(MaturityDate_8.getString());
  FIX::MaturityMonthYear MaturityMonthYear_8("MONTHYEAR_1820445011");
  msg.set(MaturityMonthYear_8);
  Instrument_8.insert(MaturityMonthYear_8.getString());
  FIX::MaturityTime MaturityTime_8("TZTIMEONLY_1723178274");
  msg.set(MaturityTime_8);
  Instrument_8.insert(MaturityTime_8.getString());
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("9997873");
  msg.set(MinPriceIncrement_8);
  Instrument_8.insert(MinPriceIncrement_8.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("12483184");
  msg.set(MinPriceIncrementAmount_8);
  Instrument_8.insert(MinPriceIncrementAmount_8.getString());
  FIX::NTPositionLimit NTPositionLimit_8(1691629321);
  msg.set(NTPositionLimit_8);
  Instrument_8.insert(NTPositionLimit_8.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("4.700000");
  msg.set(NotionalPercentageOutstanding_8);
  Instrument_8.insert(NotionalPercentageOutstanding_8.getString());
  FIX::OptAttribute OptAttribute_8('1');
  msg.set(OptAttribute_8);
  Instrument_8.insert(OptAttribute_8.getString());
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("7515362");
  msg.set(OptPayoutAmount_8);
  Instrument_8.insert(OptPayoutAmount_8.getString());
  FIX::OptPayoutType OptPayoutType_8(2);
  msg.set(OptPayoutType_8);
  Instrument_8.insert(OptPayoutType_8.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("37.030000");
  msg.set(OriginalNotionalPercentageOutstanding_8);
  Instrument_8.insert(OriginalNotionalPercentageOutstanding_8.getString());
  FIX::Pool Pool_8("STRING_1028197611");
  msg.set(Pool_8);
  Instrument_8.insert(Pool_8.getString());
  FIX::PositionLimit PositionLimit_8(442733190);
  msg.set(PositionLimit_8);
  Instrument_8.insert(PositionLimit_8.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_8("STRING_INX");
  msg.set(PriceQuoteMethod_8);
  Instrument_8.insert(PriceQuoteMethod_8.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_8("STRING_1483016363");
  msg.set(PriceUnitOfMeasure_8);
  Instrument_8.insert(PriceUnitOfMeasure_8.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("20057390");
  msg.set(PriceUnitOfMeasureQty_8);
  Instrument_8.insert(PriceUnitOfMeasureQty_8.getString());
  FIX::Product Product_10(6);
  msg.set(Product_10);
  Instrument_8.insert(Product_10.getString());
  FIX::ProductComplex ProductComplex_8("STRING_234584167");
  msg.set(ProductComplex_8);
  Instrument_8.insert(ProductComplex_8.getString());
  FIX::PutOrCall PutOrCall_8(0);
  msg.set(PutOrCall_8);
  Instrument_8.insert(PutOrCall_8.getString());
  FIX::RedemptionDate RedemptionDate_8("LOCALMKTDATE_1843300855");
  msg.set(RedemptionDate_8);
  Instrument_8.insert(RedemptionDate_8.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_8("STRING_832895375");
  msg.set(RepoCollateralSecurityType_8);
  Instrument_8.insert(RepoCollateralSecurityType_8.getString());
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("75.300000");
  msg.set(RepurchaseRate_8);
  Instrument_8.insert(RepurchaseRate_8.getString());
  FIX::RepurchaseTerm RepurchaseTerm_8(1642194533);
  msg.set(RepurchaseTerm_8);
  Instrument_8.insert(RepurchaseTerm_8.getString());
  FIX::RestructuringType RestructuringType_8("STRING_MR");
  msg.set(RestructuringType_8);
  Instrument_8.insert(RestructuringType_8.getString());
  FIX::SecurityDesc SecurityDesc_8("STRING_1614832750");
  msg.set(SecurityDesc_8);
  Instrument_8.insert(SecurityDesc_8.getString());
  FIX::SecurityExchange SecurityExchange_8("EXCHANGE_588973348");
  msg.set(SecurityExchange_8);
  Instrument_8.insert(SecurityExchange_8.getString());
  FIX::SecurityGroup SecurityGroup_8("STRING_272652541");
  msg.set(SecurityGroup_8);
  Instrument_8.insert(SecurityGroup_8.getString());
  FIX::SecurityID SecurityID_8("STRING_1533346557");
  msg.set(SecurityID_8);
  Instrument_8.insert(SecurityID_8.getString());
  FIX::SecurityIDSource SecurityIDSource_8("STRING_L");
  msg.set(SecurityIDSource_8);
  Instrument_8.insert(SecurityIDSource_8.getString());
  FIX::SecurityStatus SecurityStatus_8("STRING_2");
  msg.set(SecurityStatus_8);
  Instrument_8.insert(SecurityStatus_8.getString());
  FIX::SecuritySubType SecuritySubType_8("STRING_1015559076");
  msg.set(SecuritySubType_8);
  Instrument_8.insert(SecuritySubType_8.getString());
  FIX::SecurityType SecurityType_10("STRING_YANK");
  msg.set(SecurityType_10);
  Instrument_8.insert(SecurityType_10.getString());
  FIX::Seniority Seniority_8("STRING_SD");
  msg.set(Seniority_8);
  Instrument_8.insert(Seniority_8.getString());
  FIX::SettlMethod SettlMethod_8('C');
  msg.set(SettlMethod_8);
  Instrument_8.insert(SettlMethod_8.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_8("STRING_787608940");
  msg.set(SettleOnOpenFlag_8);
  Instrument_8.insert(SettleOnOpenFlag_8.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_8("STRING_1419736460");
  msg.set(StateOrProvinceOfIssue_8);
  Instrument_8.insert(StateOrProvinceOfIssue_8.getString());
  FIX::StrikeCurrency StrikeCurrency_8("EUR");
  msg.set(StrikeCurrency_8);
  Instrument_8.insert(StrikeCurrency_8.getString());
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("11657711");
  msg.set(StrikeMultiplier_8);
  Instrument_8.insert(StrikeMultiplier_8.getString());
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("8869356");
  msg.set(StrikePrice_8);
  Instrument_8.insert(StrikePrice_8.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_8(1);
  msg.set(StrikePriceBoundaryMethod_8);
  Instrument_8.insert(StrikePriceBoundaryMethod_8.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("48.660000");
  msg.set(StrikePriceBoundaryPrecision_8);
  Instrument_8.insert(StrikePriceBoundaryPrecision_8.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_8(4);
  msg.set(StrikePriceDeterminationMethod_8);
  Instrument_8.insert(StrikePriceDeterminationMethod_8.getString());
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("18405297");
  msg.set(StrikeValue_8);
  Instrument_8.insert(StrikeValue_8.getString());
  FIX::Symbol Symbol_8("STRING_260395343");
  msg.set(Symbol_8);
  Instrument_8.insert(Symbol_8.getString());
  FIX::SymbolSfx SymbolSfx_8("STRING_CD");
  msg.set(SymbolSfx_8);
  Instrument_8.insert(SymbolSfx_8.getString());
  FIX::TimeUnit TimeUnit_8("STRING_D");
  msg.set(TimeUnit_8);
  Instrument_8.insert(TimeUnit_8.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_8(1);
  msg.set(UnderlyingPriceDeterminationMethod_8);
  Instrument_8.insert(UnderlyingPriceDeterminationMethod_8.getString());
  FIX::UnitOfMeasure UnitOfMeasure_8("STRING_Bcf");
  msg.set(UnitOfMeasure_8);
  Instrument_8.insert(UnitOfMeasure_8.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("628093");
  msg.set(UnitOfMeasureQty_8);
  Instrument_8.insert(UnitOfMeasureQty_8.getString());
  FIX::ValuationMethod ValuationMethod_8("STRING_EQTY");
  msg.set(ValuationMethod_8);
  Instrument_8.insert(ValuationMethod_8.getString());
  all_values.push_back(Instrument_8);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    FIX::ComplexEventCondition ComplexEventCondition_19(2);
    noComplexEvents_0_0.set(ComplexEventCondition_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventCondition_19.getString());
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("20560846");
    noComplexEvents_0_0.set(ComplexEventPrice_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPrice_19.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_19(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryMethod_19.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("59.820000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryPrecision_19.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_19(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceTimeType_19.getString());
    FIX::ComplexEventType ComplexEventType_19(2);
    noComplexEvents_0_0.set(ComplexEventType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventType_19.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("20384425");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexOptPayoutAmount_19.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_19);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      FIX::ComplexEventEndDate ComplexEventEndDate_42(FIX::UTCTIMESTAMP(23, 4, 37, 9, 9, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventEndDate_42.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_42(FIX::UTCTIMESTAMP(7, 12, 33, 22, 8, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventStartDate_42.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        FIX::ComplexEventEndTime ComplexEventEndTime_85(FIX::UTCTIMEONLY(18, 33, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventEndTime_85.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_85(FIX::UTCTIMEONLY(15, 7, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventStartTime_85.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        FIX::ComplexEventEndTime ComplexEventEndTime_86(FIX::UTCTIMEONLY(4, 46, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventEndTime_86.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_86(FIX::UTCTIMEONLY(20, 55, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventStartTime_86.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      FIX::ComplexEventEndDate ComplexEventEndDate_43(FIX::UTCTIMESTAMP(22, 13, 23, 12, 2, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventEndDate_43.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_43(FIX::UTCTIMESTAMP(21, 17, 34, 3, 1, 2006));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventStartDate_43.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        FIX::ComplexEventEndTime ComplexEventEndTime_87(FIX::UTCTIMEONLY(5, 15, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventEndTime_87.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_87(FIX::UTCTIMEONLY(18, 41, 13));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventStartTime_87.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        FIX::ComplexEventEndTime ComplexEventEndTime_88(FIX::UTCTIMEONLY(13, 59, 9));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventEndTime_88.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_88(FIX::UTCTIMEONLY(0, 56, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventStartTime_88.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        FIX::ComplexEventEndTime ComplexEventEndTime_89(FIX::UTCTIMEONLY(19, 44, 22));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventEndTime_89.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_89(FIX::UTCTIMEONLY(22, 35, 0));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventStartTime_89.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    FIX::ComplexEventCondition ComplexEventCondition_20(2);
    noComplexEvents_0_1.set(ComplexEventCondition_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventCondition_20.getString());
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("17727783");
    noComplexEvents_0_1.set(ComplexEventPrice_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPrice_20.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_20(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryMethod_20.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("40.020000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryPrecision_20.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_20(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceTimeType_20.getString());
    FIX::ComplexEventType ComplexEventType_20(4);
    noComplexEvents_0_1.set(ComplexEventType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventType_20.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("12345511");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexOptPayoutAmount_20.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_20);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      FIX::ComplexEventEndDate ComplexEventEndDate_44(FIX::UTCTIMESTAMP(22, 50, 19, 16, 8, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventEndDate_44.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_44(FIX::UTCTIMESTAMP(8, 24, 6, 26, 1, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventStartDate_44.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        FIX::ComplexEventEndTime ComplexEventEndTime_90(FIX::UTCTIMEONLY(13, 26, 49));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventEndTime_90.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_90(FIX::UTCTIMEONLY(12, 24, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventStartTime_90.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        FIX::ComplexEventEndTime ComplexEventEndTime_91(FIX::UTCTIMEONLY(20, 0, 57));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventEndTime_91.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_91(FIX::UTCTIMEONLY(13, 5, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventStartTime_91.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        FIX::ComplexEventEndTime ComplexEventEndTime_92(FIX::UTCTIMEONLY(3, 39, 55));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventEndTime_92.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_92(FIX::UTCTIMEONLY(2, 28, 49));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventStartTime_92.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      FIX::ComplexEventEndDate ComplexEventEndDate_45(FIX::UTCTIMESTAMP(9, 55, 9, 25, 2, 2009));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventEndDate_45.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_45(FIX::UTCTIMESTAMP(3, 17, 37, 11, 7, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventStartDate_45.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        FIX::ComplexEventEndTime ComplexEventEndTime_93(FIX::UTCTIMEONLY(18, 4, 23));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventEndTime_93.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_93(FIX::UTCTIMEONLY(18, 28, 9));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventStartTime_93.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    FIX::ComplexEventCondition ComplexEventCondition_21(1);
    noComplexEvents_0_2.set(ComplexEventCondition_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventCondition_21.getString());
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("12575061");
    noComplexEvents_0_2.set(ComplexEventPrice_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPrice_21.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_21(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryMethod_21.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("31.410000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryPrecision_21.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_21(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceTimeType_21.getString());
    FIX::ComplexEventType ComplexEventType_21(8);
    noComplexEvents_0_2.set(ComplexEventType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventType_21.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("9921938");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexOptPayoutAmount_21.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_21);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      FIX::ComplexEventEndDate ComplexEventEndDate_46(FIX::UTCTIMESTAMP(19, 15, 42, 4, 6, 2013));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventEndDate_46.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_46(FIX::UTCTIMESTAMP(0, 43, 38, 19, 6, 2012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventStartDate_46.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        FIX::ComplexEventEndTime ComplexEventEndTime_94(FIX::UTCTIMEONLY(22, 0, 33));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventEndTime_94.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_94(FIX::UTCTIMEONLY(18, 53, 46));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventStartTime_94.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        FIX::ComplexEventEndTime ComplexEventEndTime_95(FIX::UTCTIMEONLY(5, 27, 30));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventEndTime_95.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_95(FIX::UTCTIMEONLY(14, 44, 33));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventStartTime_95.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      FIX::ComplexEventEndDate ComplexEventEndDate_47(FIX::UTCTIMESTAMP(15, 48, 18, 11, 10, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventEndDate_47.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_47(FIX::UTCTIMESTAMP(21, 18, 35, 1, 4, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventStartDate_47.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        FIX::ComplexEventEndTime ComplexEventEndTime_96(FIX::UTCTIMEONLY(13, 45, 47));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventEndTime_96.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_96(FIX::UTCTIMEONLY(4, 41, 17));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventStartTime_96.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    FIX::EventDate EventDate_18("LOCALMKTDATE_98047334");
    noEvents_0_0.set(EventDate_18);
    EvntGrp_NoEvents_18.insert(EventDate_18.getString());
    FIX::EventPx EventPx_18;
    EventPx_18.setString("12212597");
    noEvents_0_0.set(EventPx_18);
    EvntGrp_NoEvents_18.insert(EventPx_18.getString());
    FIX::EventText EventText_18("STRING_1938380706");
    noEvents_0_0.set(EventText_18);
    EvntGrp_NoEvents_18.insert(EventText_18.getString());
    FIX::EventTime EventTime_18(FIX::UTCTIMESTAMP(2, 42, 59, 1, 2, 2010));
    noEvents_0_0.set(EventTime_18);
    EvntGrp_NoEvents_18.insert(EventTime_18.getString());
    FIX::EventType EventType_18(4);
    noEvents_0_0.set(EventType_18);
    EvntGrp_NoEvents_18.insert(EventType_18.getString());
    all_values.push_back(EvntGrp_NoEvents_18);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    FIX::InstrumentPartyID InstrumentPartyID_11("STRING_615809905");
    noInstrumentParties_0_0.set(InstrumentPartyID_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyID_11.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_11('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyIDSource_11.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_11(32950825);
    noInstrumentParties_0_0.set(InstrumentPartyRole_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyRole_11.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      FIX::InstrumentPartySubID InstrumentPartySubID_26("STRING_2103637329");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubID_26.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_26(711001860);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubIDType_26.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      FIX::InstrumentPartySubID InstrumentPartySubID_27("STRING_52449004");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubID_27.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_27(1208353625);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubIDType_27.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      FIX::InstrumentPartySubID InstrumentPartySubID_28("STRING_534663411");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubID_28.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_28(516075229);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubIDType_28.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    FIX::InstrumentPartyID InstrumentPartyID_12("STRING_1575748999");
    noInstrumentParties_0_1.set(InstrumentPartyID_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyID_12.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_12('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyIDSource_12.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_12(1021988254);
    noInstrumentParties_0_1.set(InstrumentPartyRole_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyRole_12.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      FIX::InstrumentPartySubID InstrumentPartySubID_29("STRING_314871863");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubID_29.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_29(831254322);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubIDType_29.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      FIX::InstrumentPartySubID InstrumentPartySubID_30("STRING_1048976319");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubID_30.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_30(1763777800);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubIDType_30.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    FIX::InstrumentPartyID InstrumentPartyID_13("STRING_1003341139");
    noInstrumentParties_0_2.set(InstrumentPartyID_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyID_13.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_13('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyIDSource_13.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_13(837553868);
    noInstrumentParties_0_2.set(InstrumentPartyRole_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyRole_13.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      FIX::InstrumentPartySubID InstrumentPartySubID_31("STRING_1975975640");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubID_31.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_31(244824398);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubIDType_31.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      FIX::InstrumentPartySubID InstrumentPartySubID_32("STRING_1196139300");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubID_32.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_32(994457891);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubIDType_32.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      FIX::InstrumentPartySubID InstrumentPartySubID_33("STRING_167927563");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubID_33.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_33(1460762905);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubIDType_33.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    FIX::SecurityAltID SecurityAltID_17("STRING_35963579");
    noSecurityAltID_0_0.set(SecurityAltID_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltID_17.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_17("STRING_465936286");
    noSecurityAltID_0_0.set(SecurityAltIDSource_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltIDSource_17.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  FIX::SecurityXML SecurityXML_17("XMLDATA_1794587537");
  msg.set(SecurityXML_17);
  FIX::SecurityXMLLen SecurityXMLLen_8(260638610);
  msg.set(SecurityXMLLen_8);
  FIX::SecurityXMLSchema SecurityXMLSchema_8("STRING_498887112");
  msg.set(SecurityXMLSchema_8);
  SecurityXML_16.insert(SecurityXMLSchema_8.getString());
  all_values.push_back(SecurityXML_16);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    FIX::PartyID PartyID_21("STRING_216792291");
    noPartyIDs_0_0.set(PartyID_21);
    Parties_NoPartyIDs_21.insert(PartyID_21.getString());
    FIX::PartyIDSource PartyIDSource_21('6');
    noPartyIDs_0_0.set(PartyIDSource_21);
    Parties_NoPartyIDs_21.insert(PartyIDSource_21.getString());
    FIX::PartyRole PartyRole_21(13);
    noPartyIDs_0_0.set(PartyRole_21);
    Parties_NoPartyIDs_21.insert(PartyRole_21.getString());
    all_values.push_back(Parties_NoPartyIDs_21);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      FIX::PartySubID PartySubID_42("STRING_1744552384");
      noPartySubIDs_0_1_0.set(PartySubID_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubID_42.getString());
      FIX::PartySubIDType PartySubIDType_42(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubIDType_42.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      FIX::PartySubID PartySubID_43("STRING_853411267");
      noPartySubIDs_0_1_1.set(PartySubID_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubID_43.getString());
      FIX::PartySubIDType PartySubIDType_43(1);
      noPartySubIDs_0_1_1.set(PartySubIDType_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubIDType_43.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      FIX::PartySubID PartySubID_44("STRING_365234031");
      noPartySubIDs_0_1_2.set(PartySubID_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubID_44.getString());
      FIX::PartySubIDType PartySubIDType_44(1);
      noPartySubIDs_0_1_2.set(PartySubIDType_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubIDType_44.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    FIX::PartyID PartyID_22("STRING_668798711");
    noPartyIDs_0_1.set(PartyID_22);
    Parties_NoPartyIDs_22.insert(PartyID_22.getString());
    FIX::PartyIDSource PartyIDSource_22('A');
    noPartyIDs_0_1.set(PartyIDSource_22);
    Parties_NoPartyIDs_22.insert(PartyIDSource_22.getString());
    FIX::PartyRole PartyRole_22(35);
    noPartyIDs_0_1.set(PartyRole_22);
    Parties_NoPartyIDs_22.insert(PartyRole_22.getString());
    all_values.push_back(Parties_NoPartyIDs_22);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      FIX::PartySubID PartySubID_45("STRING_52345845");
      noPartySubIDs_1_1_0.set(PartySubID_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubID_45.getString());
      FIX::PartySubIDType PartySubIDType_45(23);
      noPartySubIDs_1_1_0.set(PartySubIDType_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubIDType_45.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      FIX::PartySubID PartySubID_46("STRING_1122646731");
      noPartySubIDs_1_1_1.set(PartySubID_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubID_46.getString());
      FIX::PartySubIDType PartySubIDType_46(30);
      noPartySubIDs_1_1_1.set(PartySubIDType_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubIDType_46.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    FIX::PartyID PartyID_23("STRING_909817303");
    noPartyIDs_0_2.set(PartyID_23);
    Parties_NoPartyIDs_23.insert(PartyID_23.getString());
    FIX::PartyIDSource PartyIDSource_23('1');
    noPartyIDs_0_2.set(PartyIDSource_23);
    Parties_NoPartyIDs_23.insert(PartyIDSource_23.getString());
    FIX::PartyRole PartyRole_23(3);
    noPartyIDs_0_2.set(PartyRole_23);
    Parties_NoPartyIDs_23.insert(PartyRole_23.getString());
    all_values.push_back(Parties_NoPartyIDs_23);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      FIX::PartySubID PartySubID_47("STRING_1535398693");
      noPartySubIDs_2_1_0.set(PartySubID_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubID_47.getString());
      FIX::PartySubIDType PartySubIDType_47(30);
      noPartySubIDs_2_1_0.set(PartySubIDType_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubIDType_47.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_6;
  FIX::SettlDeliveryType SettlDeliveryType_6(2);
  msg.set(SettlDeliveryType_6);
  SettlInstructionsData_6.insert(SettlDeliveryType_6.getString());
  FIX::StandInstDbID StandInstDbID_6("STRING_1571362272");
  msg.set(StandInstDbID_6);
  SettlInstructionsData_6.insert(StandInstDbID_6.getString());
  FIX::StandInstDbName StandInstDbName_6("STRING_1821938886");
  msg.set(StandInstDbName_6);
  SettlInstructionsData_6.insert(StandInstDbName_6.getString());
  FIX::StandInstDbType StandInstDbType_6(2);
  msg.set(StandInstDbType_6);
  SettlInstructionsData_6.insert(StandInstDbType_6.getString());
  all_values.push_back(SettlInstructionsData_6);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_10;
    FIX::DlvyInstType DlvyInstType_10('C');
    noDlvyInst_0_0.set(DlvyInstType_10);
    DlvyInstGrp_NoDlvyInst_10.insert(DlvyInstType_10.getString());
    FIX::SettlInstSource SettlInstSource_10('2');
    noDlvyInst_0_0.set(SettlInstSource_10);
    DlvyInstGrp_NoDlvyInst_10.insert(SettlInstSource_10.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_10);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_22;
      FIX::SettlPartyID SettlPartyID_22("STRING_1383231323");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyID_22.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_22('3');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyIDSource_22.getString());
      FIX::SettlPartyRole SettlPartyRole_22(1326455442);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyRole_22.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_22);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
        FIX::SettlPartySubID SettlPartySubID_52("STRING_1822778232");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_52);
        SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubID_52.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_52(32383061);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_52);
        SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubIDType_52.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
        FIX::SettlPartySubID SettlPartySubID_53("STRING_1334226907");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_53);
        SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubID_53.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_53(40528615);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_53);
        SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubIDType_53.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_23;
      FIX::SettlPartyID SettlPartyID_23("STRING_1065192047");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyID_23.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_23('2');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyIDSource_23.getString());
      FIX::SettlPartyRole SettlPartyRole_23(1237016969);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyRole_23.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_23);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
        FIX::SettlPartySubID SettlPartySubID_54("STRING_140634834");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_54);
        SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubID_54.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_54(1289362814);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_54);
        SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubIDType_54.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
        FIX::SettlPartySubID SettlPartySubID_55("STRING_2080819016");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubID_55.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_55(1263281566);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubIDType_55.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_24;
      FIX::SettlPartyID SettlPartyID_24("STRING_2135946857");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyID_24.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_24('8');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyIDSource_24.getString());
      FIX::SettlPartyRole SettlPartyRole_24(483269047);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyRole_24.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_24);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
        FIX::SettlPartySubID SettlPartySubID_56("STRING_599944217");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubID_56.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_56(2018667740);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubIDType_56.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
        FIX::SettlPartySubID SettlPartySubID_57("STRING_1239705503");
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubID_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubID_57.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_57(1535513395);
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubIDType_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubIDType_57.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
        FIX::SettlPartySubID SettlPartySubID_58("STRING_1442546364");
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubID_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubID_58.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_58(914160742);
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubIDType_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubIDType_58.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_11;
    FIX::DlvyInstType DlvyInstType_11('C');
    noDlvyInst_0_1.set(DlvyInstType_11);
    DlvyInstGrp_NoDlvyInst_11.insert(DlvyInstType_11.getString());
    FIX::SettlInstSource SettlInstSource_11('1');
    noDlvyInst_0_1.set(SettlInstSource_11);
    DlvyInstGrp_NoDlvyInst_11.insert(SettlInstSource_11.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_11);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_25;
      FIX::SettlPartyID SettlPartyID_25("STRING_1475581073");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyID_25.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_25('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyIDSource_25.getString());
      FIX::SettlPartyRole SettlPartyRole_25(323250767);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyRole_25.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_25);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
        FIX::SettlPartySubID SettlPartySubID_59("STRING_207344918");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubID_59.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_59(1303550826);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubIDType_59.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
        FIX::SettlPartySubID SettlPartySubID_60("STRING_1482924464");
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubID_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubID_60.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_60(239727979);
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubIDType_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubIDType_60.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_26;
      FIX::SettlPartyID SettlPartyID_26("STRING_490294086");
      noSettlPartyIDs_1_1_1.set(SettlPartyID_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyID_26.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_26('1');
      noSettlPartyIDs_1_1_1.set(SettlPartyIDSource_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyIDSource_26.getString());
      FIX::SettlPartyRole SettlPartyRole_26(1304920027);
      noSettlPartyIDs_1_1_1.set(SettlPartyRole_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyRole_26.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_26);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
        FIX::SettlPartySubID SettlPartySubID_61("STRING_612986401");
        noSettlPartySubIDs_1_1_2_0.set(SettlPartySubID_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubID_61.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_61(156930084);
        noSettlPartySubIDs_1_1_2_0.set(SettlPartySubIDType_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubIDType_61.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
        FIX::SettlPartySubID SettlPartySubID_62("STRING_486470891");
        noSettlPartySubIDs_1_1_2_1.set(SettlPartySubID_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubID_62.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_62(1902349216);
        noSettlPartySubIDs_1_1_2_1.set(SettlPartySubIDType_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubIDType_62.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
        FIX::SettlPartySubID SettlPartySubID_63("STRING_90265452");
        noSettlPartySubIDs_1_1_2_2.set(SettlPartySubID_63);
        SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubID_63.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_63(1749752457);
        noSettlPartySubIDs_1_1_2_2.set(SettlPartySubIDType_63);
        SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubIDType_63.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_27;
      FIX::SettlPartyID SettlPartyID_27("STRING_1890812425");
      noSettlPartyIDs_1_1_2.set(SettlPartyID_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyID_27.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_27('9');
      noSettlPartyIDs_1_1_2.set(SettlPartyIDSource_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyIDSource_27.getString());
      FIX::SettlPartyRole SettlPartyRole_27(85537857);
      noSettlPartyIDs_1_1_2.set(SettlPartyRole_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyRole_27.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_27);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
        FIX::SettlPartySubID SettlPartySubID_64("STRING_1533362340");
        noSettlPartySubIDs_1_2_2_0.set(SettlPartySubID_64);
        SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubID_64.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_64(2104205597);
        noSettlPartySubIDs_1_2_2_0.set(SettlPartySubIDType_64);
        SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubIDType_64.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
        FIX::SettlPartySubID SettlPartySubID_65("STRING_866737184");
        noSettlPartySubIDs_1_2_2_1.set(SettlPartySubID_65);
        SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubID_65.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_65(921392088);
        noSettlPartySubIDs_1_2_2_1.set(SettlPartySubIDType_65);
        SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubIDType_65.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_2);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_2;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_12;
    FIX::DlvyInstType DlvyInstType_12('C');
    noDlvyInst_0_2.set(DlvyInstType_12);
    DlvyInstGrp_NoDlvyInst_12.insert(DlvyInstType_12.getString());
    FIX::SettlInstSource SettlInstSource_12('1');
    noDlvyInst_0_2.set(SettlInstSource_12);
    DlvyInstGrp_NoDlvyInst_12.insert(SettlInstSource_12.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_12);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_28;
      FIX::SettlPartyID SettlPartyID_28("STRING_378848264");
      noSettlPartyIDs_2_1_0.set(SettlPartyID_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyID_28.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_28('7');
      noSettlPartyIDs_2_1_0.set(SettlPartyIDSource_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyIDSource_28.getString());
      FIX::SettlPartyRole SettlPartyRole_28(220192328);
      noSettlPartyIDs_2_1_0.set(SettlPartyRole_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyRole_28.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_28);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
        FIX::SettlPartySubID SettlPartySubID_66("STRING_1044168138");
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubID_66);
        SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubID_66.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_66(2027822208);
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubIDType_66);
        SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubIDType_66.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_0);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_29;
      FIX::SettlPartyID SettlPartyID_29("STRING_1614566306");
      noSettlPartyIDs_2_1_1.set(SettlPartyID_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyID_29.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_29('2');
      noSettlPartyIDs_2_1_1.set(SettlPartyIDSource_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyIDSource_29.getString());
      FIX::SettlPartyRole SettlPartyRole_29(1363263025);
      noSettlPartyIDs_2_1_1.set(SettlPartyRole_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyRole_29.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_29);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
        FIX::SettlPartySubID SettlPartySubID_67("STRING_690529402");
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubID_67);
        SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubID_67.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_67(739232457);
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubIDType_67);
        SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubIDType_67.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
        FIX::SettlPartySubID SettlPartySubID_68("STRING_1011730665");
        noSettlPartySubIDs_2_1_2_1.set(SettlPartySubID_68);
        SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubID_68.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_68(1036365459);
        noSettlPartySubIDs_2_1_2_1.set(SettlPartySubIDType_68);
        SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubIDType_68.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_1);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_1);
    }
    msg.addGroup(noDlvyInst_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_4("CHF");
  msg.set(BenchmarkCurveCurrency_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveCurrency_4.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_4("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveName_4.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_4("STRING_1107084426");
  msg.set(BenchmarkCurvePoint_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurvePoint_4.getString());
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("12589262");
  msg.set(BenchmarkPrice_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPrice_4.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_4(1125105160);
  msg.set(BenchmarkPriceType_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPriceType_4.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_4("STRING_850413203");
  msg.set(BenchmarkSecurityID_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityID_4.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_4("STRING_44860676");
  msg.set(BenchmarkSecurityIDSource_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityIDSource_4.getString());
  FIX::Spread Spread_4;
  Spread_4.setString("12106430");
  msg.set(Spread_4);
  SpreadOrBenchmarkCurveData_4.insert(Spread_4.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_4);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    FIX::StipulationType StipulationType_7("STRING_REFPRIN");
    noStipulations_0_0.set(StipulationType_7);
    Stipulations_NoStipulations_7.insert(StipulationType_7.getString());
    FIX::StipulationValue StipulationValue_7("STRING_1167364967");
    noStipulations_0_0.set(StipulationValue_7);
    Stipulations_NoStipulations_7.insert(StipulationValue_7.getString());
    all_values.push_back(Stipulations_NoStipulations_7);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    FIX::StipulationType StipulationType_8("STRING_DISCOUNT");
    noStipulations_0_1.set(StipulationType_8);
    Stipulations_NoStipulations_8.insert(StipulationType_8.getString());
    FIX::StipulationValue StipulationValue_8("STRING_352131456");
    noStipulations_0_1.set(StipulationValue_8);
    Stipulations_NoStipulations_8.insert(StipulationValue_8.getString());
    all_values.push_back(Stipulations_NoStipulations_8);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    FIX::StipulationType StipulationType_9("STRING_PXSOURCE");
    noStipulations_0_2.set(StipulationType_9);
    Stipulations_NoStipulations_9.insert(StipulationType_9.getString());
    FIX::StipulationValue StipulationValue_9("STRING_977596346");
    noStipulations_0_2.set(StipulationValue_9);
    Stipulations_NoStipulations_9.insert(StipulationValue_9.getString());
    all_values.push_back(Stipulations_NoStipulations_9);

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_1("STRING_797997897");
    noTrades_0_0.set(SecondaryTradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(SecondaryTradeReportID_1.getString());
    FIX::TradeReportID TradeReportID_1("STRING_1698513716");
    noTrades_0_0.set(TradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(TradeReportID_1.getString());
    all_values.push_back(TrdCollGrp_NoTrades_1);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_2("STRING_1464418687");
    noTrades_0_1.set(SecondaryTradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(SecondaryTradeReportID_2.getString());
    FIX::TradeReportID TradeReportID_2("STRING_57735638");
    noTrades_0_1.set(TradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(TradeReportID_2.getString());
    all_values.push_back(TrdCollGrp_NoTrades_2);

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_3("STRING_595198206");
    noTrades_0_2.set(SecondaryTradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(SecondaryTradeReportID_3.getString());
    FIX::TradeReportID TradeReportID_3("STRING_1344757247");
    noTrades_0_2.set(TradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(TradeReportID_3.getString());
    all_values.push_back(TrdCollGrp_NoTrades_3);

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_2("MULTIPLESTRINGVALUE_MAC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskOrderHandlingInst_2.getString());
    FIX::DeskType DeskType_2("STRING_T");
    noTrdRegTimestamps_0_0.set(DeskType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskType_2.getString());
    FIX::DeskTypeSource DeskTypeSource_2(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskTypeSource_2.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_2(FIX::UTCTIMESTAMP(1, 19, 17, 12, 5, 2002));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestamp_2.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_2("STRING_1611588718");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampOrigin_2.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_2(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampType_2.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_2);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_3("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskOrderHandlingInst_3.getString());
    FIX::DeskType DeskType_3("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskType_3.getString());
    FIX::DeskTypeSource DeskTypeSource_3(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskTypeSource_3.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_3(FIX::UTCTIMESTAMP(22, 34, 57, 26, 3, 2010));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestamp_3.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_3("STRING_966257924");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampOrigin_3.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_3(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampType_3.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_13;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_13("DATA_517287992");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuer_13.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_13(912355800);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuerLen_13.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_13("DATA_233226457");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDesc_13.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_13(1112486199);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDescLen_13.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("1096294");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_13);
    UnderlyingInstrument_13.insert(UnderlyingAdjustedQuantity_13.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("84.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_13);
    UnderlyingInstrument_13.insert(UnderlyingAllocationPercent_13.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("97.220000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingAttachmentPoint_13.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_13("STRING_670166024");
    noUnderlyings_0_0.set(UnderlyingCFICode_13);
    UnderlyingInstrument_13.insert(UnderlyingCFICode_13.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_13("STRING_1137157336");
    noUnderlyings_0_0.set(UnderlyingCPProgram_13);
    UnderlyingInstrument_13.insert(UnderlyingCPProgram_13.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_13("STRING_1246398999");
    noUnderlyings_0_0.set(UnderlyingCPRegType_13);
    UnderlyingInstrument_13.insert(UnderlyingCPRegType_13.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("19699351");
    noUnderlyings_0_0.set(UnderlyingCapValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCapValue_13.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("13805169");
    noUnderlyings_0_0.set(UnderlyingCashAmount_13);
    UnderlyingInstrument_13.insert(UnderlyingCashAmount_13.getString());
    FIX::UnderlyingCashType UnderlyingCashType_13("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_13);
    UnderlyingInstrument_13.insert(UnderlyingCashType_13.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("3269557");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplier_13.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_13(645053636);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplierUnit_13.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_13("COUNTRY_1371441176");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingCountryOfIssue_13.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_13("LOCALMKTDATE_1938544468");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponPaymentDate_13.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("65.380000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponRate_13.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_13("STRING_99260129");
    noUnderlyings_0_0.set(UnderlyingCreditRating_13);
    UnderlyingInstrument_13.insert(UnderlyingCreditRating_13.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_13("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrency_13.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("377220");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrentValue_13.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("22.520000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingDetachmentPoint_13.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("17359030");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingDirtyPrice_13.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("11435490");
    noUnderlyings_0_0.set(UnderlyingEndPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingEndPrice_13.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("8862038");
    noUnderlyings_0_0.set(UnderlyingEndValue_13);
    UnderlyingInstrument_13.insert(UnderlyingEndValue_13.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_13(2087097464);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_13);
    UnderlyingInstrument_13.insert(UnderlyingExerciseStyle_13.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("5210419");
    noUnderlyings_0_0.set(UnderlyingFXRate_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRate_13.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_13('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRateCalc_13.getString());
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("15350345");
    noUnderlyings_0_0.set(UnderlyingFactor_13);
    UnderlyingInstrument_13.insert(UnderlyingFactor_13.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_13(696532777);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_13);
    UnderlyingInstrument_13.insert(UnderlyingFlowScheduleType_13.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_13("STRING_222266099");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_13);
    UnderlyingInstrument_13.insert(UnderlyingInstrRegistry_13.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_13("LOCALMKTDATE_299906730");
    noUnderlyings_0_0.set(UnderlyingIssueDate_13);
    UnderlyingInstrument_13.insert(UnderlyingIssueDate_13.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_13("STRING_929759235");
    noUnderlyings_0_0.set(UnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(UnderlyingIssuer_13.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_13("STRING_1334752298");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingLocaleOfIssue_13.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_13("LOCALMKTDATE_409536130");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityDate_13.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_13("MONTHYEAR_687803989");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityMonthYear_13.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_13("TZTIMEONLY_1095188372");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityTime_13.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("21.540000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_13('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_13);
    UnderlyingInstrument_13.insert(UnderlyingOptAttribute_13.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("37.230000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingOriginalNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_13("STRING_902153612");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasure_13.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("10579946");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasureQty_13.getString());
    FIX::UnderlyingProduct UnderlyingProduct_13(1815347460);
    noUnderlyings_0_0.set(UnderlyingProduct_13);
    UnderlyingInstrument_13.insert(UnderlyingProduct_13.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_13(1229109362);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_13);
    UnderlyingInstrument_13.insert(UnderlyingPutOrCall_13.getString());
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("17030482");
    noUnderlyings_0_0.set(UnderlyingPx_13);
    UnderlyingInstrument_13.insert(UnderlyingPx_13.getString());
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("10393049");
    noUnderlyings_0_0.set(UnderlyingQty_13);
    UnderlyingInstrument_13.insert(UnderlyingQty_13.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_13("LOCALMKTDATE_1020170183");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_13);
    UnderlyingInstrument_13.insert(UnderlyingRedemptionDate_13.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_13("STRING_724081140");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingRepoCollateralSecurityType_13.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("51.170000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseRate_13.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_13(1125749277);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseTerm_13.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_13("STRING_313437607");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_13);
    UnderlyingInstrument_13.insert(UnderlyingRestructuringType_13.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_13("STRING_1176287216");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityDesc_13.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_13("EXCHANGE_2023291530");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityExchange_13.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_13("STRING_2049340669");
    noUnderlyings_0_0.set(UnderlyingSecurityID_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityID_13.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_13("STRING_172352604");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityIDSource_13.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_13("STRING_762011712");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecuritySubType_13.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_13("STRING_1988954485");
    noUnderlyings_0_0.set(UnderlyingSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityType_13.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_13("STRING_693394562");
    noUnderlyings_0_0.set(UnderlyingSeniority_13);
    UnderlyingInstrument_13.insert(UnderlyingSeniority_13.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_13("STRING_466989819");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlMethod_13.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_13(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlementType_13.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("13899273");
    noUnderlyings_0_0.set(UnderlyingStartValue_13);
    UnderlyingInstrument_13.insert(UnderlyingStartValue_13.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_13("STRING_689255918");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingStateOrProvinceOfIssue_13.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_13("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikeCurrency_13.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("20240082");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikePrice_13.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_13("STRING_2085948274");
    noUnderlyings_0_0.set(UnderlyingSymbol_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbol_13.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_13("STRING_860006916");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbolSfx_13.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_13("STRING_971712940");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingTimeUnit_13.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_13("STRING_1018166781");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasure_13.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("5374845");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasureQty_13.getString());
    all_values.push_back(UnderlyingInstrument_13);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_28("STRING_1920320393");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltID_28.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_28("STRING_1595479207");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltIDSource_28.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_29("STRING_833680475");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltID_29.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_29("STRING_1001946108");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltIDSource_29.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      FIX::UnderlyingStipType UnderlyingStipType_25("STRING_1872985464");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipType_25.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_25("STRING_2022116291");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipValue_25.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      FIX::UnderlyingStipType UnderlyingStipType_26("STRING_1875124949");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipType_26.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_26("STRING_864066933");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipValue_26.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      FIX::UnderlyingStipType UnderlyingStipType_27("STRING_1000381920");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipType_27.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_27("STRING_41078908");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipValue_27.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_24("STRING_876189802");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyID_24.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_24('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyIDSource_24.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_24(65223106);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyRole_24.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_51("STRING_1931890414");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubID_51.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_51(758617669);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubIDType_51.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_52("STRING_2105191334");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubID_52.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_52(1160912181);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubIDType_52.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_53("STRING_1061361");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubID_53.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_53(646963604);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubIDType_53.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_14("DATA_689840677");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuer_14.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_14(173264288);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuerLen_14.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_14("DATA_523488172");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDesc_14.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_14(628305304);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDescLen_14.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("10332712");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_14);
    UnderlyingInstrument_14.insert(UnderlyingAdjustedQuantity_14.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("11.120000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_14);
    UnderlyingInstrument_14.insert(UnderlyingAllocationPercent_14.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("20.850000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingAttachmentPoint_14.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_14("STRING_1570755797");
    noUnderlyings_0_1.set(UnderlyingCFICode_14);
    UnderlyingInstrument_14.insert(UnderlyingCFICode_14.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_14("STRING_513534127");
    noUnderlyings_0_1.set(UnderlyingCPProgram_14);
    UnderlyingInstrument_14.insert(UnderlyingCPProgram_14.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_14("STRING_1419308830");
    noUnderlyings_0_1.set(UnderlyingCPRegType_14);
    UnderlyingInstrument_14.insert(UnderlyingCPRegType_14.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("10187513");
    noUnderlyings_0_1.set(UnderlyingCapValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCapValue_14.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("13472146");
    noUnderlyings_0_1.set(UnderlyingCashAmount_14);
    UnderlyingInstrument_14.insert(UnderlyingCashAmount_14.getString());
    FIX::UnderlyingCashType UnderlyingCashType_14("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_14);
    UnderlyingInstrument_14.insert(UnderlyingCashType_14.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("223115");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplier_14.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_14(1072716419);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplierUnit_14.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_14("COUNTRY_148403933");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingCountryOfIssue_14.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_14("LOCALMKTDATE_1897436466");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponPaymentDate_14.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("33.520000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponRate_14.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_14("STRING_1148785854");
    noUnderlyings_0_1.set(UnderlyingCreditRating_14);
    UnderlyingInstrument_14.insert(UnderlyingCreditRating_14.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_14("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrency_14.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("20249756");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrentValue_14.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("13.040000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingDetachmentPoint_14.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("18948769");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingDirtyPrice_14.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("15156935");
    noUnderlyings_0_1.set(UnderlyingEndPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingEndPrice_14.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("16658580");
    noUnderlyings_0_1.set(UnderlyingEndValue_14);
    UnderlyingInstrument_14.insert(UnderlyingEndValue_14.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_14(506010982);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_14);
    UnderlyingInstrument_14.insert(UnderlyingExerciseStyle_14.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("14734012");
    noUnderlyings_0_1.set(UnderlyingFXRate_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRate_14.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_14('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRateCalc_14.getString());
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("5070723");
    noUnderlyings_0_1.set(UnderlyingFactor_14);
    UnderlyingInstrument_14.insert(UnderlyingFactor_14.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_14(2120364813);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_14);
    UnderlyingInstrument_14.insert(UnderlyingFlowScheduleType_14.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_14("STRING_1369127281");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_14);
    UnderlyingInstrument_14.insert(UnderlyingInstrRegistry_14.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_14("LOCALMKTDATE_680336631");
    noUnderlyings_0_1.set(UnderlyingIssueDate_14);
    UnderlyingInstrument_14.insert(UnderlyingIssueDate_14.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_14("STRING_496369337");
    noUnderlyings_0_1.set(UnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(UnderlyingIssuer_14.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_14("STRING_1997432585");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingLocaleOfIssue_14.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_14("LOCALMKTDATE_1713607835");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityDate_14.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_14("MONTHYEAR_1991570449");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityMonthYear_14.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_14("TZTIMEONLY_1496421022");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityTime_14.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("99.840000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_14('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_14);
    UnderlyingInstrument_14.insert(UnderlyingOptAttribute_14.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("62.050000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingOriginalNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_14("STRING_8147693");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasure_14.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("17048355");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasureQty_14.getString());
    FIX::UnderlyingProduct UnderlyingProduct_14(1042017495);
    noUnderlyings_0_1.set(UnderlyingProduct_14);
    UnderlyingInstrument_14.insert(UnderlyingProduct_14.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_14(30459210);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_14);
    UnderlyingInstrument_14.insert(UnderlyingPutOrCall_14.getString());
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("6300683");
    noUnderlyings_0_1.set(UnderlyingPx_14);
    UnderlyingInstrument_14.insert(UnderlyingPx_14.getString());
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("11904214");
    noUnderlyings_0_1.set(UnderlyingQty_14);
    UnderlyingInstrument_14.insert(UnderlyingQty_14.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_14("LOCALMKTDATE_1927895677");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_14);
    UnderlyingInstrument_14.insert(UnderlyingRedemptionDate_14.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_14("STRING_419368007");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingRepoCollateralSecurityType_14.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("36.350000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseRate_14.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_14(1718927404);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseTerm_14.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_14("STRING_101538214");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_14);
    UnderlyingInstrument_14.insert(UnderlyingRestructuringType_14.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_14("STRING_69215643");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityDesc_14.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_14("EXCHANGE_1452895060");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityExchange_14.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_14("STRING_1996415175");
    noUnderlyings_0_1.set(UnderlyingSecurityID_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityID_14.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_14("STRING_1584909167");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityIDSource_14.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_14("STRING_971269483");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecuritySubType_14.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_14("STRING_354942509");
    noUnderlyings_0_1.set(UnderlyingSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityType_14.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_14("STRING_910826728");
    noUnderlyings_0_1.set(UnderlyingSeniority_14);
    UnderlyingInstrument_14.insert(UnderlyingSeniority_14.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_14("STRING_1650556087");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlMethod_14.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_14(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlementType_14.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("8837078");
    noUnderlyings_0_1.set(UnderlyingStartValue_14);
    UnderlyingInstrument_14.insert(UnderlyingStartValue_14.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_14("STRING_872199721");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingStateOrProvinceOfIssue_14.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_14("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikeCurrency_14.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("7221486");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikePrice_14.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_14("STRING_1108475670");
    noUnderlyings_0_1.set(UnderlyingSymbol_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbol_14.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_14("STRING_1224164033");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbolSfx_14.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_14("STRING_71086033");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingTimeUnit_14.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_14("STRING_97872006");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasure_14.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("15817849");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasureQty_14.getString());
    all_values.push_back(UnderlyingInstrument_14);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_30("STRING_106019699");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltID_30.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_30("STRING_1139136846");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltIDSource_30.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_31("STRING_1881349733");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltID_31.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_31("STRING_136478910");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltIDSource_31.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_32("STRING_1769205149");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltID_32.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_32("STRING_924287514");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltIDSource_32.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      FIX::UnderlyingStipType UnderlyingStipType_28("STRING_41089508");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipType_28.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_28("STRING_1116011149");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipValue_28.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      FIX::UnderlyingStipType UnderlyingStipType_29("STRING_1635818343");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipType_29.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_29("STRING_142627722");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipValue_29.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_25("STRING_941229755");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyID_25.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_25('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyIDSource_25.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_25(622652312);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyRole_25.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_54("STRING_346501758");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubID_54.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_54(1533479040);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubIDType_54.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_55("STRING_1415571678");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubID_55.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_55(1208516610);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubIDType_55.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_26("STRING_269703286");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyID_26.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_26('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyIDSource_26.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_26(603384445);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyRole_26.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_56("STRING_862436410");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubID_56.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_56(1711860115);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubIDType_56.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_57("STRING_726460903");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubID_57.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_57(933522443);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubIDType_57.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_27("STRING_1809732122");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyID_27.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_27('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyIDSource_27.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_27(1772854681);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyRole_27.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_58("STRING_1299899063");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubID_58.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_58(1506720766);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubIDType_58.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_59("STRING_2052230731");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubID_59.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_59(921620564);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubIDType_59.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_15;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_15("DATA_283524633");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuer_15.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_15(1969121670);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuerLen_15.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_15("DATA_962710072");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDesc_15.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_15(1399535782);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDescLen_15.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("14574563");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_15);
    UnderlyingInstrument_15.insert(UnderlyingAdjustedQuantity_15.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("77.950000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_15);
    UnderlyingInstrument_15.insert(UnderlyingAllocationPercent_15.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("89.270000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingAttachmentPoint_15.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_15("STRING_251202473");
    noUnderlyings_0_2.set(UnderlyingCFICode_15);
    UnderlyingInstrument_15.insert(UnderlyingCFICode_15.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_15("STRING_1096897044");
    noUnderlyings_0_2.set(UnderlyingCPProgram_15);
    UnderlyingInstrument_15.insert(UnderlyingCPProgram_15.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_15("STRING_1059931239");
    noUnderlyings_0_2.set(UnderlyingCPRegType_15);
    UnderlyingInstrument_15.insert(UnderlyingCPRegType_15.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("162180");
    noUnderlyings_0_2.set(UnderlyingCapValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCapValue_15.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("14433988");
    noUnderlyings_0_2.set(UnderlyingCashAmount_15);
    UnderlyingInstrument_15.insert(UnderlyingCashAmount_15.getString());
    FIX::UnderlyingCashType UnderlyingCashType_15("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_15);
    UnderlyingInstrument_15.insert(UnderlyingCashType_15.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("14317897");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplier_15.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_15(504431765);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplierUnit_15.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_15("COUNTRY_715629918");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingCountryOfIssue_15.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_15("LOCALMKTDATE_1572077494");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponPaymentDate_15.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("62.110000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponRate_15.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_15("STRING_217926788");
    noUnderlyings_0_2.set(UnderlyingCreditRating_15);
    UnderlyingInstrument_15.insert(UnderlyingCreditRating_15.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_15("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrency_15.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("9443876");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrentValue_15.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("26.990000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingDetachmentPoint_15.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("3344411");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingDirtyPrice_15.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("11051499");
    noUnderlyings_0_2.set(UnderlyingEndPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingEndPrice_15.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("8459237");
    noUnderlyings_0_2.set(UnderlyingEndValue_15);
    UnderlyingInstrument_15.insert(UnderlyingEndValue_15.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_15(102709326);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_15);
    UnderlyingInstrument_15.insert(UnderlyingExerciseStyle_15.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("2575653");
    noUnderlyings_0_2.set(UnderlyingFXRate_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRate_15.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_15('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRateCalc_15.getString());
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("74564");
    noUnderlyings_0_2.set(UnderlyingFactor_15);
    UnderlyingInstrument_15.insert(UnderlyingFactor_15.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_15(1179185887);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_15);
    UnderlyingInstrument_15.insert(UnderlyingFlowScheduleType_15.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_15("STRING_488685483");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_15);
    UnderlyingInstrument_15.insert(UnderlyingInstrRegistry_15.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_15("LOCALMKTDATE_1976578080");
    noUnderlyings_0_2.set(UnderlyingIssueDate_15);
    UnderlyingInstrument_15.insert(UnderlyingIssueDate_15.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_15("STRING_2141895960");
    noUnderlyings_0_2.set(UnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(UnderlyingIssuer_15.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_15("STRING_1888221266");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingLocaleOfIssue_15.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_15("LOCALMKTDATE_1286550797");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityDate_15.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_15("MONTHYEAR_1099750107");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityMonthYear_15.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_15("TZTIMEONLY_178016545");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityTime_15.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("32.700000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_15('4');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_15);
    UnderlyingInstrument_15.insert(UnderlyingOptAttribute_15.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("77.850000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingOriginalNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_15("STRING_1553971334");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasure_15.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("14925623");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasureQty_15.getString());
    FIX::UnderlyingProduct UnderlyingProduct_15(1683874417);
    noUnderlyings_0_2.set(UnderlyingProduct_15);
    UnderlyingInstrument_15.insert(UnderlyingProduct_15.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_15(838277429);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_15);
    UnderlyingInstrument_15.insert(UnderlyingPutOrCall_15.getString());
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("19969940");
    noUnderlyings_0_2.set(UnderlyingPx_15);
    UnderlyingInstrument_15.insert(UnderlyingPx_15.getString());
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("2520206");
    noUnderlyings_0_2.set(UnderlyingQty_15);
    UnderlyingInstrument_15.insert(UnderlyingQty_15.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_15("LOCALMKTDATE_262871275");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_15);
    UnderlyingInstrument_15.insert(UnderlyingRedemptionDate_15.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_15("STRING_957326635");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingRepoCollateralSecurityType_15.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("74.760000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseRate_15.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_15(549901531);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseTerm_15.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_15("STRING_1629519313");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_15);
    UnderlyingInstrument_15.insert(UnderlyingRestructuringType_15.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_15("STRING_1414335167");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityDesc_15.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_15("EXCHANGE_1770454230");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityExchange_15.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_15("STRING_1963960466");
    noUnderlyings_0_2.set(UnderlyingSecurityID_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityID_15.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_15("STRING_372001428");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityIDSource_15.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_15("STRING_468894314");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecuritySubType_15.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_15("STRING_2066669792");
    noUnderlyings_0_2.set(UnderlyingSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityType_15.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_15("STRING_629566751");
    noUnderlyings_0_2.set(UnderlyingSeniority_15);
    UnderlyingInstrument_15.insert(UnderlyingSeniority_15.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_15("STRING_674055164");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlMethod_15.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_15(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlementType_15.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("18087526");
    noUnderlyings_0_2.set(UnderlyingStartValue_15);
    UnderlyingInstrument_15.insert(UnderlyingStartValue_15.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_15("STRING_1162740648");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingStateOrProvinceOfIssue_15.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_15("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikeCurrency_15.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("9034782");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikePrice_15.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_15("STRING_1042287783");
    noUnderlyings_0_2.set(UnderlyingSymbol_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbol_15.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_15("STRING_755431410");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbolSfx_15.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_15("STRING_1081494811");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingTimeUnit_15.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_15("STRING_432557405");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasure_15.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("8045949");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasureQty_15.getString());
    all_values.push_back(UnderlyingInstrument_15);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_33("STRING_1986528740");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltID_33.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_33("STRING_149673572");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltIDSource_33.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_34("STRING_1855833365");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltID_34.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_34("STRING_677322521");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltIDSource_34.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      FIX::UnderlyingStipType UnderlyingStipType_30("STRING_2107854053");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipType_30.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_30("STRING_940193796");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipValue_30.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      FIX::UnderlyingStipType UnderlyingStipType_31("STRING_956510631");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipType_31.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_31("STRING_430317881");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipValue_31.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_28("STRING_438546296");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyID_28.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_28('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyIDSource_28.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_28(1113065909);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyRole_28.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_60("STRING_69170828");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubID_60.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_60(1581960223);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubIDType_60.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_61("STRING_174209258");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubID_61.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_61(698737580);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubIDType_61.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_62("STRING_108531739");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubID_62.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_62(100851812);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubIDType_62.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_29("STRING_360006571");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyID_29.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_29('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyIDSource_29.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_29(2004072445);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyRole_29.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_63("STRING_27267005");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubID_63.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_63(898876580);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubIDType_63.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_64("STRING_771119284");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubID_64.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_64(1108761817);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubIDType_64.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
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
