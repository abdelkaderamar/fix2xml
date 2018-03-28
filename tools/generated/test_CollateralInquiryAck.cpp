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
  multiset<string> CollateralInquiryAck_0;
  FIX::Account Account_4("STRING_891756414");
  msg.set(Account_4);
  CollateralInquiryAck_0.insert(Account_4.getString());
  FIX::AccountType AccountType_3(3);
  msg.set(AccountType_3);
  CollateralInquiryAck_0.insert(AccountType_3.getString());
  FIX::ClOrdID ClOrdID_9("STRING_1613121502");
  msg.set(ClOrdID_9);
  CollateralInquiryAck_0.insert(ClOrdID_9.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_8("LOCALMKTDATE_1164250919");
  msg.set(ClearingBusinessDate_8);
  CollateralInquiryAck_0.insert(ClearingBusinessDate_8.getString());
  FIX::CollInquiryID CollInquiryID_1("STRING_927755134");
  msg.set(CollInquiryID_1);
  CollateralInquiryAck_0.insert(CollInquiryID_1.getString());
  FIX::CollInquiryResult CollInquiryResult_0(4);
  msg.set(CollInquiryResult_0);
  CollateralInquiryAck_0.insert(CollInquiryResult_0.getString());
  FIX::CollInquiryStatus CollInquiryStatus_0(3);
  msg.set(CollInquiryStatus_0);
  CollateralInquiryAck_0.insert(CollInquiryStatus_0.getString());
  FIX::Currency Currency_8("JPY");
  msg.set(Currency_8);
  CollateralInquiryAck_0.insert(Currency_8.getString());
  FIX::EncodedText EncodedText_15("DATA_146541878");
  msg.set(EncodedText_15);
  CollateralInquiryAck_0.insert(EncodedText_15.getString());
  FIX::EncodedTextLen EncodedTextLen_15(53969136);
  msg.set(EncodedTextLen_15);
  CollateralInquiryAck_0.insert(EncodedTextLen_15.getString());
  FIX::OrderID OrderID_9("STRING_585039445");
  msg.set(OrderID_9);
  CollateralInquiryAck_0.insert(OrderID_9.getString());
  FIX::QtyType QtyType_6(0);
  msg.set(QtyType_6);
  CollateralInquiryAck_0.insert(QtyType_6.getString());
  FIX::Quantity Quantity_7;
  Quantity_7.setString("12881151");
  msg.set(Quantity_7);
  CollateralInquiryAck_0.insert(Quantity_7.getString());
  FIX::ResponseDestination ResponseDestination_1("STRING_132328468");
  msg.set(ResponseDestination_1);
  CollateralInquiryAck_0.insert(ResponseDestination_1.getString());
  FIX::ResponseTransportType ResponseTransportType_1(1);
  msg.set(ResponseTransportType_1);
  CollateralInquiryAck_0.insert(ResponseTransportType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_9("STRING_648982454");
  msg.set(SecondaryClOrdID_9);
  CollateralInquiryAck_0.insert(SecondaryClOrdID_9.getString());
  FIX::SecondaryOrderID SecondaryOrderID_9("STRING_2023979156");
  msg.set(SecondaryOrderID_9);
  CollateralInquiryAck_0.insert(SecondaryOrderID_9.getString());
  FIX::SettlDate SettlDate_7("LOCALMKTDATE_1143129928");
  msg.set(SettlDate_7);
  CollateralInquiryAck_0.insert(SettlDate_7.getString());
  FIX::SettlSessID SettlSessID_4("STRING_EOD");
  msg.set(SettlSessID_4);
  CollateralInquiryAck_0.insert(SettlSessID_4.getString());
  FIX::SettlSessSubID SettlSessSubID_3("STRING_1934343142");
  msg.set(SettlSessSubID_3);
  CollateralInquiryAck_0.insert(SettlSessSubID_3.getString());
  FIX::Text Text_15("STRING_2100893808");
  msg.set(Text_15);
  CollateralInquiryAck_0.insert(Text_15.getString());
  FIX::TotNumReports TotNumReports_0(1743716829);
  msg.set(TotNumReports_0);
  CollateralInquiryAck_0.insert(TotNumReports_0.getString());
  FIX::TradingSessionID TradingSessionID_8("STRING_2");
  msg.set(TradingSessionID_8);
  CollateralInquiryAck_0.insert(TradingSessionID_8.getString());
  FIX::TradingSessionSubID TradingSessionSubID_8("STRING_5");
  msg.set(TradingSessionSubID_8);
  CollateralInquiryAck_0.insert(TradingSessionSubID_8.getString());
  all_values.push_back(CollateralInquiryAck_0);

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    FIX::CollInquiryQualifier CollInquiryQualifier_1(1);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_1);
    CollInqQualGrp_NoCollInquiryQualifier_1.insert(CollInquiryQualifier_1.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    FIX::ExecID ExecID_9("STRING_1607397629");
    noExecs_0_0.set(ExecID_9);
    ExecCollGrp_NoExecs_3.insert(ExecID_9.getString());
    all_values.push_back(ExecCollGrp_NoExecs_3);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    FIX::ExecID ExecID_10("STRING_455679783");
    noExecs_0_1.set(ExecID_10);
    ExecCollGrp_NoExecs_4.insert(ExecID_10.getString());
    all_values.push_back(ExecCollGrp_NoExecs_4);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  FIX::AgreementCurrency AgreementCurrency_5("JPY");
  msg.set(AgreementCurrency_5);
  FinancingDetails_5.insert(AgreementCurrency_5.getString());
  FIX::AgreementDate AgreementDate_5("LOCALMKTDATE_876971327");
  msg.set(AgreementDate_5);
  FinancingDetails_5.insert(AgreementDate_5.getString());
  FIX::AgreementDesc AgreementDesc_5("STRING_1603086076");
  msg.set(AgreementDesc_5);
  FinancingDetails_5.insert(AgreementDesc_5.getString());
  FIX::AgreementID AgreementID_5("STRING_1515921315");
  msg.set(AgreementID_5);
  FinancingDetails_5.insert(AgreementID_5.getString());
  FIX::DeliveryType DeliveryType_5(2);
  msg.set(DeliveryType_5);
  FinancingDetails_5.insert(DeliveryType_5.getString());
  FIX::EndDate EndDate_5("LOCALMKTDATE_407734118");
  msg.set(EndDate_5);
  FinancingDetails_5.insert(EndDate_5.getString());
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("70.950000");
  msg.set(MarginRatio_5);
  FinancingDetails_5.insert(MarginRatio_5.getString());
  FIX::StartDate StartDate_5("LOCALMKTDATE_767774252");
  msg.set(StartDate_5);
  FinancingDetails_5.insert(StartDate_5.getString());
  FIX::TerminationType TerminationType_5(3);
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
    FIX::EncodedLegIssuer EncodedLegIssuer_13("DATA_821743388");
    noLegs_0_0.set(EncodedLegIssuer_13);
    InstrumentLeg_13.insert(EncodedLegIssuer_13.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_13(1386907747);
    noLegs_0_0.set(EncodedLegIssuerLen_13);
    InstrumentLeg_13.insert(EncodedLegIssuerLen_13.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_13("DATA_1625272842");
    noLegs_0_0.set(EncodedLegSecurityDesc_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDesc_13.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_13(2109858528);
    noLegs_0_0.set(EncodedLegSecurityDescLen_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDescLen_13.getString());
    FIX::LegCFICode LegCFICode_13("STRING_1519236215");
    noLegs_0_0.set(LegCFICode_13);
    InstrumentLeg_13.insert(LegCFICode_13.getString());
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("17312477");
    noLegs_0_0.set(LegContractMultiplier_13);
    InstrumentLeg_13.insert(LegContractMultiplier_13.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_13(611357334);
    noLegs_0_0.set(LegContractMultiplierUnit_13);
    InstrumentLeg_13.insert(LegContractMultiplierUnit_13.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_13("MONTHYEAR_1395731724");
    noLegs_0_0.set(LegContractSettlMonth_13);
    InstrumentLeg_13.insert(LegContractSettlMonth_13.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_13("COUNTRY_726893980");
    noLegs_0_0.set(LegCountryOfIssue_13);
    InstrumentLeg_13.insert(LegCountryOfIssue_13.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_13("LOCALMKTDATE_1255352397");
    noLegs_0_0.set(LegCouponPaymentDate_13);
    InstrumentLeg_13.insert(LegCouponPaymentDate_13.getString());
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("12.180000");
    noLegs_0_0.set(LegCouponRate_13);
    InstrumentLeg_13.insert(LegCouponRate_13.getString());
    FIX::LegCreditRating LegCreditRating_13("STRING_680304140");
    noLegs_0_0.set(LegCreditRating_13);
    InstrumentLeg_13.insert(LegCreditRating_13.getString());
    FIX::LegCurrency LegCurrency_13("CHF");
    noLegs_0_0.set(LegCurrency_13);
    InstrumentLeg_13.insert(LegCurrency_13.getString());
    FIX::LegDatedDate LegDatedDate_13("LOCALMKTDATE_1171426244");
    noLegs_0_0.set(LegDatedDate_13);
    InstrumentLeg_13.insert(LegDatedDate_13.getString());
    FIX::LegExerciseStyle LegExerciseStyle_13(52368501);
    noLegs_0_0.set(LegExerciseStyle_13);
    InstrumentLeg_13.insert(LegExerciseStyle_13.getString());
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("1034361");
    noLegs_0_0.set(LegFactor_13);
    InstrumentLeg_13.insert(LegFactor_13.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_13(46793125);
    noLegs_0_0.set(LegFlowScheduleType_13);
    InstrumentLeg_13.insert(LegFlowScheduleType_13.getString());
    FIX::LegInstrRegistry LegInstrRegistry_13("STRING_1659766130");
    noLegs_0_0.set(LegInstrRegistry_13);
    InstrumentLeg_13.insert(LegInstrRegistry_13.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_13("LOCALMKTDATE_559115885");
    noLegs_0_0.set(LegInterestAccrualDate_13);
    InstrumentLeg_13.insert(LegInterestAccrualDate_13.getString());
    FIX::LegIssueDate LegIssueDate_13("LOCALMKTDATE_36757699");
    noLegs_0_0.set(LegIssueDate_13);
    InstrumentLeg_13.insert(LegIssueDate_13.getString());
    FIX::LegIssuer LegIssuer_13("STRING_2011436526");
    noLegs_0_0.set(LegIssuer_13);
    InstrumentLeg_13.insert(LegIssuer_13.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_13("STRING_1436087213");
    noLegs_0_0.set(LegLocaleOfIssue_13);
    InstrumentLeg_13.insert(LegLocaleOfIssue_13.getString());
    FIX::LegMaturityDate LegMaturityDate_13("LOCALMKTDATE_1639843775");
    noLegs_0_0.set(LegMaturityDate_13);
    InstrumentLeg_13.insert(LegMaturityDate_13.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_13("MONTHYEAR_1379874193");
    noLegs_0_0.set(LegMaturityMonthYear_13);
    InstrumentLeg_13.insert(LegMaturityMonthYear_13.getString());
    FIX::LegMaturityTime LegMaturityTime_13("TZTIMEONLY_1093330027");
    noLegs_0_0.set(LegMaturityTime_13);
    InstrumentLeg_13.insert(LegMaturityTime_13.getString());
    FIX::LegOptAttribute LegOptAttribute_13('2');
    noLegs_0_0.set(LegOptAttribute_13);
    InstrumentLeg_13.insert(LegOptAttribute_13.getString());
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("119476");
    noLegs_0_0.set(LegOptionRatio_13);
    InstrumentLeg_13.insert(LegOptionRatio_13.getString());
    FIX::LegPool LegPool_13("STRING_1861104279");
    noLegs_0_0.set(LegPool_13);
    InstrumentLeg_13.insert(LegPool_13.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_13("STRING_701962547");
    noLegs_0_0.set(LegPriceUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasure_13.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("9380466");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasureQty_13.getString());
    FIX::LegProduct LegProduct_13(535364020);
    noLegs_0_0.set(LegProduct_13);
    InstrumentLeg_13.insert(LegProduct_13.getString());
    FIX::LegPutOrCall LegPutOrCall_13(2088870294);
    noLegs_0_0.set(LegPutOrCall_13);
    InstrumentLeg_13.insert(LegPutOrCall_13.getString());
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("4158358");
    noLegs_0_0.set(LegRatioQty_13);
    InstrumentLeg_13.insert(LegRatioQty_13.getString());
    FIX::LegRedemptionDate LegRedemptionDate_13("LOCALMKTDATE_497738900");
    noLegs_0_0.set(LegRedemptionDate_13);
    InstrumentLeg_13.insert(LegRedemptionDate_13.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_13("STRING_1460622862");
    noLegs_0_0.set(LegRepoCollateralSecurityType_13);
    InstrumentLeg_13.insert(LegRepoCollateralSecurityType_13.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("35.090000");
    noLegs_0_0.set(LegRepurchaseRate_13);
    InstrumentLeg_13.insert(LegRepurchaseRate_13.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_13(1109096234);
    noLegs_0_0.set(LegRepurchaseTerm_13);
    InstrumentLeg_13.insert(LegRepurchaseTerm_13.getString());
    FIX::LegSecurityDesc LegSecurityDesc_13("STRING_708870938");
    noLegs_0_0.set(LegSecurityDesc_13);
    InstrumentLeg_13.insert(LegSecurityDesc_13.getString());
    FIX::LegSecurityExchange LegSecurityExchange_13("EXCHANGE_726493841");
    noLegs_0_0.set(LegSecurityExchange_13);
    InstrumentLeg_13.insert(LegSecurityExchange_13.getString());
    FIX::LegSecurityID LegSecurityID_13("STRING_216964984");
    noLegs_0_0.set(LegSecurityID_13);
    InstrumentLeg_13.insert(LegSecurityID_13.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_13("STRING_1891462156");
    noLegs_0_0.set(LegSecurityIDSource_13);
    InstrumentLeg_13.insert(LegSecurityIDSource_13.getString());
    FIX::LegSecuritySubType LegSecuritySubType_13("STRING_1406797981");
    noLegs_0_0.set(LegSecuritySubType_13);
    InstrumentLeg_13.insert(LegSecuritySubType_13.getString());
    FIX::LegSecurityType LegSecurityType_13("STRING_1068550562");
    noLegs_0_0.set(LegSecurityType_13);
    InstrumentLeg_13.insert(LegSecurityType_13.getString());
    FIX::LegSide LegSide_13('1');
    noLegs_0_0.set(LegSide_13);
    InstrumentLeg_13.insert(LegSide_13.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_13("STRING_430740578");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_13);
    InstrumentLeg_13.insert(LegStateOrProvinceOfIssue_13.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_13("EUR");
    noLegs_0_0.set(LegStrikeCurrency_13);
    InstrumentLeg_13.insert(LegStrikeCurrency_13.getString());
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("4775337");
    noLegs_0_0.set(LegStrikePrice_13);
    InstrumentLeg_13.insert(LegStrikePrice_13.getString());
    FIX::LegSymbol LegSymbol_13("STRING_633201546");
    noLegs_0_0.set(LegSymbol_13);
    InstrumentLeg_13.insert(LegSymbol_13.getString());
    FIX::LegSymbolSfx LegSymbolSfx_13("STRING_360397828");
    noLegs_0_0.set(LegSymbolSfx_13);
    InstrumentLeg_13.insert(LegSymbolSfx_13.getString());
    FIX::LegTimeUnit LegTimeUnit_13("STRING_514291403");
    noLegs_0_0.set(LegTimeUnit_13);
    InstrumentLeg_13.insert(LegTimeUnit_13.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_13("STRING_497154424");
    noLegs_0_0.set(LegUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegUnitOfMeasure_13.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("17964850");
    noLegs_0_0.set(LegUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegUnitOfMeasureQty_13.getString());
    all_values.push_back(InstrumentLeg_13);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      FIX::LegSecurityAltID LegSecurityAltID_22("STRING_1877028618");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltID_22.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_22("STRING_742331420");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltIDSource_22.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      FIX::LegSecurityAltID LegSecurityAltID_23("STRING_2054229424");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltID_23.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_23("STRING_1888976259");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltIDSource_23.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      FIX::LegSecurityAltID LegSecurityAltID_24("STRING_455952052");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltID_24.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_24("STRING_608708323");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltIDSource_24.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("92.260000");
  msg.set(AttachmentPoint_10);
  Instrument_10.insert(AttachmentPoint_10.getString());
  FIX::CFICode CFICode_10("STRING_991316072");
  msg.set(CFICode_10);
  Instrument_10.insert(CFICode_10.getString());
  FIX::CPProgram CPProgram_10(1);
  msg.set(CPProgram_10);
  Instrument_10.insert(CPProgram_10.getString());
  FIX::CPRegType CPRegType_10("STRING_1095375035");
  msg.set(CPRegType_10);
  Instrument_10.insert(CPRegType_10.getString());
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("14890549");
  msg.set(CapPrice_10);
  Instrument_10.insert(CapPrice_10.getString());
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("20107178");
  msg.set(ContractMultiplier_10);
  Instrument_10.insert(ContractMultiplier_10.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_10(1);
  msg.set(ContractMultiplierUnit_10);
  Instrument_10.insert(ContractMultiplierUnit_10.getString());
  FIX::ContractSettlMonth ContractSettlMonth_10("MONTHYEAR_450667558");
  msg.set(ContractSettlMonth_10);
  Instrument_10.insert(ContractSettlMonth_10.getString());
  FIX::CountryOfIssue CountryOfIssue_10("COUNTRY_572105122");
  msg.set(CountryOfIssue_10);
  Instrument_10.insert(CountryOfIssue_10.getString());
  FIX::CouponPaymentDate CouponPaymentDate_10("LOCALMKTDATE_1821468738");
  msg.set(CouponPaymentDate_10);
  Instrument_10.insert(CouponPaymentDate_10.getString());
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("25.420000");
  msg.set(CouponRate_10);
  Instrument_10.insert(CouponRate_10.getString());
  FIX::CreditRating CreditRating_10("STRING_316083630");
  msg.set(CreditRating_10);
  Instrument_10.insert(CreditRating_10.getString());
  FIX::DatedDate DatedDate_10("LOCALMKTDATE_1080783072");
  msg.set(DatedDate_10);
  Instrument_10.insert(DatedDate_10.getString());
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("31.050000");
  msg.set(DetachmentPoint_10);
  Instrument_10.insert(DetachmentPoint_10.getString());
  FIX::EncodedIssuer EncodedIssuer_10("DATA_13929471");
  msg.set(EncodedIssuer_10);
  Instrument_10.insert(EncodedIssuer_10.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_10(1511523650);
  msg.set(EncodedIssuerLen_10);
  Instrument_10.insert(EncodedIssuerLen_10.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_10("DATA_709618520");
  msg.set(EncodedSecurityDesc_10);
  Instrument_10.insert(EncodedSecurityDesc_10.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_10(1962695062);
  msg.set(EncodedSecurityDescLen_10);
  Instrument_10.insert(EncodedSecurityDescLen_10.getString());
  FIX::ExerciseStyle ExerciseStyle_10(2);
  msg.set(ExerciseStyle_10);
  Instrument_10.insert(ExerciseStyle_10.getString());
  FIX::Factor Factor_10;
  Factor_10.setString("13428200");
  msg.set(Factor_10);
  Instrument_10.insert(Factor_10.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_10(true);
  msg.set(FlexProductEligibilityIndicator_10);
  Instrument_10.insert(FlexProductEligibilityIndicator_10.getString());
  FIX::FlexibleIndicator FlexibleIndicator_10(true);
  msg.set(FlexibleIndicator_10);
  Instrument_10.insert(FlexibleIndicator_10.getString());
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("18399744");
  msg.set(FloorPrice_10);
  Instrument_10.insert(FloorPrice_10.getString());
  FIX::FlowScheduleType FlowScheduleType_10(4);
  msg.set(FlowScheduleType_10);
  Instrument_10.insert(FlowScheduleType_10.getString());
  FIX::InstrRegistry InstrRegistry_10("STRING_362516639");
  msg.set(InstrRegistry_10);
  Instrument_10.insert(InstrRegistry_10.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_10('1');
  msg.set(InstrmtAssignmentMethod_10);
  Instrument_10.insert(InstrmtAssignmentMethod_10.getString());
  FIX::InterestAccrualDate InterestAccrualDate_10("LOCALMKTDATE_566942056");
  msg.set(InterestAccrualDate_10);
  Instrument_10.insert(InterestAccrualDate_10.getString());
  FIX::IssueDate IssueDate_10("LOCALMKTDATE_269262415");
  msg.set(IssueDate_10);
  Instrument_10.insert(IssueDate_10.getString());
  FIX::Issuer Issuer_10("STRING_1311012072");
  msg.set(Issuer_10);
  Instrument_10.insert(Issuer_10.getString());
  FIX::ListMethod ListMethod_10(0);
  msg.set(ListMethod_10);
  Instrument_10.insert(ListMethod_10.getString());
  FIX::LocaleOfIssue LocaleOfIssue_10("STRING_877970738");
  msg.set(LocaleOfIssue_10);
  Instrument_10.insert(LocaleOfIssue_10.getString());
  FIX::MaturityDate MaturityDate_10("LOCALMKTDATE_1990551298");
  msg.set(MaturityDate_10);
  Instrument_10.insert(MaturityDate_10.getString());
  FIX::MaturityMonthYear MaturityMonthYear_10("MONTHYEAR_2014210180");
  msg.set(MaturityMonthYear_10);
  Instrument_10.insert(MaturityMonthYear_10.getString());
  FIX::MaturityTime MaturityTime_10("TZTIMEONLY_1428065708");
  msg.set(MaturityTime_10);
  Instrument_10.insert(MaturityTime_10.getString());
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("9384426");
  msg.set(MinPriceIncrement_10);
  Instrument_10.insert(MinPriceIncrement_10.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("13557815");
  msg.set(MinPriceIncrementAmount_10);
  Instrument_10.insert(MinPriceIncrementAmount_10.getString());
  FIX::NTPositionLimit NTPositionLimit_10(1291299892);
  msg.set(NTPositionLimit_10);
  Instrument_10.insert(NTPositionLimit_10.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("75.820000");
  msg.set(NotionalPercentageOutstanding_10);
  Instrument_10.insert(NotionalPercentageOutstanding_10.getString());
  FIX::OptAttribute OptAttribute_10('1');
  msg.set(OptAttribute_10);
  Instrument_10.insert(OptAttribute_10.getString());
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("18634050");
  msg.set(OptPayoutAmount_10);
  Instrument_10.insert(OptPayoutAmount_10.getString());
  FIX::OptPayoutType OptPayoutType_10(2);
  msg.set(OptPayoutType_10);
  Instrument_10.insert(OptPayoutType_10.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("79.570000");
  msg.set(OriginalNotionalPercentageOutstanding_10);
  Instrument_10.insert(OriginalNotionalPercentageOutstanding_10.getString());
  FIX::Pool Pool_10("STRING_32004996");
  msg.set(Pool_10);
  Instrument_10.insert(Pool_10.getString());
  FIX::PositionLimit PositionLimit_10(640702097);
  msg.set(PositionLimit_10);
  Instrument_10.insert(PositionLimit_10.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_10("STRING_INT");
  msg.set(PriceQuoteMethod_10);
  Instrument_10.insert(PriceQuoteMethod_10.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_10("STRING_45934467");
  msg.set(PriceUnitOfMeasure_10);
  Instrument_10.insert(PriceUnitOfMeasure_10.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("47420");
  msg.set(PriceUnitOfMeasureQty_10);
  Instrument_10.insert(PriceUnitOfMeasureQty_10.getString());
  FIX::Product Product_12(8);
  msg.set(Product_12);
  Instrument_10.insert(Product_12.getString());
  FIX::ProductComplex ProductComplex_10("STRING_2008629529");
  msg.set(ProductComplex_10);
  Instrument_10.insert(ProductComplex_10.getString());
  FIX::PutOrCall PutOrCall_10(0);
  msg.set(PutOrCall_10);
  Instrument_10.insert(PutOrCall_10.getString());
  FIX::RedemptionDate RedemptionDate_10("LOCALMKTDATE_1967736001");
  msg.set(RedemptionDate_10);
  Instrument_10.insert(RedemptionDate_10.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_10("STRING_36755124");
  msg.set(RepoCollateralSecurityType_10);
  Instrument_10.insert(RepoCollateralSecurityType_10.getString());
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("9.130000");
  msg.set(RepurchaseRate_10);
  Instrument_10.insert(RepurchaseRate_10.getString());
  FIX::RepurchaseTerm RepurchaseTerm_10(1660226844);
  msg.set(RepurchaseTerm_10);
  Instrument_10.insert(RepurchaseTerm_10.getString());
  FIX::RestructuringType RestructuringType_10("STRING_FR");
  msg.set(RestructuringType_10);
  Instrument_10.insert(RestructuringType_10.getString());
  FIX::SecurityDesc SecurityDesc_10("STRING_564697552");
  msg.set(SecurityDesc_10);
  Instrument_10.insert(SecurityDesc_10.getString());
  FIX::SecurityExchange SecurityExchange_10("EXCHANGE_1082262657");
  msg.set(SecurityExchange_10);
  Instrument_10.insert(SecurityExchange_10.getString());
  FIX::SecurityGroup SecurityGroup_10("STRING_428307816");
  msg.set(SecurityGroup_10);
  Instrument_10.insert(SecurityGroup_10.getString());
  FIX::SecurityID SecurityID_10("STRING_833959967");
  msg.set(SecurityID_10);
  Instrument_10.insert(SecurityID_10.getString());
  FIX::SecurityIDSource SecurityIDSource_10("STRING_K");
  msg.set(SecurityIDSource_10);
  Instrument_10.insert(SecurityIDSource_10.getString());
  FIX::SecurityStatus SecurityStatus_10("STRING_2");
  msg.set(SecurityStatus_10);
  Instrument_10.insert(SecurityStatus_10.getString());
  FIX::SecuritySubType SecuritySubType_10("STRING_1711930705");
  msg.set(SecuritySubType_10);
  Instrument_10.insert(SecuritySubType_10.getString());
  FIX::SecurityType SecurityType_12("STRING_EUCORP");
  msg.set(SecurityType_12);
  Instrument_10.insert(SecurityType_12.getString());
  FIX::Seniority Seniority_10("STRING_SB");
  msg.set(Seniority_10);
  Instrument_10.insert(Seniority_10.getString());
  FIX::SettlMethod SettlMethod_10('C');
  msg.set(SettlMethod_10);
  Instrument_10.insert(SettlMethod_10.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_10("STRING_1027301417");
  msg.set(SettleOnOpenFlag_10);
  Instrument_10.insert(SettleOnOpenFlag_10.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_10("STRING_526226314");
  msg.set(StateOrProvinceOfIssue_10);
  Instrument_10.insert(StateOrProvinceOfIssue_10.getString());
  FIX::StrikeCurrency StrikeCurrency_10("CAN");
  msg.set(StrikeCurrency_10);
  Instrument_10.insert(StrikeCurrency_10.getString());
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("1851917");
  msg.set(StrikeMultiplier_10);
  Instrument_10.insert(StrikeMultiplier_10.getString());
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("19997340");
  msg.set(StrikePrice_10);
  Instrument_10.insert(StrikePrice_10.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_10(2);
  msg.set(StrikePriceBoundaryMethod_10);
  Instrument_10.insert(StrikePriceBoundaryMethod_10.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("96.860000");
  msg.set(StrikePriceBoundaryPrecision_10);
  Instrument_10.insert(StrikePriceBoundaryPrecision_10.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_10(2);
  msg.set(StrikePriceDeterminationMethod_10);
  Instrument_10.insert(StrikePriceDeterminationMethod_10.getString());
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("11138564");
  msg.set(StrikeValue_10);
  Instrument_10.insert(StrikeValue_10.getString());
  FIX::Symbol Symbol_10("STRING_427087101");
  msg.set(Symbol_10);
  Instrument_10.insert(Symbol_10.getString());
  FIX::SymbolSfx SymbolSfx_10("STRING_WI");
  msg.set(SymbolSfx_10);
  Instrument_10.insert(SymbolSfx_10.getString());
  FIX::TimeUnit TimeUnit_10("STRING_H");
  msg.set(TimeUnit_10);
  Instrument_10.insert(TimeUnit_10.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_10(1);
  msg.set(UnderlyingPriceDeterminationMethod_10);
  Instrument_10.insert(UnderlyingPriceDeterminationMethod_10.getString());
  FIX::UnitOfMeasure UnitOfMeasure_10("STRING_Gal");
  msg.set(UnitOfMeasure_10);
  Instrument_10.insert(UnitOfMeasure_10.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("9649143");
  msg.set(UnitOfMeasureQty_10);
  Instrument_10.insert(UnitOfMeasureQty_10.getString());
  FIX::ValuationMethod ValuationMethod_10("STRING_CDSD");
  msg.set(ValuationMethod_10);
  Instrument_10.insert(ValuationMethod_10.getString());
  all_values.push_back(Instrument_10);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    FIX::ComplexEventCondition ComplexEventCondition_18(1);
    noComplexEvents_0_0.set(ComplexEventCondition_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventCondition_18.getString());
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("3849985");
    noComplexEvents_0_0.set(ComplexEventPrice_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPrice_18.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_18(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryMethod_18.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("28.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryPrecision_18.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_18(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceTimeType_18.getString());
    FIX::ComplexEventType ComplexEventType_18(9);
    noComplexEvents_0_0.set(ComplexEventType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventType_18.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("4182691");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexOptPayoutAmount_18.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_18);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      FIX::ComplexEventEndDate ComplexEventEndDate_29(FIX::UTCTIMESTAMP(18, 56, 17, 16, 6, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventEndDate_29.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_29(FIX::UTCTIMESTAMP(17, 40, 52, 25, 12, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventStartDate_29.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        FIX::ComplexEventEndTime ComplexEventEndTime_55(FIX::UTCTIMEONLY(18, 23, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventEndTime_55.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_55(FIX::UTCTIMEONLY(16, 37, 35));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventStartTime_55.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        FIX::ComplexEventEndTime ComplexEventEndTime_56(FIX::UTCTIMEONLY(7, 22, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventEndTime_56.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_56(FIX::UTCTIMEONLY(9, 25, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventStartTime_56.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        FIX::ComplexEventEndTime ComplexEventEndTime_57(FIX::UTCTIMEONLY(0, 32, 2));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventEndTime_57.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_57(FIX::UTCTIMEONLY(2, 54, 15));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventStartTime_57.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      FIX::ComplexEventEndDate ComplexEventEndDate_30(FIX::UTCTIMESTAMP(2, 59, 12, 1, 10, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventEndDate_30.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_30(FIX::UTCTIMESTAMP(19, 27, 53, 4, 8, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventStartDate_30.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        FIX::ComplexEventEndTime ComplexEventEndTime_58(FIX::UTCTIMEONLY(2, 50, 26));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventEndTime_58.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_58(FIX::UTCTIMEONLY(23, 44, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventStartTime_58.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        FIX::ComplexEventEndTime ComplexEventEndTime_59(FIX::UTCTIMEONLY(12, 2, 22));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventEndTime_59.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_59(FIX::UTCTIMEONLY(8, 8, 48));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventStartTime_59.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      FIX::ComplexEventEndDate ComplexEventEndDate_31(FIX::UTCTIMESTAMP(11, 39, 23, 8, 1, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventEndDate_31.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_31(FIX::UTCTIMESTAMP(12, 54, 31, 8, 2, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventStartDate_31.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        FIX::ComplexEventEndTime ComplexEventEndTime_60(FIX::UTCTIMEONLY(21, 2, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventEndTime_60.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_60(FIX::UTCTIMEONLY(5, 54, 32));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventStartTime_60.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    FIX::ComplexEventCondition ComplexEventCondition_19(2);
    noComplexEvents_0_1.set(ComplexEventCondition_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventCondition_19.getString());
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("20860075");
    noComplexEvents_0_1.set(ComplexEventPrice_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPrice_19.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_19(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryMethod_19.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("82.640000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryPrecision_19.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_19(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceTimeType_19.getString());
    FIX::ComplexEventType ComplexEventType_19(7);
    noComplexEvents_0_1.set(ComplexEventType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventType_19.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("7047321");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexOptPayoutAmount_19.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_19);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      FIX::ComplexEventEndDate ComplexEventEndDate_32(FIX::UTCTIMESTAMP(19, 46, 40, 8, 3, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventEndDate_32.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_32(FIX::UTCTIMESTAMP(14, 1, 57, 11, 8, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventStartDate_32.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        FIX::ComplexEventEndTime ComplexEventEndTime_61(FIX::UTCTIMEONLY(1, 2, 40));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventEndTime_61.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_61(FIX::UTCTIMEONLY(23, 26, 35));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventStartTime_61.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        FIX::ComplexEventEndTime ComplexEventEndTime_62(FIX::UTCTIMEONLY(0, 9, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventEndTime_62.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_62(FIX::UTCTIMEONLY(7, 5, 37));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventStartTime_62.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    FIX::EventDate EventDate_19("LOCALMKTDATE_1165380877");
    noEvents_0_0.set(EventDate_19);
    EvntGrp_NoEvents_19.insert(EventDate_19.getString());
    FIX::EventPx EventPx_19;
    EventPx_19.setString("9212184");
    noEvents_0_0.set(EventPx_19);
    EvntGrp_NoEvents_19.insert(EventPx_19.getString());
    FIX::EventText EventText_19("STRING_476733777");
    noEvents_0_0.set(EventText_19);
    EvntGrp_NoEvents_19.insert(EventText_19.getString());
    FIX::EventTime EventTime_19(FIX::UTCTIMESTAMP(2, 4, 7, 0, 11, 2004));
    noEvents_0_0.set(EventTime_19);
    EvntGrp_NoEvents_19.insert(EventTime_19.getString());
    FIX::EventType EventType_19(16);
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
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    FIX::InstrumentPartyID InstrumentPartyID_21("STRING_1299803996");
    noInstrumentParties_0_0.set(InstrumentPartyID_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyID_21.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_21('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyIDSource_21.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_21(1230024435);
    noInstrumentParties_0_0.set(InstrumentPartyRole_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyRole_21.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      FIX::InstrumentPartySubID InstrumentPartySubID_38("STRING_169344609");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubID_38.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_38(2037176156);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubIDType_38.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    FIX::SecurityAltID SecurityAltID_21("STRING_282685112");
    noSecurityAltID_0_0.set(SecurityAltID_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltID_21.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_21("STRING_98424734");
    noSecurityAltID_0_0.set(SecurityAltIDSource_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltIDSource_21.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    FIX::SecurityAltID SecurityAltID_22("STRING_1807412188");
    noSecurityAltID_0_1.set(SecurityAltID_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltID_22.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_22("STRING_546575257");
    noSecurityAltID_0_1.set(SecurityAltIDSource_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltIDSource_22.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    FIX::SecurityAltID SecurityAltID_23("STRING_245680887");
    noSecurityAltID_0_2.set(SecurityAltID_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltID_23.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_23("STRING_1740705630");
    noSecurityAltID_0_2.set(SecurityAltIDSource_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltIDSource_23.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  FIX::SecurityXML SecurityXML_21("XMLDATA_422390018");
  msg.set(SecurityXML_21);
  FIX::SecurityXMLLen SecurityXMLLen_10(1819060266);
  msg.set(SecurityXMLLen_10);
  FIX::SecurityXMLSchema SecurityXMLSchema_10("STRING_678408869");
  msg.set(SecurityXMLSchema_10);
  SecurityXML_20.insert(SecurityXMLSchema_10.getString());
  all_values.push_back(SecurityXML_20);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    FIX::PartyID PartyID_23("STRING_1925925103");
    noPartyIDs_0_0.set(PartyID_23);
    Parties_NoPartyIDs_23.insert(PartyID_23.getString());
    FIX::PartyIDSource PartyIDSource_23('A');
    noPartyIDs_0_0.set(PartyIDSource_23);
    Parties_NoPartyIDs_23.insert(PartyIDSource_23.getString());
    FIX::PartyRole PartyRole_23(14);
    noPartyIDs_0_0.set(PartyRole_23);
    Parties_NoPartyIDs_23.insert(PartyRole_23.getString());
    all_values.push_back(Parties_NoPartyIDs_23);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      FIX::PartySubID PartySubID_44("STRING_609454783");
      noPartySubIDs_0_1_0.set(PartySubID_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubID_44.getString());
      FIX::PartySubIDType PartySubIDType_44(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubIDType_44.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      FIX::PartySubID PartySubID_45("STRING_251417");
      noPartySubIDs_0_1_1.set(PartySubID_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubID_45.getString());
      FIX::PartySubIDType PartySubIDType_45(1);
      noPartySubIDs_0_1_1.set(PartySubIDType_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubIDType_45.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      FIX::PartySubID PartySubID_46("STRING_1175843453");
      noPartySubIDs_0_1_2.set(PartySubID_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubID_46.getString());
      FIX::PartySubIDType PartySubIDType_46(19);
      noPartySubIDs_0_1_2.set(PartySubIDType_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubIDType_46.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    FIX::PartyID PartyID_24("STRING_357118709");
    noPartyIDs_0_1.set(PartyID_24);
    Parties_NoPartyIDs_24.insert(PartyID_24.getString());
    FIX::PartyIDSource PartyIDSource_24('3');
    noPartyIDs_0_1.set(PartyIDSource_24);
    Parties_NoPartyIDs_24.insert(PartyIDSource_24.getString());
    FIX::PartyRole PartyRole_24(43);
    noPartyIDs_0_1.set(PartyRole_24);
    Parties_NoPartyIDs_24.insert(PartyRole_24.getString());
    all_values.push_back(Parties_NoPartyIDs_24);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      FIX::PartySubID PartySubID_47("STRING_1553487706");
      noPartySubIDs_1_1_0.set(PartySubID_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubID_47.getString());
      FIX::PartySubIDType PartySubIDType_47(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubIDType_47.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      FIX::PartySubID PartySubID_48("STRING_850079842");
      noPartySubIDs_1_1_1.set(PartySubID_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubID_48.getString());
      FIX::PartySubIDType PartySubIDType_48(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubIDType_48.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      FIX::PartySubID PartySubID_49("STRING_521302989");
      noPartySubIDs_1_1_2.set(PartySubID_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubID_49.getString());
      FIX::PartySubIDType PartySubIDType_49(32);
      noPartySubIDs_1_1_2.set(PartySubIDType_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubIDType_49.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    FIX::PartyID PartyID_25("STRING_1700369248");
    noPartyIDs_0_2.set(PartyID_25);
    Parties_NoPartyIDs_25.insert(PartyID_25.getString());
    FIX::PartyIDSource PartyIDSource_25('B');
    noPartyIDs_0_2.set(PartyIDSource_25);
    Parties_NoPartyIDs_25.insert(PartyIDSource_25.getString());
    FIX::PartyRole PartyRole_25(62);
    noPartyIDs_0_2.set(PartyRole_25);
    Parties_NoPartyIDs_25.insert(PartyRole_25.getString());
    all_values.push_back(Parties_NoPartyIDs_25);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      FIX::PartySubID PartySubID_50("STRING_1350563359");
      noPartySubIDs_2_1_0.set(PartySubID_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubID_50.getString());
      FIX::PartySubIDType PartySubIDType_50(1);
      noPartySubIDs_2_1_0.set(PartySubIDType_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubIDType_50.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      FIX::PartySubID PartySubID_51("STRING_953519771");
      noPartySubIDs_2_1_1.set(PartySubID_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubID_51.getString());
      FIX::PartySubIDType PartySubIDType_51(31);
      noPartySubIDs_2_1_1.set(PartySubIDType_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubIDType_51.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_5("STRING_1631928640");
    noTrades_0_0.set(SecondaryTradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(SecondaryTradeReportID_5.getString());
    FIX::TradeReportID TradeReportID_5("STRING_628406613");
    noTrades_0_0.set(TradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(TradeReportID_5.getString());
    all_values.push_back(TrdCollGrp_NoTrades_5);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_6("STRING_533896045");
    noTrades_0_1.set(SecondaryTradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(SecondaryTradeReportID_6.getString());
    FIX::TradeReportID TradeReportID_6("STRING_1764649646");
    noTrades_0_1.set(TradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(TradeReportID_6.getString());
    all_values.push_back(TrdCollGrp_NoTrades_6);

    msg.addGroup(noTrades_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_16("DATA_1233555924");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuer_16.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_16(226620781);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuerLen_16.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_16("DATA_902821292");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDesc_16.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_16(1233807341);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDescLen_16.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("7216651");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_16);
    UnderlyingInstrument_16.insert(UnderlyingAdjustedQuantity_16.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("47.450000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_16);
    UnderlyingInstrument_16.insert(UnderlyingAllocationPercent_16.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("25.180000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingAttachmentPoint_16.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_16("STRING_1078783810");
    noUnderlyings_0_0.set(UnderlyingCFICode_16);
    UnderlyingInstrument_16.insert(UnderlyingCFICode_16.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_16("STRING_184864807");
    noUnderlyings_0_0.set(UnderlyingCPProgram_16);
    UnderlyingInstrument_16.insert(UnderlyingCPProgram_16.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_16("STRING_372367083");
    noUnderlyings_0_0.set(UnderlyingCPRegType_16);
    UnderlyingInstrument_16.insert(UnderlyingCPRegType_16.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("6988392");
    noUnderlyings_0_0.set(UnderlyingCapValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCapValue_16.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("17383525");
    noUnderlyings_0_0.set(UnderlyingCashAmount_16);
    UnderlyingInstrument_16.insert(UnderlyingCashAmount_16.getString());
    FIX::UnderlyingCashType UnderlyingCashType_16("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_16);
    UnderlyingInstrument_16.insert(UnderlyingCashType_16.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("15489190");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplier_16.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_16(704446280);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplierUnit_16.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_16("COUNTRY_1245628452");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingCountryOfIssue_16.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_16("LOCALMKTDATE_141207761");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponPaymentDate_16.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("18.810000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponRate_16.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_16("STRING_2049616554");
    noUnderlyings_0_0.set(UnderlyingCreditRating_16);
    UnderlyingInstrument_16.insert(UnderlyingCreditRating_16.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_16("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrency_16.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("12526962");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrentValue_16.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("28.170000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingDetachmentPoint_16.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("4236657");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingDirtyPrice_16.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("8781659");
    noUnderlyings_0_0.set(UnderlyingEndPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingEndPrice_16.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("6712537");
    noUnderlyings_0_0.set(UnderlyingEndValue_16);
    UnderlyingInstrument_16.insert(UnderlyingEndValue_16.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_16(2055594433);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_16);
    UnderlyingInstrument_16.insert(UnderlyingExerciseStyle_16.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("15065726");
    noUnderlyings_0_0.set(UnderlyingFXRate_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRate_16.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_16('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRateCalc_16.getString());
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("16727604");
    noUnderlyings_0_0.set(UnderlyingFactor_16);
    UnderlyingInstrument_16.insert(UnderlyingFactor_16.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_16(8329686);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_16);
    UnderlyingInstrument_16.insert(UnderlyingFlowScheduleType_16.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_16("STRING_291222079");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_16);
    UnderlyingInstrument_16.insert(UnderlyingInstrRegistry_16.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_16("LOCALMKTDATE_1899381213");
    noUnderlyings_0_0.set(UnderlyingIssueDate_16);
    UnderlyingInstrument_16.insert(UnderlyingIssueDate_16.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_16("STRING_911150979");
    noUnderlyings_0_0.set(UnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(UnderlyingIssuer_16.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_16("STRING_1525029420");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingLocaleOfIssue_16.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_16("LOCALMKTDATE_473562666");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityDate_16.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_16("MONTHYEAR_842332076");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityMonthYear_16.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_16("TZTIMEONLY_508928291");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityTime_16.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("64.770000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_16('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_16);
    UnderlyingInstrument_16.insert(UnderlyingOptAttribute_16.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("53.740000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingOriginalNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_16("STRING_103702046");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasure_16.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("6180657");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasureQty_16.getString());
    FIX::UnderlyingProduct UnderlyingProduct_16(1605620838);
    noUnderlyings_0_0.set(UnderlyingProduct_16);
    UnderlyingInstrument_16.insert(UnderlyingProduct_16.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_16(1652621105);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_16);
    UnderlyingInstrument_16.insert(UnderlyingPutOrCall_16.getString());
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("13225120");
    noUnderlyings_0_0.set(UnderlyingPx_16);
    UnderlyingInstrument_16.insert(UnderlyingPx_16.getString());
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("7037656");
    noUnderlyings_0_0.set(UnderlyingQty_16);
    UnderlyingInstrument_16.insert(UnderlyingQty_16.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_16("LOCALMKTDATE_1793828866");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_16);
    UnderlyingInstrument_16.insert(UnderlyingRedemptionDate_16.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_16("STRING_1579843910");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingRepoCollateralSecurityType_16.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("85.480000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseRate_16.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_16(625750063);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseTerm_16.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_16("STRING_1049989932");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_16);
    UnderlyingInstrument_16.insert(UnderlyingRestructuringType_16.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_16("STRING_1858594813");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityDesc_16.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_16("EXCHANGE_541549232");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityExchange_16.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_16("STRING_1473655725");
    noUnderlyings_0_0.set(UnderlyingSecurityID_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityID_16.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_16("STRING_589277160");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityIDSource_16.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_16("STRING_1212802991");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecuritySubType_16.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_16("STRING_1381766510");
    noUnderlyings_0_0.set(UnderlyingSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityType_16.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_16("STRING_2095849768");
    noUnderlyings_0_0.set(UnderlyingSeniority_16);
    UnderlyingInstrument_16.insert(UnderlyingSeniority_16.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_16("STRING_270469146");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlMethod_16.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_16(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlementType_16.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("21041794");
    noUnderlyings_0_0.set(UnderlyingStartValue_16);
    UnderlyingInstrument_16.insert(UnderlyingStartValue_16.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_16("STRING_561691226");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingStateOrProvinceOfIssue_16.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_16("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikeCurrency_16.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("20867206");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikePrice_16.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_16("STRING_1132503526");
    noUnderlyings_0_0.set(UnderlyingSymbol_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbol_16.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_16("STRING_1710178862");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbolSfx_16.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_16("STRING_448165289");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingTimeUnit_16.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_16("STRING_537366355");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasure_16.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("5898920");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasureQty_16.getString());
    all_values.push_back(UnderlyingInstrument_16);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_30("STRING_641068401");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltID_30.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_30("STRING_1207957846");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltIDSource_30.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_31("STRING_787597854");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltID_31.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_31("STRING_146205858");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltIDSource_31.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_32("STRING_382986227");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltID_32.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_32("STRING_1491363496");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltIDSource_32.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      FIX::UnderlyingStipType UnderlyingStipType_29("STRING_1962830137");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipType_29.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_29("STRING_2097262045");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipValue_29.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      FIX::UnderlyingStipType UnderlyingStipType_30("STRING_418301140");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipType_30.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_30("STRING_865336421");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipValue_30.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_33("STRING_959850372");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyID_33.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_33('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyIDSource_33.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_33(250166722);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyRole_33.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_62("STRING_1573275008");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubID_62.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_62(198532842);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubIDType_62.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_17;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_17("DATA_295638862");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuer_17.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_17(332834655);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuerLen_17.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_17("DATA_155228649");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDesc_17.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_17(857330088);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDescLen_17.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("9917755");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_17);
    UnderlyingInstrument_17.insert(UnderlyingAdjustedQuantity_17.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("54.340000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_17);
    UnderlyingInstrument_17.insert(UnderlyingAllocationPercent_17.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("70.860000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingAttachmentPoint_17.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_17("STRING_2124279041");
    noUnderlyings_0_1.set(UnderlyingCFICode_17);
    UnderlyingInstrument_17.insert(UnderlyingCFICode_17.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_17("STRING_585770648");
    noUnderlyings_0_1.set(UnderlyingCPProgram_17);
    UnderlyingInstrument_17.insert(UnderlyingCPProgram_17.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_17("STRING_1244732376");
    noUnderlyings_0_1.set(UnderlyingCPRegType_17);
    UnderlyingInstrument_17.insert(UnderlyingCPRegType_17.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("5141617");
    noUnderlyings_0_1.set(UnderlyingCapValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCapValue_17.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("11756627");
    noUnderlyings_0_1.set(UnderlyingCashAmount_17);
    UnderlyingInstrument_17.insert(UnderlyingCashAmount_17.getString());
    FIX::UnderlyingCashType UnderlyingCashType_17("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_17);
    UnderlyingInstrument_17.insert(UnderlyingCashType_17.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("11552301");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplier_17.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_17(236136944);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplierUnit_17.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_17("COUNTRY_1214307246");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingCountryOfIssue_17.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_17("LOCALMKTDATE_1301436009");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponPaymentDate_17.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("31.710000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponRate_17.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_17("STRING_558187094");
    noUnderlyings_0_1.set(UnderlyingCreditRating_17);
    UnderlyingInstrument_17.insert(UnderlyingCreditRating_17.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_17("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrency_17.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("5079654");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrentValue_17.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("82.250000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingDetachmentPoint_17.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("12998060");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingDirtyPrice_17.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("1688550");
    noUnderlyings_0_1.set(UnderlyingEndPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingEndPrice_17.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("3246549");
    noUnderlyings_0_1.set(UnderlyingEndValue_17);
    UnderlyingInstrument_17.insert(UnderlyingEndValue_17.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_17(1491314579);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_17);
    UnderlyingInstrument_17.insert(UnderlyingExerciseStyle_17.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("4190217");
    noUnderlyings_0_1.set(UnderlyingFXRate_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRate_17.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_17('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRateCalc_17.getString());
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("9171059");
    noUnderlyings_0_1.set(UnderlyingFactor_17);
    UnderlyingInstrument_17.insert(UnderlyingFactor_17.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_17(617554619);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_17);
    UnderlyingInstrument_17.insert(UnderlyingFlowScheduleType_17.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_17("STRING_645463527");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_17);
    UnderlyingInstrument_17.insert(UnderlyingInstrRegistry_17.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_17("LOCALMKTDATE_1249940594");
    noUnderlyings_0_1.set(UnderlyingIssueDate_17);
    UnderlyingInstrument_17.insert(UnderlyingIssueDate_17.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_17("STRING_772783268");
    noUnderlyings_0_1.set(UnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(UnderlyingIssuer_17.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_17("STRING_1502793615");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingLocaleOfIssue_17.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_17("LOCALMKTDATE_94232461");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityDate_17.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_17("MONTHYEAR_1795858702");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityMonthYear_17.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_17("TZTIMEONLY_151877054");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityTime_17.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("78.550000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_17('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_17);
    UnderlyingInstrument_17.insert(UnderlyingOptAttribute_17.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("94.300000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingOriginalNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_17("STRING_585189604");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasure_17.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("14098084");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasureQty_17.getString());
    FIX::UnderlyingProduct UnderlyingProduct_17(1823318822);
    noUnderlyings_0_1.set(UnderlyingProduct_17);
    UnderlyingInstrument_17.insert(UnderlyingProduct_17.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_17(1740419754);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_17);
    UnderlyingInstrument_17.insert(UnderlyingPutOrCall_17.getString());
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("16459453");
    noUnderlyings_0_1.set(UnderlyingPx_17);
    UnderlyingInstrument_17.insert(UnderlyingPx_17.getString());
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("8901424");
    noUnderlyings_0_1.set(UnderlyingQty_17);
    UnderlyingInstrument_17.insert(UnderlyingQty_17.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_17("LOCALMKTDATE_894372115");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_17);
    UnderlyingInstrument_17.insert(UnderlyingRedemptionDate_17.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_17("STRING_117584916");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingRepoCollateralSecurityType_17.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("95.140000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseRate_17.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_17(1988359201);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseTerm_17.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_17("STRING_552054576");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_17);
    UnderlyingInstrument_17.insert(UnderlyingRestructuringType_17.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_17("STRING_1956295006");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityDesc_17.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_17("EXCHANGE_1353163778");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityExchange_17.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_17("STRING_1851860657");
    noUnderlyings_0_1.set(UnderlyingSecurityID_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityID_17.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_17("STRING_2125150060");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityIDSource_17.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_17("STRING_1677818728");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecuritySubType_17.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_17("STRING_1195691588");
    noUnderlyings_0_1.set(UnderlyingSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityType_17.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_17("STRING_396688188");
    noUnderlyings_0_1.set(UnderlyingSeniority_17);
    UnderlyingInstrument_17.insert(UnderlyingSeniority_17.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_17("STRING_2027643394");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlMethod_17.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_17(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlementType_17.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("10142428");
    noUnderlyings_0_1.set(UnderlyingStartValue_17);
    UnderlyingInstrument_17.insert(UnderlyingStartValue_17.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_17("STRING_525623273");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingStateOrProvinceOfIssue_17.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_17("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikeCurrency_17.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("20284168");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikePrice_17.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_17("STRING_1309486935");
    noUnderlyings_0_1.set(UnderlyingSymbol_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbol_17.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_17("STRING_1435401130");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbolSfx_17.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_17("STRING_32810295");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingTimeUnit_17.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_17("STRING_1380514790");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasure_17.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("16695468");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasureQty_17.getString());
    all_values.push_back(UnderlyingInstrument_17);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_33("STRING_1965704394");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltID_33.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_33("STRING_931871634");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltIDSource_33.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_34("STRING_1105254899");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltID_34.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_34("STRING_1558640501");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltIDSource_34.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_35("STRING_430333379");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltID_35.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_35("STRING_1995397319");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltIDSource_35.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      FIX::UnderlyingStipType UnderlyingStipType_31("STRING_547918295");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipType_31.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_31("STRING_1296243185");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipValue_31.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      FIX::UnderlyingStipType UnderlyingStipType_32("STRING_146404521");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipType_32.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_32("STRING_1099972871");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipValue_32.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_34("STRING_1499568300");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyID_34.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_34('8');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyIDSource_34.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_34(1082720955);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyRole_34.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_63("STRING_2000041468");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubID_63.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_63(1479409144);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubIDType_63.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_64("STRING_910063126");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubID_64.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_64(1965355347);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubIDType_64.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_65("STRING_346168303");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubID_65.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_65(1435686400);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubIDType_65.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_35("STRING_1033126173");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyID_35.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_35('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyIDSource_35.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_35(1316619641);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyRole_35.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_66("STRING_1421111861");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubID_66.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_66(1349429936);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubIDType_66.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_67("STRING_1575644251");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubID_67.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_67(943175046);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubIDType_67.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_68("STRING_631366013");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubID_68.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_68(1393864998);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubIDType_68.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
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
