#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralAssignment.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralAssignment, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralAssignment msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_0;
  FIX::Account Account_4("STRING_1895826870");
  msg.set(Account_4);
  CollateralAssignment_0.insert(Account_4.getString());
  FIX::AccountType AccountType_1(8);
  msg.set(AccountType_1);
  CollateralAssignment_0.insert(AccountType_1.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("16776779");
  msg.set(AccruedInterestAmt_3);
  CollateralAssignment_0.insert(AccruedInterestAmt_3.getString());
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("4886056");
  msg.set(CashOutstanding_0);
  CollateralAssignment_0.insert(CashOutstanding_0.getString());
  FIX::ClOrdID ClOrdID_6("STRING_2075241298");
  msg.set(ClOrdID_6);
  CollateralAssignment_0.insert(ClOrdID_6.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_6("LOCALMKTDATE_57304410");
  msg.set(ClearingBusinessDate_6);
  CollateralAssignment_0.insert(ClearingBusinessDate_6.getString());
  FIX::CollAsgnID CollAsgnID_0("STRING_2004462742");
  msg.set(CollAsgnID_0);
  CollateralAssignment_0.insert(CollAsgnID_0.getString());
  FIX::CollAsgnReason CollAsgnReason_0(3);
  msg.set(CollAsgnReason_0);
  CollateralAssignment_0.insert(CollAsgnReason_0.getString());
  FIX::CollAsgnRefID CollAsgnRefID_0("STRING_1075395536");
  msg.set(CollAsgnRefID_0);
  CollateralAssignment_0.insert(CollAsgnRefID_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_0(1);
  msg.set(CollAsgnTransType_0);
  CollateralAssignment_0.insert(CollAsgnTransType_0.getString());
  FIX::CollReqID CollReqID_0("STRING_1184572069");
  msg.set(CollReqID_0);
  CollateralAssignment_0.insert(CollReqID_0.getString());
  FIX::Currency Currency_6("CHF");
  msg.set(Currency_6);
  CollateralAssignment_0.insert(Currency_6.getString());
  FIX::EncodedText EncodedText_15("DATA_1380391665");
  msg.set(EncodedText_15);
  CollateralAssignment_0.insert(EncodedText_15.getString());
  FIX::EncodedTextLen EncodedTextLen_15(891703050);
  msg.set(EncodedTextLen_15);
  CollateralAssignment_0.insert(EncodedTextLen_15.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("19893301");
  msg.set(EndAccruedInterestAmt_3);
  CollateralAssignment_0.insert(EndAccruedInterestAmt_3.getString());
  FIX::EndCash EndCash_3;
  EndCash_3.setString("9926453");
  msg.set(EndCash_3);
  CollateralAssignment_0.insert(EndCash_3.getString());
  FIX::ExpireTime ExpireTime_0(FIX::UTCTIMESTAMP(16, 11, 42, 24, 3, 2008));
  msg.set(ExpireTime_0);
  CollateralAssignment_0.insert(ExpireTime_0.getString());
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("17340724");
  msg.set(MarginExcess_0);
  CollateralAssignment_0.insert(MarginExcess_0.getString());
  FIX::OrderID OrderID_6("STRING_832048");
  msg.set(OrderID_6);
  CollateralAssignment_0.insert(OrderID_6.getString());
  FIX::Price Price_4;
  Price_4.setString("2118282");
  msg.set(Price_4);
  CollateralAssignment_0.insert(Price_4.getString());
  FIX::PriceType PriceType_6(8);
  msg.set(PriceType_6);
  CollateralAssignment_0.insert(PriceType_6.getString());
  FIX::QtyType QtyType_4(1);
  msg.set(QtyType_4);
  CollateralAssignment_0.insert(QtyType_4.getString());
  FIX::Quantity Quantity_5;
  Quantity_5.setString("17814453");
  msg.set(Quantity_5);
  CollateralAssignment_0.insert(Quantity_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_6("STRING_1899824205");
  msg.set(SecondaryClOrdID_6);
  CollateralAssignment_0.insert(SecondaryClOrdID_6.getString());
  FIX::SecondaryOrderID SecondaryOrderID_6("STRING_1299260118");
  msg.set(SecondaryOrderID_6);
  CollateralAssignment_0.insert(SecondaryOrderID_6.getString());
  FIX::SettlDate SettlDate_9("LOCALMKTDATE_87047954");
  msg.set(SettlDate_9);
  CollateralAssignment_0.insert(SettlDate_9.getString());
  FIX::SettlSessID SettlSessID_2("STRING_RTH");
  msg.set(SettlSessID_2);
  CollateralAssignment_0.insert(SettlSessID_2.getString());
  FIX::SettlSessSubID SettlSessSubID_1("STRING_1787865795");
  msg.set(SettlSessSubID_1);
  CollateralAssignment_0.insert(SettlSessSubID_1.getString());
  FIX::Side Side_9('5');
  msg.set(Side_9);
  CollateralAssignment_0.insert(Side_9.getString());
  FIX::StartCash StartCash_3;
  StartCash_3.setString("14873228");
  msg.set(StartCash_3);
  CollateralAssignment_0.insert(StartCash_3.getString());
  FIX::Text Text_15("STRING_1644844889");
  msg.set(Text_15);
  CollateralAssignment_0.insert(Text_15.getString());
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("12527750");
  msg.set(TotalNetValue_0);
  CollateralAssignment_0.insert(TotalNetValue_0.getString());
  FIX::TradingSessionID TradingSessionID_10("STRING_6");
  msg.set(TradingSessionID_10);
  CollateralAssignment_0.insert(TradingSessionID_10.getString());
  FIX::TradingSessionSubID TradingSessionSubID_10("STRING_7");
  msg.set(TradingSessionSubID_10);
  CollateralAssignment_0.insert(TradingSessionSubID_10.getString());
  FIX::TransactTime TransactTime_6(FIX::UTCTIMESTAMP(4, 41, 17, 26, 7, 2009));
  msg.set(TransactTime_6);
  CollateralAssignment_0.insert(TransactTime_6.getString());
  all_values.push_back(CollateralAssignment_0);

  all_compo_names.insert("CollateralAssignment");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    FIX::ExecID ExecID_6("STRING_451272843");
    noExecs_0_0.set(ExecID_6);
    ExecCollGrp_NoExecs_0.insert(ExecID_6.getString());
    all_values.push_back(ExecCollGrp_NoExecs_0);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    FIX::ExecID ExecID_7("STRING_1582721648");
    noExecs_0_1.set(ExecID_7);
    ExecCollGrp_NoExecs_1.insert(ExecID_7.getString());
    all_values.push_back(ExecCollGrp_NoExecs_1);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    FIX::ExecID ExecID_8("STRING_944016096");
    noExecs_0_2.set(ExecID_8);
    ExecCollGrp_NoExecs_2.insert(ExecID_8.getString());
    all_values.push_back(ExecCollGrp_NoExecs_2);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  FIX::AgreementCurrency AgreementCurrency_3("GBP");
  msg.set(AgreementCurrency_3);
  FinancingDetails_3.insert(AgreementCurrency_3.getString());
  FIX::AgreementDate AgreementDate_3("LOCALMKTDATE_710982901");
  msg.set(AgreementDate_3);
  FinancingDetails_3.insert(AgreementDate_3.getString());
  FIX::AgreementDesc AgreementDesc_3("STRING_1107132785");
  msg.set(AgreementDesc_3);
  FinancingDetails_3.insert(AgreementDesc_3.getString());
  FIX::AgreementID AgreementID_3("STRING_1325505138");
  msg.set(AgreementID_3);
  FinancingDetails_3.insert(AgreementID_3.getString());
  FIX::DeliveryType DeliveryType_3(1);
  msg.set(DeliveryType_3);
  FinancingDetails_3.insert(DeliveryType_3.getString());
  FIX::EndDate EndDate_3("LOCALMKTDATE_1053564970");
  msg.set(EndDate_3);
  FinancingDetails_3.insert(EndDate_3.getString());
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("83.850000");
  msg.set(MarginRatio_3);
  FinancingDetails_3.insert(MarginRatio_3.getString());
  FIX::StartDate StartDate_3("LOCALMKTDATE_556772897");
  msg.set(StartDate_3);
  FinancingDetails_3.insert(StartDate_3.getString());
  FIX::TerminationType TerminationType_3(4);
  msg.set(TerminationType_3);
  FinancingDetails_3.insert(TerminationType_3.getString());
  all_values.push_back(FinancingDetails_3);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_12;
    FIX::EncodedLegIssuer EncodedLegIssuer_12("DATA_643820851");
    noLegs_0_0.set(EncodedLegIssuer_12);
    InstrumentLeg_12.insert(EncodedLegIssuer_12.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_12(88440368);
    noLegs_0_0.set(EncodedLegIssuerLen_12);
    InstrumentLeg_12.insert(EncodedLegIssuerLen_12.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_12("DATA_1668580650");
    noLegs_0_0.set(EncodedLegSecurityDesc_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDesc_12.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_12(658626455);
    noLegs_0_0.set(EncodedLegSecurityDescLen_12);
    InstrumentLeg_12.insert(EncodedLegSecurityDescLen_12.getString());
    FIX::LegCFICode LegCFICode_12("STRING_1575763267");
    noLegs_0_0.set(LegCFICode_12);
    InstrumentLeg_12.insert(LegCFICode_12.getString());
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("11659418");
    noLegs_0_0.set(LegContractMultiplier_12);
    InstrumentLeg_12.insert(LegContractMultiplier_12.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_12(1911401486);
    noLegs_0_0.set(LegContractMultiplierUnit_12);
    InstrumentLeg_12.insert(LegContractMultiplierUnit_12.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_12("MONTHYEAR_1990998055");
    noLegs_0_0.set(LegContractSettlMonth_12);
    InstrumentLeg_12.insert(LegContractSettlMonth_12.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_12("COUNTRY_1896326609");
    noLegs_0_0.set(LegCountryOfIssue_12);
    InstrumentLeg_12.insert(LegCountryOfIssue_12.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_12("LOCALMKTDATE_53781290");
    noLegs_0_0.set(LegCouponPaymentDate_12);
    InstrumentLeg_12.insert(LegCouponPaymentDate_12.getString());
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("5.870000");
    noLegs_0_0.set(LegCouponRate_12);
    InstrumentLeg_12.insert(LegCouponRate_12.getString());
    FIX::LegCreditRating LegCreditRating_12("STRING_599262542");
    noLegs_0_0.set(LegCreditRating_12);
    InstrumentLeg_12.insert(LegCreditRating_12.getString());
    FIX::LegCurrency LegCurrency_12("USD");
    noLegs_0_0.set(LegCurrency_12);
    InstrumentLeg_12.insert(LegCurrency_12.getString());
    FIX::LegDatedDate LegDatedDate_12("LOCALMKTDATE_1291528664");
    noLegs_0_0.set(LegDatedDate_12);
    InstrumentLeg_12.insert(LegDatedDate_12.getString());
    FIX::LegExerciseStyle LegExerciseStyle_12(91969557);
    noLegs_0_0.set(LegExerciseStyle_12);
    InstrumentLeg_12.insert(LegExerciseStyle_12.getString());
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("5810225");
    noLegs_0_0.set(LegFactor_12);
    InstrumentLeg_12.insert(LegFactor_12.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_12(1742801507);
    noLegs_0_0.set(LegFlowScheduleType_12);
    InstrumentLeg_12.insert(LegFlowScheduleType_12.getString());
    FIX::LegInstrRegistry LegInstrRegistry_12("STRING_1674691205");
    noLegs_0_0.set(LegInstrRegistry_12);
    InstrumentLeg_12.insert(LegInstrRegistry_12.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_12("LOCALMKTDATE_1525038660");
    noLegs_0_0.set(LegInterestAccrualDate_12);
    InstrumentLeg_12.insert(LegInterestAccrualDate_12.getString());
    FIX::LegIssueDate LegIssueDate_12("LOCALMKTDATE_1115861811");
    noLegs_0_0.set(LegIssueDate_12);
    InstrumentLeg_12.insert(LegIssueDate_12.getString());
    FIX::LegIssuer LegIssuer_12("STRING_851880647");
    noLegs_0_0.set(LegIssuer_12);
    InstrumentLeg_12.insert(LegIssuer_12.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_12("STRING_88537913");
    noLegs_0_0.set(LegLocaleOfIssue_12);
    InstrumentLeg_12.insert(LegLocaleOfIssue_12.getString());
    FIX::LegMaturityDate LegMaturityDate_12("LOCALMKTDATE_75510948");
    noLegs_0_0.set(LegMaturityDate_12);
    InstrumentLeg_12.insert(LegMaturityDate_12.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_12("MONTHYEAR_29902137");
    noLegs_0_0.set(LegMaturityMonthYear_12);
    InstrumentLeg_12.insert(LegMaturityMonthYear_12.getString());
    FIX::LegMaturityTime LegMaturityTime_12("TZTIMEONLY_1011349063");
    noLegs_0_0.set(LegMaturityTime_12);
    InstrumentLeg_12.insert(LegMaturityTime_12.getString());
    FIX::LegOptAttribute LegOptAttribute_12('1');
    noLegs_0_0.set(LegOptAttribute_12);
    InstrumentLeg_12.insert(LegOptAttribute_12.getString());
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("7588405");
    noLegs_0_0.set(LegOptionRatio_12);
    InstrumentLeg_12.insert(LegOptionRatio_12.getString());
    FIX::LegPool LegPool_12("STRING_1568121960");
    noLegs_0_0.set(LegPool_12);
    InstrumentLeg_12.insert(LegPool_12.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_12("STRING_1934981445");
    noLegs_0_0.set(LegPriceUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasure_12.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("6395553");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegPriceUnitOfMeasureQty_12.getString());
    FIX::LegProduct LegProduct_12(64459163);
    noLegs_0_0.set(LegProduct_12);
    InstrumentLeg_12.insert(LegProduct_12.getString());
    FIX::LegPutOrCall LegPutOrCall_12(2023421813);
    noLegs_0_0.set(LegPutOrCall_12);
    InstrumentLeg_12.insert(LegPutOrCall_12.getString());
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("1606523");
    noLegs_0_0.set(LegRatioQty_12);
    InstrumentLeg_12.insert(LegRatioQty_12.getString());
    FIX::LegRedemptionDate LegRedemptionDate_12("LOCALMKTDATE_723085618");
    noLegs_0_0.set(LegRedemptionDate_12);
    InstrumentLeg_12.insert(LegRedemptionDate_12.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_12("STRING_1451701432");
    noLegs_0_0.set(LegRepoCollateralSecurityType_12);
    InstrumentLeg_12.insert(LegRepoCollateralSecurityType_12.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("42.720000");
    noLegs_0_0.set(LegRepurchaseRate_12);
    InstrumentLeg_12.insert(LegRepurchaseRate_12.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_12(487003456);
    noLegs_0_0.set(LegRepurchaseTerm_12);
    InstrumentLeg_12.insert(LegRepurchaseTerm_12.getString());
    FIX::LegSecurityDesc LegSecurityDesc_12("STRING_1295215839");
    noLegs_0_0.set(LegSecurityDesc_12);
    InstrumentLeg_12.insert(LegSecurityDesc_12.getString());
    FIX::LegSecurityExchange LegSecurityExchange_12("EXCHANGE_1075437233");
    noLegs_0_0.set(LegSecurityExchange_12);
    InstrumentLeg_12.insert(LegSecurityExchange_12.getString());
    FIX::LegSecurityID LegSecurityID_12("STRING_540784746");
    noLegs_0_0.set(LegSecurityID_12);
    InstrumentLeg_12.insert(LegSecurityID_12.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_12("STRING_117252779");
    noLegs_0_0.set(LegSecurityIDSource_12);
    InstrumentLeg_12.insert(LegSecurityIDSource_12.getString());
    FIX::LegSecuritySubType LegSecuritySubType_12("STRING_1674699775");
    noLegs_0_0.set(LegSecuritySubType_12);
    InstrumentLeg_12.insert(LegSecuritySubType_12.getString());
    FIX::LegSecurityType LegSecurityType_12("STRING_117337506");
    noLegs_0_0.set(LegSecurityType_12);
    InstrumentLeg_12.insert(LegSecurityType_12.getString());
    FIX::LegSide LegSide_12('9');
    noLegs_0_0.set(LegSide_12);
    InstrumentLeg_12.insert(LegSide_12.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_12("STRING_818744791");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_12);
    InstrumentLeg_12.insert(LegStateOrProvinceOfIssue_12.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_12("CAN");
    noLegs_0_0.set(LegStrikeCurrency_12);
    InstrumentLeg_12.insert(LegStrikeCurrency_12.getString());
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("4140626");
    noLegs_0_0.set(LegStrikePrice_12);
    InstrumentLeg_12.insert(LegStrikePrice_12.getString());
    FIX::LegSymbol LegSymbol_12("STRING_1883998268");
    noLegs_0_0.set(LegSymbol_12);
    InstrumentLeg_12.insert(LegSymbol_12.getString());
    FIX::LegSymbolSfx LegSymbolSfx_12("STRING_915576525");
    noLegs_0_0.set(LegSymbolSfx_12);
    InstrumentLeg_12.insert(LegSymbolSfx_12.getString());
    FIX::LegTimeUnit LegTimeUnit_12("STRING_1529924462");
    noLegs_0_0.set(LegTimeUnit_12);
    InstrumentLeg_12.insert(LegTimeUnit_12.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_12("STRING_588395267");
    noLegs_0_0.set(LegUnitOfMeasure_12);
    InstrumentLeg_12.insert(LegUnitOfMeasure_12.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("10041144");
    noLegs_0_0.set(LegUnitOfMeasureQty_12);
    InstrumentLeg_12.insert(LegUnitOfMeasureQty_12.getString());
    all_values.push_back(InstrumentLeg_12);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      FIX::LegSecurityAltID LegSecurityAltID_24("STRING_618297404");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltID_24.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_24("STRING_2015463502");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltIDSource_24.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      FIX::LegSecurityAltID LegSecurityAltID_25("STRING_587027680");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltID_25.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_25("STRING_1377137927");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltIDSource_25.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      FIX::LegSecurityAltID LegSecurityAltID_26("STRING_1436101814");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltID_26.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_26("STRING_374525477");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltIDSource_26.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_13;
    FIX::EncodedLegIssuer EncodedLegIssuer_13("DATA_2016693305");
    noLegs_0_1.set(EncodedLegIssuer_13);
    InstrumentLeg_13.insert(EncodedLegIssuer_13.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_13(1500560977);
    noLegs_0_1.set(EncodedLegIssuerLen_13);
    InstrumentLeg_13.insert(EncodedLegIssuerLen_13.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_13("DATA_250463642");
    noLegs_0_1.set(EncodedLegSecurityDesc_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDesc_13.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_13(29862037);
    noLegs_0_1.set(EncodedLegSecurityDescLen_13);
    InstrumentLeg_13.insert(EncodedLegSecurityDescLen_13.getString());
    FIX::LegCFICode LegCFICode_13("STRING_76162947");
    noLegs_0_1.set(LegCFICode_13);
    InstrumentLeg_13.insert(LegCFICode_13.getString());
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("17021650");
    noLegs_0_1.set(LegContractMultiplier_13);
    InstrumentLeg_13.insert(LegContractMultiplier_13.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_13(1356456309);
    noLegs_0_1.set(LegContractMultiplierUnit_13);
    InstrumentLeg_13.insert(LegContractMultiplierUnit_13.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_13("MONTHYEAR_563166403");
    noLegs_0_1.set(LegContractSettlMonth_13);
    InstrumentLeg_13.insert(LegContractSettlMonth_13.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_13("COUNTRY_849897266");
    noLegs_0_1.set(LegCountryOfIssue_13);
    InstrumentLeg_13.insert(LegCountryOfIssue_13.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_13("LOCALMKTDATE_284409894");
    noLegs_0_1.set(LegCouponPaymentDate_13);
    InstrumentLeg_13.insert(LegCouponPaymentDate_13.getString());
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("11.490000");
    noLegs_0_1.set(LegCouponRate_13);
    InstrumentLeg_13.insert(LegCouponRate_13.getString());
    FIX::LegCreditRating LegCreditRating_13("STRING_967150045");
    noLegs_0_1.set(LegCreditRating_13);
    InstrumentLeg_13.insert(LegCreditRating_13.getString());
    FIX::LegCurrency LegCurrency_13("GBP");
    noLegs_0_1.set(LegCurrency_13);
    InstrumentLeg_13.insert(LegCurrency_13.getString());
    FIX::LegDatedDate LegDatedDate_13("LOCALMKTDATE_1924148994");
    noLegs_0_1.set(LegDatedDate_13);
    InstrumentLeg_13.insert(LegDatedDate_13.getString());
    FIX::LegExerciseStyle LegExerciseStyle_13(630370813);
    noLegs_0_1.set(LegExerciseStyle_13);
    InstrumentLeg_13.insert(LegExerciseStyle_13.getString());
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("14305957");
    noLegs_0_1.set(LegFactor_13);
    InstrumentLeg_13.insert(LegFactor_13.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_13(1314686859);
    noLegs_0_1.set(LegFlowScheduleType_13);
    InstrumentLeg_13.insert(LegFlowScheduleType_13.getString());
    FIX::LegInstrRegistry LegInstrRegistry_13("STRING_1044433464");
    noLegs_0_1.set(LegInstrRegistry_13);
    InstrumentLeg_13.insert(LegInstrRegistry_13.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_13("LOCALMKTDATE_1167110340");
    noLegs_0_1.set(LegInterestAccrualDate_13);
    InstrumentLeg_13.insert(LegInterestAccrualDate_13.getString());
    FIX::LegIssueDate LegIssueDate_13("LOCALMKTDATE_82779736");
    noLegs_0_1.set(LegIssueDate_13);
    InstrumentLeg_13.insert(LegIssueDate_13.getString());
    FIX::LegIssuer LegIssuer_13("STRING_426874278");
    noLegs_0_1.set(LegIssuer_13);
    InstrumentLeg_13.insert(LegIssuer_13.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_13("STRING_1755505607");
    noLegs_0_1.set(LegLocaleOfIssue_13);
    InstrumentLeg_13.insert(LegLocaleOfIssue_13.getString());
    FIX::LegMaturityDate LegMaturityDate_13("LOCALMKTDATE_1086894175");
    noLegs_0_1.set(LegMaturityDate_13);
    InstrumentLeg_13.insert(LegMaturityDate_13.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_13("MONTHYEAR_2032309688");
    noLegs_0_1.set(LegMaturityMonthYear_13);
    InstrumentLeg_13.insert(LegMaturityMonthYear_13.getString());
    FIX::LegMaturityTime LegMaturityTime_13("TZTIMEONLY_226319364");
    noLegs_0_1.set(LegMaturityTime_13);
    InstrumentLeg_13.insert(LegMaturityTime_13.getString());
    FIX::LegOptAttribute LegOptAttribute_13('9');
    noLegs_0_1.set(LegOptAttribute_13);
    InstrumentLeg_13.insert(LegOptAttribute_13.getString());
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("4718537");
    noLegs_0_1.set(LegOptionRatio_13);
    InstrumentLeg_13.insert(LegOptionRatio_13.getString());
    FIX::LegPool LegPool_13("STRING_1603457291");
    noLegs_0_1.set(LegPool_13);
    InstrumentLeg_13.insert(LegPool_13.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_13("STRING_243492195");
    noLegs_0_1.set(LegPriceUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasure_13.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("8463791");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegPriceUnitOfMeasureQty_13.getString());
    FIX::LegProduct LegProduct_13(1472666948);
    noLegs_0_1.set(LegProduct_13);
    InstrumentLeg_13.insert(LegProduct_13.getString());
    FIX::LegPutOrCall LegPutOrCall_13(1744053172);
    noLegs_0_1.set(LegPutOrCall_13);
    InstrumentLeg_13.insert(LegPutOrCall_13.getString());
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("10968428");
    noLegs_0_1.set(LegRatioQty_13);
    InstrumentLeg_13.insert(LegRatioQty_13.getString());
    FIX::LegRedemptionDate LegRedemptionDate_13("LOCALMKTDATE_1502528985");
    noLegs_0_1.set(LegRedemptionDate_13);
    InstrumentLeg_13.insert(LegRedemptionDate_13.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_13("STRING_1820216119");
    noLegs_0_1.set(LegRepoCollateralSecurityType_13);
    InstrumentLeg_13.insert(LegRepoCollateralSecurityType_13.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("42.650000");
    noLegs_0_1.set(LegRepurchaseRate_13);
    InstrumentLeg_13.insert(LegRepurchaseRate_13.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_13(711501647);
    noLegs_0_1.set(LegRepurchaseTerm_13);
    InstrumentLeg_13.insert(LegRepurchaseTerm_13.getString());
    FIX::LegSecurityDesc LegSecurityDesc_13("STRING_235898874");
    noLegs_0_1.set(LegSecurityDesc_13);
    InstrumentLeg_13.insert(LegSecurityDesc_13.getString());
    FIX::LegSecurityExchange LegSecurityExchange_13("EXCHANGE_1501421531");
    noLegs_0_1.set(LegSecurityExchange_13);
    InstrumentLeg_13.insert(LegSecurityExchange_13.getString());
    FIX::LegSecurityID LegSecurityID_13("STRING_995911541");
    noLegs_0_1.set(LegSecurityID_13);
    InstrumentLeg_13.insert(LegSecurityID_13.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_13("STRING_1339850024");
    noLegs_0_1.set(LegSecurityIDSource_13);
    InstrumentLeg_13.insert(LegSecurityIDSource_13.getString());
    FIX::LegSecuritySubType LegSecuritySubType_13("STRING_321087928");
    noLegs_0_1.set(LegSecuritySubType_13);
    InstrumentLeg_13.insert(LegSecuritySubType_13.getString());
    FIX::LegSecurityType LegSecurityType_13("STRING_807537563");
    noLegs_0_1.set(LegSecurityType_13);
    InstrumentLeg_13.insert(LegSecurityType_13.getString());
    FIX::LegSide LegSide_13('4');
    noLegs_0_1.set(LegSide_13);
    InstrumentLeg_13.insert(LegSide_13.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_13("STRING_97753274");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_13);
    InstrumentLeg_13.insert(LegStateOrProvinceOfIssue_13.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_13("EUR");
    noLegs_0_1.set(LegStrikeCurrency_13);
    InstrumentLeg_13.insert(LegStrikeCurrency_13.getString());
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("14124401");
    noLegs_0_1.set(LegStrikePrice_13);
    InstrumentLeg_13.insert(LegStrikePrice_13.getString());
    FIX::LegSymbol LegSymbol_13("STRING_334858192");
    noLegs_0_1.set(LegSymbol_13);
    InstrumentLeg_13.insert(LegSymbol_13.getString());
    FIX::LegSymbolSfx LegSymbolSfx_13("STRING_863877443");
    noLegs_0_1.set(LegSymbolSfx_13);
    InstrumentLeg_13.insert(LegSymbolSfx_13.getString());
    FIX::LegTimeUnit LegTimeUnit_13("STRING_1495219870");
    noLegs_0_1.set(LegTimeUnit_13);
    InstrumentLeg_13.insert(LegTimeUnit_13.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_13("STRING_761732470");
    noLegs_0_1.set(LegUnitOfMeasure_13);
    InstrumentLeg_13.insert(LegUnitOfMeasure_13.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("4718994");
    noLegs_0_1.set(LegUnitOfMeasureQty_13);
    InstrumentLeg_13.insert(LegUnitOfMeasureQty_13.getString());
    all_values.push_back(InstrumentLeg_13);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      FIX::LegSecurityAltID LegSecurityAltID_27("STRING_646558510");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltID_27.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_27("STRING_698218767");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltIDSource_27.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_14;
    FIX::EncodedLegIssuer EncodedLegIssuer_14("DATA_1389504427");
    noLegs_0_2.set(EncodedLegIssuer_14);
    InstrumentLeg_14.insert(EncodedLegIssuer_14.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_14(1118412230);
    noLegs_0_2.set(EncodedLegIssuerLen_14);
    InstrumentLeg_14.insert(EncodedLegIssuerLen_14.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_14("DATA_154192410");
    noLegs_0_2.set(EncodedLegSecurityDesc_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDesc_14.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_14(1632996622);
    noLegs_0_2.set(EncodedLegSecurityDescLen_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDescLen_14.getString());
    FIX::LegCFICode LegCFICode_14("STRING_1964791427");
    noLegs_0_2.set(LegCFICode_14);
    InstrumentLeg_14.insert(LegCFICode_14.getString());
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("16268593");
    noLegs_0_2.set(LegContractMultiplier_14);
    InstrumentLeg_14.insert(LegContractMultiplier_14.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_14(1229566147);
    noLegs_0_2.set(LegContractMultiplierUnit_14);
    InstrumentLeg_14.insert(LegContractMultiplierUnit_14.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_14("MONTHYEAR_914150618");
    noLegs_0_2.set(LegContractSettlMonth_14);
    InstrumentLeg_14.insert(LegContractSettlMonth_14.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_14("COUNTRY_981904695");
    noLegs_0_2.set(LegCountryOfIssue_14);
    InstrumentLeg_14.insert(LegCountryOfIssue_14.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_14("LOCALMKTDATE_902298618");
    noLegs_0_2.set(LegCouponPaymentDate_14);
    InstrumentLeg_14.insert(LegCouponPaymentDate_14.getString());
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("48.830000");
    noLegs_0_2.set(LegCouponRate_14);
    InstrumentLeg_14.insert(LegCouponRate_14.getString());
    FIX::LegCreditRating LegCreditRating_14("STRING_1693406342");
    noLegs_0_2.set(LegCreditRating_14);
    InstrumentLeg_14.insert(LegCreditRating_14.getString());
    FIX::LegCurrency LegCurrency_14("CHF");
    noLegs_0_2.set(LegCurrency_14);
    InstrumentLeg_14.insert(LegCurrency_14.getString());
    FIX::LegDatedDate LegDatedDate_14("LOCALMKTDATE_541834236");
    noLegs_0_2.set(LegDatedDate_14);
    InstrumentLeg_14.insert(LegDatedDate_14.getString());
    FIX::LegExerciseStyle LegExerciseStyle_14(330563869);
    noLegs_0_2.set(LegExerciseStyle_14);
    InstrumentLeg_14.insert(LegExerciseStyle_14.getString());
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("12407006");
    noLegs_0_2.set(LegFactor_14);
    InstrumentLeg_14.insert(LegFactor_14.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_14(1349371799);
    noLegs_0_2.set(LegFlowScheduleType_14);
    InstrumentLeg_14.insert(LegFlowScheduleType_14.getString());
    FIX::LegInstrRegistry LegInstrRegistry_14("STRING_744218901");
    noLegs_0_2.set(LegInstrRegistry_14);
    InstrumentLeg_14.insert(LegInstrRegistry_14.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_14("LOCALMKTDATE_1338453970");
    noLegs_0_2.set(LegInterestAccrualDate_14);
    InstrumentLeg_14.insert(LegInterestAccrualDate_14.getString());
    FIX::LegIssueDate LegIssueDate_14("LOCALMKTDATE_639796527");
    noLegs_0_2.set(LegIssueDate_14);
    InstrumentLeg_14.insert(LegIssueDate_14.getString());
    FIX::LegIssuer LegIssuer_14("STRING_440986004");
    noLegs_0_2.set(LegIssuer_14);
    InstrumentLeg_14.insert(LegIssuer_14.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_14("STRING_603410455");
    noLegs_0_2.set(LegLocaleOfIssue_14);
    InstrumentLeg_14.insert(LegLocaleOfIssue_14.getString());
    FIX::LegMaturityDate LegMaturityDate_14("LOCALMKTDATE_974654719");
    noLegs_0_2.set(LegMaturityDate_14);
    InstrumentLeg_14.insert(LegMaturityDate_14.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_14("MONTHYEAR_1304863448");
    noLegs_0_2.set(LegMaturityMonthYear_14);
    InstrumentLeg_14.insert(LegMaturityMonthYear_14.getString());
    FIX::LegMaturityTime LegMaturityTime_14("TZTIMEONLY_2098630325");
    noLegs_0_2.set(LegMaturityTime_14);
    InstrumentLeg_14.insert(LegMaturityTime_14.getString());
    FIX::LegOptAttribute LegOptAttribute_14('1');
    noLegs_0_2.set(LegOptAttribute_14);
    InstrumentLeg_14.insert(LegOptAttribute_14.getString());
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("17767628");
    noLegs_0_2.set(LegOptionRatio_14);
    InstrumentLeg_14.insert(LegOptionRatio_14.getString());
    FIX::LegPool LegPool_14("STRING_385777075");
    noLegs_0_2.set(LegPool_14);
    InstrumentLeg_14.insert(LegPool_14.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_14("STRING_235462051");
    noLegs_0_2.set(LegPriceUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasure_14.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("3274979");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasureQty_14.getString());
    FIX::LegProduct LegProduct_14(1775281502);
    noLegs_0_2.set(LegProduct_14);
    InstrumentLeg_14.insert(LegProduct_14.getString());
    FIX::LegPutOrCall LegPutOrCall_14(1353874281);
    noLegs_0_2.set(LegPutOrCall_14);
    InstrumentLeg_14.insert(LegPutOrCall_14.getString());
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("4816903");
    noLegs_0_2.set(LegRatioQty_14);
    InstrumentLeg_14.insert(LegRatioQty_14.getString());
    FIX::LegRedemptionDate LegRedemptionDate_14("LOCALMKTDATE_1260794476");
    noLegs_0_2.set(LegRedemptionDate_14);
    InstrumentLeg_14.insert(LegRedemptionDate_14.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_14("STRING_1171182060");
    noLegs_0_2.set(LegRepoCollateralSecurityType_14);
    InstrumentLeg_14.insert(LegRepoCollateralSecurityType_14.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("97.380000");
    noLegs_0_2.set(LegRepurchaseRate_14);
    InstrumentLeg_14.insert(LegRepurchaseRate_14.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_14(342876975);
    noLegs_0_2.set(LegRepurchaseTerm_14);
    InstrumentLeg_14.insert(LegRepurchaseTerm_14.getString());
    FIX::LegSecurityDesc LegSecurityDesc_14("STRING_2085332678");
    noLegs_0_2.set(LegSecurityDesc_14);
    InstrumentLeg_14.insert(LegSecurityDesc_14.getString());
    FIX::LegSecurityExchange LegSecurityExchange_14("EXCHANGE_942970785");
    noLegs_0_2.set(LegSecurityExchange_14);
    InstrumentLeg_14.insert(LegSecurityExchange_14.getString());
    FIX::LegSecurityID LegSecurityID_14("STRING_1245175594");
    noLegs_0_2.set(LegSecurityID_14);
    InstrumentLeg_14.insert(LegSecurityID_14.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_14("STRING_1503523913");
    noLegs_0_2.set(LegSecurityIDSource_14);
    InstrumentLeg_14.insert(LegSecurityIDSource_14.getString());
    FIX::LegSecuritySubType LegSecuritySubType_14("STRING_488893480");
    noLegs_0_2.set(LegSecuritySubType_14);
    InstrumentLeg_14.insert(LegSecuritySubType_14.getString());
    FIX::LegSecurityType LegSecurityType_14("STRING_235889439");
    noLegs_0_2.set(LegSecurityType_14);
    InstrumentLeg_14.insert(LegSecurityType_14.getString());
    FIX::LegSide LegSide_14('2');
    noLegs_0_2.set(LegSide_14);
    InstrumentLeg_14.insert(LegSide_14.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_14("STRING_1030727716");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_14);
    InstrumentLeg_14.insert(LegStateOrProvinceOfIssue_14.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_14("GBP");
    noLegs_0_2.set(LegStrikeCurrency_14);
    InstrumentLeg_14.insert(LegStrikeCurrency_14.getString());
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("2326158");
    noLegs_0_2.set(LegStrikePrice_14);
    InstrumentLeg_14.insert(LegStrikePrice_14.getString());
    FIX::LegSymbol LegSymbol_14("STRING_1310672209");
    noLegs_0_2.set(LegSymbol_14);
    InstrumentLeg_14.insert(LegSymbol_14.getString());
    FIX::LegSymbolSfx LegSymbolSfx_14("STRING_707324050");
    noLegs_0_2.set(LegSymbolSfx_14);
    InstrumentLeg_14.insert(LegSymbolSfx_14.getString());
    FIX::LegTimeUnit LegTimeUnit_14("STRING_872412394");
    noLegs_0_2.set(LegTimeUnit_14);
    InstrumentLeg_14.insert(LegTimeUnit_14.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_14("STRING_1751658213");
    noLegs_0_2.set(LegUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegUnitOfMeasure_14.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("13107345");
    noLegs_0_2.set(LegUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegUnitOfMeasureQty_14.getString());
    all_values.push_back(InstrumentLeg_14);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      FIX::LegSecurityAltID LegSecurityAltID_28("STRING_909038013");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltID_28.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_28("STRING_1261881183");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltIDSource_28.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      FIX::LegSecurityAltID LegSecurityAltID_29("STRING_1435970654");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltID_29.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_29("STRING_538317216");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltIDSource_29.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      FIX::LegSecurityAltID LegSecurityAltID_30("STRING_1647658258");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltID_30.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_30("STRING_1671432705");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltIDSource_30.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("51.860000");
  msg.set(AttachmentPoint_6);
  Instrument_6.insert(AttachmentPoint_6.getString());
  FIX::CFICode CFICode_6("STRING_1275456112");
  msg.set(CFICode_6);
  Instrument_6.insert(CFICode_6.getString());
  FIX::CPProgram CPProgram_6(2);
  msg.set(CPProgram_6);
  Instrument_6.insert(CPProgram_6.getString());
  FIX::CPRegType CPRegType_6("STRING_1347505566");
  msg.set(CPRegType_6);
  Instrument_6.insert(CPRegType_6.getString());
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("3887669");
  msg.set(CapPrice_6);
  Instrument_6.insert(CapPrice_6.getString());
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("20490053");
  msg.set(ContractMultiplier_6);
  Instrument_6.insert(ContractMultiplier_6.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_6(0);
  msg.set(ContractMultiplierUnit_6);
  Instrument_6.insert(ContractMultiplierUnit_6.getString());
  FIX::ContractSettlMonth ContractSettlMonth_6("MONTHYEAR_731643916");
  msg.set(ContractSettlMonth_6);
  Instrument_6.insert(ContractSettlMonth_6.getString());
  FIX::CountryOfIssue CountryOfIssue_6("COUNTRY_1986854428");
  msg.set(CountryOfIssue_6);
  Instrument_6.insert(CountryOfIssue_6.getString());
  FIX::CouponPaymentDate CouponPaymentDate_6("LOCALMKTDATE_104058794");
  msg.set(CouponPaymentDate_6);
  Instrument_6.insert(CouponPaymentDate_6.getString());
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("95.100000");
  msg.set(CouponRate_6);
  Instrument_6.insert(CouponRate_6.getString());
  FIX::CreditRating CreditRating_6("STRING_1342894693");
  msg.set(CreditRating_6);
  Instrument_6.insert(CreditRating_6.getString());
  FIX::DatedDate DatedDate_6("LOCALMKTDATE_592952274");
  msg.set(DatedDate_6);
  Instrument_6.insert(DatedDate_6.getString());
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("53.010000");
  msg.set(DetachmentPoint_6);
  Instrument_6.insert(DetachmentPoint_6.getString());
  FIX::EncodedIssuer EncodedIssuer_6("DATA_1618547726");
  msg.set(EncodedIssuer_6);
  Instrument_6.insert(EncodedIssuer_6.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_6(1623679990);
  msg.set(EncodedIssuerLen_6);
  Instrument_6.insert(EncodedIssuerLen_6.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_6("DATA_631678609");
  msg.set(EncodedSecurityDesc_6);
  Instrument_6.insert(EncodedSecurityDesc_6.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_6(987417806);
  msg.set(EncodedSecurityDescLen_6);
  Instrument_6.insert(EncodedSecurityDescLen_6.getString());
  FIX::ExerciseStyle ExerciseStyle_6(2);
  msg.set(ExerciseStyle_6);
  Instrument_6.insert(ExerciseStyle_6.getString());
  FIX::Factor Factor_6;
  Factor_6.setString("19423508");
  msg.set(Factor_6);
  Instrument_6.insert(Factor_6.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_6(true);
  msg.set(FlexProductEligibilityIndicator_6);
  Instrument_6.insert(FlexProductEligibilityIndicator_6.getString());
  FIX::FlexibleIndicator FlexibleIndicator_6(false);
  msg.set(FlexibleIndicator_6);
  Instrument_6.insert(FlexibleIndicator_6.getString());
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("15465253");
  msg.set(FloorPrice_6);
  Instrument_6.insert(FloorPrice_6.getString());
  FIX::FlowScheduleType FlowScheduleType_6(3);
  msg.set(FlowScheduleType_6);
  Instrument_6.insert(FlowScheduleType_6.getString());
  FIX::InstrRegistry InstrRegistry_6("STRING_280808068");
  msg.set(InstrRegistry_6);
  Instrument_6.insert(InstrRegistry_6.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_6('3');
  msg.set(InstrmtAssignmentMethod_6);
  Instrument_6.insert(InstrmtAssignmentMethod_6.getString());
  FIX::InterestAccrualDate InterestAccrualDate_6("LOCALMKTDATE_2119873896");
  msg.set(InterestAccrualDate_6);
  Instrument_6.insert(InterestAccrualDate_6.getString());
  FIX::IssueDate IssueDate_6("LOCALMKTDATE_1716778722");
  msg.set(IssueDate_6);
  Instrument_6.insert(IssueDate_6.getString());
  FIX::Issuer Issuer_6("STRING_846396965");
  msg.set(Issuer_6);
  Instrument_6.insert(Issuer_6.getString());
  FIX::ListMethod ListMethod_6(0);
  msg.set(ListMethod_6);
  Instrument_6.insert(ListMethod_6.getString());
  FIX::LocaleOfIssue LocaleOfIssue_6("STRING_1240727779");
  msg.set(LocaleOfIssue_6);
  Instrument_6.insert(LocaleOfIssue_6.getString());
  FIX::MaturityDate MaturityDate_6("LOCALMKTDATE_1712212152");
  msg.set(MaturityDate_6);
  Instrument_6.insert(MaturityDate_6.getString());
  FIX::MaturityMonthYear MaturityMonthYear_6("MONTHYEAR_748020970");
  msg.set(MaturityMonthYear_6);
  Instrument_6.insert(MaturityMonthYear_6.getString());
  FIX::MaturityTime MaturityTime_6("TZTIMEONLY_2118551117");
  msg.set(MaturityTime_6);
  Instrument_6.insert(MaturityTime_6.getString());
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("9122340");
  msg.set(MinPriceIncrement_6);
  Instrument_6.insert(MinPriceIncrement_6.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("11367879");
  msg.set(MinPriceIncrementAmount_6);
  Instrument_6.insert(MinPriceIncrementAmount_6.getString());
  FIX::NTPositionLimit NTPositionLimit_6(2020072867);
  msg.set(NTPositionLimit_6);
  Instrument_6.insert(NTPositionLimit_6.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("20.790000");
  msg.set(NotionalPercentageOutstanding_6);
  Instrument_6.insert(NotionalPercentageOutstanding_6.getString());
  FIX::OptAttribute OptAttribute_6('1');
  msg.set(OptAttribute_6);
  Instrument_6.insert(OptAttribute_6.getString());
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("18594436");
  msg.set(OptPayoutAmount_6);
  Instrument_6.insert(OptPayoutAmount_6.getString());
  FIX::OptPayoutType OptPayoutType_6(3);
  msg.set(OptPayoutType_6);
  Instrument_6.insert(OptPayoutType_6.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("76.890000");
  msg.set(OriginalNotionalPercentageOutstanding_6);
  Instrument_6.insert(OriginalNotionalPercentageOutstanding_6.getString());
  FIX::Pool Pool_6("STRING_1054854692");
  msg.set(Pool_6);
  Instrument_6.insert(Pool_6.getString());
  FIX::PositionLimit PositionLimit_6(770333147);
  msg.set(PositionLimit_6);
  Instrument_6.insert(PositionLimit_6.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_6("STRING_INT");
  msg.set(PriceQuoteMethod_6);
  Instrument_6.insert(PriceQuoteMethod_6.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_6("STRING_525918770");
  msg.set(PriceUnitOfMeasure_6);
  Instrument_6.insert(PriceUnitOfMeasure_6.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("2465294");
  msg.set(PriceUnitOfMeasureQty_6);
  Instrument_6.insert(PriceUnitOfMeasureQty_6.getString());
  FIX::Product Product_8(11);
  msg.set(Product_8);
  Instrument_6.insert(Product_8.getString());
  FIX::ProductComplex ProductComplex_6("STRING_1513336576");
  msg.set(ProductComplex_6);
  Instrument_6.insert(ProductComplex_6.getString());
  FIX::PutOrCall PutOrCall_6(0);
  msg.set(PutOrCall_6);
  Instrument_6.insert(PutOrCall_6.getString());
  FIX::RedemptionDate RedemptionDate_6("LOCALMKTDATE_42055121");
  msg.set(RedemptionDate_6);
  Instrument_6.insert(RedemptionDate_6.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_6("STRING_1060594784");
  msg.set(RepoCollateralSecurityType_6);
  Instrument_6.insert(RepoCollateralSecurityType_6.getString());
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("63.010000");
  msg.set(RepurchaseRate_6);
  Instrument_6.insert(RepurchaseRate_6.getString());
  FIX::RepurchaseTerm RepurchaseTerm_6(1588580504);
  msg.set(RepurchaseTerm_6);
  Instrument_6.insert(RepurchaseTerm_6.getString());
  FIX::RestructuringType RestructuringType_6("STRING_MM");
  msg.set(RestructuringType_6);
  Instrument_6.insert(RestructuringType_6.getString());
  FIX::SecurityDesc SecurityDesc_6("STRING_817374369");
  msg.set(SecurityDesc_6);
  Instrument_6.insert(SecurityDesc_6.getString());
  FIX::SecurityExchange SecurityExchange_6("EXCHANGE_1896660253");
  msg.set(SecurityExchange_6);
  Instrument_6.insert(SecurityExchange_6.getString());
  FIX::SecurityGroup SecurityGroup_6("STRING_1890977746");
  msg.set(SecurityGroup_6);
  Instrument_6.insert(SecurityGroup_6.getString());
  FIX::SecurityID SecurityID_6("STRING_386669443");
  msg.set(SecurityID_6);
  Instrument_6.insert(SecurityID_6.getString());
  FIX::SecurityIDSource SecurityIDSource_6("STRING_M");
  msg.set(SecurityIDSource_6);
  Instrument_6.insert(SecurityIDSource_6.getString());
  FIX::SecurityStatus SecurityStatus_6("STRING_2");
  msg.set(SecurityStatus_6);
  Instrument_6.insert(SecurityStatus_6.getString());
  FIX::SecuritySubType SecuritySubType_6("STRING_1627397222");
  msg.set(SecuritySubType_6);
  Instrument_6.insert(SecuritySubType_6.getString());
  FIX::SecurityType SecurityType_8("STRING_FUT");
  msg.set(SecurityType_8);
  Instrument_6.insert(SecurityType_8.getString());
  FIX::Seniority Seniority_6("STRING_SD");
  msg.set(Seniority_6);
  Instrument_6.insert(Seniority_6.getString());
  FIX::SettlMethod SettlMethod_6('P');
  msg.set(SettlMethod_6);
  Instrument_6.insert(SettlMethod_6.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_6("STRING_1072536145");
  msg.set(SettleOnOpenFlag_6);
  Instrument_6.insert(SettleOnOpenFlag_6.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_6("STRING_1100867838");
  msg.set(StateOrProvinceOfIssue_6);
  Instrument_6.insert(StateOrProvinceOfIssue_6.getString());
  FIX::StrikeCurrency StrikeCurrency_6("JPY");
  msg.set(StrikeCurrency_6);
  Instrument_6.insert(StrikeCurrency_6.getString());
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("8218160");
  msg.set(StrikeMultiplier_6);
  Instrument_6.insert(StrikeMultiplier_6.getString());
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("11830139");
  msg.set(StrikePrice_6);
  Instrument_6.insert(StrikePrice_6.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_6(3);
  msg.set(StrikePriceBoundaryMethod_6);
  Instrument_6.insert(StrikePriceBoundaryMethod_6.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("0.580000");
  msg.set(StrikePriceBoundaryPrecision_6);
  Instrument_6.insert(StrikePriceBoundaryPrecision_6.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_6(2);
  msg.set(StrikePriceDeterminationMethod_6);
  Instrument_6.insert(StrikePriceDeterminationMethod_6.getString());
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("20935722");
  msg.set(StrikeValue_6);
  Instrument_6.insert(StrikeValue_6.getString());
  FIX::Symbol Symbol_6("STRING_2135093048");
  msg.set(Symbol_6);
  Instrument_6.insert(Symbol_6.getString());
  FIX::SymbolSfx SymbolSfx_6("STRING_CD");
  msg.set(SymbolSfx_6);
  Instrument_6.insert(SymbolSfx_6.getString());
  FIX::TimeUnit TimeUnit_6("STRING_S");
  msg.set(TimeUnit_6);
  Instrument_6.insert(TimeUnit_6.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_6(4);
  msg.set(UnderlyingPriceDeterminationMethod_6);
  Instrument_6.insert(UnderlyingPriceDeterminationMethod_6.getString());
  FIX::UnitOfMeasure UnitOfMeasure_6("STRING_oz_tr");
  msg.set(UnitOfMeasure_6);
  Instrument_6.insert(UnitOfMeasure_6.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("1479597");
  msg.set(UnitOfMeasureQty_6);
  Instrument_6.insert(UnitOfMeasureQty_6.getString());
  FIX::ValuationMethod ValuationMethod_6("STRING_FUTDA");
  msg.set(ValuationMethod_6);
  Instrument_6.insert(ValuationMethod_6.getString());
  all_values.push_back(Instrument_6);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_13;
    FIX::ComplexEventCondition ComplexEventCondition_13(1);
    noComplexEvents_0_0.set(ComplexEventCondition_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventCondition_13.getString());
    FIX::ComplexEventPrice ComplexEventPrice_13;
    ComplexEventPrice_13.setString("18654329");
    noComplexEvents_0_0.set(ComplexEventPrice_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPrice_13.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_13(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryMethod_13.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("4.530000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryPrecision_13.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_13(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceTimeType_13.getString());
    FIX::ComplexEventType ComplexEventType_13(5);
    noComplexEvents_0_0.set(ComplexEventType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventType_13.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("18885698");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexOptPayoutAmount_13.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_13);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      FIX::ComplexEventEndDate ComplexEventEndDate_34(FIX::UTCTIMESTAMP(14, 0, 38, 21, 3, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventEndDate_34.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_34(FIX::UTCTIMESTAMP(22, 26, 24, 4, 5, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventStartDate_34.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        FIX::ComplexEventEndTime ComplexEventEndTime_69(FIX::UTCTIMEONLY(2, 22, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventEndTime_69.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_69(FIX::UTCTIMEONLY(9, 1, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventStartTime_69.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        FIX::ComplexEventEndTime ComplexEventEndTime_70(FIX::UTCTIMEONLY(18, 10, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventEndTime_70.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_70(FIX::UTCTIMEONLY(4, 44, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventStartTime_70.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        FIX::ComplexEventEndTime ComplexEventEndTime_71(FIX::UTCTIMEONLY(2, 58, 28));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventEndTime_71.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_71(FIX::UTCTIMEONLY(4, 9, 15));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventStartTime_71.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    FIX::ComplexEventCondition ComplexEventCondition_14(2);
    noComplexEvents_0_1.set(ComplexEventCondition_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventCondition_14.getString());
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("21433076");
    noComplexEvents_0_1.set(ComplexEventPrice_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPrice_14.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_14(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryMethod_14.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("18.910000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryPrecision_14.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_14(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceTimeType_14.getString());
    FIX::ComplexEventType ComplexEventType_14(4);
    noComplexEvents_0_1.set(ComplexEventType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventType_14.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("3296982");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexOptPayoutAmount_14.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_14);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      FIX::ComplexEventEndDate ComplexEventEndDate_35(FIX::UTCTIMESTAMP(1, 37, 22, 27, 7, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventEndDate_35.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_35(FIX::UTCTIMESTAMP(0, 48, 8, 12, 5, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventStartDate_35.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        FIX::ComplexEventEndTime ComplexEventEndTime_72(FIX::UTCTIMEONLY(3, 53, 27));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventEndTime_72.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_72(FIX::UTCTIMEONLY(13, 36, 30));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventStartTime_72.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        FIX::ComplexEventEndTime ComplexEventEndTime_73(FIX::UTCTIMEONLY(3, 54, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventEndTime_73.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_73(FIX::UTCTIMEONLY(0, 3, 47));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventStartTime_73.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        FIX::ComplexEventEndTime ComplexEventEndTime_74(FIX::UTCTIMEONLY(20, 16, 35));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventEndTime_74.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_74(FIX::UTCTIMEONLY(22, 13, 40));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventStartTime_74.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      FIX::ComplexEventEndDate ComplexEventEndDate_36(FIX::UTCTIMESTAMP(13, 41, 51, 2, 6, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventEndDate_36.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_36(FIX::UTCTIMESTAMP(8, 38, 44, 15, 9, 2009));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventStartDate_36.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        FIX::ComplexEventEndTime ComplexEventEndTime_75(FIX::UTCTIMEONLY(0, 52, 28));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventEndTime_75.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_75(FIX::UTCTIMEONLY(5, 31, 31));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventStartTime_75.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        FIX::ComplexEventEndTime ComplexEventEndTime_76(FIX::UTCTIMEONLY(19, 47, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventEndTime_76.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_76(FIX::UTCTIMEONLY(10, 13, 19));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventStartTime_76.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    FIX::EventDate EventDate_10("LOCALMKTDATE_1029928275");
    noEvents_0_0.set(EventDate_10);
    EvntGrp_NoEvents_10.insert(EventDate_10.getString());
    FIX::EventPx EventPx_10;
    EventPx_10.setString("10384125");
    noEvents_0_0.set(EventPx_10);
    EvntGrp_NoEvents_10.insert(EventPx_10.getString());
    FIX::EventText EventText_10("STRING_349932063");
    noEvents_0_0.set(EventText_10);
    EvntGrp_NoEvents_10.insert(EventText_10.getString());
    FIX::EventTime EventTime_10(FIX::UTCTIMESTAMP(6, 49, 42, 26, 8, 2014));
    noEvents_0_0.set(EventTime_10);
    EvntGrp_NoEvents_10.insert(EventTime_10.getString());
    FIX::EventType EventType_10(7);
    noEvents_0_0.set(EventType_10);
    EvntGrp_NoEvents_10.insert(EventType_10.getString());
    all_values.push_back(EvntGrp_NoEvents_10);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    FIX::EventDate EventDate_11("LOCALMKTDATE_504463971");
    noEvents_0_1.set(EventDate_11);
    EvntGrp_NoEvents_11.insert(EventDate_11.getString());
    FIX::EventPx EventPx_11;
    EventPx_11.setString("9073709");
    noEvents_0_1.set(EventPx_11);
    EvntGrp_NoEvents_11.insert(EventPx_11.getString());
    FIX::EventText EventText_11("STRING_603847264");
    noEvents_0_1.set(EventText_11);
    EvntGrp_NoEvents_11.insert(EventText_11.getString());
    FIX::EventTime EventTime_11(FIX::UTCTIMESTAMP(4, 56, 24, 3, 6, 2011));
    noEvents_0_1.set(EventTime_11);
    EvntGrp_NoEvents_11.insert(EventTime_11.getString());
    FIX::EventType EventType_11(19);
    noEvents_0_1.set(EventType_11);
    EvntGrp_NoEvents_11.insert(EventType_11.getString());
    all_values.push_back(EvntGrp_NoEvents_11);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_12;
    FIX::EventDate EventDate_12("LOCALMKTDATE_332607703");
    noEvents_0_2.set(EventDate_12);
    EvntGrp_NoEvents_12.insert(EventDate_12.getString());
    FIX::EventPx EventPx_12;
    EventPx_12.setString("19937970");
    noEvents_0_2.set(EventPx_12);
    EvntGrp_NoEvents_12.insert(EventPx_12.getString());
    FIX::EventText EventText_12("STRING_1034797266");
    noEvents_0_2.set(EventText_12);
    EvntGrp_NoEvents_12.insert(EventText_12.getString());
    FIX::EventTime EventTime_12(FIX::UTCTIMESTAMP(21, 40, 57, 13, 5, 2000));
    noEvents_0_2.set(EventTime_12);
    EvntGrp_NoEvents_12.insert(EventTime_12.getString());
    FIX::EventType EventType_12(18);
    noEvents_0_2.set(EventType_12);
    EvntGrp_NoEvents_12.insert(EventType_12.getString());
    all_values.push_back(EvntGrp_NoEvents_12);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    FIX::InstrumentPartyID InstrumentPartyID_10("STRING_37115549");
    noInstrumentParties_0_0.set(InstrumentPartyID_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyID_10.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_10('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyIDSource_10.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_10(459414997);
    noInstrumentParties_0_0.set(InstrumentPartyRole_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyRole_10.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      FIX::InstrumentPartySubID InstrumentPartySubID_20("STRING_1593914326");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubID_20.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_20(743440136);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubIDType_20.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      FIX::InstrumentPartySubID InstrumentPartySubID_21("STRING_232831957");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubID_21.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_21(1950968812);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubIDType_21.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      FIX::InstrumentPartySubID InstrumentPartySubID_22("STRING_1247904108");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubID_22.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_22(1140202945);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubIDType_22.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    FIX::InstrumentPartyID InstrumentPartyID_11("STRING_407332428");
    noInstrumentParties_0_1.set(InstrumentPartyID_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyID_11.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_11('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyIDSource_11.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_11(1400002109);
    noInstrumentParties_0_1.set(InstrumentPartyRole_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyRole_11.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      FIX::InstrumentPartySubID InstrumentPartySubID_23("STRING_1081297320");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubID_23.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_23(1611975496);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubIDType_23.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      FIX::InstrumentPartySubID InstrumentPartySubID_24("STRING_1232722314");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubID_24.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_24(118670199);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubIDType_24.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      FIX::InstrumentPartySubID InstrumentPartySubID_25("STRING_2128879655");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubID_25.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_25(1565330017);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubIDType_25.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    FIX::InstrumentPartyID InstrumentPartyID_12("STRING_2112467265");
    noInstrumentParties_0_2.set(InstrumentPartyID_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyID_12.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_12('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyIDSource_12.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_12(2119524740);
    noInstrumentParties_0_2.set(InstrumentPartyRole_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyRole_12.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      FIX::InstrumentPartySubID InstrumentPartySubID_26("STRING_878615885");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubID_26.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_26(874883229);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubIDType_26.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      FIX::InstrumentPartySubID InstrumentPartySubID_27("STRING_825901280");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubID_27.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_27(372130369);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubIDType_27.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      FIX::InstrumentPartySubID InstrumentPartySubID_28("STRING_660169993");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubID_28.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_28(1344685217);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubIDType_28.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    FIX::SecurityAltID SecurityAltID_11("STRING_697285542");
    noSecurityAltID_0_0.set(SecurityAltID_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltID_11.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_11("STRING_1012409545");
    noSecurityAltID_0_0.set(SecurityAltIDSource_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltIDSource_11.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    FIX::SecurityAltID SecurityAltID_12("STRING_674991914");
    noSecurityAltID_0_1.set(SecurityAltID_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltID_12.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_12("STRING_803524853");
    noSecurityAltID_0_1.set(SecurityAltIDSource_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltIDSource_12.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  FIX::SecurityXML SecurityXML_13("XMLDATA_458840223");
  msg.set(SecurityXML_13);
  FIX::SecurityXMLLen SecurityXMLLen_6(1418432051);
  msg.set(SecurityXMLLen_6);
  FIX::SecurityXMLSchema SecurityXMLSchema_6("STRING_1036356811");
  msg.set(SecurityXMLSchema_6);
  SecurityXML_12.insert(SecurityXMLSchema_6.getString());
  all_values.push_back(SecurityXML_12);
  all_compo_names.insert("SecurityXML");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_9;
    FIX::MiscFeeAmt MiscFeeAmt_9;
    MiscFeeAmt_9.setString("5188525");
    noMiscFees_0_0.set(MiscFeeAmt_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeAmt_9.getString());
    FIX::MiscFeeBasis MiscFeeBasis_9(0);
    noMiscFees_0_0.set(MiscFeeBasis_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeBasis_9.getString());
    FIX::MiscFeeCurr MiscFeeCurr_9("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeCurr_9.getString());
    FIX::MiscFeeType MiscFeeType_9("STRING_8");
    noMiscFees_0_0.set(MiscFeeType_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeType_9.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_9);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_10;
    FIX::MiscFeeAmt MiscFeeAmt_10;
    MiscFeeAmt_10.setString("4945024");
    noMiscFees_0_1.set(MiscFeeAmt_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeAmt_10.getString());
    FIX::MiscFeeBasis MiscFeeBasis_10(0);
    noMiscFees_0_1.set(MiscFeeBasis_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeBasis_10.getString());
    FIX::MiscFeeCurr MiscFeeCurr_10("CAN");
    noMiscFees_0_1.set(MiscFeeCurr_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeCurr_10.getString());
    FIX::MiscFeeType MiscFeeType_10("STRING_3");
    noMiscFees_0_1.set(MiscFeeType_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeType_10.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_10);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_11;
    FIX::MiscFeeAmt MiscFeeAmt_11;
    MiscFeeAmt_11.setString("8749660");
    noMiscFees_0_2.set(MiscFeeAmt_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeAmt_11.getString());
    FIX::MiscFeeBasis MiscFeeBasis_11(1);
    noMiscFees_0_2.set(MiscFeeBasis_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeBasis_11.getString());
    FIX::MiscFeeCurr MiscFeeCurr_11("EUR");
    noMiscFees_0_2.set(MiscFeeCurr_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeCurr_11.getString());
    FIX::MiscFeeType MiscFeeType_11("STRING_2");
    noMiscFees_0_2.set(MiscFeeType_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeType_11.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_11);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    FIX::PartyID PartyID_18("STRING_622291582");
    noPartyIDs_0_0.set(PartyID_18);
    Parties_NoPartyIDs_18.insert(PartyID_18.getString());
    FIX::PartyIDSource PartyIDSource_18('8');
    noPartyIDs_0_0.set(PartyIDSource_18);
    Parties_NoPartyIDs_18.insert(PartyIDSource_18.getString());
    FIX::PartyRole PartyRole_18(32);
    noPartyIDs_0_0.set(PartyRole_18);
    Parties_NoPartyIDs_18.insert(PartyRole_18.getString());
    all_values.push_back(Parties_NoPartyIDs_18);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      FIX::PartySubID PartySubID_42("STRING_504681782");
      noPartySubIDs_0_1_0.set(PartySubID_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubID_42.getString());
      FIX::PartySubIDType PartySubIDType_42(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubIDType_42.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    FIX::PartyID PartyID_19("STRING_1209998869");
    noPartyIDs_0_1.set(PartyID_19);
    Parties_NoPartyIDs_19.insert(PartyID_19.getString());
    FIX::PartyIDSource PartyIDSource_19('4');
    noPartyIDs_0_1.set(PartyIDSource_19);
    Parties_NoPartyIDs_19.insert(PartyIDSource_19.getString());
    FIX::PartyRole PartyRole_19(67);
    noPartyIDs_0_1.set(PartyRole_19);
    Parties_NoPartyIDs_19.insert(PartyRole_19.getString());
    all_values.push_back(Parties_NoPartyIDs_19);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      FIX::PartySubID PartySubID_43("STRING_2005492178");
      noPartySubIDs_1_1_0.set(PartySubID_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubID_43.getString());
      FIX::PartySubIDType PartySubIDType_43(9);
      noPartySubIDs_1_1_0.set(PartySubIDType_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubIDType_43.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      FIX::PartySubID PartySubID_44("STRING_1155939187");
      noPartySubIDs_1_1_1.set(PartySubID_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubID_44.getString());
      FIX::PartySubIDType PartySubIDType_44(2);
      noPartySubIDs_1_1_1.set(PartySubIDType_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubIDType_44.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_4;
  FIX::SettlDeliveryType SettlDeliveryType_4(3);
  msg.set(SettlDeliveryType_4);
  SettlInstructionsData_4.insert(SettlDeliveryType_4.getString());
  FIX::StandInstDbID StandInstDbID_4("STRING_1674791698");
  msg.set(StandInstDbID_4);
  SettlInstructionsData_4.insert(StandInstDbID_4.getString());
  FIX::StandInstDbName StandInstDbName_4("STRING_923441449");
  msg.set(StandInstDbName_4);
  SettlInstructionsData_4.insert(StandInstDbName_4.getString());
  FIX::StandInstDbType StandInstDbType_4(0);
  msg.set(StandInstDbType_4);
  SettlInstructionsData_4.insert(StandInstDbType_4.getString());
  all_values.push_back(SettlInstructionsData_4);
  all_compo_names.insert("SettlInstructionsData");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_7;
    FIX::DlvyInstType DlvyInstType_7('C');
    noDlvyInst_0_0.set(DlvyInstType_7);
    DlvyInstGrp_NoDlvyInst_7.insert(DlvyInstType_7.getString());
    FIX::SettlInstSource SettlInstSource_7('1');
    noDlvyInst_0_0.set(SettlInstSource_7);
    DlvyInstGrp_NoDlvyInst_7.insert(SettlInstSource_7.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_7);
    all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_11;
      FIX::SettlPartyID SettlPartyID_11("STRING_1098606083");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_11);
      SettlParties_NoSettlPartyIDs_11.insert(SettlPartyID_11.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_11('9');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_11);
      SettlParties_NoSettlPartyIDs_11.insert(SettlPartyIDSource_11.getString());
      FIX::SettlPartyRole SettlPartyRole_11(241134462);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_11);
      SettlParties_NoSettlPartyIDs_11.insert(SettlPartyRole_11.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_11);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
        FIX::SettlPartySubID SettlPartySubID_20("STRING_2054512613");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_20);
        SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubID_20.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_20(1599434005);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_20);
        SettlPtysSubGrp_NoSettlPartySubIDs_20.insert(SettlPartySubIDType_20.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
        FIX::SettlPartySubID SettlPartySubID_21("STRING_1717247853");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_21);
        SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubID_21.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_21(1024141172);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_21);
        SettlPtysSubGrp_NoSettlPartySubIDs_21.insert(SettlPartySubIDType_21.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_12;
      FIX::SettlPartyID SettlPartyID_12("STRING_8296156");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_12);
      SettlParties_NoSettlPartyIDs_12.insert(SettlPartyID_12.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_12('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_12);
      SettlParties_NoSettlPartyIDs_12.insert(SettlPartyIDSource_12.getString());
      FIX::SettlPartyRole SettlPartyRole_12(868652961);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_12);
      SettlParties_NoSettlPartyIDs_12.insert(SettlPartyRole_12.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_12);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
        FIX::SettlPartySubID SettlPartySubID_22("STRING_1186477740");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_22);
        SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubID_22.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_22(1373334743);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_22);
        SettlPtysSubGrp_NoSettlPartySubIDs_22.insert(SettlPartySubIDType_22.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
        FIX::SettlPartySubID SettlPartySubID_23("STRING_1969991882");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_23);
        SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubID_23.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_23(248992961);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_23);
        SettlPtysSubGrp_NoSettlPartySubIDs_23.insert(SettlPartySubIDType_23.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_13;
      FIX::SettlPartyID SettlPartyID_13("STRING_427818419");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyID_13.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_13('1');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyIDSource_13.getString());
      FIX::SettlPartyRole SettlPartyRole_13(2133983745);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyRole_13.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_13);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
        FIX::SettlPartySubID SettlPartySubID_24("STRING_1317581195");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_24);
        SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubID_24.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_24(1142439284);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_24);
        SettlPtysSubGrp_NoSettlPartySubIDs_24.insert(SettlPartySubIDType_24.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
        FIX::SettlPartySubID SettlPartySubID_25("STRING_1180192290");
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubID_25);
        SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubID_25.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_25(1483121350);
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubIDType_25);
        SettlPtysSubGrp_NoSettlPartySubIDs_25.insert(SettlPartySubIDType_25.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
        FIX::SettlPartySubID SettlPartySubID_26("STRING_669747334");
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubID_26);
        SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubID_26.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_26(2103633739);
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubIDType_26);
        SettlPtysSubGrp_NoSettlPartySubIDs_26.insert(SettlPartySubIDType_26.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_8;
    FIX::DlvyInstType DlvyInstType_8('C');
    noDlvyInst_0_1.set(DlvyInstType_8);
    DlvyInstGrp_NoDlvyInst_8.insert(DlvyInstType_8.getString());
    FIX::SettlInstSource SettlInstSource_8('1');
    noDlvyInst_0_1.set(SettlInstSource_8);
    DlvyInstGrp_NoDlvyInst_8.insert(SettlInstSource_8.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_8);
    all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_14;
      FIX::SettlPartyID SettlPartyID_14("STRING_1500536074");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyID_14.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_14('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyIDSource_14.getString());
      FIX::SettlPartyRole SettlPartyRole_14(1259792193);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyRole_14.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_14);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
        FIX::SettlPartySubID SettlPartySubID_27("STRING_1626840437");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_27);
        SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubID_27.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_27(1085880701);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_27);
        SettlPtysSubGrp_NoSettlPartySubIDs_27.insert(SettlPartySubIDType_27.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_3("CAN");
  msg.set(BenchmarkCurveCurrency_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveCurrency_3.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_3("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveName_3.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_3("STRING_1193664063");
  msg.set(BenchmarkCurvePoint_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurvePoint_3.getString());
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("10870869");
  msg.set(BenchmarkPrice_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPrice_3.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_3(847700694);
  msg.set(BenchmarkPriceType_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPriceType_3.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_3("STRING_2062317024");
  msg.set(BenchmarkSecurityID_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityID_3.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_3("STRING_330146537");
  msg.set(BenchmarkSecurityIDSource_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityIDSource_3.getString());
  FIX::Spread Spread_3;
  Spread_3.setString("20341784");
  msg.set(Spread_3);
  SpreadOrBenchmarkCurveData_3.insert(Spread_3.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_3);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    FIX::StipulationType StipulationType_7("STRING_MAXBAL");
    noStipulations_0_0.set(StipulationType_7);
    Stipulations_NoStipulations_7.insert(StipulationType_7.getString());
    FIX::StipulationValue StipulationValue_7("STRING_135687748");
    noStipulations_0_0.set(StipulationValue_7);
    Stipulations_NoStipulations_7.insert(StipulationValue_7.getString());
    all_values.push_back(Stipulations_NoStipulations_7);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_0;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_0("STRING_1567021199");
    noTrades_0_0.set(SecondaryTradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(SecondaryTradeReportID_0.getString());
    FIX::TradeReportID TradeReportID_0("STRING_122187845");
    noTrades_0_0.set(TradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(TradeReportID_0.getString());
    all_values.push_back(TrdCollGrp_NoTrades_0);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_1("STRING_2001813488");
    noTrades_0_1.set(SecondaryTradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(SecondaryTradeReportID_1.getString());
    FIX::TradeReportID TradeReportID_1("STRING_737118747");
    noTrades_0_1.set(TradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(TradeReportID_1.getString());
    all_values.push_back(TrdCollGrp_NoTrades_1);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_2("STRING_1264627130");
    noTrades_0_2.set(SecondaryTradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(SecondaryTradeReportID_2.getString());
    FIX::TradeReportID TradeReportID_2("STRING_1034522130");
    noTrades_0_2.set(TradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(TradeReportID_2.getString());
    all_values.push_back(TrdCollGrp_NoTrades_2);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_0;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_0("MULTIPLESTRINGVALUE_ADD");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskOrderHandlingInst_0.getString());
    FIX::DeskType DeskType_0("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskType_0.getString());
    FIX::DeskTypeSource DeskTypeSource_0(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskTypeSource_0.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_0(FIX::UTCTIMESTAMP(3, 16, 43, 8, 2, 2017));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestamp_0.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_0("STRING_1350047577");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampOrigin_0.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_0(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampType_0.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_1("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskOrderHandlingInst_1.getString());
    FIX::DeskType DeskType_1("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskType_1.getString());
    FIX::DeskTypeSource DeskTypeSource_1(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskTypeSource_1.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_1(FIX::UTCTIMESTAMP(2, 42, 28, 25, 2, 2004));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestamp_1.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_1("STRING_728292065");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampOrigin_1.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_1(3);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampType_1.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_2("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskOrderHandlingInst_2.getString());
    FIX::DeskType DeskType_2("STRING_O");
    noTrdRegTimestamps_0_2.set(DeskType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskType_2.getString());
    FIX::DeskTypeSource DeskTypeSource_2(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskTypeSource_2.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_2(FIX::UTCTIMESTAMP(0, 14, 28, 25, 9, 2010));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestamp_2.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_2("STRING_2079292465");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampOrigin_2.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_2(1);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampType_2.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_2);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_0;
    FIX::CollAction CollAction_0(0);
    noUnderlyings_0_0.set(CollAction_0);
    UndInstrmtCollGrp_NoUnderlyings_0.insert(CollAction_0.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_0);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_11;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_11("DATA_994411916");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuer_11.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_11(1472340671);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuerLen_11.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_11("DATA_389683125");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDesc_11.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_11(196975846);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDescLen_11.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("15010020");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_11);
    UnderlyingInstrument_11.insert(UnderlyingAdjustedQuantity_11.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("76.450000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_11);
    UnderlyingInstrument_11.insert(UnderlyingAllocationPercent_11.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("46.820000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingAttachmentPoint_11.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_11("STRING_575843813");
    noUnderlyings_0_0.set(UnderlyingCFICode_11);
    UnderlyingInstrument_11.insert(UnderlyingCFICode_11.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_11("STRING_1424099116");
    noUnderlyings_0_0.set(UnderlyingCPProgram_11);
    UnderlyingInstrument_11.insert(UnderlyingCPProgram_11.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_11("STRING_761094212");
    noUnderlyings_0_0.set(UnderlyingCPRegType_11);
    UnderlyingInstrument_11.insert(UnderlyingCPRegType_11.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("17130026");
    noUnderlyings_0_0.set(UnderlyingCapValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCapValue_11.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("6675134");
    noUnderlyings_0_0.set(UnderlyingCashAmount_11);
    UnderlyingInstrument_11.insert(UnderlyingCashAmount_11.getString());
    FIX::UnderlyingCashType UnderlyingCashType_11("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_11);
    UnderlyingInstrument_11.insert(UnderlyingCashType_11.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("19908458");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplier_11.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_11(63582609);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplierUnit_11.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_11("COUNTRY_2081990594");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingCountryOfIssue_11.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_11("LOCALMKTDATE_1837192053");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponPaymentDate_11.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("29.410000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponRate_11.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_11("STRING_784986857");
    noUnderlyings_0_0.set(UnderlyingCreditRating_11);
    UnderlyingInstrument_11.insert(UnderlyingCreditRating_11.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_11("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrency_11.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("7526102");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrentValue_11.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("25.440000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingDetachmentPoint_11.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("2048802");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingDirtyPrice_11.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("5071244");
    noUnderlyings_0_0.set(UnderlyingEndPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingEndPrice_11.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("18514529");
    noUnderlyings_0_0.set(UnderlyingEndValue_11);
    UnderlyingInstrument_11.insert(UnderlyingEndValue_11.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_11(73954255);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_11);
    UnderlyingInstrument_11.insert(UnderlyingExerciseStyle_11.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("4389332");
    noUnderlyings_0_0.set(UnderlyingFXRate_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRate_11.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_11('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRateCalc_11.getString());
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("16871564");
    noUnderlyings_0_0.set(UnderlyingFactor_11);
    UnderlyingInstrument_11.insert(UnderlyingFactor_11.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_11(1933742676);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_11);
    UnderlyingInstrument_11.insert(UnderlyingFlowScheduleType_11.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_11("STRING_1428626209");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_11);
    UnderlyingInstrument_11.insert(UnderlyingInstrRegistry_11.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_11("LOCALMKTDATE_1012013477");
    noUnderlyings_0_0.set(UnderlyingIssueDate_11);
    UnderlyingInstrument_11.insert(UnderlyingIssueDate_11.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_11("STRING_175942153");
    noUnderlyings_0_0.set(UnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(UnderlyingIssuer_11.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_11("STRING_1625602055");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingLocaleOfIssue_11.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_11("LOCALMKTDATE_365531864");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityDate_11.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_11("MONTHYEAR_539289799");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityMonthYear_11.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_11("TZTIMEONLY_1680786737");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityTime_11.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("56.780000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_11('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_11);
    UnderlyingInstrument_11.insert(UnderlyingOptAttribute_11.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("73.010000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingOriginalNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_11("STRING_506894646");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasure_11.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("4834187");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasureQty_11.getString());
    FIX::UnderlyingProduct UnderlyingProduct_11(1648095831);
    noUnderlyings_0_0.set(UnderlyingProduct_11);
    UnderlyingInstrument_11.insert(UnderlyingProduct_11.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_11(350256887);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_11);
    UnderlyingInstrument_11.insert(UnderlyingPutOrCall_11.getString());
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("5470013");
    noUnderlyings_0_0.set(UnderlyingPx_11);
    UnderlyingInstrument_11.insert(UnderlyingPx_11.getString());
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("15826027");
    noUnderlyings_0_0.set(UnderlyingQty_11);
    UnderlyingInstrument_11.insert(UnderlyingQty_11.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_11("LOCALMKTDATE_39965293");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_11);
    UnderlyingInstrument_11.insert(UnderlyingRedemptionDate_11.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_11("STRING_1573674295");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingRepoCollateralSecurityType_11.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("59.860000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseRate_11.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_11(1577833350);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseTerm_11.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_11("STRING_5589020");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_11);
    UnderlyingInstrument_11.insert(UnderlyingRestructuringType_11.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_11("STRING_972716236");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityDesc_11.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_11("EXCHANGE_1703415894");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityExchange_11.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_11("STRING_210469273");
    noUnderlyings_0_0.set(UnderlyingSecurityID_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityID_11.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_11("STRING_1479840694");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityIDSource_11.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_11("STRING_1407385147");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecuritySubType_11.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_11("STRING_284423528");
    noUnderlyings_0_0.set(UnderlyingSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityType_11.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_11("STRING_1918773970");
    noUnderlyings_0_0.set(UnderlyingSeniority_11);
    UnderlyingInstrument_11.insert(UnderlyingSeniority_11.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_11("STRING_1841599439");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlMethod_11.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_11(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlementType_11.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("17050329");
    noUnderlyings_0_0.set(UnderlyingStartValue_11);
    UnderlyingInstrument_11.insert(UnderlyingStartValue_11.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_11("STRING_1122742000");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingStateOrProvinceOfIssue_11.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_11("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikeCurrency_11.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("6008604");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikePrice_11.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_11("STRING_1201641676");
    noUnderlyings_0_0.set(UnderlyingSymbol_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbol_11.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_11("STRING_272781302");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbolSfx_11.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_11("STRING_134163496");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingTimeUnit_11.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_11("STRING_2143017354");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasure_11.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("886865");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasureQty_11.getString());
    all_values.push_back(UnderlyingInstrument_11);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_26("STRING_502428352");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltID_26.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_26("STRING_572105314");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltIDSource_26.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_27("STRING_2076656629");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltID_27.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_27("STRING_852685240");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltIDSource_27.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      FIX::UnderlyingStipType UnderlyingStipType_16("STRING_1511775758");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipType_16.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_16("STRING_892650533");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_16);
      UnderlyingStipulations_NoUnderlyingStips_16.insert(UnderlyingStipValue_16.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_23("STRING_1731881745");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyID_23.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_23('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyIDSource_23.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_23(550886336);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyRole_23.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_41("STRING_2026416130");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubID_41.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_41(761355609);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubIDType_41.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_42("STRING_2036955027");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubID_42.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_42(1286317629);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubIDType_42.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_43("STRING_1045779137");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubID_43.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_43(1808245349);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubIDType_43.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
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
