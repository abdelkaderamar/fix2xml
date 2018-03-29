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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralInquiryAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_0;
  FIX::Account Account_6("STRING_126575684");
  msg.set(Account_6);
  CollateralInquiryAck_0.insert(Account_6.getString());
  FIX::AccountType AccountType_3(6);
  msg.set(AccountType_3);
  CollateralInquiryAck_0.insert(AccountType_3.getString());
  FIX::ClOrdID ClOrdID_8("STRING_1841237371");
  msg.set(ClOrdID_8);
  CollateralInquiryAck_0.insert(ClOrdID_8.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_8("LOCALMKTDATE_716779344");
  msg.set(ClearingBusinessDate_8);
  CollateralInquiryAck_0.insert(ClearingBusinessDate_8.getString());
  FIX::CollInquiryID CollInquiryID_1("STRING_512201023");
  msg.set(CollInquiryID_1);
  CollateralInquiryAck_0.insert(CollInquiryID_1.getString());
  FIX::CollInquiryResult CollInquiryResult_0(99);
  msg.set(CollInquiryResult_0);
  CollateralInquiryAck_0.insert(CollInquiryResult_0.getString());
  FIX::CollInquiryStatus CollInquiryStatus_0(2);
  msg.set(CollInquiryStatus_0);
  CollateralInquiryAck_0.insert(CollInquiryStatus_0.getString());
  FIX::Currency Currency_8("EUR");
  msg.set(Currency_8);
  CollateralInquiryAck_0.insert(Currency_8.getString());
  FIX::EncodedText EncodedText_17("DATA_192642316");
  msg.set(EncodedText_17);
  CollateralInquiryAck_0.insert(EncodedText_17.getString());
  FIX::EncodedTextLen EncodedTextLen_17(488898511);
  msg.set(EncodedTextLen_17);
  CollateralInquiryAck_0.insert(EncodedTextLen_17.getString());
  FIX::OrderID OrderID_8("STRING_1015008351");
  msg.set(OrderID_8);
  CollateralInquiryAck_0.insert(OrderID_8.getString());
  FIX::QtyType QtyType_6(1);
  msg.set(QtyType_6);
  CollateralInquiryAck_0.insert(QtyType_6.getString());
  FIX::Quantity Quantity_7;
  Quantity_7.setString("2976569");
  msg.set(Quantity_7);
  CollateralInquiryAck_0.insert(Quantity_7.getString());
  FIX::ResponseDestination ResponseDestination_1("STRING_2124588563");
  msg.set(ResponseDestination_1);
  CollateralInquiryAck_0.insert(ResponseDestination_1.getString());
  FIX::ResponseTransportType ResponseTransportType_1(1);
  msg.set(ResponseTransportType_1);
  CollateralInquiryAck_0.insert(ResponseTransportType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_8("STRING_368859995");
  msg.set(SecondaryClOrdID_8);
  CollateralInquiryAck_0.insert(SecondaryClOrdID_8.getString());
  FIX::SecondaryOrderID SecondaryOrderID_8("STRING_168225589");
  msg.set(SecondaryOrderID_8);
  CollateralInquiryAck_0.insert(SecondaryOrderID_8.getString());
  FIX::SettlDate SettlDate_11("LOCALMKTDATE_2011685001");
  msg.set(SettlDate_11);
  CollateralInquiryAck_0.insert(SettlDate_11.getString());
  FIX::SettlSessID SettlSessID_4("STRING_ITD");
  msg.set(SettlSessID_4);
  CollateralInquiryAck_0.insert(SettlSessID_4.getString());
  FIX::SettlSessSubID SettlSessSubID_3("STRING_472650007");
  msg.set(SettlSessSubID_3);
  CollateralInquiryAck_0.insert(SettlSessSubID_3.getString());
  FIX::Text Text_17("STRING_693959990");
  msg.set(Text_17);
  CollateralInquiryAck_0.insert(Text_17.getString());
  FIX::TotNumReports TotNumReports_0(1273328381);
  msg.set(TotNumReports_0);
  CollateralInquiryAck_0.insert(TotNumReports_0.getString());
  FIX::TradingSessionID TradingSessionID_12("STRING_3");
  msg.set(TradingSessionID_12);
  CollateralInquiryAck_0.insert(TradingSessionID_12.getString());
  FIX::TradingSessionSubID TradingSessionSubID_12("STRING_7");
  msg.set(TradingSessionSubID_12);
  CollateralInquiryAck_0.insert(TradingSessionSubID_12.getString());
  all_values.push_back(CollateralInquiryAck_0);

  all_compo_names.insert("CollateralInquiryAck");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_3;
    FIX::CollInquiryQualifier CollInquiryQualifier_3(3);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_3);
    CollInqQualGrp_NoCollInquiryQualifier_3.insert(CollInquiryQualifier_3.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_3);
    all_compo_names.insert("CollInqQualGrp.NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    FIX::ExecID ExecID_11("STRING_1000851091");
    noExecs_0_0.set(ExecID_11);
    ExecCollGrp_NoExecs_5.insert(ExecID_11.getString());
    all_values.push_back(ExecCollGrp_NoExecs_5);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    FIX::ExecID ExecID_12("STRING_664069297");
    noExecs_0_1.set(ExecID_12);
    ExecCollGrp_NoExecs_6.insert(ExecID_12.getString());
    all_values.push_back(ExecCollGrp_NoExecs_6);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    FIX::ExecID ExecID_13("STRING_1710543805");
    noExecs_0_2.set(ExecID_13);
    ExecCollGrp_NoExecs_7.insert(ExecID_13.getString());
    all_values.push_back(ExecCollGrp_NoExecs_7);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  FIX::AgreementCurrency AgreementCurrency_5("CAN");
  msg.set(AgreementCurrency_5);
  FinancingDetails_5.insert(AgreementCurrency_5.getString());
  FIX::AgreementDate AgreementDate_5("LOCALMKTDATE_1404297528");
  msg.set(AgreementDate_5);
  FinancingDetails_5.insert(AgreementDate_5.getString());
  FIX::AgreementDesc AgreementDesc_5("STRING_1844206119");
  msg.set(AgreementDesc_5);
  FinancingDetails_5.insert(AgreementDesc_5.getString());
  FIX::AgreementID AgreementID_5("STRING_899078772");
  msg.set(AgreementID_5);
  FinancingDetails_5.insert(AgreementID_5.getString());
  FIX::DeliveryType DeliveryType_5(2);
  msg.set(DeliveryType_5);
  FinancingDetails_5.insert(DeliveryType_5.getString());
  FIX::EndDate EndDate_5("LOCALMKTDATE_931508468");
  msg.set(EndDate_5);
  FinancingDetails_5.insert(EndDate_5.getString());
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("26.930000");
  msg.set(MarginRatio_5);
  FinancingDetails_5.insert(MarginRatio_5.getString());
  FIX::StartDate StartDate_5("LOCALMKTDATE_609351628");
  msg.set(StartDate_5);
  FinancingDetails_5.insert(StartDate_5.getString());
  FIX::TerminationType TerminationType_5(1);
  msg.set(TerminationType_5);
  FinancingDetails_5.insert(TerminationType_5.getString());
  all_values.push_back(FinancingDetails_5);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    FIX::EncodedLegIssuer EncodedLegIssuer_17("DATA_1624359979");
    noLegs_0_0.set(EncodedLegIssuer_17);
    InstrumentLeg_17.insert(EncodedLegIssuer_17.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_17(781935323);
    noLegs_0_0.set(EncodedLegIssuerLen_17);
    InstrumentLeg_17.insert(EncodedLegIssuerLen_17.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_17("DATA_2814532");
    noLegs_0_0.set(EncodedLegSecurityDesc_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDesc_17.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_17(1601464894);
    noLegs_0_0.set(EncodedLegSecurityDescLen_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDescLen_17.getString());
    FIX::LegCFICode LegCFICode_17("STRING_400451586");
    noLegs_0_0.set(LegCFICode_17);
    InstrumentLeg_17.insert(LegCFICode_17.getString());
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("3716745");
    noLegs_0_0.set(LegContractMultiplier_17);
    InstrumentLeg_17.insert(LegContractMultiplier_17.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_17(1769690483);
    noLegs_0_0.set(LegContractMultiplierUnit_17);
    InstrumentLeg_17.insert(LegContractMultiplierUnit_17.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_17("MONTHYEAR_264652940");
    noLegs_0_0.set(LegContractSettlMonth_17);
    InstrumentLeg_17.insert(LegContractSettlMonth_17.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_17("COUNTRY_814228939");
    noLegs_0_0.set(LegCountryOfIssue_17);
    InstrumentLeg_17.insert(LegCountryOfIssue_17.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_17("LOCALMKTDATE_94856842");
    noLegs_0_0.set(LegCouponPaymentDate_17);
    InstrumentLeg_17.insert(LegCouponPaymentDate_17.getString());
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("29.300000");
    noLegs_0_0.set(LegCouponRate_17);
    InstrumentLeg_17.insert(LegCouponRate_17.getString());
    FIX::LegCreditRating LegCreditRating_17("STRING_2087557320");
    noLegs_0_0.set(LegCreditRating_17);
    InstrumentLeg_17.insert(LegCreditRating_17.getString());
    FIX::LegCurrency LegCurrency_17("JPY");
    noLegs_0_0.set(LegCurrency_17);
    InstrumentLeg_17.insert(LegCurrency_17.getString());
    FIX::LegDatedDate LegDatedDate_17("LOCALMKTDATE_694778005");
    noLegs_0_0.set(LegDatedDate_17);
    InstrumentLeg_17.insert(LegDatedDate_17.getString());
    FIX::LegExerciseStyle LegExerciseStyle_17(1863678665);
    noLegs_0_0.set(LegExerciseStyle_17);
    InstrumentLeg_17.insert(LegExerciseStyle_17.getString());
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("18007741");
    noLegs_0_0.set(LegFactor_17);
    InstrumentLeg_17.insert(LegFactor_17.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_17(1695629096);
    noLegs_0_0.set(LegFlowScheduleType_17);
    InstrumentLeg_17.insert(LegFlowScheduleType_17.getString());
    FIX::LegInstrRegistry LegInstrRegistry_17("STRING_380264315");
    noLegs_0_0.set(LegInstrRegistry_17);
    InstrumentLeg_17.insert(LegInstrRegistry_17.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_17("LOCALMKTDATE_1363834311");
    noLegs_0_0.set(LegInterestAccrualDate_17);
    InstrumentLeg_17.insert(LegInterestAccrualDate_17.getString());
    FIX::LegIssueDate LegIssueDate_17("LOCALMKTDATE_675572223");
    noLegs_0_0.set(LegIssueDate_17);
    InstrumentLeg_17.insert(LegIssueDate_17.getString());
    FIX::LegIssuer LegIssuer_17("STRING_767142064");
    noLegs_0_0.set(LegIssuer_17);
    InstrumentLeg_17.insert(LegIssuer_17.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_17("STRING_620648192");
    noLegs_0_0.set(LegLocaleOfIssue_17);
    InstrumentLeg_17.insert(LegLocaleOfIssue_17.getString());
    FIX::LegMaturityDate LegMaturityDate_17("LOCALMKTDATE_372294694");
    noLegs_0_0.set(LegMaturityDate_17);
    InstrumentLeg_17.insert(LegMaturityDate_17.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_17("MONTHYEAR_1666220836");
    noLegs_0_0.set(LegMaturityMonthYear_17);
    InstrumentLeg_17.insert(LegMaturityMonthYear_17.getString());
    FIX::LegMaturityTime LegMaturityTime_17("TZTIMEONLY_1194274414");
    noLegs_0_0.set(LegMaturityTime_17);
    InstrumentLeg_17.insert(LegMaturityTime_17.getString());
    FIX::LegOptAttribute LegOptAttribute_17('1');
    noLegs_0_0.set(LegOptAttribute_17);
    InstrumentLeg_17.insert(LegOptAttribute_17.getString());
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("8824798");
    noLegs_0_0.set(LegOptionRatio_17);
    InstrumentLeg_17.insert(LegOptionRatio_17.getString());
    FIX::LegPool LegPool_17("STRING_1803626042");
    noLegs_0_0.set(LegPool_17);
    InstrumentLeg_17.insert(LegPool_17.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_17("STRING_280470299");
    noLegs_0_0.set(LegPriceUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasure_17.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("5876374");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasureQty_17.getString());
    FIX::LegProduct LegProduct_17(1280502373);
    noLegs_0_0.set(LegProduct_17);
    InstrumentLeg_17.insert(LegProduct_17.getString());
    FIX::LegPutOrCall LegPutOrCall_17(1062405622);
    noLegs_0_0.set(LegPutOrCall_17);
    InstrumentLeg_17.insert(LegPutOrCall_17.getString());
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("5904519");
    noLegs_0_0.set(LegRatioQty_17);
    InstrumentLeg_17.insert(LegRatioQty_17.getString());
    FIX::LegRedemptionDate LegRedemptionDate_17("LOCALMKTDATE_734483619");
    noLegs_0_0.set(LegRedemptionDate_17);
    InstrumentLeg_17.insert(LegRedemptionDate_17.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_17("STRING_1462857209");
    noLegs_0_0.set(LegRepoCollateralSecurityType_17);
    InstrumentLeg_17.insert(LegRepoCollateralSecurityType_17.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("64.970000");
    noLegs_0_0.set(LegRepurchaseRate_17);
    InstrumentLeg_17.insert(LegRepurchaseRate_17.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_17(356690454);
    noLegs_0_0.set(LegRepurchaseTerm_17);
    InstrumentLeg_17.insert(LegRepurchaseTerm_17.getString());
    FIX::LegSecurityDesc LegSecurityDesc_17("STRING_1727510149");
    noLegs_0_0.set(LegSecurityDesc_17);
    InstrumentLeg_17.insert(LegSecurityDesc_17.getString());
    FIX::LegSecurityExchange LegSecurityExchange_17("EXCHANGE_1776355437");
    noLegs_0_0.set(LegSecurityExchange_17);
    InstrumentLeg_17.insert(LegSecurityExchange_17.getString());
    FIX::LegSecurityID LegSecurityID_17("STRING_451547296");
    noLegs_0_0.set(LegSecurityID_17);
    InstrumentLeg_17.insert(LegSecurityID_17.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_17("STRING_538639431");
    noLegs_0_0.set(LegSecurityIDSource_17);
    InstrumentLeg_17.insert(LegSecurityIDSource_17.getString());
    FIX::LegSecuritySubType LegSecuritySubType_17("STRING_1716429109");
    noLegs_0_0.set(LegSecuritySubType_17);
    InstrumentLeg_17.insert(LegSecuritySubType_17.getString());
    FIX::LegSecurityType LegSecurityType_17("STRING_655328110");
    noLegs_0_0.set(LegSecurityType_17);
    InstrumentLeg_17.insert(LegSecurityType_17.getString());
    FIX::LegSide LegSide_17('1');
    noLegs_0_0.set(LegSide_17);
    InstrumentLeg_17.insert(LegSide_17.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_17("STRING_263723467");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_17);
    InstrumentLeg_17.insert(LegStateOrProvinceOfIssue_17.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_17("JPY");
    noLegs_0_0.set(LegStrikeCurrency_17);
    InstrumentLeg_17.insert(LegStrikeCurrency_17.getString());
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("19593525");
    noLegs_0_0.set(LegStrikePrice_17);
    InstrumentLeg_17.insert(LegStrikePrice_17.getString());
    FIX::LegSymbol LegSymbol_17("STRING_751787443");
    noLegs_0_0.set(LegSymbol_17);
    InstrumentLeg_17.insert(LegSymbol_17.getString());
    FIX::LegSymbolSfx LegSymbolSfx_17("STRING_447017987");
    noLegs_0_0.set(LegSymbolSfx_17);
    InstrumentLeg_17.insert(LegSymbolSfx_17.getString());
    FIX::LegTimeUnit LegTimeUnit_17("STRING_487441139");
    noLegs_0_0.set(LegTimeUnit_17);
    InstrumentLeg_17.insert(LegTimeUnit_17.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_17("STRING_1518929507");
    noLegs_0_0.set(LegUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegUnitOfMeasure_17.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("10676661");
    noLegs_0_0.set(LegUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegUnitOfMeasureQty_17.getString());
    all_values.push_back(InstrumentLeg_17);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      FIX::LegSecurityAltID LegSecurityAltID_34("STRING_1037666695");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltID_34.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_34("STRING_114456946");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltIDSource_34.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("53.480000");
  msg.set(AttachmentPoint_8);
  Instrument_8.insert(AttachmentPoint_8.getString());
  FIX::CFICode CFICode_8("STRING_1920146576");
  msg.set(CFICode_8);
  Instrument_8.insert(CFICode_8.getString());
  FIX::CPProgram CPProgram_8(1);
  msg.set(CPProgram_8);
  Instrument_8.insert(CPProgram_8.getString());
  FIX::CPRegType CPRegType_8("STRING_296525647");
  msg.set(CPRegType_8);
  Instrument_8.insert(CPRegType_8.getString());
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("3603003");
  msg.set(CapPrice_8);
  Instrument_8.insert(CapPrice_8.getString());
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("10511017");
  msg.set(ContractMultiplier_8);
  Instrument_8.insert(ContractMultiplier_8.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_8(2);
  msg.set(ContractMultiplierUnit_8);
  Instrument_8.insert(ContractMultiplierUnit_8.getString());
  FIX::ContractSettlMonth ContractSettlMonth_8("MONTHYEAR_950752335");
  msg.set(ContractSettlMonth_8);
  Instrument_8.insert(ContractSettlMonth_8.getString());
  FIX::CountryOfIssue CountryOfIssue_8("COUNTRY_1785585333");
  msg.set(CountryOfIssue_8);
  Instrument_8.insert(CountryOfIssue_8.getString());
  FIX::CouponPaymentDate CouponPaymentDate_8("LOCALMKTDATE_674304830");
  msg.set(CouponPaymentDate_8);
  Instrument_8.insert(CouponPaymentDate_8.getString());
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("88.330000");
  msg.set(CouponRate_8);
  Instrument_8.insert(CouponRate_8.getString());
  FIX::CreditRating CreditRating_8("STRING_2142275788");
  msg.set(CreditRating_8);
  Instrument_8.insert(CreditRating_8.getString());
  FIX::DatedDate DatedDate_8("LOCALMKTDATE_254331331");
  msg.set(DatedDate_8);
  Instrument_8.insert(DatedDate_8.getString());
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("6.220000");
  msg.set(DetachmentPoint_8);
  Instrument_8.insert(DetachmentPoint_8.getString());
  FIX::EncodedIssuer EncodedIssuer_8("DATA_446339436");
  msg.set(EncodedIssuer_8);
  Instrument_8.insert(EncodedIssuer_8.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_8(792970763);
  msg.set(EncodedIssuerLen_8);
  Instrument_8.insert(EncodedIssuerLen_8.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_8("DATA_1110696083");
  msg.set(EncodedSecurityDesc_8);
  Instrument_8.insert(EncodedSecurityDesc_8.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_8(1101667547);
  msg.set(EncodedSecurityDescLen_8);
  Instrument_8.insert(EncodedSecurityDescLen_8.getString());
  FIX::ExerciseStyle ExerciseStyle_8(2);
  msg.set(ExerciseStyle_8);
  Instrument_8.insert(ExerciseStyle_8.getString());
  FIX::Factor Factor_8;
  Factor_8.setString("13744195");
  msg.set(Factor_8);
  Instrument_8.insert(Factor_8.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_8(false);
  msg.set(FlexProductEligibilityIndicator_8);
  Instrument_8.insert(FlexProductEligibilityIndicator_8.getString());
  FIX::FlexibleIndicator FlexibleIndicator_8(false);
  msg.set(FlexibleIndicator_8);
  Instrument_8.insert(FlexibleIndicator_8.getString());
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("11862884");
  msg.set(FloorPrice_8);
  Instrument_8.insert(FloorPrice_8.getString());
  FIX::FlowScheduleType FlowScheduleType_8(0);
  msg.set(FlowScheduleType_8);
  Instrument_8.insert(FlowScheduleType_8.getString());
  FIX::InstrRegistry InstrRegistry_8("STRING_1900549244");
  msg.set(InstrRegistry_8);
  Instrument_8.insert(InstrRegistry_8.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_8('1');
  msg.set(InstrmtAssignmentMethod_8);
  Instrument_8.insert(InstrmtAssignmentMethod_8.getString());
  FIX::InterestAccrualDate InterestAccrualDate_8("LOCALMKTDATE_1596423977");
  msg.set(InterestAccrualDate_8);
  Instrument_8.insert(InterestAccrualDate_8.getString());
  FIX::IssueDate IssueDate_8("LOCALMKTDATE_820731776");
  msg.set(IssueDate_8);
  Instrument_8.insert(IssueDate_8.getString());
  FIX::Issuer Issuer_8("STRING_385981790");
  msg.set(Issuer_8);
  Instrument_8.insert(Issuer_8.getString());
  FIX::ListMethod ListMethod_8(0);
  msg.set(ListMethod_8);
  Instrument_8.insert(ListMethod_8.getString());
  FIX::LocaleOfIssue LocaleOfIssue_8("STRING_935188722");
  msg.set(LocaleOfIssue_8);
  Instrument_8.insert(LocaleOfIssue_8.getString());
  FIX::MaturityDate MaturityDate_8("LOCALMKTDATE_402037138");
  msg.set(MaturityDate_8);
  Instrument_8.insert(MaturityDate_8.getString());
  FIX::MaturityMonthYear MaturityMonthYear_8("MONTHYEAR_259269952");
  msg.set(MaturityMonthYear_8);
  Instrument_8.insert(MaturityMonthYear_8.getString());
  FIX::MaturityTime MaturityTime_8("TZTIMEONLY_705788062");
  msg.set(MaturityTime_8);
  Instrument_8.insert(MaturityTime_8.getString());
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("6985627");
  msg.set(MinPriceIncrement_8);
  Instrument_8.insert(MinPriceIncrement_8.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("6195703");
  msg.set(MinPriceIncrementAmount_8);
  Instrument_8.insert(MinPriceIncrementAmount_8.getString());
  FIX::NTPositionLimit NTPositionLimit_8(1756889776);
  msg.set(NTPositionLimit_8);
  Instrument_8.insert(NTPositionLimit_8.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("40.550000");
  msg.set(NotionalPercentageOutstanding_8);
  Instrument_8.insert(NotionalPercentageOutstanding_8.getString());
  FIX::OptAttribute OptAttribute_8('1');
  msg.set(OptAttribute_8);
  Instrument_8.insert(OptAttribute_8.getString());
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("13949914");
  msg.set(OptPayoutAmount_8);
  Instrument_8.insert(OptPayoutAmount_8.getString());
  FIX::OptPayoutType OptPayoutType_8(3);
  msg.set(OptPayoutType_8);
  Instrument_8.insert(OptPayoutType_8.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("78.380000");
  msg.set(OriginalNotionalPercentageOutstanding_8);
  Instrument_8.insert(OriginalNotionalPercentageOutstanding_8.getString());
  FIX::Pool Pool_8("STRING_1389783602");
  msg.set(Pool_8);
  Instrument_8.insert(Pool_8.getString());
  FIX::PositionLimit PositionLimit_8(838646569);
  msg.set(PositionLimit_8);
  Instrument_8.insert(PositionLimit_8.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_8("STRING_STD");
  msg.set(PriceQuoteMethod_8);
  Instrument_8.insert(PriceQuoteMethod_8.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_8("STRING_1836123038");
  msg.set(PriceUnitOfMeasure_8);
  Instrument_8.insert(PriceUnitOfMeasure_8.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("16316173");
  msg.set(PriceUnitOfMeasureQty_8);
  Instrument_8.insert(PriceUnitOfMeasureQty_8.getString());
  FIX::Product Product_10(2);
  msg.set(Product_10);
  Instrument_8.insert(Product_10.getString());
  FIX::ProductComplex ProductComplex_8("STRING_790306937");
  msg.set(ProductComplex_8);
  Instrument_8.insert(ProductComplex_8.getString());
  FIX::PutOrCall PutOrCall_8(1);
  msg.set(PutOrCall_8);
  Instrument_8.insert(PutOrCall_8.getString());
  FIX::RedemptionDate RedemptionDate_8("LOCALMKTDATE_1067616798");
  msg.set(RedemptionDate_8);
  Instrument_8.insert(RedemptionDate_8.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_8("STRING_116013964");
  msg.set(RepoCollateralSecurityType_8);
  Instrument_8.insert(RepoCollateralSecurityType_8.getString());
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("88.740000");
  msg.set(RepurchaseRate_8);
  Instrument_8.insert(RepurchaseRate_8.getString());
  FIX::RepurchaseTerm RepurchaseTerm_8(106421616);
  msg.set(RepurchaseTerm_8);
  Instrument_8.insert(RepurchaseTerm_8.getString());
  FIX::RestructuringType RestructuringType_8("STRING_MM");
  msg.set(RestructuringType_8);
  Instrument_8.insert(RestructuringType_8.getString());
  FIX::SecurityDesc SecurityDesc_8("STRING_913594470");
  msg.set(SecurityDesc_8);
  Instrument_8.insert(SecurityDesc_8.getString());
  FIX::SecurityExchange SecurityExchange_8("EXCHANGE_1780151221");
  msg.set(SecurityExchange_8);
  Instrument_8.insert(SecurityExchange_8.getString());
  FIX::SecurityGroup SecurityGroup_8("STRING_1789932411");
  msg.set(SecurityGroup_8);
  Instrument_8.insert(SecurityGroup_8.getString());
  FIX::SecurityID SecurityID_8("STRING_1734326246");
  msg.set(SecurityID_8);
  Instrument_8.insert(SecurityID_8.getString());
  FIX::SecurityIDSource SecurityIDSource_8("STRING_8");
  msg.set(SecurityIDSource_8);
  Instrument_8.insert(SecurityIDSource_8.getString());
  FIX::SecurityStatus SecurityStatus_8("STRING_2");
  msg.set(SecurityStatus_8);
  Instrument_8.insert(SecurityStatus_8.getString());
  FIX::SecuritySubType SecuritySubType_8("STRING_522031320");
  msg.set(SecuritySubType_8);
  Instrument_8.insert(SecuritySubType_8.getString());
  FIX::SecurityType SecurityType_10("STRING_SPCLO");
  msg.set(SecurityType_10);
  Instrument_8.insert(SecurityType_10.getString());
  FIX::Seniority Seniority_8("STRING_SD");
  msg.set(Seniority_8);
  Instrument_8.insert(Seniority_8.getString());
  FIX::SettlMethod SettlMethod_8('P');
  msg.set(SettlMethod_8);
  Instrument_8.insert(SettlMethod_8.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_8("STRING_1119249287");
  msg.set(SettleOnOpenFlag_8);
  Instrument_8.insert(SettleOnOpenFlag_8.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_8("STRING_1007896057");
  msg.set(StateOrProvinceOfIssue_8);
  Instrument_8.insert(StateOrProvinceOfIssue_8.getString());
  FIX::StrikeCurrency StrikeCurrency_8("GBP");
  msg.set(StrikeCurrency_8);
  Instrument_8.insert(StrikeCurrency_8.getString());
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("4307350");
  msg.set(StrikeMultiplier_8);
  Instrument_8.insert(StrikeMultiplier_8.getString());
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("847333");
  msg.set(StrikePrice_8);
  Instrument_8.insert(StrikePrice_8.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_8(3);
  msg.set(StrikePriceBoundaryMethod_8);
  Instrument_8.insert(StrikePriceBoundaryMethod_8.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("29.000000");
  msg.set(StrikePriceBoundaryPrecision_8);
  Instrument_8.insert(StrikePriceBoundaryPrecision_8.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_8(4);
  msg.set(StrikePriceDeterminationMethod_8);
  Instrument_8.insert(StrikePriceDeterminationMethod_8.getString());
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("3047378");
  msg.set(StrikeValue_8);
  Instrument_8.insert(StrikeValue_8.getString());
  FIX::Symbol Symbol_8("STRING_348954064");
  msg.set(Symbol_8);
  Instrument_8.insert(Symbol_8.getString());
  FIX::SymbolSfx SymbolSfx_8("STRING_CD");
  msg.set(SymbolSfx_8);
  Instrument_8.insert(SymbolSfx_8.getString());
  FIX::TimeUnit TimeUnit_8("STRING_S");
  msg.set(TimeUnit_8);
  Instrument_8.insert(TimeUnit_8.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_8(4);
  msg.set(UnderlyingPriceDeterminationMethod_8);
  Instrument_8.insert(UnderlyingPriceDeterminationMethod_8.getString());
  FIX::UnitOfMeasure UnitOfMeasure_8("STRING_MWh");
  msg.set(UnitOfMeasure_8);
  Instrument_8.insert(UnitOfMeasure_8.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("16433528");
  msg.set(UnitOfMeasureQty_8);
  Instrument_8.insert(UnitOfMeasureQty_8.getString());
  FIX::ValuationMethod ValuationMethod_8("STRING_CDSD");
  msg.set(ValuationMethod_8);
  Instrument_8.insert(ValuationMethod_8.getString());
  all_values.push_back(Instrument_8);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_17;
    FIX::ComplexEventCondition ComplexEventCondition_17(1);
    noComplexEvents_0_0.set(ComplexEventCondition_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventCondition_17.getString());
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("12161897");
    noComplexEvents_0_0.set(ComplexEventPrice_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPrice_17.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_17(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryMethod_17.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("24.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryPrecision_17.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_17(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceTimeType_17.getString());
    FIX::ComplexEventType ComplexEventType_17(4);
    noComplexEvents_0_0.set(ComplexEventType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventType_17.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("11568350");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexOptPayoutAmount_17.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_17);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      FIX::ComplexEventEndDate ComplexEventEndDate_42(FIX::UTCTIMESTAMP(9, 4, 37, 16, 8, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventEndDate_42.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_42(FIX::UTCTIMESTAMP(10, 56, 49, 10, 5, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventStartDate_42.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        FIX::ComplexEventEndTime ComplexEventEndTime_89(FIX::UTCTIMEONLY(19, 52, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventEndTime_89.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_89(FIX::UTCTIMEONLY(6, 25, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventStartTime_89.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        FIX::ComplexEventEndTime ComplexEventEndTime_90(FIX::UTCTIMEONLY(22, 33, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventEndTime_90.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_90(FIX::UTCTIMEONLY(7, 41, 3));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventStartTime_90.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        FIX::ComplexEventEndTime ComplexEventEndTime_91(FIX::UTCTIMEONLY(7, 59, 17));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventEndTime_91.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_91(FIX::UTCTIMEONLY(6, 23, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventStartTime_91.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      FIX::ComplexEventEndDate ComplexEventEndDate_43(FIX::UTCTIMESTAMP(23, 1, 54, 11, 3, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventEndDate_43.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_43(FIX::UTCTIMESTAMP(21, 13, 19, 27, 8, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventStartDate_43.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        FIX::ComplexEventEndTime ComplexEventEndTime_92(FIX::UTCTIMEONLY(10, 39, 10));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventEndTime_92.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_92(FIX::UTCTIMEONLY(2, 51, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventStartTime_92.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        FIX::ComplexEventEndTime ComplexEventEndTime_93(FIX::UTCTIMEONLY(14, 21, 56));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventEndTime_93.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_93(FIX::UTCTIMEONLY(20, 19, 9));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventStartTime_93.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        FIX::ComplexEventEndTime ComplexEventEndTime_94(FIX::UTCTIMEONLY(19, 2, 23));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventEndTime_94.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_94(FIX::UTCTIMEONLY(20, 44, 58));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventStartTime_94.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_15;
    FIX::EventDate EventDate_15("LOCALMKTDATE_1782214498");
    noEvents_0_0.set(EventDate_15);
    EvntGrp_NoEvents_15.insert(EventDate_15.getString());
    FIX::EventPx EventPx_15;
    EventPx_15.setString("819778");
    noEvents_0_0.set(EventPx_15);
    EvntGrp_NoEvents_15.insert(EventPx_15.getString());
    FIX::EventText EventText_15("STRING_1616084041");
    noEvents_0_0.set(EventText_15);
    EvntGrp_NoEvents_15.insert(EventText_15.getString());
    FIX::EventTime EventTime_15(FIX::UTCTIMESTAMP(5, 7, 35, 19, 3, 2003));
    noEvents_0_0.set(EventTime_15);
    EvntGrp_NoEvents_15.insert(EventTime_15.getString());
    FIX::EventType EventType_15(12);
    noEvents_0_0.set(EventType_15);
    EvntGrp_NoEvents_15.insert(EventType_15.getString());
    all_values.push_back(EvntGrp_NoEvents_15);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    FIX::EventDate EventDate_16("LOCALMKTDATE_1083547252");
    noEvents_0_1.set(EventDate_16);
    EvntGrp_NoEvents_16.insert(EventDate_16.getString());
    FIX::EventPx EventPx_16;
    EventPx_16.setString("21252675");
    noEvents_0_1.set(EventPx_16);
    EvntGrp_NoEvents_16.insert(EventPx_16.getString());
    FIX::EventText EventText_16("STRING_506503445");
    noEvents_0_1.set(EventText_16);
    EvntGrp_NoEvents_16.insert(EventText_16.getString());
    FIX::EventTime EventTime_16(FIX::UTCTIMESTAMP(19, 19, 34, 13, 4, 2016));
    noEvents_0_1.set(EventTime_16);
    EvntGrp_NoEvents_16.insert(EventTime_16.getString());
    FIX::EventType EventType_16(15);
    noEvents_0_1.set(EventType_16);
    EvntGrp_NoEvents_16.insert(EventType_16.getString());
    all_values.push_back(EvntGrp_NoEvents_16);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    FIX::EventDate EventDate_17("LOCALMKTDATE_2009403763");
    noEvents_0_2.set(EventDate_17);
    EvntGrp_NoEvents_17.insert(EventDate_17.getString());
    FIX::EventPx EventPx_17;
    EventPx_17.setString("8202109");
    noEvents_0_2.set(EventPx_17);
    EvntGrp_NoEvents_17.insert(EventPx_17.getString());
    FIX::EventText EventText_17("STRING_1138504897");
    noEvents_0_2.set(EventText_17);
    EvntGrp_NoEvents_17.insert(EventText_17.getString());
    FIX::EventTime EventTime_17(FIX::UTCTIMESTAMP(3, 21, 35, 13, 8, 2013));
    noEvents_0_2.set(EventTime_17);
    EvntGrp_NoEvents_17.insert(EventTime_17.getString());
    FIX::EventType EventType_17(11);
    noEvents_0_2.set(EventType_17);
    EvntGrp_NoEvents_17.insert(EventType_17.getString());
    all_values.push_back(EvntGrp_NoEvents_17);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    FIX::InstrumentPartyID InstrumentPartyID_15("STRING_680857354");
    noInstrumentParties_0_0.set(InstrumentPartyID_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyID_15.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_15('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyIDSource_15.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_15(1605755407);
    noInstrumentParties_0_0.set(InstrumentPartyRole_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyRole_15.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      FIX::InstrumentPartySubID InstrumentPartySubID_32("STRING_473167279");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubID_32.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_32(1729183185);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubIDType_32.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_16;
    FIX::SecurityAltID SecurityAltID_16("STRING_1676778490");
    noSecurityAltID_0_0.set(SecurityAltID_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltID_16.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_16("STRING_665246789");
    noSecurityAltID_0_0.set(SecurityAltIDSource_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltIDSource_16.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  FIX::SecurityXML SecurityXML_17("XMLDATA_1289791223");
  msg.set(SecurityXML_17);
  FIX::SecurityXMLLen SecurityXMLLen_8(35798287);
  msg.set(SecurityXMLLen_8);
  FIX::SecurityXMLSchema SecurityXMLSchema_8("STRING_73729319");
  msg.set(SecurityXMLSchema_8);
  SecurityXML_16.insert(SecurityXMLSchema_8.getString());
  all_values.push_back(SecurityXML_16);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    FIX::PartyID PartyID_22("STRING_457296026");
    noPartyIDs_0_0.set(PartyID_22);
    Parties_NoPartyIDs_22.insert(PartyID_22.getString());
    FIX::PartyIDSource PartyIDSource_22('I');
    noPartyIDs_0_0.set(PartyIDSource_22);
    Parties_NoPartyIDs_22.insert(PartyIDSource_22.getString());
    FIX::PartyRole PartyRole_22(33);
    noPartyIDs_0_0.set(PartyRole_22);
    Parties_NoPartyIDs_22.insert(PartyRole_22.getString());
    all_values.push_back(Parties_NoPartyIDs_22);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      FIX::PartySubID PartySubID_51("STRING_741706512");
      noPartySubIDs_0_1_0.set(PartySubID_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubID_51.getString());
      FIX::PartySubIDType PartySubIDType_51(9);
      noPartySubIDs_0_1_0.set(PartySubIDType_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubIDType_51.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      FIX::PartySubID PartySubID_52("STRING_1527769037");
      noPartySubIDs_0_1_1.set(PartySubID_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubID_52.getString());
      FIX::PartySubIDType PartySubIDType_52(13);
      noPartySubIDs_0_1_1.set(PartySubIDType_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubIDType_52.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      FIX::PartySubID PartySubID_53("STRING_596558674");
      noPartySubIDs_0_1_2.set(PartySubID_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubID_53.getString());
      FIX::PartySubIDType PartySubIDType_53(23);
      noPartySubIDs_0_1_2.set(PartySubIDType_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubIDType_53.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_6("STRING_1897189136");
    noTrades_0_0.set(SecondaryTradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(SecondaryTradeReportID_6.getString());
    FIX::TradeReportID TradeReportID_6("STRING_1348180542");
    noTrades_0_0.set(TradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(TradeReportID_6.getString());
    all_values.push_back(TrdCollGrp_NoTrades_6);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_14("DATA_950775655");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuer_14.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_14(1518930067);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuerLen_14.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_14("DATA_1036691780");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDesc_14.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_14(1620446215);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDescLen_14.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("523037");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_14);
    UnderlyingInstrument_14.insert(UnderlyingAdjustedQuantity_14.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("11.880000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_14);
    UnderlyingInstrument_14.insert(UnderlyingAllocationPercent_14.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("79.740000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingAttachmentPoint_14.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_14("STRING_972348643");
    noUnderlyings_0_0.set(UnderlyingCFICode_14);
    UnderlyingInstrument_14.insert(UnderlyingCFICode_14.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_14("STRING_758398467");
    noUnderlyings_0_0.set(UnderlyingCPProgram_14);
    UnderlyingInstrument_14.insert(UnderlyingCPProgram_14.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_14("STRING_660417511");
    noUnderlyings_0_0.set(UnderlyingCPRegType_14);
    UnderlyingInstrument_14.insert(UnderlyingCPRegType_14.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("1368722");
    noUnderlyings_0_0.set(UnderlyingCapValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCapValue_14.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("2876933");
    noUnderlyings_0_0.set(UnderlyingCashAmount_14);
    UnderlyingInstrument_14.insert(UnderlyingCashAmount_14.getString());
    FIX::UnderlyingCashType UnderlyingCashType_14("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_14);
    UnderlyingInstrument_14.insert(UnderlyingCashType_14.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("14266634");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplier_14.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_14(323491596);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplierUnit_14.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_14("COUNTRY_1399393619");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingCountryOfIssue_14.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_14("LOCALMKTDATE_1244489631");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponPaymentDate_14.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("76.230000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponRate_14.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_14("STRING_1141656145");
    noUnderlyings_0_0.set(UnderlyingCreditRating_14);
    UnderlyingInstrument_14.insert(UnderlyingCreditRating_14.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_14("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrency_14.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("18833626");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrentValue_14.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("42.990000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingDetachmentPoint_14.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("18269219");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingDirtyPrice_14.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("12977965");
    noUnderlyings_0_0.set(UnderlyingEndPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingEndPrice_14.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("663293");
    noUnderlyings_0_0.set(UnderlyingEndValue_14);
    UnderlyingInstrument_14.insert(UnderlyingEndValue_14.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_14(491600153);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_14);
    UnderlyingInstrument_14.insert(UnderlyingExerciseStyle_14.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("11759972");
    noUnderlyings_0_0.set(UnderlyingFXRate_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRate_14.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_14('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRateCalc_14.getString());
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("18397806");
    noUnderlyings_0_0.set(UnderlyingFactor_14);
    UnderlyingInstrument_14.insert(UnderlyingFactor_14.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_14(518712737);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_14);
    UnderlyingInstrument_14.insert(UnderlyingFlowScheduleType_14.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_14("STRING_766810469");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_14);
    UnderlyingInstrument_14.insert(UnderlyingInstrRegistry_14.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_14("LOCALMKTDATE_1211227115");
    noUnderlyings_0_0.set(UnderlyingIssueDate_14);
    UnderlyingInstrument_14.insert(UnderlyingIssueDate_14.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_14("STRING_1555404517");
    noUnderlyings_0_0.set(UnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(UnderlyingIssuer_14.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_14("STRING_239773036");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingLocaleOfIssue_14.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_14("LOCALMKTDATE_1263530889");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityDate_14.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_14("MONTHYEAR_1840635705");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityMonthYear_14.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_14("TZTIMEONLY_1318491010");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityTime_14.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("58.840000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_14('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_14);
    UnderlyingInstrument_14.insert(UnderlyingOptAttribute_14.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("85.210000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingOriginalNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_14("STRING_225268154");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasure_14.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("7392438");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasureQty_14.getString());
    FIX::UnderlyingProduct UnderlyingProduct_14(1157089173);
    noUnderlyings_0_0.set(UnderlyingProduct_14);
    UnderlyingInstrument_14.insert(UnderlyingProduct_14.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_14(1651931647);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_14);
    UnderlyingInstrument_14.insert(UnderlyingPutOrCall_14.getString());
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("10627354");
    noUnderlyings_0_0.set(UnderlyingPx_14);
    UnderlyingInstrument_14.insert(UnderlyingPx_14.getString());
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("4089991");
    noUnderlyings_0_0.set(UnderlyingQty_14);
    UnderlyingInstrument_14.insert(UnderlyingQty_14.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_14("LOCALMKTDATE_748937630");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_14);
    UnderlyingInstrument_14.insert(UnderlyingRedemptionDate_14.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_14("STRING_1843523053");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingRepoCollateralSecurityType_14.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("52.900000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseRate_14.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_14(760654504);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseTerm_14.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_14("STRING_2142675949");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_14);
    UnderlyingInstrument_14.insert(UnderlyingRestructuringType_14.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_14("STRING_1286534299");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityDesc_14.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_14("EXCHANGE_230425156");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityExchange_14.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_14("STRING_1822114235");
    noUnderlyings_0_0.set(UnderlyingSecurityID_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityID_14.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_14("STRING_436847162");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityIDSource_14.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_14("STRING_296754482");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecuritySubType_14.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_14("STRING_166230740");
    noUnderlyings_0_0.set(UnderlyingSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityType_14.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_14("STRING_1612844409");
    noUnderlyings_0_0.set(UnderlyingSeniority_14);
    UnderlyingInstrument_14.insert(UnderlyingSeniority_14.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_14("STRING_112789296");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlMethod_14.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_14(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlementType_14.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("21315571");
    noUnderlyings_0_0.set(UnderlyingStartValue_14);
    UnderlyingInstrument_14.insert(UnderlyingStartValue_14.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_14("STRING_879599765");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingStateOrProvinceOfIssue_14.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_14("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikeCurrency_14.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("11193728");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikePrice_14.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_14("STRING_185802143");
    noUnderlyings_0_0.set(UnderlyingSymbol_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbol_14.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_14("STRING_1232630073");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbolSfx_14.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_14("STRING_290380163");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingTimeUnit_14.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_14("STRING_274198028");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasure_14.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("16841805");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasureQty_14.getString());
    all_values.push_back(UnderlyingInstrument_14);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_32("STRING_499466182");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltID_32.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_32("STRING_275940783");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltIDSource_32.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_33("STRING_1278894209");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltID_33.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_33("STRING_3914182");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltIDSource_33.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_34("STRING_1338676213");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltID_34.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_34("STRING_1687893353");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltIDSource_34.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      FIX::UnderlyingStipType UnderlyingStipType_21("STRING_1034715618");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipType_21.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_21("STRING_1091064995");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipValue_21.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_28("STRING_1029907919");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyID_28.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_28('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyIDSource_28.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_28(1743931473);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyRole_28.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_54("STRING_666962809");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubID_54.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_54(2040685955);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubIDType_54.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_55("STRING_870769246");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubID_55.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_55(132323570);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubIDType_55.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_56("STRING_5991603");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubID_56.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_56(729297034);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubIDType_56.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_29("STRING_116397068");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyID_29.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_29('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyIDSource_29.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_29(1799051936);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyRole_29.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_57("STRING_2004964169");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubID_57.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_57(1984854080);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubIDType_57.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_30("STRING_741021508");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyID_30.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_30('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyIDSource_30.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_30(111568460);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyRole_30.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_58("STRING_269665720");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubID_58.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_58(611034642);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubIDType_58.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_59("STRING_553659241");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubID_59.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_59(1548559929);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubIDType_59.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
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
