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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralInquiry msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralInquiry_0;
  FIX::Account Account_3("STRING_1094555210");
  msg.set(Account_3);
  CollateralInquiry_0.insert(Account_3.getString());
  FIX::AccountType AccountType_2(6);
  msg.set(AccountType_2);
  CollateralInquiry_0.insert(AccountType_2.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("7915528");
  msg.set(AccruedInterestAmt_4);
  CollateralInquiry_0.insert(AccruedInterestAmt_4.getString());
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("20226618");
  msg.set(CashOutstanding_1);
  CollateralInquiry_0.insert(CashOutstanding_1.getString());
  FIX::ClOrdID ClOrdID_8("STRING_270591498");
  msg.set(ClOrdID_8);
  CollateralInquiry_0.insert(ClOrdID_8.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_7("LOCALMKTDATE_695794329");
  msg.set(ClearingBusinessDate_7);
  CollateralInquiry_0.insert(ClearingBusinessDate_7.getString());
  FIX::CollInquiryID CollInquiryID_0("STRING_241829284");
  msg.set(CollInquiryID_0);
  CollateralInquiry_0.insert(CollInquiryID_0.getString());
  FIX::Currency Currency_7("EUR");
  msg.set(Currency_7);
  CollateralInquiry_0.insert(Currency_7.getString());
  FIX::EncodedText EncodedText_14("DATA_1000739164");
  msg.set(EncodedText_14);
  CollateralInquiry_0.insert(EncodedText_14.getString());
  FIX::EncodedTextLen EncodedTextLen_14(565033784);
  msg.set(EncodedTextLen_14);
  CollateralInquiry_0.insert(EncodedTextLen_14.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("5278368");
  msg.set(EndAccruedInterestAmt_4);
  CollateralInquiry_0.insert(EndAccruedInterestAmt_4.getString());
  FIX::EndCash EndCash_4;
  EndCash_4.setString("17021458");
  msg.set(EndCash_4);
  CollateralInquiry_0.insert(EndCash_4.getString());
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("13388197");
  msg.set(MarginExcess_1);
  CollateralInquiry_0.insert(MarginExcess_1.getString());
  FIX::OrderID OrderID_8("STRING_1272423769");
  msg.set(OrderID_8);
  CollateralInquiry_0.insert(OrderID_8.getString());
  FIX::Price Price_3;
  Price_3.setString("10837249");
  msg.set(Price_3);
  CollateralInquiry_0.insert(Price_3.getString());
  FIX::PriceType PriceType_5(18);
  msg.set(PriceType_5);
  CollateralInquiry_0.insert(PriceType_5.getString());
  FIX::QtyType QtyType_5(1);
  msg.set(QtyType_5);
  CollateralInquiry_0.insert(QtyType_5.getString());
  FIX::Quantity Quantity_6;
  Quantity_6.setString("17861981");
  msg.set(Quantity_6);
  CollateralInquiry_0.insert(Quantity_6.getString());
  FIX::ResponseDestination ResponseDestination_0("STRING_1596425905");
  msg.set(ResponseDestination_0);
  CollateralInquiry_0.insert(ResponseDestination_0.getString());
  FIX::ResponseTransportType ResponseTransportType_0(0);
  msg.set(ResponseTransportType_0);
  CollateralInquiry_0.insert(ResponseTransportType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_8("STRING_1985130142");
  msg.set(SecondaryClOrdID_8);
  CollateralInquiry_0.insert(SecondaryClOrdID_8.getString());
  FIX::SecondaryOrderID SecondaryOrderID_8("STRING_815590120");
  msg.set(SecondaryOrderID_8);
  CollateralInquiry_0.insert(SecondaryOrderID_8.getString());
  FIX::SettlDate SettlDate_6("LOCALMKTDATE_223678169");
  msg.set(SettlDate_6);
  CollateralInquiry_0.insert(SettlDate_6.getString());
  FIX::SettlSessID SettlSessID_3("STRING_ITD");
  msg.set(SettlSessID_3);
  CollateralInquiry_0.insert(SettlSessID_3.getString());
  FIX::SettlSessSubID SettlSessSubID_2("STRING_311171700");
  msg.set(SettlSessSubID_2);
  CollateralInquiry_0.insert(SettlSessSubID_2.getString());
  FIX::Side Side_6('4');
  msg.set(Side_6);
  CollateralInquiry_0.insert(Side_6.getString());
  FIX::StartCash StartCash_4;
  StartCash_4.setString("1991226");
  msg.set(StartCash_4);
  CollateralInquiry_0.insert(StartCash_4.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_0('2');
  msg.set(SubscriptionRequestType_0);
  CollateralInquiry_0.insert(SubscriptionRequestType_0.getString());
  FIX::Text Text_14("STRING_1597576488");
  msg.set(Text_14);
  CollateralInquiry_0.insert(Text_14.getString());
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("20824384");
  msg.set(TotalNetValue_1);
  CollateralInquiry_0.insert(TotalNetValue_1.getString());
  FIX::TradingSessionID TradingSessionID_7("STRING_6");
  msg.set(TradingSessionID_7);
  CollateralInquiry_0.insert(TradingSessionID_7.getString());
  FIX::TradingSessionSubID TradingSessionSubID_7("STRING_7");
  msg.set(TradingSessionSubID_7);
  CollateralInquiry_0.insert(TradingSessionSubID_7.getString());
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
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    FIX::ExecID ExecID_7("STRING_1422301968");
    noExecs_0_0.set(ExecID_7);
    ExecCollGrp_NoExecs_1.insert(ExecID_7.getString());
    all_values.push_back(ExecCollGrp_NoExecs_1);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    FIX::ExecID ExecID_8("STRING_322171830");
    noExecs_0_1.set(ExecID_8);
    ExecCollGrp_NoExecs_2.insert(ExecID_8.getString());
    all_values.push_back(ExecCollGrp_NoExecs_2);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  FIX::AgreementCurrency AgreementCurrency_4("EUR");
  msg.set(AgreementCurrency_4);
  FinancingDetails_4.insert(AgreementCurrency_4.getString());
  FIX::AgreementDate AgreementDate_4("LOCALMKTDATE_1322910994");
  msg.set(AgreementDate_4);
  FinancingDetails_4.insert(AgreementDate_4.getString());
  FIX::AgreementDesc AgreementDesc_4("STRING_1918512001");
  msg.set(AgreementDesc_4);
  FinancingDetails_4.insert(AgreementDesc_4.getString());
  FIX::AgreementID AgreementID_4("STRING_30876330");
  msg.set(AgreementID_4);
  FinancingDetails_4.insert(AgreementID_4.getString());
  FIX::DeliveryType DeliveryType_4(1);
  msg.set(DeliveryType_4);
  FinancingDetails_4.insert(DeliveryType_4.getString());
  FIX::EndDate EndDate_4("LOCALMKTDATE_1109848070");
  msg.set(EndDate_4);
  FinancingDetails_4.insert(EndDate_4.getString());
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("1.000000");
  msg.set(MarginRatio_4);
  FinancingDetails_4.insert(MarginRatio_4.getString());
  FIX::StartDate StartDate_4("LOCALMKTDATE_1961298212");
  msg.set(StartDate_4);
  FinancingDetails_4.insert(StartDate_4.getString());
  FIX::TerminationType TerminationType_4(4);
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
    FIX::EncodedLegIssuer EncodedLegIssuer_11("DATA_1600012748");
    noLegs_0_0.set(EncodedLegIssuer_11);
    InstrumentLeg_11.insert(EncodedLegIssuer_11.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_11(799494120);
    noLegs_0_0.set(EncodedLegIssuerLen_11);
    InstrumentLeg_11.insert(EncodedLegIssuerLen_11.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_11("DATA_936163011");
    noLegs_0_0.set(EncodedLegSecurityDesc_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDesc_11.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_11(1437659243);
    noLegs_0_0.set(EncodedLegSecurityDescLen_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDescLen_11.getString());
    FIX::LegCFICode LegCFICode_11("STRING_1615084240");
    noLegs_0_0.set(LegCFICode_11);
    InstrumentLeg_11.insert(LegCFICode_11.getString());
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("11598411");
    noLegs_0_0.set(LegContractMultiplier_11);
    InstrumentLeg_11.insert(LegContractMultiplier_11.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_11(1133023891);
    noLegs_0_0.set(LegContractMultiplierUnit_11);
    InstrumentLeg_11.insert(LegContractMultiplierUnit_11.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_11("MONTHYEAR_1926255941");
    noLegs_0_0.set(LegContractSettlMonth_11);
    InstrumentLeg_11.insert(LegContractSettlMonth_11.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_11("COUNTRY_896034447");
    noLegs_0_0.set(LegCountryOfIssue_11);
    InstrumentLeg_11.insert(LegCountryOfIssue_11.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_11("LOCALMKTDATE_1332146526");
    noLegs_0_0.set(LegCouponPaymentDate_11);
    InstrumentLeg_11.insert(LegCouponPaymentDate_11.getString());
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("50.480000");
    noLegs_0_0.set(LegCouponRate_11);
    InstrumentLeg_11.insert(LegCouponRate_11.getString());
    FIX::LegCreditRating LegCreditRating_11("STRING_346127287");
    noLegs_0_0.set(LegCreditRating_11);
    InstrumentLeg_11.insert(LegCreditRating_11.getString());
    FIX::LegCurrency LegCurrency_11("EUR");
    noLegs_0_0.set(LegCurrency_11);
    InstrumentLeg_11.insert(LegCurrency_11.getString());
    FIX::LegDatedDate LegDatedDate_11("LOCALMKTDATE_703031267");
    noLegs_0_0.set(LegDatedDate_11);
    InstrumentLeg_11.insert(LegDatedDate_11.getString());
    FIX::LegExerciseStyle LegExerciseStyle_11(1993608958);
    noLegs_0_0.set(LegExerciseStyle_11);
    InstrumentLeg_11.insert(LegExerciseStyle_11.getString());
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("13223719");
    noLegs_0_0.set(LegFactor_11);
    InstrumentLeg_11.insert(LegFactor_11.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_11(1330526745);
    noLegs_0_0.set(LegFlowScheduleType_11);
    InstrumentLeg_11.insert(LegFlowScheduleType_11.getString());
    FIX::LegInstrRegistry LegInstrRegistry_11("STRING_1268427278");
    noLegs_0_0.set(LegInstrRegistry_11);
    InstrumentLeg_11.insert(LegInstrRegistry_11.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_11("LOCALMKTDATE_1644543740");
    noLegs_0_0.set(LegInterestAccrualDate_11);
    InstrumentLeg_11.insert(LegInterestAccrualDate_11.getString());
    FIX::LegIssueDate LegIssueDate_11("LOCALMKTDATE_536521314");
    noLegs_0_0.set(LegIssueDate_11);
    InstrumentLeg_11.insert(LegIssueDate_11.getString());
    FIX::LegIssuer LegIssuer_11("STRING_771466724");
    noLegs_0_0.set(LegIssuer_11);
    InstrumentLeg_11.insert(LegIssuer_11.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_11("STRING_819971087");
    noLegs_0_0.set(LegLocaleOfIssue_11);
    InstrumentLeg_11.insert(LegLocaleOfIssue_11.getString());
    FIX::LegMaturityDate LegMaturityDate_11("LOCALMKTDATE_307549667");
    noLegs_0_0.set(LegMaturityDate_11);
    InstrumentLeg_11.insert(LegMaturityDate_11.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_11("MONTHYEAR_802343054");
    noLegs_0_0.set(LegMaturityMonthYear_11);
    InstrumentLeg_11.insert(LegMaturityMonthYear_11.getString());
    FIX::LegMaturityTime LegMaturityTime_11("TZTIMEONLY_1697544300");
    noLegs_0_0.set(LegMaturityTime_11);
    InstrumentLeg_11.insert(LegMaturityTime_11.getString());
    FIX::LegOptAttribute LegOptAttribute_11('1');
    noLegs_0_0.set(LegOptAttribute_11);
    InstrumentLeg_11.insert(LegOptAttribute_11.getString());
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("21056431");
    noLegs_0_0.set(LegOptionRatio_11);
    InstrumentLeg_11.insert(LegOptionRatio_11.getString());
    FIX::LegPool LegPool_11("STRING_1511358864");
    noLegs_0_0.set(LegPool_11);
    InstrumentLeg_11.insert(LegPool_11.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_11("STRING_620465952");
    noLegs_0_0.set(LegPriceUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasure_11.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("551433");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasureQty_11.getString());
    FIX::LegProduct LegProduct_11(963887964);
    noLegs_0_0.set(LegProduct_11);
    InstrumentLeg_11.insert(LegProduct_11.getString());
    FIX::LegPutOrCall LegPutOrCall_11(1419960073);
    noLegs_0_0.set(LegPutOrCall_11);
    InstrumentLeg_11.insert(LegPutOrCall_11.getString());
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("9913063");
    noLegs_0_0.set(LegRatioQty_11);
    InstrumentLeg_11.insert(LegRatioQty_11.getString());
    FIX::LegRedemptionDate LegRedemptionDate_11("LOCALMKTDATE_254063559");
    noLegs_0_0.set(LegRedemptionDate_11);
    InstrumentLeg_11.insert(LegRedemptionDate_11.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_11("STRING_887560665");
    noLegs_0_0.set(LegRepoCollateralSecurityType_11);
    InstrumentLeg_11.insert(LegRepoCollateralSecurityType_11.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("38.460000");
    noLegs_0_0.set(LegRepurchaseRate_11);
    InstrumentLeg_11.insert(LegRepurchaseRate_11.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_11(1387087450);
    noLegs_0_0.set(LegRepurchaseTerm_11);
    InstrumentLeg_11.insert(LegRepurchaseTerm_11.getString());
    FIX::LegSecurityDesc LegSecurityDesc_11("STRING_666332958");
    noLegs_0_0.set(LegSecurityDesc_11);
    InstrumentLeg_11.insert(LegSecurityDesc_11.getString());
    FIX::LegSecurityExchange LegSecurityExchange_11("EXCHANGE_899698294");
    noLegs_0_0.set(LegSecurityExchange_11);
    InstrumentLeg_11.insert(LegSecurityExchange_11.getString());
    FIX::LegSecurityID LegSecurityID_11("STRING_571750329");
    noLegs_0_0.set(LegSecurityID_11);
    InstrumentLeg_11.insert(LegSecurityID_11.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_11("STRING_1703198006");
    noLegs_0_0.set(LegSecurityIDSource_11);
    InstrumentLeg_11.insert(LegSecurityIDSource_11.getString());
    FIX::LegSecuritySubType LegSecuritySubType_11("STRING_1245825581");
    noLegs_0_0.set(LegSecuritySubType_11);
    InstrumentLeg_11.insert(LegSecuritySubType_11.getString());
    FIX::LegSecurityType LegSecurityType_11("STRING_1838851648");
    noLegs_0_0.set(LegSecurityType_11);
    InstrumentLeg_11.insert(LegSecurityType_11.getString());
    FIX::LegSide LegSide_11('7');
    noLegs_0_0.set(LegSide_11);
    InstrumentLeg_11.insert(LegSide_11.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_11("STRING_1948856849");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_11);
    InstrumentLeg_11.insert(LegStateOrProvinceOfIssue_11.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_11("JPY");
    noLegs_0_0.set(LegStrikeCurrency_11);
    InstrumentLeg_11.insert(LegStrikeCurrency_11.getString());
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("11318999");
    noLegs_0_0.set(LegStrikePrice_11);
    InstrumentLeg_11.insert(LegStrikePrice_11.getString());
    FIX::LegSymbol LegSymbol_11("STRING_805920588");
    noLegs_0_0.set(LegSymbol_11);
    InstrumentLeg_11.insert(LegSymbol_11.getString());
    FIX::LegSymbolSfx LegSymbolSfx_11("STRING_1617175726");
    noLegs_0_0.set(LegSymbolSfx_11);
    InstrumentLeg_11.insert(LegSymbolSfx_11.getString());
    FIX::LegTimeUnit LegTimeUnit_11("STRING_1668421260");
    noLegs_0_0.set(LegTimeUnit_11);
    InstrumentLeg_11.insert(LegTimeUnit_11.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_11("STRING_1577387312");
    noLegs_0_0.set(LegUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegUnitOfMeasure_11.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("2896631");
    noLegs_0_0.set(LegUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegUnitOfMeasureQty_11.getString());
    all_values.push_back(InstrumentLeg_11);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      FIX::LegSecurityAltID LegSecurityAltID_18("STRING_232246719");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltID_18.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_18("STRING_1987207465");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltIDSource_18.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      FIX::LegSecurityAltID LegSecurityAltID_19("STRING_1245885017");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltID_19.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_19("STRING_190406225");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltIDSource_19.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      FIX::LegSecurityAltID LegSecurityAltID_20("STRING_1351082681");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltID_20.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_20("STRING_1866350969");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltIDSource_20.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_12;
    FIX::EncodedLegIssuer EncodedLegIssuer_12("DATA_245549529");
    noLegs_0_1.set(EncodedLegIssuer_12);
    InstrumentLeg_12.insert(EncodedLegIssuer_12.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_12(167486998);
    noLegs_0_1.set(EncodedLegIssuerLen_12);
    InstrumentLeg_12.insert(EncodedLegIssuerLen_12.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_12("DATA_1138827394");
    noLegs_0_1.set(EncodedLegSecurityDesc_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDesc_12.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_12(1236855843);
    noLegs_0_1.set(EncodedLegSecurityDescLen_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDescLen_12.getString());
    FIX::LegCFICode LegCFICode_12("STRING_421550557");
    noLegs_0_1.set(LegCFICode_12);
    InstrumentLeg_12.insert(LegCFICode_12.getString());
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("20263880");
    noLegs_0_1.set(LegContractMultiplier_12);
    InstrumentLeg_12.insert(LegContractMultiplier_12.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_12(1240519690);
    noLegs_0_1.set(LegContractMultiplierUnit_12);
    InstrumentLeg_12.insert(LegContractMultiplierUnit_12.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_12("MONTHYEAR_1808638008");
    noLegs_0_1.set(LegContractSettlMonth_12);
    InstrumentLeg_12.insert(LegContractSettlMonth_12.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_12("COUNTRY_545237370");
    noLegs_0_1.set(LegCountryOfIssue_12);
    InstrumentLeg_12.insert(LegCountryOfIssue_12.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_12("LOCALMKTDATE_2140217984");
    noLegs_0_1.set(LegCouponPaymentDate_12);
    InstrumentLeg_12.insert(LegCouponPaymentDate_12.getString());
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("46.890000");
    noLegs_0_1.set(LegCouponRate_12);
    InstrumentLeg_12.insert(LegCouponRate_12.getString());
    FIX::LegCreditRating LegCreditRating_12("STRING_100951729");
    noLegs_0_1.set(LegCreditRating_12);
    InstrumentLeg_12.insert(LegCreditRating_12.getString());
    FIX::LegCurrency LegCurrency_12("CAN");
    noLegs_0_1.set(LegCurrency_12);
    InstrumentLeg_12.insert(LegCurrency_12.getString());
    FIX::LegDatedDate LegDatedDate_12("LOCALMKTDATE_898695452");
    noLegs_0_1.set(LegDatedDate_12);
    InstrumentLeg_12.insert(LegDatedDate_12.getString());
    FIX::LegExerciseStyle LegExerciseStyle_12(1039933118);
    noLegs_0_1.set(LegExerciseStyle_12);
    InstrumentLeg_12.insert(LegExerciseStyle_12.getString());
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("16092496");
    noLegs_0_1.set(LegFactor_12);
    InstrumentLeg_12.insert(LegFactor_12.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_12(871327438);
    noLegs_0_1.set(LegFlowScheduleType_12);
    InstrumentLeg_12.insert(LegFlowScheduleType_12.getString());
    FIX::LegInstrRegistry LegInstrRegistry_12("STRING_24349417");
    noLegs_0_1.set(LegInstrRegistry_12);
    InstrumentLeg_12.insert(LegInstrRegistry_12.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_12("LOCALMKTDATE_267686587");
    noLegs_0_1.set(LegInterestAccrualDate_12);
    InstrumentLeg_12.insert(LegInterestAccrualDate_12.getString());
    FIX::LegIssueDate LegIssueDate_12("LOCALMKTDATE_341019517");
    noLegs_0_1.set(LegIssueDate_12);
    InstrumentLeg_12.insert(LegIssueDate_12.getString());
    FIX::LegIssuer LegIssuer_12("STRING_1692770677");
    noLegs_0_1.set(LegIssuer_12);
    InstrumentLeg_12.insert(LegIssuer_12.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_12("STRING_1845073900");
    noLegs_0_1.set(LegLocaleOfIssue_12);
    InstrumentLeg_12.insert(LegLocaleOfIssue_12.getString());
    FIX::LegMaturityDate LegMaturityDate_12("LOCALMKTDATE_630682682");
    noLegs_0_1.set(LegMaturityDate_12);
    InstrumentLeg_12.insert(LegMaturityDate_12.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_12("MONTHYEAR_1521257957");
    noLegs_0_1.set(LegMaturityMonthYear_12);
    InstrumentLeg_12.insert(LegMaturityMonthYear_12.getString());
    FIX::LegMaturityTime LegMaturityTime_12("TZTIMEONLY_2077320619");
    noLegs_0_1.set(LegMaturityTime_12);
    InstrumentLeg_12.insert(LegMaturityTime_12.getString());
    FIX::LegOptAttribute LegOptAttribute_12('4');
    noLegs_0_1.set(LegOptAttribute_12);
    InstrumentLeg_12.insert(LegOptAttribute_12.getString());
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("6196593");
    noLegs_0_1.set(LegOptionRatio_12);
    InstrumentLeg_12.insert(LegOptionRatio_12.getString());
    FIX::LegPool LegPool_12("STRING_120243196");
    noLegs_0_1.set(LegPool_12);
    InstrumentLeg_12.insert(LegPool_12.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_12("STRING_1821489181");
    noLegs_0_1.set(LegPriceUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasure_12.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("3385266");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasureQty_12.getString());
    FIX::LegProduct LegProduct_12(365792725);
    noLegs_0_1.set(LegProduct_12);
    InstrumentLeg_12.insert(LegProduct_12.getString());
    FIX::LegPutOrCall LegPutOrCall_12(1988976179);
    noLegs_0_1.set(LegPutOrCall_12);
    InstrumentLeg_12.insert(LegPutOrCall_12.getString());
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("14773540");
    noLegs_0_1.set(LegRatioQty_12);
    InstrumentLeg_12.insert(LegRatioQty_12.getString());
    FIX::LegRedemptionDate LegRedemptionDate_12("LOCALMKTDATE_1602648569");
    noLegs_0_1.set(LegRedemptionDate_12);
    InstrumentLeg_12.insert(LegRedemptionDate_12.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_12("STRING_263043089");
    noLegs_0_1.set(LegRepoCollateralSecurityType_12);
    InstrumentLeg_12.insert(LegRepoCollateralSecurityType_12.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("84.540000");
    noLegs_0_1.set(LegRepurchaseRate_12);
    InstrumentLeg_12.insert(LegRepurchaseRate_12.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_12(695684611);
    noLegs_0_1.set(LegRepurchaseTerm_12);
    InstrumentLeg_12.insert(LegRepurchaseTerm_12.getString());
    FIX::LegSecurityDesc LegSecurityDesc_12("STRING_2071681097");
    noLegs_0_1.set(LegSecurityDesc_12);
    InstrumentLeg_12.insert(LegSecurityDesc_12.getString());
    FIX::LegSecurityExchange LegSecurityExchange_12("EXCHANGE_1901495824");
    noLegs_0_1.set(LegSecurityExchange_12);
    InstrumentLeg_12.insert(LegSecurityExchange_12.getString());
    FIX::LegSecurityID LegSecurityID_12("STRING_688418947");
    noLegs_0_1.set(LegSecurityID_12);
    InstrumentLeg_12.insert(LegSecurityID_12.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_12("STRING_157102138");
    noLegs_0_1.set(LegSecurityIDSource_12);
    InstrumentLeg_12.insert(LegSecurityIDSource_12.getString());
    FIX::LegSecuritySubType LegSecuritySubType_12("STRING_2002447553");
    noLegs_0_1.set(LegSecuritySubType_12);
    InstrumentLeg_12.insert(LegSecuritySubType_12.getString());
    FIX::LegSecurityType LegSecurityType_12("STRING_1926978864");
    noLegs_0_1.set(LegSecurityType_12);
    InstrumentLeg_12.insert(LegSecurityType_12.getString());
    FIX::LegSide LegSide_12('8');
    noLegs_0_1.set(LegSide_12);
    InstrumentLeg_12.insert(LegSide_12.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_12("STRING_753659358");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_12);
    InstrumentLeg_12.insert(LegStateOrProvinceOfIssue_12.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_12("JPY");
    noLegs_0_1.set(LegStrikeCurrency_12);
    InstrumentLeg_12.insert(LegStrikeCurrency_12.getString());
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("16249867");
    noLegs_0_1.set(LegStrikePrice_12);
    InstrumentLeg_12.insert(LegStrikePrice_12.getString());
    FIX::LegSymbol LegSymbol_12("STRING_843777752");
    noLegs_0_1.set(LegSymbol_12);
    InstrumentLeg_12.insert(LegSymbol_12.getString());
    FIX::LegSymbolSfx LegSymbolSfx_12("STRING_1958311061");
    noLegs_0_1.set(LegSymbolSfx_12);
    InstrumentLeg_12.insert(LegSymbolSfx_12.getString());
    FIX::LegTimeUnit LegTimeUnit_12("STRING_1966006313");
    noLegs_0_1.set(LegTimeUnit_12);
    InstrumentLeg_12.insert(LegTimeUnit_12.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_12("STRING_389064781");
    noLegs_0_1.set(LegUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegUnitOfMeasure_12.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("16559013");
    noLegs_0_1.set(LegUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegUnitOfMeasureQty_12.getString());
    all_values.push_back(InstrumentLeg_12);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      FIX::LegSecurityAltID LegSecurityAltID_21("STRING_1910322738");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltID_21.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_21("STRING_1585738284");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltIDSource_21.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("18.480000");
  msg.set(AttachmentPoint_9);
  Instrument_9.insert(AttachmentPoint_9.getString());
  FIX::CFICode CFICode_9("STRING_382498416");
  msg.set(CFICode_9);
  Instrument_9.insert(CFICode_9.getString());
  FIX::CPProgram CPProgram_9(99);
  msg.set(CPProgram_9);
  Instrument_9.insert(CPProgram_9.getString());
  FIX::CPRegType CPRegType_9("STRING_593617381");
  msg.set(CPRegType_9);
  Instrument_9.insert(CPRegType_9.getString());
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("7210250");
  msg.set(CapPrice_9);
  Instrument_9.insert(CapPrice_9.getString());
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("20717742");
  msg.set(ContractMultiplier_9);
  Instrument_9.insert(ContractMultiplier_9.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_9(2);
  msg.set(ContractMultiplierUnit_9);
  Instrument_9.insert(ContractMultiplierUnit_9.getString());
  FIX::ContractSettlMonth ContractSettlMonth_9("MONTHYEAR_50895458");
  msg.set(ContractSettlMonth_9);
  Instrument_9.insert(ContractSettlMonth_9.getString());
  FIX::CountryOfIssue CountryOfIssue_9("COUNTRY_1526939127");
  msg.set(CountryOfIssue_9);
  Instrument_9.insert(CountryOfIssue_9.getString());
  FIX::CouponPaymentDate CouponPaymentDate_9("LOCALMKTDATE_698153002");
  msg.set(CouponPaymentDate_9);
  Instrument_9.insert(CouponPaymentDate_9.getString());
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("39.120000");
  msg.set(CouponRate_9);
  Instrument_9.insert(CouponRate_9.getString());
  FIX::CreditRating CreditRating_9("STRING_75140090");
  msg.set(CreditRating_9);
  Instrument_9.insert(CreditRating_9.getString());
  FIX::DatedDate DatedDate_9("LOCALMKTDATE_622350451");
  msg.set(DatedDate_9);
  Instrument_9.insert(DatedDate_9.getString());
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("60.880000");
  msg.set(DetachmentPoint_9);
  Instrument_9.insert(DetachmentPoint_9.getString());
  FIX::EncodedIssuer EncodedIssuer_9("DATA_763559037");
  msg.set(EncodedIssuer_9);
  Instrument_9.insert(EncodedIssuer_9.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_9(779452589);
  msg.set(EncodedIssuerLen_9);
  Instrument_9.insert(EncodedIssuerLen_9.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_9("DATA_1016129994");
  msg.set(EncodedSecurityDesc_9);
  Instrument_9.insert(EncodedSecurityDesc_9.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_9(543054254);
  msg.set(EncodedSecurityDescLen_9);
  Instrument_9.insert(EncodedSecurityDescLen_9.getString());
  FIX::ExerciseStyle ExerciseStyle_9(0);
  msg.set(ExerciseStyle_9);
  Instrument_9.insert(ExerciseStyle_9.getString());
  FIX::Factor Factor_9;
  Factor_9.setString("17697893");
  msg.set(Factor_9);
  Instrument_9.insert(Factor_9.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_9(false);
  msg.set(FlexProductEligibilityIndicator_9);
  Instrument_9.insert(FlexProductEligibilityIndicator_9.getString());
  FIX::FlexibleIndicator FlexibleIndicator_9(true);
  msg.set(FlexibleIndicator_9);
  Instrument_9.insert(FlexibleIndicator_9.getString());
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("12472925");
  msg.set(FloorPrice_9);
  Instrument_9.insert(FloorPrice_9.getString());
  FIX::FlowScheduleType FlowScheduleType_9(3);
  msg.set(FlowScheduleType_9);
  Instrument_9.insert(FlowScheduleType_9.getString());
  FIX::InstrRegistry InstrRegistry_9("STRING_214795655");
  msg.set(InstrRegistry_9);
  Instrument_9.insert(InstrRegistry_9.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_9('1');
  msg.set(InstrmtAssignmentMethod_9);
  Instrument_9.insert(InstrmtAssignmentMethod_9.getString());
  FIX::InterestAccrualDate InterestAccrualDate_9("LOCALMKTDATE_447841474");
  msg.set(InterestAccrualDate_9);
  Instrument_9.insert(InterestAccrualDate_9.getString());
  FIX::IssueDate IssueDate_9("LOCALMKTDATE_1870696969");
  msg.set(IssueDate_9);
  Instrument_9.insert(IssueDate_9.getString());
  FIX::Issuer Issuer_9("STRING_1515020514");
  msg.set(Issuer_9);
  Instrument_9.insert(Issuer_9.getString());
  FIX::ListMethod ListMethod_9(1);
  msg.set(ListMethod_9);
  Instrument_9.insert(ListMethod_9.getString());
  FIX::LocaleOfIssue LocaleOfIssue_9("STRING_1308951605");
  msg.set(LocaleOfIssue_9);
  Instrument_9.insert(LocaleOfIssue_9.getString());
  FIX::MaturityDate MaturityDate_9("LOCALMKTDATE_287148714");
  msg.set(MaturityDate_9);
  Instrument_9.insert(MaturityDate_9.getString());
  FIX::MaturityMonthYear MaturityMonthYear_9("MONTHYEAR_593178981");
  msg.set(MaturityMonthYear_9);
  Instrument_9.insert(MaturityMonthYear_9.getString());
  FIX::MaturityTime MaturityTime_9("TZTIMEONLY_867449438");
  msg.set(MaturityTime_9);
  Instrument_9.insert(MaturityTime_9.getString());
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("8807660");
  msg.set(MinPriceIncrement_9);
  Instrument_9.insert(MinPriceIncrement_9.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("13142040");
  msg.set(MinPriceIncrementAmount_9);
  Instrument_9.insert(MinPriceIncrementAmount_9.getString());
  FIX::NTPositionLimit NTPositionLimit_9(791739997);
  msg.set(NTPositionLimit_9);
  Instrument_9.insert(NTPositionLimit_9.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("60.080000");
  msg.set(NotionalPercentageOutstanding_9);
  Instrument_9.insert(NotionalPercentageOutstanding_9.getString());
  FIX::OptAttribute OptAttribute_9('1');
  msg.set(OptAttribute_9);
  Instrument_9.insert(OptAttribute_9.getString());
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("1711954");
  msg.set(OptPayoutAmount_9);
  Instrument_9.insert(OptPayoutAmount_9.getString());
  FIX::OptPayoutType OptPayoutType_9(2);
  msg.set(OptPayoutType_9);
  Instrument_9.insert(OptPayoutType_9.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("97.670000");
  msg.set(OriginalNotionalPercentageOutstanding_9);
  Instrument_9.insert(OriginalNotionalPercentageOutstanding_9.getString());
  FIX::Pool Pool_9("STRING_246335567");
  msg.set(Pool_9);
  Instrument_9.insert(Pool_9.getString());
  FIX::PositionLimit PositionLimit_9(488895813);
  msg.set(PositionLimit_9);
  Instrument_9.insert(PositionLimit_9.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_9("STRING_STD");
  msg.set(PriceQuoteMethod_9);
  Instrument_9.insert(PriceQuoteMethod_9.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_9("STRING_1009894604");
  msg.set(PriceUnitOfMeasure_9);
  Instrument_9.insert(PriceUnitOfMeasure_9.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("12683484");
  msg.set(PriceUnitOfMeasureQty_9);
  Instrument_9.insert(PriceUnitOfMeasureQty_9.getString());
  FIX::Product Product_11(2);
  msg.set(Product_11);
  Instrument_9.insert(Product_11.getString());
  FIX::ProductComplex ProductComplex_9("STRING_1552948858");
  msg.set(ProductComplex_9);
  Instrument_9.insert(ProductComplex_9.getString());
  FIX::PutOrCall PutOrCall_9(0);
  msg.set(PutOrCall_9);
  Instrument_9.insert(PutOrCall_9.getString());
  FIX::RedemptionDate RedemptionDate_9("LOCALMKTDATE_276887906");
  msg.set(RedemptionDate_9);
  Instrument_9.insert(RedemptionDate_9.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_9("STRING_767947799");
  msg.set(RepoCollateralSecurityType_9);
  Instrument_9.insert(RepoCollateralSecurityType_9.getString());
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("4.120000");
  msg.set(RepurchaseRate_9);
  Instrument_9.insert(RepurchaseRate_9.getString());
  FIX::RepurchaseTerm RepurchaseTerm_9(1524180406);
  msg.set(RepurchaseTerm_9);
  Instrument_9.insert(RepurchaseTerm_9.getString());
  FIX::RestructuringType RestructuringType_9("STRING_FR");
  msg.set(RestructuringType_9);
  Instrument_9.insert(RestructuringType_9.getString());
  FIX::SecurityDesc SecurityDesc_9("STRING_600456068");
  msg.set(SecurityDesc_9);
  Instrument_9.insert(SecurityDesc_9.getString());
  FIX::SecurityExchange SecurityExchange_9("EXCHANGE_442511924");
  msg.set(SecurityExchange_9);
  Instrument_9.insert(SecurityExchange_9.getString());
  FIX::SecurityGroup SecurityGroup_9("STRING_1274565967");
  msg.set(SecurityGroup_9);
  Instrument_9.insert(SecurityGroup_9.getString());
  FIX::SecurityID SecurityID_9("STRING_323669389");
  msg.set(SecurityID_9);
  Instrument_9.insert(SecurityID_9.getString());
  FIX::SecurityIDSource SecurityIDSource_9("STRING_5");
  msg.set(SecurityIDSource_9);
  Instrument_9.insert(SecurityIDSource_9.getString());
  FIX::SecurityStatus SecurityStatus_9("STRING_1");
  msg.set(SecurityStatus_9);
  Instrument_9.insert(SecurityStatus_9.getString());
  FIX::SecuritySubType SecuritySubType_9("STRING_1632620994");
  msg.set(SecuritySubType_9);
  Instrument_9.insert(SecuritySubType_9.getString());
  FIX::SecurityType SecurityType_11("STRING_XCN");
  msg.set(SecurityType_11);
  Instrument_9.insert(SecurityType_11.getString());
  FIX::Seniority Seniority_9("STRING_SR");
  msg.set(Seniority_9);
  Instrument_9.insert(Seniority_9.getString());
  FIX::SettlMethod SettlMethod_9('P');
  msg.set(SettlMethod_9);
  Instrument_9.insert(SettlMethod_9.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_9("STRING_977963600");
  msg.set(SettleOnOpenFlag_9);
  Instrument_9.insert(SettleOnOpenFlag_9.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_9("STRING_1245145911");
  msg.set(StateOrProvinceOfIssue_9);
  Instrument_9.insert(StateOrProvinceOfIssue_9.getString());
  FIX::StrikeCurrency StrikeCurrency_9("USD");
  msg.set(StrikeCurrency_9);
  Instrument_9.insert(StrikeCurrency_9.getString());
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("4627617");
  msg.set(StrikeMultiplier_9);
  Instrument_9.insert(StrikeMultiplier_9.getString());
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("13155222");
  msg.set(StrikePrice_9);
  Instrument_9.insert(StrikePrice_9.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_9(4);
  msg.set(StrikePriceBoundaryMethod_9);
  Instrument_9.insert(StrikePriceBoundaryMethod_9.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("15.340000");
  msg.set(StrikePriceBoundaryPrecision_9);
  Instrument_9.insert(StrikePriceBoundaryPrecision_9.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_9(2);
  msg.set(StrikePriceDeterminationMethod_9);
  Instrument_9.insert(StrikePriceDeterminationMethod_9.getString());
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("5017971");
  msg.set(StrikeValue_9);
  Instrument_9.insert(StrikeValue_9.getString());
  FIX::Symbol Symbol_9("STRING_725983742");
  msg.set(Symbol_9);
  Instrument_9.insert(Symbol_9.getString());
  FIX::SymbolSfx SymbolSfx_9("STRING_CD");
  msg.set(SymbolSfx_9);
  Instrument_9.insert(SymbolSfx_9.getString());
  FIX::TimeUnit TimeUnit_9("STRING_Min");
  msg.set(TimeUnit_9);
  Instrument_9.insert(TimeUnit_9.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_9(1);
  msg.set(UnderlyingPriceDeterminationMethod_9);
  Instrument_9.insert(UnderlyingPriceDeterminationMethod_9.getString());
  FIX::UnitOfMeasure UnitOfMeasure_9("STRING_oz_tr");
  msg.set(UnitOfMeasure_9);
  Instrument_9.insert(UnitOfMeasure_9.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("17518377");
  msg.set(UnitOfMeasureQty_9);
  Instrument_9.insert(UnitOfMeasureQty_9.getString());
  FIX::ValuationMethod ValuationMethod_9("STRING_EQTY");
  msg.set(ValuationMethod_9);
  Instrument_9.insert(ValuationMethod_9.getString());
  all_values.push_back(Instrument_9);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_17;
    FIX::ComplexEventCondition ComplexEventCondition_17(1);
    noComplexEvents_0_0.set(ComplexEventCondition_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventCondition_17.getString());
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("10341506");
    noComplexEvents_0_0.set(ComplexEventPrice_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPrice_17.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_17(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryMethod_17.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("5.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryPrecision_17.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_17(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceTimeType_17.getString());
    FIX::ComplexEventType ComplexEventType_17(5);
    noComplexEvents_0_0.set(ComplexEventType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventType_17.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("9141399");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexOptPayoutAmount_17.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_17);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      FIX::ComplexEventEndDate ComplexEventEndDate_27(FIX::UTCTIMESTAMP(5, 8, 41, 26, 9, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventEndDate_27.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_27(FIX::UTCTIMESTAMP(20, 30, 35, 7, 9, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventStartDate_27.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        FIX::ComplexEventEndTime ComplexEventEndTime_52(FIX::UTCTIMEONLY(22, 31, 14));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventEndTime_52.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_52(FIX::UTCTIMEONLY(8, 4, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventStartTime_52.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      FIX::ComplexEventEndDate ComplexEventEndDate_28(FIX::UTCTIMESTAMP(13, 35, 48, 2, 8, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventEndDate_28.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_28(FIX::UTCTIMESTAMP(22, 37, 13, 23, 12, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventStartDate_28.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        FIX::ComplexEventEndTime ComplexEventEndTime_53(FIX::UTCTIMEONLY(18, 6, 23));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventEndTime_53.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_53(FIX::UTCTIMEONLY(2, 35, 9));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventStartTime_53.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        FIX::ComplexEventEndTime ComplexEventEndTime_54(FIX::UTCTIMEONLY(2, 40, 7));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventEndTime_54.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_54(FIX::UTCTIMEONLY(13, 4, 40));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventStartTime_54.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    FIX::EventDate EventDate_17("LOCALMKTDATE_17151081");
    noEvents_0_0.set(EventDate_17);
    EvntGrp_NoEvents_17.insert(EventDate_17.getString());
    FIX::EventPx EventPx_17;
    EventPx_17.setString("11702926");
    noEvents_0_0.set(EventPx_17);
    EvntGrp_NoEvents_17.insert(EventPx_17.getString());
    FIX::EventText EventText_17("STRING_1876372328");
    noEvents_0_0.set(EventText_17);
    EvntGrp_NoEvents_17.insert(EventText_17.getString());
    FIX::EventTime EventTime_17(FIX::UTCTIMESTAMP(2, 19, 4, 17, 1, 2004));
    noEvents_0_0.set(EventTime_17);
    EvntGrp_NoEvents_17.insert(EventTime_17.getString());
    FIX::EventType EventType_17(13);
    noEvents_0_0.set(EventType_17);
    EvntGrp_NoEvents_17.insert(EventType_17.getString());
    all_values.push_back(EvntGrp_NoEvents_17);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    FIX::EventDate EventDate_18("LOCALMKTDATE_1775592300");
    noEvents_0_1.set(EventDate_18);
    EvntGrp_NoEvents_18.insert(EventDate_18.getString());
    FIX::EventPx EventPx_18;
    EventPx_18.setString("16190991");
    noEvents_0_1.set(EventPx_18);
    EvntGrp_NoEvents_18.insert(EventPx_18.getString());
    FIX::EventText EventText_18("STRING_1883603528");
    noEvents_0_1.set(EventText_18);
    EvntGrp_NoEvents_18.insert(EventText_18.getString());
    FIX::EventTime EventTime_18(FIX::UTCTIMESTAMP(17, 6, 3, 15, 1, 2006));
    noEvents_0_1.set(EventTime_18);
    EvntGrp_NoEvents_18.insert(EventTime_18.getString());
    FIX::EventType EventType_18(9);
    noEvents_0_1.set(EventType_18);
    EvntGrp_NoEvents_18.insert(EventType_18.getString());
    all_values.push_back(EvntGrp_NoEvents_18);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    FIX::InstrumentPartyID InstrumentPartyID_18("STRING_1783705352");
    noInstrumentParties_0_0.set(InstrumentPartyID_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyID_18.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_18('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyIDSource_18.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_18(622516013);
    noInstrumentParties_0_0.set(InstrumentPartyRole_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyRole_18.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      FIX::InstrumentPartySubID InstrumentPartySubID_33("STRING_947703814");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubID_33.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_33(1815814977);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubIDType_33.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      FIX::InstrumentPartySubID InstrumentPartySubID_34("STRING_1579580753");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubID_34.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_34(2141131973);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubIDType_34.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    FIX::InstrumentPartyID InstrumentPartyID_19("STRING_1832966058");
    noInstrumentParties_0_1.set(InstrumentPartyID_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyID_19.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_19('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyIDSource_19.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_19(1870020653);
    noInstrumentParties_0_1.set(InstrumentPartyRole_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyRole_19.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      FIX::InstrumentPartySubID InstrumentPartySubID_35("STRING_783898167");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubID_35.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_35(1048509785);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubIDType_35.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      FIX::InstrumentPartySubID InstrumentPartySubID_36("STRING_1908039845");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubID_36.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_36(2013357520);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubIDType_36.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    FIX::InstrumentPartyID InstrumentPartyID_20("STRING_75876645");
    noInstrumentParties_0_2.set(InstrumentPartyID_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyID_20.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_20('3');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyIDSource_20.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_20(1963477505);
    noInstrumentParties_0_2.set(InstrumentPartyRole_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyRole_20.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      FIX::InstrumentPartySubID InstrumentPartySubID_37("STRING_1960714551");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubID_37.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_37(1699597385);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubIDType_37.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_19;
    FIX::SecurityAltID SecurityAltID_19("STRING_683631072");
    noSecurityAltID_0_0.set(SecurityAltID_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltID_19.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_19("STRING_602334543");
    noSecurityAltID_0_0.set(SecurityAltIDSource_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltIDSource_19.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    FIX::SecurityAltID SecurityAltID_20("STRING_1072779020");
    noSecurityAltID_0_1.set(SecurityAltID_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltID_20.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_20("STRING_1178978331");
    noSecurityAltID_0_1.set(SecurityAltIDSource_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltIDSource_20.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  FIX::SecurityXML SecurityXML_19("XMLDATA_1287321543");
  msg.set(SecurityXML_19);
  FIX::SecurityXMLLen SecurityXMLLen_9(61329883);
  msg.set(SecurityXMLLen_9);
  FIX::SecurityXMLSchema SecurityXMLSchema_9("STRING_27232232");
  msg.set(SecurityXMLSchema_9);
  SecurityXML_18.insert(SecurityXMLSchema_9.getString());
  all_values.push_back(SecurityXML_18);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    FIX::PartyID PartyID_21("STRING_1845035235");
    noPartyIDs_0_0.set(PartyID_21);
    Parties_NoPartyIDs_21.insert(PartyID_21.getString());
    FIX::PartyIDSource PartyIDSource_21('7');
    noPartyIDs_0_0.set(PartyIDSource_21);
    Parties_NoPartyIDs_21.insert(PartyIDSource_21.getString());
    FIX::PartyRole PartyRole_21(44);
    noPartyIDs_0_0.set(PartyRole_21);
    Parties_NoPartyIDs_21.insert(PartyRole_21.getString());
    all_values.push_back(Parties_NoPartyIDs_21);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      FIX::PartySubID PartySubID_41("STRING_821685327");
      noPartySubIDs_0_1_0.set(PartySubID_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubID_41.getString());
      FIX::PartySubIDType PartySubIDType_41(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubIDType_41.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    FIX::PartyID PartyID_22("STRING_146147646");
    noPartyIDs_0_1.set(PartyID_22);
    Parties_NoPartyIDs_22.insert(PartyID_22.getString());
    FIX::PartyIDSource PartyIDSource_22('6');
    noPartyIDs_0_1.set(PartyIDSource_22);
    Parties_NoPartyIDs_22.insert(PartyIDSource_22.getString());
    FIX::PartyRole PartyRole_22(79);
    noPartyIDs_0_1.set(PartyRole_22);
    Parties_NoPartyIDs_22.insert(PartyRole_22.getString());
    all_values.push_back(Parties_NoPartyIDs_22);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      FIX::PartySubID PartySubID_42("STRING_537870658");
      noPartySubIDs_1_1_0.set(PartySubID_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubID_42.getString());
      FIX::PartySubIDType PartySubIDType_42(19);
      noPartySubIDs_1_1_0.set(PartySubIDType_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubIDType_42.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      FIX::PartySubID PartySubID_43("STRING_1532435555");
      noPartySubIDs_1_1_1.set(PartySubID_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubID_43.getString());
      FIX::PartySubIDType PartySubIDType_43(22);
      noPartySubIDs_1_1_1.set(PartySubIDType_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubIDType_43.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_7;
  FIX::SettlDeliveryType SettlDeliveryType_7(3);
  msg.set(SettlDeliveryType_7);
  SettlInstructionsData_7.insert(SettlDeliveryType_7.getString());
  FIX::StandInstDbID StandInstDbID_7("STRING_1398309427");
  msg.set(StandInstDbID_7);
  SettlInstructionsData_7.insert(StandInstDbID_7.getString());
  FIX::StandInstDbName StandInstDbName_7("STRING_1662257088");
  msg.set(StandInstDbName_7);
  SettlInstructionsData_7.insert(StandInstDbName_7.getString());
  FIX::StandInstDbType StandInstDbType_7(2);
  msg.set(StandInstDbType_7);
  SettlInstructionsData_7.insert(StandInstDbType_7.getString());
  all_values.push_back(SettlInstructionsData_7);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_13;
    FIX::DlvyInstType DlvyInstType_13('C');
    noDlvyInst_0_0.set(DlvyInstType_13);
    DlvyInstGrp_NoDlvyInst_13.insert(DlvyInstType_13.getString());
    FIX::SettlInstSource SettlInstSource_13('1');
    noDlvyInst_0_0.set(SettlInstSource_13);
    DlvyInstGrp_NoDlvyInst_13.insert(SettlInstSource_13.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_13);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_27;
      FIX::SettlPartyID SettlPartyID_27("STRING_1047785323");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyID_27.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_27('1');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyIDSource_27.getString());
      FIX::SettlPartyRole SettlPartyRole_27(1368751564);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyRole_27.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_27);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
        FIX::SettlPartySubID SettlPartySubID_58("STRING_263729906");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubID_58.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_58(508589460);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubIDType_58.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
        FIX::SettlPartySubID SettlPartySubID_59("STRING_34410579");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubID_59.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_59(290962138);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubIDType_59.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_28;
      FIX::SettlPartyID SettlPartyID_28("STRING_1162313209");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyID_28.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_28('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyIDSource_28.getString());
      FIX::SettlPartyRole SettlPartyRole_28(164943651);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyRole_28.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_28);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
        FIX::SettlPartySubID SettlPartySubID_60("STRING_446012707");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubID_60.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_60(986628978);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubIDType_60.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
        FIX::SettlPartySubID SettlPartySubID_61("STRING_1235640414");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubID_61.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_61(592160354);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubIDType_61.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
        FIX::SettlPartySubID SettlPartySubID_62("STRING_1801962630");
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubID_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubID_62.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_62(1865693915);
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubIDType_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubIDType_62.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_14;
    FIX::DlvyInstType DlvyInstType_14('S');
    noDlvyInst_0_1.set(DlvyInstType_14);
    DlvyInstGrp_NoDlvyInst_14.insert(DlvyInstType_14.getString());
    FIX::SettlInstSource SettlInstSource_14('3');
    noDlvyInst_0_1.set(SettlInstSource_14);
    DlvyInstGrp_NoDlvyInst_14.insert(SettlInstSource_14.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_14);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_29;
      FIX::SettlPartyID SettlPartyID_29("STRING_725649648");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyID_29.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_29('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyIDSource_29.getString());
      FIX::SettlPartyRole SettlPartyRole_29(745169748);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyRole_29.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_29);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
        FIX::SettlPartySubID SettlPartySubID_63("STRING_1293503524");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_63);
        SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubID_63.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_63(1480542995);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_63);
        SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubIDType_63.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
        FIX::SettlPartySubID SettlPartySubID_64("STRING_1190778712");
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubID_64);
        SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubID_64.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_64(512262262);
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubIDType_64);
        SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubIDType_64.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
        FIX::SettlPartySubID SettlPartySubID_65("STRING_2029147145");
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubID_65);
        SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubID_65.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_65(1957195734);
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubIDType_65);
        SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubIDType_65.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_4("JPY");
  msg.set(BenchmarkCurveCurrency_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveCurrency_4.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_4("STRING_Euribor");
  msg.set(BenchmarkCurveName_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveName_4.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_4("STRING_1533128281");
  msg.set(BenchmarkCurvePoint_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurvePoint_4.getString());
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("13776286");
  msg.set(BenchmarkPrice_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPrice_4.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_4(1687053110);
  msg.set(BenchmarkPriceType_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPriceType_4.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_4("STRING_1567538860");
  msg.set(BenchmarkSecurityID_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityID_4.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_4("STRING_1668590764");
  msg.set(BenchmarkSecurityIDSource_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityIDSource_4.getString());
  FIX::Spread Spread_4;
  Spread_4.setString("7018826");
  msg.set(Spread_4);
  SpreadOrBenchmarkCurveData_4.insert(Spread_4.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_4);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    FIX::StipulationType StipulationType_8("STRING_LOTVAR");
    noStipulations_0_0.set(StipulationType_8);
    Stipulations_NoStipulations_8.insert(StipulationType_8.getString());
    FIX::StipulationValue StipulationValue_8("STRING_992951994");
    noStipulations_0_0.set(StipulationValue_8);
    Stipulations_NoStipulations_8.insert(StipulationValue_8.getString());
    all_values.push_back(Stipulations_NoStipulations_8);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_3("STRING_672679745");
    noTrades_0_0.set(SecondaryTradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(SecondaryTradeReportID_3.getString());
    FIX::TradeReportID TradeReportID_3("STRING_81108760");
    noTrades_0_0.set(TradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(TradeReportID_3.getString());
    all_values.push_back(TrdCollGrp_NoTrades_3);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_4("STRING_190190440");
    noTrades_0_1.set(SecondaryTradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(SecondaryTradeReportID_4.getString());
    FIX::TradeReportID TradeReportID_4("STRING_327158727");
    noTrades_0_1.set(TradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(TradeReportID_4.getString());
    all_values.push_back(TrdCollGrp_NoTrades_4);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_3("MULTIPLESTRINGVALUE_MQT");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskOrderHandlingInst_3.getString());
    FIX::DeskType DeskType_3("STRING_O");
    noTrdRegTimestamps_0_0.set(DeskType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskType_3.getString());
    FIX::DeskTypeSource DeskTypeSource_3(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskTypeSource_3.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_3(FIX::UTCTIMESTAMP(3, 5, 30, 15, 9, 2017));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestamp_3.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_3("STRING_1956520589");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampOrigin_3.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_3(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampType_3.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_15;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_15("DATA_1369084527");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuer_15.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_15(1224522250);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuerLen_15.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_15("DATA_117000411");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDesc_15.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_15(754729160);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDescLen_15.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("4546672");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_15);
    UnderlyingInstrument_15.insert(UnderlyingAdjustedQuantity_15.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("35.220000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_15);
    UnderlyingInstrument_15.insert(UnderlyingAllocationPercent_15.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("43.730000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingAttachmentPoint_15.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_15("STRING_2123257992");
    noUnderlyings_0_0.set(UnderlyingCFICode_15);
    UnderlyingInstrument_15.insert(UnderlyingCFICode_15.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_15("STRING_358452545");
    noUnderlyings_0_0.set(UnderlyingCPProgram_15);
    UnderlyingInstrument_15.insert(UnderlyingCPProgram_15.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_15("STRING_1474285400");
    noUnderlyings_0_0.set(UnderlyingCPRegType_15);
    UnderlyingInstrument_15.insert(UnderlyingCPRegType_15.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("18093087");
    noUnderlyings_0_0.set(UnderlyingCapValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCapValue_15.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("13514045");
    noUnderlyings_0_0.set(UnderlyingCashAmount_15);
    UnderlyingInstrument_15.insert(UnderlyingCashAmount_15.getString());
    FIX::UnderlyingCashType UnderlyingCashType_15("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_15);
    UnderlyingInstrument_15.insert(UnderlyingCashType_15.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("3345048");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplier_15.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_15(1432513300);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplierUnit_15.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_15("COUNTRY_1262505927");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingCountryOfIssue_15.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_15("LOCALMKTDATE_661663583");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponPaymentDate_15.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("23.280000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponRate_15.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_15("STRING_645910461");
    noUnderlyings_0_0.set(UnderlyingCreditRating_15);
    UnderlyingInstrument_15.insert(UnderlyingCreditRating_15.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_15("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrency_15.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("7549646");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrentValue_15.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("67.550000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingDetachmentPoint_15.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("1309803");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingDirtyPrice_15.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("8404942");
    noUnderlyings_0_0.set(UnderlyingEndPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingEndPrice_15.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("6287014");
    noUnderlyings_0_0.set(UnderlyingEndValue_15);
    UnderlyingInstrument_15.insert(UnderlyingEndValue_15.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_15(359940334);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_15);
    UnderlyingInstrument_15.insert(UnderlyingExerciseStyle_15.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("21168025");
    noUnderlyings_0_0.set(UnderlyingFXRate_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRate_15.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_15('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRateCalc_15.getString());
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("4705638");
    noUnderlyings_0_0.set(UnderlyingFactor_15);
    UnderlyingInstrument_15.insert(UnderlyingFactor_15.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_15(1055339338);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_15);
    UnderlyingInstrument_15.insert(UnderlyingFlowScheduleType_15.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_15("STRING_1806822903");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_15);
    UnderlyingInstrument_15.insert(UnderlyingInstrRegistry_15.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_15("LOCALMKTDATE_1695086114");
    noUnderlyings_0_0.set(UnderlyingIssueDate_15);
    UnderlyingInstrument_15.insert(UnderlyingIssueDate_15.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_15("STRING_1172339749");
    noUnderlyings_0_0.set(UnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(UnderlyingIssuer_15.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_15("STRING_414068415");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingLocaleOfIssue_15.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_15("LOCALMKTDATE_2269694");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityDate_15.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_15("MONTHYEAR_828909623");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityMonthYear_15.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_15("TZTIMEONLY_588852788");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityTime_15.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("76.860000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_15('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_15);
    UnderlyingInstrument_15.insert(UnderlyingOptAttribute_15.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("81.880000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingOriginalNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_15("STRING_1787352797");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasure_15.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("3912830");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasureQty_15.getString());
    FIX::UnderlyingProduct UnderlyingProduct_15(987970027);
    noUnderlyings_0_0.set(UnderlyingProduct_15);
    UnderlyingInstrument_15.insert(UnderlyingProduct_15.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_15(2121857653);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_15);
    UnderlyingInstrument_15.insert(UnderlyingPutOrCall_15.getString());
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("18237963");
    noUnderlyings_0_0.set(UnderlyingPx_15);
    UnderlyingInstrument_15.insert(UnderlyingPx_15.getString());
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("1029923");
    noUnderlyings_0_0.set(UnderlyingQty_15);
    UnderlyingInstrument_15.insert(UnderlyingQty_15.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_15("LOCALMKTDATE_636037588");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_15);
    UnderlyingInstrument_15.insert(UnderlyingRedemptionDate_15.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_15("STRING_908145041");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingRepoCollateralSecurityType_15.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("27.670000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseRate_15.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_15(1817209540);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseTerm_15.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_15("STRING_143224658");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_15);
    UnderlyingInstrument_15.insert(UnderlyingRestructuringType_15.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_15("STRING_1503867410");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityDesc_15.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_15("EXCHANGE_1001652647");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityExchange_15.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_15("STRING_274204959");
    noUnderlyings_0_0.set(UnderlyingSecurityID_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityID_15.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_15("STRING_196878016");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityIDSource_15.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_15("STRING_1630354081");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecuritySubType_15.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_15("STRING_634145293");
    noUnderlyings_0_0.set(UnderlyingSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityType_15.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_15("STRING_166196945");
    noUnderlyings_0_0.set(UnderlyingSeniority_15);
    UnderlyingInstrument_15.insert(UnderlyingSeniority_15.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_15("STRING_2068092457");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlMethod_15.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_15(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlementType_15.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("12215362");
    noUnderlyings_0_0.set(UnderlyingStartValue_15);
    UnderlyingInstrument_15.insert(UnderlyingStartValue_15.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_15("STRING_1727431712");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingStateOrProvinceOfIssue_15.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_15("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikeCurrency_15.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("21415001");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikePrice_15.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_15("STRING_654581317");
    noUnderlyings_0_0.set(UnderlyingSymbol_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbol_15.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_15("STRING_1075302008");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbolSfx_15.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_15("STRING_582869268");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingTimeUnit_15.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_15("STRING_632625355");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasure_15.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("1151805");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasureQty_15.getString());
    all_values.push_back(UnderlyingInstrument_15);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_29("STRING_272494504");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltID_29.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_29("STRING_506463590");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltIDSource_29.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      FIX::UnderlyingStipType UnderlyingStipType_27("STRING_246868509");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipType_27.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_27("STRING_182776304");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipValue_27.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      FIX::UnderlyingStipType UnderlyingStipType_28("STRING_1589486142");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipType_28.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_28("STRING_882906098");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipValue_28.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_31("STRING_190905261");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyID_31.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_31('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyIDSource_31.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_31(1234146003);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyRole_31.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_56("STRING_1554284637");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubID_56.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_56(1508350963);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubIDType_56.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_57("STRING_1891650688");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubID_57.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_57(1037155070);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubIDType_57.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_58("STRING_2142496256");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubID_58.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_58(2057847633);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubIDType_58.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_32("STRING_957763880");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyID_32.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_32('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyIDSource_32.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_32(1131900269);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyRole_32.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_59("STRING_1752033389");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubID_59.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_59(1378292654);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubIDType_59.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_60("STRING_531728424");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubID_60.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_60(259131059);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubIDType_60.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_61("STRING_306111014");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubID_61.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_61(1114597693);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubIDType_61.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);

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
