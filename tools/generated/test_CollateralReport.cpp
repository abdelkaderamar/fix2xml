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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralReport msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralReport_0;
  FIX::Account Account_6("STRING_196248190");
  msg.set(Account_6);
  CollateralReport_0.insert(Account_6.getString());
  FIX::AccountType AccountType_4(2);
  msg.set(AccountType_4);
  CollateralReport_0.insert(AccountType_4.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("20888608");
  msg.set(AccruedInterestAmt_5);
  CollateralReport_0.insert(AccruedInterestAmt_5.getString());
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("5586958");
  msg.set(CashOutstanding_2);
  CollateralReport_0.insert(CashOutstanding_2.getString());
  FIX::ClOrdID ClOrdID_8("STRING_1056876512");
  msg.set(ClOrdID_8);
  CollateralReport_0.insert(ClOrdID_8.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_9("LOCALMKTDATE_1206632959");
  msg.set(ClearingBusinessDate_9);
  CollateralReport_0.insert(ClearingBusinessDate_9.getString());
  FIX::CollApplType CollApplType_0(0);
  msg.set(CollApplType_0);
  CollateralReport_0.insert(CollApplType_0.getString());
  FIX::CollInquiryID CollInquiryID_2("STRING_1965100294");
  msg.set(CollInquiryID_2);
  CollateralReport_0.insert(CollInquiryID_2.getString());
  FIX::CollRptID CollRptID_0("STRING_1254757279");
  msg.set(CollRptID_0);
  CollateralReport_0.insert(CollRptID_0.getString());
  FIX::CollStatus CollStatus_0(1);
  msg.set(CollStatus_0);
  CollateralReport_0.insert(CollStatus_0.getString());
  FIX::Currency Currency_9("CHF");
  msg.set(Currency_9);
  CollateralReport_0.insert(Currency_9.getString());
  FIX::EncodedText EncodedText_16("DATA_1997229062");
  msg.set(EncodedText_16);
  CollateralReport_0.insert(EncodedText_16.getString());
  FIX::EncodedTextLen EncodedTextLen_16(491426893);
  msg.set(EncodedTextLen_16);
  CollateralReport_0.insert(EncodedTextLen_16.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("422444");
  msg.set(EndAccruedInterestAmt_5);
  CollateralReport_0.insert(EndAccruedInterestAmt_5.getString());
  FIX::EndCash EndCash_5;
  EndCash_5.setString("6307006");
  msg.set(EndCash_5);
  CollateralReport_0.insert(EndCash_5.getString());
  FIX::FinancialStatus FinancialStatus_0("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_0);
  CollateralReport_0.insert(FinancialStatus_0.getString());
  FIX::LastRptRequested LastRptRequested_1(false);
  msg.set(LastRptRequested_1);
  CollateralReport_0.insert(LastRptRequested_1.getString());
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("15206499");
  msg.set(MarginExcess_2);
  CollateralReport_0.insert(MarginExcess_2.getString());
  FIX::OrderID OrderID_8("STRING_1756471858");
  msg.set(OrderID_8);
  CollateralReport_0.insert(OrderID_8.getString());
  FIX::Price Price_4;
  Price_4.setString("19403535");
  msg.set(Price_4);
  CollateralReport_0.insert(Price_4.getString());
  FIX::PriceType PriceType_6(11);
  msg.set(PriceType_6);
  CollateralReport_0.insert(PriceType_6.getString());
  FIX::QtyType QtyType_7(1);
  msg.set(QtyType_7);
  CollateralReport_0.insert(QtyType_7.getString());
  FIX::Quantity Quantity_8;
  Quantity_8.setString("6227813");
  msg.set(Quantity_8);
  CollateralReport_0.insert(Quantity_8.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_8("STRING_855166436");
  msg.set(SecondaryClOrdID_8);
  CollateralReport_0.insert(SecondaryClOrdID_8.getString());
  FIX::SecondaryOrderID SecondaryOrderID_8("STRING_557478000");
  msg.set(SecondaryOrderID_8);
  CollateralReport_0.insert(SecondaryOrderID_8.getString());
  FIX::SettlDate SettlDate_9("LOCALMKTDATE_1055276956");
  msg.set(SettlDate_9);
  CollateralReport_0.insert(SettlDate_9.getString());
  FIX::SettlSessID SettlSessID_5("STRING_ITD");
  msg.set(SettlSessID_5);
  CollateralReport_0.insert(SettlSessID_5.getString());
  FIX::SettlSessSubID SettlSessSubID_4("STRING_1638244715");
  msg.set(SettlSessSubID_4);
  CollateralReport_0.insert(SettlSessSubID_4.getString());
  FIX::Side Side_8('2');
  msg.set(Side_8);
  CollateralReport_0.insert(Side_8.getString());
  FIX::StartCash StartCash_5;
  StartCash_5.setString("15740291");
  msg.set(StartCash_5);
  CollateralReport_0.insert(StartCash_5.getString());
  FIX::Text Text_16("STRING_1834492906");
  msg.set(Text_16);
  CollateralReport_0.insert(Text_16.getString());
  FIX::TotNumReports TotNumReports_1(687129454);
  msg.set(TotNumReports_1);
  CollateralReport_0.insert(TotNumReports_1.getString());
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("15154063");
  msg.set(TotalNetValue_2);
  CollateralReport_0.insert(TotalNetValue_2.getString());
  FIX::TradingSessionID TradingSessionID_10("STRING_2");
  msg.set(TradingSessionID_10);
  CollateralReport_0.insert(TradingSessionID_10.getString());
  FIX::TradingSessionSubID TradingSessionSubID_10("STRING_4");
  msg.set(TradingSessionSubID_10);
  CollateralReport_0.insert(TradingSessionSubID_10.getString());
  FIX::TransactTime TransactTime_7(FIX::UTCTIMESTAMP(10, 33, 7, 25, 62002));
  msg.set(TransactTime_7);
  CollateralReport_0.insert(TransactTime_7.getString());
  all_values.push_back(CollateralReport_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    FIX::ExecID ExecID_12("STRING_28761478");
    noExecs_0_0.set(ExecID_12);
    ExecCollGrp_NoExecs_4.insert(ExecID_12.getString());
    all_values.push_back(ExecCollGrp_NoExecs_4);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    FIX::ExecID ExecID_13("STRING_579167365");
    noExecs_0_1.set(ExecID_13);
    ExecCollGrp_NoExecs_5.insert(ExecID_13.getString());
    all_values.push_back(ExecCollGrp_NoExecs_5);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    FIX::ExecID ExecID_14("STRING_668663440");
    noExecs_0_2.set(ExecID_14);
    ExecCollGrp_NoExecs_6.insert(ExecID_14.getString());
    all_values.push_back(ExecCollGrp_NoExecs_6);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  FIX::AgreementCurrency AgreementCurrency_6("CAN");
  msg.set(AgreementCurrency_6);
  FinancingDetails_6.insert(AgreementCurrency_6.getString());
  FIX::AgreementDate AgreementDate_6("LOCALMKTDATE_41829701");
  msg.set(AgreementDate_6);
  FinancingDetails_6.insert(AgreementDate_6.getString());
  FIX::AgreementDesc AgreementDesc_6("STRING_1370119965");
  msg.set(AgreementDesc_6);
  FinancingDetails_6.insert(AgreementDesc_6.getString());
  FIX::AgreementID AgreementID_6("STRING_1065169021");
  msg.set(AgreementID_6);
  FinancingDetails_6.insert(AgreementID_6.getString());
  FIX::DeliveryType DeliveryType_6(3);
  msg.set(DeliveryType_6);
  FinancingDetails_6.insert(DeliveryType_6.getString());
  FIX::EndDate EndDate_6("LOCALMKTDATE_85822479");
  msg.set(EndDate_6);
  FinancingDetails_6.insert(EndDate_6.getString());
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("3.660000");
  msg.set(MarginRatio_6);
  FinancingDetails_6.insert(MarginRatio_6.getString());
  FIX::StartDate StartDate_6("LOCALMKTDATE_847777972");
  msg.set(StartDate_6);
  FinancingDetails_6.insert(StartDate_6.getString());
  FIX::TerminationType TerminationType_6(4);
  msg.set(TerminationType_6);
  FinancingDetails_6.insert(TerminationType_6.getString());
  all_values.push_back(FinancingDetails_6);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_15;
    FIX::EncodedLegIssuer EncodedLegIssuer_15("DATA_778524552");
    noLegs_0_0.set(EncodedLegIssuer_15);
    InstrumentLeg_15.insert(EncodedLegIssuer_15.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_15(134061546);
    noLegs_0_0.set(EncodedLegIssuerLen_15);
    InstrumentLeg_15.insert(EncodedLegIssuerLen_15.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_15("DATA_921400491");
    noLegs_0_0.set(EncodedLegSecurityDesc_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDesc_15.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_15(205070063);
    noLegs_0_0.set(EncodedLegSecurityDescLen_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDescLen_15.getString());
    FIX::LegCFICode LegCFICode_15("STRING_1968554452");
    noLegs_0_0.set(LegCFICode_15);
    InstrumentLeg_15.insert(LegCFICode_15.getString());
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("16085299");
    noLegs_0_0.set(LegContractMultiplier_15);
    InstrumentLeg_15.insert(LegContractMultiplier_15.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_15(1720476420);
    noLegs_0_0.set(LegContractMultiplierUnit_15);
    InstrumentLeg_15.insert(LegContractMultiplierUnit_15.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_15("MONTHYEAR_66775894");
    noLegs_0_0.set(LegContractSettlMonth_15);
    InstrumentLeg_15.insert(LegContractSettlMonth_15.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_15("COUNTRY_1205052264");
    noLegs_0_0.set(LegCountryOfIssue_15);
    InstrumentLeg_15.insert(LegCountryOfIssue_15.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_15("LOCALMKTDATE_147548440");
    noLegs_0_0.set(LegCouponPaymentDate_15);
    InstrumentLeg_15.insert(LegCouponPaymentDate_15.getString());
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("54.320000");
    noLegs_0_0.set(LegCouponRate_15);
    InstrumentLeg_15.insert(LegCouponRate_15.getString());
    FIX::LegCreditRating LegCreditRating_15("STRING_619191229");
    noLegs_0_0.set(LegCreditRating_15);
    InstrumentLeg_15.insert(LegCreditRating_15.getString());
    FIX::LegCurrency LegCurrency_15("EUR");
    noLegs_0_0.set(LegCurrency_15);
    InstrumentLeg_15.insert(LegCurrency_15.getString());
    FIX::LegDatedDate LegDatedDate_15("LOCALMKTDATE_156525814");
    noLegs_0_0.set(LegDatedDate_15);
    InstrumentLeg_15.insert(LegDatedDate_15.getString());
    FIX::LegExerciseStyle LegExerciseStyle_15(366300678);
    noLegs_0_0.set(LegExerciseStyle_15);
    InstrumentLeg_15.insert(LegExerciseStyle_15.getString());
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("16508555");
    noLegs_0_0.set(LegFactor_15);
    InstrumentLeg_15.insert(LegFactor_15.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_15(185287292);
    noLegs_0_0.set(LegFlowScheduleType_15);
    InstrumentLeg_15.insert(LegFlowScheduleType_15.getString());
    FIX::LegInstrRegistry LegInstrRegistry_15("STRING_945468044");
    noLegs_0_0.set(LegInstrRegistry_15);
    InstrumentLeg_15.insert(LegInstrRegistry_15.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_15("LOCALMKTDATE_172035320");
    noLegs_0_0.set(LegInterestAccrualDate_15);
    InstrumentLeg_15.insert(LegInterestAccrualDate_15.getString());
    FIX::LegIssueDate LegIssueDate_15("LOCALMKTDATE_1946419047");
    noLegs_0_0.set(LegIssueDate_15);
    InstrumentLeg_15.insert(LegIssueDate_15.getString());
    FIX::LegIssuer LegIssuer_15("STRING_70283561");
    noLegs_0_0.set(LegIssuer_15);
    InstrumentLeg_15.insert(LegIssuer_15.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_15("STRING_213865021");
    noLegs_0_0.set(LegLocaleOfIssue_15);
    InstrumentLeg_15.insert(LegLocaleOfIssue_15.getString());
    FIX::LegMaturityDate LegMaturityDate_15("LOCALMKTDATE_1169055365");
    noLegs_0_0.set(LegMaturityDate_15);
    InstrumentLeg_15.insert(LegMaturityDate_15.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_15("MONTHYEAR_1135452582");
    noLegs_0_0.set(LegMaturityMonthYear_15);
    InstrumentLeg_15.insert(LegMaturityMonthYear_15.getString());
    FIX::LegMaturityTime LegMaturityTime_15("TZTIMEONLY_206476556");
    noLegs_0_0.set(LegMaturityTime_15);
    InstrumentLeg_15.insert(LegMaturityTime_15.getString());
    FIX::LegOptAttribute LegOptAttribute_15('1');
    noLegs_0_0.set(LegOptAttribute_15);
    InstrumentLeg_15.insert(LegOptAttribute_15.getString());
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("6759193");
    noLegs_0_0.set(LegOptionRatio_15);
    InstrumentLeg_15.insert(LegOptionRatio_15.getString());
    FIX::LegPool LegPool_15("STRING_1054254528");
    noLegs_0_0.set(LegPool_15);
    InstrumentLeg_15.insert(LegPool_15.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_15("STRING_1898178323");
    noLegs_0_0.set(LegPriceUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasure_15.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("12716629");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasureQty_15.getString());
    FIX::LegProduct LegProduct_15(1832779080);
    noLegs_0_0.set(LegProduct_15);
    InstrumentLeg_15.insert(LegProduct_15.getString());
    FIX::LegPutOrCall LegPutOrCall_15(2032239869);
    noLegs_0_0.set(LegPutOrCall_15);
    InstrumentLeg_15.insert(LegPutOrCall_15.getString());
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("455798");
    noLegs_0_0.set(LegRatioQty_15);
    InstrumentLeg_15.insert(LegRatioQty_15.getString());
    FIX::LegRedemptionDate LegRedemptionDate_15("LOCALMKTDATE_2037849143");
    noLegs_0_0.set(LegRedemptionDate_15);
    InstrumentLeg_15.insert(LegRedemptionDate_15.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_15("STRING_1853310674");
    noLegs_0_0.set(LegRepoCollateralSecurityType_15);
    InstrumentLeg_15.insert(LegRepoCollateralSecurityType_15.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("97.640000");
    noLegs_0_0.set(LegRepurchaseRate_15);
    InstrumentLeg_15.insert(LegRepurchaseRate_15.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_15(1610841915);
    noLegs_0_0.set(LegRepurchaseTerm_15);
    InstrumentLeg_15.insert(LegRepurchaseTerm_15.getString());
    FIX::LegSecurityDesc LegSecurityDesc_15("STRING_1920086568");
    noLegs_0_0.set(LegSecurityDesc_15);
    InstrumentLeg_15.insert(LegSecurityDesc_15.getString());
    FIX::LegSecurityExchange LegSecurityExchange_15("EXCHANGE_711678380");
    noLegs_0_0.set(LegSecurityExchange_15);
    InstrumentLeg_15.insert(LegSecurityExchange_15.getString());
    FIX::LegSecurityID LegSecurityID_15("STRING_1758390356");
    noLegs_0_0.set(LegSecurityID_15);
    InstrumentLeg_15.insert(LegSecurityID_15.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_15("STRING_1197278352");
    noLegs_0_0.set(LegSecurityIDSource_15);
    InstrumentLeg_15.insert(LegSecurityIDSource_15.getString());
    FIX::LegSecuritySubType LegSecuritySubType_15("STRING_1330869609");
    noLegs_0_0.set(LegSecuritySubType_15);
    InstrumentLeg_15.insert(LegSecuritySubType_15.getString());
    FIX::LegSecurityType LegSecurityType_15("STRING_1587768096");
    noLegs_0_0.set(LegSecurityType_15);
    InstrumentLeg_15.insert(LegSecurityType_15.getString());
    FIX::LegSide LegSide_15('6');
    noLegs_0_0.set(LegSide_15);
    InstrumentLeg_15.insert(LegSide_15.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_15("STRING_1487395423");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_15);
    InstrumentLeg_15.insert(LegStateOrProvinceOfIssue_15.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_15("CHF");
    noLegs_0_0.set(LegStrikeCurrency_15);
    InstrumentLeg_15.insert(LegStrikeCurrency_15.getString());
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("16726827");
    noLegs_0_0.set(LegStrikePrice_15);
    InstrumentLeg_15.insert(LegStrikePrice_15.getString());
    FIX::LegSymbol LegSymbol_15("STRING_752053170");
    noLegs_0_0.set(LegSymbol_15);
    InstrumentLeg_15.insert(LegSymbol_15.getString());
    FIX::LegSymbolSfx LegSymbolSfx_15("STRING_338094677");
    noLegs_0_0.set(LegSymbolSfx_15);
    InstrumentLeg_15.insert(LegSymbolSfx_15.getString());
    FIX::LegTimeUnit LegTimeUnit_15("STRING_1471618115");
    noLegs_0_0.set(LegTimeUnit_15);
    InstrumentLeg_15.insert(LegTimeUnit_15.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_15("STRING_822336731");
    noLegs_0_0.set(LegUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegUnitOfMeasure_15.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("5519596");
    noLegs_0_0.set(LegUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegUnitOfMeasureQty_15.getString());
    all_values.push_back(InstrumentLeg_15);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      FIX::LegSecurityAltID LegSecurityAltID_24("STRING_1957789313");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltID_24.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_24("STRING_758436254");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_24);
      LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltIDSource_24.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      FIX::LegSecurityAltID LegSecurityAltID_25("STRING_1748067676");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltID_25.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_25("STRING_486224966");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltIDSource_25.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      FIX::LegSecurityAltID LegSecurityAltID_26("STRING_1812690783");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltID_26.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_26("STRING_1498762351");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltIDSource_26.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_16;
    FIX::EncodedLegIssuer EncodedLegIssuer_16("DATA_1757887941");
    noLegs_0_1.set(EncodedLegIssuer_16);
    InstrumentLeg_16.insert(EncodedLegIssuer_16.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_16(1497986215);
    noLegs_0_1.set(EncodedLegIssuerLen_16);
    InstrumentLeg_16.insert(EncodedLegIssuerLen_16.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_16("DATA_1383518572");
    noLegs_0_1.set(EncodedLegSecurityDesc_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDesc_16.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_16(1803467759);
    noLegs_0_1.set(EncodedLegSecurityDescLen_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDescLen_16.getString());
    FIX::LegCFICode LegCFICode_16("STRING_1388351711");
    noLegs_0_1.set(LegCFICode_16);
    InstrumentLeg_16.insert(LegCFICode_16.getString());
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("10893455");
    noLegs_0_1.set(LegContractMultiplier_16);
    InstrumentLeg_16.insert(LegContractMultiplier_16.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_16(1310093875);
    noLegs_0_1.set(LegContractMultiplierUnit_16);
    InstrumentLeg_16.insert(LegContractMultiplierUnit_16.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_16("MONTHYEAR_851709978");
    noLegs_0_1.set(LegContractSettlMonth_16);
    InstrumentLeg_16.insert(LegContractSettlMonth_16.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_16("COUNTRY_861948518");
    noLegs_0_1.set(LegCountryOfIssue_16);
    InstrumentLeg_16.insert(LegCountryOfIssue_16.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_16("LOCALMKTDATE_2021772255");
    noLegs_0_1.set(LegCouponPaymentDate_16);
    InstrumentLeg_16.insert(LegCouponPaymentDate_16.getString());
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("66.860000");
    noLegs_0_1.set(LegCouponRate_16);
    InstrumentLeg_16.insert(LegCouponRate_16.getString());
    FIX::LegCreditRating LegCreditRating_16("STRING_2059226870");
    noLegs_0_1.set(LegCreditRating_16);
    InstrumentLeg_16.insert(LegCreditRating_16.getString());
    FIX::LegCurrency LegCurrency_16("USD");
    noLegs_0_1.set(LegCurrency_16);
    InstrumentLeg_16.insert(LegCurrency_16.getString());
    FIX::LegDatedDate LegDatedDate_16("LOCALMKTDATE_574430699");
    noLegs_0_1.set(LegDatedDate_16);
    InstrumentLeg_16.insert(LegDatedDate_16.getString());
    FIX::LegExerciseStyle LegExerciseStyle_16(545069991);
    noLegs_0_1.set(LegExerciseStyle_16);
    InstrumentLeg_16.insert(LegExerciseStyle_16.getString());
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("18569699");
    noLegs_0_1.set(LegFactor_16);
    InstrumentLeg_16.insert(LegFactor_16.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_16(740490056);
    noLegs_0_1.set(LegFlowScheduleType_16);
    InstrumentLeg_16.insert(LegFlowScheduleType_16.getString());
    FIX::LegInstrRegistry LegInstrRegistry_16("STRING_70269059");
    noLegs_0_1.set(LegInstrRegistry_16);
    InstrumentLeg_16.insert(LegInstrRegistry_16.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_16("LOCALMKTDATE_461539431");
    noLegs_0_1.set(LegInterestAccrualDate_16);
    InstrumentLeg_16.insert(LegInterestAccrualDate_16.getString());
    FIX::LegIssueDate LegIssueDate_16("LOCALMKTDATE_1078584733");
    noLegs_0_1.set(LegIssueDate_16);
    InstrumentLeg_16.insert(LegIssueDate_16.getString());
    FIX::LegIssuer LegIssuer_16("STRING_1541887174");
    noLegs_0_1.set(LegIssuer_16);
    InstrumentLeg_16.insert(LegIssuer_16.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_16("STRING_1283876163");
    noLegs_0_1.set(LegLocaleOfIssue_16);
    InstrumentLeg_16.insert(LegLocaleOfIssue_16.getString());
    FIX::LegMaturityDate LegMaturityDate_16("LOCALMKTDATE_1630544431");
    noLegs_0_1.set(LegMaturityDate_16);
    InstrumentLeg_16.insert(LegMaturityDate_16.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_16("MONTHYEAR_2035077006");
    noLegs_0_1.set(LegMaturityMonthYear_16);
    InstrumentLeg_16.insert(LegMaturityMonthYear_16.getString());
    FIX::LegMaturityTime LegMaturityTime_16("TZTIMEONLY_1094181828");
    noLegs_0_1.set(LegMaturityTime_16);
    InstrumentLeg_16.insert(LegMaturityTime_16.getString());
    FIX::LegOptAttribute LegOptAttribute_16('2');
    noLegs_0_1.set(LegOptAttribute_16);
    InstrumentLeg_16.insert(LegOptAttribute_16.getString());
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("16356610");
    noLegs_0_1.set(LegOptionRatio_16);
    InstrumentLeg_16.insert(LegOptionRatio_16.getString());
    FIX::LegPool LegPool_16("STRING_1580406794");
    noLegs_0_1.set(LegPool_16);
    InstrumentLeg_16.insert(LegPool_16.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_16("STRING_2054187821");
    noLegs_0_1.set(LegPriceUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasure_16.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("9869397");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasureQty_16.getString());
    FIX::LegProduct LegProduct_16(1190811087);
    noLegs_0_1.set(LegProduct_16);
    InstrumentLeg_16.insert(LegProduct_16.getString());
    FIX::LegPutOrCall LegPutOrCall_16(1404690388);
    noLegs_0_1.set(LegPutOrCall_16);
    InstrumentLeg_16.insert(LegPutOrCall_16.getString());
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("2229746");
    noLegs_0_1.set(LegRatioQty_16);
    InstrumentLeg_16.insert(LegRatioQty_16.getString());
    FIX::LegRedemptionDate LegRedemptionDate_16("LOCALMKTDATE_846795199");
    noLegs_0_1.set(LegRedemptionDate_16);
    InstrumentLeg_16.insert(LegRedemptionDate_16.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_16("STRING_645558451");
    noLegs_0_1.set(LegRepoCollateralSecurityType_16);
    InstrumentLeg_16.insert(LegRepoCollateralSecurityType_16.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("2.600000");
    noLegs_0_1.set(LegRepurchaseRate_16);
    InstrumentLeg_16.insert(LegRepurchaseRate_16.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_16(9405426);
    noLegs_0_1.set(LegRepurchaseTerm_16);
    InstrumentLeg_16.insert(LegRepurchaseTerm_16.getString());
    FIX::LegSecurityDesc LegSecurityDesc_16("STRING_1497268430");
    noLegs_0_1.set(LegSecurityDesc_16);
    InstrumentLeg_16.insert(LegSecurityDesc_16.getString());
    FIX::LegSecurityExchange LegSecurityExchange_16("EXCHANGE_26785130");
    noLegs_0_1.set(LegSecurityExchange_16);
    InstrumentLeg_16.insert(LegSecurityExchange_16.getString());
    FIX::LegSecurityID LegSecurityID_16("STRING_2031177682");
    noLegs_0_1.set(LegSecurityID_16);
    InstrumentLeg_16.insert(LegSecurityID_16.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_16("STRING_1959885116");
    noLegs_0_1.set(LegSecurityIDSource_16);
    InstrumentLeg_16.insert(LegSecurityIDSource_16.getString());
    FIX::LegSecuritySubType LegSecuritySubType_16("STRING_2086012001");
    noLegs_0_1.set(LegSecuritySubType_16);
    InstrumentLeg_16.insert(LegSecuritySubType_16.getString());
    FIX::LegSecurityType LegSecurityType_16("STRING_1088852250");
    noLegs_0_1.set(LegSecurityType_16);
    InstrumentLeg_16.insert(LegSecurityType_16.getString());
    FIX::LegSide LegSide_16('1');
    noLegs_0_1.set(LegSide_16);
    InstrumentLeg_16.insert(LegSide_16.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_16("STRING_512959052");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_16);
    InstrumentLeg_16.insert(LegStateOrProvinceOfIssue_16.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_16("JPY");
    noLegs_0_1.set(LegStrikeCurrency_16);
    InstrumentLeg_16.insert(LegStrikeCurrency_16.getString());
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("12534491");
    noLegs_0_1.set(LegStrikePrice_16);
    InstrumentLeg_16.insert(LegStrikePrice_16.getString());
    FIX::LegSymbol LegSymbol_16("STRING_1704191301");
    noLegs_0_1.set(LegSymbol_16);
    InstrumentLeg_16.insert(LegSymbol_16.getString());
    FIX::LegSymbolSfx LegSymbolSfx_16("STRING_2033811943");
    noLegs_0_1.set(LegSymbolSfx_16);
    InstrumentLeg_16.insert(LegSymbolSfx_16.getString());
    FIX::LegTimeUnit LegTimeUnit_16("STRING_184550194");
    noLegs_0_1.set(LegTimeUnit_16);
    InstrumentLeg_16.insert(LegTimeUnit_16.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_16("STRING_1098594827");
    noLegs_0_1.set(LegUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegUnitOfMeasure_16.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("11702044");
    noLegs_0_1.set(LegUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegUnitOfMeasureQty_16.getString());
    all_values.push_back(InstrumentLeg_16);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      FIX::LegSecurityAltID LegSecurityAltID_27("STRING_986188185");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltID_27.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_27("STRING_116902639");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltIDSource_27.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    FIX::EncodedLegIssuer EncodedLegIssuer_17("DATA_2056591664");
    noLegs_0_2.set(EncodedLegIssuer_17);
    InstrumentLeg_17.insert(EncodedLegIssuer_17.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_17(474365571);
    noLegs_0_2.set(EncodedLegIssuerLen_17);
    InstrumentLeg_17.insert(EncodedLegIssuerLen_17.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_17("DATA_1697309433");
    noLegs_0_2.set(EncodedLegSecurityDesc_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDesc_17.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_17(1963295837);
    noLegs_0_2.set(EncodedLegSecurityDescLen_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDescLen_17.getString());
    FIX::LegCFICode LegCFICode_17("STRING_1461305308");
    noLegs_0_2.set(LegCFICode_17);
    InstrumentLeg_17.insert(LegCFICode_17.getString());
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("7406368");
    noLegs_0_2.set(LegContractMultiplier_17);
    InstrumentLeg_17.insert(LegContractMultiplier_17.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_17(1220502577);
    noLegs_0_2.set(LegContractMultiplierUnit_17);
    InstrumentLeg_17.insert(LegContractMultiplierUnit_17.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_17("MONTHYEAR_1684279969");
    noLegs_0_2.set(LegContractSettlMonth_17);
    InstrumentLeg_17.insert(LegContractSettlMonth_17.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_17("COUNTRY_1587432072");
    noLegs_0_2.set(LegCountryOfIssue_17);
    InstrumentLeg_17.insert(LegCountryOfIssue_17.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_17("LOCALMKTDATE_1866061029");
    noLegs_0_2.set(LegCouponPaymentDate_17);
    InstrumentLeg_17.insert(LegCouponPaymentDate_17.getString());
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("65.810000");
    noLegs_0_2.set(LegCouponRate_17);
    InstrumentLeg_17.insert(LegCouponRate_17.getString());
    FIX::LegCreditRating LegCreditRating_17("STRING_1596837498");
    noLegs_0_2.set(LegCreditRating_17);
    InstrumentLeg_17.insert(LegCreditRating_17.getString());
    FIX::LegCurrency LegCurrency_17("JPY");
    noLegs_0_2.set(LegCurrency_17);
    InstrumentLeg_17.insert(LegCurrency_17.getString());
    FIX::LegDatedDate LegDatedDate_17("LOCALMKTDATE_1480531532");
    noLegs_0_2.set(LegDatedDate_17);
    InstrumentLeg_17.insert(LegDatedDate_17.getString());
    FIX::LegExerciseStyle LegExerciseStyle_17(1028247279);
    noLegs_0_2.set(LegExerciseStyle_17);
    InstrumentLeg_17.insert(LegExerciseStyle_17.getString());
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("8144300");
    noLegs_0_2.set(LegFactor_17);
    InstrumentLeg_17.insert(LegFactor_17.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_17(421900135);
    noLegs_0_2.set(LegFlowScheduleType_17);
    InstrumentLeg_17.insert(LegFlowScheduleType_17.getString());
    FIX::LegInstrRegistry LegInstrRegistry_17("STRING_743549882");
    noLegs_0_2.set(LegInstrRegistry_17);
    InstrumentLeg_17.insert(LegInstrRegistry_17.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_17("LOCALMKTDATE_1327389117");
    noLegs_0_2.set(LegInterestAccrualDate_17);
    InstrumentLeg_17.insert(LegInterestAccrualDate_17.getString());
    FIX::LegIssueDate LegIssueDate_17("LOCALMKTDATE_2055822377");
    noLegs_0_2.set(LegIssueDate_17);
    InstrumentLeg_17.insert(LegIssueDate_17.getString());
    FIX::LegIssuer LegIssuer_17("STRING_168338746");
    noLegs_0_2.set(LegIssuer_17);
    InstrumentLeg_17.insert(LegIssuer_17.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_17("STRING_433354578");
    noLegs_0_2.set(LegLocaleOfIssue_17);
    InstrumentLeg_17.insert(LegLocaleOfIssue_17.getString());
    FIX::LegMaturityDate LegMaturityDate_17("LOCALMKTDATE_1612530030");
    noLegs_0_2.set(LegMaturityDate_17);
    InstrumentLeg_17.insert(LegMaturityDate_17.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_17("MONTHYEAR_54667042");
    noLegs_0_2.set(LegMaturityMonthYear_17);
    InstrumentLeg_17.insert(LegMaturityMonthYear_17.getString());
    FIX::LegMaturityTime LegMaturityTime_17("TZTIMEONLY_617904773");
    noLegs_0_2.set(LegMaturityTime_17);
    InstrumentLeg_17.insert(LegMaturityTime_17.getString());
    FIX::LegOptAttribute LegOptAttribute_17('5');
    noLegs_0_2.set(LegOptAttribute_17);
    InstrumentLeg_17.insert(LegOptAttribute_17.getString());
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("12248715");
    noLegs_0_2.set(LegOptionRatio_17);
    InstrumentLeg_17.insert(LegOptionRatio_17.getString());
    FIX::LegPool LegPool_17("STRING_285515751");
    noLegs_0_2.set(LegPool_17);
    InstrumentLeg_17.insert(LegPool_17.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_17("STRING_1549829394");
    noLegs_0_2.set(LegPriceUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasure_17.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("13417741");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasureQty_17.getString());
    FIX::LegProduct LegProduct_17(194623767);
    noLegs_0_2.set(LegProduct_17);
    InstrumentLeg_17.insert(LegProduct_17.getString());
    FIX::LegPutOrCall LegPutOrCall_17(2024194965);
    noLegs_0_2.set(LegPutOrCall_17);
    InstrumentLeg_17.insert(LegPutOrCall_17.getString());
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("8915999");
    noLegs_0_2.set(LegRatioQty_17);
    InstrumentLeg_17.insert(LegRatioQty_17.getString());
    FIX::LegRedemptionDate LegRedemptionDate_17("LOCALMKTDATE_10435956");
    noLegs_0_2.set(LegRedemptionDate_17);
    InstrumentLeg_17.insert(LegRedemptionDate_17.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_17("STRING_1338016625");
    noLegs_0_2.set(LegRepoCollateralSecurityType_17);
    InstrumentLeg_17.insert(LegRepoCollateralSecurityType_17.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("67.980000");
    noLegs_0_2.set(LegRepurchaseRate_17);
    InstrumentLeg_17.insert(LegRepurchaseRate_17.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_17(1230938533);
    noLegs_0_2.set(LegRepurchaseTerm_17);
    InstrumentLeg_17.insert(LegRepurchaseTerm_17.getString());
    FIX::LegSecurityDesc LegSecurityDesc_17("STRING_874812946");
    noLegs_0_2.set(LegSecurityDesc_17);
    InstrumentLeg_17.insert(LegSecurityDesc_17.getString());
    FIX::LegSecurityExchange LegSecurityExchange_17("EXCHANGE_1072185222");
    noLegs_0_2.set(LegSecurityExchange_17);
    InstrumentLeg_17.insert(LegSecurityExchange_17.getString());
    FIX::LegSecurityID LegSecurityID_17("STRING_949515914");
    noLegs_0_2.set(LegSecurityID_17);
    InstrumentLeg_17.insert(LegSecurityID_17.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_17("STRING_1723929528");
    noLegs_0_2.set(LegSecurityIDSource_17);
    InstrumentLeg_17.insert(LegSecurityIDSource_17.getString());
    FIX::LegSecuritySubType LegSecuritySubType_17("STRING_521539072");
    noLegs_0_2.set(LegSecuritySubType_17);
    InstrumentLeg_17.insert(LegSecuritySubType_17.getString());
    FIX::LegSecurityType LegSecurityType_17("STRING_17878077");
    noLegs_0_2.set(LegSecurityType_17);
    InstrumentLeg_17.insert(LegSecurityType_17.getString());
    FIX::LegSide LegSide_17('4');
    noLegs_0_2.set(LegSide_17);
    InstrumentLeg_17.insert(LegSide_17.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_17("STRING_2002070605");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_17);
    InstrumentLeg_17.insert(LegStateOrProvinceOfIssue_17.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_17("CHF");
    noLegs_0_2.set(LegStrikeCurrency_17);
    InstrumentLeg_17.insert(LegStrikeCurrency_17.getString());
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("2764870");
    noLegs_0_2.set(LegStrikePrice_17);
    InstrumentLeg_17.insert(LegStrikePrice_17.getString());
    FIX::LegSymbol LegSymbol_17("STRING_1789675239");
    noLegs_0_2.set(LegSymbol_17);
    InstrumentLeg_17.insert(LegSymbol_17.getString());
    FIX::LegSymbolSfx LegSymbolSfx_17("STRING_446683126");
    noLegs_0_2.set(LegSymbolSfx_17);
    InstrumentLeg_17.insert(LegSymbolSfx_17.getString());
    FIX::LegTimeUnit LegTimeUnit_17("STRING_184825821");
    noLegs_0_2.set(LegTimeUnit_17);
    InstrumentLeg_17.insert(LegTimeUnit_17.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_17("STRING_1958013986");
    noLegs_0_2.set(LegUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegUnitOfMeasure_17.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("8800377");
    noLegs_0_2.set(LegUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegUnitOfMeasureQty_17.getString());
    all_values.push_back(InstrumentLeg_17);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      FIX::LegSecurityAltID LegSecurityAltID_28("STRING_2012681028");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltID_28.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_28("STRING_1497942478");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltIDSource_28.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("34.120000");
  msg.set(AttachmentPoint_10);
  Instrument_10.insert(AttachmentPoint_10.getString());
  FIX::CFICode CFICode_10("STRING_1090068880");
  msg.set(CFICode_10);
  Instrument_10.insert(CFICode_10.getString());
  FIX::CPProgram CPProgram_10(2);
  msg.set(CPProgram_10);
  Instrument_10.insert(CPProgram_10.getString());
  FIX::CPRegType CPRegType_10("STRING_1763342806");
  msg.set(CPRegType_10);
  Instrument_10.insert(CPRegType_10.getString());
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("2843593");
  msg.set(CapPrice_10);
  Instrument_10.insert(CapPrice_10.getString());
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("19780819");
  msg.set(ContractMultiplier_10);
  Instrument_10.insert(ContractMultiplier_10.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_10(2);
  msg.set(ContractMultiplierUnit_10);
  Instrument_10.insert(ContractMultiplierUnit_10.getString());
  FIX::ContractSettlMonth ContractSettlMonth_10("MONTHYEAR_1175959297");
  msg.set(ContractSettlMonth_10);
  Instrument_10.insert(ContractSettlMonth_10.getString());
  FIX::CountryOfIssue CountryOfIssue_10("COUNTRY_1988517952");
  msg.set(CountryOfIssue_10);
  Instrument_10.insert(CountryOfIssue_10.getString());
  FIX::CouponPaymentDate CouponPaymentDate_10("LOCALMKTDATE_830587100");
  msg.set(CouponPaymentDate_10);
  Instrument_10.insert(CouponPaymentDate_10.getString());
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("24.470000");
  msg.set(CouponRate_10);
  Instrument_10.insert(CouponRate_10.getString());
  FIX::CreditRating CreditRating_10("STRING_1071972837");
  msg.set(CreditRating_10);
  Instrument_10.insert(CreditRating_10.getString());
  FIX::DatedDate DatedDate_10("LOCALMKTDATE_1705400046");
  msg.set(DatedDate_10);
  Instrument_10.insert(DatedDate_10.getString());
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("76.690000");
  msg.set(DetachmentPoint_10);
  Instrument_10.insert(DetachmentPoint_10.getString());
  FIX::EncodedIssuer EncodedIssuer_10("DATA_2021488752");
  msg.set(EncodedIssuer_10);
  Instrument_10.insert(EncodedIssuer_10.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_10(1281845926);
  msg.set(EncodedIssuerLen_10);
  Instrument_10.insert(EncodedIssuerLen_10.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_10("DATA_106953093");
  msg.set(EncodedSecurityDesc_10);
  Instrument_10.insert(EncodedSecurityDesc_10.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_10(2039366829);
  msg.set(EncodedSecurityDescLen_10);
  Instrument_10.insert(EncodedSecurityDescLen_10.getString());
  FIX::ExerciseStyle ExerciseStyle_10(0);
  msg.set(ExerciseStyle_10);
  Instrument_10.insert(ExerciseStyle_10.getString());
  FIX::Factor Factor_10;
  Factor_10.setString("21090236");
  msg.set(Factor_10);
  Instrument_10.insert(Factor_10.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_10(true);
  msg.set(FlexProductEligibilityIndicator_10);
  Instrument_10.insert(FlexProductEligibilityIndicator_10.getString());
  FIX::FlexibleIndicator FlexibleIndicator_10(false);
  msg.set(FlexibleIndicator_10);
  Instrument_10.insert(FlexibleIndicator_10.getString());
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("2380271");
  msg.set(FloorPrice_10);
  Instrument_10.insert(FloorPrice_10.getString());
  FIX::FlowScheduleType FlowScheduleType_10(0);
  msg.set(FlowScheduleType_10);
  Instrument_10.insert(FlowScheduleType_10.getString());
  FIX::InstrRegistry InstrRegistry_10("STRING_1300170654");
  msg.set(InstrRegistry_10);
  Instrument_10.insert(InstrRegistry_10.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_10('4');
  msg.set(InstrmtAssignmentMethod_10);
  Instrument_10.insert(InstrmtAssignmentMethod_10.getString());
  FIX::InterestAccrualDate InterestAccrualDate_10("LOCALMKTDATE_390730468");
  msg.set(InterestAccrualDate_10);
  Instrument_10.insert(InterestAccrualDate_10.getString());
  FIX::IssueDate IssueDate_10("LOCALMKTDATE_32724711");
  msg.set(IssueDate_10);
  Instrument_10.insert(IssueDate_10.getString());
  FIX::Issuer Issuer_10("STRING_72725166");
  msg.set(Issuer_10);
  Instrument_10.insert(Issuer_10.getString());
  FIX::ListMethod ListMethod_10(0);
  msg.set(ListMethod_10);
  Instrument_10.insert(ListMethod_10.getString());
  FIX::LocaleOfIssue LocaleOfIssue_10("STRING_1530667189");
  msg.set(LocaleOfIssue_10);
  Instrument_10.insert(LocaleOfIssue_10.getString());
  FIX::MaturityDate MaturityDate_10("LOCALMKTDATE_286238578");
  msg.set(MaturityDate_10);
  Instrument_10.insert(MaturityDate_10.getString());
  FIX::MaturityMonthYear MaturityMonthYear_10("MONTHYEAR_1345996728");
  msg.set(MaturityMonthYear_10);
  Instrument_10.insert(MaturityMonthYear_10.getString());
  FIX::MaturityTime MaturityTime_10("TZTIMEONLY_1166641770");
  msg.set(MaturityTime_10);
  Instrument_10.insert(MaturityTime_10.getString());
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("20495813");
  msg.set(MinPriceIncrement_10);
  Instrument_10.insert(MinPriceIncrement_10.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("16303561");
  msg.set(MinPriceIncrementAmount_10);
  Instrument_10.insert(MinPriceIncrementAmount_10.getString());
  FIX::NTPositionLimit NTPositionLimit_10(997240118);
  msg.set(NTPositionLimit_10);
  Instrument_10.insert(NTPositionLimit_10.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("18.590000");
  msg.set(NotionalPercentageOutstanding_10);
  Instrument_10.insert(NotionalPercentageOutstanding_10.getString());
  FIX::OptAttribute OptAttribute_10('6');
  msg.set(OptAttribute_10);
  Instrument_10.insert(OptAttribute_10.getString());
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("8382744");
  msg.set(OptPayoutAmount_10);
  Instrument_10.insert(OptPayoutAmount_10.getString());
  FIX::OptPayoutType OptPayoutType_10(3);
  msg.set(OptPayoutType_10);
  Instrument_10.insert(OptPayoutType_10.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("41.960000");
  msg.set(OriginalNotionalPercentageOutstanding_10);
  Instrument_10.insert(OriginalNotionalPercentageOutstanding_10.getString());
  FIX::Pool Pool_10("STRING_1910247259");
  msg.set(Pool_10);
  Instrument_10.insert(Pool_10.getString());
  FIX::PositionLimit PositionLimit_10(1930655358);
  msg.set(PositionLimit_10);
  Instrument_10.insert(PositionLimit_10.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_10("STRING_INX");
  msg.set(PriceQuoteMethod_10);
  Instrument_10.insert(PriceQuoteMethod_10.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_10("STRING_1784252363");
  msg.set(PriceUnitOfMeasure_10);
  Instrument_10.insert(PriceUnitOfMeasure_10.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("10650176");
  msg.set(PriceUnitOfMeasureQty_10);
  Instrument_10.insert(PriceUnitOfMeasureQty_10.getString());
  FIX::Product Product_12(9);
  msg.set(Product_12);
  Instrument_10.insert(Product_12.getString());
  FIX::ProductComplex ProductComplex_10("STRING_1676135545");
  msg.set(ProductComplex_10);
  Instrument_10.insert(ProductComplex_10.getString());
  FIX::PutOrCall PutOrCall_10(1);
  msg.set(PutOrCall_10);
  Instrument_10.insert(PutOrCall_10.getString());
  FIX::RedemptionDate RedemptionDate_10("LOCALMKTDATE_973451361");
  msg.set(RedemptionDate_10);
  Instrument_10.insert(RedemptionDate_10.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_10("STRING_466660435");
  msg.set(RepoCollateralSecurityType_10);
  Instrument_10.insert(RepoCollateralSecurityType_10.getString());
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("50.340000");
  msg.set(RepurchaseRate_10);
  Instrument_10.insert(RepurchaseRate_10.getString());
  FIX::RepurchaseTerm RepurchaseTerm_10(1211478504);
  msg.set(RepurchaseTerm_10);
  Instrument_10.insert(RepurchaseTerm_10.getString());
  FIX::RestructuringType RestructuringType_10("STRING_MR");
  msg.set(RestructuringType_10);
  Instrument_10.insert(RestructuringType_10.getString());
  FIX::SecurityDesc SecurityDesc_10("STRING_657902040");
  msg.set(SecurityDesc_10);
  Instrument_10.insert(SecurityDesc_10.getString());
  FIX::SecurityExchange SecurityExchange_10("EXCHANGE_1634331467");
  msg.set(SecurityExchange_10);
  Instrument_10.insert(SecurityExchange_10.getString());
  FIX::SecurityGroup SecurityGroup_10("STRING_1437591033");
  msg.set(SecurityGroup_10);
  Instrument_10.insert(SecurityGroup_10.getString());
  FIX::SecurityID SecurityID_10("STRING_690626751");
  msg.set(SecurityID_10);
  Instrument_10.insert(SecurityID_10.getString());
  FIX::SecurityIDSource SecurityIDSource_10("STRING_9");
  msg.set(SecurityIDSource_10);
  Instrument_10.insert(SecurityIDSource_10.getString());
  FIX::SecurityStatus SecurityStatus_10("STRING_2");
  msg.set(SecurityStatus_10);
  Instrument_10.insert(SecurityStatus_10.getString());
  FIX::SecuritySubType SecuritySubType_10("STRING_73810292");
  msg.set(SecuritySubType_10);
  Instrument_10.insert(SecuritySubType_10.getString());
  FIX::SecurityType SecurityType_12("STRING_PROV");
  msg.set(SecurityType_12);
  Instrument_10.insert(SecurityType_12.getString());
  FIX::Seniority Seniority_10("STRING_SR");
  msg.set(Seniority_10);
  Instrument_10.insert(Seniority_10.getString());
  FIX::SettlMethod SettlMethod_10('C');
  msg.set(SettlMethod_10);
  Instrument_10.insert(SettlMethod_10.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_10("STRING_1895392949");
  msg.set(SettleOnOpenFlag_10);
  Instrument_10.insert(SettleOnOpenFlag_10.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_10("STRING_374904414");
  msg.set(StateOrProvinceOfIssue_10);
  Instrument_10.insert(StateOrProvinceOfIssue_10.getString());
  FIX::StrikeCurrency StrikeCurrency_10("GBP");
  msg.set(StrikeCurrency_10);
  Instrument_10.insert(StrikeCurrency_10.getString());
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("10337361");
  msg.set(StrikeMultiplier_10);
  Instrument_10.insert(StrikeMultiplier_10.getString());
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("9284829");
  msg.set(StrikePrice_10);
  Instrument_10.insert(StrikePrice_10.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_10(3);
  msg.set(StrikePriceBoundaryMethod_10);
  Instrument_10.insert(StrikePriceBoundaryMethod_10.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("67.120000");
  msg.set(StrikePriceBoundaryPrecision_10);
  Instrument_10.insert(StrikePriceBoundaryPrecision_10.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_10(3);
  msg.set(StrikePriceDeterminationMethod_10);
  Instrument_10.insert(StrikePriceDeterminationMethod_10.getString());
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("12984881");
  msg.set(StrikeValue_10);
  Instrument_10.insert(StrikeValue_10.getString());
  FIX::Symbol Symbol_10("STRING_1110754930");
  msg.set(Symbol_10);
  Instrument_10.insert(Symbol_10.getString());
  FIX::SymbolSfx SymbolSfx_10("STRING_WI");
  msg.set(SymbolSfx_10);
  Instrument_10.insert(SymbolSfx_10.getString());
  FIX::TimeUnit TimeUnit_10("STRING_H");
  msg.set(TimeUnit_10);
  Instrument_10.insert(TimeUnit_10.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_10(2);
  msg.set(UnderlyingPriceDeterminationMethod_10);
  Instrument_10.insert(UnderlyingPriceDeterminationMethod_10.getString());
  FIX::UnitOfMeasure UnitOfMeasure_10("STRING_MMBtu");
  msg.set(UnitOfMeasure_10);
  Instrument_10.insert(UnitOfMeasure_10.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("8677496");
  msg.set(UnitOfMeasureQty_10);
  Instrument_10.insert(UnitOfMeasureQty_10.getString());
  FIX::ValuationMethod ValuationMethod_10("STRING_CDSD");
  msg.set(ValuationMethod_10);
  Instrument_10.insert(ValuationMethod_10.getString());
  all_values.push_back(Instrument_10);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    FIX::ComplexEventCondition ComplexEventCondition_22(1);
    noComplexEvents_0_0.set(ComplexEventCondition_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventCondition_22.getString());
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("126288");
    noComplexEvents_0_0.set(ComplexEventPrice_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPrice_22.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_22(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryMethod_22.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("31.040000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryPrecision_22.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_22(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceTimeType_22.getString());
    FIX::ComplexEventType ComplexEventType_22(9);
    noComplexEvents_0_0.set(ComplexEventType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventType_22.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("15740098");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexOptPayoutAmount_22.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_22);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      FIX::ComplexEventEndDate ComplexEventEndDate_46(FIX::UTCTIMESTAMP(20, 28, 0, 11, 22007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventEndDate_46.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_46(FIX::UTCTIMESTAMP(10, 51, 30, 10, 42010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventStartDate_46.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        FIX::ComplexEventEndTime ComplexEventEndTime_83(FIX::UTCTIMEONLY(1, 38, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventEndTime_83.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_83(FIX::UTCTIMEONLY(16, 33, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventStartTime_83.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        FIX::ComplexEventEndTime ComplexEventEndTime_84(FIX::UTCTIMEONLY(19, 33, 36));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventEndTime_84.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_84(FIX::UTCTIMEONLY(2, 4, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventStartTime_84.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        FIX::ComplexEventEndTime ComplexEventEndTime_85(FIX::UTCTIMEONLY(13, 38, 17));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventEndTime_85.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_85(FIX::UTCTIMEONLY(15, 4, 43));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventStartTime_85.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      FIX::ComplexEventEndDate ComplexEventEndDate_47(FIX::UTCTIMESTAMP(19, 5, 55, 19, 102009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventEndDate_47.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_47(FIX::UTCTIMESTAMP(11, 42, 43, 7, 32004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_47);
      ComplexEventDates_NoComplexEventDates_47.insert(ComplexEventStartDate_47.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        FIX::ComplexEventEndTime ComplexEventEndTime_86(FIX::UTCTIMEONLY(15, 18, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventEndTime_86.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_86(FIX::UTCTIMEONLY(9, 23, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventStartTime_86.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      FIX::ComplexEventEndDate ComplexEventEndDate_48(FIX::UTCTIMESTAMP(4, 20, 15, 0, 12008));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventEndDate_48.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_48(FIX::UTCTIMESTAMP(9, 7, 17, 9, 112000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_48);
      ComplexEventDates_NoComplexEventDates_48.insert(ComplexEventStartDate_48.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        FIX::ComplexEventEndTime ComplexEventEndTime_87(FIX::UTCTIMEONLY(17, 42, 38));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventEndTime_87.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_87(FIX::UTCTIMEONLY(12, 46, 25));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventStartTime_87.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        FIX::ComplexEventEndTime ComplexEventEndTime_88(FIX::UTCTIMEONLY(1, 44, 17));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventEndTime_88.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_88(FIX::UTCTIMEONLY(9, 40, 37));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventStartTime_88.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        FIX::ComplexEventEndTime ComplexEventEndTime_89(FIX::UTCTIMEONLY(12, 57, 54));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventEndTime_89.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_89(FIX::UTCTIMEONLY(13, 6, 39));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventStartTime_89.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    FIX::ComplexEventCondition ComplexEventCondition_23(2);
    noComplexEvents_0_1.set(ComplexEventCondition_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventCondition_23.getString());
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("18926752");
    noComplexEvents_0_1.set(ComplexEventPrice_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPrice_23.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_23(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryMethod_23.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("37.640000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryPrecision_23.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_23(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceTimeType_23.getString());
    FIX::ComplexEventType ComplexEventType_23(2);
    noComplexEvents_0_1.set(ComplexEventType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventType_23.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("11466406");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexOptPayoutAmount_23.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_23);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      FIX::ComplexEventEndDate ComplexEventEndDate_49(FIX::UTCTIMESTAMP(19, 29, 17, 23, 82004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventEndDate_49.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_49(FIX::UTCTIMESTAMP(13, 18, 7, 11, 82009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventStartDate_49.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        FIX::ComplexEventEndTime ComplexEventEndTime_90(FIX::UTCTIMEONLY(7, 58, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventEndTime_90.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_90(FIX::UTCTIMEONLY(15, 7, 38));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventStartTime_90.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        FIX::ComplexEventEndTime ComplexEventEndTime_91(FIX::UTCTIMEONLY(9, 27, 42));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventEndTime_91.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_91(FIX::UTCTIMEONLY(10, 27, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventStartTime_91.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        FIX::ComplexEventEndTime ComplexEventEndTime_92(FIX::UTCTIMEONLY(10, 39, 35));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventEndTime_92.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_92(FIX::UTCTIMEONLY(2, 10, 11));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventStartTime_92.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      FIX::ComplexEventEndDate ComplexEventEndDate_50(FIX::UTCTIMESTAMP(8, 10, 47, 0, 22017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventEndDate_50.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_50(FIX::UTCTIMESTAMP(8, 45, 19, 15, 22009));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventStartDate_50.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        FIX::ComplexEventEndTime ComplexEventEndTime_93(FIX::UTCTIMEONLY(16, 9, 54));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventEndTime_93.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_93(FIX::UTCTIMEONLY(7, 13, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventStartTime_93.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_94;
        FIX::ComplexEventEndTime ComplexEventEndTime_94(FIX::UTCTIMEONLY(15, 31, 53));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventEndTime_94.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_94(FIX::UTCTIMEONLY(9, 55, 16));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_94);
        ComplexEventTimes_NoComplexEventTimes_94.insert(ComplexEventStartTime_94.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_94);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_95;
        FIX::ComplexEventEndTime ComplexEventEndTime_95(FIX::UTCTIMEONLY(3, 26, 56));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventEndTime_95.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_95(FIX::UTCTIMEONLY(20, 43, 14));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_95);
        ComplexEventTimes_NoComplexEventTimes_95.insert(ComplexEventStartTime_95.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_95);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      FIX::ComplexEventEndDate ComplexEventEndDate_51(FIX::UTCTIMESTAMP(17, 25, 32, 14, 52016));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventEndDate_51.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_51(FIX::UTCTIMESTAMP(1, 31, 23, 3, 72010));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventStartDate_51.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_96;
        FIX::ComplexEventEndTime ComplexEventEndTime_96(FIX::UTCTIMEONLY(11, 38, 40));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventEndTime_96.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_96(FIX::UTCTIMEONLY(4, 27, 32));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_96);
        ComplexEventTimes_NoComplexEventTimes_96.insert(ComplexEventStartTime_96.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_96);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_97;
        FIX::ComplexEventEndTime ComplexEventEndTime_97(FIX::UTCTIMEONLY(7, 50, 53));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventEndTime_97.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_97(FIX::UTCTIMEONLY(22, 36, 52));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_97);
        ComplexEventTimes_NoComplexEventTimes_97.insert(ComplexEventStartTime_97.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_97);

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
    multiset<string> EvntGrp_NoEvents_21;
    FIX::EventDate EventDate_21("LOCALMKTDATE_1589724417");
    noEvents_0_0.set(EventDate_21);
    EvntGrp_NoEvents_21.insert(EventDate_21.getString());
    FIX::EventPx EventPx_21;
    EventPx_21.setString("3849403");
    noEvents_0_0.set(EventPx_21);
    EvntGrp_NoEvents_21.insert(EventPx_21.getString());
    FIX::EventText EventText_21("STRING_1663579191");
    noEvents_0_0.set(EventText_21);
    EvntGrp_NoEvents_21.insert(EventText_21.getString());
    FIX::EventTime EventTime_21(FIX::UTCTIMESTAMP(2, 5, 1, 15, 52016));
    noEvents_0_0.set(EventTime_21);
    EvntGrp_NoEvents_21.insert(EventTime_21.getString());
    FIX::EventType EventType_21(16);
    noEvents_0_0.set(EventType_21);
    EvntGrp_NoEvents_21.insert(EventType_21.getString());
    all_values.push_back(EvntGrp_NoEvents_21);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_22;
    FIX::EventDate EventDate_22("LOCALMKTDATE_910138370");
    noEvents_0_1.set(EventDate_22);
    EvntGrp_NoEvents_22.insert(EventDate_22.getString());
    FIX::EventPx EventPx_22;
    EventPx_22.setString("12956958");
    noEvents_0_1.set(EventPx_22);
    EvntGrp_NoEvents_22.insert(EventPx_22.getString());
    FIX::EventText EventText_22("STRING_2135557602");
    noEvents_0_1.set(EventText_22);
    EvntGrp_NoEvents_22.insert(EventText_22.getString());
    FIX::EventTime EventTime_22(FIX::UTCTIMESTAMP(8, 13, 10, 4, 62013));
    noEvents_0_1.set(EventTime_22);
    EvntGrp_NoEvents_22.insert(EventTime_22.getString());
    FIX::EventType EventType_22(17);
    noEvents_0_1.set(EventType_22);
    EvntGrp_NoEvents_22.insert(EventType_22.getString());
    all_values.push_back(EvntGrp_NoEvents_22);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    FIX::InstrumentPartyID InstrumentPartyID_19("STRING_1691735232");
    noInstrumentParties_0_0.set(InstrumentPartyID_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyID_19.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_19('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyIDSource_19.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_19(1276036955);
    noInstrumentParties_0_0.set(InstrumentPartyRole_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyRole_19.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      FIX::InstrumentPartySubID InstrumentPartySubID_35("STRING_970937005");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubID_35.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_35(901726203);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_35);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35.insert(InstrumentPartySubIDType_35.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    FIX::SecurityAltID SecurityAltID_23("STRING_110347896");
    noSecurityAltID_0_0.set(SecurityAltID_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltID_23.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_23("STRING_343966973");
    noSecurityAltID_0_0.set(SecurityAltIDSource_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltIDSource_23.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    FIX::SecurityAltID SecurityAltID_24("STRING_255623753");
    noSecurityAltID_0_1.set(SecurityAltID_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltID_24.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_24("STRING_1773927087");
    noSecurityAltID_0_1.set(SecurityAltIDSource_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltIDSource_24.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  FIX::SecurityXML SecurityXML_21("XMLDATA_1601272756");
  msg.set(SecurityXML_21);
  FIX::SecurityXMLLen SecurityXMLLen_10(400631996);
  msg.set(SecurityXMLLen_10);
  FIX::SecurityXMLSchema SecurityXMLSchema_10("STRING_787381644");
  msg.set(SecurityXMLSchema_10);
  SecurityXML_20.insert(SecurityXMLSchema_10.getString());
  all_values.push_back(SecurityXML_20);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_11;
    FIX::MiscFeeAmt MiscFeeAmt_11;
    MiscFeeAmt_11.setString("20990585");
    noMiscFees_0_0.set(MiscFeeAmt_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeAmt_11.getString());
    FIX::MiscFeeBasis MiscFeeBasis_11(1);
    noMiscFees_0_0.set(MiscFeeBasis_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeBasis_11.getString());
    FIX::MiscFeeCurr MiscFeeCurr_11("GBP");
    noMiscFees_0_0.set(MiscFeeCurr_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeCurr_11.getString());
    FIX::MiscFeeType MiscFeeType_11("STRING_13");
    noMiscFees_0_0.set(MiscFeeType_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeType_11.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_11);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    FIX::PartyID PartyID_25("STRING_1480947985");
    noPartyIDs_0_0.set(PartyID_25);
    Parties_NoPartyIDs_25.insert(PartyID_25.getString());
    FIX::PartyIDSource PartyIDSource_25('I');
    noPartyIDs_0_0.set(PartyIDSource_25);
    Parties_NoPartyIDs_25.insert(PartyIDSource_25.getString());
    FIX::PartyRole PartyRole_25(4);
    noPartyIDs_0_0.set(PartyRole_25);
    Parties_NoPartyIDs_25.insert(PartyRole_25.getString());
    all_values.push_back(Parties_NoPartyIDs_25);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      FIX::PartySubID PartySubID_55("STRING_349671666");
      noPartySubIDs_0_1_0.set(PartySubID_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubID_55.getString());
      FIX::PartySubIDType PartySubIDType_55(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubIDType_55.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_7;
  FIX::SettlDeliveryType SettlDeliveryType_7(3);
  msg.set(SettlDeliveryType_7);
  SettlInstructionsData_7.insert(SettlDeliveryType_7.getString());
  FIX::StandInstDbID StandInstDbID_7("STRING_69768275");
  msg.set(StandInstDbID_7);
  SettlInstructionsData_7.insert(StandInstDbID_7.getString());
  FIX::StandInstDbName StandInstDbName_7("STRING_150584492");
  msg.set(StandInstDbName_7);
  SettlInstructionsData_7.insert(StandInstDbName_7.getString());
  FIX::StandInstDbType StandInstDbType_7(0);
  msg.set(StandInstDbType_7);
  SettlInstructionsData_7.insert(StandInstDbType_7.getString());
  all_values.push_back(SettlInstructionsData_7);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_12;
    FIX::DlvyInstType DlvyInstType_12('S');
    noDlvyInst_0_0.set(DlvyInstType_12);
    DlvyInstGrp_NoDlvyInst_12.insert(DlvyInstType_12.getString());
    FIX::SettlInstSource SettlInstSource_12('3');
    noDlvyInst_0_0.set(SettlInstSource_12);
    DlvyInstGrp_NoDlvyInst_12.insert(SettlInstSource_12.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_12);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_23;
      FIX::SettlPartyID SettlPartyID_23("STRING_1213154905");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyID_23.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_23('1');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyIDSource_23.getString());
      FIX::SettlPartyRole SettlPartyRole_23(1130511906);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_23);
      SettlParties_NoSettlPartyIDs_23.insert(SettlPartyRole_23.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_23);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
        FIX::SettlPartySubID SettlPartySubID_47("STRING_171833120");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_47);
        SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubID_47.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_47(1386135660);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_47);
        SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubIDType_47.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
        FIX::SettlPartySubID SettlPartySubID_48("STRING_949946241");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_48);
        SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubID_48.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_48(1773105877);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_48);
        SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubIDType_48.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_24;
      FIX::SettlPartyID SettlPartyID_24("STRING_1786767656");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyID_24.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_24('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyIDSource_24.getString());
      FIX::SettlPartyRole SettlPartyRole_24(1220480738);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_24);
      SettlParties_NoSettlPartyIDs_24.insert(SettlPartyRole_24.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_24);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
        FIX::SettlPartySubID SettlPartySubID_49("STRING_1482052170");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_49);
        SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubID_49.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_49(1446236096);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_49);
        SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubIDType_49.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
        FIX::SettlPartySubID SettlPartySubID_50("STRING_1083732894");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_50);
        SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubID_50.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_50(2136914824);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_50);
        SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubIDType_50.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
        FIX::SettlPartySubID SettlPartySubID_51("STRING_820203651");
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubID_51);
        SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubID_51.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_51(417197231);
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubIDType_51);
        SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubIDType_51.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_5;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_5("EUR");
  msg.set(BenchmarkCurveCurrency_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveCurrency_5.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_5("STRING_LIBOR");
  msg.set(BenchmarkCurveName_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveName_5.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_5("STRING_983959566");
  msg.set(BenchmarkCurvePoint_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurvePoint_5.getString());
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("17522509");
  msg.set(BenchmarkPrice_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPrice_5.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_5(472872596);
  msg.set(BenchmarkPriceType_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPriceType_5.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_5("STRING_1053727842");
  msg.set(BenchmarkSecurityID_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityID_5.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_5("STRING_1902835451");
  msg.set(BenchmarkSecurityIDSource_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityIDSource_5.getString());
  FIX::Spread Spread_5;
  Spread_5.setString("2704592");
  msg.set(Spread_5);
  SpreadOrBenchmarkCurveData_5.insert(Spread_5.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_5);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    FIX::StipulationType StipulationType_9("STRING_CPP");
    noStipulations_0_0.set(StipulationType_9);
    Stipulations_NoStipulations_9.insert(StipulationType_9.getString());
    FIX::StipulationValue StipulationValue_9("STRING_1344082825");
    noStipulations_0_0.set(StipulationValue_9);
    Stipulations_NoStipulations_9.insert(StipulationValue_9.getString());
    all_values.push_back(Stipulations_NoStipulations_9);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    FIX::StipulationType StipulationType_10("STRING_PXSOURCE");
    noStipulations_0_1.set(StipulationType_10);
    Stipulations_NoStipulations_10.insert(StipulationType_10.getString());
    FIX::StipulationValue StipulationValue_10("STRING_1210724608");
    noStipulations_0_1.set(StipulationValue_10);
    Stipulations_NoStipulations_10.insert(StipulationValue_10.getString());
    all_values.push_back(Stipulations_NoStipulations_10);

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_6("STRING_910604451");
    noTrades_0_0.set(SecondaryTradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(SecondaryTradeReportID_6.getString());
    FIX::TradeReportID TradeReportID_6("STRING_386743761");
    noTrades_0_0.set(TradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(TradeReportID_6.getString());
    all_values.push_back(TrdCollGrp_NoTrades_6);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_7("STRING_1343782093");
    noTrades_0_1.set(SecondaryTradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(SecondaryTradeReportID_7.getString());
    FIX::TradeReportID TradeReportID_7("STRING_149256463");
    noTrades_0_1.set(TradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(TradeReportID_7.getString());
    all_values.push_back(TrdCollGrp_NoTrades_7);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_5("MULTIPLESTRINGVALUE_RSV");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskOrderHandlingInst_5.getString());
    FIX::DeskType DeskType_5("STRING_PR");
    noTrdRegTimestamps_0_0.set(DeskType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskType_5.getString());
    FIX::DeskTypeSource DeskTypeSource_5(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskTypeSource_5.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_5(FIX::UTCTIMESTAMP(7, 42, 9, 21, 32004));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestamp_5.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_5("STRING_880329460");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampOrigin_5.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_5(7);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampType_5.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_5);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_12;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_12("DATA_1715143281");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuer_12.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_12(1868781405);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuerLen_12.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_12("DATA_1432432926");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDesc_12.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_12(40532229);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDescLen_12.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("7750255");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_12);
    UnderlyingInstrument_12.insert(UnderlyingAdjustedQuantity_12.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("47.300000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_12);
    UnderlyingInstrument_12.insert(UnderlyingAllocationPercent_12.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("14.620000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingAttachmentPoint_12.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_12("STRING_1442773301");
    noUnderlyings_0_0.set(UnderlyingCFICode_12);
    UnderlyingInstrument_12.insert(UnderlyingCFICode_12.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_12("STRING_1185354433");
    noUnderlyings_0_0.set(UnderlyingCPProgram_12);
    UnderlyingInstrument_12.insert(UnderlyingCPProgram_12.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_12("STRING_1655074287");
    noUnderlyings_0_0.set(UnderlyingCPRegType_12);
    UnderlyingInstrument_12.insert(UnderlyingCPRegType_12.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("12228658");
    noUnderlyings_0_0.set(UnderlyingCapValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCapValue_12.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("2485953");
    noUnderlyings_0_0.set(UnderlyingCashAmount_12);
    UnderlyingInstrument_12.insert(UnderlyingCashAmount_12.getString());
    FIX::UnderlyingCashType UnderlyingCashType_12("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_12);
    UnderlyingInstrument_12.insert(UnderlyingCashType_12.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("21334702");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplier_12.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_12(635339154);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplierUnit_12.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_12("COUNTRY_2023321704");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingCountryOfIssue_12.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_12("LOCALMKTDATE_135243113");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponPaymentDate_12.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("91.570000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponRate_12.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_12("STRING_845242378");
    noUnderlyings_0_0.set(UnderlyingCreditRating_12);
    UnderlyingInstrument_12.insert(UnderlyingCreditRating_12.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_12("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrency_12.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("8876437");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrentValue_12.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("65.680000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingDetachmentPoint_12.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("10121825");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingDirtyPrice_12.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("2287976");
    noUnderlyings_0_0.set(UnderlyingEndPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingEndPrice_12.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("19137987");
    noUnderlyings_0_0.set(UnderlyingEndValue_12);
    UnderlyingInstrument_12.insert(UnderlyingEndValue_12.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_12(1262716449);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_12);
    UnderlyingInstrument_12.insert(UnderlyingExerciseStyle_12.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("3901551");
    noUnderlyings_0_0.set(UnderlyingFXRate_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRate_12.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_12('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRateCalc_12.getString());
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("546");
    noUnderlyings_0_0.set(UnderlyingFactor_12);
    UnderlyingInstrument_12.insert(UnderlyingFactor_12.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_12(70337132);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_12);
    UnderlyingInstrument_12.insert(UnderlyingFlowScheduleType_12.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_12("STRING_214304242");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_12);
    UnderlyingInstrument_12.insert(UnderlyingInstrRegistry_12.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_12("LOCALMKTDATE_1868836046");
    noUnderlyings_0_0.set(UnderlyingIssueDate_12);
    UnderlyingInstrument_12.insert(UnderlyingIssueDate_12.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_12("STRING_1502770058");
    noUnderlyings_0_0.set(UnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(UnderlyingIssuer_12.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_12("STRING_254836471");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingLocaleOfIssue_12.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_12("LOCALMKTDATE_496377997");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityDate_12.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_12("MONTHYEAR_543071140");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityMonthYear_12.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_12("TZTIMEONLY_565827933");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityTime_12.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("12.990000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_12('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_12);
    UnderlyingInstrument_12.insert(UnderlyingOptAttribute_12.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("85.720000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingOriginalNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_12("STRING_1014533497");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasure_12.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("19770209");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasureQty_12.getString());
    FIX::UnderlyingProduct UnderlyingProduct_12(752958183);
    noUnderlyings_0_0.set(UnderlyingProduct_12);
    UnderlyingInstrument_12.insert(UnderlyingProduct_12.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_12(1000520147);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_12);
    UnderlyingInstrument_12.insert(UnderlyingPutOrCall_12.getString());
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("4648764");
    noUnderlyings_0_0.set(UnderlyingPx_12);
    UnderlyingInstrument_12.insert(UnderlyingPx_12.getString());
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("6287962");
    noUnderlyings_0_0.set(UnderlyingQty_12);
    UnderlyingInstrument_12.insert(UnderlyingQty_12.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_12("LOCALMKTDATE_1135763261");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_12);
    UnderlyingInstrument_12.insert(UnderlyingRedemptionDate_12.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_12("STRING_289421982");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingRepoCollateralSecurityType_12.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("86.180000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseRate_12.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_12(1059546846);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseTerm_12.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_12("STRING_1040501731");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_12);
    UnderlyingInstrument_12.insert(UnderlyingRestructuringType_12.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_12("STRING_214198761");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityDesc_12.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_12("EXCHANGE_362729766");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityExchange_12.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_12("STRING_2052684242");
    noUnderlyings_0_0.set(UnderlyingSecurityID_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityID_12.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_12("STRING_442996413");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityIDSource_12.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_12("STRING_129044915");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecuritySubType_12.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_12("STRING_1167917043");
    noUnderlyings_0_0.set(UnderlyingSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityType_12.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_12("STRING_833151578");
    noUnderlyings_0_0.set(UnderlyingSeniority_12);
    UnderlyingInstrument_12.insert(UnderlyingSeniority_12.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_12("STRING_775689524");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlMethod_12.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_12(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlementType_12.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("9034887");
    noUnderlyings_0_0.set(UnderlyingStartValue_12);
    UnderlyingInstrument_12.insert(UnderlyingStartValue_12.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_12("STRING_989993766");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingStateOrProvinceOfIssue_12.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_12("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikeCurrency_12.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("12448302");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikePrice_12.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_12("STRING_1385702079");
    noUnderlyings_0_0.set(UnderlyingSymbol_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbol_12.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_12("STRING_801846261");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbolSfx_12.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_12("STRING_1810658170");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingTimeUnit_12.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_12("STRING_1177369730");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasure_12.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("3827881");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasureQty_12.getString());
    all_values.push_back(UnderlyingInstrument_12);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_23("STRING_44419580");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltID_23.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_23("STRING_212325505");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltIDSource_23.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_24("STRING_489551277");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltID_24.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_24("STRING_1044939727");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltIDSource_24.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_25("STRING_677201978");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltID_25.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_25("STRING_1118347517");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltIDSource_25.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      FIX::UnderlyingStipType UnderlyingStipType_19("STRING_966623960");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipType_19.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_19("STRING_444902488");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipValue_19.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      FIX::UnderlyingStipType UnderlyingStipType_20("STRING_1092766186");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipType_20.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_20("STRING_2007125691");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipValue_20.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_22("STRING_1455495952");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyID_22.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_22('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyIDSource_22.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_22(1102097663);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyRole_22.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_43("STRING_932759680");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubID_43.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_43(1935249241);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubIDType_43.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_23("STRING_212746743");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyID_23.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_23('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyIDSource_23.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_23(691254303);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyRole_23.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_44("STRING_842571798");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubID_44.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_44(950029423);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubIDType_44.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_13;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_13("DATA_300087098");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuer_13.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_13(80790230);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuerLen_13.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_13("DATA_1751875684");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDesc_13.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_13(2110745268);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDescLen_13.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("12581599");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_13);
    UnderlyingInstrument_13.insert(UnderlyingAdjustedQuantity_13.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("38.710000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_13);
    UnderlyingInstrument_13.insert(UnderlyingAllocationPercent_13.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("83.620000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingAttachmentPoint_13.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_13("STRING_1302579540");
    noUnderlyings_0_1.set(UnderlyingCFICode_13);
    UnderlyingInstrument_13.insert(UnderlyingCFICode_13.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_13("STRING_199505728");
    noUnderlyings_0_1.set(UnderlyingCPProgram_13);
    UnderlyingInstrument_13.insert(UnderlyingCPProgram_13.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_13("STRING_189405992");
    noUnderlyings_0_1.set(UnderlyingCPRegType_13);
    UnderlyingInstrument_13.insert(UnderlyingCPRegType_13.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("2000356");
    noUnderlyings_0_1.set(UnderlyingCapValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCapValue_13.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("8767077");
    noUnderlyings_0_1.set(UnderlyingCashAmount_13);
    UnderlyingInstrument_13.insert(UnderlyingCashAmount_13.getString());
    FIX::UnderlyingCashType UnderlyingCashType_13("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_13);
    UnderlyingInstrument_13.insert(UnderlyingCashType_13.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("2332549");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplier_13.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_13(1843331666);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplierUnit_13.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_13("COUNTRY_1752655997");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingCountryOfIssue_13.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_13("LOCALMKTDATE_1326021147");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponPaymentDate_13.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("37.090000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponRate_13.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_13("STRING_264273599");
    noUnderlyings_0_1.set(UnderlyingCreditRating_13);
    UnderlyingInstrument_13.insert(UnderlyingCreditRating_13.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_13("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrency_13.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("13663712");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrentValue_13.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("6.710000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingDetachmentPoint_13.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("2530923");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingDirtyPrice_13.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("11541368");
    noUnderlyings_0_1.set(UnderlyingEndPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingEndPrice_13.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("2838374");
    noUnderlyings_0_1.set(UnderlyingEndValue_13);
    UnderlyingInstrument_13.insert(UnderlyingEndValue_13.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_13(206340095);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_13);
    UnderlyingInstrument_13.insert(UnderlyingExerciseStyle_13.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("18453911");
    noUnderlyings_0_1.set(UnderlyingFXRate_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRate_13.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_13('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRateCalc_13.getString());
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("10489118");
    noUnderlyings_0_1.set(UnderlyingFactor_13);
    UnderlyingInstrument_13.insert(UnderlyingFactor_13.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_13(647936933);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_13);
    UnderlyingInstrument_13.insert(UnderlyingFlowScheduleType_13.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_13("STRING_1786665022");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_13);
    UnderlyingInstrument_13.insert(UnderlyingInstrRegistry_13.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_13("LOCALMKTDATE_1129702123");
    noUnderlyings_0_1.set(UnderlyingIssueDate_13);
    UnderlyingInstrument_13.insert(UnderlyingIssueDate_13.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_13("STRING_252328970");
    noUnderlyings_0_1.set(UnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(UnderlyingIssuer_13.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_13("STRING_1749926643");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingLocaleOfIssue_13.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_13("LOCALMKTDATE_240378436");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityDate_13.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_13("MONTHYEAR_239509193");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityMonthYear_13.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_13("TZTIMEONLY_1449781357");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityTime_13.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("79.760000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_13('4');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_13);
    UnderlyingInstrument_13.insert(UnderlyingOptAttribute_13.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("73.490000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingOriginalNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_13("STRING_1742993596");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasure_13.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("13157226");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasureQty_13.getString());
    FIX::UnderlyingProduct UnderlyingProduct_13(799457211);
    noUnderlyings_0_1.set(UnderlyingProduct_13);
    UnderlyingInstrument_13.insert(UnderlyingProduct_13.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_13(1976248557);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_13);
    UnderlyingInstrument_13.insert(UnderlyingPutOrCall_13.getString());
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("10115706");
    noUnderlyings_0_1.set(UnderlyingPx_13);
    UnderlyingInstrument_13.insert(UnderlyingPx_13.getString());
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("4046295");
    noUnderlyings_0_1.set(UnderlyingQty_13);
    UnderlyingInstrument_13.insert(UnderlyingQty_13.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_13("LOCALMKTDATE_1154786056");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_13);
    UnderlyingInstrument_13.insert(UnderlyingRedemptionDate_13.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_13("STRING_567060706");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingRepoCollateralSecurityType_13.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("31.590000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseRate_13.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_13(1788819507);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseTerm_13.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_13("STRING_2034877052");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_13);
    UnderlyingInstrument_13.insert(UnderlyingRestructuringType_13.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_13("STRING_2035274421");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityDesc_13.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_13("EXCHANGE_1859910178");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityExchange_13.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_13("STRING_140485782");
    noUnderlyings_0_1.set(UnderlyingSecurityID_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityID_13.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_13("STRING_1041927628");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityIDSource_13.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_13("STRING_2143747593");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecuritySubType_13.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_13("STRING_346825877");
    noUnderlyings_0_1.set(UnderlyingSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityType_13.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_13("STRING_739835138");
    noUnderlyings_0_1.set(UnderlyingSeniority_13);
    UnderlyingInstrument_13.insert(UnderlyingSeniority_13.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_13("STRING_1482841869");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlMethod_13.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_13(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlementType_13.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("13877720");
    noUnderlyings_0_1.set(UnderlyingStartValue_13);
    UnderlyingInstrument_13.insert(UnderlyingStartValue_13.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_13("STRING_1122023243");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingStateOrProvinceOfIssue_13.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_13("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikeCurrency_13.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("7244662");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikePrice_13.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_13("STRING_618334682");
    noUnderlyings_0_1.set(UnderlyingSymbol_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbol_13.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_13("STRING_1879610235");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbolSfx_13.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_13("STRING_26763948");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingTimeUnit_13.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_13("STRING_13809011");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasure_13.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("1711415");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasureQty_13.getString());
    all_values.push_back(UnderlyingInstrument_13);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_26("STRING_1756802607");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltID_26.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_26("STRING_1486864135");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltIDSource_26.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      FIX::UnderlyingStipType UnderlyingStipType_21("STRING_1585567516");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipType_21.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_21("STRING_350951132");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipValue_21.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      FIX::UnderlyingStipType UnderlyingStipType_22("STRING_722554421");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipType_22.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_22("STRING_592869924");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipValue_22.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_24("STRING_1391457580");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyID_24.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_24('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyIDSource_24.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_24(805405242);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyRole_24.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_45("STRING_2094115962");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubID_45.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_45(945891024);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubIDType_45.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_14("DATA_173692334");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuer_14.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_14(2090379907);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuerLen_14.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_14("DATA_1292716902");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDesc_14.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_14(913527473);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDescLen_14.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("14257381");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_14);
    UnderlyingInstrument_14.insert(UnderlyingAdjustedQuantity_14.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("10.250000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_14);
    UnderlyingInstrument_14.insert(UnderlyingAllocationPercent_14.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("58.970000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingAttachmentPoint_14.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_14("STRING_400277724");
    noUnderlyings_0_2.set(UnderlyingCFICode_14);
    UnderlyingInstrument_14.insert(UnderlyingCFICode_14.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_14("STRING_918927271");
    noUnderlyings_0_2.set(UnderlyingCPProgram_14);
    UnderlyingInstrument_14.insert(UnderlyingCPProgram_14.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_14("STRING_1793916939");
    noUnderlyings_0_2.set(UnderlyingCPRegType_14);
    UnderlyingInstrument_14.insert(UnderlyingCPRegType_14.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("11247439");
    noUnderlyings_0_2.set(UnderlyingCapValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCapValue_14.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("15372619");
    noUnderlyings_0_2.set(UnderlyingCashAmount_14);
    UnderlyingInstrument_14.insert(UnderlyingCashAmount_14.getString());
    FIX::UnderlyingCashType UnderlyingCashType_14("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_14);
    UnderlyingInstrument_14.insert(UnderlyingCashType_14.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("11515079");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplier_14.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_14(1551070965);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplierUnit_14.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_14("COUNTRY_1697185034");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingCountryOfIssue_14.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_14("LOCALMKTDATE_669975560");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponPaymentDate_14.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("99.240000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponRate_14.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_14("STRING_1036565521");
    noUnderlyings_0_2.set(UnderlyingCreditRating_14);
    UnderlyingInstrument_14.insert(UnderlyingCreditRating_14.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_14("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrency_14.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("13875166");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrentValue_14.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("48.410000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingDetachmentPoint_14.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("11913437");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingDirtyPrice_14.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("1580448");
    noUnderlyings_0_2.set(UnderlyingEndPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingEndPrice_14.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("9544287");
    noUnderlyings_0_2.set(UnderlyingEndValue_14);
    UnderlyingInstrument_14.insert(UnderlyingEndValue_14.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_14(1425549501);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_14);
    UnderlyingInstrument_14.insert(UnderlyingExerciseStyle_14.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("9634500");
    noUnderlyings_0_2.set(UnderlyingFXRate_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRate_14.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_14('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRateCalc_14.getString());
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("13721818");
    noUnderlyings_0_2.set(UnderlyingFactor_14);
    UnderlyingInstrument_14.insert(UnderlyingFactor_14.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_14(1909341109);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_14);
    UnderlyingInstrument_14.insert(UnderlyingFlowScheduleType_14.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_14("STRING_259885814");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_14);
    UnderlyingInstrument_14.insert(UnderlyingInstrRegistry_14.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_14("LOCALMKTDATE_1315078075");
    noUnderlyings_0_2.set(UnderlyingIssueDate_14);
    UnderlyingInstrument_14.insert(UnderlyingIssueDate_14.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_14("STRING_1054574363");
    noUnderlyings_0_2.set(UnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(UnderlyingIssuer_14.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_14("STRING_1173413287");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingLocaleOfIssue_14.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_14("LOCALMKTDATE_593332556");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityDate_14.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_14("MONTHYEAR_1595545388");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityMonthYear_14.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_14("TZTIMEONLY_1327229184");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityTime_14.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("2.800000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_14('3');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_14);
    UnderlyingInstrument_14.insert(UnderlyingOptAttribute_14.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("24.750000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingOriginalNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_14("STRING_2118354242");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasure_14.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("19042509");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasureQty_14.getString());
    FIX::UnderlyingProduct UnderlyingProduct_14(352222353);
    noUnderlyings_0_2.set(UnderlyingProduct_14);
    UnderlyingInstrument_14.insert(UnderlyingProduct_14.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_14(1122378505);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_14);
    UnderlyingInstrument_14.insert(UnderlyingPutOrCall_14.getString());
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("13078382");
    noUnderlyings_0_2.set(UnderlyingPx_14);
    UnderlyingInstrument_14.insert(UnderlyingPx_14.getString());
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("20494073");
    noUnderlyings_0_2.set(UnderlyingQty_14);
    UnderlyingInstrument_14.insert(UnderlyingQty_14.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_14("LOCALMKTDATE_1792354065");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_14);
    UnderlyingInstrument_14.insert(UnderlyingRedemptionDate_14.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_14("STRING_320744559");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingRepoCollateralSecurityType_14.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("92.600000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseRate_14.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_14(632770837);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseTerm_14.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_14("STRING_919218352");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_14);
    UnderlyingInstrument_14.insert(UnderlyingRestructuringType_14.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_14("STRING_178522265");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityDesc_14.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_14("EXCHANGE_195742031");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityExchange_14.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_14("STRING_2110562070");
    noUnderlyings_0_2.set(UnderlyingSecurityID_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityID_14.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_14("STRING_336567108");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityIDSource_14.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_14("STRING_1150170805");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecuritySubType_14.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_14("STRING_1388627923");
    noUnderlyings_0_2.set(UnderlyingSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityType_14.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_14("STRING_1300017193");
    noUnderlyings_0_2.set(UnderlyingSeniority_14);
    UnderlyingInstrument_14.insert(UnderlyingSeniority_14.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_14("STRING_1236364285");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlMethod_14.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_14(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlementType_14.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("10618746");
    noUnderlyings_0_2.set(UnderlyingStartValue_14);
    UnderlyingInstrument_14.insert(UnderlyingStartValue_14.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_14("STRING_1496250099");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingStateOrProvinceOfIssue_14.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_14("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikeCurrency_14.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("5221797");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikePrice_14.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_14("STRING_374253075");
    noUnderlyings_0_2.set(UnderlyingSymbol_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbol_14.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_14("STRING_1564510759");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbolSfx_14.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_14("STRING_1849408923");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingTimeUnit_14.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_14("STRING_1367863355");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasure_14.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("19314997");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasureQty_14.getString());
    all_values.push_back(UnderlyingInstrument_14);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_27("STRING_1338733949");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltID_27.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_27("STRING_1688267089");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltIDSource_27.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_23;
      FIX::UnderlyingStipType UnderlyingStipType_23("STRING_313628806");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipType_23.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_23("STRING_848621724");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipValue_23.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_25("STRING_2105982871");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyID_25.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_25('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyIDSource_25.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_25(1868223104);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyRole_25.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_46("STRING_2088584636");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubID_46.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_46(2046745370);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubIDType_46.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_47("STRING_787012092");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubID_47.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_47(2051663058);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubIDType_47.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_26("STRING_235828830");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyID_26.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_26('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyIDSource_26.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_26(1292807333);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyRole_26.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_48("STRING_1026063534");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubID_48.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_48(1906133425);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubIDType_48.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_49("STRING_450237031");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubID_49.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_49(374829985);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubIDType_49.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_50("STRING_1687053944");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubID_50.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_50(419202401);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubIDType_50.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
