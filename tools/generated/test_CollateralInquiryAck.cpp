#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralInquiryAck msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralInquiryAck_0;
  FIX::Account Account_6("STRING_1331433986");
  msg.set(Account_6);
  CollateralInquiryAck_0.insert(Account_6.getString());
  FIX::AccountType AccountType_3(2);
  msg.set(AccountType_3);
  CollateralInquiryAck_0.insert(AccountType_3.getString());
  FIX::ClOrdID ClOrdID_8("STRING_1280720765");
  msg.set(ClOrdID_8);
  CollateralInquiryAck_0.insert(ClOrdID_8.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_8("LOCALMKTDATE_1170479078");
  msg.set(ClearingBusinessDate_8);
  CollateralInquiryAck_0.insert(ClearingBusinessDate_8.getString());
  FIX::CollInquiryID CollInquiryID_1("STRING_1725387769");
  msg.set(CollInquiryID_1);
  CollateralInquiryAck_0.insert(CollInquiryID_1.getString());
  FIX::CollInquiryResult CollInquiryResult_0(5);
  msg.set(CollInquiryResult_0);
  CollateralInquiryAck_0.insert(CollInquiryResult_0.getString());
  FIX::CollInquiryStatus CollInquiryStatus_0(4);
  msg.set(CollInquiryStatus_0);
  CollateralInquiryAck_0.insert(CollInquiryStatus_0.getString());
  FIX::Currency Currency_8("USD");
  msg.set(Currency_8);
  CollateralInquiryAck_0.insert(Currency_8.getString());
  FIX::EncodedText EncodedText_17("DATA_640511747");
  msg.set(EncodedText_17);
  CollateralInquiryAck_0.insert(EncodedText_17.getString());
  FIX::EncodedTextLen EncodedTextLen_17(533598748);
  msg.set(EncodedTextLen_17);
  CollateralInquiryAck_0.insert(EncodedTextLen_17.getString());
  FIX::OrderID OrderID_8("STRING_1379758769");
  msg.set(OrderID_8);
  CollateralInquiryAck_0.insert(OrderID_8.getString());
  FIX::QtyType QtyType_6(0);
  msg.set(QtyType_6);
  CollateralInquiryAck_0.insert(QtyType_6.getString());
  FIX::Quantity Quantity_7;
  Quantity_7.setString("9721450");
  msg.set(Quantity_7);
  CollateralInquiryAck_0.insert(Quantity_7.getString());
  FIX::ResponseDestination ResponseDestination_1("STRING_1076928169");
  msg.set(ResponseDestination_1);
  CollateralInquiryAck_0.insert(ResponseDestination_1.getString());
  FIX::ResponseTransportType ResponseTransportType_1(1);
  msg.set(ResponseTransportType_1);
  CollateralInquiryAck_0.insert(ResponseTransportType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_8("STRING_1227168159");
  msg.set(SecondaryClOrdID_8);
  CollateralInquiryAck_0.insert(SecondaryClOrdID_8.getString());
  FIX::SecondaryOrderID SecondaryOrderID_8("STRING_1146098998");
  msg.set(SecondaryOrderID_8);
  CollateralInquiryAck_0.insert(SecondaryOrderID_8.getString());
  FIX::SettlDate SettlDate_11("LOCALMKTDATE_530665910");
  msg.set(SettlDate_11);
  CollateralInquiryAck_0.insert(SettlDate_11.getString());
  FIX::SettlSessID SettlSessID_4("STRING_ETH");
  msg.set(SettlSessID_4);
  CollateralInquiryAck_0.insert(SettlSessID_4.getString());
  FIX::SettlSessSubID SettlSessSubID_3("STRING_1844836578");
  msg.set(SettlSessSubID_3);
  CollateralInquiryAck_0.insert(SettlSessSubID_3.getString());
  FIX::Text Text_17("STRING_639197649");
  msg.set(Text_17);
  CollateralInquiryAck_0.insert(Text_17.getString());
  FIX::TotNumReports TotNumReports_0(1502229230);
  msg.set(TotNumReports_0);
  CollateralInquiryAck_0.insert(TotNumReports_0.getString());
  FIX::TradingSessionID TradingSessionID_12("STRING_6");
  msg.set(TradingSessionID_12);
  CollateralInquiryAck_0.insert(TradingSessionID_12.getString());
  FIX::TradingSessionSubID TradingSessionSubID_12("STRING_1");
  msg.set(TradingSessionSubID_12);
  CollateralInquiryAck_0.insert(TradingSessionSubID_12.getString());
  all_values.push_back(CollateralInquiryAck_0);

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_3;
    FIX::CollInquiryQualifier CollInquiryQualifier_3(7);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_3);
    CollInqQualGrp_NoCollInquiryQualifier_3.insert(CollInquiryQualifier_3.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_3);

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_4;
    FIX::CollInquiryQualifier CollInquiryQualifier_4(2);
    noCollInquiryQualifier_0_1.set(CollInquiryQualifier_4);
    CollInqQualGrp_NoCollInquiryQualifier_4.insert(CollInquiryQualifier_4.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_4);

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    FIX::ExecID ExecID_10("STRING_844166659");
    noExecs_0_0.set(ExecID_10);
    ExecCollGrp_NoExecs_3.insert(ExecID_10.getString());
    all_values.push_back(ExecCollGrp_NoExecs_3);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    FIX::ExecID ExecID_11("STRING_899015211");
    noExecs_0_1.set(ExecID_11);
    ExecCollGrp_NoExecs_4.insert(ExecID_11.getString());
    all_values.push_back(ExecCollGrp_NoExecs_4);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    FIX::ExecID ExecID_12("STRING_1441644946");
    noExecs_0_2.set(ExecID_12);
    ExecCollGrp_NoExecs_5.insert(ExecID_12.getString());
    all_values.push_back(ExecCollGrp_NoExecs_5);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  FIX::AgreementCurrency AgreementCurrency_5("EUR");
  msg.set(AgreementCurrency_5);
  FinancingDetails_5.insert(AgreementCurrency_5.getString());
  FIX::AgreementDate AgreementDate_5("LOCALMKTDATE_464640376");
  msg.set(AgreementDate_5);
  FinancingDetails_5.insert(AgreementDate_5.getString());
  FIX::AgreementDesc AgreementDesc_5("STRING_1997784978");
  msg.set(AgreementDesc_5);
  FinancingDetails_5.insert(AgreementDesc_5.getString());
  FIX::AgreementID AgreementID_5("STRING_1021322812");
  msg.set(AgreementID_5);
  FinancingDetails_5.insert(AgreementID_5.getString());
  FIX::DeliveryType DeliveryType_5(3);
  msg.set(DeliveryType_5);
  FinancingDetails_5.insert(DeliveryType_5.getString());
  FIX::EndDate EndDate_5("LOCALMKTDATE_1574873095");
  msg.set(EndDate_5);
  FinancingDetails_5.insert(EndDate_5.getString());
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("37.000000");
  msg.set(MarginRatio_5);
  FinancingDetails_5.insert(MarginRatio_5.getString());
  FIX::StartDate StartDate_5("LOCALMKTDATE_805470074");
  msg.set(StartDate_5);
  FinancingDetails_5.insert(StartDate_5.getString());
  FIX::TerminationType TerminationType_5(1);
  msg.set(TerminationType_5);
  FinancingDetails_5.insert(TerminationType_5.getString());
  all_values.push_back(FinancingDetails_5);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_12;
    FIX::EncodedLegIssuer EncodedLegIssuer_12("DATA_788593500");
    noLegs_0_0.set(EncodedLegIssuer_12);
    InstrumentLeg_12.insert(EncodedLegIssuer_12.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_12(933133241);
    noLegs_0_0.set(EncodedLegIssuerLen_12);
    InstrumentLeg_12.insert(EncodedLegIssuerLen_12.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_12("DATA_132483342");
    noLegs_0_0.set(EncodedLegSecurityDesc_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDesc_12.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_12(1884782835);
    noLegs_0_0.set(EncodedLegSecurityDescLen_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDescLen_12.getString());
    FIX::LegCFICode LegCFICode_12("STRING_12817752");
    noLegs_0_0.set(LegCFICode_12);
    InstrumentLeg_12.insert(LegCFICode_12.getString());
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("12785823");
    noLegs_0_0.set(LegContractMultiplier_12);
    InstrumentLeg_12.insert(LegContractMultiplier_12.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_12(267965097);
    noLegs_0_0.set(LegContractMultiplierUnit_12);
    InstrumentLeg_12.insert(LegContractMultiplierUnit_12.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_12("MONTHYEAR_1414195170");
    noLegs_0_0.set(LegContractSettlMonth_12);
    InstrumentLeg_12.insert(LegContractSettlMonth_12.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_12("COUNTRY_975935270");
    noLegs_0_0.set(LegCountryOfIssue_12);
    InstrumentLeg_12.insert(LegCountryOfIssue_12.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_12("LOCALMKTDATE_907162746");
    noLegs_0_0.set(LegCouponPaymentDate_12);
    InstrumentLeg_12.insert(LegCouponPaymentDate_12.getString());
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("7.520000");
    noLegs_0_0.set(LegCouponRate_12);
    InstrumentLeg_12.insert(LegCouponRate_12.getString());
    FIX::LegCreditRating LegCreditRating_12("STRING_1033294771");
    noLegs_0_0.set(LegCreditRating_12);
    InstrumentLeg_12.insert(LegCreditRating_12.getString());
    FIX::LegCurrency LegCurrency_12("GBP");
    noLegs_0_0.set(LegCurrency_12);
    InstrumentLeg_12.insert(LegCurrency_12.getString());
    FIX::LegDatedDate LegDatedDate_12("LOCALMKTDATE_1106342146");
    noLegs_0_0.set(LegDatedDate_12);
    InstrumentLeg_12.insert(LegDatedDate_12.getString());
    FIX::LegExerciseStyle LegExerciseStyle_12(460402530);
    noLegs_0_0.set(LegExerciseStyle_12);
    InstrumentLeg_12.insert(LegExerciseStyle_12.getString());
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("904860");
    noLegs_0_0.set(LegFactor_12);
    InstrumentLeg_12.insert(LegFactor_12.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_12(1950508805);
    noLegs_0_0.set(LegFlowScheduleType_12);
    InstrumentLeg_12.insert(LegFlowScheduleType_12.getString());
    FIX::LegInstrRegistry LegInstrRegistry_12("STRING_1359417741");
    noLegs_0_0.set(LegInstrRegistry_12);
    InstrumentLeg_12.insert(LegInstrRegistry_12.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_12("LOCALMKTDATE_1532131038");
    noLegs_0_0.set(LegInterestAccrualDate_12);
    InstrumentLeg_12.insert(LegInterestAccrualDate_12.getString());
    FIX::LegIssueDate LegIssueDate_12("LOCALMKTDATE_75422366");
    noLegs_0_0.set(LegIssueDate_12);
    InstrumentLeg_12.insert(LegIssueDate_12.getString());
    FIX::LegIssuer LegIssuer_12("STRING_1391670070");
    noLegs_0_0.set(LegIssuer_12);
    InstrumentLeg_12.insert(LegIssuer_12.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_12("STRING_1996771414");
    noLegs_0_0.set(LegLocaleOfIssue_12);
    InstrumentLeg_12.insert(LegLocaleOfIssue_12.getString());
    FIX::LegMaturityDate LegMaturityDate_12("LOCALMKTDATE_2073207344");
    noLegs_0_0.set(LegMaturityDate_12);
    InstrumentLeg_12.insert(LegMaturityDate_12.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_12("MONTHYEAR_265509234");
    noLegs_0_0.set(LegMaturityMonthYear_12);
    InstrumentLeg_12.insert(LegMaturityMonthYear_12.getString());
    FIX::LegMaturityTime LegMaturityTime_12("TZTIMEONLY_14246093");
    noLegs_0_0.set(LegMaturityTime_12);
    InstrumentLeg_12.insert(LegMaturityTime_12.getString());
    FIX::LegOptAttribute LegOptAttribute_12('1');
    noLegs_0_0.set(LegOptAttribute_12);
    InstrumentLeg_12.insert(LegOptAttribute_12.getString());
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("887892");
    noLegs_0_0.set(LegOptionRatio_12);
    InstrumentLeg_12.insert(LegOptionRatio_12.getString());
    FIX::LegPool LegPool_12("STRING_819716167");
    noLegs_0_0.set(LegPool_12);
    InstrumentLeg_12.insert(LegPool_12.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_12("STRING_1461584987");
    noLegs_0_0.set(LegPriceUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasure_12.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("12918281");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasureQty_12.getString());
    FIX::LegProduct LegProduct_12(1608309667);
    noLegs_0_0.set(LegProduct_12);
    InstrumentLeg_12.insert(LegProduct_12.getString());
    FIX::LegPutOrCall LegPutOrCall_12(247234580);
    noLegs_0_0.set(LegPutOrCall_12);
    InstrumentLeg_12.insert(LegPutOrCall_12.getString());
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("14243114");
    noLegs_0_0.set(LegRatioQty_12);
    InstrumentLeg_12.insert(LegRatioQty_12.getString());
    FIX::LegRedemptionDate LegRedemptionDate_12("LOCALMKTDATE_1345608854");
    noLegs_0_0.set(LegRedemptionDate_12);
    InstrumentLeg_12.insert(LegRedemptionDate_12.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_12("STRING_260052333");
    noLegs_0_0.set(LegRepoCollateralSecurityType_12);
    InstrumentLeg_12.insert(LegRepoCollateralSecurityType_12.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("1.420000");
    noLegs_0_0.set(LegRepurchaseRate_12);
    InstrumentLeg_12.insert(LegRepurchaseRate_12.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_12(1613573951);
    noLegs_0_0.set(LegRepurchaseTerm_12);
    InstrumentLeg_12.insert(LegRepurchaseTerm_12.getString());
    FIX::LegSecurityDesc LegSecurityDesc_12("STRING_1674247503");
    noLegs_0_0.set(LegSecurityDesc_12);
    InstrumentLeg_12.insert(LegSecurityDesc_12.getString());
    FIX::LegSecurityExchange LegSecurityExchange_12("EXCHANGE_1531345413");
    noLegs_0_0.set(LegSecurityExchange_12);
    InstrumentLeg_12.insert(LegSecurityExchange_12.getString());
    FIX::LegSecurityID LegSecurityID_12("STRING_373253049");
    noLegs_0_0.set(LegSecurityID_12);
    InstrumentLeg_12.insert(LegSecurityID_12.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_12("STRING_295704608");
    noLegs_0_0.set(LegSecurityIDSource_12);
    InstrumentLeg_12.insert(LegSecurityIDSource_12.getString());
    FIX::LegSecuritySubType LegSecuritySubType_12("STRING_417156536");
    noLegs_0_0.set(LegSecuritySubType_12);
    InstrumentLeg_12.insert(LegSecuritySubType_12.getString());
    FIX::LegSecurityType LegSecurityType_12("STRING_1043402185");
    noLegs_0_0.set(LegSecurityType_12);
    InstrumentLeg_12.insert(LegSecurityType_12.getString());
    FIX::LegSide LegSide_12('2');
    noLegs_0_0.set(LegSide_12);
    InstrumentLeg_12.insert(LegSide_12.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_12("STRING_1523498683");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_12);
    InstrumentLeg_12.insert(LegStateOrProvinceOfIssue_12.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_12("JPY");
    noLegs_0_0.set(LegStrikeCurrency_12);
    InstrumentLeg_12.insert(LegStrikeCurrency_12.getString());
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("13265238");
    noLegs_0_0.set(LegStrikePrice_12);
    InstrumentLeg_12.insert(LegStrikePrice_12.getString());
    FIX::LegSymbol LegSymbol_12("STRING_715738808");
    noLegs_0_0.set(LegSymbol_12);
    InstrumentLeg_12.insert(LegSymbol_12.getString());
    FIX::LegSymbolSfx LegSymbolSfx_12("STRING_1898596870");
    noLegs_0_0.set(LegSymbolSfx_12);
    InstrumentLeg_12.insert(LegSymbolSfx_12.getString());
    FIX::LegTimeUnit LegTimeUnit_12("STRING_1401946206");
    noLegs_0_0.set(LegTimeUnit_12);
    InstrumentLeg_12.insert(LegTimeUnit_12.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_12("STRING_2107408879");
    noLegs_0_0.set(LegUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegUnitOfMeasure_12.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("17478846");
    noLegs_0_0.set(LegUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegUnitOfMeasureQty_12.getString());
    all_values.push_back(InstrumentLeg_12);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      FIX::LegSecurityAltID LegSecurityAltID_26("STRING_225434465");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltID_26.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_26("STRING_1762130729");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltIDSource_26.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_13;
    FIX::EncodedLegIssuer EncodedLegIssuer_13("DATA_680783046");
    noLegs_0_1.set(EncodedLegIssuer_13);
    InstrumentLeg_13.insert(EncodedLegIssuer_13.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_13(314223752);
    noLegs_0_1.set(EncodedLegIssuerLen_13);
    InstrumentLeg_13.insert(EncodedLegIssuerLen_13.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_13("DATA_434363248");
    noLegs_0_1.set(EncodedLegSecurityDesc_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDesc_13.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_13(2142368033);
    noLegs_0_1.set(EncodedLegSecurityDescLen_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDescLen_13.getString());
    FIX::LegCFICode LegCFICode_13("STRING_1606051859");
    noLegs_0_1.set(LegCFICode_13);
    InstrumentLeg_13.insert(LegCFICode_13.getString());
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("20426729");
    noLegs_0_1.set(LegContractMultiplier_13);
    InstrumentLeg_13.insert(LegContractMultiplier_13.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_13(242118966);
    noLegs_0_1.set(LegContractMultiplierUnit_13);
    InstrumentLeg_13.insert(LegContractMultiplierUnit_13.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_13("MONTHYEAR_882879661");
    noLegs_0_1.set(LegContractSettlMonth_13);
    InstrumentLeg_13.insert(LegContractSettlMonth_13.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_13("COUNTRY_1240798121");
    noLegs_0_1.set(LegCountryOfIssue_13);
    InstrumentLeg_13.insert(LegCountryOfIssue_13.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_13("LOCALMKTDATE_502171299");
    noLegs_0_1.set(LegCouponPaymentDate_13);
    InstrumentLeg_13.insert(LegCouponPaymentDate_13.getString());
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("98.040000");
    noLegs_0_1.set(LegCouponRate_13);
    InstrumentLeg_13.insert(LegCouponRate_13.getString());
    FIX::LegCreditRating LegCreditRating_13("STRING_706888424");
    noLegs_0_1.set(LegCreditRating_13);
    InstrumentLeg_13.insert(LegCreditRating_13.getString());
    FIX::LegCurrency LegCurrency_13("CHF");
    noLegs_0_1.set(LegCurrency_13);
    InstrumentLeg_13.insert(LegCurrency_13.getString());
    FIX::LegDatedDate LegDatedDate_13("LOCALMKTDATE_1080141473");
    noLegs_0_1.set(LegDatedDate_13);
    InstrumentLeg_13.insert(LegDatedDate_13.getString());
    FIX::LegExerciseStyle LegExerciseStyle_13(324639762);
    noLegs_0_1.set(LegExerciseStyle_13);
    InstrumentLeg_13.insert(LegExerciseStyle_13.getString());
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("12393081");
    noLegs_0_1.set(LegFactor_13);
    InstrumentLeg_13.insert(LegFactor_13.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_13(2123543658);
    noLegs_0_1.set(LegFlowScheduleType_13);
    InstrumentLeg_13.insert(LegFlowScheduleType_13.getString());
    FIX::LegInstrRegistry LegInstrRegistry_13("STRING_600619502");
    noLegs_0_1.set(LegInstrRegistry_13);
    InstrumentLeg_13.insert(LegInstrRegistry_13.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_13("LOCALMKTDATE_615323140");
    noLegs_0_1.set(LegInterestAccrualDate_13);
    InstrumentLeg_13.insert(LegInterestAccrualDate_13.getString());
    FIX::LegIssueDate LegIssueDate_13("LOCALMKTDATE_1479864725");
    noLegs_0_1.set(LegIssueDate_13);
    InstrumentLeg_13.insert(LegIssueDate_13.getString());
    FIX::LegIssuer LegIssuer_13("STRING_967085334");
    noLegs_0_1.set(LegIssuer_13);
    InstrumentLeg_13.insert(LegIssuer_13.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_13("STRING_1941846981");
    noLegs_0_1.set(LegLocaleOfIssue_13);
    InstrumentLeg_13.insert(LegLocaleOfIssue_13.getString());
    FIX::LegMaturityDate LegMaturityDate_13("LOCALMKTDATE_48119886");
    noLegs_0_1.set(LegMaturityDate_13);
    InstrumentLeg_13.insert(LegMaturityDate_13.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_13("MONTHYEAR_718198556");
    noLegs_0_1.set(LegMaturityMonthYear_13);
    InstrumentLeg_13.insert(LegMaturityMonthYear_13.getString());
    FIX::LegMaturityTime LegMaturityTime_13("TZTIMEONLY_1196309539");
    noLegs_0_1.set(LegMaturityTime_13);
    InstrumentLeg_13.insert(LegMaturityTime_13.getString());
    FIX::LegOptAttribute LegOptAttribute_13('8');
    noLegs_0_1.set(LegOptAttribute_13);
    InstrumentLeg_13.insert(LegOptAttribute_13.getString());
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("3185995");
    noLegs_0_1.set(LegOptionRatio_13);
    InstrumentLeg_13.insert(LegOptionRatio_13.getString());
    FIX::LegPool LegPool_13("STRING_376495794");
    noLegs_0_1.set(LegPool_13);
    InstrumentLeg_13.insert(LegPool_13.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_13("STRING_233479582");
    noLegs_0_1.set(LegPriceUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasure_13.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("20807302");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasureQty_13.getString());
    FIX::LegProduct LegProduct_13(1057278840);
    noLegs_0_1.set(LegProduct_13);
    InstrumentLeg_13.insert(LegProduct_13.getString());
    FIX::LegPutOrCall LegPutOrCall_13(547703334);
    noLegs_0_1.set(LegPutOrCall_13);
    InstrumentLeg_13.insert(LegPutOrCall_13.getString());
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("3676098");
    noLegs_0_1.set(LegRatioQty_13);
    InstrumentLeg_13.insert(LegRatioQty_13.getString());
    FIX::LegRedemptionDate LegRedemptionDate_13("LOCALMKTDATE_1052163225");
    noLegs_0_1.set(LegRedemptionDate_13);
    InstrumentLeg_13.insert(LegRedemptionDate_13.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_13("STRING_6271546");
    noLegs_0_1.set(LegRepoCollateralSecurityType_13);
    InstrumentLeg_13.insert(LegRepoCollateralSecurityType_13.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("91.400000");
    noLegs_0_1.set(LegRepurchaseRate_13);
    InstrumentLeg_13.insert(LegRepurchaseRate_13.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_13(1294282191);
    noLegs_0_1.set(LegRepurchaseTerm_13);
    InstrumentLeg_13.insert(LegRepurchaseTerm_13.getString());
    FIX::LegSecurityDesc LegSecurityDesc_13("STRING_889151207");
    noLegs_0_1.set(LegSecurityDesc_13);
    InstrumentLeg_13.insert(LegSecurityDesc_13.getString());
    FIX::LegSecurityExchange LegSecurityExchange_13("EXCHANGE_1503597261");
    noLegs_0_1.set(LegSecurityExchange_13);
    InstrumentLeg_13.insert(LegSecurityExchange_13.getString());
    FIX::LegSecurityID LegSecurityID_13("STRING_1796453490");
    noLegs_0_1.set(LegSecurityID_13);
    InstrumentLeg_13.insert(LegSecurityID_13.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_13("STRING_179957363");
    noLegs_0_1.set(LegSecurityIDSource_13);
    InstrumentLeg_13.insert(LegSecurityIDSource_13.getString());
    FIX::LegSecuritySubType LegSecuritySubType_13("STRING_63002037");
    noLegs_0_1.set(LegSecuritySubType_13);
    InstrumentLeg_13.insert(LegSecuritySubType_13.getString());
    FIX::LegSecurityType LegSecurityType_13("STRING_1825388645");
    noLegs_0_1.set(LegSecurityType_13);
    InstrumentLeg_13.insert(LegSecurityType_13.getString());
    FIX::LegSide LegSide_13('1');
    noLegs_0_1.set(LegSide_13);
    InstrumentLeg_13.insert(LegSide_13.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_13("STRING_1143143511");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_13);
    InstrumentLeg_13.insert(LegStateOrProvinceOfIssue_13.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_13("USD");
    noLegs_0_1.set(LegStrikeCurrency_13);
    InstrumentLeg_13.insert(LegStrikeCurrency_13.getString());
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("11192035");
    noLegs_0_1.set(LegStrikePrice_13);
    InstrumentLeg_13.insert(LegStrikePrice_13.getString());
    FIX::LegSymbol LegSymbol_13("STRING_603164262");
    noLegs_0_1.set(LegSymbol_13);
    InstrumentLeg_13.insert(LegSymbol_13.getString());
    FIX::LegSymbolSfx LegSymbolSfx_13("STRING_709256530");
    noLegs_0_1.set(LegSymbolSfx_13);
    InstrumentLeg_13.insert(LegSymbolSfx_13.getString());
    FIX::LegTimeUnit LegTimeUnit_13("STRING_451584599");
    noLegs_0_1.set(LegTimeUnit_13);
    InstrumentLeg_13.insert(LegTimeUnit_13.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_13("STRING_1570249596");
    noLegs_0_1.set(LegUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegUnitOfMeasure_13.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("5036198");
    noLegs_0_1.set(LegUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegUnitOfMeasureQty_13.getString());
    all_values.push_back(InstrumentLeg_13);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      FIX::LegSecurityAltID LegSecurityAltID_27("STRING_140964505");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltID_27.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_27("STRING_1699929403");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltIDSource_27.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      FIX::LegSecurityAltID LegSecurityAltID_28("STRING_507749602");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltID_28.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_28("STRING_459564049");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltIDSource_28.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      FIX::LegSecurityAltID LegSecurityAltID_29("STRING_2076425197");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltID_29.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_29("STRING_741229184");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltIDSource_29.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("6.750000");
  msg.set(AttachmentPoint_9);
  Instrument_9.insert(AttachmentPoint_9.getString());
  FIX::CFICode CFICode_9("STRING_986220389");
  msg.set(CFICode_9);
  Instrument_9.insert(CFICode_9.getString());
  FIX::CPProgram CPProgram_9(1);
  msg.set(CPProgram_9);
  Instrument_9.insert(CPProgram_9.getString());
  FIX::CPRegType CPRegType_9("STRING_760420548");
  msg.set(CPRegType_9);
  Instrument_9.insert(CPRegType_9.getString());
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("20383836");
  msg.set(CapPrice_9);
  Instrument_9.insert(CapPrice_9.getString());
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("12952040");
  msg.set(ContractMultiplier_9);
  Instrument_9.insert(ContractMultiplier_9.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_9(2);
  msg.set(ContractMultiplierUnit_9);
  Instrument_9.insert(ContractMultiplierUnit_9.getString());
  FIX::ContractSettlMonth ContractSettlMonth_9("MONTHYEAR_1185182158");
  msg.set(ContractSettlMonth_9);
  Instrument_9.insert(ContractSettlMonth_9.getString());
  FIX::CountryOfIssue CountryOfIssue_9("COUNTRY_36871624");
  msg.set(CountryOfIssue_9);
  Instrument_9.insert(CountryOfIssue_9.getString());
  FIX::CouponPaymentDate CouponPaymentDate_9("LOCALMKTDATE_379333302");
  msg.set(CouponPaymentDate_9);
  Instrument_9.insert(CouponPaymentDate_9.getString());
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("20.000000");
  msg.set(CouponRate_9);
  Instrument_9.insert(CouponRate_9.getString());
  FIX::CreditRating CreditRating_9("STRING_216828988");
  msg.set(CreditRating_9);
  Instrument_9.insert(CreditRating_9.getString());
  FIX::DatedDate DatedDate_9("LOCALMKTDATE_442335340");
  msg.set(DatedDate_9);
  Instrument_9.insert(DatedDate_9.getString());
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("69.970000");
  msg.set(DetachmentPoint_9);
  Instrument_9.insert(DetachmentPoint_9.getString());
  FIX::EncodedIssuer EncodedIssuer_9("DATA_1218937920");
  msg.set(EncodedIssuer_9);
  Instrument_9.insert(EncodedIssuer_9.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_9(1585478851);
  msg.set(EncodedIssuerLen_9);
  Instrument_9.insert(EncodedIssuerLen_9.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_9("DATA_514601757");
  msg.set(EncodedSecurityDesc_9);
  Instrument_9.insert(EncodedSecurityDesc_9.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_9(1312871310);
  msg.set(EncodedSecurityDescLen_9);
  Instrument_9.insert(EncodedSecurityDescLen_9.getString());
  FIX::ExerciseStyle ExerciseStyle_9(0);
  msg.set(ExerciseStyle_9);
  Instrument_9.insert(ExerciseStyle_9.getString());
  FIX::Factor Factor_9;
  Factor_9.setString("11177660");
  msg.set(Factor_9);
  Instrument_9.insert(Factor_9.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_9(false);
  msg.set(FlexProductEligibilityIndicator_9);
  Instrument_9.insert(FlexProductEligibilityIndicator_9.getString());
  FIX::FlexibleIndicator FlexibleIndicator_9(false);
  msg.set(FlexibleIndicator_9);
  Instrument_9.insert(FlexibleIndicator_9.getString());
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("5405319");
  msg.set(FloorPrice_9);
  Instrument_9.insert(FloorPrice_9.getString());
  FIX::FlowScheduleType FlowScheduleType_9(1);
  msg.set(FlowScheduleType_9);
  Instrument_9.insert(FlowScheduleType_9.getString());
  FIX::InstrRegistry InstrRegistry_9("STRING_1508487808");
  msg.set(InstrRegistry_9);
  Instrument_9.insert(InstrRegistry_9.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_9('6');
  msg.set(InstrmtAssignmentMethod_9);
  Instrument_9.insert(InstrmtAssignmentMethod_9.getString());
  FIX::InterestAccrualDate InterestAccrualDate_9("LOCALMKTDATE_2078193459");
  msg.set(InterestAccrualDate_9);
  Instrument_9.insert(InterestAccrualDate_9.getString());
  FIX::IssueDate IssueDate_9("LOCALMKTDATE_2016237410");
  msg.set(IssueDate_9);
  Instrument_9.insert(IssueDate_9.getString());
  FIX::Issuer Issuer_9("STRING_1141060522");
  msg.set(Issuer_9);
  Instrument_9.insert(Issuer_9.getString());
  FIX::ListMethod ListMethod_9(0);
  msg.set(ListMethod_9);
  Instrument_9.insert(ListMethod_9.getString());
  FIX::LocaleOfIssue LocaleOfIssue_9("STRING_609982947");
  msg.set(LocaleOfIssue_9);
  Instrument_9.insert(LocaleOfIssue_9.getString());
  FIX::MaturityDate MaturityDate_9("LOCALMKTDATE_1533871197");
  msg.set(MaturityDate_9);
  Instrument_9.insert(MaturityDate_9.getString());
  FIX::MaturityMonthYear MaturityMonthYear_9("MONTHYEAR_845871749");
  msg.set(MaturityMonthYear_9);
  Instrument_9.insert(MaturityMonthYear_9.getString());
  FIX::MaturityTime MaturityTime_9("TZTIMEONLY_1898915466");
  msg.set(MaturityTime_9);
  Instrument_9.insert(MaturityTime_9.getString());
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("1468080");
  msg.set(MinPriceIncrement_9);
  Instrument_9.insert(MinPriceIncrement_9.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("7367717");
  msg.set(MinPriceIncrementAmount_9);
  Instrument_9.insert(MinPriceIncrementAmount_9.getString());
  FIX::NTPositionLimit NTPositionLimit_9(1046635883);
  msg.set(NTPositionLimit_9);
  Instrument_9.insert(NTPositionLimit_9.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("77.860000");
  msg.set(NotionalPercentageOutstanding_9);
  Instrument_9.insert(NotionalPercentageOutstanding_9.getString());
  FIX::OptAttribute OptAttribute_9('1');
  msg.set(OptAttribute_9);
  Instrument_9.insert(OptAttribute_9.getString());
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("10835075");
  msg.set(OptPayoutAmount_9);
  Instrument_9.insert(OptPayoutAmount_9.getString());
  FIX::OptPayoutType OptPayoutType_9(2);
  msg.set(OptPayoutType_9);
  Instrument_9.insert(OptPayoutType_9.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("22.260000");
  msg.set(OriginalNotionalPercentageOutstanding_9);
  Instrument_9.insert(OriginalNotionalPercentageOutstanding_9.getString());
  FIX::Pool Pool_9("STRING_1300336495");
  msg.set(Pool_9);
  Instrument_9.insert(Pool_9.getString());
  FIX::PositionLimit PositionLimit_9(1991696429);
  msg.set(PositionLimit_9);
  Instrument_9.insert(PositionLimit_9.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_9("STRING_STD");
  msg.set(PriceQuoteMethod_9);
  Instrument_9.insert(PriceQuoteMethod_9.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_9("STRING_371790768");
  msg.set(PriceUnitOfMeasure_9);
  Instrument_9.insert(PriceUnitOfMeasure_9.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("14296916");
  msg.set(PriceUnitOfMeasureQty_9);
  Instrument_9.insert(PriceUnitOfMeasureQty_9.getString());
  FIX::Product Product_11(10);
  msg.set(Product_11);
  Instrument_9.insert(Product_11.getString());
  FIX::ProductComplex ProductComplex_9("STRING_1684662078");
  msg.set(ProductComplex_9);
  Instrument_9.insert(ProductComplex_9.getString());
  FIX::PutOrCall PutOrCall_9(0);
  msg.set(PutOrCall_9);
  Instrument_9.insert(PutOrCall_9.getString());
  FIX::RedemptionDate RedemptionDate_9("LOCALMKTDATE_605563352");
  msg.set(RedemptionDate_9);
  Instrument_9.insert(RedemptionDate_9.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_9("STRING_1559306271");
  msg.set(RepoCollateralSecurityType_9);
  Instrument_9.insert(RepoCollateralSecurityType_9.getString());
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("0.320000");
  msg.set(RepurchaseRate_9);
  Instrument_9.insert(RepurchaseRate_9.getString());
  FIX::RepurchaseTerm RepurchaseTerm_9(1146095319);
  msg.set(RepurchaseTerm_9);
  Instrument_9.insert(RepurchaseTerm_9.getString());
  FIX::RestructuringType RestructuringType_9("STRING_FR");
  msg.set(RestructuringType_9);
  Instrument_9.insert(RestructuringType_9.getString());
  FIX::SecurityDesc SecurityDesc_9("STRING_209194192");
  msg.set(SecurityDesc_9);
  Instrument_9.insert(SecurityDesc_9.getString());
  FIX::SecurityExchange SecurityExchange_9("EXCHANGE_1827591792");
  msg.set(SecurityExchange_9);
  Instrument_9.insert(SecurityExchange_9.getString());
  FIX::SecurityGroup SecurityGroup_9("STRING_1868280139");
  msg.set(SecurityGroup_9);
  Instrument_9.insert(SecurityGroup_9.getString());
  FIX::SecurityID SecurityID_9("STRING_77947955");
  msg.set(SecurityID_9);
  Instrument_9.insert(SecurityID_9.getString());
  FIX::SecurityIDSource SecurityIDSource_9("STRING_B");
  msg.set(SecurityIDSource_9);
  Instrument_9.insert(SecurityIDSource_9.getString());
  FIX::SecurityStatus SecurityStatus_9("STRING_1");
  msg.set(SecurityStatus_9);
  Instrument_9.insert(SecurityStatus_9.getString());
  FIX::SecuritySubType SecuritySubType_9("STRING_687930902");
  msg.set(SecuritySubType_9);
  Instrument_9.insert(SecuritySubType_9.getString());
  FIX::SecurityType SecurityType_11("STRING_FXSPOT");
  msg.set(SecurityType_11);
  Instrument_9.insert(SecurityType_11.getString());
  FIX::Seniority Seniority_9("STRING_SB");
  msg.set(Seniority_9);
  Instrument_9.insert(Seniority_9.getString());
  FIX::SettlMethod SettlMethod_9('C');
  msg.set(SettlMethod_9);
  Instrument_9.insert(SettlMethod_9.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_9("STRING_354364312");
  msg.set(SettleOnOpenFlag_9);
  Instrument_9.insert(SettleOnOpenFlag_9.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_9("STRING_1163091317");
  msg.set(StateOrProvinceOfIssue_9);
  Instrument_9.insert(StateOrProvinceOfIssue_9.getString());
  FIX::StrikeCurrency StrikeCurrency_9("CAN");
  msg.set(StrikeCurrency_9);
  Instrument_9.insert(StrikeCurrency_9.getString());
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("9375615");
  msg.set(StrikeMultiplier_9);
  Instrument_9.insert(StrikeMultiplier_9.getString());
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("4220224");
  msg.set(StrikePrice_9);
  Instrument_9.insert(StrikePrice_9.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_9(1);
  msg.set(StrikePriceBoundaryMethod_9);
  Instrument_9.insert(StrikePriceBoundaryMethod_9.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("37.700000");
  msg.set(StrikePriceBoundaryPrecision_9);
  Instrument_9.insert(StrikePriceBoundaryPrecision_9.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_9(3);
  msg.set(StrikePriceDeterminationMethod_9);
  Instrument_9.insert(StrikePriceDeterminationMethod_9.getString());
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("7704823");
  msg.set(StrikeValue_9);
  Instrument_9.insert(StrikeValue_9.getString());
  FIX::Symbol Symbol_9("STRING_519379346");
  msg.set(Symbol_9);
  Instrument_9.insert(Symbol_9.getString());
  FIX::SymbolSfx SymbolSfx_9("STRING_CD");
  msg.set(SymbolSfx_9);
  Instrument_9.insert(SymbolSfx_9.getString());
  FIX::TimeUnit TimeUnit_9("STRING_D");
  msg.set(TimeUnit_9);
  Instrument_9.insert(TimeUnit_9.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_9(4);
  msg.set(UnderlyingPriceDeterminationMethod_9);
  Instrument_9.insert(UnderlyingPriceDeterminationMethod_9.getString());
  FIX::UnitOfMeasure UnitOfMeasure_9("STRING_MWh");
  msg.set(UnitOfMeasure_9);
  Instrument_9.insert(UnitOfMeasure_9.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("20395806");
  msg.set(UnitOfMeasureQty_9);
  Instrument_9.insert(UnitOfMeasureQty_9.getString());
  FIX::ValuationMethod ValuationMethod_9("STRING_FUT");
  msg.set(ValuationMethod_9);
  Instrument_9.insert(ValuationMethod_9.getString());
  all_values.push_back(Instrument_9);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    FIX::ComplexEventCondition ComplexEventCondition_22(2);
    noComplexEvents_0_0.set(ComplexEventCondition_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventCondition_22.getString());
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("17588353");
    noComplexEvents_0_0.set(ComplexEventPrice_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPrice_22.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_22(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryMethod_22.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("12.380000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryPrecision_22.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_22(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceTimeType_22.getString());
    FIX::ComplexEventType ComplexEventType_22(9);
    noComplexEvents_0_0.set(ComplexEventType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventType_22.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("10274291");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexOptPayoutAmount_22.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_22);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      FIX::ComplexEventEndDate ComplexEventEndDate_48(FIX::UTCTIMESTAMP(7, 7, 5, 19, 1, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventEndDate_48.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_48(FIX::UTCTIMESTAMP(3, 58, 52, 15, 5, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventStartDate_48.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        FIX::ComplexEventEndTime ComplexEventEndTime_97(FIX::UTCTIMEONLY(4, 17, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventEndTime_97.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_97(FIX::UTCTIMEONLY(22, 56, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventStartTime_97.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        FIX::ComplexEventEndTime ComplexEventEndTime_98(FIX::UTCTIMEONLY(18, 21, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventEndTime_98.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_98(FIX::UTCTIMEONLY(8, 31, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventStartTime_98.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        FIX::ComplexEventEndTime ComplexEventEndTime_99(FIX::UTCTIMEONLY(2, 45, 1));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventEndTime_99.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_99(FIX::UTCTIMEONLY(9, 15, 15));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventStartTime_99.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      FIX::ComplexEventEndDate ComplexEventEndDate_49(FIX::UTCTIMESTAMP(13, 59, 7, 1, 3, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventEndDate_49.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_49(FIX::UTCTIMESTAMP(6, 40, 16, 3, 7, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventStartDate_49.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        FIX::ComplexEventEndTime ComplexEventEndTime_100(FIX::UTCTIMEONLY(11, 37, 48));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventEndTime_100.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_100(FIX::UTCTIMEONLY(14, 19, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventStartTime_100.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        FIX::ComplexEventEndTime ComplexEventEndTime_101(FIX::UTCTIMEONLY(13, 30, 51));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventEndTime_101.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_101(FIX::UTCTIMEONLY(15, 58, 57));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventStartTime_101.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    FIX::ComplexEventCondition ComplexEventCondition_23(2);
    noComplexEvents_0_1.set(ComplexEventCondition_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventCondition_23.getString());
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("2849457");
    noComplexEvents_0_1.set(ComplexEventPrice_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPrice_23.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_23(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryMethod_23.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("65.420000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryPrecision_23.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_23(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceTimeType_23.getString());
    FIX::ComplexEventType ComplexEventType_23(1);
    noComplexEvents_0_1.set(ComplexEventType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventType_23.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("1199537");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexOptPayoutAmount_23.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_23);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      FIX::ComplexEventEndDate ComplexEventEndDate_50(FIX::UTCTIMESTAMP(21, 57, 45, 20, 3, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventEndDate_50.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_50(FIX::UTCTIMESTAMP(13, 39, 19, 5, 6, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventStartDate_50.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        FIX::ComplexEventEndTime ComplexEventEndTime_102(FIX::UTCTIMEONLY(16, 49, 22));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventEndTime_102.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_102(FIX::UTCTIMEONLY(20, 12, 48));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventStartTime_102.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      FIX::ComplexEventEndDate ComplexEventEndDate_51(FIX::UTCTIMESTAMP(4, 37, 14, 14, 5, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventEndDate_51.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_51(FIX::UTCTIMESTAMP(17, 5, 24, 14, 2, 2002));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventStartDate_51.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        FIX::ComplexEventEndTime ComplexEventEndTime_103(FIX::UTCTIMEONLY(7, 55, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventEndTime_103.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_103(FIX::UTCTIMEONLY(4, 29, 35));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventStartTime_103.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        FIX::ComplexEventEndTime ComplexEventEndTime_104(FIX::UTCTIMEONLY(13, 16, 13));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventEndTime_104.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_104(FIX::UTCTIMEONLY(16, 25, 16));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventStartTime_104.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      FIX::ComplexEventEndDate ComplexEventEndDate_52(FIX::UTCTIMESTAMP(18, 53, 59, 0, 10, 2011));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventEndDate_52.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_52(FIX::UTCTIMESTAMP(14, 16, 3, 5, 11, 2006));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventStartDate_52.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        FIX::ComplexEventEndTime ComplexEventEndTime_105(FIX::UTCTIMEONLY(5, 12, 13));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventEndTime_105.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_105(FIX::UTCTIMEONLY(16, 42, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventStartTime_105.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        FIX::ComplexEventEndTime ComplexEventEndTime_106(FIX::UTCTIMEONLY(12, 57, 36));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventEndTime_106.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_106(FIX::UTCTIMEONLY(1, 53, 56));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventStartTime_106.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_24;
    FIX::ComplexEventCondition ComplexEventCondition_24(1);
    noComplexEvents_0_2.set(ComplexEventCondition_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventCondition_24.getString());
    FIX::ComplexEventPrice ComplexEventPrice_24;
    ComplexEventPrice_24.setString("20946912");
    noComplexEvents_0_2.set(ComplexEventPrice_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPrice_24.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_24(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryMethod_24.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("53.690000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryPrecision_24.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_24(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceTimeType_24.getString());
    FIX::ComplexEventType ComplexEventType_24(9);
    noComplexEvents_0_2.set(ComplexEventType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventType_24.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("2324992");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexOptPayoutAmount_24.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_24);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      FIX::ComplexEventEndDate ComplexEventEndDate_53(FIX::UTCTIMESTAMP(20, 38, 17, 14, 1, 2012));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventEndDate_53.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_53(FIX::UTCTIMESTAMP(5, 54, 41, 23, 3, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventStartDate_53.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        FIX::ComplexEventEndTime ComplexEventEndTime_107(FIX::UTCTIMEONLY(16, 5, 25));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventEndTime_107.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_107(FIX::UTCTIMEONLY(19, 19, 56));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventStartTime_107.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        FIX::ComplexEventEndTime ComplexEventEndTime_108(FIX::UTCTIMEONLY(22, 37, 14));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventEndTime_108.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_108(FIX::UTCTIMEONLY(19, 54, 8));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventStartTime_108.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        FIX::ComplexEventEndTime ComplexEventEndTime_109(FIX::UTCTIMEONLY(18, 38, 1));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventEndTime_109.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_109(FIX::UTCTIMEONLY(2, 43, 25));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventStartTime_109.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      FIX::ComplexEventEndDate ComplexEventEndDate_54(FIX::UTCTIMESTAMP(18, 59, 55, 8, 4, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventEndDate_54.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_54(FIX::UTCTIMESTAMP(23, 1, 11, 23, 1, 2000));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventStartDate_54.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        FIX::ComplexEventEndTime ComplexEventEndTime_110(FIX::UTCTIMEONLY(17, 8, 43));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventEndTime_110.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_110(FIX::UTCTIMEONLY(15, 37, 51));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventStartTime_110.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        FIX::ComplexEventEndTime ComplexEventEndTime_111(FIX::UTCTIMEONLY(12, 30, 35));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventEndTime_111.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_111(FIX::UTCTIMEONLY(0, 11, 18));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventStartTime_111.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    FIX::EventDate EventDate_19("LOCALMKTDATE_1979378921");
    noEvents_0_0.set(EventDate_19);
    EvntGrp_NoEvents_19.insert(EventDate_19.getString());
    FIX::EventPx EventPx_19;
    EventPx_19.setString("15362595");
    noEvents_0_0.set(EventPx_19);
    EvntGrp_NoEvents_19.insert(EventPx_19.getString());
    FIX::EventText EventText_19("STRING_36120444");
    noEvents_0_0.set(EventText_19);
    EvntGrp_NoEvents_19.insert(EventText_19.getString());
    FIX::EventTime EventTime_19(FIX::UTCTIMESTAMP(12, 28, 15, 15, 10, 2001));
    noEvents_0_0.set(EventTime_19);
    EvntGrp_NoEvents_19.insert(EventTime_19.getString());
    FIX::EventType EventType_19(15);
    noEvents_0_0.set(EventType_19);
    EvntGrp_NoEvents_19.insert(EventType_19.getString());
    all_values.push_back(EvntGrp_NoEvents_19);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    FIX::InstrumentPartyID InstrumentPartyID_14("STRING_1746634249");
    noInstrumentParties_0_0.set(InstrumentPartyID_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyID_14.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_14('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyIDSource_14.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_14(1723982099);
    noInstrumentParties_0_0.set(InstrumentPartyRole_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyRole_14.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      FIX::InstrumentPartySubID InstrumentPartySubID_34("STRING_1867185905");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubID_34.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_34(1724525503);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubIDType_34.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      FIX::InstrumentPartySubID InstrumentPartySubID_35("STRING_544933061");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubID_35.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_35(1469776488);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubIDType_35.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    FIX::InstrumentPartyID InstrumentPartyID_15("STRING_1710066792");
    noInstrumentParties_0_1.set(InstrumentPartyID_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyID_15.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_15('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyIDSource_15.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_15(607224435);
    noInstrumentParties_0_1.set(InstrumentPartyRole_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyRole_15.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      FIX::InstrumentPartySubID InstrumentPartySubID_36("STRING_834029815");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubID_36.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_36(213383502);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubIDType_36.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      FIX::InstrumentPartySubID InstrumentPartySubID_37("STRING_884275329");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubID_37.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_37(1647121855);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubIDType_37.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    FIX::SecurityAltID SecurityAltID_18("STRING_1689557188");
    noSecurityAltID_0_0.set(SecurityAltID_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltID_18.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_18("STRING_892621464");
    noSecurityAltID_0_0.set(SecurityAltIDSource_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltIDSource_18.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_19;
    FIX::SecurityAltID SecurityAltID_19("STRING_1284932846");
    noSecurityAltID_0_1.set(SecurityAltID_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltID_19.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_19("STRING_1078333057");
    noSecurityAltID_0_1.set(SecurityAltIDSource_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltIDSource_19.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    FIX::SecurityAltID SecurityAltID_20("STRING_928741908");
    noSecurityAltID_0_2.set(SecurityAltID_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltID_20.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_20("STRING_200300808");
    noSecurityAltID_0_2.set(SecurityAltIDSource_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltIDSource_20.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  FIX::SecurityXML SecurityXML_19("XMLDATA_59803014");
  msg.set(SecurityXML_19);
  FIX::SecurityXMLLen SecurityXMLLen_9(758295308);
  msg.set(SecurityXMLLen_9);
  FIX::SecurityXMLSchema SecurityXMLSchema_9("STRING_2026039803");
  msg.set(SecurityXMLSchema_9);
  SecurityXML_18.insert(SecurityXMLSchema_9.getString());
  all_values.push_back(SecurityXML_18);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    FIX::PartyID PartyID_24("STRING_1658611289");
    noPartyIDs_0_0.set(PartyID_24);
    Parties_NoPartyIDs_24.insert(PartyID_24.getString());
    FIX::PartyIDSource PartyIDSource_24('E');
    noPartyIDs_0_0.set(PartyIDSource_24);
    Parties_NoPartyIDs_24.insert(PartyIDSource_24.getString());
    FIX::PartyRole PartyRole_24(9);
    noPartyIDs_0_0.set(PartyRole_24);
    Parties_NoPartyIDs_24.insert(PartyRole_24.getString());
    all_values.push_back(Parties_NoPartyIDs_24);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      FIX::PartySubID PartySubID_48("STRING_64643396");
      noPartySubIDs_0_1_0.set(PartySubID_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubID_48.getString());
      FIX::PartySubIDType PartySubIDType_48(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubIDType_48.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      FIX::PartySubID PartySubID_49("STRING_563563475");
      noPartySubIDs_0_1_1.set(PartySubID_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubID_49.getString());
      FIX::PartySubIDType PartySubIDType_49(1);
      noPartySubIDs_0_1_1.set(PartySubIDType_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubIDType_49.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    FIX::PartyID PartyID_25("STRING_2034997515");
    noPartyIDs_0_1.set(PartyID_25);
    Parties_NoPartyIDs_25.insert(PartyID_25.getString());
    FIX::PartyIDSource PartyIDSource_25('A');
    noPartyIDs_0_1.set(PartyIDSource_25);
    Parties_NoPartyIDs_25.insert(PartyIDSource_25.getString());
    FIX::PartyRole PartyRole_25(1);
    noPartyIDs_0_1.set(PartyRole_25);
    Parties_NoPartyIDs_25.insert(PartyRole_25.getString());
    all_values.push_back(Parties_NoPartyIDs_25);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      FIX::PartySubID PartySubID_50("STRING_1850672122");
      noPartySubIDs_1_1_0.set(PartySubID_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubID_50.getString());
      FIX::PartySubIDType PartySubIDType_50(14);
      noPartySubIDs_1_1_0.set(PartySubIDType_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubIDType_50.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      FIX::PartySubID PartySubID_51("STRING_1964514790");
      noPartySubIDs_1_1_1.set(PartySubID_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubID_51.getString());
      FIX::PartySubIDType PartySubIDType_51(29);
      noPartySubIDs_1_1_1.set(PartySubIDType_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubIDType_51.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    FIX::PartyID PartyID_26("STRING_1790473316");
    noPartyIDs_0_2.set(PartyID_26);
    Parties_NoPartyIDs_26.insert(PartyID_26.getString());
    FIX::PartyIDSource PartyIDSource_26('5');
    noPartyIDs_0_2.set(PartyIDSource_26);
    Parties_NoPartyIDs_26.insert(PartyIDSource_26.getString());
    FIX::PartyRole PartyRole_26(58);
    noPartyIDs_0_2.set(PartyRole_26);
    Parties_NoPartyIDs_26.insert(PartyRole_26.getString());
    all_values.push_back(Parties_NoPartyIDs_26);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      FIX::PartySubID PartySubID_52("STRING_1483452218");
      noPartySubIDs_2_1_0.set(PartySubID_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubID_52.getString());
      FIX::PartySubIDType PartySubIDType_52(19);
      noPartySubIDs_2_1_0.set(PartySubIDType_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubIDType_52.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      FIX::PartySubID PartySubID_53("STRING_35249339");
      noPartySubIDs_2_1_1.set(PartySubID_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubID_53.getString());
      FIX::PartySubIDType PartySubIDType_53(16);
      noPartySubIDs_2_1_1.set(PartySubIDType_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubIDType_53.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_4("STRING_963991247");
    noTrades_0_0.set(SecondaryTradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(SecondaryTradeReportID_4.getString());
    FIX::TradeReportID TradeReportID_4("STRING_821202225");
    noTrades_0_0.set(TradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(TradeReportID_4.getString());
    all_values.push_back(TrdCollGrp_NoTrades_4);

    msg.addGroup(noTrades_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_16("DATA_1722286555");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuer_16.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_16(699758380);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuerLen_16.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_16("DATA_545212509");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDesc_16.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_16(1233414197);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDescLen_16.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("11652511");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_16);
    UnderlyingInstrument_16.insert(UnderlyingAdjustedQuantity_16.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("34.810000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_16);
    UnderlyingInstrument_16.insert(UnderlyingAllocationPercent_16.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("55.720000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingAttachmentPoint_16.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_16("STRING_1229894571");
    noUnderlyings_0_0.set(UnderlyingCFICode_16);
    UnderlyingInstrument_16.insert(UnderlyingCFICode_16.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_16("STRING_377655091");
    noUnderlyings_0_0.set(UnderlyingCPProgram_16);
    UnderlyingInstrument_16.insert(UnderlyingCPProgram_16.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_16("STRING_636559047");
    noUnderlyings_0_0.set(UnderlyingCPRegType_16);
    UnderlyingInstrument_16.insert(UnderlyingCPRegType_16.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("1041264");
    noUnderlyings_0_0.set(UnderlyingCapValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCapValue_16.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("2651689");
    noUnderlyings_0_0.set(UnderlyingCashAmount_16);
    UnderlyingInstrument_16.insert(UnderlyingCashAmount_16.getString());
    FIX::UnderlyingCashType UnderlyingCashType_16("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_16);
    UnderlyingInstrument_16.insert(UnderlyingCashType_16.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("16707751");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplier_16.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_16(1622459313);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplierUnit_16.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_16("COUNTRY_480352852");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingCountryOfIssue_16.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_16("LOCALMKTDATE_479734986");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponPaymentDate_16.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("4.560000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponRate_16.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_16("STRING_1806920243");
    noUnderlyings_0_0.set(UnderlyingCreditRating_16);
    UnderlyingInstrument_16.insert(UnderlyingCreditRating_16.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_16("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrency_16.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("18702793");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrentValue_16.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("61.780000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingDetachmentPoint_16.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("8058736");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingDirtyPrice_16.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("14757119");
    noUnderlyings_0_0.set(UnderlyingEndPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingEndPrice_16.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("14480855");
    noUnderlyings_0_0.set(UnderlyingEndValue_16);
    UnderlyingInstrument_16.insert(UnderlyingEndValue_16.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_16(1426775088);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_16);
    UnderlyingInstrument_16.insert(UnderlyingExerciseStyle_16.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("119939");
    noUnderlyings_0_0.set(UnderlyingFXRate_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRate_16.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_16('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRateCalc_16.getString());
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("1004936");
    noUnderlyings_0_0.set(UnderlyingFactor_16);
    UnderlyingInstrument_16.insert(UnderlyingFactor_16.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_16(755562634);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_16);
    UnderlyingInstrument_16.insert(UnderlyingFlowScheduleType_16.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_16("STRING_1986879672");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_16);
    UnderlyingInstrument_16.insert(UnderlyingInstrRegistry_16.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_16("LOCALMKTDATE_800252046");
    noUnderlyings_0_0.set(UnderlyingIssueDate_16);
    UnderlyingInstrument_16.insert(UnderlyingIssueDate_16.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_16("STRING_1300775143");
    noUnderlyings_0_0.set(UnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(UnderlyingIssuer_16.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_16("STRING_1072810221");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingLocaleOfIssue_16.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_16("LOCALMKTDATE_1965503221");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityDate_16.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_16("MONTHYEAR_1510618625");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityMonthYear_16.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_16("TZTIMEONLY_1145805794");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityTime_16.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("41.440000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_16('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_16);
    UnderlyingInstrument_16.insert(UnderlyingOptAttribute_16.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("48.410000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingOriginalNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_16("STRING_1152040641");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasure_16.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("59590");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasureQty_16.getString());
    FIX::UnderlyingProduct UnderlyingProduct_16(412045571);
    noUnderlyings_0_0.set(UnderlyingProduct_16);
    UnderlyingInstrument_16.insert(UnderlyingProduct_16.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_16(675332127);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_16);
    UnderlyingInstrument_16.insert(UnderlyingPutOrCall_16.getString());
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("16284183");
    noUnderlyings_0_0.set(UnderlyingPx_16);
    UnderlyingInstrument_16.insert(UnderlyingPx_16.getString());
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("8923984");
    noUnderlyings_0_0.set(UnderlyingQty_16);
    UnderlyingInstrument_16.insert(UnderlyingQty_16.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_16("LOCALMKTDATE_1155067113");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_16);
    UnderlyingInstrument_16.insert(UnderlyingRedemptionDate_16.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_16("STRING_920425147");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingRepoCollateralSecurityType_16.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("50.180000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseRate_16.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_16(1277791768);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseTerm_16.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_16("STRING_242846600");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_16);
    UnderlyingInstrument_16.insert(UnderlyingRestructuringType_16.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_16("STRING_274630685");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityDesc_16.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_16("EXCHANGE_543144298");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityExchange_16.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_16("STRING_1048720272");
    noUnderlyings_0_0.set(UnderlyingSecurityID_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityID_16.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_16("STRING_1750342613");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityIDSource_16.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_16("STRING_1991229815");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecuritySubType_16.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_16("STRING_328011712");
    noUnderlyings_0_0.set(UnderlyingSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityType_16.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_16("STRING_1762336563");
    noUnderlyings_0_0.set(UnderlyingSeniority_16);
    UnderlyingInstrument_16.insert(UnderlyingSeniority_16.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_16("STRING_108339284");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlMethod_16.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_16(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlementType_16.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("3704155");
    noUnderlyings_0_0.set(UnderlyingStartValue_16);
    UnderlyingInstrument_16.insert(UnderlyingStartValue_16.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_16("STRING_2095218957");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingStateOrProvinceOfIssue_16.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_16("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikeCurrency_16.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("10205455");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikePrice_16.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_16("STRING_1046776997");
    noUnderlyings_0_0.set(UnderlyingSymbol_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbol_16.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_16("STRING_1034325670");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbolSfx_16.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_16("STRING_18867676");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingTimeUnit_16.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_16("STRING_2094691141");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasure_16.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("7751157");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasureQty_16.getString());
    all_values.push_back(UnderlyingInstrument_16);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_35("STRING_1099248134");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltID_35.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_35("STRING_781074764");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltIDSource_35.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_36("STRING_65794441");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltID_36.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_36("STRING_1774580261");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltIDSource_36.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      FIX::UnderlyingStipType UnderlyingStipType_32("STRING_958192864");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipType_32.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_32("STRING_782163727");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipValue_32.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_30("STRING_1510027882");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyID_30.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_30('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyIDSource_30.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_30(1425281203);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyRole_30.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_65("STRING_455616145");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubID_65.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_65(326517827);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubIDType_65.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_31("STRING_1387517533");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyID_31.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_31('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyIDSource_31.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_31(654529540);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyRole_31.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_66("STRING_407701597");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubID_66.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_66(1083034918);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubIDType_66.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_67("STRING_1372785998");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubID_67.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_67(355436906);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubIDType_67.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_68("STRING_164308694");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubID_68.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_68(896493043);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubIDType_68.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_32("STRING_1375982436");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyID_32.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_32('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyIDSource_32.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_32(1930818713);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyRole_32.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_69("STRING_1158293184");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubID_69.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_69(558450803);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubIDType_69.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_70("STRING_1048598983");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubID_70.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_70(110057670);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubIDType_70.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_71("STRING_1339525567");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubID_71.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_71(1114393424);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubIDType_71.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);

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
