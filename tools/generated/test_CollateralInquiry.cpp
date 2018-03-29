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
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_0;
  FIX::Account Account_5("STRING_980433420");
  msg.set(Account_5);
  CollateralInquiry_0.insert(Account_5.getString());
  FIX::AccountType AccountType_2(6);
  msg.set(AccountType_2);
  CollateralInquiry_0.insert(AccountType_2.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("13657946");
  msg.set(AccruedInterestAmt_4);
  CollateralInquiry_0.insert(AccruedInterestAmt_4.getString());
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("21031754");
  msg.set(CashOutstanding_1);
  CollateralInquiry_0.insert(CashOutstanding_1.getString());
  FIX::ClOrdID ClOrdID_7("STRING_1705985284");
  msg.set(ClOrdID_7);
  CollateralInquiry_0.insert(ClOrdID_7.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_7("LOCALMKTDATE_1099286203");
  msg.set(ClearingBusinessDate_7);
  CollateralInquiry_0.insert(ClearingBusinessDate_7.getString());
  FIX::CollInquiryID CollInquiryID_0("STRING_556552180");
  msg.set(CollInquiryID_0);
  CollateralInquiry_0.insert(CollInquiryID_0.getString());
  FIX::Currency Currency_7("CHF");
  msg.set(Currency_7);
  CollateralInquiry_0.insert(Currency_7.getString());
  FIX::EncodedText EncodedText_16("DATA_690715677");
  msg.set(EncodedText_16);
  CollateralInquiry_0.insert(EncodedText_16.getString());
  FIX::EncodedTextLen EncodedTextLen_16(755677019);
  msg.set(EncodedTextLen_16);
  CollateralInquiry_0.insert(EncodedTextLen_16.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("14607540");
  msg.set(EndAccruedInterestAmt_4);
  CollateralInquiry_0.insert(EndAccruedInterestAmt_4.getString());
  FIX::EndCash EndCash_4;
  EndCash_4.setString("11192764");
  msg.set(EndCash_4);
  CollateralInquiry_0.insert(EndCash_4.getString());
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("12581053");
  msg.set(MarginExcess_1);
  CollateralInquiry_0.insert(MarginExcess_1.getString());
  FIX::OrderID OrderID_7("STRING_2032859390");
  msg.set(OrderID_7);
  CollateralInquiry_0.insert(OrderID_7.getString());
  FIX::Price Price_5;
  Price_5.setString("10484494");
  msg.set(Price_5);
  CollateralInquiry_0.insert(Price_5.getString());
  FIX::PriceType PriceType_7(2);
  msg.set(PriceType_7);
  CollateralInquiry_0.insert(PriceType_7.getString());
  FIX::QtyType QtyType_5(0);
  msg.set(QtyType_5);
  CollateralInquiry_0.insert(QtyType_5.getString());
  FIX::Quantity Quantity_6;
  Quantity_6.setString("4127415");
  msg.set(Quantity_6);
  CollateralInquiry_0.insert(Quantity_6.getString());
  FIX::ResponseDestination ResponseDestination_0("STRING_855957496");
  msg.set(ResponseDestination_0);
  CollateralInquiry_0.insert(ResponseDestination_0.getString());
  FIX::ResponseTransportType ResponseTransportType_0(0);
  msg.set(ResponseTransportType_0);
  CollateralInquiry_0.insert(ResponseTransportType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_7("STRING_2144623311");
  msg.set(SecondaryClOrdID_7);
  CollateralInquiry_0.insert(SecondaryClOrdID_7.getString());
  FIX::SecondaryOrderID SecondaryOrderID_7("STRING_1178957732");
  msg.set(SecondaryOrderID_7);
  CollateralInquiry_0.insert(SecondaryOrderID_7.getString());
  FIX::SettlDate SettlDate_10("LOCALMKTDATE_2100666062");
  msg.set(SettlDate_10);
  CollateralInquiry_0.insert(SettlDate_10.getString());
  FIX::SettlSessID SettlSessID_3("STRING_ITD");
  msg.set(SettlSessID_3);
  CollateralInquiry_0.insert(SettlSessID_3.getString());
  FIX::SettlSessSubID SettlSessSubID_2("STRING_1057890214");
  msg.set(SettlSessSubID_2);
  CollateralInquiry_0.insert(SettlSessSubID_2.getString());
  FIX::Side Side_10('8');
  msg.set(Side_10);
  CollateralInquiry_0.insert(Side_10.getString());
  FIX::StartCash StartCash_4;
  StartCash_4.setString("4437253");
  msg.set(StartCash_4);
  CollateralInquiry_0.insert(StartCash_4.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_0('2');
  msg.set(SubscriptionRequestType_0);
  CollateralInquiry_0.insert(SubscriptionRequestType_0.getString());
  FIX::Text Text_16("STRING_1760317161");
  msg.set(Text_16);
  CollateralInquiry_0.insert(Text_16.getString());
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("1044870");
  msg.set(TotalNetValue_1);
  CollateralInquiry_0.insert(TotalNetValue_1.getString());
  FIX::TradingSessionID TradingSessionID_11("STRING_6");
  msg.set(TradingSessionID_11);
  CollateralInquiry_0.insert(TradingSessionID_11.getString());
  FIX::TradingSessionSubID TradingSessionSubID_11("STRING_4");
  msg.set(TradingSessionSubID_11);
  CollateralInquiry_0.insert(TradingSessionSubID_11.getString());
  all_values.push_back(CollateralInquiry_0);

  all_compo_names.insert("CollateralInquiry");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_0;
    FIX::CollInquiryQualifier CollInquiryQualifier_0(4);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_0);
    CollInqQualGrp_NoCollInquiryQualifier_0.insert(CollInquiryQualifier_0.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_0);
    all_compo_names.insert("CollInqQualGrp.NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    FIX::CollInquiryQualifier CollInquiryQualifier_1(5);
    noCollInquiryQualifier_0_1.set(CollInquiryQualifier_1);
    CollInqQualGrp_NoCollInquiryQualifier_1.insert(CollInquiryQualifier_1.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);
    all_compo_names.insert("CollInqQualGrp.NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_2;
    FIX::CollInquiryQualifier CollInquiryQualifier_2(4);
    noCollInquiryQualifier_0_2.set(CollInquiryQualifier_2);
    CollInqQualGrp_NoCollInquiryQualifier_2.insert(CollInquiryQualifier_2.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_2);
    all_compo_names.insert("CollInqQualGrp.NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    FIX::ExecID ExecID_9("STRING_801353933");
    noExecs_0_0.set(ExecID_9);
    ExecCollGrp_NoExecs_3.insert(ExecID_9.getString());
    all_values.push_back(ExecCollGrp_NoExecs_3);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    FIX::ExecID ExecID_10("STRING_1794151837");
    noExecs_0_1.set(ExecID_10);
    ExecCollGrp_NoExecs_4.insert(ExecID_10.getString());
    all_values.push_back(ExecCollGrp_NoExecs_4);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  FIX::AgreementCurrency AgreementCurrency_4("JPY");
  msg.set(AgreementCurrency_4);
  FinancingDetails_4.insert(AgreementCurrency_4.getString());
  FIX::AgreementDate AgreementDate_4("LOCALMKTDATE_1107422265");
  msg.set(AgreementDate_4);
  FinancingDetails_4.insert(AgreementDate_4.getString());
  FIX::AgreementDesc AgreementDesc_4("STRING_1351910073");
  msg.set(AgreementDesc_4);
  FinancingDetails_4.insert(AgreementDesc_4.getString());
  FIX::AgreementID AgreementID_4("STRING_667652676");
  msg.set(AgreementID_4);
  FinancingDetails_4.insert(AgreementID_4.getString());
  FIX::DeliveryType DeliveryType_4(3);
  msg.set(DeliveryType_4);
  FinancingDetails_4.insert(DeliveryType_4.getString());
  FIX::EndDate EndDate_4("LOCALMKTDATE_252875881");
  msg.set(EndDate_4);
  FinancingDetails_4.insert(EndDate_4.getString());
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("96.390000");
  msg.set(MarginRatio_4);
  FinancingDetails_4.insert(MarginRatio_4.getString());
  FIX::StartDate StartDate_4("LOCALMKTDATE_1997280417");
  msg.set(StartDate_4);
  FinancingDetails_4.insert(StartDate_4.getString());
  FIX::TerminationType TerminationType_4(4);
  msg.set(TerminationType_4);
  FinancingDetails_4.insert(TerminationType_4.getString());
  all_values.push_back(FinancingDetails_4);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_15;
    FIX::EncodedLegIssuer EncodedLegIssuer_15("DATA_1399576496");
    noLegs_0_0.set(EncodedLegIssuer_15);
    InstrumentLeg_15.insert(EncodedLegIssuer_15.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_15(662757111);
    noLegs_0_0.set(EncodedLegIssuerLen_15);
    InstrumentLeg_15.insert(EncodedLegIssuerLen_15.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_15("DATA_518391220");
    noLegs_0_0.set(EncodedLegSecurityDesc_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDesc_15.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_15(1352758910);
    noLegs_0_0.set(EncodedLegSecurityDescLen_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDescLen_15.getString());
    FIX::LegCFICode LegCFICode_15("STRING_1217011107");
    noLegs_0_0.set(LegCFICode_15);
    InstrumentLeg_15.insert(LegCFICode_15.getString());
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("15762814");
    noLegs_0_0.set(LegContractMultiplier_15);
    InstrumentLeg_15.insert(LegContractMultiplier_15.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_15(2067296934);
    noLegs_0_0.set(LegContractMultiplierUnit_15);
    InstrumentLeg_15.insert(LegContractMultiplierUnit_15.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_15("MONTHYEAR_1660736483");
    noLegs_0_0.set(LegContractSettlMonth_15);
    InstrumentLeg_15.insert(LegContractSettlMonth_15.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_15("COUNTRY_1773005629");
    noLegs_0_0.set(LegCountryOfIssue_15);
    InstrumentLeg_15.insert(LegCountryOfIssue_15.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_15("LOCALMKTDATE_1680130447");
    noLegs_0_0.set(LegCouponPaymentDate_15);
    InstrumentLeg_15.insert(LegCouponPaymentDate_15.getString());
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("35.610000");
    noLegs_0_0.set(LegCouponRate_15);
    InstrumentLeg_15.insert(LegCouponRate_15.getString());
    FIX::LegCreditRating LegCreditRating_15("STRING_802679596");
    noLegs_0_0.set(LegCreditRating_15);
    InstrumentLeg_15.insert(LegCreditRating_15.getString());
    FIX::LegCurrency LegCurrency_15("GBP");
    noLegs_0_0.set(LegCurrency_15);
    InstrumentLeg_15.insert(LegCurrency_15.getString());
    FIX::LegDatedDate LegDatedDate_15("LOCALMKTDATE_1935528985");
    noLegs_0_0.set(LegDatedDate_15);
    InstrumentLeg_15.insert(LegDatedDate_15.getString());
    FIX::LegExerciseStyle LegExerciseStyle_15(56566405);
    noLegs_0_0.set(LegExerciseStyle_15);
    InstrumentLeg_15.insert(LegExerciseStyle_15.getString());
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("15101060");
    noLegs_0_0.set(LegFactor_15);
    InstrumentLeg_15.insert(LegFactor_15.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_15(1477446906);
    noLegs_0_0.set(LegFlowScheduleType_15);
    InstrumentLeg_15.insert(LegFlowScheduleType_15.getString());
    FIX::LegInstrRegistry LegInstrRegistry_15("STRING_857920338");
    noLegs_0_0.set(LegInstrRegistry_15);
    InstrumentLeg_15.insert(LegInstrRegistry_15.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_15("LOCALMKTDATE_1156774211");
    noLegs_0_0.set(LegInterestAccrualDate_15);
    InstrumentLeg_15.insert(LegInterestAccrualDate_15.getString());
    FIX::LegIssueDate LegIssueDate_15("LOCALMKTDATE_1710080504");
    noLegs_0_0.set(LegIssueDate_15);
    InstrumentLeg_15.insert(LegIssueDate_15.getString());
    FIX::LegIssuer LegIssuer_15("STRING_267467643");
    noLegs_0_0.set(LegIssuer_15);
    InstrumentLeg_15.insert(LegIssuer_15.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_15("STRING_116712828");
    noLegs_0_0.set(LegLocaleOfIssue_15);
    InstrumentLeg_15.insert(LegLocaleOfIssue_15.getString());
    FIX::LegMaturityDate LegMaturityDate_15("LOCALMKTDATE_914506929");
    noLegs_0_0.set(LegMaturityDate_15);
    InstrumentLeg_15.insert(LegMaturityDate_15.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_15("MONTHYEAR_935120319");
    noLegs_0_0.set(LegMaturityMonthYear_15);
    InstrumentLeg_15.insert(LegMaturityMonthYear_15.getString());
    FIX::LegMaturityTime LegMaturityTime_15("TZTIMEONLY_1109510835");
    noLegs_0_0.set(LegMaturityTime_15);
    InstrumentLeg_15.insert(LegMaturityTime_15.getString());
    FIX::LegOptAttribute LegOptAttribute_15('1');
    noLegs_0_0.set(LegOptAttribute_15);
    InstrumentLeg_15.insert(LegOptAttribute_15.getString());
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("15660799");
    noLegs_0_0.set(LegOptionRatio_15);
    InstrumentLeg_15.insert(LegOptionRatio_15.getString());
    FIX::LegPool LegPool_15("STRING_959307605");
    noLegs_0_0.set(LegPool_15);
    InstrumentLeg_15.insert(LegPool_15.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_15("STRING_1833000257");
    noLegs_0_0.set(LegPriceUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasure_15.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("9055134");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasureQty_15.getString());
    FIX::LegProduct LegProduct_15(211400453);
    noLegs_0_0.set(LegProduct_15);
    InstrumentLeg_15.insert(LegProduct_15.getString());
    FIX::LegPutOrCall LegPutOrCall_15(348273720);
    noLegs_0_0.set(LegPutOrCall_15);
    InstrumentLeg_15.insert(LegPutOrCall_15.getString());
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("14239046");
    noLegs_0_0.set(LegRatioQty_15);
    InstrumentLeg_15.insert(LegRatioQty_15.getString());
    FIX::LegRedemptionDate LegRedemptionDate_15("LOCALMKTDATE_1564159363");
    noLegs_0_0.set(LegRedemptionDate_15);
    InstrumentLeg_15.insert(LegRedemptionDate_15.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_15("STRING_1565284828");
    noLegs_0_0.set(LegRepoCollateralSecurityType_15);
    InstrumentLeg_15.insert(LegRepoCollateralSecurityType_15.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("24.520000");
    noLegs_0_0.set(LegRepurchaseRate_15);
    InstrumentLeg_15.insert(LegRepurchaseRate_15.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_15(1483972649);
    noLegs_0_0.set(LegRepurchaseTerm_15);
    InstrumentLeg_15.insert(LegRepurchaseTerm_15.getString());
    FIX::LegSecurityDesc LegSecurityDesc_15("STRING_1078537663");
    noLegs_0_0.set(LegSecurityDesc_15);
    InstrumentLeg_15.insert(LegSecurityDesc_15.getString());
    FIX::LegSecurityExchange LegSecurityExchange_15("EXCHANGE_478224433");
    noLegs_0_0.set(LegSecurityExchange_15);
    InstrumentLeg_15.insert(LegSecurityExchange_15.getString());
    FIX::LegSecurityID LegSecurityID_15("STRING_1016619448");
    noLegs_0_0.set(LegSecurityID_15);
    InstrumentLeg_15.insert(LegSecurityID_15.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_15("STRING_696277576");
    noLegs_0_0.set(LegSecurityIDSource_15);
    InstrumentLeg_15.insert(LegSecurityIDSource_15.getString());
    FIX::LegSecuritySubType LegSecuritySubType_15("STRING_1280904030");
    noLegs_0_0.set(LegSecuritySubType_15);
    InstrumentLeg_15.insert(LegSecuritySubType_15.getString());
    FIX::LegSecurityType LegSecurityType_15("STRING_1031975232");
    noLegs_0_0.set(LegSecurityType_15);
    InstrumentLeg_15.insert(LegSecurityType_15.getString());
    FIX::LegSide LegSide_15('1');
    noLegs_0_0.set(LegSide_15);
    InstrumentLeg_15.insert(LegSide_15.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_15("STRING_1068949367");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_15);
    InstrumentLeg_15.insert(LegStateOrProvinceOfIssue_15.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_15("JPY");
    noLegs_0_0.set(LegStrikeCurrency_15);
    InstrumentLeg_15.insert(LegStrikeCurrency_15.getString());
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("3989126");
    noLegs_0_0.set(LegStrikePrice_15);
    InstrumentLeg_15.insert(LegStrikePrice_15.getString());
    FIX::LegSymbol LegSymbol_15("STRING_1946461976");
    noLegs_0_0.set(LegSymbol_15);
    InstrumentLeg_15.insert(LegSymbol_15.getString());
    FIX::LegSymbolSfx LegSymbolSfx_15("STRING_156212204");
    noLegs_0_0.set(LegSymbolSfx_15);
    InstrumentLeg_15.insert(LegSymbolSfx_15.getString());
    FIX::LegTimeUnit LegTimeUnit_15("STRING_2108993129");
    noLegs_0_0.set(LegTimeUnit_15);
    InstrumentLeg_15.insert(LegTimeUnit_15.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_15("STRING_66445971");
    noLegs_0_0.set(LegUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegUnitOfMeasure_15.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("2729250");
    noLegs_0_0.set(LegUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegUnitOfMeasureQty_15.getString());
    all_values.push_back(InstrumentLeg_15);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      FIX::LegSecurityAltID LegSecurityAltID_31("STRING_1001566290");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltID_31.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_31("STRING_1382435868");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltIDSource_31.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_16;
    FIX::EncodedLegIssuer EncodedLegIssuer_16("DATA_2043399220");
    noLegs_0_1.set(EncodedLegIssuer_16);
    InstrumentLeg_16.insert(EncodedLegIssuer_16.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_16(420162600);
    noLegs_0_1.set(EncodedLegIssuerLen_16);
    InstrumentLeg_16.insert(EncodedLegIssuerLen_16.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_16("DATA_194259825");
    noLegs_0_1.set(EncodedLegSecurityDesc_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDesc_16.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_16(1728915829);
    noLegs_0_1.set(EncodedLegSecurityDescLen_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDescLen_16.getString());
    FIX::LegCFICode LegCFICode_16("STRING_1325676047");
    noLegs_0_1.set(LegCFICode_16);
    InstrumentLeg_16.insert(LegCFICode_16.getString());
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("4056602");
    noLegs_0_1.set(LegContractMultiplier_16);
    InstrumentLeg_16.insert(LegContractMultiplier_16.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_16(2077189550);
    noLegs_0_1.set(LegContractMultiplierUnit_16);
    InstrumentLeg_16.insert(LegContractMultiplierUnit_16.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_16("MONTHYEAR_602097065");
    noLegs_0_1.set(LegContractSettlMonth_16);
    InstrumentLeg_16.insert(LegContractSettlMonth_16.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_16("COUNTRY_1969819641");
    noLegs_0_1.set(LegCountryOfIssue_16);
    InstrumentLeg_16.insert(LegCountryOfIssue_16.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_16("LOCALMKTDATE_1494990730");
    noLegs_0_1.set(LegCouponPaymentDate_16);
    InstrumentLeg_16.insert(LegCouponPaymentDate_16.getString());
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("95.180000");
    noLegs_0_1.set(LegCouponRate_16);
    InstrumentLeg_16.insert(LegCouponRate_16.getString());
    FIX::LegCreditRating LegCreditRating_16("STRING_1306308643");
    noLegs_0_1.set(LegCreditRating_16);
    InstrumentLeg_16.insert(LegCreditRating_16.getString());
    FIX::LegCurrency LegCurrency_16("CHF");
    noLegs_0_1.set(LegCurrency_16);
    InstrumentLeg_16.insert(LegCurrency_16.getString());
    FIX::LegDatedDate LegDatedDate_16("LOCALMKTDATE_175444443");
    noLegs_0_1.set(LegDatedDate_16);
    InstrumentLeg_16.insert(LegDatedDate_16.getString());
    FIX::LegExerciseStyle LegExerciseStyle_16(1122322322);
    noLegs_0_1.set(LegExerciseStyle_16);
    InstrumentLeg_16.insert(LegExerciseStyle_16.getString());
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("10664443");
    noLegs_0_1.set(LegFactor_16);
    InstrumentLeg_16.insert(LegFactor_16.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_16(1207419676);
    noLegs_0_1.set(LegFlowScheduleType_16);
    InstrumentLeg_16.insert(LegFlowScheduleType_16.getString());
    FIX::LegInstrRegistry LegInstrRegistry_16("STRING_759137940");
    noLegs_0_1.set(LegInstrRegistry_16);
    InstrumentLeg_16.insert(LegInstrRegistry_16.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_16("LOCALMKTDATE_2135393700");
    noLegs_0_1.set(LegInterestAccrualDate_16);
    InstrumentLeg_16.insert(LegInterestAccrualDate_16.getString());
    FIX::LegIssueDate LegIssueDate_16("LOCALMKTDATE_148477665");
    noLegs_0_1.set(LegIssueDate_16);
    InstrumentLeg_16.insert(LegIssueDate_16.getString());
    FIX::LegIssuer LegIssuer_16("STRING_1906059581");
    noLegs_0_1.set(LegIssuer_16);
    InstrumentLeg_16.insert(LegIssuer_16.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_16("STRING_386822677");
    noLegs_0_1.set(LegLocaleOfIssue_16);
    InstrumentLeg_16.insert(LegLocaleOfIssue_16.getString());
    FIX::LegMaturityDate LegMaturityDate_16("LOCALMKTDATE_2094939641");
    noLegs_0_1.set(LegMaturityDate_16);
    InstrumentLeg_16.insert(LegMaturityDate_16.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_16("MONTHYEAR_2062271785");
    noLegs_0_1.set(LegMaturityMonthYear_16);
    InstrumentLeg_16.insert(LegMaturityMonthYear_16.getString());
    FIX::LegMaturityTime LegMaturityTime_16("TZTIMEONLY_348332158");
    noLegs_0_1.set(LegMaturityTime_16);
    InstrumentLeg_16.insert(LegMaturityTime_16.getString());
    FIX::LegOptAttribute LegOptAttribute_16('1');
    noLegs_0_1.set(LegOptAttribute_16);
    InstrumentLeg_16.insert(LegOptAttribute_16.getString());
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("1877131");
    noLegs_0_1.set(LegOptionRatio_16);
    InstrumentLeg_16.insert(LegOptionRatio_16.getString());
    FIX::LegPool LegPool_16("STRING_1224348568");
    noLegs_0_1.set(LegPool_16);
    InstrumentLeg_16.insert(LegPool_16.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_16("STRING_1015468254");
    noLegs_0_1.set(LegPriceUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasure_16.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("15701490");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasureQty_16.getString());
    FIX::LegProduct LegProduct_16(1120264140);
    noLegs_0_1.set(LegProduct_16);
    InstrumentLeg_16.insert(LegProduct_16.getString());
    FIX::LegPutOrCall LegPutOrCall_16(1435630855);
    noLegs_0_1.set(LegPutOrCall_16);
    InstrumentLeg_16.insert(LegPutOrCall_16.getString());
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("17644088");
    noLegs_0_1.set(LegRatioQty_16);
    InstrumentLeg_16.insert(LegRatioQty_16.getString());
    FIX::LegRedemptionDate LegRedemptionDate_16("LOCALMKTDATE_701696322");
    noLegs_0_1.set(LegRedemptionDate_16);
    InstrumentLeg_16.insert(LegRedemptionDate_16.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_16("STRING_613823254");
    noLegs_0_1.set(LegRepoCollateralSecurityType_16);
    InstrumentLeg_16.insert(LegRepoCollateralSecurityType_16.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("54.920000");
    noLegs_0_1.set(LegRepurchaseRate_16);
    InstrumentLeg_16.insert(LegRepurchaseRate_16.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_16(631402224);
    noLegs_0_1.set(LegRepurchaseTerm_16);
    InstrumentLeg_16.insert(LegRepurchaseTerm_16.getString());
    FIX::LegSecurityDesc LegSecurityDesc_16("STRING_1215920319");
    noLegs_0_1.set(LegSecurityDesc_16);
    InstrumentLeg_16.insert(LegSecurityDesc_16.getString());
    FIX::LegSecurityExchange LegSecurityExchange_16("EXCHANGE_1992405134");
    noLegs_0_1.set(LegSecurityExchange_16);
    InstrumentLeg_16.insert(LegSecurityExchange_16.getString());
    FIX::LegSecurityID LegSecurityID_16("STRING_2126392954");
    noLegs_0_1.set(LegSecurityID_16);
    InstrumentLeg_16.insert(LegSecurityID_16.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_16("STRING_523236189");
    noLegs_0_1.set(LegSecurityIDSource_16);
    InstrumentLeg_16.insert(LegSecurityIDSource_16.getString());
    FIX::LegSecuritySubType LegSecuritySubType_16("STRING_1151230129");
    noLegs_0_1.set(LegSecuritySubType_16);
    InstrumentLeg_16.insert(LegSecuritySubType_16.getString());
    FIX::LegSecurityType LegSecurityType_16("STRING_404954051");
    noLegs_0_1.set(LegSecurityType_16);
    InstrumentLeg_16.insert(LegSecurityType_16.getString());
    FIX::LegSide LegSide_16('3');
    noLegs_0_1.set(LegSide_16);
    InstrumentLeg_16.insert(LegSide_16.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_16("STRING_1326674572");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_16);
    InstrumentLeg_16.insert(LegStateOrProvinceOfIssue_16.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_16("USD");
    noLegs_0_1.set(LegStrikeCurrency_16);
    InstrumentLeg_16.insert(LegStrikeCurrency_16.getString());
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("3866106");
    noLegs_0_1.set(LegStrikePrice_16);
    InstrumentLeg_16.insert(LegStrikePrice_16.getString());
    FIX::LegSymbol LegSymbol_16("STRING_138930666");
    noLegs_0_1.set(LegSymbol_16);
    InstrumentLeg_16.insert(LegSymbol_16.getString());
    FIX::LegSymbolSfx LegSymbolSfx_16("STRING_1363130879");
    noLegs_0_1.set(LegSymbolSfx_16);
    InstrumentLeg_16.insert(LegSymbolSfx_16.getString());
    FIX::LegTimeUnit LegTimeUnit_16("STRING_535088266");
    noLegs_0_1.set(LegTimeUnit_16);
    InstrumentLeg_16.insert(LegTimeUnit_16.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_16("STRING_2044990247");
    noLegs_0_1.set(LegUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegUnitOfMeasure_16.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("17499535");
    noLegs_0_1.set(LegUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegUnitOfMeasureQty_16.getString());
    all_values.push_back(InstrumentLeg_16);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      FIX::LegSecurityAltID LegSecurityAltID_32("STRING_1959778384");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltID_32.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_32("STRING_2098285715");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltIDSource_32.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      FIX::LegSecurityAltID LegSecurityAltID_33("STRING_496446224");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltID_33.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_33("STRING_7905");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltIDSource_33.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("6.350000");
  msg.set(AttachmentPoint_7);
  Instrument_7.insert(AttachmentPoint_7.getString());
  FIX::CFICode CFICode_7("STRING_1511914478");
  msg.set(CFICode_7);
  Instrument_7.insert(CFICode_7.getString());
  FIX::CPProgram CPProgram_7(99);
  msg.set(CPProgram_7);
  Instrument_7.insert(CPProgram_7.getString());
  FIX::CPRegType CPRegType_7("STRING_147931128");
  msg.set(CPRegType_7);
  Instrument_7.insert(CPRegType_7.getString());
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("8000616");
  msg.set(CapPrice_7);
  Instrument_7.insert(CapPrice_7.getString());
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("11870821");
  msg.set(ContractMultiplier_7);
  Instrument_7.insert(ContractMultiplier_7.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_7(0);
  msg.set(ContractMultiplierUnit_7);
  Instrument_7.insert(ContractMultiplierUnit_7.getString());
  FIX::ContractSettlMonth ContractSettlMonth_7("MONTHYEAR_1413884939");
  msg.set(ContractSettlMonth_7);
  Instrument_7.insert(ContractSettlMonth_7.getString());
  FIX::CountryOfIssue CountryOfIssue_7("COUNTRY_1209667650");
  msg.set(CountryOfIssue_7);
  Instrument_7.insert(CountryOfIssue_7.getString());
  FIX::CouponPaymentDate CouponPaymentDate_7("LOCALMKTDATE_1481029674");
  msg.set(CouponPaymentDate_7);
  Instrument_7.insert(CouponPaymentDate_7.getString());
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("16.110000");
  msg.set(CouponRate_7);
  Instrument_7.insert(CouponRate_7.getString());
  FIX::CreditRating CreditRating_7("STRING_1054589136");
  msg.set(CreditRating_7);
  Instrument_7.insert(CreditRating_7.getString());
  FIX::DatedDate DatedDate_7("LOCALMKTDATE_1459938980");
  msg.set(DatedDate_7);
  Instrument_7.insert(DatedDate_7.getString());
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("78.000000");
  msg.set(DetachmentPoint_7);
  Instrument_7.insert(DetachmentPoint_7.getString());
  FIX::EncodedIssuer EncodedIssuer_7("DATA_58335617");
  msg.set(EncodedIssuer_7);
  Instrument_7.insert(EncodedIssuer_7.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_7(1864893031);
  msg.set(EncodedIssuerLen_7);
  Instrument_7.insert(EncodedIssuerLen_7.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_7("DATA_1314334293");
  msg.set(EncodedSecurityDesc_7);
  Instrument_7.insert(EncodedSecurityDesc_7.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_7(1385010189);
  msg.set(EncodedSecurityDescLen_7);
  Instrument_7.insert(EncodedSecurityDescLen_7.getString());
  FIX::ExerciseStyle ExerciseStyle_7(1);
  msg.set(ExerciseStyle_7);
  Instrument_7.insert(ExerciseStyle_7.getString());
  FIX::Factor Factor_7;
  Factor_7.setString("5420714");
  msg.set(Factor_7);
  Instrument_7.insert(Factor_7.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_7(true);
  msg.set(FlexProductEligibilityIndicator_7);
  Instrument_7.insert(FlexProductEligibilityIndicator_7.getString());
  FIX::FlexibleIndicator FlexibleIndicator_7(false);
  msg.set(FlexibleIndicator_7);
  Instrument_7.insert(FlexibleIndicator_7.getString());
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("19052023");
  msg.set(FloorPrice_7);
  Instrument_7.insert(FloorPrice_7.getString());
  FIX::FlowScheduleType FlowScheduleType_7(3);
  msg.set(FlowScheduleType_7);
  Instrument_7.insert(FlowScheduleType_7.getString());
  FIX::InstrRegistry InstrRegistry_7("STRING_1281123022");
  msg.set(InstrRegistry_7);
  Instrument_7.insert(InstrRegistry_7.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_7('1');
  msg.set(InstrmtAssignmentMethod_7);
  Instrument_7.insert(InstrmtAssignmentMethod_7.getString());
  FIX::InterestAccrualDate InterestAccrualDate_7("LOCALMKTDATE_641769667");
  msg.set(InterestAccrualDate_7);
  Instrument_7.insert(InterestAccrualDate_7.getString());
  FIX::IssueDate IssueDate_7("LOCALMKTDATE_1093417758");
  msg.set(IssueDate_7);
  Instrument_7.insert(IssueDate_7.getString());
  FIX::Issuer Issuer_7("STRING_1458474326");
  msg.set(Issuer_7);
  Instrument_7.insert(Issuer_7.getString());
  FIX::ListMethod ListMethod_7(1);
  msg.set(ListMethod_7);
  Instrument_7.insert(ListMethod_7.getString());
  FIX::LocaleOfIssue LocaleOfIssue_7("STRING_1093425663");
  msg.set(LocaleOfIssue_7);
  Instrument_7.insert(LocaleOfIssue_7.getString());
  FIX::MaturityDate MaturityDate_7("LOCALMKTDATE_486141314");
  msg.set(MaturityDate_7);
  Instrument_7.insert(MaturityDate_7.getString());
  FIX::MaturityMonthYear MaturityMonthYear_7("MONTHYEAR_502646722");
  msg.set(MaturityMonthYear_7);
  Instrument_7.insert(MaturityMonthYear_7.getString());
  FIX::MaturityTime MaturityTime_7("TZTIMEONLY_516098958");
  msg.set(MaturityTime_7);
  Instrument_7.insert(MaturityTime_7.getString());
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("6340724");
  msg.set(MinPriceIncrement_7);
  Instrument_7.insert(MinPriceIncrement_7.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("13027084");
  msg.set(MinPriceIncrementAmount_7);
  Instrument_7.insert(MinPriceIncrementAmount_7.getString());
  FIX::NTPositionLimit NTPositionLimit_7(1703181116);
  msg.set(NTPositionLimit_7);
  Instrument_7.insert(NTPositionLimit_7.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("98.920000");
  msg.set(NotionalPercentageOutstanding_7);
  Instrument_7.insert(NotionalPercentageOutstanding_7.getString());
  FIX::OptAttribute OptAttribute_7('5');
  msg.set(OptAttribute_7);
  Instrument_7.insert(OptAttribute_7.getString());
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("7653651");
  msg.set(OptPayoutAmount_7);
  Instrument_7.insert(OptPayoutAmount_7.getString());
  FIX::OptPayoutType OptPayoutType_7(1);
  msg.set(OptPayoutType_7);
  Instrument_7.insert(OptPayoutType_7.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("13.100000");
  msg.set(OriginalNotionalPercentageOutstanding_7);
  Instrument_7.insert(OriginalNotionalPercentageOutstanding_7.getString());
  FIX::Pool Pool_7("STRING_1819954254");
  msg.set(Pool_7);
  Instrument_7.insert(Pool_7.getString());
  FIX::PositionLimit PositionLimit_7(129701250);
  msg.set(PositionLimit_7);
  Instrument_7.insert(PositionLimit_7.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_7("STRING_INT");
  msg.set(PriceQuoteMethod_7);
  Instrument_7.insert(PriceQuoteMethod_7.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_7("STRING_1878289871");
  msg.set(PriceUnitOfMeasure_7);
  Instrument_7.insert(PriceUnitOfMeasure_7.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("19945942");
  msg.set(PriceUnitOfMeasureQty_7);
  Instrument_7.insert(PriceUnitOfMeasureQty_7.getString());
  FIX::Product Product_9(10);
  msg.set(Product_9);
  Instrument_7.insert(Product_9.getString());
  FIX::ProductComplex ProductComplex_7("STRING_1115816412");
  msg.set(ProductComplex_7);
  Instrument_7.insert(ProductComplex_7.getString());
  FIX::PutOrCall PutOrCall_7(0);
  msg.set(PutOrCall_7);
  Instrument_7.insert(PutOrCall_7.getString());
  FIX::RedemptionDate RedemptionDate_7("LOCALMKTDATE_1765911228");
  msg.set(RedemptionDate_7);
  Instrument_7.insert(RedemptionDate_7.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_7("STRING_739953554");
  msg.set(RepoCollateralSecurityType_7);
  Instrument_7.insert(RepoCollateralSecurityType_7.getString());
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("91.650000");
  msg.set(RepurchaseRate_7);
  Instrument_7.insert(RepurchaseRate_7.getString());
  FIX::RepurchaseTerm RepurchaseTerm_7(1523629931);
  msg.set(RepurchaseTerm_7);
  Instrument_7.insert(RepurchaseTerm_7.getString());
  FIX::RestructuringType RestructuringType_7("STRING_MM");
  msg.set(RestructuringType_7);
  Instrument_7.insert(RestructuringType_7.getString());
  FIX::SecurityDesc SecurityDesc_7("STRING_1609052187");
  msg.set(SecurityDesc_7);
  Instrument_7.insert(SecurityDesc_7.getString());
  FIX::SecurityExchange SecurityExchange_7("EXCHANGE_883818542");
  msg.set(SecurityExchange_7);
  Instrument_7.insert(SecurityExchange_7.getString());
  FIX::SecurityGroup SecurityGroup_7("STRING_1540948630");
  msg.set(SecurityGroup_7);
  Instrument_7.insert(SecurityGroup_7.getString());
  FIX::SecurityID SecurityID_7("STRING_554986297");
  msg.set(SecurityID_7);
  Instrument_7.insert(SecurityID_7.getString());
  FIX::SecurityIDSource SecurityIDSource_7("STRING_E");
  msg.set(SecurityIDSource_7);
  Instrument_7.insert(SecurityIDSource_7.getString());
  FIX::SecurityStatus SecurityStatus_7("STRING_2");
  msg.set(SecurityStatus_7);
  Instrument_7.insert(SecurityStatus_7.getString());
  FIX::SecuritySubType SecuritySubType_7("STRING_1648411961");
  msg.set(SecuritySubType_7);
  Instrument_7.insert(SecuritySubType_7.getString());
  FIX::SecurityType SecurityType_9("STRING_BUYSELL");
  msg.set(SecurityType_9);
  Instrument_7.insert(SecurityType_9.getString());
  FIX::Seniority Seniority_7("STRING_SD");
  msg.set(Seniority_7);
  Instrument_7.insert(Seniority_7.getString());
  FIX::SettlMethod SettlMethod_7('P');
  msg.set(SettlMethod_7);
  Instrument_7.insert(SettlMethod_7.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_7("STRING_1315022977");
  msg.set(SettleOnOpenFlag_7);
  Instrument_7.insert(SettleOnOpenFlag_7.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_7("STRING_189552355");
  msg.set(StateOrProvinceOfIssue_7);
  Instrument_7.insert(StateOrProvinceOfIssue_7.getString());
  FIX::StrikeCurrency StrikeCurrency_7("EUR");
  msg.set(StrikeCurrency_7);
  Instrument_7.insert(StrikeCurrency_7.getString());
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("7586620");
  msg.set(StrikeMultiplier_7);
  Instrument_7.insert(StrikeMultiplier_7.getString());
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("3380898");
  msg.set(StrikePrice_7);
  Instrument_7.insert(StrikePrice_7.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_7(5);
  msg.set(StrikePriceBoundaryMethod_7);
  Instrument_7.insert(StrikePriceBoundaryMethod_7.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("33.640000");
  msg.set(StrikePriceBoundaryPrecision_7);
  Instrument_7.insert(StrikePriceBoundaryPrecision_7.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_7(4);
  msg.set(StrikePriceDeterminationMethod_7);
  Instrument_7.insert(StrikePriceDeterminationMethod_7.getString());
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("15981863");
  msg.set(StrikeValue_7);
  Instrument_7.insert(StrikeValue_7.getString());
  FIX::Symbol Symbol_7("STRING_1719598826");
  msg.set(Symbol_7);
  Instrument_7.insert(Symbol_7.getString());
  FIX::SymbolSfx SymbolSfx_7("STRING_CD");
  msg.set(SymbolSfx_7);
  Instrument_7.insert(SymbolSfx_7.getString());
  FIX::TimeUnit TimeUnit_7("STRING_Min");
  msg.set(TimeUnit_7);
  Instrument_7.insert(TimeUnit_7.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_7(3);
  msg.set(UnderlyingPriceDeterminationMethod_7);
  Instrument_7.insert(UnderlyingPriceDeterminationMethod_7.getString());
  FIX::UnitOfMeasure UnitOfMeasure_7("STRING_lbs");
  msg.set(UnitOfMeasure_7);
  Instrument_7.insert(UnitOfMeasure_7.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("3896097");
  msg.set(UnitOfMeasureQty_7);
  Instrument_7.insert(UnitOfMeasureQty_7.getString());
  FIX::ValuationMethod ValuationMethod_7("STRING_CDSD");
  msg.set(ValuationMethod_7);
  Instrument_7.insert(ValuationMethod_7.getString());
  all_values.push_back(Instrument_7);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    FIX::ComplexEventCondition ComplexEventCondition_15(1);
    noComplexEvents_0_0.set(ComplexEventCondition_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventCondition_15.getString());
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("19380124");
    noComplexEvents_0_0.set(ComplexEventPrice_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPrice_15.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_15(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryMethod_15.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("74.700000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryPrecision_15.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_15(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceTimeType_15.getString());
    FIX::ComplexEventType ComplexEventType_15(1);
    noComplexEvents_0_0.set(ComplexEventType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventType_15.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("7340937");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexOptPayoutAmount_15.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_15);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      FIX::ComplexEventEndDate ComplexEventEndDate_37(FIX::UTCTIMESTAMP(16, 16, 19, 16, 10, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventEndDate_37.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_37(FIX::UTCTIMESTAMP(22, 40, 9, 9, 1, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventStartDate_37.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        FIX::ComplexEventEndTime ComplexEventEndTime_77(FIX::UTCTIMEONLY(11, 20, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventEndTime_77.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_77(FIX::UTCTIMEONLY(1, 23, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventStartTime_77.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        FIX::ComplexEventEndTime ComplexEventEndTime_78(FIX::UTCTIMEONLY(17, 51, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventEndTime_78.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_78(FIX::UTCTIMEONLY(1, 5, 42));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventStartTime_78.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        FIX::ComplexEventEndTime ComplexEventEndTime_79(FIX::UTCTIMEONLY(10, 50, 24));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventEndTime_79.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_79(FIX::UTCTIMEONLY(23, 30, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventStartTime_79.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      FIX::ComplexEventEndDate ComplexEventEndDate_38(FIX::UTCTIMESTAMP(22, 38, 10, 22, 8, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventEndDate_38.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_38(FIX::UTCTIMESTAMP(10, 0, 9, 8, 7, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventStartDate_38.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        FIX::ComplexEventEndTime ComplexEventEndTime_80(FIX::UTCTIMEONLY(14, 15, 36));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventEndTime_80.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_80(FIX::UTCTIMEONLY(16, 41, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventStartTime_80.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        FIX::ComplexEventEndTime ComplexEventEndTime_81(FIX::UTCTIMEONLY(19, 31, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventEndTime_81.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_81(FIX::UTCTIMEONLY(22, 59, 51));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventStartTime_81.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        FIX::ComplexEventEndTime ComplexEventEndTime_82(FIX::UTCTIMEONLY(13, 21, 5));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventEndTime_82.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_82(FIX::UTCTIMEONLY(20, 45, 28));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventStartTime_82.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      FIX::ComplexEventEndDate ComplexEventEndDate_39(FIX::UTCTIMESTAMP(21, 29, 26, 3, 3, 2008));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventEndDate_39.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_39(FIX::UTCTIMESTAMP(8, 57, 9, 19, 6, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventStartDate_39.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        FIX::ComplexEventEndTime ComplexEventEndTime_83(FIX::UTCTIMEONLY(2, 19, 48));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventEndTime_83.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_83(FIX::UTCTIMEONLY(17, 40, 15));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventStartTime_83.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        FIX::ComplexEventEndTime ComplexEventEndTime_84(FIX::UTCTIMEONLY(5, 28, 17));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventEndTime_84.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_84(FIX::UTCTIMEONLY(13, 2, 29));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventStartTime_84.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        FIX::ComplexEventEndTime ComplexEventEndTime_85(FIX::UTCTIMEONLY(0, 50, 18));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventEndTime_85.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_85(FIX::UTCTIMEONLY(5, 0, 9));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventStartTime_85.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_16;
    FIX::ComplexEventCondition ComplexEventCondition_16(2);
    noComplexEvents_0_1.set(ComplexEventCondition_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventCondition_16.getString());
    FIX::ComplexEventPrice ComplexEventPrice_16;
    ComplexEventPrice_16.setString("18755675");
    noComplexEvents_0_1.set(ComplexEventPrice_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPrice_16.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_16(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryMethod_16.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("29.290000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryPrecision_16.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_16(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceTimeType_16.getString());
    FIX::ComplexEventType ComplexEventType_16(3);
    noComplexEvents_0_1.set(ComplexEventType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventType_16.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("12286298");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexOptPayoutAmount_16.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_16);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      FIX::ComplexEventEndDate ComplexEventEndDate_40(FIX::UTCTIMESTAMP(17, 54, 12, 14, 11, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventEndDate_40.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_40(FIX::UTCTIMESTAMP(15, 47, 48, 24, 5, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventStartDate_40.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        FIX::ComplexEventEndTime ComplexEventEndTime_86(FIX::UTCTIMEONLY(7, 28, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventEndTime_86.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_86(FIX::UTCTIMEONLY(13, 2, 15));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventStartTime_86.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        FIX::ComplexEventEndTime ComplexEventEndTime_87(FIX::UTCTIMEONLY(3, 26, 7));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventEndTime_87.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_87(FIX::UTCTIMEONLY(7, 5, 51));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventStartTime_87.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      FIX::ComplexEventEndDate ComplexEventEndDate_41(FIX::UTCTIMESTAMP(2, 37, 11, 20, 12, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventEndDate_41.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_41(FIX::UTCTIMESTAMP(6, 2, 52, 11, 7, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventStartDate_41.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        FIX::ComplexEventEndTime ComplexEventEndTime_88(FIX::UTCTIMEONLY(6, 32, 32));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventEndTime_88.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_88(FIX::UTCTIMEONLY(9, 26, 20));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventStartTime_88.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_13;
    FIX::EventDate EventDate_13("LOCALMKTDATE_1097008149");
    noEvents_0_0.set(EventDate_13);
    EvntGrp_NoEvents_13.insert(EventDate_13.getString());
    FIX::EventPx EventPx_13;
    EventPx_13.setString("2332916");
    noEvents_0_0.set(EventPx_13);
    EvntGrp_NoEvents_13.insert(EventPx_13.getString());
    FIX::EventText EventText_13("STRING_2042502359");
    noEvents_0_0.set(EventText_13);
    EvntGrp_NoEvents_13.insert(EventText_13.getString());
    FIX::EventTime EventTime_13(FIX::UTCTIMESTAMP(21, 56, 30, 17, 3, 2001));
    noEvents_0_0.set(EventTime_13);
    EvntGrp_NoEvents_13.insert(EventTime_13.getString());
    FIX::EventType EventType_13(1);
    noEvents_0_0.set(EventType_13);
    EvntGrp_NoEvents_13.insert(EventType_13.getString());
    all_values.push_back(EvntGrp_NoEvents_13);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    FIX::EventDate EventDate_14("LOCALMKTDATE_476328807");
    noEvents_0_1.set(EventDate_14);
    EvntGrp_NoEvents_14.insert(EventDate_14.getString());
    FIX::EventPx EventPx_14;
    EventPx_14.setString("3472015");
    noEvents_0_1.set(EventPx_14);
    EvntGrp_NoEvents_14.insert(EventPx_14.getString());
    FIX::EventText EventText_14("STRING_2063355383");
    noEvents_0_1.set(EventText_14);
    EvntGrp_NoEvents_14.insert(EventText_14.getString());
    FIX::EventTime EventTime_14(FIX::UTCTIMESTAMP(4, 17, 14, 19, 4, 2013));
    noEvents_0_1.set(EventTime_14);
    EvntGrp_NoEvents_14.insert(EventTime_14.getString());
    FIX::EventType EventType_14(9);
    noEvents_0_1.set(EventType_14);
    EvntGrp_NoEvents_14.insert(EventType_14.getString());
    all_values.push_back(EvntGrp_NoEvents_14);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    FIX::InstrumentPartyID InstrumentPartyID_13("STRING_1356749695");
    noInstrumentParties_0_0.set(InstrumentPartyID_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyID_13.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_13('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyIDSource_13.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_13(34744918);
    noInstrumentParties_0_0.set(InstrumentPartyRole_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyRole_13.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      FIX::InstrumentPartySubID InstrumentPartySubID_29("STRING_1665085286");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubID_29.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_29(1572553705);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubIDType_29.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    FIX::InstrumentPartyID InstrumentPartyID_14("STRING_1327838060");
    noInstrumentParties_0_1.set(InstrumentPartyID_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyID_14.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_14('9');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyIDSource_14.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_14(522078206);
    noInstrumentParties_0_1.set(InstrumentPartyRole_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyRole_14.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      FIX::InstrumentPartySubID InstrumentPartySubID_30("STRING_829893001");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubID_30.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_30(1810135213);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubIDType_30.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      FIX::InstrumentPartySubID InstrumentPartySubID_31("STRING_1463787767");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubID_31.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_31(431287610);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubIDType_31.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    FIX::SecurityAltID SecurityAltID_13("STRING_1323082056");
    noSecurityAltID_0_0.set(SecurityAltID_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltID_13.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_13("STRING_1704346612");
    noSecurityAltID_0_0.set(SecurityAltIDSource_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltIDSource_13.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    FIX::SecurityAltID SecurityAltID_14("STRING_9844414");
    noSecurityAltID_0_1.set(SecurityAltID_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltID_14.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_14("STRING_490804169");
    noSecurityAltID_0_1.set(SecurityAltIDSource_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltIDSource_14.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    FIX::SecurityAltID SecurityAltID_15("STRING_33191771");
    noSecurityAltID_0_2.set(SecurityAltID_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltID_15.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_15("STRING_357046004");
    noSecurityAltID_0_2.set(SecurityAltIDSource_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltIDSource_15.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  FIX::SecurityXML SecurityXML_15("XMLDATA_406675904");
  msg.set(SecurityXML_15);
  FIX::SecurityXMLLen SecurityXMLLen_7(1755075942);
  msg.set(SecurityXMLLen_7);
  FIX::SecurityXMLSchema SecurityXMLSchema_7("STRING_749888113");
  msg.set(SecurityXMLSchema_7);
  SecurityXML_14.insert(SecurityXMLSchema_7.getString());
  all_values.push_back(SecurityXML_14);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    FIX::PartyID PartyID_20("STRING_664698168");
    noPartyIDs_0_0.set(PartyID_20);
    Parties_NoPartyIDs_20.insert(PartyID_20.getString());
    FIX::PartyIDSource PartyIDSource_20('4');
    noPartyIDs_0_0.set(PartyIDSource_20);
    Parties_NoPartyIDs_20.insert(PartyIDSource_20.getString());
    FIX::PartyRole PartyRole_20(78);
    noPartyIDs_0_0.set(PartyRole_20);
    Parties_NoPartyIDs_20.insert(PartyRole_20.getString());
    all_values.push_back(Parties_NoPartyIDs_20);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      FIX::PartySubID PartySubID_45("STRING_891642316");
      noPartySubIDs_0_1_0.set(PartySubID_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubID_45.getString());
      FIX::PartySubIDType PartySubIDType_45(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubIDType_45.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      FIX::PartySubID PartySubID_46("STRING_885221545");
      noPartySubIDs_0_1_1.set(PartySubID_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubID_46.getString());
      FIX::PartySubIDType PartySubIDType_46(28);
      noPartySubIDs_0_1_1.set(PartySubIDType_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubIDType_46.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      FIX::PartySubID PartySubID_47("STRING_1647677317");
      noPartySubIDs_0_1_2.set(PartySubID_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubID_47.getString());
      FIX::PartySubIDType PartySubIDType_47(11);
      noPartySubIDs_0_1_2.set(PartySubIDType_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubIDType_47.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    FIX::PartyID PartyID_21("STRING_1526607015");
    noPartyIDs_0_1.set(PartyID_21);
    Parties_NoPartyIDs_21.insert(PartyID_21.getString());
    FIX::PartyIDSource PartyIDSource_21('2');
    noPartyIDs_0_1.set(PartyIDSource_21);
    Parties_NoPartyIDs_21.insert(PartyIDSource_21.getString());
    FIX::PartyRole PartyRole_21(75);
    noPartyIDs_0_1.set(PartyRole_21);
    Parties_NoPartyIDs_21.insert(PartyRole_21.getString());
    all_values.push_back(Parties_NoPartyIDs_21);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      FIX::PartySubID PartySubID_48("STRING_1594825580");
      noPartySubIDs_1_1_0.set(PartySubID_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubID_48.getString());
      FIX::PartySubIDType PartySubIDType_48(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubIDType_48.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      FIX::PartySubID PartySubID_49("STRING_1143890658");
      noPartySubIDs_1_1_1.set(PartySubID_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubID_49.getString());
      FIX::PartySubIDType PartySubIDType_49(3);
      noPartySubIDs_1_1_1.set(PartySubIDType_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubIDType_49.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      FIX::PartySubID PartySubID_50("STRING_1378848075");
      noPartySubIDs_1_1_2.set(PartySubID_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubID_50.getString());
      FIX::PartySubIDType PartySubIDType_50(27);
      noPartySubIDs_1_1_2.set(PartySubIDType_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubIDType_50.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_5;
  FIX::SettlDeliveryType SettlDeliveryType_5(1);
  msg.set(SettlDeliveryType_5);
  SettlInstructionsData_5.insert(SettlDeliveryType_5.getString());
  FIX::StandInstDbID StandInstDbID_5("STRING_554446483");
  msg.set(StandInstDbID_5);
  SettlInstructionsData_5.insert(StandInstDbID_5.getString());
  FIX::StandInstDbName StandInstDbName_5("STRING_1132041233");
  msg.set(StandInstDbName_5);
  SettlInstructionsData_5.insert(StandInstDbName_5.getString());
  FIX::StandInstDbType StandInstDbType_5(1);
  msg.set(StandInstDbType_5);
  SettlInstructionsData_5.insert(StandInstDbType_5.getString());
  all_values.push_back(SettlInstructionsData_5);
  all_compo_names.insert("SettlInstructionsData");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_9;
    FIX::DlvyInstType DlvyInstType_9('C');
    noDlvyInst_0_0.set(DlvyInstType_9);
    DlvyInstGrp_NoDlvyInst_9.insert(DlvyInstType_9.getString());
    FIX::SettlInstSource SettlInstSource_9('1');
    noDlvyInst_0_0.set(SettlInstSource_9);
    DlvyInstGrp_NoDlvyInst_9.insert(SettlInstSource_9.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_9);
    all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_15;
      FIX::SettlPartyID SettlPartyID_15("STRING_772825298");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyID_15.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_15('9');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyIDSource_15.getString());
      FIX::SettlPartyRole SettlPartyRole_15(269728849);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyRole_15.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_15);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
        FIX::SettlPartySubID SettlPartySubID_28("STRING_950022874");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_28);
        SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubID_28.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_28(1407126054);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_28);
        SettlPtysSubGrp_NoSettlPartySubIDs_28.insert(SettlPartySubIDType_28.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_16;
      FIX::SettlPartyID SettlPartyID_16("STRING_965995317");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyID_16.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_16('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyIDSource_16.getString());
      FIX::SettlPartyRole SettlPartyRole_16(872574804);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyRole_16.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_16);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
        FIX::SettlPartySubID SettlPartySubID_29("STRING_1703186919");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_29);
        SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubID_29.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_29(372768473);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_29);
        SettlPtysSubGrp_NoSettlPartySubIDs_29.insert(SettlPartySubIDType_29.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
        FIX::SettlPartySubID SettlPartySubID_30("STRING_1024793020");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_30);
        SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubID_30.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_30(1082310286);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_30);
        SettlPtysSubGrp_NoSettlPartySubIDs_30.insert(SettlPartySubIDType_30.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_17;
      FIX::SettlPartyID SettlPartyID_17("STRING_1445515847");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyID_17.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_17('1');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyIDSource_17.getString());
      FIX::SettlPartyRole SettlPartyRole_17(1396307943);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyRole_17.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_17);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
        FIX::SettlPartySubID SettlPartySubID_31("STRING_1441267545");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_31);
        SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubID_31.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_31(392714954);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_31);
        SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubIDType_31.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_4("JPY");
  msg.set(BenchmarkCurveCurrency_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveCurrency_4.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_4("STRING_SWAP");
  msg.set(BenchmarkCurveName_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveName_4.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_4("STRING_1980478759");
  msg.set(BenchmarkCurvePoint_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurvePoint_4.getString());
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("12270784");
  msg.set(BenchmarkPrice_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPrice_4.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_4(952450807);
  msg.set(BenchmarkPriceType_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPriceType_4.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_4("STRING_1820467007");
  msg.set(BenchmarkSecurityID_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityID_4.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_4("STRING_124845460");
  msg.set(BenchmarkSecurityIDSource_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityIDSource_4.getString());
  FIX::Spread Spread_4;
  Spread_4.setString("21176838");
  msg.set(Spread_4);
  SpreadOrBenchmarkCurveData_4.insert(Spread_4.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_4);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    FIX::StipulationType StipulationType_8("STRING_MAT");
    noStipulations_0_0.set(StipulationType_8);
    Stipulations_NoStipulations_8.insert(StipulationType_8.getString());
    FIX::StipulationValue StipulationValue_8("STRING_743025462");
    noStipulations_0_0.set(StipulationValue_8);
    Stipulations_NoStipulations_8.insert(StipulationValue_8.getString());
    all_values.push_back(Stipulations_NoStipulations_8);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_3("STRING_1846500866");
    noTrades_0_0.set(SecondaryTradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(SecondaryTradeReportID_3.getString());
    FIX::TradeReportID TradeReportID_3("STRING_33065281");
    noTrades_0_0.set(TradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(TradeReportID_3.getString());
    all_values.push_back(TrdCollGrp_NoTrades_3);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_4("STRING_1766962851");
    noTrades_0_1.set(SecondaryTradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(SecondaryTradeReportID_4.getString());
    FIX::TradeReportID TradeReportID_4("STRING_1106143272");
    noTrades_0_1.set(TradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(TradeReportID_4.getString());
    all_values.push_back(TrdCollGrp_NoTrades_4);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_5("STRING_999060598");
    noTrades_0_2.set(SecondaryTradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(SecondaryTradeReportID_5.getString());
    FIX::TradeReportID TradeReportID_5("STRING_1461144394");
    noTrades_0_2.set(TradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(TradeReportID_5.getString());
    all_values.push_back(TrdCollGrp_NoTrades_5);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_3("MULTIPLESTRINGVALUE_MOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskOrderHandlingInst_3.getString());
    FIX::DeskType DeskType_3("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskType_3.getString());
    FIX::DeskTypeSource DeskTypeSource_3(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskTypeSource_3.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_3(FIX::UTCTIMESTAMP(16, 9, 2, 3, 2, 2003));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestamp_3.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_3("STRING_1740697201");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampOrigin_3.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_3(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampType_3.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_12;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_12("DATA_1561106776");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuer_12.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_12(230739271);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuerLen_12.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_12("DATA_152321099");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDesc_12.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_12(366073935);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDescLen_12.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("20512062");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_12);
    UnderlyingInstrument_12.insert(UnderlyingAdjustedQuantity_12.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("65.590000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_12);
    UnderlyingInstrument_12.insert(UnderlyingAllocationPercent_12.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("40.990000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingAttachmentPoint_12.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_12("STRING_1921223890");
    noUnderlyings_0_0.set(UnderlyingCFICode_12);
    UnderlyingInstrument_12.insert(UnderlyingCFICode_12.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_12("STRING_1853938575");
    noUnderlyings_0_0.set(UnderlyingCPProgram_12);
    UnderlyingInstrument_12.insert(UnderlyingCPProgram_12.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_12("STRING_1079299562");
    noUnderlyings_0_0.set(UnderlyingCPRegType_12);
    UnderlyingInstrument_12.insert(UnderlyingCPRegType_12.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("5906802");
    noUnderlyings_0_0.set(UnderlyingCapValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCapValue_12.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("15529557");
    noUnderlyings_0_0.set(UnderlyingCashAmount_12);
    UnderlyingInstrument_12.insert(UnderlyingCashAmount_12.getString());
    FIX::UnderlyingCashType UnderlyingCashType_12("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_12);
    UnderlyingInstrument_12.insert(UnderlyingCashType_12.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("2101594");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplier_12.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_12(511615417);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplierUnit_12.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_12("COUNTRY_2111425442");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingCountryOfIssue_12.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_12("LOCALMKTDATE_1671303817");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponPaymentDate_12.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("98.460000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponRate_12.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_12("STRING_666735607");
    noUnderlyings_0_0.set(UnderlyingCreditRating_12);
    UnderlyingInstrument_12.insert(UnderlyingCreditRating_12.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_12("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrency_12.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("2468387");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrentValue_12.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("21.390000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingDetachmentPoint_12.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("488878");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingDirtyPrice_12.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("13531492");
    noUnderlyings_0_0.set(UnderlyingEndPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingEndPrice_12.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("18403243");
    noUnderlyings_0_0.set(UnderlyingEndValue_12);
    UnderlyingInstrument_12.insert(UnderlyingEndValue_12.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_12(443780731);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_12);
    UnderlyingInstrument_12.insert(UnderlyingExerciseStyle_12.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("17532435");
    noUnderlyings_0_0.set(UnderlyingFXRate_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRate_12.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_12('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRateCalc_12.getString());
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("8415248");
    noUnderlyings_0_0.set(UnderlyingFactor_12);
    UnderlyingInstrument_12.insert(UnderlyingFactor_12.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_12(678486177);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_12);
    UnderlyingInstrument_12.insert(UnderlyingFlowScheduleType_12.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_12("STRING_847161068");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_12);
    UnderlyingInstrument_12.insert(UnderlyingInstrRegistry_12.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_12("LOCALMKTDATE_1072264161");
    noUnderlyings_0_0.set(UnderlyingIssueDate_12);
    UnderlyingInstrument_12.insert(UnderlyingIssueDate_12.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_12("STRING_830807276");
    noUnderlyings_0_0.set(UnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(UnderlyingIssuer_12.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_12("STRING_1213235003");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingLocaleOfIssue_12.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_12("LOCALMKTDATE_975986792");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityDate_12.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_12("MONTHYEAR_1107973835");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityMonthYear_12.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_12("TZTIMEONLY_1549509103");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityTime_12.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("70.340000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_12('8');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_12);
    UnderlyingInstrument_12.insert(UnderlyingOptAttribute_12.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("50.170000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingOriginalNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_12("STRING_1340407254");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasure_12.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("2199009");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasureQty_12.getString());
    FIX::UnderlyingProduct UnderlyingProduct_12(1593689860);
    noUnderlyings_0_0.set(UnderlyingProduct_12);
    UnderlyingInstrument_12.insert(UnderlyingProduct_12.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_12(1550566678);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_12);
    UnderlyingInstrument_12.insert(UnderlyingPutOrCall_12.getString());
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("7315163");
    noUnderlyings_0_0.set(UnderlyingPx_12);
    UnderlyingInstrument_12.insert(UnderlyingPx_12.getString());
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("15576316");
    noUnderlyings_0_0.set(UnderlyingQty_12);
    UnderlyingInstrument_12.insert(UnderlyingQty_12.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_12("LOCALMKTDATE_1074386847");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_12);
    UnderlyingInstrument_12.insert(UnderlyingRedemptionDate_12.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_12("STRING_1074366172");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingRepoCollateralSecurityType_12.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("36.130000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseRate_12.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_12(1615054682);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseTerm_12.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_12("STRING_1621218920");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_12);
    UnderlyingInstrument_12.insert(UnderlyingRestructuringType_12.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_12("STRING_323722405");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityDesc_12.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_12("EXCHANGE_2107396821");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityExchange_12.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_12("STRING_1670106769");
    noUnderlyings_0_0.set(UnderlyingSecurityID_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityID_12.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_12("STRING_1676871620");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityIDSource_12.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_12("STRING_1800237560");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecuritySubType_12.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_12("STRING_2113887500");
    noUnderlyings_0_0.set(UnderlyingSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityType_12.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_12("STRING_1282631506");
    noUnderlyings_0_0.set(UnderlyingSeniority_12);
    UnderlyingInstrument_12.insert(UnderlyingSeniority_12.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_12("STRING_1086291852");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlMethod_12.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_12(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlementType_12.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("19611176");
    noUnderlyings_0_0.set(UnderlyingStartValue_12);
    UnderlyingInstrument_12.insert(UnderlyingStartValue_12.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_12("STRING_1933452920");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingStateOrProvinceOfIssue_12.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_12("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikeCurrency_12.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("9992042");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikePrice_12.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_12("STRING_708696048");
    noUnderlyings_0_0.set(UnderlyingSymbol_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbol_12.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_12("STRING_1752415147");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbolSfx_12.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_12("STRING_401229730");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingTimeUnit_12.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_12("STRING_1458423083");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasure_12.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("4193602");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasureQty_12.getString());
    all_values.push_back(UnderlyingInstrument_12);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_28("STRING_651346689");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltID_28.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_28("STRING_639261171");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltIDSource_28.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_29("STRING_328760960");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltID_29.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_29("STRING_54429719");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltIDSource_29.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_30("STRING_1370777497");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltID_30.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_30("STRING_1886392614");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltIDSource_30.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      FIX::UnderlyingStipType UnderlyingStipType_17("STRING_297660021");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipType_17.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_17("STRING_1963276228");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipValue_17.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_24("STRING_1918878941");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyID_24.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_24('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyIDSource_24.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_24(556300775);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyRole_24.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_44("STRING_1816386605");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubID_44.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_44(209054687);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubIDType_44.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_45("STRING_1407905915");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubID_45.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_45(951534463);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubIDType_45.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_13;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_13("DATA_1295346539");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuer_13.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_13(68351010);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuerLen_13.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_13("DATA_765168499");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDesc_13.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_13(1081315811);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDescLen_13.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("19485439");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_13);
    UnderlyingInstrument_13.insert(UnderlyingAdjustedQuantity_13.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("98.110000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_13);
    UnderlyingInstrument_13.insert(UnderlyingAllocationPercent_13.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("0.860000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingAttachmentPoint_13.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_13("STRING_509756315");
    noUnderlyings_0_1.set(UnderlyingCFICode_13);
    UnderlyingInstrument_13.insert(UnderlyingCFICode_13.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_13("STRING_1014541310");
    noUnderlyings_0_1.set(UnderlyingCPProgram_13);
    UnderlyingInstrument_13.insert(UnderlyingCPProgram_13.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_13("STRING_334266169");
    noUnderlyings_0_1.set(UnderlyingCPRegType_13);
    UnderlyingInstrument_13.insert(UnderlyingCPRegType_13.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("19681793");
    noUnderlyings_0_1.set(UnderlyingCapValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCapValue_13.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("14339015");
    noUnderlyings_0_1.set(UnderlyingCashAmount_13);
    UnderlyingInstrument_13.insert(UnderlyingCashAmount_13.getString());
    FIX::UnderlyingCashType UnderlyingCashType_13("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_13);
    UnderlyingInstrument_13.insert(UnderlyingCashType_13.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("4720424");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplier_13.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_13(2073162744);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplierUnit_13.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_13("COUNTRY_1545581876");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingCountryOfIssue_13.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_13("LOCALMKTDATE_526472159");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponPaymentDate_13.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("65.930000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponRate_13.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_13("STRING_1284490843");
    noUnderlyings_0_1.set(UnderlyingCreditRating_13);
    UnderlyingInstrument_13.insert(UnderlyingCreditRating_13.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_13("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrency_13.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("11002834");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrentValue_13.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("26.790000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingDetachmentPoint_13.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("13655119");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingDirtyPrice_13.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("12397984");
    noUnderlyings_0_1.set(UnderlyingEndPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingEndPrice_13.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("6604934");
    noUnderlyings_0_1.set(UnderlyingEndValue_13);
    UnderlyingInstrument_13.insert(UnderlyingEndValue_13.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_13(659530321);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_13);
    UnderlyingInstrument_13.insert(UnderlyingExerciseStyle_13.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("9087013");
    noUnderlyings_0_1.set(UnderlyingFXRate_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRate_13.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_13('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRateCalc_13.getString());
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("20674362");
    noUnderlyings_0_1.set(UnderlyingFactor_13);
    UnderlyingInstrument_13.insert(UnderlyingFactor_13.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_13(1860235829);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_13);
    UnderlyingInstrument_13.insert(UnderlyingFlowScheduleType_13.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_13("STRING_17411032");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_13);
    UnderlyingInstrument_13.insert(UnderlyingInstrRegistry_13.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_13("LOCALMKTDATE_2135787246");
    noUnderlyings_0_1.set(UnderlyingIssueDate_13);
    UnderlyingInstrument_13.insert(UnderlyingIssueDate_13.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_13("STRING_477920680");
    noUnderlyings_0_1.set(UnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(UnderlyingIssuer_13.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_13("STRING_1098726843");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingLocaleOfIssue_13.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_13("LOCALMKTDATE_1936847513");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityDate_13.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_13("MONTHYEAR_1887530491");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityMonthYear_13.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_13("TZTIMEONLY_1031763282");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityTime_13.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("1.800000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_13('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_13);
    UnderlyingInstrument_13.insert(UnderlyingOptAttribute_13.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("94.510000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingOriginalNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_13("STRING_119815930");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasure_13.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("410060");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasureQty_13.getString());
    FIX::UnderlyingProduct UnderlyingProduct_13(435366719);
    noUnderlyings_0_1.set(UnderlyingProduct_13);
    UnderlyingInstrument_13.insert(UnderlyingProduct_13.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_13(591858369);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_13);
    UnderlyingInstrument_13.insert(UnderlyingPutOrCall_13.getString());
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("21141688");
    noUnderlyings_0_1.set(UnderlyingPx_13);
    UnderlyingInstrument_13.insert(UnderlyingPx_13.getString());
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("19809485");
    noUnderlyings_0_1.set(UnderlyingQty_13);
    UnderlyingInstrument_13.insert(UnderlyingQty_13.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_13("LOCALMKTDATE_1118330528");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_13);
    UnderlyingInstrument_13.insert(UnderlyingRedemptionDate_13.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_13("STRING_1263141768");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingRepoCollateralSecurityType_13.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("57.910000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseRate_13.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_13(626135606);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseTerm_13.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_13("STRING_709774734");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_13);
    UnderlyingInstrument_13.insert(UnderlyingRestructuringType_13.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_13("STRING_70755566");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityDesc_13.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_13("EXCHANGE_730328286");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityExchange_13.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_13("STRING_2075286641");
    noUnderlyings_0_1.set(UnderlyingSecurityID_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityID_13.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_13("STRING_1310553974");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityIDSource_13.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_13("STRING_1390821740");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecuritySubType_13.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_13("STRING_587333314");
    noUnderlyings_0_1.set(UnderlyingSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityType_13.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_13("STRING_71771692");
    noUnderlyings_0_1.set(UnderlyingSeniority_13);
    UnderlyingInstrument_13.insert(UnderlyingSeniority_13.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_13("STRING_112886234");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlMethod_13.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_13(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlementType_13.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("19320075");
    noUnderlyings_0_1.set(UnderlyingStartValue_13);
    UnderlyingInstrument_13.insert(UnderlyingStartValue_13.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_13("STRING_130297266");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingStateOrProvinceOfIssue_13.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_13("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikeCurrency_13.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("12290241");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikePrice_13.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_13("STRING_284953366");
    noUnderlyings_0_1.set(UnderlyingSymbol_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbol_13.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_13("STRING_2491398");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbolSfx_13.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_13("STRING_113303744");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingTimeUnit_13.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_13("STRING_584073546");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasure_13.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("7570795");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasureQty_13.getString());
    all_values.push_back(UnderlyingInstrument_13);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_31("STRING_703889476");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltID_31.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_31("STRING_798085631");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltIDSource_31.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      FIX::UnderlyingStipType UnderlyingStipType_18("STRING_1295747846");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipType_18.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_18("STRING_764770806");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipValue_18.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      FIX::UnderlyingStipType UnderlyingStipType_19("STRING_1748164862");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipType_19.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_19("STRING_266594726");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipValue_19.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      FIX::UnderlyingStipType UnderlyingStipType_20("STRING_2027912574");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipType_20.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_20("STRING_718637005");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipValue_20.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_25("STRING_590203660");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyID_25.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_25('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyIDSource_25.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_25(1623058619);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyRole_25.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_46("STRING_2099946546");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubID_46.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_46(866396711);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubIDType_46.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_47("STRING_1105339967");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubID_47.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_47(24234590);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubIDType_47.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_26("STRING_979282945");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyID_26.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_26('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyIDSource_26.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_26(1956242112);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyRole_26.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_48("STRING_2108215372");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubID_48.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_48(71203019);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubIDType_48.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_49("STRING_191120674");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubID_49.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_49(245685090);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubIDType_49.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_50("STRING_73694417");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubID_50.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_50(304424418);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubIDType_50.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_27("STRING_829758637");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyID_27.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_27('8');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyIDSource_27.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_27(1783757613);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyRole_27.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_51("STRING_1628859600");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubID_51.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_51(1550973879);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubIDType_51.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_52("STRING_681912311");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubID_52.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_52(246146758);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubIDType_52.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_53("STRING_1151655094");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubID_53.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_53(948507038);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubIDType_53.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
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
