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
  FIX::Account Account_5("STRING_1362318558");
  msg.set(Account_5);
  CollateralInquiryAck_0.insert(Account_5.getString());
  FIX::AccountType AccountType_3(1);
  msg.set(AccountType_3);
  CollateralInquiryAck_0.insert(AccountType_3.getString());
  FIX::ClOrdID ClOrdID_7("STRING_280173950");
  msg.set(ClOrdID_7);
  CollateralInquiryAck_0.insert(ClOrdID_7.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_8("LOCALMKTDATE_1332261942");
  msg.set(ClearingBusinessDate_8);
  CollateralInquiryAck_0.insert(ClearingBusinessDate_8.getString());
  FIX::CollInquiryID CollInquiryID_1("STRING_1517477029");
  msg.set(CollInquiryID_1);
  CollateralInquiryAck_0.insert(CollInquiryID_1.getString());
  FIX::CollInquiryResult CollInquiryResult_0(2);
  msg.set(CollInquiryResult_0);
  CollateralInquiryAck_0.insert(CollInquiryResult_0.getString());
  FIX::CollInquiryStatus CollInquiryStatus_0(0);
  msg.set(CollInquiryStatus_0);
  CollateralInquiryAck_0.insert(CollInquiryStatus_0.getString());
  FIX::Currency Currency_8("CHF");
  msg.set(Currency_8);
  CollateralInquiryAck_0.insert(Currency_8.getString());
  FIX::EncodedText EncodedText_15("DATA_231755900");
  msg.set(EncodedText_15);
  CollateralInquiryAck_0.insert(EncodedText_15.getString());
  FIX::EncodedTextLen EncodedTextLen_15(875132900);
  msg.set(EncodedTextLen_15);
  CollateralInquiryAck_0.insert(EncodedTextLen_15.getString());
  FIX::OrderID OrderID_7("STRING_635990600");
  msg.set(OrderID_7);
  CollateralInquiryAck_0.insert(OrderID_7.getString());
  FIX::QtyType QtyType_6(1);
  msg.set(QtyType_6);
  CollateralInquiryAck_0.insert(QtyType_6.getString());
  FIX::Quantity Quantity_7;
  Quantity_7.setString("704473");
  msg.set(Quantity_7);
  CollateralInquiryAck_0.insert(Quantity_7.getString());
  FIX::ResponseDestination ResponseDestination_1("STRING_1176462523");
  msg.set(ResponseDestination_1);
  CollateralInquiryAck_0.insert(ResponseDestination_1.getString());
  FIX::ResponseTransportType ResponseTransportType_1(0);
  msg.set(ResponseTransportType_1);
  CollateralInquiryAck_0.insert(ResponseTransportType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_7("STRING_443261679");
  msg.set(SecondaryClOrdID_7);
  CollateralInquiryAck_0.insert(SecondaryClOrdID_7.getString());
  FIX::SecondaryOrderID SecondaryOrderID_7("STRING_1267456310");
  msg.set(SecondaryOrderID_7);
  CollateralInquiryAck_0.insert(SecondaryOrderID_7.getString());
  FIX::SettlDate SettlDate_8("LOCALMKTDATE_868537056");
  msg.set(SettlDate_8);
  CollateralInquiryAck_0.insert(SettlDate_8.getString());
  FIX::SettlSessID SettlSessID_4("STRING_ITD");
  msg.set(SettlSessID_4);
  CollateralInquiryAck_0.insert(SettlSessID_4.getString());
  FIX::SettlSessSubID SettlSessSubID_3("STRING_479830723");
  msg.set(SettlSessSubID_3);
  CollateralInquiryAck_0.insert(SettlSessSubID_3.getString());
  FIX::Text Text_15("STRING_198395705");
  msg.set(Text_15);
  CollateralInquiryAck_0.insert(Text_15.getString());
  FIX::TotNumReports TotNumReports_0(2121690354);
  msg.set(TotNumReports_0);
  CollateralInquiryAck_0.insert(TotNumReports_0.getString());
  FIX::TradingSessionID TradingSessionID_9("STRING_4");
  msg.set(TradingSessionID_9);
  CollateralInquiryAck_0.insert(TradingSessionID_9.getString());
  FIX::TradingSessionSubID TradingSessionSubID_9("STRING_3");
  msg.set(TradingSessionSubID_9);
  CollateralInquiryAck_0.insert(TradingSessionSubID_9.getString());
  all_values.push_back(CollateralInquiryAck_0);

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_3;
    FIX::CollInquiryQualifier CollInquiryQualifier_3(4);
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
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_5;
    FIX::CollInquiryQualifier CollInquiryQualifier_5(2);
    noCollInquiryQualifier_0_2.set(CollInquiryQualifier_5);
    CollInqQualGrp_NoCollInquiryQualifier_5.insert(CollInquiryQualifier_5.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_5);

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    FIX::ExecID ExecID_11("STRING_814055116");
    noExecs_0_0.set(ExecID_11);
    ExecCollGrp_NoExecs_3.insert(ExecID_11.getString());
    all_values.push_back(ExecCollGrp_NoExecs_3);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  FIX::AgreementCurrency AgreementCurrency_5("EUR");
  msg.set(AgreementCurrency_5);
  FinancingDetails_5.insert(AgreementCurrency_5.getString());
  FIX::AgreementDate AgreementDate_5("LOCALMKTDATE_1094229066");
  msg.set(AgreementDate_5);
  FinancingDetails_5.insert(AgreementDate_5.getString());
  FIX::AgreementDesc AgreementDesc_5("STRING_653073087");
  msg.set(AgreementDesc_5);
  FinancingDetails_5.insert(AgreementDesc_5.getString());
  FIX::AgreementID AgreementID_5("STRING_1515537234");
  msg.set(AgreementID_5);
  FinancingDetails_5.insert(AgreementID_5.getString());
  FIX::DeliveryType DeliveryType_5(2);
  msg.set(DeliveryType_5);
  FinancingDetails_5.insert(DeliveryType_5.getString());
  FIX::EndDate EndDate_5("LOCALMKTDATE_1836270852");
  msg.set(EndDate_5);
  FinancingDetails_5.insert(EndDate_5.getString());
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("53.790000");
  msg.set(MarginRatio_5);
  FinancingDetails_5.insert(MarginRatio_5.getString());
  FIX::StartDate StartDate_5("LOCALMKTDATE_79136665");
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
    multiset<string> InstrumentLeg_13;
    FIX::EncodedLegIssuer EncodedLegIssuer_13("DATA_715127266");
    noLegs_0_0.set(EncodedLegIssuer_13);
    InstrumentLeg_13.insert(EncodedLegIssuer_13.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_13(76999232);
    noLegs_0_0.set(EncodedLegIssuerLen_13);
    InstrumentLeg_13.insert(EncodedLegIssuerLen_13.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_13("DATA_1643015622");
    noLegs_0_0.set(EncodedLegSecurityDesc_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDesc_13.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_13(1891589789);
    noLegs_0_0.set(EncodedLegSecurityDescLen_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDescLen_13.getString());
    FIX::LegCFICode LegCFICode_13("STRING_628375634");
    noLegs_0_0.set(LegCFICode_13);
    InstrumentLeg_13.insert(LegCFICode_13.getString());
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("20862773");
    noLegs_0_0.set(LegContractMultiplier_13);
    InstrumentLeg_13.insert(LegContractMultiplier_13.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_13(1011562452);
    noLegs_0_0.set(LegContractMultiplierUnit_13);
    InstrumentLeg_13.insert(LegContractMultiplierUnit_13.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_13("MONTHYEAR_1496912691");
    noLegs_0_0.set(LegContractSettlMonth_13);
    InstrumentLeg_13.insert(LegContractSettlMonth_13.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_13("COUNTRY_80825917");
    noLegs_0_0.set(LegCountryOfIssue_13);
    InstrumentLeg_13.insert(LegCountryOfIssue_13.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_13("LOCALMKTDATE_1491393175");
    noLegs_0_0.set(LegCouponPaymentDate_13);
    InstrumentLeg_13.insert(LegCouponPaymentDate_13.getString());
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("83.960000");
    noLegs_0_0.set(LegCouponRate_13);
    InstrumentLeg_13.insert(LegCouponRate_13.getString());
    FIX::LegCreditRating LegCreditRating_13("STRING_55032624");
    noLegs_0_0.set(LegCreditRating_13);
    InstrumentLeg_13.insert(LegCreditRating_13.getString());
    FIX::LegCurrency LegCurrency_13("GBP");
    noLegs_0_0.set(LegCurrency_13);
    InstrumentLeg_13.insert(LegCurrency_13.getString());
    FIX::LegDatedDate LegDatedDate_13("LOCALMKTDATE_774541499");
    noLegs_0_0.set(LegDatedDate_13);
    InstrumentLeg_13.insert(LegDatedDate_13.getString());
    FIX::LegExerciseStyle LegExerciseStyle_13(1258278971);
    noLegs_0_0.set(LegExerciseStyle_13);
    InstrumentLeg_13.insert(LegExerciseStyle_13.getString());
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("2820137");
    noLegs_0_0.set(LegFactor_13);
    InstrumentLeg_13.insert(LegFactor_13.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_13(880517733);
    noLegs_0_0.set(LegFlowScheduleType_13);
    InstrumentLeg_13.insert(LegFlowScheduleType_13.getString());
    FIX::LegInstrRegistry LegInstrRegistry_13("STRING_1307349521");
    noLegs_0_0.set(LegInstrRegistry_13);
    InstrumentLeg_13.insert(LegInstrRegistry_13.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_13("LOCALMKTDATE_1096068860");
    noLegs_0_0.set(LegInterestAccrualDate_13);
    InstrumentLeg_13.insert(LegInterestAccrualDate_13.getString());
    FIX::LegIssueDate LegIssueDate_13("LOCALMKTDATE_201328878");
    noLegs_0_0.set(LegIssueDate_13);
    InstrumentLeg_13.insert(LegIssueDate_13.getString());
    FIX::LegIssuer LegIssuer_13("STRING_1305409726");
    noLegs_0_0.set(LegIssuer_13);
    InstrumentLeg_13.insert(LegIssuer_13.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_13("STRING_42814279");
    noLegs_0_0.set(LegLocaleOfIssue_13);
    InstrumentLeg_13.insert(LegLocaleOfIssue_13.getString());
    FIX::LegMaturityDate LegMaturityDate_13("LOCALMKTDATE_854401965");
    noLegs_0_0.set(LegMaturityDate_13);
    InstrumentLeg_13.insert(LegMaturityDate_13.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_13("MONTHYEAR_673463313");
    noLegs_0_0.set(LegMaturityMonthYear_13);
    InstrumentLeg_13.insert(LegMaturityMonthYear_13.getString());
    FIX::LegMaturityTime LegMaturityTime_13("TZTIMEONLY_2053227397");
    noLegs_0_0.set(LegMaturityTime_13);
    InstrumentLeg_13.insert(LegMaturityTime_13.getString());
    FIX::LegOptAttribute LegOptAttribute_13('5');
    noLegs_0_0.set(LegOptAttribute_13);
    InstrumentLeg_13.insert(LegOptAttribute_13.getString());
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("13708986");
    noLegs_0_0.set(LegOptionRatio_13);
    InstrumentLeg_13.insert(LegOptionRatio_13.getString());
    FIX::LegPool LegPool_13("STRING_2132364062");
    noLegs_0_0.set(LegPool_13);
    InstrumentLeg_13.insert(LegPool_13.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_13("STRING_463732274");
    noLegs_0_0.set(LegPriceUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasure_13.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("7959833");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasureQty_13.getString());
    FIX::LegProduct LegProduct_13(700007680);
    noLegs_0_0.set(LegProduct_13);
    InstrumentLeg_13.insert(LegProduct_13.getString());
    FIX::LegPutOrCall LegPutOrCall_13(540731506);
    noLegs_0_0.set(LegPutOrCall_13);
    InstrumentLeg_13.insert(LegPutOrCall_13.getString());
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("2915152");
    noLegs_0_0.set(LegRatioQty_13);
    InstrumentLeg_13.insert(LegRatioQty_13.getString());
    FIX::LegRedemptionDate LegRedemptionDate_13("LOCALMKTDATE_444113822");
    noLegs_0_0.set(LegRedemptionDate_13);
    InstrumentLeg_13.insert(LegRedemptionDate_13.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_13("STRING_1169107141");
    noLegs_0_0.set(LegRepoCollateralSecurityType_13);
    InstrumentLeg_13.insert(LegRepoCollateralSecurityType_13.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("89.500000");
    noLegs_0_0.set(LegRepurchaseRate_13);
    InstrumentLeg_13.insert(LegRepurchaseRate_13.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_13(1455676274);
    noLegs_0_0.set(LegRepurchaseTerm_13);
    InstrumentLeg_13.insert(LegRepurchaseTerm_13.getString());
    FIX::LegSecurityDesc LegSecurityDesc_13("STRING_518536184");
    noLegs_0_0.set(LegSecurityDesc_13);
    InstrumentLeg_13.insert(LegSecurityDesc_13.getString());
    FIX::LegSecurityExchange LegSecurityExchange_13("EXCHANGE_311134868");
    noLegs_0_0.set(LegSecurityExchange_13);
    InstrumentLeg_13.insert(LegSecurityExchange_13.getString());
    FIX::LegSecurityID LegSecurityID_13("STRING_799585801");
    noLegs_0_0.set(LegSecurityID_13);
    InstrumentLeg_13.insert(LegSecurityID_13.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_13("STRING_66360932");
    noLegs_0_0.set(LegSecurityIDSource_13);
    InstrumentLeg_13.insert(LegSecurityIDSource_13.getString());
    FIX::LegSecuritySubType LegSecuritySubType_13("STRING_366167492");
    noLegs_0_0.set(LegSecuritySubType_13);
    InstrumentLeg_13.insert(LegSecuritySubType_13.getString());
    FIX::LegSecurityType LegSecurityType_13("STRING_1694145975");
    noLegs_0_0.set(LegSecurityType_13);
    InstrumentLeg_13.insert(LegSecurityType_13.getString());
    FIX::LegSide LegSide_13('8');
    noLegs_0_0.set(LegSide_13);
    InstrumentLeg_13.insert(LegSide_13.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_13("STRING_1140708991");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_13);
    InstrumentLeg_13.insert(LegStateOrProvinceOfIssue_13.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_13("CHF");
    noLegs_0_0.set(LegStrikeCurrency_13);
    InstrumentLeg_13.insert(LegStrikeCurrency_13.getString());
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("20212267");
    noLegs_0_0.set(LegStrikePrice_13);
    InstrumentLeg_13.insert(LegStrikePrice_13.getString());
    FIX::LegSymbol LegSymbol_13("STRING_2112290820");
    noLegs_0_0.set(LegSymbol_13);
    InstrumentLeg_13.insert(LegSymbol_13.getString());
    FIX::LegSymbolSfx LegSymbolSfx_13("STRING_1459698671");
    noLegs_0_0.set(LegSymbolSfx_13);
    InstrumentLeg_13.insert(LegSymbolSfx_13.getString());
    FIX::LegTimeUnit LegTimeUnit_13("STRING_75071955");
    noLegs_0_0.set(LegTimeUnit_13);
    InstrumentLeg_13.insert(LegTimeUnit_13.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_13("STRING_1270216898");
    noLegs_0_0.set(LegUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegUnitOfMeasure_13.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("15025129");
    noLegs_0_0.set(LegUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegUnitOfMeasureQty_13.getString());
    all_values.push_back(InstrumentLeg_13);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      FIX::LegSecurityAltID LegSecurityAltID_21("STRING_1943680211");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltID_21.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_21("STRING_1408256699");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltIDSource_21.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_14;
    FIX::EncodedLegIssuer EncodedLegIssuer_14("DATA_1472663090");
    noLegs_0_1.set(EncodedLegIssuer_14);
    InstrumentLeg_14.insert(EncodedLegIssuer_14.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_14(1167095255);
    noLegs_0_1.set(EncodedLegIssuerLen_14);
    InstrumentLeg_14.insert(EncodedLegIssuerLen_14.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_14("DATA_1393137114");
    noLegs_0_1.set(EncodedLegSecurityDesc_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDesc_14.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_14(1936395365);
    noLegs_0_1.set(EncodedLegSecurityDescLen_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDescLen_14.getString());
    FIX::LegCFICode LegCFICode_14("STRING_1963078579");
    noLegs_0_1.set(LegCFICode_14);
    InstrumentLeg_14.insert(LegCFICode_14.getString());
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("20931447");
    noLegs_0_1.set(LegContractMultiplier_14);
    InstrumentLeg_14.insert(LegContractMultiplier_14.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_14(329643223);
    noLegs_0_1.set(LegContractMultiplierUnit_14);
    InstrumentLeg_14.insert(LegContractMultiplierUnit_14.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_14("MONTHYEAR_107110228");
    noLegs_0_1.set(LegContractSettlMonth_14);
    InstrumentLeg_14.insert(LegContractSettlMonth_14.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_14("COUNTRY_389774968");
    noLegs_0_1.set(LegCountryOfIssue_14);
    InstrumentLeg_14.insert(LegCountryOfIssue_14.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_14("LOCALMKTDATE_1498750364");
    noLegs_0_1.set(LegCouponPaymentDate_14);
    InstrumentLeg_14.insert(LegCouponPaymentDate_14.getString());
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("91.790000");
    noLegs_0_1.set(LegCouponRate_14);
    InstrumentLeg_14.insert(LegCouponRate_14.getString());
    FIX::LegCreditRating LegCreditRating_14("STRING_1845451242");
    noLegs_0_1.set(LegCreditRating_14);
    InstrumentLeg_14.insert(LegCreditRating_14.getString());
    FIX::LegCurrency LegCurrency_14("EUR");
    noLegs_0_1.set(LegCurrency_14);
    InstrumentLeg_14.insert(LegCurrency_14.getString());
    FIX::LegDatedDate LegDatedDate_14("LOCALMKTDATE_497553395");
    noLegs_0_1.set(LegDatedDate_14);
    InstrumentLeg_14.insert(LegDatedDate_14.getString());
    FIX::LegExerciseStyle LegExerciseStyle_14(2083647481);
    noLegs_0_1.set(LegExerciseStyle_14);
    InstrumentLeg_14.insert(LegExerciseStyle_14.getString());
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("10147215");
    noLegs_0_1.set(LegFactor_14);
    InstrumentLeg_14.insert(LegFactor_14.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_14(44215723);
    noLegs_0_1.set(LegFlowScheduleType_14);
    InstrumentLeg_14.insert(LegFlowScheduleType_14.getString());
    FIX::LegInstrRegistry LegInstrRegistry_14("STRING_17779899");
    noLegs_0_1.set(LegInstrRegistry_14);
    InstrumentLeg_14.insert(LegInstrRegistry_14.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_14("LOCALMKTDATE_7946882");
    noLegs_0_1.set(LegInterestAccrualDate_14);
    InstrumentLeg_14.insert(LegInterestAccrualDate_14.getString());
    FIX::LegIssueDate LegIssueDate_14("LOCALMKTDATE_849157021");
    noLegs_0_1.set(LegIssueDate_14);
    InstrumentLeg_14.insert(LegIssueDate_14.getString());
    FIX::LegIssuer LegIssuer_14("STRING_381409710");
    noLegs_0_1.set(LegIssuer_14);
    InstrumentLeg_14.insert(LegIssuer_14.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_14("STRING_2029173606");
    noLegs_0_1.set(LegLocaleOfIssue_14);
    InstrumentLeg_14.insert(LegLocaleOfIssue_14.getString());
    FIX::LegMaturityDate LegMaturityDate_14("LOCALMKTDATE_813964193");
    noLegs_0_1.set(LegMaturityDate_14);
    InstrumentLeg_14.insert(LegMaturityDate_14.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_14("MONTHYEAR_1841108382");
    noLegs_0_1.set(LegMaturityMonthYear_14);
    InstrumentLeg_14.insert(LegMaturityMonthYear_14.getString());
    FIX::LegMaturityTime LegMaturityTime_14("TZTIMEONLY_2104245561");
    noLegs_0_1.set(LegMaturityTime_14);
    InstrumentLeg_14.insert(LegMaturityTime_14.getString());
    FIX::LegOptAttribute LegOptAttribute_14('2');
    noLegs_0_1.set(LegOptAttribute_14);
    InstrumentLeg_14.insert(LegOptAttribute_14.getString());
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("11961376");
    noLegs_0_1.set(LegOptionRatio_14);
    InstrumentLeg_14.insert(LegOptionRatio_14.getString());
    FIX::LegPool LegPool_14("STRING_886235834");
    noLegs_0_1.set(LegPool_14);
    InstrumentLeg_14.insert(LegPool_14.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_14("STRING_1880377655");
    noLegs_0_1.set(LegPriceUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasure_14.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("4569107");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasureQty_14.getString());
    FIX::LegProduct LegProduct_14(211415276);
    noLegs_0_1.set(LegProduct_14);
    InstrumentLeg_14.insert(LegProduct_14.getString());
    FIX::LegPutOrCall LegPutOrCall_14(899989263);
    noLegs_0_1.set(LegPutOrCall_14);
    InstrumentLeg_14.insert(LegPutOrCall_14.getString());
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("18500478");
    noLegs_0_1.set(LegRatioQty_14);
    InstrumentLeg_14.insert(LegRatioQty_14.getString());
    FIX::LegRedemptionDate LegRedemptionDate_14("LOCALMKTDATE_326993");
    noLegs_0_1.set(LegRedemptionDate_14);
    InstrumentLeg_14.insert(LegRedemptionDate_14.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_14("STRING_715584194");
    noLegs_0_1.set(LegRepoCollateralSecurityType_14);
    InstrumentLeg_14.insert(LegRepoCollateralSecurityType_14.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("89.960000");
    noLegs_0_1.set(LegRepurchaseRate_14);
    InstrumentLeg_14.insert(LegRepurchaseRate_14.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_14(329970217);
    noLegs_0_1.set(LegRepurchaseTerm_14);
    InstrumentLeg_14.insert(LegRepurchaseTerm_14.getString());
    FIX::LegSecurityDesc LegSecurityDesc_14("STRING_822694422");
    noLegs_0_1.set(LegSecurityDesc_14);
    InstrumentLeg_14.insert(LegSecurityDesc_14.getString());
    FIX::LegSecurityExchange LegSecurityExchange_14("EXCHANGE_38000317");
    noLegs_0_1.set(LegSecurityExchange_14);
    InstrumentLeg_14.insert(LegSecurityExchange_14.getString());
    FIX::LegSecurityID LegSecurityID_14("STRING_1828720581");
    noLegs_0_1.set(LegSecurityID_14);
    InstrumentLeg_14.insert(LegSecurityID_14.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_14("STRING_1160113601");
    noLegs_0_1.set(LegSecurityIDSource_14);
    InstrumentLeg_14.insert(LegSecurityIDSource_14.getString());
    FIX::LegSecuritySubType LegSecuritySubType_14("STRING_1883451559");
    noLegs_0_1.set(LegSecuritySubType_14);
    InstrumentLeg_14.insert(LegSecuritySubType_14.getString());
    FIX::LegSecurityType LegSecurityType_14("STRING_1698523482");
    noLegs_0_1.set(LegSecurityType_14);
    InstrumentLeg_14.insert(LegSecurityType_14.getString());
    FIX::LegSide LegSide_14('1');
    noLegs_0_1.set(LegSide_14);
    InstrumentLeg_14.insert(LegSide_14.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_14("STRING_233521307");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_14);
    InstrumentLeg_14.insert(LegStateOrProvinceOfIssue_14.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_14("EUR");
    noLegs_0_1.set(LegStrikeCurrency_14);
    InstrumentLeg_14.insert(LegStrikeCurrency_14.getString());
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("2777370");
    noLegs_0_1.set(LegStrikePrice_14);
    InstrumentLeg_14.insert(LegStrikePrice_14.getString());
    FIX::LegSymbol LegSymbol_14("STRING_1652467214");
    noLegs_0_1.set(LegSymbol_14);
    InstrumentLeg_14.insert(LegSymbol_14.getString());
    FIX::LegSymbolSfx LegSymbolSfx_14("STRING_683852421");
    noLegs_0_1.set(LegSymbolSfx_14);
    InstrumentLeg_14.insert(LegSymbolSfx_14.getString());
    FIX::LegTimeUnit LegTimeUnit_14("STRING_1126894051");
    noLegs_0_1.set(LegTimeUnit_14);
    InstrumentLeg_14.insert(LegTimeUnit_14.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_14("STRING_2033876925");
    noLegs_0_1.set(LegUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegUnitOfMeasure_14.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("5655423");
    noLegs_0_1.set(LegUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegUnitOfMeasureQty_14.getString());
    all_values.push_back(InstrumentLeg_14);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      FIX::LegSecurityAltID LegSecurityAltID_22("STRING_1727501659");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltID_22.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_22("STRING_522304293");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltIDSource_22.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      FIX::LegSecurityAltID LegSecurityAltID_23("STRING_1877555689");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltID_23.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_23("STRING_776155695");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltIDSource_23.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("1.270000");
  msg.set(AttachmentPoint_9);
  Instrument_9.insert(AttachmentPoint_9.getString());
  FIX::CFICode CFICode_9("STRING_1610449696");
  msg.set(CFICode_9);
  Instrument_9.insert(CFICode_9.getString());
  FIX::CPProgram CPProgram_9(99);
  msg.set(CPProgram_9);
  Instrument_9.insert(CPProgram_9.getString());
  FIX::CPRegType CPRegType_9("STRING_1619955404");
  msg.set(CPRegType_9);
  Instrument_9.insert(CPRegType_9.getString());
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("3629553");
  msg.set(CapPrice_9);
  Instrument_9.insert(CapPrice_9.getString());
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("9356306");
  msg.set(ContractMultiplier_9);
  Instrument_9.insert(ContractMultiplier_9.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_9(1);
  msg.set(ContractMultiplierUnit_9);
  Instrument_9.insert(ContractMultiplierUnit_9.getString());
  FIX::ContractSettlMonth ContractSettlMonth_9("MONTHYEAR_1078539505");
  msg.set(ContractSettlMonth_9);
  Instrument_9.insert(ContractSettlMonth_9.getString());
  FIX::CountryOfIssue CountryOfIssue_9("COUNTRY_583855982");
  msg.set(CountryOfIssue_9);
  Instrument_9.insert(CountryOfIssue_9.getString());
  FIX::CouponPaymentDate CouponPaymentDate_9("LOCALMKTDATE_1950252614");
  msg.set(CouponPaymentDate_9);
  Instrument_9.insert(CouponPaymentDate_9.getString());
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("39.280000");
  msg.set(CouponRate_9);
  Instrument_9.insert(CouponRate_9.getString());
  FIX::CreditRating CreditRating_9("STRING_621856299");
  msg.set(CreditRating_9);
  Instrument_9.insert(CreditRating_9.getString());
  FIX::DatedDate DatedDate_9("LOCALMKTDATE_1631489548");
  msg.set(DatedDate_9);
  Instrument_9.insert(DatedDate_9.getString());
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("38.810000");
  msg.set(DetachmentPoint_9);
  Instrument_9.insert(DetachmentPoint_9.getString());
  FIX::EncodedIssuer EncodedIssuer_9("DATA_357824210");
  msg.set(EncodedIssuer_9);
  Instrument_9.insert(EncodedIssuer_9.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_9(1182529382);
  msg.set(EncodedIssuerLen_9);
  Instrument_9.insert(EncodedIssuerLen_9.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_9("DATA_575047882");
  msg.set(EncodedSecurityDesc_9);
  Instrument_9.insert(EncodedSecurityDesc_9.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_9(591345517);
  msg.set(EncodedSecurityDescLen_9);
  Instrument_9.insert(EncodedSecurityDescLen_9.getString());
  FIX::ExerciseStyle ExerciseStyle_9(2);
  msg.set(ExerciseStyle_9);
  Instrument_9.insert(ExerciseStyle_9.getString());
  FIX::Factor Factor_9;
  Factor_9.setString("12509534");
  msg.set(Factor_9);
  Instrument_9.insert(Factor_9.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_9(false);
  msg.set(FlexProductEligibilityIndicator_9);
  Instrument_9.insert(FlexProductEligibilityIndicator_9.getString());
  FIX::FlexibleIndicator FlexibleIndicator_9(false);
  msg.set(FlexibleIndicator_9);
  Instrument_9.insert(FlexibleIndicator_9.getString());
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("19348058");
  msg.set(FloorPrice_9);
  Instrument_9.insert(FloorPrice_9.getString());
  FIX::FlowScheduleType FlowScheduleType_9(4);
  msg.set(FlowScheduleType_9);
  Instrument_9.insert(FlowScheduleType_9.getString());
  FIX::InstrRegistry InstrRegistry_9("STRING_61109892");
  msg.set(InstrRegistry_9);
  Instrument_9.insert(InstrRegistry_9.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_9('3');
  msg.set(InstrmtAssignmentMethod_9);
  Instrument_9.insert(InstrmtAssignmentMethod_9.getString());
  FIX::InterestAccrualDate InterestAccrualDate_9("LOCALMKTDATE_1789351196");
  msg.set(InterestAccrualDate_9);
  Instrument_9.insert(InterestAccrualDate_9.getString());
  FIX::IssueDate IssueDate_9("LOCALMKTDATE_1788611551");
  msg.set(IssueDate_9);
  Instrument_9.insert(IssueDate_9.getString());
  FIX::Issuer Issuer_9("STRING_875168868");
  msg.set(Issuer_9);
  Instrument_9.insert(Issuer_9.getString());
  FIX::ListMethod ListMethod_9(1);
  msg.set(ListMethod_9);
  Instrument_9.insert(ListMethod_9.getString());
  FIX::LocaleOfIssue LocaleOfIssue_9("STRING_417283599");
  msg.set(LocaleOfIssue_9);
  Instrument_9.insert(LocaleOfIssue_9.getString());
  FIX::MaturityDate MaturityDate_9("LOCALMKTDATE_136225348");
  msg.set(MaturityDate_9);
  Instrument_9.insert(MaturityDate_9.getString());
  FIX::MaturityMonthYear MaturityMonthYear_9("MONTHYEAR_982389285");
  msg.set(MaturityMonthYear_9);
  Instrument_9.insert(MaturityMonthYear_9.getString());
  FIX::MaturityTime MaturityTime_9("TZTIMEONLY_1650350030");
  msg.set(MaturityTime_9);
  Instrument_9.insert(MaturityTime_9.getString());
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("17561807");
  msg.set(MinPriceIncrement_9);
  Instrument_9.insert(MinPriceIncrement_9.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("13453445");
  msg.set(MinPriceIncrementAmount_9);
  Instrument_9.insert(MinPriceIncrementAmount_9.getString());
  FIX::NTPositionLimit NTPositionLimit_9(438497016);
  msg.set(NTPositionLimit_9);
  Instrument_9.insert(NTPositionLimit_9.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("95.010000");
  msg.set(NotionalPercentageOutstanding_9);
  Instrument_9.insert(NotionalPercentageOutstanding_9.getString());
  FIX::OptAttribute OptAttribute_9('2');
  msg.set(OptAttribute_9);
  Instrument_9.insert(OptAttribute_9.getString());
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("10223529");
  msg.set(OptPayoutAmount_9);
  Instrument_9.insert(OptPayoutAmount_9.getString());
  FIX::OptPayoutType OptPayoutType_9(1);
  msg.set(OptPayoutType_9);
  Instrument_9.insert(OptPayoutType_9.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("7.340000");
  msg.set(OriginalNotionalPercentageOutstanding_9);
  Instrument_9.insert(OriginalNotionalPercentageOutstanding_9.getString());
  FIX::Pool Pool_9("STRING_1644209297");
  msg.set(Pool_9);
  Instrument_9.insert(Pool_9.getString());
  FIX::PositionLimit PositionLimit_9(515754368);
  msg.set(PositionLimit_9);
  Instrument_9.insert(PositionLimit_9.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_9("STRING_STD");
  msg.set(PriceQuoteMethod_9);
  Instrument_9.insert(PriceQuoteMethod_9.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_9("STRING_2002033507");
  msg.set(PriceUnitOfMeasure_9);
  Instrument_9.insert(PriceUnitOfMeasure_9.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("16982837");
  msg.set(PriceUnitOfMeasureQty_9);
  Instrument_9.insert(PriceUnitOfMeasureQty_9.getString());
  FIX::Product Product_11(6);
  msg.set(Product_11);
  Instrument_9.insert(Product_11.getString());
  FIX::ProductComplex ProductComplex_9("STRING_445895377");
  msg.set(ProductComplex_9);
  Instrument_9.insert(ProductComplex_9.getString());
  FIX::PutOrCall PutOrCall_9(1);
  msg.set(PutOrCall_9);
  Instrument_9.insert(PutOrCall_9.getString());
  FIX::RedemptionDate RedemptionDate_9("LOCALMKTDATE_622532271");
  msg.set(RedemptionDate_9);
  Instrument_9.insert(RedemptionDate_9.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_9("STRING_1314977924");
  msg.set(RepoCollateralSecurityType_9);
  Instrument_9.insert(RepoCollateralSecurityType_9.getString());
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("97.660000");
  msg.set(RepurchaseRate_9);
  Instrument_9.insert(RepurchaseRate_9.getString());
  FIX::RepurchaseTerm RepurchaseTerm_9(409854466);
  msg.set(RepurchaseTerm_9);
  Instrument_9.insert(RepurchaseTerm_9.getString());
  FIX::RestructuringType RestructuringType_9("STRING_XR");
  msg.set(RestructuringType_9);
  Instrument_9.insert(RestructuringType_9.getString());
  FIX::SecurityDesc SecurityDesc_9("STRING_456359659");
  msg.set(SecurityDesc_9);
  Instrument_9.insert(SecurityDesc_9.getString());
  FIX::SecurityExchange SecurityExchange_9("EXCHANGE_762719041");
  msg.set(SecurityExchange_9);
  Instrument_9.insert(SecurityExchange_9.getString());
  FIX::SecurityGroup SecurityGroup_9("STRING_805338423");
  msg.set(SecurityGroup_9);
  Instrument_9.insert(SecurityGroup_9.getString());
  FIX::SecurityID SecurityID_9("STRING_97487562");
  msg.set(SecurityID_9);
  Instrument_9.insert(SecurityID_9.getString());
  FIX::SecurityIDSource SecurityIDSource_9("STRING_B");
  msg.set(SecurityIDSource_9);
  Instrument_9.insert(SecurityIDSource_9.getString());
  FIX::SecurityStatus SecurityStatus_9("STRING_1");
  msg.set(SecurityStatus_9);
  Instrument_9.insert(SecurityStatus_9.getString());
  FIX::SecuritySubType SecuritySubType_9("STRING_514771161");
  msg.set(SecuritySubType_9);
  Instrument_9.insert(SecuritySubType_9.getString());
  FIX::SecurityType SecurityType_11("STRING_XLINKD");
  msg.set(SecurityType_11);
  Instrument_9.insert(SecurityType_11.getString());
  FIX::Seniority Seniority_9("STRING_SD");
  msg.set(Seniority_9);
  Instrument_9.insert(Seniority_9.getString());
  FIX::SettlMethod SettlMethod_9('C');
  msg.set(SettlMethod_9);
  Instrument_9.insert(SettlMethod_9.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_9("STRING_1382810362");
  msg.set(SettleOnOpenFlag_9);
  Instrument_9.insert(SettleOnOpenFlag_9.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_9("STRING_357528247");
  msg.set(StateOrProvinceOfIssue_9);
  Instrument_9.insert(StateOrProvinceOfIssue_9.getString());
  FIX::StrikeCurrency StrikeCurrency_9("EUR");
  msg.set(StrikeCurrency_9);
  Instrument_9.insert(StrikeCurrency_9.getString());
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("6339287");
  msg.set(StrikeMultiplier_9);
  Instrument_9.insert(StrikeMultiplier_9.getString());
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("14784875");
  msg.set(StrikePrice_9);
  Instrument_9.insert(StrikePrice_9.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_9(4);
  msg.set(StrikePriceBoundaryMethod_9);
  Instrument_9.insert(StrikePriceBoundaryMethod_9.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("94.360000");
  msg.set(StrikePriceBoundaryPrecision_9);
  Instrument_9.insert(StrikePriceBoundaryPrecision_9.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_9(4);
  msg.set(StrikePriceDeterminationMethod_9);
  Instrument_9.insert(StrikePriceDeterminationMethod_9.getString());
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("20118090");
  msg.set(StrikeValue_9);
  Instrument_9.insert(StrikeValue_9.getString());
  FIX::Symbol Symbol_9("STRING_1608094052");
  msg.set(Symbol_9);
  Instrument_9.insert(Symbol_9.getString());
  FIX::SymbolSfx SymbolSfx_9("STRING_CD");
  msg.set(SymbolSfx_9);
  Instrument_9.insert(SymbolSfx_9.getString());
  FIX::TimeUnit TimeUnit_9("STRING_H");
  msg.set(TimeUnit_9);
  Instrument_9.insert(TimeUnit_9.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_9(3);
  msg.set(UnderlyingPriceDeterminationMethod_9);
  Instrument_9.insert(UnderlyingPriceDeterminationMethod_9.getString());
  FIX::UnitOfMeasure UnitOfMeasure_9("STRING_Gal");
  msg.set(UnitOfMeasure_9);
  Instrument_9.insert(UnitOfMeasure_9.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("17831423");
  msg.set(UnitOfMeasureQty_9);
  Instrument_9.insert(UnitOfMeasureQty_9.getString());
  FIX::ValuationMethod ValuationMethod_9("STRING_CDS");
  msg.set(ValuationMethod_9);
  Instrument_9.insert(ValuationMethod_9.getString());
  all_values.push_back(Instrument_9);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    FIX::ComplexEventCondition ComplexEventCondition_20(2);
    noComplexEvents_0_0.set(ComplexEventCondition_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventCondition_20.getString());
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("20120596");
    noComplexEvents_0_0.set(ComplexEventPrice_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPrice_20.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_20(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryMethod_20.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("80.820000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryPrecision_20.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_20(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceTimeType_20.getString());
    FIX::ComplexEventType ComplexEventType_20(7);
    noComplexEvents_0_0.set(ComplexEventType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventType_20.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("5847556");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexOptPayoutAmount_20.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_20);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      FIX::ComplexEventEndDate ComplexEventEndDate_42(FIX::UTCTIMESTAMP(22, 13, 41, 22, 42012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventEndDate_42.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_42(FIX::UTCTIMESTAMP(11, 2, 40, 14, 32001));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventStartDate_42.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        FIX::ComplexEventEndTime ComplexEventEndTime_78(FIX::UTCTIMEONLY(13, 27, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventEndTime_78.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_78(FIX::UTCTIMEONLY(4, 9, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventStartTime_78.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      FIX::ComplexEventEndDate ComplexEventEndDate_43(FIX::UTCTIMESTAMP(9, 56, 49, 19, 122007));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventEndDate_43.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_43(FIX::UTCTIMESTAMP(15, 59, 36, 20, 62001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventStartDate_43.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        FIX::ComplexEventEndTime ComplexEventEndTime_79(FIX::UTCTIMEONLY(18, 19, 43));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventEndTime_79.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_79(FIX::UTCTIMEONLY(9, 42, 51));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventStartTime_79.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        FIX::ComplexEventEndTime ComplexEventEndTime_80(FIX::UTCTIMEONLY(8, 18, 35));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventEndTime_80.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_80(FIX::UTCTIMEONLY(2, 44, 30));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventStartTime_80.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    FIX::ComplexEventCondition ComplexEventCondition_21(2);
    noComplexEvents_0_1.set(ComplexEventCondition_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventCondition_21.getString());
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("8171971");
    noComplexEvents_0_1.set(ComplexEventPrice_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPrice_21.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_21(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryMethod_21.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("69.780000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryPrecision_21.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_21(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceTimeType_21.getString());
    FIX::ComplexEventType ComplexEventType_21(2);
    noComplexEvents_0_1.set(ComplexEventType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventType_21.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("6708615");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexOptPayoutAmount_21.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_21);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      FIX::ComplexEventEndDate ComplexEventEndDate_44(FIX::UTCTIMESTAMP(19, 23, 37, 5, 82000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventEndDate_44.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_44(FIX::UTCTIMESTAMP(17, 13, 16, 2, 112002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventStartDate_44.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        FIX::ComplexEventEndTime ComplexEventEndTime_81(FIX::UTCTIMEONLY(22, 32, 28));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventEndTime_81.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_81(FIX::UTCTIMEONLY(14, 5, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventStartTime_81.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      FIX::ComplexEventEndDate ComplexEventEndDate_45(FIX::UTCTIMESTAMP(3, 0, 26, 12, 32006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventEndDate_45.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_45(FIX::UTCTIMESTAMP(3, 18, 39, 16, 122008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventStartDate_45.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        FIX::ComplexEventEndTime ComplexEventEndTime_82(FIX::UTCTIMEONLY(7, 28, 35));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventEndTime_82.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_82(FIX::UTCTIMEONLY(19, 26, 3));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventStartTime_82.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    FIX::EventDate EventDate_18("LOCALMKTDATE_1143664156");
    noEvents_0_0.set(EventDate_18);
    EvntGrp_NoEvents_18.insert(EventDate_18.getString());
    FIX::EventPx EventPx_18;
    EventPx_18.setString("15592453");
    noEvents_0_0.set(EventPx_18);
    EvntGrp_NoEvents_18.insert(EventPx_18.getString());
    FIX::EventText EventText_18("STRING_91592393");
    noEvents_0_0.set(EventText_18);
    EvntGrp_NoEvents_18.insert(EventText_18.getString());
    FIX::EventTime EventTime_18(FIX::UTCTIMESTAMP(2, 58, 9, 18, 22015));
    noEvents_0_0.set(EventTime_18);
    EvntGrp_NoEvents_18.insert(EventTime_18.getString());
    FIX::EventType EventType_18(9);
    noEvents_0_0.set(EventType_18);
    EvntGrp_NoEvents_18.insert(EventType_18.getString());
    all_values.push_back(EvntGrp_NoEvents_18);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    FIX::EventDate EventDate_19("LOCALMKTDATE_42810021");
    noEvents_0_1.set(EventDate_19);
    EvntGrp_NoEvents_19.insert(EventDate_19.getString());
    FIX::EventPx EventPx_19;
    EventPx_19.setString("21178142");
    noEvents_0_1.set(EventPx_19);
    EvntGrp_NoEvents_19.insert(EventPx_19.getString());
    FIX::EventText EventText_19("STRING_729182711");
    noEvents_0_1.set(EventText_19);
    EvntGrp_NoEvents_19.insert(EventText_19.getString());
    FIX::EventTime EventTime_19(FIX::UTCTIMESTAMP(6, 29, 7, 11, 52015));
    noEvents_0_1.set(EventTime_19);
    EvntGrp_NoEvents_19.insert(EventTime_19.getString());
    FIX::EventType EventType_19(11);
    noEvents_0_1.set(EventType_19);
    EvntGrp_NoEvents_19.insert(EventType_19.getString());
    all_values.push_back(EvntGrp_NoEvents_19);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_20;
    FIX::EventDate EventDate_20("LOCALMKTDATE_1268109815");
    noEvents_0_2.set(EventDate_20);
    EvntGrp_NoEvents_20.insert(EventDate_20.getString());
    FIX::EventPx EventPx_20;
    EventPx_20.setString("10563076");
    noEvents_0_2.set(EventPx_20);
    EvntGrp_NoEvents_20.insert(EventPx_20.getString());
    FIX::EventText EventText_20("STRING_1723176818");
    noEvents_0_2.set(EventText_20);
    EvntGrp_NoEvents_20.insert(EventText_20.getString());
    FIX::EventTime EventTime_20(FIX::UTCTIMESTAMP(3, 1, 29, 26, 32013));
    noEvents_0_2.set(EventTime_20);
    EvntGrp_NoEvents_20.insert(EventTime_20.getString());
    FIX::EventType EventType_20(3);
    noEvents_0_2.set(EventType_20);
    EvntGrp_NoEvents_20.insert(EventType_20.getString());
    all_values.push_back(EvntGrp_NoEvents_20);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    FIX::InstrumentPartyID InstrumentPartyID_17("STRING_811484525");
    noInstrumentParties_0_0.set(InstrumentPartyID_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyID_17.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_17('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyIDSource_17.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_17(678797117);
    noInstrumentParties_0_0.set(InstrumentPartyRole_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyRole_17.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      FIX::InstrumentPartySubID InstrumentPartySubID_31("STRING_1855806766");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubID_31.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_31(1786414158);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubIDType_31.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    FIX::InstrumentPartyID InstrumentPartyID_18("STRING_993654856");
    noInstrumentParties_0_1.set(InstrumentPartyID_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyID_18.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_18('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyIDSource_18.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_18(1829224179);
    noInstrumentParties_0_1.set(InstrumentPartyRole_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyRole_18.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      FIX::InstrumentPartySubID InstrumentPartySubID_32("STRING_1179781177");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubID_32.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_32(439860847);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubIDType_32.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      FIX::InstrumentPartySubID InstrumentPartySubID_33("STRING_235905882");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubID_33.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_33(329350558);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubIDType_33.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      FIX::InstrumentPartySubID InstrumentPartySubID_34("STRING_756821955");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubID_34.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_34(1931144025);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubIDType_34.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    FIX::SecurityAltID SecurityAltID_20("STRING_1961674092");
    noSecurityAltID_0_0.set(SecurityAltID_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltID_20.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_20("STRING_145399367");
    noSecurityAltID_0_0.set(SecurityAltIDSource_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltIDSource_20.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    FIX::SecurityAltID SecurityAltID_21("STRING_775645122");
    noSecurityAltID_0_1.set(SecurityAltID_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltID_21.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_21("STRING_870498133");
    noSecurityAltID_0_1.set(SecurityAltIDSource_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltIDSource_21.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    FIX::SecurityAltID SecurityAltID_22("STRING_1868576186");
    noSecurityAltID_0_2.set(SecurityAltID_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltID_22.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_22("STRING_1109922585");
    noSecurityAltID_0_2.set(SecurityAltIDSource_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltIDSource_22.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  FIX::SecurityXML SecurityXML_19("XMLDATA_1463840344");
  msg.set(SecurityXML_19);
  FIX::SecurityXMLLen SecurityXMLLen_9(176972599);
  msg.set(SecurityXMLLen_9);
  FIX::SecurityXMLSchema SecurityXMLSchema_9("STRING_723510126");
  msg.set(SecurityXMLSchema_9);
  SecurityXML_18.insert(SecurityXMLSchema_9.getString());
  all_values.push_back(SecurityXML_18);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    FIX::PartyID PartyID_24("STRING_573171165");
    noPartyIDs_0_0.set(PartyID_24);
    Parties_NoPartyIDs_24.insert(PartyID_24.getString());
    FIX::PartyIDSource PartyIDSource_24('D');
    noPartyIDs_0_0.set(PartyIDSource_24);
    Parties_NoPartyIDs_24.insert(PartyIDSource_24.getString());
    FIX::PartyRole PartyRole_24(63);
    noPartyIDs_0_0.set(PartyRole_24);
    Parties_NoPartyIDs_24.insert(PartyRole_24.getString());
    all_values.push_back(Parties_NoPartyIDs_24);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      FIX::PartySubID PartySubID_53("STRING_144762701");
      noPartySubIDs_0_1_0.set(PartySubID_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubID_53.getString());
      FIX::PartySubIDType PartySubIDType_53(27);
      noPartySubIDs_0_1_0.set(PartySubIDType_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubIDType_53.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      FIX::PartySubID PartySubID_54("STRING_1739759241");
      noPartySubIDs_0_1_1.set(PartySubID_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubID_54.getString());
      FIX::PartySubIDType PartySubIDType_54(24);
      noPartySubIDs_0_1_1.set(PartySubIDType_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubIDType_54.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_4("STRING_1378689751");
    noTrades_0_0.set(SecondaryTradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(SecondaryTradeReportID_4.getString());
    FIX::TradeReportID TradeReportID_4("STRING_241524784");
    noTrades_0_0.set(TradeReportID_4);
    TrdCollGrp_NoTrades_4.insert(TradeReportID_4.getString());
    all_values.push_back(TrdCollGrp_NoTrades_4);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_5("STRING_2001241353");
    noTrades_0_1.set(SecondaryTradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(SecondaryTradeReportID_5.getString());
    FIX::TradeReportID TradeReportID_5("STRING_1060430282");
    noTrades_0_1.set(TradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(TradeReportID_5.getString());
    all_values.push_back(TrdCollGrp_NoTrades_5);

    msg.addGroup(noTrades_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_11;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_11("DATA_1033538883");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuer_11.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_11(1500291130);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuerLen_11.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_11("DATA_1441416175");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDesc_11.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_11(1362889441);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDescLen_11.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("1096294");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_11);
    UnderlyingInstrument_11.insert(UnderlyingAdjustedQuantity_11.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("65.520000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_11);
    UnderlyingInstrument_11.insert(UnderlyingAllocationPercent_11.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("47.480000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingAttachmentPoint_11.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_11("STRING_2071303529");
    noUnderlyings_0_0.set(UnderlyingCFICode_11);
    UnderlyingInstrument_11.insert(UnderlyingCFICode_11.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_11("STRING_1370475920");
    noUnderlyings_0_0.set(UnderlyingCPProgram_11);
    UnderlyingInstrument_11.insert(UnderlyingCPProgram_11.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_11("STRING_1646069870");
    noUnderlyings_0_0.set(UnderlyingCPRegType_11);
    UnderlyingInstrument_11.insert(UnderlyingCPRegType_11.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("7943180");
    noUnderlyings_0_0.set(UnderlyingCapValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCapValue_11.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("10915684");
    noUnderlyings_0_0.set(UnderlyingCashAmount_11);
    UnderlyingInstrument_11.insert(UnderlyingCashAmount_11.getString());
    FIX::UnderlyingCashType UnderlyingCashType_11("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_11);
    UnderlyingInstrument_11.insert(UnderlyingCashType_11.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("1106747");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplier_11.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_11(1268541057);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplierUnit_11.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_11("COUNTRY_1332018933");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingCountryOfIssue_11.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_11("LOCALMKTDATE_769343482");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponPaymentDate_11.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("22.230000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponRate_11.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_11("STRING_665297108");
    noUnderlyings_0_0.set(UnderlyingCreditRating_11);
    UnderlyingInstrument_11.insert(UnderlyingCreditRating_11.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_11("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrency_11.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("8100598");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrentValue_11.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("21.560000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingDetachmentPoint_11.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("3474662");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingDirtyPrice_11.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("579297");
    noUnderlyings_0_0.set(UnderlyingEndPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingEndPrice_11.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("12800813");
    noUnderlyings_0_0.set(UnderlyingEndValue_11);
    UnderlyingInstrument_11.insert(UnderlyingEndValue_11.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_11(1726156044);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_11);
    UnderlyingInstrument_11.insert(UnderlyingExerciseStyle_11.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("2994545");
    noUnderlyings_0_0.set(UnderlyingFXRate_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRate_11.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_11('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRateCalc_11.getString());
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("6391026");
    noUnderlyings_0_0.set(UnderlyingFactor_11);
    UnderlyingInstrument_11.insert(UnderlyingFactor_11.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_11(1504964814);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_11);
    UnderlyingInstrument_11.insert(UnderlyingFlowScheduleType_11.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_11("STRING_19894336");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_11);
    UnderlyingInstrument_11.insert(UnderlyingInstrRegistry_11.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_11("LOCALMKTDATE_2139393809");
    noUnderlyings_0_0.set(UnderlyingIssueDate_11);
    UnderlyingInstrument_11.insert(UnderlyingIssueDate_11.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_11("STRING_798897341");
    noUnderlyings_0_0.set(UnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(UnderlyingIssuer_11.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_11("STRING_1382783777");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingLocaleOfIssue_11.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_11("LOCALMKTDATE_101539598");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityDate_11.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_11("MONTHYEAR_2023973894");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityMonthYear_11.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_11("TZTIMEONLY_105724877");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityTime_11.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("94.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_11('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_11);
    UnderlyingInstrument_11.insert(UnderlyingOptAttribute_11.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("47.470000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingOriginalNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_11("STRING_819677494");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasure_11.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("1910509");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasureQty_11.getString());
    FIX::UnderlyingProduct UnderlyingProduct_11(212819906);
    noUnderlyings_0_0.set(UnderlyingProduct_11);
    UnderlyingInstrument_11.insert(UnderlyingProduct_11.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_11(930352206);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_11);
    UnderlyingInstrument_11.insert(UnderlyingPutOrCall_11.getString());
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("14595920");
    noUnderlyings_0_0.set(UnderlyingPx_11);
    UnderlyingInstrument_11.insert(UnderlyingPx_11.getString());
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("15448388");
    noUnderlyings_0_0.set(UnderlyingQty_11);
    UnderlyingInstrument_11.insert(UnderlyingQty_11.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_11("LOCALMKTDATE_1699695688");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_11);
    UnderlyingInstrument_11.insert(UnderlyingRedemptionDate_11.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_11("STRING_1153820608");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingRepoCollateralSecurityType_11.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("23.000000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseRate_11.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_11(1734298076);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseTerm_11.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_11("STRING_1909011308");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_11);
    UnderlyingInstrument_11.insert(UnderlyingRestructuringType_11.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_11("STRING_872712109");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityDesc_11.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_11("EXCHANGE_1463736584");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityExchange_11.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_11("STRING_108993953");
    noUnderlyings_0_0.set(UnderlyingSecurityID_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityID_11.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_11("STRING_930641847");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityIDSource_11.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_11("STRING_596334332");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecuritySubType_11.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_11("STRING_1835149997");
    noUnderlyings_0_0.set(UnderlyingSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityType_11.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_11("STRING_1230096369");
    noUnderlyings_0_0.set(UnderlyingSeniority_11);
    UnderlyingInstrument_11.insert(UnderlyingSeniority_11.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_11("STRING_1730173433");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlMethod_11.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_11(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlementType_11.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("5875775");
    noUnderlyings_0_0.set(UnderlyingStartValue_11);
    UnderlyingInstrument_11.insert(UnderlyingStartValue_11.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_11("STRING_1750067769");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingStateOrProvinceOfIssue_11.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_11("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikeCurrency_11.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("9853678");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikePrice_11.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_11("STRING_420218787");
    noUnderlyings_0_0.set(UnderlyingSymbol_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbol_11.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_11("STRING_1262965123");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbolSfx_11.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_11("STRING_1091092776");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingTimeUnit_11.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_11("STRING_445578267");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasure_11.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("3624476");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasureQty_11.getString());
    all_values.push_back(UnderlyingInstrument_11);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_20("STRING_1265255761");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltID_20.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_20("STRING_553498617");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltIDSource_20.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_21("STRING_908223782");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltID_21.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_21("STRING_48124319");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltIDSource_21.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_22("STRING_2013090650");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltID_22.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_22("STRING_305578973");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltIDSource_22.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      FIX::UnderlyingStipType UnderlyingStipType_17("STRING_1019427611");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipType_17.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_17("STRING_368231273");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipValue_17.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      FIX::UnderlyingStipType UnderlyingStipType_18("STRING_1334634436");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipType_18.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_18("STRING_780955271");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipValue_18.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_20("STRING_650887372");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyID_20.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_20('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyIDSource_20.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_20(24101582);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyRole_20.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_40("STRING_577615573");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubID_40.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_40(1254197951);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubIDType_40.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_21("STRING_829911489");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyID_21.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_21('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyIDSource_21.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_21(1841775486);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyRole_21.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_41("STRING_1223063791");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubID_41.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_41(1080766715);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubIDType_41.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_42("STRING_1417863509");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubID_42.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_42(1643282579);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubIDType_42.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
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
