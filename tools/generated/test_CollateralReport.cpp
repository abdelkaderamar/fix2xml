#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_0;
  FIX::Account Account_7("STRING_614948824");
  msg.set(Account_7);
  CollateralReport_0.insert(Account_7.getString());
  FIX::AccountType AccountType_4(3);
  msg.set(AccountType_4);
  CollateralReport_0.insert(AccountType_4.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("10889696");
  msg.set(AccruedInterestAmt_5);
  CollateralReport_0.insert(AccruedInterestAmt_5.getString());
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("13678006");
  msg.set(CashOutstanding_2);
  CollateralReport_0.insert(CashOutstanding_2.getString());
  FIX::ClOrdID ClOrdID_9("STRING_779567424");
  msg.set(ClOrdID_9);
  CollateralReport_0.insert(ClOrdID_9.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_9("LOCALMKTDATE_32550982");
  msg.set(ClearingBusinessDate_9);
  CollateralReport_0.insert(ClearingBusinessDate_9.getString());
  FIX::CollApplType CollApplType_0(0);
  msg.set(CollApplType_0);
  CollateralReport_0.insert(CollApplType_0.getString());
  FIX::CollInquiryID CollInquiryID_2("STRING_1809475343");
  msg.set(CollInquiryID_2);
  CollateralReport_0.insert(CollInquiryID_2.getString());
  FIX::CollRptID CollRptID_0("STRING_262666629");
  msg.set(CollRptID_0);
  CollateralReport_0.insert(CollRptID_0.getString());
  FIX::CollStatus CollStatus_0(1);
  msg.set(CollStatus_0);
  CollateralReport_0.insert(CollStatus_0.getString());
  FIX::Currency Currency_9("JPY");
  msg.set(Currency_9);
  CollateralReport_0.insert(Currency_9.getString());
  FIX::EncodedText EncodedText_18("DATA_223473438");
  msg.set(EncodedText_18);
  CollateralReport_0.insert(EncodedText_18.getString());
  FIX::EncodedTextLen EncodedTextLen_18(1237299448);
  msg.set(EncodedTextLen_18);
  CollateralReport_0.insert(EncodedTextLen_18.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("10619530");
  msg.set(EndAccruedInterestAmt_5);
  CollateralReport_0.insert(EndAccruedInterestAmt_5.getString());
  FIX::EndCash EndCash_5;
  EndCash_5.setString("2294650");
  msg.set(EndCash_5);
  CollateralReport_0.insert(EndCash_5.getString());
  FIX::FinancialStatus FinancialStatus_0("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_0);
  CollateralReport_0.insert(FinancialStatus_0.getString());
  FIX::LastRptRequested LastRptRequested_1(true);
  msg.set(LastRptRequested_1);
  CollateralReport_0.insert(LastRptRequested_1.getString());
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("11150564");
  msg.set(MarginExcess_2);
  CollateralReport_0.insert(MarginExcess_2.getString());
  FIX::OrderID OrderID_9("STRING_1618164771");
  msg.set(OrderID_9);
  CollateralReport_0.insert(OrderID_9.getString());
  FIX::Price Price_6;
  Price_6.setString("6867415");
  msg.set(Price_6);
  CollateralReport_0.insert(Price_6.getString());
  FIX::PriceType PriceType_8(9);
  msg.set(PriceType_8);
  CollateralReport_0.insert(PriceType_8.getString());
  FIX::QtyType QtyType_7(0);
  msg.set(QtyType_7);
  CollateralReport_0.insert(QtyType_7.getString());
  FIX::Quantity Quantity_8;
  Quantity_8.setString("14277630");
  msg.set(Quantity_8);
  CollateralReport_0.insert(Quantity_8.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_9("STRING_1120397614");
  msg.set(SecondaryClOrdID_9);
  CollateralReport_0.insert(SecondaryClOrdID_9.getString());
  FIX::SecondaryOrderID SecondaryOrderID_9("STRING_1567103663");
  msg.set(SecondaryOrderID_9);
  CollateralReport_0.insert(SecondaryOrderID_9.getString());
  FIX::SettlDate SettlDate_12("LOCALMKTDATE_1705481478");
  msg.set(SettlDate_12);
  CollateralReport_0.insert(SettlDate_12.getString());
  FIX::SettlSessID SettlSessID_5("STRING_ETH");
  msg.set(SettlSessID_5);
  CollateralReport_0.insert(SettlSessID_5.getString());
  FIX::SettlSessSubID SettlSessSubID_4("STRING_30654657");
  msg.set(SettlSessSubID_4);
  CollateralReport_0.insert(SettlSessSubID_4.getString());
  FIX::Side Side_11('G');
  msg.set(Side_11);
  CollateralReport_0.insert(Side_11.getString());
  FIX::StartCash StartCash_5;
  StartCash_5.setString("7911396");
  msg.set(StartCash_5);
  CollateralReport_0.insert(StartCash_5.getString());
  FIX::Text Text_18("STRING_645603482");
  msg.set(Text_18);
  CollateralReport_0.insert(Text_18.getString());
  FIX::TotNumReports TotNumReports_1(2003992525);
  msg.set(TotNumReports_1);
  CollateralReport_0.insert(TotNumReports_1.getString());
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("18801092");
  msg.set(TotalNetValue_2);
  CollateralReport_0.insert(TotalNetValue_2.getString());
  FIX::TradingSessionID TradingSessionID_13("STRING_2");
  msg.set(TradingSessionID_13);
  CollateralReport_0.insert(TradingSessionID_13.getString());
  FIX::TradingSessionSubID TradingSessionSubID_13("STRING_1");
  msg.set(TradingSessionSubID_13);
  CollateralReport_0.insert(TradingSessionSubID_13.getString());
  FIX::TransactTime TransactTime_7(FIX::UTCTIMESTAMP(1, 56, 32, 4, 3, 2000));
  msg.set(TransactTime_7);
  CollateralReport_0.insert(TransactTime_7.getString());
  all_values.push_back(CollateralReport_0);

  all_compo_names.insert("CollateralReport");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_8;
    FIX::ExecID ExecID_14("STRING_1901897647");
    noExecs_0_0.set(ExecID_14);
    ExecCollGrp_NoExecs_8.insert(ExecID_14.getString());
    all_values.push_back(ExecCollGrp_NoExecs_8);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_9;
    FIX::ExecID ExecID_15("STRING_2019425658");
    noExecs_0_1.set(ExecID_15);
    ExecCollGrp_NoExecs_9.insert(ExecID_15.getString());
    all_values.push_back(ExecCollGrp_NoExecs_9);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  FIX::AgreementCurrency AgreementCurrency_6("EUR");
  msg.set(AgreementCurrency_6);
  FinancingDetails_6.insert(AgreementCurrency_6.getString());
  FIX::AgreementDate AgreementDate_6("LOCALMKTDATE_1050292086");
  msg.set(AgreementDate_6);
  FinancingDetails_6.insert(AgreementDate_6.getString());
  FIX::AgreementDesc AgreementDesc_6("STRING_350526148");
  msg.set(AgreementDesc_6);
  FinancingDetails_6.insert(AgreementDesc_6.getString());
  FIX::AgreementID AgreementID_6("STRING_1191691604");
  msg.set(AgreementID_6);
  FinancingDetails_6.insert(AgreementID_6.getString());
  FIX::DeliveryType DeliveryType_6(2);
  msg.set(DeliveryType_6);
  FinancingDetails_6.insert(DeliveryType_6.getString());
  FIX::EndDate EndDate_6("LOCALMKTDATE_1323063078");
  msg.set(EndDate_6);
  FinancingDetails_6.insert(EndDate_6.getString());
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("31.590000");
  msg.set(MarginRatio_6);
  FinancingDetails_6.insert(MarginRatio_6.getString());
  FIX::StartDate StartDate_6("LOCALMKTDATE_1017312970");
  msg.set(StartDate_6);
  FinancingDetails_6.insert(StartDate_6.getString());
  FIX::TerminationType TerminationType_6(1);
  msg.set(TerminationType_6);
  FinancingDetails_6.insert(TerminationType_6.getString());
  all_values.push_back(FinancingDetails_6);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_18;
    FIX::EncodedLegIssuer EncodedLegIssuer_18("DATA_575310800");
    noLegs_0_0.set(EncodedLegIssuer_18);
    InstrumentLeg_18.insert(EncodedLegIssuer_18.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_18(1686040378);
    noLegs_0_0.set(EncodedLegIssuerLen_18);
    InstrumentLeg_18.insert(EncodedLegIssuerLen_18.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_18("DATA_2097501480");
    noLegs_0_0.set(EncodedLegSecurityDesc_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDesc_18.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_18(686967871);
    noLegs_0_0.set(EncodedLegSecurityDescLen_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDescLen_18.getString());
    FIX::LegCFICode LegCFICode_18("STRING_329696345");
    noLegs_0_0.set(LegCFICode_18);
    InstrumentLeg_18.insert(LegCFICode_18.getString());
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("5956213");
    noLegs_0_0.set(LegContractMultiplier_18);
    InstrumentLeg_18.insert(LegContractMultiplier_18.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_18(543476748);
    noLegs_0_0.set(LegContractMultiplierUnit_18);
    InstrumentLeg_18.insert(LegContractMultiplierUnit_18.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_18("MONTHYEAR_62321946");
    noLegs_0_0.set(LegContractSettlMonth_18);
    InstrumentLeg_18.insert(LegContractSettlMonth_18.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_18("COUNTRY_461541785");
    noLegs_0_0.set(LegCountryOfIssue_18);
    InstrumentLeg_18.insert(LegCountryOfIssue_18.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_18("LOCALMKTDATE_1179553049");
    noLegs_0_0.set(LegCouponPaymentDate_18);
    InstrumentLeg_18.insert(LegCouponPaymentDate_18.getString());
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("21.780000");
    noLegs_0_0.set(LegCouponRate_18);
    InstrumentLeg_18.insert(LegCouponRate_18.getString());
    FIX::LegCreditRating LegCreditRating_18("STRING_1061285562");
    noLegs_0_0.set(LegCreditRating_18);
    InstrumentLeg_18.insert(LegCreditRating_18.getString());
    FIX::LegCurrency LegCurrency_18("JPY");
    noLegs_0_0.set(LegCurrency_18);
    InstrumentLeg_18.insert(LegCurrency_18.getString());
    FIX::LegDatedDate LegDatedDate_18("LOCALMKTDATE_1991300470");
    noLegs_0_0.set(LegDatedDate_18);
    InstrumentLeg_18.insert(LegDatedDate_18.getString());
    FIX::LegExerciseStyle LegExerciseStyle_18(2142219244);
    noLegs_0_0.set(LegExerciseStyle_18);
    InstrumentLeg_18.insert(LegExerciseStyle_18.getString());
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("8128143");
    noLegs_0_0.set(LegFactor_18);
    InstrumentLeg_18.insert(LegFactor_18.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_18(997305168);
    noLegs_0_0.set(LegFlowScheduleType_18);
    InstrumentLeg_18.insert(LegFlowScheduleType_18.getString());
    FIX::LegInstrRegistry LegInstrRegistry_18("STRING_1896633243");
    noLegs_0_0.set(LegInstrRegistry_18);
    InstrumentLeg_18.insert(LegInstrRegistry_18.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_18("LOCALMKTDATE_684756403");
    noLegs_0_0.set(LegInterestAccrualDate_18);
    InstrumentLeg_18.insert(LegInterestAccrualDate_18.getString());
    FIX::LegIssueDate LegIssueDate_18("LOCALMKTDATE_232774907");
    noLegs_0_0.set(LegIssueDate_18);
    InstrumentLeg_18.insert(LegIssueDate_18.getString());
    FIX::LegIssuer LegIssuer_18("STRING_1470160076");
    noLegs_0_0.set(LegIssuer_18);
    InstrumentLeg_18.insert(LegIssuer_18.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_18("STRING_1735048490");
    noLegs_0_0.set(LegLocaleOfIssue_18);
    InstrumentLeg_18.insert(LegLocaleOfIssue_18.getString());
    FIX::LegMaturityDate LegMaturityDate_18("LOCALMKTDATE_583301055");
    noLegs_0_0.set(LegMaturityDate_18);
    InstrumentLeg_18.insert(LegMaturityDate_18.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_18("MONTHYEAR_514368033");
    noLegs_0_0.set(LegMaturityMonthYear_18);
    InstrumentLeg_18.insert(LegMaturityMonthYear_18.getString());
    FIX::LegMaturityTime LegMaturityTime_18("TZTIMEONLY_1324598440");
    noLegs_0_0.set(LegMaturityTime_18);
    InstrumentLeg_18.insert(LegMaturityTime_18.getString());
    FIX::LegOptAttribute LegOptAttribute_18('1');
    noLegs_0_0.set(LegOptAttribute_18);
    InstrumentLeg_18.insert(LegOptAttribute_18.getString());
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("10141111");
    noLegs_0_0.set(LegOptionRatio_18);
    InstrumentLeg_18.insert(LegOptionRatio_18.getString());
    FIX::LegPool LegPool_18("STRING_194427762");
    noLegs_0_0.set(LegPool_18);
    InstrumentLeg_18.insert(LegPool_18.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_18("STRING_54857529");
    noLegs_0_0.set(LegPriceUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasure_18.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("9334743");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasureQty_18.getString());
    FIX::LegProduct LegProduct_18(769738562);
    noLegs_0_0.set(LegProduct_18);
    InstrumentLeg_18.insert(LegProduct_18.getString());
    FIX::LegPutOrCall LegPutOrCall_18(1740897907);
    noLegs_0_0.set(LegPutOrCall_18);
    InstrumentLeg_18.insert(LegPutOrCall_18.getString());
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("8834921");
    noLegs_0_0.set(LegRatioQty_18);
    InstrumentLeg_18.insert(LegRatioQty_18.getString());
    FIX::LegRedemptionDate LegRedemptionDate_18("LOCALMKTDATE_1456706433");
    noLegs_0_0.set(LegRedemptionDate_18);
    InstrumentLeg_18.insert(LegRedemptionDate_18.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_18("STRING_2070594252");
    noLegs_0_0.set(LegRepoCollateralSecurityType_18);
    InstrumentLeg_18.insert(LegRepoCollateralSecurityType_18.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("35.130000");
    noLegs_0_0.set(LegRepurchaseRate_18);
    InstrumentLeg_18.insert(LegRepurchaseRate_18.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_18(2000183181);
    noLegs_0_0.set(LegRepurchaseTerm_18);
    InstrumentLeg_18.insert(LegRepurchaseTerm_18.getString());
    FIX::LegSecurityDesc LegSecurityDesc_18("STRING_2132916198");
    noLegs_0_0.set(LegSecurityDesc_18);
    InstrumentLeg_18.insert(LegSecurityDesc_18.getString());
    FIX::LegSecurityExchange LegSecurityExchange_18("EXCHANGE_1940655298");
    noLegs_0_0.set(LegSecurityExchange_18);
    InstrumentLeg_18.insert(LegSecurityExchange_18.getString());
    FIX::LegSecurityID LegSecurityID_18("STRING_1032252582");
    noLegs_0_0.set(LegSecurityID_18);
    InstrumentLeg_18.insert(LegSecurityID_18.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_18("STRING_1960414728");
    noLegs_0_0.set(LegSecurityIDSource_18);
    InstrumentLeg_18.insert(LegSecurityIDSource_18.getString());
    FIX::LegSecuritySubType LegSecuritySubType_18("STRING_854457212");
    noLegs_0_0.set(LegSecuritySubType_18);
    InstrumentLeg_18.insert(LegSecuritySubType_18.getString());
    FIX::LegSecurityType LegSecurityType_18("STRING_362389979");
    noLegs_0_0.set(LegSecurityType_18);
    InstrumentLeg_18.insert(LegSecurityType_18.getString());
    FIX::LegSide LegSide_18('1');
    noLegs_0_0.set(LegSide_18);
    InstrumentLeg_18.insert(LegSide_18.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_18("STRING_698274034");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_18);
    InstrumentLeg_18.insert(LegStateOrProvinceOfIssue_18.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_18("JPY");
    noLegs_0_0.set(LegStrikeCurrency_18);
    InstrumentLeg_18.insert(LegStrikeCurrency_18.getString());
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("16955792");
    noLegs_0_0.set(LegStrikePrice_18);
    InstrumentLeg_18.insert(LegStrikePrice_18.getString());
    FIX::LegSymbol LegSymbol_18("STRING_106275170");
    noLegs_0_0.set(LegSymbol_18);
    InstrumentLeg_18.insert(LegSymbol_18.getString());
    FIX::LegSymbolSfx LegSymbolSfx_18("STRING_1165843619");
    noLegs_0_0.set(LegSymbolSfx_18);
    InstrumentLeg_18.insert(LegSymbolSfx_18.getString());
    FIX::LegTimeUnit LegTimeUnit_18("STRING_1928354109");
    noLegs_0_0.set(LegTimeUnit_18);
    InstrumentLeg_18.insert(LegTimeUnit_18.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_18("STRING_1576435247");
    noLegs_0_0.set(LegUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegUnitOfMeasure_18.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("7534084");
    noLegs_0_0.set(LegUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegUnitOfMeasureQty_18.getString());
    all_values.push_back(InstrumentLeg_18);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      FIX::LegSecurityAltID LegSecurityAltID_35("STRING_2090803280");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltID_35.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_35("STRING_2078006901");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltIDSource_35.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      FIX::LegSecurityAltID LegSecurityAltID_36("STRING_123052001");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltID_36.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_36("STRING_957430824");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltIDSource_36.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    FIX::EncodedLegIssuer EncodedLegIssuer_19("DATA_124951015");
    noLegs_0_1.set(EncodedLegIssuer_19);
    InstrumentLeg_19.insert(EncodedLegIssuer_19.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_19(177909530);
    noLegs_0_1.set(EncodedLegIssuerLen_19);
    InstrumentLeg_19.insert(EncodedLegIssuerLen_19.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_19("DATA_1890905191");
    noLegs_0_1.set(EncodedLegSecurityDesc_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDesc_19.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_19(894689577);
    noLegs_0_1.set(EncodedLegSecurityDescLen_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDescLen_19.getString());
    FIX::LegCFICode LegCFICode_19("STRING_1918807437");
    noLegs_0_1.set(LegCFICode_19);
    InstrumentLeg_19.insert(LegCFICode_19.getString());
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("6269137");
    noLegs_0_1.set(LegContractMultiplier_19);
    InstrumentLeg_19.insert(LegContractMultiplier_19.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_19(203912362);
    noLegs_0_1.set(LegContractMultiplierUnit_19);
    InstrumentLeg_19.insert(LegContractMultiplierUnit_19.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_19("MONTHYEAR_1841918041");
    noLegs_0_1.set(LegContractSettlMonth_19);
    InstrumentLeg_19.insert(LegContractSettlMonth_19.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_19("COUNTRY_2106027255");
    noLegs_0_1.set(LegCountryOfIssue_19);
    InstrumentLeg_19.insert(LegCountryOfIssue_19.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_19("LOCALMKTDATE_56611895");
    noLegs_0_1.set(LegCouponPaymentDate_19);
    InstrumentLeg_19.insert(LegCouponPaymentDate_19.getString());
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("5.910000");
    noLegs_0_1.set(LegCouponRate_19);
    InstrumentLeg_19.insert(LegCouponRate_19.getString());
    FIX::LegCreditRating LegCreditRating_19("STRING_1899198905");
    noLegs_0_1.set(LegCreditRating_19);
    InstrumentLeg_19.insert(LegCreditRating_19.getString());
    FIX::LegCurrency LegCurrency_19("JPY");
    noLegs_0_1.set(LegCurrency_19);
    InstrumentLeg_19.insert(LegCurrency_19.getString());
    FIX::LegDatedDate LegDatedDate_19("LOCALMKTDATE_606172469");
    noLegs_0_1.set(LegDatedDate_19);
    InstrumentLeg_19.insert(LegDatedDate_19.getString());
    FIX::LegExerciseStyle LegExerciseStyle_19(1451254457);
    noLegs_0_1.set(LegExerciseStyle_19);
    InstrumentLeg_19.insert(LegExerciseStyle_19.getString());
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("13085544");
    noLegs_0_1.set(LegFactor_19);
    InstrumentLeg_19.insert(LegFactor_19.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_19(1304446503);
    noLegs_0_1.set(LegFlowScheduleType_19);
    InstrumentLeg_19.insert(LegFlowScheduleType_19.getString());
    FIX::LegInstrRegistry LegInstrRegistry_19("STRING_1808380032");
    noLegs_0_1.set(LegInstrRegistry_19);
    InstrumentLeg_19.insert(LegInstrRegistry_19.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_19("LOCALMKTDATE_1789641711");
    noLegs_0_1.set(LegInterestAccrualDate_19);
    InstrumentLeg_19.insert(LegInterestAccrualDate_19.getString());
    FIX::LegIssueDate LegIssueDate_19("LOCALMKTDATE_852542057");
    noLegs_0_1.set(LegIssueDate_19);
    InstrumentLeg_19.insert(LegIssueDate_19.getString());
    FIX::LegIssuer LegIssuer_19("STRING_1914655203");
    noLegs_0_1.set(LegIssuer_19);
    InstrumentLeg_19.insert(LegIssuer_19.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_19("STRING_808001682");
    noLegs_0_1.set(LegLocaleOfIssue_19);
    InstrumentLeg_19.insert(LegLocaleOfIssue_19.getString());
    FIX::LegMaturityDate LegMaturityDate_19("LOCALMKTDATE_633412518");
    noLegs_0_1.set(LegMaturityDate_19);
    InstrumentLeg_19.insert(LegMaturityDate_19.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_19("MONTHYEAR_1343606802");
    noLegs_0_1.set(LegMaturityMonthYear_19);
    InstrumentLeg_19.insert(LegMaturityMonthYear_19.getString());
    FIX::LegMaturityTime LegMaturityTime_19("TZTIMEONLY_1561410144");
    noLegs_0_1.set(LegMaturityTime_19);
    InstrumentLeg_19.insert(LegMaturityTime_19.getString());
    FIX::LegOptAttribute LegOptAttribute_19('9');
    noLegs_0_1.set(LegOptAttribute_19);
    InstrumentLeg_19.insert(LegOptAttribute_19.getString());
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("12869264");
    noLegs_0_1.set(LegOptionRatio_19);
    InstrumentLeg_19.insert(LegOptionRatio_19.getString());
    FIX::LegPool LegPool_19("STRING_1491933397");
    noLegs_0_1.set(LegPool_19);
    InstrumentLeg_19.insert(LegPool_19.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_19("STRING_1120636035");
    noLegs_0_1.set(LegPriceUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasure_19.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("968736");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasureQty_19.getString());
    FIX::LegProduct LegProduct_19(1616884413);
    noLegs_0_1.set(LegProduct_19);
    InstrumentLeg_19.insert(LegProduct_19.getString());
    FIX::LegPutOrCall LegPutOrCall_19(1298545565);
    noLegs_0_1.set(LegPutOrCall_19);
    InstrumentLeg_19.insert(LegPutOrCall_19.getString());
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("19877788");
    noLegs_0_1.set(LegRatioQty_19);
    InstrumentLeg_19.insert(LegRatioQty_19.getString());
    FIX::LegRedemptionDate LegRedemptionDate_19("LOCALMKTDATE_364090342");
    noLegs_0_1.set(LegRedemptionDate_19);
    InstrumentLeg_19.insert(LegRedemptionDate_19.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_19("STRING_1069869354");
    noLegs_0_1.set(LegRepoCollateralSecurityType_19);
    InstrumentLeg_19.insert(LegRepoCollateralSecurityType_19.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("88.960000");
    noLegs_0_1.set(LegRepurchaseRate_19);
    InstrumentLeg_19.insert(LegRepurchaseRate_19.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_19(568002705);
    noLegs_0_1.set(LegRepurchaseTerm_19);
    InstrumentLeg_19.insert(LegRepurchaseTerm_19.getString());
    FIX::LegSecurityDesc LegSecurityDesc_19("STRING_764303747");
    noLegs_0_1.set(LegSecurityDesc_19);
    InstrumentLeg_19.insert(LegSecurityDesc_19.getString());
    FIX::LegSecurityExchange LegSecurityExchange_19("EXCHANGE_425752504");
    noLegs_0_1.set(LegSecurityExchange_19);
    InstrumentLeg_19.insert(LegSecurityExchange_19.getString());
    FIX::LegSecurityID LegSecurityID_19("STRING_624614600");
    noLegs_0_1.set(LegSecurityID_19);
    InstrumentLeg_19.insert(LegSecurityID_19.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_19("STRING_444170691");
    noLegs_0_1.set(LegSecurityIDSource_19);
    InstrumentLeg_19.insert(LegSecurityIDSource_19.getString());
    FIX::LegSecuritySubType LegSecuritySubType_19("STRING_177467761");
    noLegs_0_1.set(LegSecuritySubType_19);
    InstrumentLeg_19.insert(LegSecuritySubType_19.getString());
    FIX::LegSecurityType LegSecurityType_19("STRING_1713479078");
    noLegs_0_1.set(LegSecurityType_19);
    InstrumentLeg_19.insert(LegSecurityType_19.getString());
    FIX::LegSide LegSide_19('2');
    noLegs_0_1.set(LegSide_19);
    InstrumentLeg_19.insert(LegSide_19.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_19("STRING_783640231");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_19);
    InstrumentLeg_19.insert(LegStateOrProvinceOfIssue_19.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_19("JPY");
    noLegs_0_1.set(LegStrikeCurrency_19);
    InstrumentLeg_19.insert(LegStrikeCurrency_19.getString());
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("20880867");
    noLegs_0_1.set(LegStrikePrice_19);
    InstrumentLeg_19.insert(LegStrikePrice_19.getString());
    FIX::LegSymbol LegSymbol_19("STRING_678146271");
    noLegs_0_1.set(LegSymbol_19);
    InstrumentLeg_19.insert(LegSymbol_19.getString());
    FIX::LegSymbolSfx LegSymbolSfx_19("STRING_887681273");
    noLegs_0_1.set(LegSymbolSfx_19);
    InstrumentLeg_19.insert(LegSymbolSfx_19.getString());
    FIX::LegTimeUnit LegTimeUnit_19("STRING_793145144");
    noLegs_0_1.set(LegTimeUnit_19);
    InstrumentLeg_19.insert(LegTimeUnit_19.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_19("STRING_445317826");
    noLegs_0_1.set(LegUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegUnitOfMeasure_19.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("16956829");
    noLegs_0_1.set(LegUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegUnitOfMeasureQty_19.getString());
    all_values.push_back(InstrumentLeg_19);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      FIX::LegSecurityAltID LegSecurityAltID_37("STRING_1788924628");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltID_37.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_37("STRING_1109609451");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltIDSource_37.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      FIX::LegSecurityAltID LegSecurityAltID_38("STRING_276658049");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltID_38.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_38("STRING_928367414");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltIDSource_38.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      FIX::LegSecurityAltID LegSecurityAltID_39("STRING_454059201");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltID_39.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_39("STRING_1397294084");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltIDSource_39.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_20;
    FIX::EncodedLegIssuer EncodedLegIssuer_20("DATA_1025241025");
    noLegs_0_2.set(EncodedLegIssuer_20);
    InstrumentLeg_20.insert(EncodedLegIssuer_20.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_20(2070943614);
    noLegs_0_2.set(EncodedLegIssuerLen_20);
    InstrumentLeg_20.insert(EncodedLegIssuerLen_20.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_20("DATA_548356002");
    noLegs_0_2.set(EncodedLegSecurityDesc_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDesc_20.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_20(865536179);
    noLegs_0_2.set(EncodedLegSecurityDescLen_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDescLen_20.getString());
    FIX::LegCFICode LegCFICode_20("STRING_287550308");
    noLegs_0_2.set(LegCFICode_20);
    InstrumentLeg_20.insert(LegCFICode_20.getString());
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("16182253");
    noLegs_0_2.set(LegContractMultiplier_20);
    InstrumentLeg_20.insert(LegContractMultiplier_20.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_20(1332745075);
    noLegs_0_2.set(LegContractMultiplierUnit_20);
    InstrumentLeg_20.insert(LegContractMultiplierUnit_20.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_20("MONTHYEAR_855553013");
    noLegs_0_2.set(LegContractSettlMonth_20);
    InstrumentLeg_20.insert(LegContractSettlMonth_20.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_20("COUNTRY_235045456");
    noLegs_0_2.set(LegCountryOfIssue_20);
    InstrumentLeg_20.insert(LegCountryOfIssue_20.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_20("LOCALMKTDATE_1758497579");
    noLegs_0_2.set(LegCouponPaymentDate_20);
    InstrumentLeg_20.insert(LegCouponPaymentDate_20.getString());
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("76.140000");
    noLegs_0_2.set(LegCouponRate_20);
    InstrumentLeg_20.insert(LegCouponRate_20.getString());
    FIX::LegCreditRating LegCreditRating_20("STRING_679216147");
    noLegs_0_2.set(LegCreditRating_20);
    InstrumentLeg_20.insert(LegCreditRating_20.getString());
    FIX::LegCurrency LegCurrency_20("GBP");
    noLegs_0_2.set(LegCurrency_20);
    InstrumentLeg_20.insert(LegCurrency_20.getString());
    FIX::LegDatedDate LegDatedDate_20("LOCALMKTDATE_616184862");
    noLegs_0_2.set(LegDatedDate_20);
    InstrumentLeg_20.insert(LegDatedDate_20.getString());
    FIX::LegExerciseStyle LegExerciseStyle_20(572121924);
    noLegs_0_2.set(LegExerciseStyle_20);
    InstrumentLeg_20.insert(LegExerciseStyle_20.getString());
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("20634129");
    noLegs_0_2.set(LegFactor_20);
    InstrumentLeg_20.insert(LegFactor_20.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_20(1861708072);
    noLegs_0_2.set(LegFlowScheduleType_20);
    InstrumentLeg_20.insert(LegFlowScheduleType_20.getString());
    FIX::LegInstrRegistry LegInstrRegistry_20("STRING_512725010");
    noLegs_0_2.set(LegInstrRegistry_20);
    InstrumentLeg_20.insert(LegInstrRegistry_20.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_20("LOCALMKTDATE_594075554");
    noLegs_0_2.set(LegInterestAccrualDate_20);
    InstrumentLeg_20.insert(LegInterestAccrualDate_20.getString());
    FIX::LegIssueDate LegIssueDate_20("LOCALMKTDATE_601905697");
    noLegs_0_2.set(LegIssueDate_20);
    InstrumentLeg_20.insert(LegIssueDate_20.getString());
    FIX::LegIssuer LegIssuer_20("STRING_1305870154");
    noLegs_0_2.set(LegIssuer_20);
    InstrumentLeg_20.insert(LegIssuer_20.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_20("STRING_1039393381");
    noLegs_0_2.set(LegLocaleOfIssue_20);
    InstrumentLeg_20.insert(LegLocaleOfIssue_20.getString());
    FIX::LegMaturityDate LegMaturityDate_20("LOCALMKTDATE_150105004");
    noLegs_0_2.set(LegMaturityDate_20);
    InstrumentLeg_20.insert(LegMaturityDate_20.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_20("MONTHYEAR_584944169");
    noLegs_0_2.set(LegMaturityMonthYear_20);
    InstrumentLeg_20.insert(LegMaturityMonthYear_20.getString());
    FIX::LegMaturityTime LegMaturityTime_20("TZTIMEONLY_680834361");
    noLegs_0_2.set(LegMaturityTime_20);
    InstrumentLeg_20.insert(LegMaturityTime_20.getString());
    FIX::LegOptAttribute LegOptAttribute_20('1');
    noLegs_0_2.set(LegOptAttribute_20);
    InstrumentLeg_20.insert(LegOptAttribute_20.getString());
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("8616022");
    noLegs_0_2.set(LegOptionRatio_20);
    InstrumentLeg_20.insert(LegOptionRatio_20.getString());
    FIX::LegPool LegPool_20("STRING_1609201776");
    noLegs_0_2.set(LegPool_20);
    InstrumentLeg_20.insert(LegPool_20.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_20("STRING_1713773657");
    noLegs_0_2.set(LegPriceUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasure_20.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("1114126");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasureQty_20.getString());
    FIX::LegProduct LegProduct_20(486959153);
    noLegs_0_2.set(LegProduct_20);
    InstrumentLeg_20.insert(LegProduct_20.getString());
    FIX::LegPutOrCall LegPutOrCall_20(1637233623);
    noLegs_0_2.set(LegPutOrCall_20);
    InstrumentLeg_20.insert(LegPutOrCall_20.getString());
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("6597686");
    noLegs_0_2.set(LegRatioQty_20);
    InstrumentLeg_20.insert(LegRatioQty_20.getString());
    FIX::LegRedemptionDate LegRedemptionDate_20("LOCALMKTDATE_1352495332");
    noLegs_0_2.set(LegRedemptionDate_20);
    InstrumentLeg_20.insert(LegRedemptionDate_20.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_20("STRING_1924783931");
    noLegs_0_2.set(LegRepoCollateralSecurityType_20);
    InstrumentLeg_20.insert(LegRepoCollateralSecurityType_20.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("3.650000");
    noLegs_0_2.set(LegRepurchaseRate_20);
    InstrumentLeg_20.insert(LegRepurchaseRate_20.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_20(537756759);
    noLegs_0_2.set(LegRepurchaseTerm_20);
    InstrumentLeg_20.insert(LegRepurchaseTerm_20.getString());
    FIX::LegSecurityDesc LegSecurityDesc_20("STRING_632853297");
    noLegs_0_2.set(LegSecurityDesc_20);
    InstrumentLeg_20.insert(LegSecurityDesc_20.getString());
    FIX::LegSecurityExchange LegSecurityExchange_20("EXCHANGE_365555821");
    noLegs_0_2.set(LegSecurityExchange_20);
    InstrumentLeg_20.insert(LegSecurityExchange_20.getString());
    FIX::LegSecurityID LegSecurityID_20("STRING_148770691");
    noLegs_0_2.set(LegSecurityID_20);
    InstrumentLeg_20.insert(LegSecurityID_20.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_20("STRING_2113020911");
    noLegs_0_2.set(LegSecurityIDSource_20);
    InstrumentLeg_20.insert(LegSecurityIDSource_20.getString());
    FIX::LegSecuritySubType LegSecuritySubType_20("STRING_1044771968");
    noLegs_0_2.set(LegSecuritySubType_20);
    InstrumentLeg_20.insert(LegSecuritySubType_20.getString());
    FIX::LegSecurityType LegSecurityType_20("STRING_2084736032");
    noLegs_0_2.set(LegSecurityType_20);
    InstrumentLeg_20.insert(LegSecurityType_20.getString());
    FIX::LegSide LegSide_20('1');
    noLegs_0_2.set(LegSide_20);
    InstrumentLeg_20.insert(LegSide_20.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_20("STRING_1660956830");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_20);
    InstrumentLeg_20.insert(LegStateOrProvinceOfIssue_20.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_20("JPY");
    noLegs_0_2.set(LegStrikeCurrency_20);
    InstrumentLeg_20.insert(LegStrikeCurrency_20.getString());
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("13751812");
    noLegs_0_2.set(LegStrikePrice_20);
    InstrumentLeg_20.insert(LegStrikePrice_20.getString());
    FIX::LegSymbol LegSymbol_20("STRING_1022099318");
    noLegs_0_2.set(LegSymbol_20);
    InstrumentLeg_20.insert(LegSymbol_20.getString());
    FIX::LegSymbolSfx LegSymbolSfx_20("STRING_1521705144");
    noLegs_0_2.set(LegSymbolSfx_20);
    InstrumentLeg_20.insert(LegSymbolSfx_20.getString());
    FIX::LegTimeUnit LegTimeUnit_20("STRING_1977086951");
    noLegs_0_2.set(LegTimeUnit_20);
    InstrumentLeg_20.insert(LegTimeUnit_20.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_20("STRING_180485825");
    noLegs_0_2.set(LegUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegUnitOfMeasure_20.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("4136148");
    noLegs_0_2.set(LegUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegUnitOfMeasureQty_20.getString());
    all_values.push_back(InstrumentLeg_20);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      FIX::LegSecurityAltID LegSecurityAltID_40("STRING_765429994");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltID_40.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_40("STRING_1094449239");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltIDSource_40.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("27.630000");
  msg.set(AttachmentPoint_9);
  Instrument_9.insert(AttachmentPoint_9.getString());
  FIX::CFICode CFICode_9("STRING_1627032212");
  msg.set(CFICode_9);
  Instrument_9.insert(CFICode_9.getString());
  FIX::CPProgram CPProgram_9(2);
  msg.set(CPProgram_9);
  Instrument_9.insert(CPProgram_9.getString());
  FIX::CPRegType CPRegType_9("STRING_805712772");
  msg.set(CPRegType_9);
  Instrument_9.insert(CPRegType_9.getString());
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("17384448");
  msg.set(CapPrice_9);
  Instrument_9.insert(CapPrice_9.getString());
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("10431265");
  msg.set(ContractMultiplier_9);
  Instrument_9.insert(ContractMultiplier_9.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_9(1);
  msg.set(ContractMultiplierUnit_9);
  Instrument_9.insert(ContractMultiplierUnit_9.getString());
  FIX::ContractSettlMonth ContractSettlMonth_9("MONTHYEAR_250729875");
  msg.set(ContractSettlMonth_9);
  Instrument_9.insert(ContractSettlMonth_9.getString());
  FIX::CountryOfIssue CountryOfIssue_9("COUNTRY_248138204");
  msg.set(CountryOfIssue_9);
  Instrument_9.insert(CountryOfIssue_9.getString());
  FIX::CouponPaymentDate CouponPaymentDate_9("LOCALMKTDATE_72763031");
  msg.set(CouponPaymentDate_9);
  Instrument_9.insert(CouponPaymentDate_9.getString());
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("2.400000");
  msg.set(CouponRate_9);
  Instrument_9.insert(CouponRate_9.getString());
  FIX::CreditRating CreditRating_9("STRING_785894963");
  msg.set(CreditRating_9);
  Instrument_9.insert(CreditRating_9.getString());
  FIX::DatedDate DatedDate_9("LOCALMKTDATE_705616328");
  msg.set(DatedDate_9);
  Instrument_9.insert(DatedDate_9.getString());
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("60.610000");
  msg.set(DetachmentPoint_9);
  Instrument_9.insert(DetachmentPoint_9.getString());
  FIX::EncodedIssuer EncodedIssuer_9("DATA_934665654");
  msg.set(EncodedIssuer_9);
  Instrument_9.insert(EncodedIssuer_9.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_9(671153591);
  msg.set(EncodedIssuerLen_9);
  Instrument_9.insert(EncodedIssuerLen_9.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_9("DATA_1791568029");
  msg.set(EncodedSecurityDesc_9);
  Instrument_9.insert(EncodedSecurityDesc_9.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_9(871918038);
  msg.set(EncodedSecurityDescLen_9);
  Instrument_9.insert(EncodedSecurityDescLen_9.getString());
  FIX::ExerciseStyle ExerciseStyle_9(1);
  msg.set(ExerciseStyle_9);
  Instrument_9.insert(ExerciseStyle_9.getString());
  FIX::Factor Factor_9;
  Factor_9.setString("13050412");
  msg.set(Factor_9);
  Instrument_9.insert(Factor_9.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_9(true);
  msg.set(FlexProductEligibilityIndicator_9);
  Instrument_9.insert(FlexProductEligibilityIndicator_9.getString());
  FIX::FlexibleIndicator FlexibleIndicator_9(true);
  msg.set(FlexibleIndicator_9);
  Instrument_9.insert(FlexibleIndicator_9.getString());
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("5327388");
  msg.set(FloorPrice_9);
  Instrument_9.insert(FloorPrice_9.getString());
  FIX::FlowScheduleType FlowScheduleType_9(2);
  msg.set(FlowScheduleType_9);
  Instrument_9.insert(FlowScheduleType_9.getString());
  FIX::InstrRegistry InstrRegistry_9("STRING_1984704984");
  msg.set(InstrRegistry_9);
  Instrument_9.insert(InstrRegistry_9.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_9('3');
  msg.set(InstrmtAssignmentMethod_9);
  Instrument_9.insert(InstrmtAssignmentMethod_9.getString());
  FIX::InterestAccrualDate InterestAccrualDate_9("LOCALMKTDATE_436393842");
  msg.set(InterestAccrualDate_9);
  Instrument_9.insert(InterestAccrualDate_9.getString());
  FIX::IssueDate IssueDate_9("LOCALMKTDATE_250836214");
  msg.set(IssueDate_9);
  Instrument_9.insert(IssueDate_9.getString());
  FIX::Issuer Issuer_9("STRING_342050427");
  msg.set(Issuer_9);
  Instrument_9.insert(Issuer_9.getString());
  FIX::ListMethod ListMethod_9(0);
  msg.set(ListMethod_9);
  Instrument_9.insert(ListMethod_9.getString());
  FIX::LocaleOfIssue LocaleOfIssue_9("STRING_1345285453");
  msg.set(LocaleOfIssue_9);
  Instrument_9.insert(LocaleOfIssue_9.getString());
  FIX::MaturityDate MaturityDate_9("LOCALMKTDATE_1581473191");
  msg.set(MaturityDate_9);
  Instrument_9.insert(MaturityDate_9.getString());
  FIX::MaturityMonthYear MaturityMonthYear_9("MONTHYEAR_681372400");
  msg.set(MaturityMonthYear_9);
  Instrument_9.insert(MaturityMonthYear_9.getString());
  FIX::MaturityTime MaturityTime_9("TZTIMEONLY_1901452820");
  msg.set(MaturityTime_9);
  Instrument_9.insert(MaturityTime_9.getString());
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("2397023");
  msg.set(MinPriceIncrement_9);
  Instrument_9.insert(MinPriceIncrement_9.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("2723336");
  msg.set(MinPriceIncrementAmount_9);
  Instrument_9.insert(MinPriceIncrementAmount_9.getString());
  FIX::NTPositionLimit NTPositionLimit_9(797095692);
  msg.set(NTPositionLimit_9);
  Instrument_9.insert(NTPositionLimit_9.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("50.630000");
  msg.set(NotionalPercentageOutstanding_9);
  Instrument_9.insert(NotionalPercentageOutstanding_9.getString());
  FIX::OptAttribute OptAttribute_9('5');
  msg.set(OptAttribute_9);
  Instrument_9.insert(OptAttribute_9.getString());
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("10452338");
  msg.set(OptPayoutAmount_9);
  Instrument_9.insert(OptPayoutAmount_9.getString());
  FIX::OptPayoutType OptPayoutType_9(1);
  msg.set(OptPayoutType_9);
  Instrument_9.insert(OptPayoutType_9.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("37.330000");
  msg.set(OriginalNotionalPercentageOutstanding_9);
  Instrument_9.insert(OriginalNotionalPercentageOutstanding_9.getString());
  FIX::Pool Pool_9("STRING_1831128859");
  msg.set(Pool_9);
  Instrument_9.insert(Pool_9.getString());
  FIX::PositionLimit PositionLimit_9(1313544422);
  msg.set(PositionLimit_9);
  Instrument_9.insert(PositionLimit_9.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_9("STRING_INT");
  msg.set(PriceQuoteMethod_9);
  Instrument_9.insert(PriceQuoteMethod_9.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_9("STRING_618310866");
  msg.set(PriceUnitOfMeasure_9);
  Instrument_9.insert(PriceUnitOfMeasure_9.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("19846980");
  msg.set(PriceUnitOfMeasureQty_9);
  Instrument_9.insert(PriceUnitOfMeasureQty_9.getString());
  FIX::Product Product_11(13);
  msg.set(Product_11);
  Instrument_9.insert(Product_11.getString());
  FIX::ProductComplex ProductComplex_9("STRING_1490228904");
  msg.set(ProductComplex_9);
  Instrument_9.insert(ProductComplex_9.getString());
  FIX::PutOrCall PutOrCall_9(1);
  msg.set(PutOrCall_9);
  Instrument_9.insert(PutOrCall_9.getString());
  FIX::RedemptionDate RedemptionDate_9("LOCALMKTDATE_452741738");
  msg.set(RedemptionDate_9);
  Instrument_9.insert(RedemptionDate_9.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_9("STRING_724037603");
  msg.set(RepoCollateralSecurityType_9);
  Instrument_9.insert(RepoCollateralSecurityType_9.getString());
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("81.030000");
  msg.set(RepurchaseRate_9);
  Instrument_9.insert(RepurchaseRate_9.getString());
  FIX::RepurchaseTerm RepurchaseTerm_9(985480555);
  msg.set(RepurchaseTerm_9);
  Instrument_9.insert(RepurchaseTerm_9.getString());
  FIX::RestructuringType RestructuringType_9("STRING_FR");
  msg.set(RestructuringType_9);
  Instrument_9.insert(RestructuringType_9.getString());
  FIX::SecurityDesc SecurityDesc_9("STRING_1820289439");
  msg.set(SecurityDesc_9);
  Instrument_9.insert(SecurityDesc_9.getString());
  FIX::SecurityExchange SecurityExchange_9("EXCHANGE_1347822675");
  msg.set(SecurityExchange_9);
  Instrument_9.insert(SecurityExchange_9.getString());
  FIX::SecurityGroup SecurityGroup_9("STRING_1416339462");
  msg.set(SecurityGroup_9);
  Instrument_9.insert(SecurityGroup_9.getString());
  FIX::SecurityID SecurityID_9("STRING_2071125653");
  msg.set(SecurityID_9);
  Instrument_9.insert(SecurityID_9.getString());
  FIX::SecurityIDSource SecurityIDSource_9("STRING_I");
  msg.set(SecurityIDSource_9);
  Instrument_9.insert(SecurityIDSource_9.getString());
  FIX::SecurityStatus SecurityStatus_9("STRING_1");
  msg.set(SecurityStatus_9);
  Instrument_9.insert(SecurityStatus_9.getString());
  FIX::SecuritySubType SecuritySubType_9("STRING_1268927458");
  msg.set(SecuritySubType_9);
  Instrument_9.insert(SecuritySubType_9.getString());
  FIX::SecurityType SecurityType_11("STRING_IET");
  msg.set(SecurityType_11);
  Instrument_9.insert(SecurityType_11.getString());
  FIX::Seniority Seniority_9("STRING_SD");
  msg.set(Seniority_9);
  Instrument_9.insert(Seniority_9.getString());
  FIX::SettlMethod SettlMethod_9('C');
  msg.set(SettlMethod_9);
  Instrument_9.insert(SettlMethod_9.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_9("STRING_1363564961");
  msg.set(SettleOnOpenFlag_9);
  Instrument_9.insert(SettleOnOpenFlag_9.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_9("STRING_1424385668");
  msg.set(StateOrProvinceOfIssue_9);
  Instrument_9.insert(StateOrProvinceOfIssue_9.getString());
  FIX::StrikeCurrency StrikeCurrency_9("USD");
  msg.set(StrikeCurrency_9);
  Instrument_9.insert(StrikeCurrency_9.getString());
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("19474491");
  msg.set(StrikeMultiplier_9);
  Instrument_9.insert(StrikeMultiplier_9.getString());
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("7177425");
  msg.set(StrikePrice_9);
  Instrument_9.insert(StrikePrice_9.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_9(1);
  msg.set(StrikePriceBoundaryMethod_9);
  Instrument_9.insert(StrikePriceBoundaryMethod_9.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("92.470000");
  msg.set(StrikePriceBoundaryPrecision_9);
  Instrument_9.insert(StrikePriceBoundaryPrecision_9.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_9(3);
  msg.set(StrikePriceDeterminationMethod_9);
  Instrument_9.insert(StrikePriceDeterminationMethod_9.getString());
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("16727188");
  msg.set(StrikeValue_9);
  Instrument_9.insert(StrikeValue_9.getString());
  FIX::Symbol Symbol_9("STRING_207885394");
  msg.set(Symbol_9);
  Instrument_9.insert(Symbol_9.getString());
  FIX::SymbolSfx SymbolSfx_9("STRING_CD");
  msg.set(SymbolSfx_9);
  Instrument_9.insert(SymbolSfx_9.getString());
  FIX::TimeUnit TimeUnit_9("STRING_H");
  msg.set(TimeUnit_9);
  Instrument_9.insert(TimeUnit_9.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_9(2);
  msg.set(UnderlyingPriceDeterminationMethod_9);
  Instrument_9.insert(UnderlyingPriceDeterminationMethod_9.getString());
  FIX::UnitOfMeasure UnitOfMeasure_9("STRING_Bbl");
  msg.set(UnitOfMeasure_9);
  Instrument_9.insert(UnitOfMeasure_9.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("8825178");
  msg.set(UnitOfMeasureQty_9);
  Instrument_9.insert(UnitOfMeasureQty_9.getString());
  FIX::ValuationMethod ValuationMethod_9("STRING_CDS");
  msg.set(ValuationMethod_9);
  Instrument_9.insert(ValuationMethod_9.getString());
  all_values.push_back(Instrument_9);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    FIX::ComplexEventCondition ComplexEventCondition_18(2);
    noComplexEvents_0_0.set(ComplexEventCondition_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventCondition_18.getString());
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("7938082");
    noComplexEvents_0_0.set(ComplexEventPrice_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPrice_18.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_18(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryMethod_18.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("81.190000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryPrecision_18.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_18(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceTimeType_18.getString());
    FIX::ComplexEventType ComplexEventType_18(3);
    noComplexEvents_0_0.set(ComplexEventType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventType_18.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("3145501");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexOptPayoutAmount_18.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_18);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      FIX::ComplexEventEndDate ComplexEventEndDate_44(FIX::UTCTIMESTAMP(15, 44, 53, 21, 2, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventEndDate_44.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_44(FIX::UTCTIMESTAMP(18, 56, 30, 4, 12, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventStartDate_44.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        FIX::ComplexEventEndTime ComplexEventEndTime_95(FIX::UTCTIMEONLY(0, 6, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventEndTime_95.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_95(FIX::UTCTIMEONLY(7, 39, 4));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventStartTime_95.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      FIX::ComplexEventEndDate ComplexEventEndDate_45(FIX::UTCTIMESTAMP(14, 4, 37, 13, 2, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventEndDate_45.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_45(FIX::UTCTIMESTAMP(1, 37, 51, 18, 7, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventStartDate_45.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        FIX::ComplexEventEndTime ComplexEventEndTime_96(FIX::UTCTIMEONLY(7, 36, 33));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventEndTime_96.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_96(FIX::UTCTIMEONLY(0, 17, 24));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventStartTime_96.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    FIX::ComplexEventCondition ComplexEventCondition_19(2);
    noComplexEvents_0_1.set(ComplexEventCondition_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventCondition_19.getString());
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("12818808");
    noComplexEvents_0_1.set(ComplexEventPrice_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPrice_19.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_19(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryMethod_19.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("6.440000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceBoundaryPrecision_19.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_19(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventPriceTimeType_19.getString());
    FIX::ComplexEventType ComplexEventType_19(8);
    noComplexEvents_0_1.set(ComplexEventType_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexEventType_19.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("4845973");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_19);
    ComplexEvents_NoComplexEvents_19.insert(ComplexOptPayoutAmount_19.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_19);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      FIX::ComplexEventEndDate ComplexEventEndDate_46(FIX::UTCTIMESTAMP(18, 19, 30, 23, 10, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventEndDate_46.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_46(FIX::UTCTIMESTAMP(22, 41, 2, 8, 4, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventStartDate_46.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        FIX::ComplexEventEndTime ComplexEventEndTime_97(FIX::UTCTIMEONLY(22, 1, 43));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventEndTime_97.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_97(FIX::UTCTIMEONLY(17, 52, 30));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventStartTime_97.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      FIX::ComplexEventEndDate ComplexEventEndDate_47(FIX::UTCTIMESTAMP(10, 53, 3, 25, 8, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventEndDate_47.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_47(FIX::UTCTIMESTAMP(0, 53, 16, 22, 9, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventStartDate_47.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        FIX::ComplexEventEndTime ComplexEventEndTime_98(FIX::UTCTIMEONLY(3, 11, 10));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventEndTime_98.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_98(FIX::UTCTIMEONLY(6, 13, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventStartTime_98.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      FIX::ComplexEventEndDate ComplexEventEndDate_48(FIX::UTCTIMESTAMP(0, 6, 11, 6, 1, 2014));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventEndDate_48.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_48(FIX::UTCTIMESTAMP(19, 10, 22, 14, 9, 2011));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventStartDate_48.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        FIX::ComplexEventEndTime ComplexEventEndTime_99(FIX::UTCTIMEONLY(5, 30, 57));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventEndTime_99.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_99(FIX::UTCTIMEONLY(3, 55, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventStartTime_99.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        FIX::ComplexEventEndTime ComplexEventEndTime_100(FIX::UTCTIMEONLY(10, 52, 28));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventEndTime_100.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_100(FIX::UTCTIMEONLY(23, 42, 35));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventStartTime_100.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_18;
    FIX::EventDate EventDate_18("LOCALMKTDATE_1352782174");
    noEvents_0_0.set(EventDate_18);
    EvntGrp_NoEvents_18.insert(EventDate_18.getString());
    FIX::EventPx EventPx_18;
    EventPx_18.setString("7540530");
    noEvents_0_0.set(EventPx_18);
    EvntGrp_NoEvents_18.insert(EventPx_18.getString());
    FIX::EventText EventText_18("STRING_1558178143");
    noEvents_0_0.set(EventText_18);
    EvntGrp_NoEvents_18.insert(EventText_18.getString());
    FIX::EventTime EventTime_18(FIX::UTCTIMESTAMP(18, 39, 8, 25, 6, 2006));
    noEvents_0_0.set(EventTime_18);
    EvntGrp_NoEvents_18.insert(EventTime_18.getString());
    FIX::EventType EventType_18(4);
    noEvents_0_0.set(EventType_18);
    EvntGrp_NoEvents_18.insert(EventType_18.getString());
    all_values.push_back(EvntGrp_NoEvents_18);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    FIX::InstrumentPartyID InstrumentPartyID_16("STRING_1349681112");
    noInstrumentParties_0_0.set(InstrumentPartyID_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyID_16.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_16('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyIDSource_16.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_16(1241206686);
    noInstrumentParties_0_0.set(InstrumentPartyRole_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyRole_16.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33;
      FIX::InstrumentPartySubID InstrumentPartySubID_33("STRING_1293177823");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubID_33.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_33(1093528016);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_33);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33.insert(InstrumentPartySubIDType_33.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_33);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    FIX::InstrumentPartyID InstrumentPartyID_17("STRING_2120752697");
    noInstrumentParties_0_1.set(InstrumentPartyID_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyID_17.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_17('8');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyIDSource_17.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_17(1268001471);
    noInstrumentParties_0_1.set(InstrumentPartyRole_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyRole_17.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      FIX::InstrumentPartySubID InstrumentPartySubID_34("STRING_1234195829");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubID_34.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_34(1166833481);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_34);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34.insert(InstrumentPartySubIDType_34.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      FIX::InstrumentPartySubID InstrumentPartySubID_35("STRING_207468163");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubID_35.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_35(1296423657);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubIDType_35.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    FIX::SecurityAltID SecurityAltID_17("STRING_1782730794");
    noSecurityAltID_0_0.set(SecurityAltID_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltID_17.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_17("STRING_824162191");
    noSecurityAltID_0_0.set(SecurityAltIDSource_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltIDSource_17.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  FIX::SecurityXML SecurityXML_19("XMLDATA_1423461827");
  msg.set(SecurityXML_19);
  FIX::SecurityXMLLen SecurityXMLLen_9(1392929125);
  msg.set(SecurityXMLLen_9);
  FIX::SecurityXMLSchema SecurityXMLSchema_9("STRING_29460717");
  msg.set(SecurityXMLSchema_9);
  SecurityXML_18.insert(SecurityXMLSchema_9.getString());
  all_values.push_back(SecurityXML_18);
  all_compo_names.insert("SecurityXML");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_12;
    FIX::MiscFeeAmt MiscFeeAmt_12;
    MiscFeeAmt_12.setString("8036236");
    noMiscFees_0_0.set(MiscFeeAmt_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeAmt_12.getString());
    FIX::MiscFeeBasis MiscFeeBasis_12(1);
    noMiscFees_0_0.set(MiscFeeBasis_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeBasis_12.getString());
    FIX::MiscFeeCurr MiscFeeCurr_12("EUR");
    noMiscFees_0_0.set(MiscFeeCurr_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeCurr_12.getString());
    FIX::MiscFeeType MiscFeeType_12("STRING_11");
    noMiscFees_0_0.set(MiscFeeType_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeType_12.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_12);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    FIX::PartyID PartyID_23("STRING_1269750793");
    noPartyIDs_0_0.set(PartyID_23);
    Parties_NoPartyIDs_23.insert(PartyID_23.getString());
    FIX::PartyIDSource PartyIDSource_23('4');
    noPartyIDs_0_0.set(PartyIDSource_23);
    Parties_NoPartyIDs_23.insert(PartyIDSource_23.getString());
    FIX::PartyRole PartyRole_23(74);
    noPartyIDs_0_0.set(PartyRole_23);
    Parties_NoPartyIDs_23.insert(PartyRole_23.getString());
    all_values.push_back(Parties_NoPartyIDs_23);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      FIX::PartySubID PartySubID_54("STRING_60688392");
      noPartySubIDs_0_1_0.set(PartySubID_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubID_54.getString());
      FIX::PartySubIDType PartySubIDType_54(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubIDType_54.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      FIX::PartySubID PartySubID_55("STRING_861712957");
      noPartySubIDs_0_1_1.set(PartySubID_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubID_55.getString());
      FIX::PartySubIDType PartySubIDType_55(14);
      noPartySubIDs_0_1_1.set(PartySubIDType_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubIDType_55.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      FIX::PartySubID PartySubID_56("STRING_162457968");
      noPartySubIDs_0_1_2.set(PartySubID_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubID_56.getString());
      FIX::PartySubIDType PartySubIDType_56(16);
      noPartySubIDs_0_1_2.set(PartySubIDType_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubIDType_56.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_6;
  FIX::SettlDeliveryType SettlDeliveryType_6(3);
  msg.set(SettlDeliveryType_6);
  SettlInstructionsData_6.insert(SettlDeliveryType_6.getString());
  FIX::StandInstDbID StandInstDbID_6("STRING_1040453331");
  msg.set(StandInstDbID_6);
  SettlInstructionsData_6.insert(StandInstDbID_6.getString());
  FIX::StandInstDbName StandInstDbName_6("STRING_1075758796");
  msg.set(StandInstDbName_6);
  SettlInstructionsData_6.insert(StandInstDbName_6.getString());
  FIX::StandInstDbType StandInstDbType_6(4);
  msg.set(StandInstDbType_6);
  SettlInstructionsData_6.insert(StandInstDbType_6.getString());
  all_values.push_back(SettlInstructionsData_6);
  all_compo_names.insert("SettlInstructionsData");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_10;
    FIX::DlvyInstType DlvyInstType_10('S');
    noDlvyInst_0_0.set(DlvyInstType_10);
    DlvyInstGrp_NoDlvyInst_10.insert(DlvyInstType_10.getString());
    FIX::SettlInstSource SettlInstSource_10('2');
    noDlvyInst_0_0.set(SettlInstSource_10);
    DlvyInstGrp_NoDlvyInst_10.insert(SettlInstSource_10.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_10);
    all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_18;
      FIX::SettlPartyID SettlPartyID_18("STRING_1434761821");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyID_18.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_18('7');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyIDSource_18.getString());
      FIX::SettlPartyRole SettlPartyRole_18(100267713);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyRole_18.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_18);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
        FIX::SettlPartySubID SettlPartySubID_32("STRING_1464628084");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_32);
        SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubID_32.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_32(129728430);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_32);
        SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubIDType_32.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
        FIX::SettlPartySubID SettlPartySubID_33("STRING_740771222");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_33);
        SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubID_33.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_33(120768056);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_33);
        SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubIDType_33.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
        FIX::SettlPartySubID SettlPartySubID_34("STRING_1841048048");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_34);
        SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubID_34.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_34(373310110);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_34);
        SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubIDType_34.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_5;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_5("JPY");
  msg.set(BenchmarkCurveCurrency_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveCurrency_5.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_5("STRING_SWAP");
  msg.set(BenchmarkCurveName_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveName_5.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_5("STRING_35062593");
  msg.set(BenchmarkCurvePoint_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurvePoint_5.getString());
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("5824642");
  msg.set(BenchmarkPrice_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPrice_5.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_5(2114254414);
  msg.set(BenchmarkPriceType_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPriceType_5.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_5("STRING_1803052511");
  msg.set(BenchmarkSecurityID_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityID_5.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_5("STRING_643152599");
  msg.set(BenchmarkSecurityIDSource_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityIDSource_5.getString());
  FIX::Spread Spread_5;
  Spread_5.setString("9835345");
  msg.set(Spread_5);
  SpreadOrBenchmarkCurveData_5.insert(Spread_5.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_5);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    FIX::StipulationType StipulationType_9("STRING_PRICEFREQ");
    noStipulations_0_0.set(StipulationType_9);
    Stipulations_NoStipulations_9.insert(StipulationType_9.getString());
    FIX::StipulationValue StipulationValue_9("STRING_1145992528");
    noStipulations_0_0.set(StipulationValue_9);
    Stipulations_NoStipulations_9.insert(StipulationValue_9.getString());
    all_values.push_back(Stipulations_NoStipulations_9);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    FIX::StipulationType StipulationType_10("STRING_PPL");
    noStipulations_0_1.set(StipulationType_10);
    Stipulations_NoStipulations_10.insert(StipulationType_10.getString());
    FIX::StipulationValue StipulationValue_10("STRING_770057660");
    noStipulations_0_1.set(StipulationValue_10);
    Stipulations_NoStipulations_10.insert(StipulationValue_10.getString());
    all_values.push_back(Stipulations_NoStipulations_10);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_7("STRING_1400797941");
    noTrades_0_0.set(SecondaryTradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(SecondaryTradeReportID_7.getString());
    FIX::TradeReportID TradeReportID_7("STRING_999041309");
    noTrades_0_0.set(TradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(TradeReportID_7.getString());
    all_values.push_back(TrdCollGrp_NoTrades_7);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_8;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_8("STRING_166127723");
    noTrades_0_1.set(SecondaryTradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(SecondaryTradeReportID_8.getString());
    FIX::TradeReportID TradeReportID_8("STRING_1495906571");
    noTrades_0_1.set(TradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(TradeReportID_8.getString());
    all_values.push_back(TrdCollGrp_NoTrades_8);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_9("STRING_1435493122");
    noTrades_0_2.set(SecondaryTradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(SecondaryTradeReportID_9.getString());
    FIX::TradeReportID TradeReportID_9("STRING_1589716892");
    noTrades_0_2.set(TradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(TradeReportID_9.getString());
    all_values.push_back(TrdCollGrp_NoTrades_9);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_4("MULTIPLESTRINGVALUE_ADD");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskOrderHandlingInst_4.getString());
    FIX::DeskType DeskType_4("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskType_4.getString());
    FIX::DeskTypeSource DeskTypeSource_4(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskTypeSource_4.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_4(FIX::UTCTIMESTAMP(12, 40, 53, 20, 3, 2015));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestamp_4.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_4("STRING_1237250714");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampOrigin_4.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_4(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampType_4.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_5("MULTIPLESTRINGVALUE_IO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskOrderHandlingInst_5.getString());
    FIX::DeskType DeskType_5("STRING_AR");
    noTrdRegTimestamps_0_1.set(DeskType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskType_5.getString());
    FIX::DeskTypeSource DeskTypeSource_5(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskTypeSource_5.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_5(FIX::UTCTIMESTAMP(15, 22, 38, 24, 3, 2011));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestamp_5.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_5("STRING_731670312");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampOrigin_5.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_5(1);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampType_5.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_5);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_15;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_15("DATA_1730711622");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuer_15.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_15(1910406924);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuerLen_15.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_15("DATA_992589660");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDesc_15.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_15(1018721096);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDescLen_15.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("13526401");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_15);
    UnderlyingInstrument_15.insert(UnderlyingAdjustedQuantity_15.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("44.040000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_15);
    UnderlyingInstrument_15.insert(UnderlyingAllocationPercent_15.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("95.280000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingAttachmentPoint_15.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_15("STRING_895141126");
    noUnderlyings_0_0.set(UnderlyingCFICode_15);
    UnderlyingInstrument_15.insert(UnderlyingCFICode_15.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_15("STRING_1122215502");
    noUnderlyings_0_0.set(UnderlyingCPProgram_15);
    UnderlyingInstrument_15.insert(UnderlyingCPProgram_15.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_15("STRING_1202766045");
    noUnderlyings_0_0.set(UnderlyingCPRegType_15);
    UnderlyingInstrument_15.insert(UnderlyingCPRegType_15.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("5673705");
    noUnderlyings_0_0.set(UnderlyingCapValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCapValue_15.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("12094278");
    noUnderlyings_0_0.set(UnderlyingCashAmount_15);
    UnderlyingInstrument_15.insert(UnderlyingCashAmount_15.getString());
    FIX::UnderlyingCashType UnderlyingCashType_15("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_15);
    UnderlyingInstrument_15.insert(UnderlyingCashType_15.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("20806479");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplier_15.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_15(1669950252);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplierUnit_15.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_15("COUNTRY_1858286991");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingCountryOfIssue_15.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_15("LOCALMKTDATE_1170415016");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponPaymentDate_15.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("93.880000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponRate_15.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_15("STRING_1603765957");
    noUnderlyings_0_0.set(UnderlyingCreditRating_15);
    UnderlyingInstrument_15.insert(UnderlyingCreditRating_15.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_15("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrency_15.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("10048137");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrentValue_15.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("1.600000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingDetachmentPoint_15.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("14140837");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingDirtyPrice_15.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("9231434");
    noUnderlyings_0_0.set(UnderlyingEndPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingEndPrice_15.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("11196428");
    noUnderlyings_0_0.set(UnderlyingEndValue_15);
    UnderlyingInstrument_15.insert(UnderlyingEndValue_15.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_15(971917096);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_15);
    UnderlyingInstrument_15.insert(UnderlyingExerciseStyle_15.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("11665122");
    noUnderlyings_0_0.set(UnderlyingFXRate_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRate_15.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_15('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRateCalc_15.getString());
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("5687126");
    noUnderlyings_0_0.set(UnderlyingFactor_15);
    UnderlyingInstrument_15.insert(UnderlyingFactor_15.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_15(663195321);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_15);
    UnderlyingInstrument_15.insert(UnderlyingFlowScheduleType_15.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_15("STRING_1434541099");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_15);
    UnderlyingInstrument_15.insert(UnderlyingInstrRegistry_15.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_15("LOCALMKTDATE_331635926");
    noUnderlyings_0_0.set(UnderlyingIssueDate_15);
    UnderlyingInstrument_15.insert(UnderlyingIssueDate_15.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_15("STRING_1655784981");
    noUnderlyings_0_0.set(UnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(UnderlyingIssuer_15.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_15("STRING_305778547");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingLocaleOfIssue_15.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_15("LOCALMKTDATE_1684276095");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityDate_15.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_15("MONTHYEAR_1284075737");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityMonthYear_15.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_15("TZTIMEONLY_684208076");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityTime_15.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("35.740000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_15('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_15);
    UnderlyingInstrument_15.insert(UnderlyingOptAttribute_15.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("41.210000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingOriginalNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_15("STRING_999304088");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasure_15.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("14682354");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasureQty_15.getString());
    FIX::UnderlyingProduct UnderlyingProduct_15(1887361091);
    noUnderlyings_0_0.set(UnderlyingProduct_15);
    UnderlyingInstrument_15.insert(UnderlyingProduct_15.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_15(932468391);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_15);
    UnderlyingInstrument_15.insert(UnderlyingPutOrCall_15.getString());
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("9907020");
    noUnderlyings_0_0.set(UnderlyingPx_15);
    UnderlyingInstrument_15.insert(UnderlyingPx_15.getString());
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("15981644");
    noUnderlyings_0_0.set(UnderlyingQty_15);
    UnderlyingInstrument_15.insert(UnderlyingQty_15.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_15("LOCALMKTDATE_2102883407");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_15);
    UnderlyingInstrument_15.insert(UnderlyingRedemptionDate_15.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_15("STRING_122187758");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingRepoCollateralSecurityType_15.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("67.430000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseRate_15.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_15(798046048);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseTerm_15.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_15("STRING_976947049");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_15);
    UnderlyingInstrument_15.insert(UnderlyingRestructuringType_15.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_15("STRING_2059260529");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityDesc_15.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_15("EXCHANGE_1956076209");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityExchange_15.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_15("STRING_243547155");
    noUnderlyings_0_0.set(UnderlyingSecurityID_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityID_15.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_15("STRING_834920318");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityIDSource_15.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_15("STRING_928235374");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecuritySubType_15.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_15("STRING_1215464252");
    noUnderlyings_0_0.set(UnderlyingSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityType_15.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_15("STRING_2001432550");
    noUnderlyings_0_0.set(UnderlyingSeniority_15);
    UnderlyingInstrument_15.insert(UnderlyingSeniority_15.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_15("STRING_632064851");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlMethod_15.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_15(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlementType_15.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("5171442");
    noUnderlyings_0_0.set(UnderlyingStartValue_15);
    UnderlyingInstrument_15.insert(UnderlyingStartValue_15.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_15("STRING_2066605951");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingStateOrProvinceOfIssue_15.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_15("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikeCurrency_15.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("2249008");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikePrice_15.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_15("STRING_1652605276");
    noUnderlyings_0_0.set(UnderlyingSymbol_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbol_15.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_15("STRING_1309521293");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbolSfx_15.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_15("STRING_909108926");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingTimeUnit_15.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_15("STRING_2084538850");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasure_15.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("15683288");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasureQty_15.getString());
    all_values.push_back(UnderlyingInstrument_15);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_35("STRING_936359290");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltID_35.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_35("STRING_889080650");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_35);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_35.insert(UnderlyingSecurityAltIDSource_35.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_36("STRING_388476842");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltID_36.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_36("STRING_1868827681");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltIDSource_36.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_37("STRING_1879782668");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltID_37.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_37("STRING_1986641276");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltIDSource_37.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      FIX::UnderlyingStipType UnderlyingStipType_22("STRING_2001970426");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipType_22.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_22("STRING_893604371");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipValue_22.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_23;
      FIX::UnderlyingStipType UnderlyingStipType_23("STRING_474789841");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipType_23.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_23("STRING_831433827");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipValue_23.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      FIX::UnderlyingStipType UnderlyingStipType_24("STRING_805381253");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipType_24.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_24("STRING_283382402");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipValue_24.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_31("STRING_1640301571");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyID_31.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_31('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyIDSource_31.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_31(142961587);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyRole_31.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_60("STRING_1843682628");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubID_60.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_60(1927138489);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubIDType_60.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_32("STRING_2011394696");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyID_32.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_32('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyIDSource_32.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_32(1895467669);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyRole_32.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_61("STRING_1987705781");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubID_61.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_61(1400589297);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubIDType_61.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_62("STRING_1198877897");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubID_62.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_62(749331060);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubIDType_62.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_63("STRING_1337644499");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubID_63.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_63(619723134);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubIDType_63.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
