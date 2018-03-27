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
  FIX::Account Account_4("STRING_1252721582");
  msg.set(Account_4);
  CollateralInquiry_0.insert(Account_4.getString());
  FIX::AccountType AccountType_2(4);
  msg.set(AccountType_2);
  CollateralInquiry_0.insert(AccountType_2.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("12550306");
  msg.set(AccruedInterestAmt_4);
  CollateralInquiry_0.insert(AccruedInterestAmt_4.getString());
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("9791229");
  msg.set(CashOutstanding_1);
  CollateralInquiry_0.insert(CashOutstanding_1.getString());
  FIX::ClOrdID ClOrdID_6("STRING_400439268");
  msg.set(ClOrdID_6);
  CollateralInquiry_0.insert(ClOrdID_6.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_7("LOCALMKTDATE_336938360");
  msg.set(ClearingBusinessDate_7);
  CollateralInquiry_0.insert(ClearingBusinessDate_7.getString());
  FIX::CollInquiryID CollInquiryID_0("STRING_1711742872");
  msg.set(CollInquiryID_0);
  CollateralInquiry_0.insert(CollInquiryID_0.getString());
  FIX::Currency Currency_7("CHF");
  msg.set(Currency_7);
  CollateralInquiry_0.insert(Currency_7.getString());
  FIX::EncodedText EncodedText_14("DATA_277903959");
  msg.set(EncodedText_14);
  CollateralInquiry_0.insert(EncodedText_14.getString());
  FIX::EncodedTextLen EncodedTextLen_14(825955738);
  msg.set(EncodedTextLen_14);
  CollateralInquiry_0.insert(EncodedTextLen_14.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("5914761");
  msg.set(EndAccruedInterestAmt_4);
  CollateralInquiry_0.insert(EndAccruedInterestAmt_4.getString());
  FIX::EndCash EndCash_4;
  EndCash_4.setString("4758063");
  msg.set(EndCash_4);
  CollateralInquiry_0.insert(EndCash_4.getString());
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("7542148");
  msg.set(MarginExcess_1);
  CollateralInquiry_0.insert(MarginExcess_1.getString());
  FIX::OrderID OrderID_6("STRING_1288473066");
  msg.set(OrderID_6);
  CollateralInquiry_0.insert(OrderID_6.getString());
  FIX::Price Price_3;
  Price_3.setString("2396966");
  msg.set(Price_3);
  CollateralInquiry_0.insert(Price_3.getString());
  FIX::PriceType PriceType_5(4);
  msg.set(PriceType_5);
  CollateralInquiry_0.insert(PriceType_5.getString());
  FIX::QtyType QtyType_5(1);
  msg.set(QtyType_5);
  CollateralInquiry_0.insert(QtyType_5.getString());
  FIX::Quantity Quantity_6;
  Quantity_6.setString("19296681");
  msg.set(Quantity_6);
  CollateralInquiry_0.insert(Quantity_6.getString());
  FIX::ResponseDestination ResponseDestination_0("STRING_125500342");
  msg.set(ResponseDestination_0);
  CollateralInquiry_0.insert(ResponseDestination_0.getString());
  FIX::ResponseTransportType ResponseTransportType_0(0);
  msg.set(ResponseTransportType_0);
  CollateralInquiry_0.insert(ResponseTransportType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_6("STRING_1492167661");
  msg.set(SecondaryClOrdID_6);
  CollateralInquiry_0.insert(SecondaryClOrdID_6.getString());
  FIX::SecondaryOrderID SecondaryOrderID_6("STRING_1537781353");
  msg.set(SecondaryOrderID_6);
  CollateralInquiry_0.insert(SecondaryOrderID_6.getString());
  FIX::SettlDate SettlDate_7("LOCALMKTDATE_526068621");
  msg.set(SettlDate_7);
  CollateralInquiry_0.insert(SettlDate_7.getString());
  FIX::SettlSessID SettlSessID_3("STRING_ITD");
  msg.set(SettlSessID_3);
  CollateralInquiry_0.insert(SettlSessID_3.getString());
  FIX::SettlSessSubID SettlSessSubID_2("STRING_1955632383");
  msg.set(SettlSessSubID_2);
  CollateralInquiry_0.insert(SettlSessSubID_2.getString());
  FIX::Side Side_7('5');
  msg.set(Side_7);
  CollateralInquiry_0.insert(Side_7.getString());
  FIX::StartCash StartCash_4;
  StartCash_4.setString("19921600");
  msg.set(StartCash_4);
  CollateralInquiry_0.insert(StartCash_4.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_0('2');
  msg.set(SubscriptionRequestType_0);
  CollateralInquiry_0.insert(SubscriptionRequestType_0.getString());
  FIX::Text Text_14("STRING_2036604149");
  msg.set(Text_14);
  CollateralInquiry_0.insert(Text_14.getString());
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("383742");
  msg.set(TotalNetValue_1);
  CollateralInquiry_0.insert(TotalNetValue_1.getString());
  FIX::TradingSessionID TradingSessionID_8("STRING_3");
  msg.set(TradingSessionID_8);
  CollateralInquiry_0.insert(TradingSessionID_8.getString());
  FIX::TradingSessionSubID TradingSessionSubID_8("STRING_3");
  msg.set(TradingSessionSubID_8);
  CollateralInquiry_0.insert(TradingSessionSubID_8.getString());
  all_values.push_back(CollateralInquiry_0);

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_0;
    FIX::CollInquiryQualifier CollInquiryQualifier_0(7);
    noCollInquiryQualifier_0_0.set(CollInquiryQualifier_0);
    CollInqQualGrp_NoCollInquiryQualifier_0.insert(CollInquiryQualifier_0.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_0);

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    FIX::CollInquiryQualifier CollInquiryQualifier_1(1);
    noCollInquiryQualifier_0_1.set(CollInquiryQualifier_1);
    CollInqQualGrp_NoCollInquiryQualifier_1.insert(CollInquiryQualifier_1.getString());
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);

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

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    FIX::ExecID ExecID_10("STRING_318312911");
    noExecs_0_0.set(ExecID_10);
    ExecCollGrp_NoExecs_2.insert(ExecID_10.getString());
    all_values.push_back(ExecCollGrp_NoExecs_2);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  FIX::AgreementCurrency AgreementCurrency_4("CHF");
  msg.set(AgreementCurrency_4);
  FinancingDetails_4.insert(AgreementCurrency_4.getString());
  FIX::AgreementDate AgreementDate_4("LOCALMKTDATE_1144268649");
  msg.set(AgreementDate_4);
  FinancingDetails_4.insert(AgreementDate_4.getString());
  FIX::AgreementDesc AgreementDesc_4("STRING_807089147");
  msg.set(AgreementDesc_4);
  FinancingDetails_4.insert(AgreementDesc_4.getString());
  FIX::AgreementID AgreementID_4("STRING_1633652832");
  msg.set(AgreementID_4);
  FinancingDetails_4.insert(AgreementID_4.getString());
  FIX::DeliveryType DeliveryType_4(2);
  msg.set(DeliveryType_4);
  FinancingDetails_4.insert(DeliveryType_4.getString());
  FIX::EndDate EndDate_4("LOCALMKTDATE_2095562213");
  msg.set(EndDate_4);
  FinancingDetails_4.insert(EndDate_4.getString());
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("94.790000");
  msg.set(MarginRatio_4);
  FinancingDetails_4.insert(MarginRatio_4.getString());
  FIX::StartDate StartDate_4("LOCALMKTDATE_1695219783");
  msg.set(StartDate_4);
  FinancingDetails_4.insert(StartDate_4.getString());
  FIX::TerminationType TerminationType_4(2);
  msg.set(TerminationType_4);
  FinancingDetails_4.insert(TerminationType_4.getString());
  all_values.push_back(FinancingDetails_4);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_12;
    FIX::EncodedLegIssuer EncodedLegIssuer_12("DATA_1820720126");
    noLegs_0_0.set(EncodedLegIssuer_12);
    InstrumentLeg_12.insert(EncodedLegIssuer_12.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_12(877306593);
    noLegs_0_0.set(EncodedLegIssuerLen_12);
    InstrumentLeg_12.insert(EncodedLegIssuerLen_12.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_12("DATA_1000218023");
    noLegs_0_0.set(EncodedLegSecurityDesc_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDesc_12.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_12(1211017831);
    noLegs_0_0.set(EncodedLegSecurityDescLen_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDescLen_12.getString());
    FIX::LegCFICode LegCFICode_12("STRING_1403375215");
    noLegs_0_0.set(LegCFICode_12);
    InstrumentLeg_12.insert(LegCFICode_12.getString());
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("3244559");
    noLegs_0_0.set(LegContractMultiplier_12);
    InstrumentLeg_12.insert(LegContractMultiplier_12.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_12(1019166566);
    noLegs_0_0.set(LegContractMultiplierUnit_12);
    InstrumentLeg_12.insert(LegContractMultiplierUnit_12.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_12("MONTHYEAR_1497274531");
    noLegs_0_0.set(LegContractSettlMonth_12);
    InstrumentLeg_12.insert(LegContractSettlMonth_12.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_12("COUNTRY_169132393");
    noLegs_0_0.set(LegCountryOfIssue_12);
    InstrumentLeg_12.insert(LegCountryOfIssue_12.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_12("LOCALMKTDATE_103005356");
    noLegs_0_0.set(LegCouponPaymentDate_12);
    InstrumentLeg_12.insert(LegCouponPaymentDate_12.getString());
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("50.320000");
    noLegs_0_0.set(LegCouponRate_12);
    InstrumentLeg_12.insert(LegCouponRate_12.getString());
    FIX::LegCreditRating LegCreditRating_12("STRING_207506626");
    noLegs_0_0.set(LegCreditRating_12);
    InstrumentLeg_12.insert(LegCreditRating_12.getString());
    FIX::LegCurrency LegCurrency_12("JPY");
    noLegs_0_0.set(LegCurrency_12);
    InstrumentLeg_12.insert(LegCurrency_12.getString());
    FIX::LegDatedDate LegDatedDate_12("LOCALMKTDATE_1500911503");
    noLegs_0_0.set(LegDatedDate_12);
    InstrumentLeg_12.insert(LegDatedDate_12.getString());
    FIX::LegExerciseStyle LegExerciseStyle_12(1755249008);
    noLegs_0_0.set(LegExerciseStyle_12);
    InstrumentLeg_12.insert(LegExerciseStyle_12.getString());
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("16170869");
    noLegs_0_0.set(LegFactor_12);
    InstrumentLeg_12.insert(LegFactor_12.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_12(983771091);
    noLegs_0_0.set(LegFlowScheduleType_12);
    InstrumentLeg_12.insert(LegFlowScheduleType_12.getString());
    FIX::LegInstrRegistry LegInstrRegistry_12("STRING_487707864");
    noLegs_0_0.set(LegInstrRegistry_12);
    InstrumentLeg_12.insert(LegInstrRegistry_12.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_12("LOCALMKTDATE_1935399845");
    noLegs_0_0.set(LegInterestAccrualDate_12);
    InstrumentLeg_12.insert(LegInterestAccrualDate_12.getString());
    FIX::LegIssueDate LegIssueDate_12("LOCALMKTDATE_1199384097");
    noLegs_0_0.set(LegIssueDate_12);
    InstrumentLeg_12.insert(LegIssueDate_12.getString());
    FIX::LegIssuer LegIssuer_12("STRING_1645554328");
    noLegs_0_0.set(LegIssuer_12);
    InstrumentLeg_12.insert(LegIssuer_12.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_12("STRING_932184846");
    noLegs_0_0.set(LegLocaleOfIssue_12);
    InstrumentLeg_12.insert(LegLocaleOfIssue_12.getString());
    FIX::LegMaturityDate LegMaturityDate_12("LOCALMKTDATE_2006473244");
    noLegs_0_0.set(LegMaturityDate_12);
    InstrumentLeg_12.insert(LegMaturityDate_12.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_12("MONTHYEAR_1131723512");
    noLegs_0_0.set(LegMaturityMonthYear_12);
    InstrumentLeg_12.insert(LegMaturityMonthYear_12.getString());
    FIX::LegMaturityTime LegMaturityTime_12("TZTIMEONLY_683184648");
    noLegs_0_0.set(LegMaturityTime_12);
    InstrumentLeg_12.insert(LegMaturityTime_12.getString());
    FIX::LegOptAttribute LegOptAttribute_12('1');
    noLegs_0_0.set(LegOptAttribute_12);
    InstrumentLeg_12.insert(LegOptAttribute_12.getString());
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("8575893");
    noLegs_0_0.set(LegOptionRatio_12);
    InstrumentLeg_12.insert(LegOptionRatio_12.getString());
    FIX::LegPool LegPool_12("STRING_230920784");
    noLegs_0_0.set(LegPool_12);
    InstrumentLeg_12.insert(LegPool_12.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_12("STRING_862852535");
    noLegs_0_0.set(LegPriceUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasure_12.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("3656397");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasureQty_12.getString());
    FIX::LegProduct LegProduct_12(2051640910);
    noLegs_0_0.set(LegProduct_12);
    InstrumentLeg_12.insert(LegProduct_12.getString());
    FIX::LegPutOrCall LegPutOrCall_12(1740159128);
    noLegs_0_0.set(LegPutOrCall_12);
    InstrumentLeg_12.insert(LegPutOrCall_12.getString());
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("13658577");
    noLegs_0_0.set(LegRatioQty_12);
    InstrumentLeg_12.insert(LegRatioQty_12.getString());
    FIX::LegRedemptionDate LegRedemptionDate_12("LOCALMKTDATE_1115175093");
    noLegs_0_0.set(LegRedemptionDate_12);
    InstrumentLeg_12.insert(LegRedemptionDate_12.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_12("STRING_996050695");
    noLegs_0_0.set(LegRepoCollateralSecurityType_12);
    InstrumentLeg_12.insert(LegRepoCollateralSecurityType_12.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("36.730000");
    noLegs_0_0.set(LegRepurchaseRate_12);
    InstrumentLeg_12.insert(LegRepurchaseRate_12.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_12(2134341659);
    noLegs_0_0.set(LegRepurchaseTerm_12);
    InstrumentLeg_12.insert(LegRepurchaseTerm_12.getString());
    FIX::LegSecurityDesc LegSecurityDesc_12("STRING_345841578");
    noLegs_0_0.set(LegSecurityDesc_12);
    InstrumentLeg_12.insert(LegSecurityDesc_12.getString());
    FIX::LegSecurityExchange LegSecurityExchange_12("EXCHANGE_1859446066");
    noLegs_0_0.set(LegSecurityExchange_12);
    InstrumentLeg_12.insert(LegSecurityExchange_12.getString());
    FIX::LegSecurityID LegSecurityID_12("STRING_89863368");
    noLegs_0_0.set(LegSecurityID_12);
    InstrumentLeg_12.insert(LegSecurityID_12.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_12("STRING_1732236610");
    noLegs_0_0.set(LegSecurityIDSource_12);
    InstrumentLeg_12.insert(LegSecurityIDSource_12.getString());
    FIX::LegSecuritySubType LegSecuritySubType_12("STRING_2066952692");
    noLegs_0_0.set(LegSecuritySubType_12);
    InstrumentLeg_12.insert(LegSecuritySubType_12.getString());
    FIX::LegSecurityType LegSecurityType_12("STRING_529429097");
    noLegs_0_0.set(LegSecurityType_12);
    InstrumentLeg_12.insert(LegSecurityType_12.getString());
    FIX::LegSide LegSide_12('8');
    noLegs_0_0.set(LegSide_12);
    InstrumentLeg_12.insert(LegSide_12.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_12("STRING_1420380547");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_12);
    InstrumentLeg_12.insert(LegStateOrProvinceOfIssue_12.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_12("JPY");
    noLegs_0_0.set(LegStrikeCurrency_12);
    InstrumentLeg_12.insert(LegStrikeCurrency_12.getString());
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("2566679");
    noLegs_0_0.set(LegStrikePrice_12);
    InstrumentLeg_12.insert(LegStrikePrice_12.getString());
    FIX::LegSymbol LegSymbol_12("STRING_624902322");
    noLegs_0_0.set(LegSymbol_12);
    InstrumentLeg_12.insert(LegSymbol_12.getString());
    FIX::LegSymbolSfx LegSymbolSfx_12("STRING_143793793");
    noLegs_0_0.set(LegSymbolSfx_12);
    InstrumentLeg_12.insert(LegSymbolSfx_12.getString());
    FIX::LegTimeUnit LegTimeUnit_12("STRING_1456052088");
    noLegs_0_0.set(LegTimeUnit_12);
    InstrumentLeg_12.insert(LegTimeUnit_12.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_12("STRING_122973002");
    noLegs_0_0.set(LegUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegUnitOfMeasure_12.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("10759786");
    noLegs_0_0.set(LegUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegUnitOfMeasureQty_12.getString());
    all_values.push_back(InstrumentLeg_12);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      FIX::LegSecurityAltID LegSecurityAltID_20("STRING_1254696514");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltID_20.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_20("STRING_1759163288");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltIDSource_20.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("98.450000");
  msg.set(AttachmentPoint_8);
  Instrument_8.insert(AttachmentPoint_8.getString());
  FIX::CFICode CFICode_8("STRING_2112285858");
  msg.set(CFICode_8);
  Instrument_8.insert(CFICode_8.getString());
  FIX::CPProgram CPProgram_8(2);
  msg.set(CPProgram_8);
  Instrument_8.insert(CPProgram_8.getString());
  FIX::CPRegType CPRegType_8("STRING_1984962380");
  msg.set(CPRegType_8);
  Instrument_8.insert(CPRegType_8.getString());
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("3304419");
  msg.set(CapPrice_8);
  Instrument_8.insert(CapPrice_8.getString());
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("18942413");
  msg.set(ContractMultiplier_8);
  Instrument_8.insert(ContractMultiplier_8.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_8(0);
  msg.set(ContractMultiplierUnit_8);
  Instrument_8.insert(ContractMultiplierUnit_8.getString());
  FIX::ContractSettlMonth ContractSettlMonth_8("MONTHYEAR_1696299645");
  msg.set(ContractSettlMonth_8);
  Instrument_8.insert(ContractSettlMonth_8.getString());
  FIX::CountryOfIssue CountryOfIssue_8("COUNTRY_861932779");
  msg.set(CountryOfIssue_8);
  Instrument_8.insert(CountryOfIssue_8.getString());
  FIX::CouponPaymentDate CouponPaymentDate_8("LOCALMKTDATE_426204908");
  msg.set(CouponPaymentDate_8);
  Instrument_8.insert(CouponPaymentDate_8.getString());
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("96.700000");
  msg.set(CouponRate_8);
  Instrument_8.insert(CouponRate_8.getString());
  FIX::CreditRating CreditRating_8("STRING_848790791");
  msg.set(CreditRating_8);
  Instrument_8.insert(CreditRating_8.getString());
  FIX::DatedDate DatedDate_8("LOCALMKTDATE_772046487");
  msg.set(DatedDate_8);
  Instrument_8.insert(DatedDate_8.getString());
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("20.880000");
  msg.set(DetachmentPoint_8);
  Instrument_8.insert(DetachmentPoint_8.getString());
  FIX::EncodedIssuer EncodedIssuer_8("DATA_938654159");
  msg.set(EncodedIssuer_8);
  Instrument_8.insert(EncodedIssuer_8.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_8(356799449);
  msg.set(EncodedIssuerLen_8);
  Instrument_8.insert(EncodedIssuerLen_8.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_8("DATA_870561133");
  msg.set(EncodedSecurityDesc_8);
  Instrument_8.insert(EncodedSecurityDesc_8.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_8(1468083256);
  msg.set(EncodedSecurityDescLen_8);
  Instrument_8.insert(EncodedSecurityDescLen_8.getString());
  FIX::ExerciseStyle ExerciseStyle_8(0);
  msg.set(ExerciseStyle_8);
  Instrument_8.insert(ExerciseStyle_8.getString());
  FIX::Factor Factor_8;
  Factor_8.setString("1434580");
  msg.set(Factor_8);
  Instrument_8.insert(Factor_8.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_8(false);
  msg.set(FlexProductEligibilityIndicator_8);
  Instrument_8.insert(FlexProductEligibilityIndicator_8.getString());
  FIX::FlexibleIndicator FlexibleIndicator_8(false);
  msg.set(FlexibleIndicator_8);
  Instrument_8.insert(FlexibleIndicator_8.getString());
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("4001260");
  msg.set(FloorPrice_8);
  Instrument_8.insert(FloorPrice_8.getString());
  FIX::FlowScheduleType FlowScheduleType_8(2);
  msg.set(FlowScheduleType_8);
  Instrument_8.insert(FlowScheduleType_8.getString());
  FIX::InstrRegistry InstrRegistry_8("STRING_1742745150");
  msg.set(InstrRegistry_8);
  Instrument_8.insert(InstrRegistry_8.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_8('1');
  msg.set(InstrmtAssignmentMethod_8);
  Instrument_8.insert(InstrmtAssignmentMethod_8.getString());
  FIX::InterestAccrualDate InterestAccrualDate_8("LOCALMKTDATE_205669389");
  msg.set(InterestAccrualDate_8);
  Instrument_8.insert(InterestAccrualDate_8.getString());
  FIX::IssueDate IssueDate_8("LOCALMKTDATE_671240142");
  msg.set(IssueDate_8);
  Instrument_8.insert(IssueDate_8.getString());
  FIX::Issuer Issuer_8("STRING_1023736147");
  msg.set(Issuer_8);
  Instrument_8.insert(Issuer_8.getString());
  FIX::ListMethod ListMethod_8(0);
  msg.set(ListMethod_8);
  Instrument_8.insert(ListMethod_8.getString());
  FIX::LocaleOfIssue LocaleOfIssue_8("STRING_282919783");
  msg.set(LocaleOfIssue_8);
  Instrument_8.insert(LocaleOfIssue_8.getString());
  FIX::MaturityDate MaturityDate_8("LOCALMKTDATE_2145845993");
  msg.set(MaturityDate_8);
  Instrument_8.insert(MaturityDate_8.getString());
  FIX::MaturityMonthYear MaturityMonthYear_8("MONTHYEAR_1425168114");
  msg.set(MaturityMonthYear_8);
  Instrument_8.insert(MaturityMonthYear_8.getString());
  FIX::MaturityTime MaturityTime_8("TZTIMEONLY_125520207");
  msg.set(MaturityTime_8);
  Instrument_8.insert(MaturityTime_8.getString());
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("19833247");
  msg.set(MinPriceIncrement_8);
  Instrument_8.insert(MinPriceIncrement_8.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("17556100");
  msg.set(MinPriceIncrementAmount_8);
  Instrument_8.insert(MinPriceIncrementAmount_8.getString());
  FIX::NTPositionLimit NTPositionLimit_8(2019761542);
  msg.set(NTPositionLimit_8);
  Instrument_8.insert(NTPositionLimit_8.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("89.380000");
  msg.set(NotionalPercentageOutstanding_8);
  Instrument_8.insert(NotionalPercentageOutstanding_8.getString());
  FIX::OptAttribute OptAttribute_8('1');
  msg.set(OptAttribute_8);
  Instrument_8.insert(OptAttribute_8.getString());
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("7342106");
  msg.set(OptPayoutAmount_8);
  Instrument_8.insert(OptPayoutAmount_8.getString());
  FIX::OptPayoutType OptPayoutType_8(1);
  msg.set(OptPayoutType_8);
  Instrument_8.insert(OptPayoutType_8.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("20.500000");
  msg.set(OriginalNotionalPercentageOutstanding_8);
  Instrument_8.insert(OriginalNotionalPercentageOutstanding_8.getString());
  FIX::Pool Pool_8("STRING_1583001464");
  msg.set(Pool_8);
  Instrument_8.insert(Pool_8.getString());
  FIX::PositionLimit PositionLimit_8(464246686);
  msg.set(PositionLimit_8);
  Instrument_8.insert(PositionLimit_8.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_8("STRING_INT");
  msg.set(PriceQuoteMethod_8);
  Instrument_8.insert(PriceQuoteMethod_8.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_8("STRING_374171975");
  msg.set(PriceUnitOfMeasure_8);
  Instrument_8.insert(PriceUnitOfMeasure_8.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("8210461");
  msg.set(PriceUnitOfMeasureQty_8);
  Instrument_8.insert(PriceUnitOfMeasureQty_8.getString());
  FIX::Product Product_10(11);
  msg.set(Product_10);
  Instrument_8.insert(Product_10.getString());
  FIX::ProductComplex ProductComplex_8("STRING_1842255231");
  msg.set(ProductComplex_8);
  Instrument_8.insert(ProductComplex_8.getString());
  FIX::PutOrCall PutOrCall_8(0);
  msg.set(PutOrCall_8);
  Instrument_8.insert(PutOrCall_8.getString());
  FIX::RedemptionDate RedemptionDate_8("LOCALMKTDATE_213699656");
  msg.set(RedemptionDate_8);
  Instrument_8.insert(RedemptionDate_8.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_8("STRING_1300049297");
  msg.set(RepoCollateralSecurityType_8);
  Instrument_8.insert(RepoCollateralSecurityType_8.getString());
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("76.050000");
  msg.set(RepurchaseRate_8);
  Instrument_8.insert(RepurchaseRate_8.getString());
  FIX::RepurchaseTerm RepurchaseTerm_8(613825679);
  msg.set(RepurchaseTerm_8);
  Instrument_8.insert(RepurchaseTerm_8.getString());
  FIX::RestructuringType RestructuringType_8("STRING_FR");
  msg.set(RestructuringType_8);
  Instrument_8.insert(RestructuringType_8.getString());
  FIX::SecurityDesc SecurityDesc_8("STRING_1110849107");
  msg.set(SecurityDesc_8);
  Instrument_8.insert(SecurityDesc_8.getString());
  FIX::SecurityExchange SecurityExchange_8("EXCHANGE_322520143");
  msg.set(SecurityExchange_8);
  Instrument_8.insert(SecurityExchange_8.getString());
  FIX::SecurityGroup SecurityGroup_8("STRING_1588415074");
  msg.set(SecurityGroup_8);
  Instrument_8.insert(SecurityGroup_8.getString());
  FIX::SecurityID SecurityID_8("STRING_1782089250");
  msg.set(SecurityID_8);
  Instrument_8.insert(SecurityID_8.getString());
  FIX::SecurityIDSource SecurityIDSource_8("STRING_H");
  msg.set(SecurityIDSource_8);
  Instrument_8.insert(SecurityIDSource_8.getString());
  FIX::SecurityStatus SecurityStatus_8("STRING_1");
  msg.set(SecurityStatus_8);
  Instrument_8.insert(SecurityStatus_8.getString());
  FIX::SecuritySubType SecuritySubType_8("STRING_2065009033");
  msg.set(SecuritySubType_8);
  Instrument_8.insert(SecuritySubType_8.getString());
  FIX::SecurityType SecurityType_10("STRING_OOF");
  msg.set(SecurityType_10);
  Instrument_8.insert(SecurityType_10.getString());
  FIX::Seniority Seniority_8("STRING_SB");
  msg.set(Seniority_8);
  Instrument_8.insert(Seniority_8.getString());
  FIX::SettlMethod SettlMethod_8('C');
  msg.set(SettlMethod_8);
  Instrument_8.insert(SettlMethod_8.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_8("STRING_1180459713");
  msg.set(SettleOnOpenFlag_8);
  Instrument_8.insert(SettleOnOpenFlag_8.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_8("STRING_1934591826");
  msg.set(StateOrProvinceOfIssue_8);
  Instrument_8.insert(StateOrProvinceOfIssue_8.getString());
  FIX::StrikeCurrency StrikeCurrency_8("EUR");
  msg.set(StrikeCurrency_8);
  Instrument_8.insert(StrikeCurrency_8.getString());
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("10915342");
  msg.set(StrikeMultiplier_8);
  Instrument_8.insert(StrikeMultiplier_8.getString());
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("6495341");
  msg.set(StrikePrice_8);
  Instrument_8.insert(StrikePrice_8.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_8(3);
  msg.set(StrikePriceBoundaryMethod_8);
  Instrument_8.insert(StrikePriceBoundaryMethod_8.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("62.550000");
  msg.set(StrikePriceBoundaryPrecision_8);
  Instrument_8.insert(StrikePriceBoundaryPrecision_8.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_8(1);
  msg.set(StrikePriceDeterminationMethod_8);
  Instrument_8.insert(StrikePriceDeterminationMethod_8.getString());
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("6029018");
  msg.set(StrikeValue_8);
  Instrument_8.insert(StrikeValue_8.getString());
  FIX::Symbol Symbol_8("STRING_687286746");
  msg.set(Symbol_8);
  Instrument_8.insert(Symbol_8.getString());
  FIX::SymbolSfx SymbolSfx_8("STRING_CD");
  msg.set(SymbolSfx_8);
  Instrument_8.insert(SymbolSfx_8.getString());
  FIX::TimeUnit TimeUnit_8("STRING_S");
  msg.set(TimeUnit_8);
  Instrument_8.insert(TimeUnit_8.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_8(2);
  msg.set(UnderlyingPriceDeterminationMethod_8);
  Instrument_8.insert(UnderlyingPriceDeterminationMethod_8.getString());
  FIX::UnitOfMeasure UnitOfMeasure_8("STRING_Bu");
  msg.set(UnitOfMeasure_8);
  Instrument_8.insert(UnitOfMeasure_8.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("13405842");
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
    multiset<string> ComplexEvents_NoComplexEvents_17;
    FIX::ComplexEventCondition ComplexEventCondition_17(2);
    noComplexEvents_0_0.set(ComplexEventCondition_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventCondition_17.getString());
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("15850537");
    noComplexEvents_0_0.set(ComplexEventPrice_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPrice_17.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_17(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryMethod_17.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("73.360000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryPrecision_17.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_17(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceTimeType_17.getString());
    FIX::ComplexEventType ComplexEventType_17(7);
    noComplexEvents_0_0.set(ComplexEventType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventType_17.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("14541429");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexOptPayoutAmount_17.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_17);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      FIX::ComplexEventEndDate ComplexEventEndDate_35(FIX::UTCTIMESTAMP(19, 38, 21, 0, 122007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventEndDate_35.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_35(FIX::UTCTIMESTAMP(18, 4, 22, 21, 92013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventStartDate_35.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        FIX::ComplexEventEndTime ComplexEventEndTime_68(FIX::UTCTIMEONLY(19, 41, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventEndTime_68.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_68(FIX::UTCTIMEONLY(21, 5, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventStartTime_68.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        FIX::ComplexEventEndTime ComplexEventEndTime_69(FIX::UTCTIMEONLY(18, 12, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventEndTime_69.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_69(FIX::UTCTIMEONLY(15, 53, 12));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventStartTime_69.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      FIX::ComplexEventEndDate ComplexEventEndDate_36(FIX::UTCTIMESTAMP(17, 42, 5, 13, 62000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventEndDate_36.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_36(FIX::UTCTIMESTAMP(4, 20, 54, 25, 92005));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventStartDate_36.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        FIX::ComplexEventEndTime ComplexEventEndTime_70(FIX::UTCTIMEONLY(0, 40, 34));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventEndTime_70.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_70(FIX::UTCTIMEONLY(17, 31, 9));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventStartTime_70.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    FIX::ComplexEventCondition ComplexEventCondition_18(1);
    noComplexEvents_0_1.set(ComplexEventCondition_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventCondition_18.getString());
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("2061216");
    noComplexEvents_0_1.set(ComplexEventPrice_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPrice_18.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_18(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryMethod_18.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("93.270000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryPrecision_18.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_18(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceTimeType_18.getString());
    FIX::ComplexEventType ComplexEventType_18(5);
    noComplexEvents_0_1.set(ComplexEventType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventType_18.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("5721251");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexOptPayoutAmount_18.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_18);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      FIX::ComplexEventEndDate ComplexEventEndDate_37(FIX::UTCTIMESTAMP(13, 54, 29, 22, 42009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventEndDate_37.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_37(FIX::UTCTIMESTAMP(19, 6, 12, 0, 72005));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventStartDate_37.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        FIX::ComplexEventEndTime ComplexEventEndTime_71(FIX::UTCTIMEONLY(9, 11, 23));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventEndTime_71.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_71(FIX::UTCTIMEONLY(16, 46, 45));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventStartTime_71.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      FIX::ComplexEventEndDate ComplexEventEndDate_38(FIX::UTCTIMESTAMP(15, 6, 31, 14, 42004));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventEndDate_38.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_38(FIX::UTCTIMESTAMP(23, 57, 55, 5, 12005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventStartDate_38.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        FIX::ComplexEventEndTime ComplexEventEndTime_72(FIX::UTCTIMEONLY(10, 24, 6));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventEndTime_72.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_72(FIX::UTCTIMEONLY(23, 15, 58));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventStartTime_72.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      FIX::ComplexEventEndDate ComplexEventEndDate_39(FIX::UTCTIMESTAMP(0, 1, 11, 7, 62003));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventEndDate_39.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_39(FIX::UTCTIMESTAMP(14, 48, 31, 25, 32010));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventStartDate_39.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        FIX::ComplexEventEndTime ComplexEventEndTime_73(FIX::UTCTIMEONLY(13, 39, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventEndTime_73.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_73(FIX::UTCTIMEONLY(7, 2, 5));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventStartTime_73.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        FIX::ComplexEventEndTime ComplexEventEndTime_74(FIX::UTCTIMEONLY(4, 21, 59));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventEndTime_74.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_74(FIX::UTCTIMEONLY(8, 14, 41));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventStartTime_74.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        FIX::ComplexEventEndTime ComplexEventEndTime_75(FIX::UTCTIMEONLY(6, 42, 11));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventEndTime_75.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_75(FIX::UTCTIMEONLY(0, 8, 30));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventStartTime_75.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    FIX::ComplexEventCondition ComplexEventCondition_19(1);
    noComplexEvents_0_2.set(ComplexEventCondition_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventCondition_19.getString());
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("13310742");
    noComplexEvents_0_2.set(ComplexEventPrice_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPrice_19.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_19(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryMethod_19.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("40.150000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryPrecision_19.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_19(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceTimeType_19.getString());
    FIX::ComplexEventType ComplexEventType_19(4);
    noComplexEvents_0_2.set(ComplexEventType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventType_19.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("19563234");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexOptPayoutAmount_19.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_19);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      FIX::ComplexEventEndDate ComplexEventEndDate_40(FIX::UTCTIMESTAMP(8, 25, 55, 27, 82006));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventEndDate_40.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_40(FIX::UTCTIMESTAMP(15, 13, 7, 27, 32013));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventStartDate_40.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        FIX::ComplexEventEndTime ComplexEventEndTime_76(FIX::UTCTIMEONLY(11, 7, 30));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventEndTime_76.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_76(FIX::UTCTIMEONLY(23, 30, 50));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventStartTime_76.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      FIX::ComplexEventEndDate ComplexEventEndDate_41(FIX::UTCTIMESTAMP(19, 51, 16, 13, 112003));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventEndDate_41.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_41(FIX::UTCTIMESTAMP(15, 53, 52, 14, 12011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventStartDate_41.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        FIX::ComplexEventEndTime ComplexEventEndTime_77(FIX::UTCTIMEONLY(7, 55, 7));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventEndTime_77.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_77(FIX::UTCTIMEONLY(13, 12, 54));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventStartTime_77.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);

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
    multiset<string> EvntGrp_NoEvents_15;
    FIX::EventDate EventDate_15("LOCALMKTDATE_610011395");
    noEvents_0_0.set(EventDate_15);
    EvntGrp_NoEvents_15.insert(EventDate_15.getString());
    FIX::EventPx EventPx_15;
    EventPx_15.setString("10257692");
    noEvents_0_0.set(EventPx_15);
    EvntGrp_NoEvents_15.insert(EventPx_15.getString());
    FIX::EventText EventText_15("STRING_788317442");
    noEvents_0_0.set(EventText_15);
    EvntGrp_NoEvents_15.insert(EventText_15.getString());
    FIX::EventTime EventTime_15(FIX::UTCTIMESTAMP(8, 32, 46, 13, 82006));
    noEvents_0_0.set(EventTime_15);
    EvntGrp_NoEvents_15.insert(EventTime_15.getString());
    FIX::EventType EventType_15(15);
    noEvents_0_0.set(EventType_15);
    EvntGrp_NoEvents_15.insert(EventType_15.getString());
    all_values.push_back(EvntGrp_NoEvents_15);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    FIX::EventDate EventDate_16("LOCALMKTDATE_1483422741");
    noEvents_0_1.set(EventDate_16);
    EvntGrp_NoEvents_16.insert(EventDate_16.getString());
    FIX::EventPx EventPx_16;
    EventPx_16.setString("14614802");
    noEvents_0_1.set(EventPx_16);
    EvntGrp_NoEvents_16.insert(EventPx_16.getString());
    FIX::EventText EventText_16("STRING_1451310439");
    noEvents_0_1.set(EventText_16);
    EvntGrp_NoEvents_16.insert(EventText_16.getString());
    FIX::EventTime EventTime_16(FIX::UTCTIMESTAMP(23, 5, 33, 13, 102006));
    noEvents_0_1.set(EventTime_16);
    EvntGrp_NoEvents_16.insert(EventTime_16.getString());
    FIX::EventType EventType_16(16);
    noEvents_0_1.set(EventType_16);
    EvntGrp_NoEvents_16.insert(EventType_16.getString());
    all_values.push_back(EvntGrp_NoEvents_16);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    FIX::EventDate EventDate_17("LOCALMKTDATE_1033661518");
    noEvents_0_2.set(EventDate_17);
    EvntGrp_NoEvents_17.insert(EventDate_17.getString());
    FIX::EventPx EventPx_17;
    EventPx_17.setString("7903158");
    noEvents_0_2.set(EventPx_17);
    EvntGrp_NoEvents_17.insert(EventPx_17.getString());
    FIX::EventText EventText_17("STRING_2084316631");
    noEvents_0_2.set(EventText_17);
    EvntGrp_NoEvents_17.insert(EventText_17.getString());
    FIX::EventTime EventTime_17(FIX::UTCTIMESTAMP(13, 36, 10, 8, 92003));
    noEvents_0_2.set(EventTime_17);
    EvntGrp_NoEvents_17.insert(EventTime_17.getString());
    FIX::EventType EventType_17(2);
    noEvents_0_2.set(EventType_17);
    EvntGrp_NoEvents_17.insert(EventType_17.getString());
    all_values.push_back(EvntGrp_NoEvents_17);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    FIX::InstrumentPartyID InstrumentPartyID_14("STRING_1856215421");
    noInstrumentParties_0_0.set(InstrumentPartyID_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyID_14.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_14('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyIDSource_14.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_14(1353346055);
    noInstrumentParties_0_0.set(InstrumentPartyRole_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyRole_14.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      FIX::InstrumentPartySubID InstrumentPartySubID_24("STRING_1840256815");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubID_24.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_24(1510645158);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubIDType_24.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      FIX::InstrumentPartySubID InstrumentPartySubID_25("STRING_1483917110");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubID_25.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_25(917272281);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubIDType_25.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      FIX::InstrumentPartySubID InstrumentPartySubID_26("STRING_846584251");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubID_26.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_26(797913718);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubIDType_26.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    FIX::InstrumentPartyID InstrumentPartyID_15("STRING_221099073");
    noInstrumentParties_0_1.set(InstrumentPartyID_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyID_15.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_15('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyIDSource_15.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_15(31189982);
    noInstrumentParties_0_1.set(InstrumentPartyRole_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyRole_15.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      FIX::InstrumentPartySubID InstrumentPartySubID_27("STRING_632192145");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubID_27.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_27(1875524823);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubIDType_27.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      FIX::InstrumentPartySubID InstrumentPartySubID_28("STRING_240738687");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubID_28.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_28(918786621);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubIDType_28.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      FIX::InstrumentPartySubID InstrumentPartySubID_29("STRING_2004434499");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubID_29.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_29(1274400205);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubIDType_29.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    FIX::InstrumentPartyID InstrumentPartyID_16("STRING_1709102513");
    noInstrumentParties_0_2.set(InstrumentPartyID_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyID_16.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_16('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyIDSource_16.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_16(1649552663);
    noInstrumentParties_0_2.set(InstrumentPartyRole_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyRole_16.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      FIX::InstrumentPartySubID InstrumentPartySubID_30("STRING_1038634590");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubID_30.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_30(341694625);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubIDType_30.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);

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
    FIX::SecurityAltID SecurityAltID_19("STRING_722650231");
    noSecurityAltID_0_0.set(SecurityAltID_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltID_19.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_19("STRING_1791331630");
    noSecurityAltID_0_0.set(SecurityAltIDSource_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltIDSource_19.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  FIX::SecurityXML SecurityXML_17("XMLDATA_1745524224");
  msg.set(SecurityXML_17);
  FIX::SecurityXMLLen SecurityXMLLen_8(1194983313);
  msg.set(SecurityXMLLen_8);
  FIX::SecurityXMLSchema SecurityXMLSchema_8("STRING_1500063404");
  msg.set(SecurityXMLSchema_8);
  SecurityXML_16.insert(SecurityXMLSchema_8.getString());
  all_values.push_back(SecurityXML_16);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    FIX::PartyID PartyID_23("STRING_400845720");
    noPartyIDs_0_0.set(PartyID_23);
    Parties_NoPartyIDs_23.insert(PartyID_23.getString());
    FIX::PartyIDSource PartyIDSource_23('G');
    noPartyIDs_0_0.set(PartyIDSource_23);
    Parties_NoPartyIDs_23.insert(PartyIDSource_23.getString());
    FIX::PartyRole PartyRole_23(18);
    noPartyIDs_0_0.set(PartyRole_23);
    Parties_NoPartyIDs_23.insert(PartyRole_23.getString());
    all_values.push_back(Parties_NoPartyIDs_23);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      FIX::PartySubID PartySubID_51("STRING_1436433106");
      noPartySubIDs_0_1_0.set(PartySubID_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubID_51.getString());
      FIX::PartySubIDType PartySubIDType_51(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_51);
      PtysSubGrp_NoPartySubIDs_51.insert(PartySubIDType_51.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      FIX::PartySubID PartySubID_52("STRING_610591482");
      noPartySubIDs_0_1_1.set(PartySubID_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubID_52.getString());
      FIX::PartySubIDType PartySubIDType_52(16);
      noPartySubIDs_0_1_1.set(PartySubIDType_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubIDType_52.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_6;
  FIX::SettlDeliveryType SettlDeliveryType_6(0);
  msg.set(SettlDeliveryType_6);
  SettlInstructionsData_6.insert(SettlDeliveryType_6.getString());
  FIX::StandInstDbID StandInstDbID_6("STRING_827576334");
  msg.set(StandInstDbID_6);
  SettlInstructionsData_6.insert(StandInstDbID_6.getString());
  FIX::StandInstDbName StandInstDbName_6("STRING_118053158");
  msg.set(StandInstDbName_6);
  SettlInstructionsData_6.insert(StandInstDbName_6.getString());
  FIX::StandInstDbType StandInstDbType_6(1);
  msg.set(StandInstDbType_6);
  SettlInstructionsData_6.insert(StandInstDbType_6.getString());
  all_values.push_back(SettlInstructionsData_6);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_11;
    FIX::DlvyInstType DlvyInstType_11('C');
    noDlvyInst_0_0.set(DlvyInstType_11);
    DlvyInstGrp_NoDlvyInst_11.insert(DlvyInstType_11.getString());
    FIX::SettlInstSource SettlInstSource_11('1');
    noDlvyInst_0_0.set(SettlInstSource_11);
    DlvyInstGrp_NoDlvyInst_11.insert(SettlInstSource_11.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_11);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_20;
      FIX::SettlPartyID SettlPartyID_20("STRING_1850528833");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyID_20.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_20('2');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyIDSource_20.getString());
      FIX::SettlPartyRole SettlPartyRole_20(1940173966);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyRole_20.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_20);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
        FIX::SettlPartySubID SettlPartySubID_39("STRING_1860072734");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubID_39.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_39(1865125772);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubIDType_39.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
        FIX::SettlPartySubID SettlPartySubID_40("STRING_535463609");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubID_40.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_40(54283711);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubIDType_40.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_21;
      FIX::SettlPartyID SettlPartyID_21("STRING_1113737347");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyID_21.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_21('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyIDSource_21.getString());
      FIX::SettlPartyRole SettlPartyRole_21(1845615341);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyRole_21.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_21);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
        FIX::SettlPartySubID SettlPartySubID_41("STRING_305613506");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubID_41.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_41(1198195097);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubIDType_41.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
        FIX::SettlPartySubID SettlPartySubID_42("STRING_1343547677");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_42);
        SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubID_42.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_42(706459226);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_42);
        SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubIDType_42.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
        FIX::SettlPartySubID SettlPartySubID_43("STRING_1150711093");
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubID_43);
        SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubID_43.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_43(1668090598);
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubIDType_43);
        SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubIDType_43.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_22;
      FIX::SettlPartyID SettlPartyID_22("STRING_470466457");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyID_22.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_22('4');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyIDSource_22.getString());
      FIX::SettlPartyRole SettlPartyRole_22(762422153);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_22);
      SettlParties_NoSettlPartyIDs_22.insert(SettlPartyRole_22.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_22);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
        FIX::SettlPartySubID SettlPartySubID_44("STRING_526523728");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_44);
        SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubID_44.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_44(77852781);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_44);
        SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubIDType_44.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
        FIX::SettlPartySubID SettlPartySubID_45("STRING_1908634274");
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubID_45);
        SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubID_45.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_45(644576886);
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubIDType_45);
        SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubIDType_45.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
        FIX::SettlPartySubID SettlPartySubID_46("STRING_920717607");
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubID_46);
        SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubID_46.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_46(1220919106);
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubIDType_46);
        SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubIDType_46.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_4("EUR");
  msg.set(BenchmarkCurveCurrency_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveCurrency_4.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_4("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurveName_4.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_4("STRING_193716405");
  msg.set(BenchmarkCurvePoint_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkCurvePoint_4.getString());
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("673575");
  msg.set(BenchmarkPrice_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPrice_4.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_4(1244680877);
  msg.set(BenchmarkPriceType_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkPriceType_4.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_4("STRING_1838029072");
  msg.set(BenchmarkSecurityID_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityID_4.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_4("STRING_1927430278");
  msg.set(BenchmarkSecurityIDSource_4);
  SpreadOrBenchmarkCurveData_4.insert(BenchmarkSecurityIDSource_4.getString());
  FIX::Spread Spread_4;
  Spread_4.setString("9623230");
  msg.set(Spread_4);
  SpreadOrBenchmarkCurveData_4.insert(Spread_4.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_4);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    FIX::StipulationType StipulationType_6("STRING_YTM");
    noStipulations_0_0.set(StipulationType_6);
    Stipulations_NoStipulations_6.insert(StipulationType_6.getString());
    FIX::StipulationValue StipulationValue_6("STRING_2076060348");
    noStipulations_0_0.set(StipulationValue_6);
    Stipulations_NoStipulations_6.insert(StipulationValue_6.getString());
    all_values.push_back(Stipulations_NoStipulations_6);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    FIX::StipulationType StipulationType_7("STRING_HEP");
    noStipulations_0_1.set(StipulationType_7);
    Stipulations_NoStipulations_7.insert(StipulationType_7.getString());
    FIX::StipulationValue StipulationValue_7("STRING_1679845682");
    noStipulations_0_1.set(StipulationValue_7);
    Stipulations_NoStipulations_7.insert(StipulationValue_7.getString());
    all_values.push_back(Stipulations_NoStipulations_7);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_8;
    FIX::StipulationType StipulationType_8("STRING_MAXORDQTY");
    noStipulations_0_2.set(StipulationType_8);
    Stipulations_NoStipulations_8.insert(StipulationType_8.getString());
    FIX::StipulationValue StipulationValue_8("STRING_1789736380");
    noStipulations_0_2.set(StipulationValue_8);
    Stipulations_NoStipulations_8.insert(StipulationValue_8.getString());
    all_values.push_back(Stipulations_NoStipulations_8);

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_3("STRING_1983902300");
    noTrades_0_0.set(SecondaryTradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(SecondaryTradeReportID_3.getString());
    FIX::TradeReportID TradeReportID_3("STRING_348711959");
    noTrades_0_0.set(TradeReportID_3);
    TrdCollGrp_NoTrades_3.insert(TradeReportID_3.getString());
    all_values.push_back(TrdCollGrp_NoTrades_3);

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_3("MULTIPLESTRINGVALUE_MAC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskOrderHandlingInst_3.getString());
    FIX::DeskType DeskType_3("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskType_3.getString());
    FIX::DeskTypeSource DeskTypeSource_3(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(DeskTypeSource_3.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_3(FIX::UTCTIMESTAMP(20, 37, 18, 11, 82003));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestamp_3.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_3("STRING_734822441");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampOrigin_3.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_3(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_3);
    TrdRegTimestamps_NoTrdRegTimestamps_3.insert(TrdRegTimestampType_3.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_4("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskOrderHandlingInst_4.getString());
    FIX::DeskType DeskType_4("STRING_PR");
    noTrdRegTimestamps_0_1.set(DeskType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskType_4.getString());
    FIX::DeskTypeSource DeskTypeSource_4(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskTypeSource_4.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_4(FIX::UTCTIMESTAMP(5, 54, 12, 6, 92009));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestamp_4.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_4("STRING_27426283");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampOrigin_4.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_4(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampType_4.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_9("DATA_667780906");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuer_9.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_9(924379787);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuerLen_9.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_9("DATA_919309300");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDesc_9.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_9(504199559);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDescLen_9.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("12730917");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_9);
    UnderlyingInstrument_9.insert(UnderlyingAdjustedQuantity_9.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("38.770000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_9);
    UnderlyingInstrument_9.insert(UnderlyingAllocationPercent_9.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("88.100000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingAttachmentPoint_9.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_9("STRING_2092270162");
    noUnderlyings_0_0.set(UnderlyingCFICode_9);
    UnderlyingInstrument_9.insert(UnderlyingCFICode_9.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_9("STRING_826539006");
    noUnderlyings_0_0.set(UnderlyingCPProgram_9);
    UnderlyingInstrument_9.insert(UnderlyingCPProgram_9.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_9("STRING_2128156566");
    noUnderlyings_0_0.set(UnderlyingCPRegType_9);
    UnderlyingInstrument_9.insert(UnderlyingCPRegType_9.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("18450228");
    noUnderlyings_0_0.set(UnderlyingCapValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCapValue_9.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("15265078");
    noUnderlyings_0_0.set(UnderlyingCashAmount_9);
    UnderlyingInstrument_9.insert(UnderlyingCashAmount_9.getString());
    FIX::UnderlyingCashType UnderlyingCashType_9("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_9);
    UnderlyingInstrument_9.insert(UnderlyingCashType_9.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("13589262");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplier_9.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_9(723569959);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplierUnit_9.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_9("COUNTRY_1295991602");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingCountryOfIssue_9.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_9("LOCALMKTDATE_2093748647");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponPaymentDate_9.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("32.750000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponRate_9.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_9("STRING_123363572");
    noUnderlyings_0_0.set(UnderlyingCreditRating_9);
    UnderlyingInstrument_9.insert(UnderlyingCreditRating_9.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_9("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrency_9.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("11655767");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrentValue_9.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("45.800000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingDetachmentPoint_9.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("20122317");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingDirtyPrice_9.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("19877365");
    noUnderlyings_0_0.set(UnderlyingEndPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingEndPrice_9.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("13684541");
    noUnderlyings_0_0.set(UnderlyingEndValue_9);
    UnderlyingInstrument_9.insert(UnderlyingEndValue_9.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_9(1810235970);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_9);
    UnderlyingInstrument_9.insert(UnderlyingExerciseStyle_9.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("4966430");
    noUnderlyings_0_0.set(UnderlyingFXRate_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRate_9.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_9('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRateCalc_9.getString());
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("9448793");
    noUnderlyings_0_0.set(UnderlyingFactor_9);
    UnderlyingInstrument_9.insert(UnderlyingFactor_9.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_9(685395181);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_9);
    UnderlyingInstrument_9.insert(UnderlyingFlowScheduleType_9.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_9("STRING_2063661352");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_9);
    UnderlyingInstrument_9.insert(UnderlyingInstrRegistry_9.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_9("LOCALMKTDATE_1869259164");
    noUnderlyings_0_0.set(UnderlyingIssueDate_9);
    UnderlyingInstrument_9.insert(UnderlyingIssueDate_9.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_9("STRING_1604704481");
    noUnderlyings_0_0.set(UnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(UnderlyingIssuer_9.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_9("STRING_420377263");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingLocaleOfIssue_9.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_9("LOCALMKTDATE_994867262");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityDate_9.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_9("MONTHYEAR_110314710");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityMonthYear_9.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_9("TZTIMEONLY_281602425");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityTime_9.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("37.760000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_9('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_9);
    UnderlyingInstrument_9.insert(UnderlyingOptAttribute_9.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("53.430000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingOriginalNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_9("STRING_637192999");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasure_9.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("3158779");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasureQty_9.getString());
    FIX::UnderlyingProduct UnderlyingProduct_9(440248800);
    noUnderlyings_0_0.set(UnderlyingProduct_9);
    UnderlyingInstrument_9.insert(UnderlyingProduct_9.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_9(1996119205);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_9);
    UnderlyingInstrument_9.insert(UnderlyingPutOrCall_9.getString());
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("10394478");
    noUnderlyings_0_0.set(UnderlyingPx_9);
    UnderlyingInstrument_9.insert(UnderlyingPx_9.getString());
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("17362404");
    noUnderlyings_0_0.set(UnderlyingQty_9);
    UnderlyingInstrument_9.insert(UnderlyingQty_9.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_9("LOCALMKTDATE_1942384204");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_9);
    UnderlyingInstrument_9.insert(UnderlyingRedemptionDate_9.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_9("STRING_1450751166");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingRepoCollateralSecurityType_9.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("39.740000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseRate_9.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_9(1927978555);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseTerm_9.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_9("STRING_1743504163");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_9);
    UnderlyingInstrument_9.insert(UnderlyingRestructuringType_9.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_9("STRING_877697061");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityDesc_9.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_9("EXCHANGE_1050099487");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityExchange_9.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_9("STRING_1608252305");
    noUnderlyings_0_0.set(UnderlyingSecurityID_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityID_9.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_9("STRING_717949941");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityIDSource_9.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_9("STRING_271070002");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecuritySubType_9.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_9("STRING_1271004628");
    noUnderlyings_0_0.set(UnderlyingSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityType_9.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_9("STRING_1214592954");
    noUnderlyings_0_0.set(UnderlyingSeniority_9);
    UnderlyingInstrument_9.insert(UnderlyingSeniority_9.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_9("STRING_1666950447");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlMethod_9.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_9(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlementType_9.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("18999881");
    noUnderlyings_0_0.set(UnderlyingStartValue_9);
    UnderlyingInstrument_9.insert(UnderlyingStartValue_9.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_9("STRING_1583128151");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingStateOrProvinceOfIssue_9.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_9("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikeCurrency_9.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("20035054");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikePrice_9.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_9("STRING_785043135");
    noUnderlyings_0_0.set(UnderlyingSymbol_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbol_9.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_9("STRING_1467523678");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbolSfx_9.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_9("STRING_137624191");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingTimeUnit_9.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_9("STRING_1724696911");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasure_9.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("2568937");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasureQty_9.getString());
    all_values.push_back(UnderlyingInstrument_9);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_18("STRING_214406263");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltID_18.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_18("STRING_572771680");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltIDSource_18.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      FIX::UnderlyingStipType UnderlyingStipType_14("STRING_63041820");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipType_14.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_14("STRING_1612219571");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipValue_14.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_17("STRING_2005426025");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyID_17.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_17('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyIDSource_17.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_17(141025415);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyRole_17.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_33("STRING_511507605");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubID_33.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_33(1018722477);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubIDType_33.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_34("STRING_688536772");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubID_34.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_34(2119759910);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubIDType_34.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);

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
    multiset<string> UnderlyingInstrument_10;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_10("DATA_1736672418");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuer_10.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_10(959606774);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuerLen_10.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_10("DATA_1243280890");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDesc_10.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_10(803781724);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDescLen_10.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("4790735");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_10);
    UnderlyingInstrument_10.insert(UnderlyingAdjustedQuantity_10.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("12.470000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_10);
    UnderlyingInstrument_10.insert(UnderlyingAllocationPercent_10.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("62.110000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingAttachmentPoint_10.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_10("STRING_2062201725");
    noUnderlyings_0_1.set(UnderlyingCFICode_10);
    UnderlyingInstrument_10.insert(UnderlyingCFICode_10.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_10("STRING_1101857120");
    noUnderlyings_0_1.set(UnderlyingCPProgram_10);
    UnderlyingInstrument_10.insert(UnderlyingCPProgram_10.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_10("STRING_1913495179");
    noUnderlyings_0_1.set(UnderlyingCPRegType_10);
    UnderlyingInstrument_10.insert(UnderlyingCPRegType_10.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("19182234");
    noUnderlyings_0_1.set(UnderlyingCapValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCapValue_10.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("18869002");
    noUnderlyings_0_1.set(UnderlyingCashAmount_10);
    UnderlyingInstrument_10.insert(UnderlyingCashAmount_10.getString());
    FIX::UnderlyingCashType UnderlyingCashType_10("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_10);
    UnderlyingInstrument_10.insert(UnderlyingCashType_10.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("20558476");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplier_10.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_10(1464113519);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplierUnit_10.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_10("COUNTRY_1490428957");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingCountryOfIssue_10.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_10("LOCALMKTDATE_308263570");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponPaymentDate_10.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("97.820000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponRate_10.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_10("STRING_2063200637");
    noUnderlyings_0_1.set(UnderlyingCreditRating_10);
    UnderlyingInstrument_10.insert(UnderlyingCreditRating_10.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_10("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrency_10.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("15279365");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrentValue_10.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("69.940000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingDetachmentPoint_10.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("15995039");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingDirtyPrice_10.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("2959400");
    noUnderlyings_0_1.set(UnderlyingEndPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingEndPrice_10.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("17183424");
    noUnderlyings_0_1.set(UnderlyingEndValue_10);
    UnderlyingInstrument_10.insert(UnderlyingEndValue_10.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_10(1237941264);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_10);
    UnderlyingInstrument_10.insert(UnderlyingExerciseStyle_10.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("8074476");
    noUnderlyings_0_1.set(UnderlyingFXRate_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRate_10.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_10('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRateCalc_10.getString());
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("19264780");
    noUnderlyings_0_1.set(UnderlyingFactor_10);
    UnderlyingInstrument_10.insert(UnderlyingFactor_10.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_10(779723870);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_10);
    UnderlyingInstrument_10.insert(UnderlyingFlowScheduleType_10.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_10("STRING_178770008");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_10);
    UnderlyingInstrument_10.insert(UnderlyingInstrRegistry_10.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_10("LOCALMKTDATE_738601162");
    noUnderlyings_0_1.set(UnderlyingIssueDate_10);
    UnderlyingInstrument_10.insert(UnderlyingIssueDate_10.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_10("STRING_2023004760");
    noUnderlyings_0_1.set(UnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(UnderlyingIssuer_10.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_10("STRING_982551732");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingLocaleOfIssue_10.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_10("LOCALMKTDATE_1217674735");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityDate_10.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_10("MONTHYEAR_1187202360");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityMonthYear_10.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_10("TZTIMEONLY_1538837943");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityTime_10.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("28.120000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_10('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_10);
    UnderlyingInstrument_10.insert(UnderlyingOptAttribute_10.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("94.740000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingOriginalNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_10("STRING_903132656");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasure_10.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("20284760");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasureQty_10.getString());
    FIX::UnderlyingProduct UnderlyingProduct_10(390901036);
    noUnderlyings_0_1.set(UnderlyingProduct_10);
    UnderlyingInstrument_10.insert(UnderlyingProduct_10.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_10(811496691);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_10);
    UnderlyingInstrument_10.insert(UnderlyingPutOrCall_10.getString());
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("13451059");
    noUnderlyings_0_1.set(UnderlyingPx_10);
    UnderlyingInstrument_10.insert(UnderlyingPx_10.getString());
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("18813299");
    noUnderlyings_0_1.set(UnderlyingQty_10);
    UnderlyingInstrument_10.insert(UnderlyingQty_10.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_10("LOCALMKTDATE_1119760261");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_10);
    UnderlyingInstrument_10.insert(UnderlyingRedemptionDate_10.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_10("STRING_876142093");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingRepoCollateralSecurityType_10.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("69.820000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseRate_10.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_10(120688518);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseTerm_10.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_10("STRING_470220047");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_10);
    UnderlyingInstrument_10.insert(UnderlyingRestructuringType_10.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_10("STRING_1177499894");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityDesc_10.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_10("EXCHANGE_1698005512");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityExchange_10.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_10("STRING_2069724027");
    noUnderlyings_0_1.set(UnderlyingSecurityID_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityID_10.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_10("STRING_1473439897");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityIDSource_10.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_10("STRING_1268864273");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecuritySubType_10.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_10("STRING_1160181643");
    noUnderlyings_0_1.set(UnderlyingSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityType_10.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_10("STRING_133403856");
    noUnderlyings_0_1.set(UnderlyingSeniority_10);
    UnderlyingInstrument_10.insert(UnderlyingSeniority_10.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_10("STRING_1858445512");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlMethod_10.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_10(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlementType_10.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("9131277");
    noUnderlyings_0_1.set(UnderlyingStartValue_10);
    UnderlyingInstrument_10.insert(UnderlyingStartValue_10.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_10("STRING_2037215520");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingStateOrProvinceOfIssue_10.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_10("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikeCurrency_10.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("8722836");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikePrice_10.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_10("STRING_747968280");
    noUnderlyings_0_1.set(UnderlyingSymbol_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbol_10.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_10("STRING_1975851199");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbolSfx_10.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_10("STRING_263637900");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingTimeUnit_10.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_10("STRING_1880361093");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasure_10.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("21174270");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasureQty_10.getString());
    all_values.push_back(UnderlyingInstrument_10);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_19("STRING_636010101");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltID_19.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_19("STRING_1998419471");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltIDSource_19.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      FIX::UnderlyingStipType UnderlyingStipType_15("STRING_1447506792");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipType_15.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_15("STRING_1196041782");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipValue_15.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      FIX::UnderlyingStipType UnderlyingStipType_16("STRING_1693234756");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipType_16.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_16("STRING_419783405");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipValue_16.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_18("STRING_1342798090");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyID_18.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_18('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyIDSource_18.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_18(394920275);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyRole_18.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_35("STRING_90993787");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubID_35.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_35(317160654);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubIDType_35.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_36("STRING_1846254233");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubID_36.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_36(1359858060);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubIDType_36.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_19("STRING_1477342297");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyID_19.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_19('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyIDSource_19.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_19(1070819924);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyRole_19.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_37("STRING_745302168");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubID_37.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_37(960551797);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubIDType_37.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_38("STRING_1946811873");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubID_38.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_38(1533951007);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubIDType_38.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_39("STRING_1832835402");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubID_39.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_39(547296505);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubIDType_39.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);

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
