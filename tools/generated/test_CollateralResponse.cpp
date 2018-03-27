#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralResponse msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralResponse_0;
  FIX::Account Account_8("STRING_345858168");
  msg.set(Account_8);
  CollateralResponse_0.insert(Account_8.getString());
  FIX::AccountType AccountType_6(7);
  msg.set(AccountType_6);
  CollateralResponse_0.insert(AccountType_6.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("9909696");
  msg.set(AccruedInterestAmt_7);
  CollateralResponse_0.insert(AccruedInterestAmt_7.getString());
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("4984032");
  msg.set(CashOutstanding_4);
  CollateralResponse_0.insert(CashOutstanding_4.getString());
  FIX::ClOrdID ClOrdID_10("STRING_213874803");
  msg.set(ClOrdID_10);
  CollateralResponse_0.insert(ClOrdID_10.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_11("LOCALMKTDATE_1480699668");
  msg.set(ClearingBusinessDate_11);
  CollateralResponse_0.insert(ClearingBusinessDate_11.getString());
  FIX::CollApplType CollApplType_1(0);
  msg.set(CollApplType_1);
  CollateralResponse_0.insert(CollApplType_1.getString());
  FIX::CollAsgnID CollAsgnID_1("STRING_554318191");
  msg.set(CollAsgnID_1);
  CollateralResponse_0.insert(CollAsgnID_1.getString());
  FIX::CollAsgnReason CollAsgnReason_2(4);
  msg.set(CollAsgnReason_2);
  CollateralResponse_0.insert(CollAsgnReason_2.getString());
  FIX::CollAsgnRejectReason CollAsgnRejectReason_0(1);
  msg.set(CollAsgnRejectReason_0);
  CollateralResponse_0.insert(CollAsgnRejectReason_0.getString());
  FIX::CollAsgnRespType CollAsgnRespType_0(1);
  msg.set(CollAsgnRespType_0);
  CollateralResponse_0.insert(CollAsgnRespType_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_1(3);
  msg.set(CollAsgnTransType_1);
  CollateralResponse_0.insert(CollAsgnTransType_1.getString());
  FIX::CollReqID CollReqID_2("STRING_958112998");
  msg.set(CollReqID_2);
  CollateralResponse_0.insert(CollReqID_2.getString());
  FIX::CollRespID CollRespID_0("STRING_1250489758");
  msg.set(CollRespID_0);
  CollateralResponse_0.insert(CollRespID_0.getString());
  FIX::Currency Currency_11("USD");
  msg.set(Currency_11);
  CollateralResponse_0.insert(Currency_11.getString());
  FIX::EncodedText EncodedText_18("DATA_2024651687");
  msg.set(EncodedText_18);
  CollateralResponse_0.insert(EncodedText_18.getString());
  FIX::EncodedTextLen EncodedTextLen_18(1105630218);
  msg.set(EncodedTextLen_18);
  CollateralResponse_0.insert(EncodedTextLen_18.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("4207235");
  msg.set(EndAccruedInterestAmt_7);
  CollateralResponse_0.insert(EndAccruedInterestAmt_7.getString());
  FIX::EndCash EndCash_7;
  EndCash_7.setString("1150516");
  msg.set(EndCash_7);
  CollateralResponse_0.insert(EndCash_7.getString());
  FIX::FinancialStatus FinancialStatus_1("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_1);
  CollateralResponse_0.insert(FinancialStatus_1.getString());
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("2589172");
  msg.set(MarginExcess_4);
  CollateralResponse_0.insert(MarginExcess_4.getString());
  FIX::OrderID OrderID_10("STRING_921973374");
  msg.set(OrderID_10);
  CollateralResponse_0.insert(OrderID_10.getString());
  FIX::Price Price_6;
  Price_6.setString("17433229");
  msg.set(Price_6);
  CollateralResponse_0.insert(Price_6.getString());
  FIX::PriceType PriceType_8(11);
  msg.set(PriceType_8);
  CollateralResponse_0.insert(PriceType_8.getString());
  FIX::QtyType QtyType_9(0);
  msg.set(QtyType_9);
  CollateralResponse_0.insert(QtyType_9.getString());
  FIX::Quantity Quantity_10;
  Quantity_10.setString("1431213");
  msg.set(Quantity_10);
  CollateralResponse_0.insert(Quantity_10.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_10("STRING_2086814148");
  msg.set(SecondaryClOrdID_10);
  CollateralResponse_0.insert(SecondaryClOrdID_10.getString());
  FIX::SecondaryOrderID SecondaryOrderID_10("STRING_122496658");
  msg.set(SecondaryOrderID_10);
  CollateralResponse_0.insert(SecondaryOrderID_10.getString());
  FIX::SettlDate SettlDate_11("LOCALMKTDATE_1531329419");
  msg.set(SettlDate_11);
  CollateralResponse_0.insert(SettlDate_11.getString());
  FIX::Side Side_10('4');
  msg.set(Side_10);
  CollateralResponse_0.insert(Side_10.getString());
  FIX::StartCash StartCash_7;
  StartCash_7.setString("4683548");
  msg.set(StartCash_7);
  CollateralResponse_0.insert(StartCash_7.getString());
  FIX::Text Text_18("STRING_1614727634");
  msg.set(Text_18);
  CollateralResponse_0.insert(Text_18.getString());
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("14942903");
  msg.set(TotalNetValue_4);
  CollateralResponse_0.insert(TotalNetValue_4.getString());
  FIX::TransactTime TransactTime_9(FIX::UTCTIMESTAMP(5, 1, 0, 16, 62003));
  msg.set(TransactTime_9);
  CollateralResponse_0.insert(TransactTime_9.getString());
  all_values.push_back(CollateralResponse_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_9;
    FIX::ExecID ExecID_17("STRING_195992068");
    noExecs_0_0.set(ExecID_17);
    ExecCollGrp_NoExecs_9.insert(ExecID_17.getString());
    all_values.push_back(ExecCollGrp_NoExecs_9);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_10;
    FIX::ExecID ExecID_18("STRING_1692868627");
    noExecs_0_1.set(ExecID_18);
    ExecCollGrp_NoExecs_10.insert(ExecID_18.getString());
    all_values.push_back(ExecCollGrp_NoExecs_10);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  FIX::AgreementCurrency AgreementCurrency_8("EUR");
  msg.set(AgreementCurrency_8);
  FinancingDetails_8.insert(AgreementCurrency_8.getString());
  FIX::AgreementDate AgreementDate_8("LOCALMKTDATE_814832052");
  msg.set(AgreementDate_8);
  FinancingDetails_8.insert(AgreementDate_8.getString());
  FIX::AgreementDesc AgreementDesc_8("STRING_2014099463");
  msg.set(AgreementDesc_8);
  FinancingDetails_8.insert(AgreementDesc_8.getString());
  FIX::AgreementID AgreementID_8("STRING_1751518304");
  msg.set(AgreementID_8);
  FinancingDetails_8.insert(AgreementID_8.getString());
  FIX::DeliveryType DeliveryType_8(0);
  msg.set(DeliveryType_8);
  FinancingDetails_8.insert(DeliveryType_8.getString());
  FIX::EndDate EndDate_8("LOCALMKTDATE_2129151102");
  msg.set(EndDate_8);
  FinancingDetails_8.insert(EndDate_8.getString());
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("12.560000");
  msg.set(MarginRatio_8);
  FinancingDetails_8.insert(MarginRatio_8.getString());
  FIX::StartDate StartDate_8("LOCALMKTDATE_1494472780");
  msg.set(StartDate_8);
  FinancingDetails_8.insert(StartDate_8.getString());
  FIX::TerminationType TerminationType_8(1);
  msg.set(TerminationType_8);
  FinancingDetails_8.insert(TerminationType_8.getString());
  all_values.push_back(FinancingDetails_8);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    FIX::EncodedLegIssuer EncodedLegIssuer_19("DATA_1377908514");
    noLegs_0_0.set(EncodedLegIssuer_19);
    InstrumentLeg_19.insert(EncodedLegIssuer_19.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_19(1480228174);
    noLegs_0_0.set(EncodedLegIssuerLen_19);
    InstrumentLeg_19.insert(EncodedLegIssuerLen_19.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_19("DATA_1471631950");
    noLegs_0_0.set(EncodedLegSecurityDesc_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDesc_19.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_19(1317239014);
    noLegs_0_0.set(EncodedLegSecurityDescLen_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDescLen_19.getString());
    FIX::LegCFICode LegCFICode_19("STRING_1602724832");
    noLegs_0_0.set(LegCFICode_19);
    InstrumentLeg_19.insert(LegCFICode_19.getString());
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("8554777");
    noLegs_0_0.set(LegContractMultiplier_19);
    InstrumentLeg_19.insert(LegContractMultiplier_19.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_19(1820559737);
    noLegs_0_0.set(LegContractMultiplierUnit_19);
    InstrumentLeg_19.insert(LegContractMultiplierUnit_19.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_19("MONTHYEAR_2071079658");
    noLegs_0_0.set(LegContractSettlMonth_19);
    InstrumentLeg_19.insert(LegContractSettlMonth_19.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_19("COUNTRY_322721708");
    noLegs_0_0.set(LegCountryOfIssue_19);
    InstrumentLeg_19.insert(LegCountryOfIssue_19.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_19("LOCALMKTDATE_1167366450");
    noLegs_0_0.set(LegCouponPaymentDate_19);
    InstrumentLeg_19.insert(LegCouponPaymentDate_19.getString());
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("41.080000");
    noLegs_0_0.set(LegCouponRate_19);
    InstrumentLeg_19.insert(LegCouponRate_19.getString());
    FIX::LegCreditRating LegCreditRating_19("STRING_3840497");
    noLegs_0_0.set(LegCreditRating_19);
    InstrumentLeg_19.insert(LegCreditRating_19.getString());
    FIX::LegCurrency LegCurrency_19("CHF");
    noLegs_0_0.set(LegCurrency_19);
    InstrumentLeg_19.insert(LegCurrency_19.getString());
    FIX::LegDatedDate LegDatedDate_19("LOCALMKTDATE_239277478");
    noLegs_0_0.set(LegDatedDate_19);
    InstrumentLeg_19.insert(LegDatedDate_19.getString());
    FIX::LegExerciseStyle LegExerciseStyle_19(1457118976);
    noLegs_0_0.set(LegExerciseStyle_19);
    InstrumentLeg_19.insert(LegExerciseStyle_19.getString());
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("4502762");
    noLegs_0_0.set(LegFactor_19);
    InstrumentLeg_19.insert(LegFactor_19.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_19(1125719144);
    noLegs_0_0.set(LegFlowScheduleType_19);
    InstrumentLeg_19.insert(LegFlowScheduleType_19.getString());
    FIX::LegInstrRegistry LegInstrRegistry_19("STRING_1653111045");
    noLegs_0_0.set(LegInstrRegistry_19);
    InstrumentLeg_19.insert(LegInstrRegistry_19.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_19("LOCALMKTDATE_2143144877");
    noLegs_0_0.set(LegInterestAccrualDate_19);
    InstrumentLeg_19.insert(LegInterestAccrualDate_19.getString());
    FIX::LegIssueDate LegIssueDate_19("LOCALMKTDATE_1115166920");
    noLegs_0_0.set(LegIssueDate_19);
    InstrumentLeg_19.insert(LegIssueDate_19.getString());
    FIX::LegIssuer LegIssuer_19("STRING_151515482");
    noLegs_0_0.set(LegIssuer_19);
    InstrumentLeg_19.insert(LegIssuer_19.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_19("STRING_810493281");
    noLegs_0_0.set(LegLocaleOfIssue_19);
    InstrumentLeg_19.insert(LegLocaleOfIssue_19.getString());
    FIX::LegMaturityDate LegMaturityDate_19("LOCALMKTDATE_981782735");
    noLegs_0_0.set(LegMaturityDate_19);
    InstrumentLeg_19.insert(LegMaturityDate_19.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_19("MONTHYEAR_1903033786");
    noLegs_0_0.set(LegMaturityMonthYear_19);
    InstrumentLeg_19.insert(LegMaturityMonthYear_19.getString());
    FIX::LegMaturityTime LegMaturityTime_19("TZTIMEONLY_2046048845");
    noLegs_0_0.set(LegMaturityTime_19);
    InstrumentLeg_19.insert(LegMaturityTime_19.getString());
    FIX::LegOptAttribute LegOptAttribute_19('9');
    noLegs_0_0.set(LegOptAttribute_19);
    InstrumentLeg_19.insert(LegOptAttribute_19.getString());
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("14882213");
    noLegs_0_0.set(LegOptionRatio_19);
    InstrumentLeg_19.insert(LegOptionRatio_19.getString());
    FIX::LegPool LegPool_19("STRING_1393037977");
    noLegs_0_0.set(LegPool_19);
    InstrumentLeg_19.insert(LegPool_19.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_19("STRING_1867091017");
    noLegs_0_0.set(LegPriceUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasure_19.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("6692483");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasureQty_19.getString());
    FIX::LegProduct LegProduct_19(623462843);
    noLegs_0_0.set(LegProduct_19);
    InstrumentLeg_19.insert(LegProduct_19.getString());
    FIX::LegPutOrCall LegPutOrCall_19(1199835543);
    noLegs_0_0.set(LegPutOrCall_19);
    InstrumentLeg_19.insert(LegPutOrCall_19.getString());
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("21408802");
    noLegs_0_0.set(LegRatioQty_19);
    InstrumentLeg_19.insert(LegRatioQty_19.getString());
    FIX::LegRedemptionDate LegRedemptionDate_19("LOCALMKTDATE_1940701857");
    noLegs_0_0.set(LegRedemptionDate_19);
    InstrumentLeg_19.insert(LegRedemptionDate_19.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_19("STRING_655076727");
    noLegs_0_0.set(LegRepoCollateralSecurityType_19);
    InstrumentLeg_19.insert(LegRepoCollateralSecurityType_19.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("43.240000");
    noLegs_0_0.set(LegRepurchaseRate_19);
    InstrumentLeg_19.insert(LegRepurchaseRate_19.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_19(1613777947);
    noLegs_0_0.set(LegRepurchaseTerm_19);
    InstrumentLeg_19.insert(LegRepurchaseTerm_19.getString());
    FIX::LegSecurityDesc LegSecurityDesc_19("STRING_578672737");
    noLegs_0_0.set(LegSecurityDesc_19);
    InstrumentLeg_19.insert(LegSecurityDesc_19.getString());
    FIX::LegSecurityExchange LegSecurityExchange_19("EXCHANGE_1171596032");
    noLegs_0_0.set(LegSecurityExchange_19);
    InstrumentLeg_19.insert(LegSecurityExchange_19.getString());
    FIX::LegSecurityID LegSecurityID_19("STRING_633660749");
    noLegs_0_0.set(LegSecurityID_19);
    InstrumentLeg_19.insert(LegSecurityID_19.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_19("STRING_1469026845");
    noLegs_0_0.set(LegSecurityIDSource_19);
    InstrumentLeg_19.insert(LegSecurityIDSource_19.getString());
    FIX::LegSecuritySubType LegSecuritySubType_19("STRING_1175436529");
    noLegs_0_0.set(LegSecuritySubType_19);
    InstrumentLeg_19.insert(LegSecuritySubType_19.getString());
    FIX::LegSecurityType LegSecurityType_19("STRING_481049932");
    noLegs_0_0.set(LegSecurityType_19);
    InstrumentLeg_19.insert(LegSecurityType_19.getString());
    FIX::LegSide LegSide_19('1');
    noLegs_0_0.set(LegSide_19);
    InstrumentLeg_19.insert(LegSide_19.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_19("STRING_1414714007");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_19);
    InstrumentLeg_19.insert(LegStateOrProvinceOfIssue_19.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_19("GBP");
    noLegs_0_0.set(LegStrikeCurrency_19);
    InstrumentLeg_19.insert(LegStrikeCurrency_19.getString());
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("3929495");
    noLegs_0_0.set(LegStrikePrice_19);
    InstrumentLeg_19.insert(LegStrikePrice_19.getString());
    FIX::LegSymbol LegSymbol_19("STRING_1443796305");
    noLegs_0_0.set(LegSymbol_19);
    InstrumentLeg_19.insert(LegSymbol_19.getString());
    FIX::LegSymbolSfx LegSymbolSfx_19("STRING_1630484946");
    noLegs_0_0.set(LegSymbolSfx_19);
    InstrumentLeg_19.insert(LegSymbolSfx_19.getString());
    FIX::LegTimeUnit LegTimeUnit_19("STRING_1508116423");
    noLegs_0_0.set(LegTimeUnit_19);
    InstrumentLeg_19.insert(LegTimeUnit_19.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_19("STRING_1595311788");
    noLegs_0_0.set(LegUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegUnitOfMeasure_19.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("2934945");
    noLegs_0_0.set(LegUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegUnitOfMeasureQty_19.getString());
    all_values.push_back(InstrumentLeg_19);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      FIX::LegSecurityAltID LegSecurityAltID_30("STRING_1350861926");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltID_30.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_30("STRING_192059777");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltIDSource_30.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      FIX::LegSecurityAltID LegSecurityAltID_31("STRING_1305865699");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltID_31.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_31("STRING_691599673");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltIDSource_31.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("77.540000");
  msg.set(AttachmentPoint_12);
  Instrument_12.insert(AttachmentPoint_12.getString());
  FIX::CFICode CFICode_12("STRING_1025473068");
  msg.set(CFICode_12);
  Instrument_12.insert(CFICode_12.getString());
  FIX::CPProgram CPProgram_12(2);
  msg.set(CPProgram_12);
  Instrument_12.insert(CPProgram_12.getString());
  FIX::CPRegType CPRegType_12("STRING_61076950");
  msg.set(CPRegType_12);
  Instrument_12.insert(CPRegType_12.getString());
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("778249");
  msg.set(CapPrice_12);
  Instrument_12.insert(CapPrice_12.getString());
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("13542445");
  msg.set(ContractMultiplier_12);
  Instrument_12.insert(ContractMultiplier_12.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_12(1);
  msg.set(ContractMultiplierUnit_12);
  Instrument_12.insert(ContractMultiplierUnit_12.getString());
  FIX::ContractSettlMonth ContractSettlMonth_12("MONTHYEAR_732901690");
  msg.set(ContractSettlMonth_12);
  Instrument_12.insert(ContractSettlMonth_12.getString());
  FIX::CountryOfIssue CountryOfIssue_12("COUNTRY_55635252");
  msg.set(CountryOfIssue_12);
  Instrument_12.insert(CountryOfIssue_12.getString());
  FIX::CouponPaymentDate CouponPaymentDate_12("LOCALMKTDATE_1468073106");
  msg.set(CouponPaymentDate_12);
  Instrument_12.insert(CouponPaymentDate_12.getString());
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("44.270000");
  msg.set(CouponRate_12);
  Instrument_12.insert(CouponRate_12.getString());
  FIX::CreditRating CreditRating_12("STRING_1227231284");
  msg.set(CreditRating_12);
  Instrument_12.insert(CreditRating_12.getString());
  FIX::DatedDate DatedDate_12("LOCALMKTDATE_2101733855");
  msg.set(DatedDate_12);
  Instrument_12.insert(DatedDate_12.getString());
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("76.250000");
  msg.set(DetachmentPoint_12);
  Instrument_12.insert(DetachmentPoint_12.getString());
  FIX::EncodedIssuer EncodedIssuer_12("DATA_255184166");
  msg.set(EncodedIssuer_12);
  Instrument_12.insert(EncodedIssuer_12.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_12(435300139);
  msg.set(EncodedIssuerLen_12);
  Instrument_12.insert(EncodedIssuerLen_12.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_12("DATA_1817665091");
  msg.set(EncodedSecurityDesc_12);
  Instrument_12.insert(EncodedSecurityDesc_12.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_12(1669898173);
  msg.set(EncodedSecurityDescLen_12);
  Instrument_12.insert(EncodedSecurityDescLen_12.getString());
  FIX::ExerciseStyle ExerciseStyle_12(2);
  msg.set(ExerciseStyle_12);
  Instrument_12.insert(ExerciseStyle_12.getString());
  FIX::Factor Factor_12;
  Factor_12.setString("13050051");
  msg.set(Factor_12);
  Instrument_12.insert(Factor_12.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_12(false);
  msg.set(FlexProductEligibilityIndicator_12);
  Instrument_12.insert(FlexProductEligibilityIndicator_12.getString());
  FIX::FlexibleIndicator FlexibleIndicator_12(false);
  msg.set(FlexibleIndicator_12);
  Instrument_12.insert(FlexibleIndicator_12.getString());
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("7880064");
  msg.set(FloorPrice_12);
  Instrument_12.insert(FloorPrice_12.getString());
  FIX::FlowScheduleType FlowScheduleType_12(2);
  msg.set(FlowScheduleType_12);
  Instrument_12.insert(FlowScheduleType_12.getString());
  FIX::InstrRegistry InstrRegistry_12("STRING_1117609845");
  msg.set(InstrRegistry_12);
  Instrument_12.insert(InstrRegistry_12.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_12('1');
  msg.set(InstrmtAssignmentMethod_12);
  Instrument_12.insert(InstrmtAssignmentMethod_12.getString());
  FIX::InterestAccrualDate InterestAccrualDate_12("LOCALMKTDATE_1765895963");
  msg.set(InterestAccrualDate_12);
  Instrument_12.insert(InterestAccrualDate_12.getString());
  FIX::IssueDate IssueDate_12("LOCALMKTDATE_320988124");
  msg.set(IssueDate_12);
  Instrument_12.insert(IssueDate_12.getString());
  FIX::Issuer Issuer_12("STRING_1273560814");
  msg.set(Issuer_12);
  Instrument_12.insert(Issuer_12.getString());
  FIX::ListMethod ListMethod_12(0);
  msg.set(ListMethod_12);
  Instrument_12.insert(ListMethod_12.getString());
  FIX::LocaleOfIssue LocaleOfIssue_12("STRING_1012587797");
  msg.set(LocaleOfIssue_12);
  Instrument_12.insert(LocaleOfIssue_12.getString());
  FIX::MaturityDate MaturityDate_12("LOCALMKTDATE_711174921");
  msg.set(MaturityDate_12);
  Instrument_12.insert(MaturityDate_12.getString());
  FIX::MaturityMonthYear MaturityMonthYear_12("MONTHYEAR_1949751083");
  msg.set(MaturityMonthYear_12);
  Instrument_12.insert(MaturityMonthYear_12.getString());
  FIX::MaturityTime MaturityTime_12("TZTIMEONLY_225952123");
  msg.set(MaturityTime_12);
  Instrument_12.insert(MaturityTime_12.getString());
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("7722518");
  msg.set(MinPriceIncrement_12);
  Instrument_12.insert(MinPriceIncrement_12.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("20275760");
  msg.set(MinPriceIncrementAmount_12);
  Instrument_12.insert(MinPriceIncrementAmount_12.getString());
  FIX::NTPositionLimit NTPositionLimit_12(1580196700);
  msg.set(NTPositionLimit_12);
  Instrument_12.insert(NTPositionLimit_12.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("70.300000");
  msg.set(NotionalPercentageOutstanding_12);
  Instrument_12.insert(NotionalPercentageOutstanding_12.getString());
  FIX::OptAttribute OptAttribute_12('6');
  msg.set(OptAttribute_12);
  Instrument_12.insert(OptAttribute_12.getString());
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("16358319");
  msg.set(OptPayoutAmount_12);
  Instrument_12.insert(OptPayoutAmount_12.getString());
  FIX::OptPayoutType OptPayoutType_12(2);
  msg.set(OptPayoutType_12);
  Instrument_12.insert(OptPayoutType_12.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("85.160000");
  msg.set(OriginalNotionalPercentageOutstanding_12);
  Instrument_12.insert(OriginalNotionalPercentageOutstanding_12.getString());
  FIX::Pool Pool_12("STRING_715579589");
  msg.set(Pool_12);
  Instrument_12.insert(Pool_12.getString());
  FIX::PositionLimit PositionLimit_12(2048870344);
  msg.set(PositionLimit_12);
  Instrument_12.insert(PositionLimit_12.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_12("STRING_INX");
  msg.set(PriceQuoteMethod_12);
  Instrument_12.insert(PriceQuoteMethod_12.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_12("STRING_970763755");
  msg.set(PriceUnitOfMeasure_12);
  Instrument_12.insert(PriceUnitOfMeasure_12.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("3366868");
  msg.set(PriceUnitOfMeasureQty_12);
  Instrument_12.insert(PriceUnitOfMeasureQty_12.getString());
  FIX::Product Product_14(11);
  msg.set(Product_14);
  Instrument_12.insert(Product_14.getString());
  FIX::ProductComplex ProductComplex_12("STRING_493178280");
  msg.set(ProductComplex_12);
  Instrument_12.insert(ProductComplex_12.getString());
  FIX::PutOrCall PutOrCall_12(0);
  msg.set(PutOrCall_12);
  Instrument_12.insert(PutOrCall_12.getString());
  FIX::RedemptionDate RedemptionDate_12("LOCALMKTDATE_1385389097");
  msg.set(RedemptionDate_12);
  Instrument_12.insert(RedemptionDate_12.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_12("STRING_408542309");
  msg.set(RepoCollateralSecurityType_12);
  Instrument_12.insert(RepoCollateralSecurityType_12.getString());
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("2.930000");
  msg.set(RepurchaseRate_12);
  Instrument_12.insert(RepurchaseRate_12.getString());
  FIX::RepurchaseTerm RepurchaseTerm_12(25911907);
  msg.set(RepurchaseTerm_12);
  Instrument_12.insert(RepurchaseTerm_12.getString());
  FIX::RestructuringType RestructuringType_12("STRING_MM");
  msg.set(RestructuringType_12);
  Instrument_12.insert(RestructuringType_12.getString());
  FIX::SecurityDesc SecurityDesc_12("STRING_1202580139");
  msg.set(SecurityDesc_12);
  Instrument_12.insert(SecurityDesc_12.getString());
  FIX::SecurityExchange SecurityExchange_12("EXCHANGE_1107412944");
  msg.set(SecurityExchange_12);
  Instrument_12.insert(SecurityExchange_12.getString());
  FIX::SecurityGroup SecurityGroup_12("STRING_1450435077");
  msg.set(SecurityGroup_12);
  Instrument_12.insert(SecurityGroup_12.getString());
  FIX::SecurityID SecurityID_12("STRING_1523568263");
  msg.set(SecurityID_12);
  Instrument_12.insert(SecurityID_12.getString());
  FIX::SecurityIDSource SecurityIDSource_12("STRING_K");
  msg.set(SecurityIDSource_12);
  Instrument_12.insert(SecurityIDSource_12.getString());
  FIX::SecurityStatus SecurityStatus_12("STRING_2");
  msg.set(SecurityStatus_12);
  Instrument_12.insert(SecurityStatus_12.getString());
  FIX::SecuritySubType SecuritySubType_12("STRING_388672412");
  msg.set(SecuritySubType_12);
  Instrument_12.insert(SecuritySubType_12.getString());
  FIX::SecurityType SecurityType_14("STRING_TAN");
  msg.set(SecurityType_14);
  Instrument_12.insert(SecurityType_14.getString());
  FIX::Seniority Seniority_12("STRING_SB");
  msg.set(Seniority_12);
  Instrument_12.insert(Seniority_12.getString());
  FIX::SettlMethod SettlMethod_12('C');
  msg.set(SettlMethod_12);
  Instrument_12.insert(SettlMethod_12.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_12("STRING_1716916903");
  msg.set(SettleOnOpenFlag_12);
  Instrument_12.insert(SettleOnOpenFlag_12.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_12("STRING_2057072925");
  msg.set(StateOrProvinceOfIssue_12);
  Instrument_12.insert(StateOrProvinceOfIssue_12.getString());
  FIX::StrikeCurrency StrikeCurrency_12("CAN");
  msg.set(StrikeCurrency_12);
  Instrument_12.insert(StrikeCurrency_12.getString());
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("5225833");
  msg.set(StrikeMultiplier_12);
  Instrument_12.insert(StrikeMultiplier_12.getString());
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("16831695");
  msg.set(StrikePrice_12);
  Instrument_12.insert(StrikePrice_12.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_12(5);
  msg.set(StrikePriceBoundaryMethod_12);
  Instrument_12.insert(StrikePriceBoundaryMethod_12.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("82.340000");
  msg.set(StrikePriceBoundaryPrecision_12);
  Instrument_12.insert(StrikePriceBoundaryPrecision_12.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_12(2);
  msg.set(StrikePriceDeterminationMethod_12);
  Instrument_12.insert(StrikePriceDeterminationMethod_12.getString());
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("445034");
  msg.set(StrikeValue_12);
  Instrument_12.insert(StrikeValue_12.getString());
  FIX::Symbol Symbol_12("STRING_709870728");
  msg.set(Symbol_12);
  Instrument_12.insert(Symbol_12.getString());
  FIX::SymbolSfx SymbolSfx_12("STRING_CD");
  msg.set(SymbolSfx_12);
  Instrument_12.insert(SymbolSfx_12.getString());
  FIX::TimeUnit TimeUnit_12("STRING_Min");
  msg.set(TimeUnit_12);
  Instrument_12.insert(TimeUnit_12.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_12(2);
  msg.set(UnderlyingPriceDeterminationMethod_12);
  Instrument_12.insert(UnderlyingPriceDeterminationMethod_12.getString());
  FIX::UnitOfMeasure UnitOfMeasure_12("STRING_tn");
  msg.set(UnitOfMeasure_12);
  Instrument_12.insert(UnitOfMeasure_12.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("9438625");
  msg.set(UnitOfMeasureQty_12);
  Instrument_12.insert(UnitOfMeasureQty_12.getString());
  FIX::ValuationMethod ValuationMethod_12("STRING_CDSD");
  msg.set(ValuationMethod_12);
  Instrument_12.insert(ValuationMethod_12.getString());
  all_values.push_back(Instrument_12);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    FIX::ComplexEventCondition ComplexEventCondition_26(1);
    noComplexEvents_0_0.set(ComplexEventCondition_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventCondition_26.getString());
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("540720");
    noComplexEvents_0_0.set(ComplexEventPrice_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPrice_26.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_26(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryMethod_26.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("93.270000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryPrecision_26.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_26(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceTimeType_26.getString());
    FIX::ComplexEventType ComplexEventType_26(2);
    noComplexEvents_0_0.set(ComplexEventType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventType_26.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("16074975");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexOptPayoutAmount_26.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_26);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      FIX::ComplexEventEndDate ComplexEventEndDate_55(FIX::UTCTIMESTAMP(3, 40, 51, 15, 122010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventEndDate_55.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_55(FIX::UTCTIMESTAMP(17, 14, 31, 7, 22003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventStartDate_55.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        FIX::ComplexEventEndTime ComplexEventEndTime_105(FIX::UTCTIMEONLY(17, 13, 34));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventEndTime_105.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_105(FIX::UTCTIMEONLY(0, 48, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventStartTime_105.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        FIX::ComplexEventEndTime ComplexEventEndTime_106(FIX::UTCTIMEONLY(9, 29, 32));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventEndTime_106.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_106(FIX::UTCTIMEONLY(7, 3, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventStartTime_106.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        FIX::ComplexEventEndTime ComplexEventEndTime_107(FIX::UTCTIMEONLY(22, 3, 7));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventEndTime_107.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_107(FIX::UTCTIMEONLY(19, 36, 0));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventStartTime_107.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    FIX::ComplexEventCondition ComplexEventCondition_27(1);
    noComplexEvents_0_1.set(ComplexEventCondition_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventCondition_27.getString());
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("11773456");
    noComplexEvents_0_1.set(ComplexEventPrice_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPrice_27.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_27(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryMethod_27.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("7.950000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryPrecision_27.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_27(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceTimeType_27.getString());
    FIX::ComplexEventType ComplexEventType_27(8);
    noComplexEvents_0_1.set(ComplexEventType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventType_27.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("21008510");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexOptPayoutAmount_27.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_27);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      FIX::ComplexEventEndDate ComplexEventEndDate_56(FIX::UTCTIMESTAMP(19, 18, 44, 8, 112013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventEndDate_56.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_56(FIX::UTCTIMESTAMP(7, 43, 33, 6, 72004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventStartDate_56.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        FIX::ComplexEventEndTime ComplexEventEndTime_108(FIX::UTCTIMEONLY(6, 56, 25));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventEndTime_108.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_108(FIX::UTCTIMEONLY(3, 53, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventStartTime_108.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        FIX::ComplexEventEndTime ComplexEventEndTime_109(FIX::UTCTIMEONLY(16, 51, 15));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventEndTime_109.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_109(FIX::UTCTIMEONLY(11, 9, 36));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventStartTime_109.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      FIX::ComplexEventEndDate ComplexEventEndDate_57(FIX::UTCTIMESTAMP(16, 46, 50, 8, 102009));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventEndDate_57.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_57(FIX::UTCTIMESTAMP(8, 38, 19, 14, 92011));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventStartDate_57.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        FIX::ComplexEventEndTime ComplexEventEndTime_110(FIX::UTCTIMEONLY(18, 28, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventEndTime_110.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_110(FIX::UTCTIMEONLY(11, 45, 37));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventStartTime_110.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        FIX::ComplexEventEndTime ComplexEventEndTime_111(FIX::UTCTIMEONLY(1, 20, 22));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventEndTime_111.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_111(FIX::UTCTIMEONLY(7, 31, 33));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventStartTime_111.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    FIX::ComplexEventCondition ComplexEventCondition_28(2);
    noComplexEvents_0_2.set(ComplexEventCondition_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventCondition_28.getString());
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("14696682");
    noComplexEvents_0_2.set(ComplexEventPrice_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPrice_28.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_28(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryMethod_28.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("34.430000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryPrecision_28.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_28(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceTimeType_28.getString());
    FIX::ComplexEventType ComplexEventType_28(9);
    noComplexEvents_0_2.set(ComplexEventType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventType_28.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("20047243");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexOptPayoutAmount_28.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_28);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      FIX::ComplexEventEndDate ComplexEventEndDate_58(FIX::UTCTIMESTAMP(9, 28, 11, 17, 92011));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventEndDate_58.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_58(FIX::UTCTIMESTAMP(14, 3, 44, 15, 72017));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventStartDate_58.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        FIX::ComplexEventEndTime ComplexEventEndTime_112(FIX::UTCTIMEONLY(7, 28, 7));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventEndTime_112.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_112(FIX::UTCTIMEONLY(4, 30, 13));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventStartTime_112.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        FIX::ComplexEventEndTime ComplexEventEndTime_113(FIX::UTCTIMEONLY(14, 24, 44));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventEndTime_113.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_113(FIX::UTCTIMEONLY(9, 42, 35));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventStartTime_113.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        FIX::ComplexEventEndTime ComplexEventEndTime_114(FIX::UTCTIMEONLY(7, 56, 5));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventEndTime_114.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_114(FIX::UTCTIMEONLY(16, 40, 13));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventStartTime_114.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    FIX::EventDate EventDate_25("LOCALMKTDATE_1480440215");
    noEvents_0_0.set(EventDate_25);
    EvntGrp_NoEvents_25.insert(EventDate_25.getString());
    FIX::EventPx EventPx_25;
    EventPx_25.setString("18734840");
    noEvents_0_0.set(EventPx_25);
    EvntGrp_NoEvents_25.insert(EventPx_25.getString());
    FIX::EventText EventText_25("STRING_957406781");
    noEvents_0_0.set(EventText_25);
    EvntGrp_NoEvents_25.insert(EventText_25.getString());
    FIX::EventTime EventTime_25(FIX::UTCTIMESTAMP(2, 50, 43, 5, 112007));
    noEvents_0_0.set(EventTime_25);
    EvntGrp_NoEvents_25.insert(EventTime_25.getString());
    FIX::EventType EventType_25(2);
    noEvents_0_0.set(EventType_25);
    EvntGrp_NoEvents_25.insert(EventType_25.getString());
    all_values.push_back(EvntGrp_NoEvents_25);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    FIX::EventDate EventDate_26("LOCALMKTDATE_1831432358");
    noEvents_0_1.set(EventDate_26);
    EvntGrp_NoEvents_26.insert(EventDate_26.getString());
    FIX::EventPx EventPx_26;
    EventPx_26.setString("9737728");
    noEvents_0_1.set(EventPx_26);
    EvntGrp_NoEvents_26.insert(EventPx_26.getString());
    FIX::EventText EventText_26("STRING_973110106");
    noEvents_0_1.set(EventText_26);
    EvntGrp_NoEvents_26.insert(EventText_26.getString());
    FIX::EventTime EventTime_26(FIX::UTCTIMESTAMP(15, 3, 55, 25, 12012));
    noEvents_0_1.set(EventTime_26);
    EvntGrp_NoEvents_26.insert(EventTime_26.getString());
    FIX::EventType EventType_26(2);
    noEvents_0_1.set(EventType_26);
    EvntGrp_NoEvents_26.insert(EventType_26.getString());
    all_values.push_back(EvntGrp_NoEvents_26);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    FIX::InstrumentPartyID InstrumentPartyID_22("STRING_788165081");
    noInstrumentParties_0_0.set(InstrumentPartyID_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyID_22.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_22('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyIDSource_22.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_22(1585116255);
    noInstrumentParties_0_0.set(InstrumentPartyRole_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyRole_22.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      FIX::InstrumentPartySubID InstrumentPartySubID_39("STRING_691305173");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubID_39.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_39(1487304228);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubIDType_39.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      FIX::InstrumentPartySubID InstrumentPartySubID_40("STRING_661348447");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubID_40.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_40(1084577403);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubIDType_40.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      FIX::InstrumentPartySubID InstrumentPartySubID_41("STRING_820260795");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubID_41.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_41(387348836);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubIDType_41.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    FIX::SecurityAltID SecurityAltID_26("STRING_664149073");
    noSecurityAltID_0_0.set(SecurityAltID_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltID_26.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_26("STRING_195623895");
    noSecurityAltID_0_0.set(SecurityAltIDSource_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltIDSource_26.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    FIX::SecurityAltID SecurityAltID_27("STRING_1970370926");
    noSecurityAltID_0_1.set(SecurityAltID_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltID_27.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_27("STRING_1706884017");
    noSecurityAltID_0_1.set(SecurityAltIDSource_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltIDSource_27.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_28;
    FIX::SecurityAltID SecurityAltID_28("STRING_622849216");
    noSecurityAltID_0_2.set(SecurityAltID_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltID_28.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_28("STRING_1196191529");
    noSecurityAltID_0_2.set(SecurityAltIDSource_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltIDSource_28.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  FIX::SecurityXML SecurityXML_25("XMLDATA_1904825920");
  msg.set(SecurityXML_25);
  FIX::SecurityXMLLen SecurityXMLLen_12(1719094618);
  msg.set(SecurityXMLLen_12);
  FIX::SecurityXMLSchema SecurityXMLSchema_12("STRING_880140239");
  msg.set(SecurityXMLSchema_12);
  SecurityXML_24.insert(SecurityXMLSchema_12.getString());
  all_values.push_back(SecurityXML_24);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_15;
    FIX::MiscFeeAmt MiscFeeAmt_15;
    MiscFeeAmt_15.setString("5447210");
    noMiscFees_0_0.set(MiscFeeAmt_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeAmt_15.getString());
    FIX::MiscFeeBasis MiscFeeBasis_15(2);
    noMiscFees_0_0.set(MiscFeeBasis_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeBasis_15.getString());
    FIX::MiscFeeCurr MiscFeeCurr_15("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeCurr_15.getString());
    FIX::MiscFeeType MiscFeeType_15("STRING_5");
    noMiscFees_0_0.set(MiscFeeType_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeType_15.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_15);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    FIX::PartyID PartyID_28("STRING_655893115");
    noPartyIDs_0_0.set(PartyID_28);
    Parties_NoPartyIDs_28.insert(PartyID_28.getString());
    FIX::PartyIDSource PartyIDSource_28('E');
    noPartyIDs_0_0.set(PartyIDSource_28);
    Parties_NoPartyIDs_28.insert(PartyIDSource_28.getString());
    FIX::PartyRole PartyRole_28(73);
    noPartyIDs_0_0.set(PartyRole_28);
    Parties_NoPartyIDs_28.insert(PartyRole_28.getString());
    all_values.push_back(Parties_NoPartyIDs_28);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      FIX::PartySubID PartySubID_60("STRING_1347011582");
      noPartySubIDs_0_1_0.set(PartySubID_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubID_60.getString());
      FIX::PartySubIDType PartySubIDType_60(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubIDType_60.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      FIX::PartySubID PartySubID_61("STRING_27320953");
      noPartySubIDs_0_1_1.set(PartySubID_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubID_61.getString());
      FIX::PartySubIDType PartySubIDType_61(6);
      noPartySubIDs_0_1_1.set(PartySubIDType_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubIDType_61.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      FIX::PartySubID PartySubID_62("STRING_2095360457");
      noPartySubIDs_0_1_2.set(PartySubID_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubID_62.getString());
      FIX::PartySubIDType PartySubIDType_62(26);
      noPartySubIDs_0_1_2.set(PartySubIDType_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubIDType_62.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    FIX::PartyID PartyID_29("STRING_873031804");
    noPartyIDs_0_1.set(PartyID_29);
    Parties_NoPartyIDs_29.insert(PartyID_29.getString());
    FIX::PartyIDSource PartyIDSource_29('2');
    noPartyIDs_0_1.set(PartyIDSource_29);
    Parties_NoPartyIDs_29.insert(PartyIDSource_29.getString());
    FIX::PartyRole PartyRole_29(9);
    noPartyIDs_0_1.set(PartyRole_29);
    Parties_NoPartyIDs_29.insert(PartyRole_29.getString());
    all_values.push_back(Parties_NoPartyIDs_29);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      FIX::PartySubID PartySubID_63("STRING_926954749");
      noPartySubIDs_1_1_0.set(PartySubID_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubID_63.getString());
      FIX::PartySubIDType PartySubIDType_63(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubIDType_63.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_7("EUR");
  msg.set(BenchmarkCurveCurrency_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveCurrency_7.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_7("STRING_Treasury");
  msg.set(BenchmarkCurveName_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveName_7.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_7("STRING_2078853752");
  msg.set(BenchmarkCurvePoint_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurvePoint_7.getString());
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("19460335");
  msg.set(BenchmarkPrice_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPrice_7.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_7(168294043);
  msg.set(BenchmarkPriceType_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPriceType_7.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_7("STRING_1650464722");
  msg.set(BenchmarkSecurityID_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityID_7.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_7("STRING_678690148");
  msg.set(BenchmarkSecurityIDSource_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityIDSource_7.getString());
  FIX::Spread Spread_7;
  Spread_7.setString("8994091");
  msg.set(Spread_7);
  SpreadOrBenchmarkCurveData_7.insert(Spread_7.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_7);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    FIX::StipulationType StipulationType_13("STRING_BROKERCREDIT");
    noStipulations_0_0.set(StipulationType_13);
    Stipulations_NoStipulations_13.insert(StipulationType_13.getString());
    FIX::StipulationValue StipulationValue_13("STRING_554829021");
    noStipulations_0_0.set(StipulationValue_13);
    Stipulations_NoStipulations_13.insert(StipulationValue_13.getString());
    all_values.push_back(Stipulations_NoStipulations_13);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    FIX::StipulationType StipulationType_14("STRING_ISSUE");
    noStipulations_0_1.set(StipulationType_14);
    Stipulations_NoStipulations_14.insert(StipulationType_14.getString());
    FIX::StipulationValue StipulationValue_14("STRING_1079552909");
    noStipulations_0_1.set(StipulationValue_14);
    Stipulations_NoStipulations_14.insert(StipulationValue_14.getString());
    all_values.push_back(Stipulations_NoStipulations_14);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    FIX::StipulationType StipulationType_15("STRING_DISCOUNT");
    noStipulations_0_2.set(StipulationType_15);
    Stipulations_NoStipulations_15.insert(StipulationType_15.getString());
    FIX::StipulationValue StipulationValue_15("STRING_1560740485");
    noStipulations_0_2.set(StipulationValue_15);
    Stipulations_NoStipulations_15.insert(StipulationValue_15.getString());
    all_values.push_back(Stipulations_NoStipulations_15);

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_10;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_10("STRING_294913275");
    noTrades_0_0.set(SecondaryTradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(SecondaryTradeReportID_10.getString());
    FIX::TradeReportID TradeReportID_10("STRING_2945183");
    noTrades_0_0.set(TradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(TradeReportID_10.getString());
    all_values.push_back(TrdCollGrp_NoTrades_10);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_11;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_11("STRING_837927344");
    noTrades_0_1.set(SecondaryTradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(SecondaryTradeReportID_11.getString());
    FIX::TradeReportID TradeReportID_11("STRING_1698968560");
    noTrades_0_1.set(TradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(TradeReportID_11.getString());
    all_values.push_back(TrdCollGrp_NoTrades_11);

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_12;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_12("STRING_30266136");
    noTrades_0_2.set(SecondaryTradeReportID_12);
    TrdCollGrp_NoTrades_12.insert(SecondaryTradeReportID_12.getString());
    FIX::TradeReportID TradeReportID_12("STRING_1049610700");
    noTrades_0_2.set(TradeReportID_12);
    TrdCollGrp_NoTrades_12.insert(TradeReportID_12.getString());
    all_values.push_back(TrdCollGrp_NoTrades_12);

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_7("MULTIPLESTRINGVALUE_MOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskOrderHandlingInst_7.getString());
    FIX::DeskType DeskType_7("STRING_D");
    noTrdRegTimestamps_0_0.set(DeskType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskType_7.getString());
    FIX::DeskTypeSource DeskTypeSource_7(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskTypeSource_7.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_7(FIX::UTCTIMESTAMP(1, 43, 59, 24, 72016));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestamp_7.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_7("STRING_275430488");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampOrigin_7.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_7(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampType_7.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_8("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskOrderHandlingInst_8.getString());
    FIX::DeskType DeskType_8("STRING_PT");
    noTrdRegTimestamps_0_1.set(DeskType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskType_8.getString());
    FIX::DeskTypeSource DeskTypeSource_8(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskTypeSource_8.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_8(FIX::UTCTIMESTAMP(9, 10, 35, 27, 42011));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestamp_8.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_8("STRING_144217920");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampOrigin_8.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_8(2);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampType_8.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_8);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    FIX::CollAction CollAction_2(2);
    noUnderlyings_0_0.set(CollAction_2);
    UndInstrmtCollGrp_NoUnderlyings_2.insert(CollAction_2.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_16("DATA_1781900585");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuer_16.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_16(522549191);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuerLen_16.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_16("DATA_177429239");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDesc_16.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_16(684027638);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDescLen_16.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("219109");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_16);
    UnderlyingInstrument_16.insert(UnderlyingAdjustedQuantity_16.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("5.560000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_16);
    UnderlyingInstrument_16.insert(UnderlyingAllocationPercent_16.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("64.940000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingAttachmentPoint_16.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_16("STRING_553726846");
    noUnderlyings_0_0.set(UnderlyingCFICode_16);
    UnderlyingInstrument_16.insert(UnderlyingCFICode_16.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_16("STRING_1307130554");
    noUnderlyings_0_0.set(UnderlyingCPProgram_16);
    UnderlyingInstrument_16.insert(UnderlyingCPProgram_16.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_16("STRING_1494725991");
    noUnderlyings_0_0.set(UnderlyingCPRegType_16);
    UnderlyingInstrument_16.insert(UnderlyingCPRegType_16.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("20124975");
    noUnderlyings_0_0.set(UnderlyingCapValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCapValue_16.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("17434919");
    noUnderlyings_0_0.set(UnderlyingCashAmount_16);
    UnderlyingInstrument_16.insert(UnderlyingCashAmount_16.getString());
    FIX::UnderlyingCashType UnderlyingCashType_16("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_16);
    UnderlyingInstrument_16.insert(UnderlyingCashType_16.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("20736265");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplier_16.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_16(443321476);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplierUnit_16.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_16("COUNTRY_2114216864");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingCountryOfIssue_16.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_16("LOCALMKTDATE_1933305563");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponPaymentDate_16.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("86.890000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponRate_16.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_16("STRING_1892628427");
    noUnderlyings_0_0.set(UnderlyingCreditRating_16);
    UnderlyingInstrument_16.insert(UnderlyingCreditRating_16.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_16("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrency_16.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("17187421");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrentValue_16.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("56.040000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingDetachmentPoint_16.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("15488231");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingDirtyPrice_16.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("3022195");
    noUnderlyings_0_0.set(UnderlyingEndPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingEndPrice_16.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("32694");
    noUnderlyings_0_0.set(UnderlyingEndValue_16);
    UnderlyingInstrument_16.insert(UnderlyingEndValue_16.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_16(77490494);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_16);
    UnderlyingInstrument_16.insert(UnderlyingExerciseStyle_16.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("4464374");
    noUnderlyings_0_0.set(UnderlyingFXRate_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRate_16.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_16('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRateCalc_16.getString());
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("10485547");
    noUnderlyings_0_0.set(UnderlyingFactor_16);
    UnderlyingInstrument_16.insert(UnderlyingFactor_16.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_16(593600599);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_16);
    UnderlyingInstrument_16.insert(UnderlyingFlowScheduleType_16.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_16("STRING_581659614");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_16);
    UnderlyingInstrument_16.insert(UnderlyingInstrRegistry_16.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_16("LOCALMKTDATE_1571103964");
    noUnderlyings_0_0.set(UnderlyingIssueDate_16);
    UnderlyingInstrument_16.insert(UnderlyingIssueDate_16.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_16("STRING_771029838");
    noUnderlyings_0_0.set(UnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(UnderlyingIssuer_16.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_16("STRING_1265687252");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingLocaleOfIssue_16.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_16("LOCALMKTDATE_1593014877");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityDate_16.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_16("MONTHYEAR_345866747");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityMonthYear_16.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_16("TZTIMEONLY_1724873747");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityTime_16.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("17.230000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_16('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_16);
    UnderlyingInstrument_16.insert(UnderlyingOptAttribute_16.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("60.900000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingOriginalNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_16("STRING_2011755605");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasure_16.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("12490056");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasureQty_16.getString());
    FIX::UnderlyingProduct UnderlyingProduct_16(763418818);
    noUnderlyings_0_0.set(UnderlyingProduct_16);
    UnderlyingInstrument_16.insert(UnderlyingProduct_16.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_16(1937898549);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_16);
    UnderlyingInstrument_16.insert(UnderlyingPutOrCall_16.getString());
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("16923270");
    noUnderlyings_0_0.set(UnderlyingPx_16);
    UnderlyingInstrument_16.insert(UnderlyingPx_16.getString());
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("7301520");
    noUnderlyings_0_0.set(UnderlyingQty_16);
    UnderlyingInstrument_16.insert(UnderlyingQty_16.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_16("LOCALMKTDATE_1723720464");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_16);
    UnderlyingInstrument_16.insert(UnderlyingRedemptionDate_16.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_16("STRING_1003772124");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingRepoCollateralSecurityType_16.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("68.140000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseRate_16.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_16(2047911498);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseTerm_16.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_16("STRING_82749879");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_16);
    UnderlyingInstrument_16.insert(UnderlyingRestructuringType_16.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_16("STRING_46555306");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityDesc_16.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_16("EXCHANGE_598123454");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityExchange_16.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_16("STRING_1631573018");
    noUnderlyings_0_0.set(UnderlyingSecurityID_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityID_16.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_16("STRING_348774881");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityIDSource_16.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_16("STRING_601392889");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecuritySubType_16.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_16("STRING_1709063513");
    noUnderlyings_0_0.set(UnderlyingSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityType_16.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_16("STRING_795212376");
    noUnderlyings_0_0.set(UnderlyingSeniority_16);
    UnderlyingInstrument_16.insert(UnderlyingSeniority_16.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_16("STRING_1548635566");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlMethod_16.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_16(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlementType_16.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("13888129");
    noUnderlyings_0_0.set(UnderlyingStartValue_16);
    UnderlyingInstrument_16.insert(UnderlyingStartValue_16.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_16("STRING_2130295181");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingStateOrProvinceOfIssue_16.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_16("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikeCurrency_16.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("12484987");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikePrice_16.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_16("STRING_1626769832");
    noUnderlyings_0_0.set(UnderlyingSymbol_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbol_16.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_16("STRING_358225913");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbolSfx_16.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_16("STRING_825888884");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingTimeUnit_16.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_16("STRING_1626027907");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasure_16.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("20112232");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasureQty_16.getString());
    all_values.push_back(UnderlyingInstrument_16);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_29("STRING_1490299864");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltID_29.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_29("STRING_1112745172");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_29);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_29.insert(UnderlyingSecurityAltIDSource_29.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      FIX::UnderlyingStipType UnderlyingStipType_27("STRING_1280714765");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipType_27.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_27("STRING_657588607");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipValue_27.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      FIX::UnderlyingStipType UnderlyingStipType_28("STRING_1244092180");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipType_28.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_28("STRING_856951581");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipValue_28.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      FIX::UnderlyingStipType UnderlyingStipType_29("STRING_1661360731");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipType_29.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_29("STRING_1719388994");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipValue_29.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_29("STRING_1744110610");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyID_29.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_29('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyIDSource_29.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_29(1355502885);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyRole_29.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_54("STRING_2114719181");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubID_54.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_54(1956895775);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubIDType_54.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_55("STRING_789779846");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubID_55.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_55(762447910);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubIDType_55.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_56("STRING_1358047693");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubID_56.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_56(1399914484);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_56);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56.insert(UnderlyingInstrumentPartySubIDType_56.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_30("STRING_3777237");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyID_30.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_30('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyIDSource_30.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_30(1433669439);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyRole_30.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_57("STRING_441874364");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubID_57.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_57(912955623);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_57);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57.insert(UnderlyingInstrumentPartySubIDType_57.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
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
