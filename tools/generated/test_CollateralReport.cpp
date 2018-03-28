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
  multiset<string> CollateralReport_0;
  FIX::Account Account_5("STRING_1875046680");
  msg.set(Account_5);
  CollateralReport_0.insert(Account_5.getString());
  FIX::AccountType AccountType_4(7);
  msg.set(AccountType_4);
  CollateralReport_0.insert(AccountType_4.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("8050218");
  msg.set(AccruedInterestAmt_5);
  CollateralReport_0.insert(AccruedInterestAmt_5.getString());
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("1578964");
  msg.set(CashOutstanding_2);
  CollateralReport_0.insert(CashOutstanding_2.getString());
  FIX::ClOrdID ClOrdID_10("STRING_1584534583");
  msg.set(ClOrdID_10);
  CollateralReport_0.insert(ClOrdID_10.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_9("LOCALMKTDATE_1110550819");
  msg.set(ClearingBusinessDate_9);
  CollateralReport_0.insert(ClearingBusinessDate_9.getString());
  FIX::CollApplType CollApplType_0(0);
  msg.set(CollApplType_0);
  CollateralReport_0.insert(CollApplType_0.getString());
  FIX::CollInquiryID CollInquiryID_2("STRING_733294120");
  msg.set(CollInquiryID_2);
  CollateralReport_0.insert(CollInquiryID_2.getString());
  FIX::CollRptID CollRptID_0("STRING_1256955341");
  msg.set(CollRptID_0);
  CollateralReport_0.insert(CollRptID_0.getString());
  FIX::CollStatus CollStatus_0(2);
  msg.set(CollStatus_0);
  CollateralReport_0.insert(CollStatus_0.getString());
  FIX::Currency Currency_9("CHF");
  msg.set(Currency_9);
  CollateralReport_0.insert(Currency_9.getString());
  FIX::EncodedText EncodedText_16("DATA_462653809");
  msg.set(EncodedText_16);
  CollateralReport_0.insert(EncodedText_16.getString());
  FIX::EncodedTextLen EncodedTextLen_16(773585971);
  msg.set(EncodedTextLen_16);
  CollateralReport_0.insert(EncodedTextLen_16.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("16389433");
  msg.set(EndAccruedInterestAmt_5);
  CollateralReport_0.insert(EndAccruedInterestAmt_5.getString());
  FIX::EndCash EndCash_5;
  EndCash_5.setString("3152116");
  msg.set(EndCash_5);
  CollateralReport_0.insert(EndCash_5.getString());
  FIX::FinancialStatus FinancialStatus_0("MULTIPLECHARVALUE_1");
  msg.set(FinancialStatus_0);
  CollateralReport_0.insert(FinancialStatus_0.getString());
  FIX::LastRptRequested LastRptRequested_1(true);
  msg.set(LastRptRequested_1);
  CollateralReport_0.insert(LastRptRequested_1.getString());
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("1330833");
  msg.set(MarginExcess_2);
  CollateralReport_0.insert(MarginExcess_2.getString());
  FIX::OrderID OrderID_10("STRING_451679771");
  msg.set(OrderID_10);
  CollateralReport_0.insert(OrderID_10.getString());
  FIX::Price Price_4;
  Price_4.setString("18372092");
  msg.set(Price_4);
  CollateralReport_0.insert(Price_4.getString());
  FIX::PriceType PriceType_6(16);
  msg.set(PriceType_6);
  CollateralReport_0.insert(PriceType_6.getString());
  FIX::QtyType QtyType_7(0);
  msg.set(QtyType_7);
  CollateralReport_0.insert(QtyType_7.getString());
  FIX::Quantity Quantity_8;
  Quantity_8.setString("10063452");
  msg.set(Quantity_8);
  CollateralReport_0.insert(Quantity_8.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_10("STRING_1361338963");
  msg.set(SecondaryClOrdID_10);
  CollateralReport_0.insert(SecondaryClOrdID_10.getString());
  FIX::SecondaryOrderID SecondaryOrderID_10("STRING_1858502363");
  msg.set(SecondaryOrderID_10);
  CollateralReport_0.insert(SecondaryOrderID_10.getString());
  FIX::SettlDate SettlDate_8("LOCALMKTDATE_208291533");
  msg.set(SettlDate_8);
  CollateralReport_0.insert(SettlDate_8.getString());
  FIX::SettlSessID SettlSessID_5("STRING_ETH");
  msg.set(SettlSessID_5);
  CollateralReport_0.insert(SettlSessID_5.getString());
  FIX::SettlSessSubID SettlSessSubID_4("STRING_654193761");
  msg.set(SettlSessSubID_4);
  CollateralReport_0.insert(SettlSessSubID_4.getString());
  FIX::Side Side_7('B');
  msg.set(Side_7);
  CollateralReport_0.insert(Side_7.getString());
  FIX::StartCash StartCash_5;
  StartCash_5.setString("358809");
  msg.set(StartCash_5);
  CollateralReport_0.insert(StartCash_5.getString());
  FIX::Text Text_16("STRING_381756793");
  msg.set(Text_16);
  CollateralReport_0.insert(Text_16.getString());
  FIX::TotNumReports TotNumReports_1(428794810);
  msg.set(TotNumReports_1);
  CollateralReport_0.insert(TotNumReports_1.getString());
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("8409027");
  msg.set(TotalNetValue_2);
  CollateralReport_0.insert(TotalNetValue_2.getString());
  FIX::TradingSessionID TradingSessionID_9("STRING_5");
  msg.set(TradingSessionID_9);
  CollateralReport_0.insert(TradingSessionID_9.getString());
  FIX::TradingSessionSubID TradingSessionSubID_9("STRING_6");
  msg.set(TradingSessionSubID_9);
  CollateralReport_0.insert(TradingSessionSubID_9.getString());
  FIX::TransactTime TransactTime_7(FIX::UTCTIMESTAMP(6, 25, 0, 19, 6, 2009));
  msg.set(TransactTime_7);
  CollateralReport_0.insert(TransactTime_7.getString());
  all_values.push_back(CollateralReport_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    FIX::ExecID ExecID_11("STRING_1063590853");
    noExecs_0_0.set(ExecID_11);
    ExecCollGrp_NoExecs_5.insert(ExecID_11.getString());
    all_values.push_back(ExecCollGrp_NoExecs_5);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  FIX::AgreementCurrency AgreementCurrency_6("CHF");
  msg.set(AgreementCurrency_6);
  FinancingDetails_6.insert(AgreementCurrency_6.getString());
  FIX::AgreementDate AgreementDate_6("LOCALMKTDATE_1169102320");
  msg.set(AgreementDate_6);
  FinancingDetails_6.insert(AgreementDate_6.getString());
  FIX::AgreementDesc AgreementDesc_6("STRING_1562947850");
  msg.set(AgreementDesc_6);
  FinancingDetails_6.insert(AgreementDesc_6.getString());
  FIX::AgreementID AgreementID_6("STRING_1814720605");
  msg.set(AgreementID_6);
  FinancingDetails_6.insert(AgreementID_6.getString());
  FIX::DeliveryType DeliveryType_6(3);
  msg.set(DeliveryType_6);
  FinancingDetails_6.insert(DeliveryType_6.getString());
  FIX::EndDate EndDate_6("LOCALMKTDATE_1252673454");
  msg.set(EndDate_6);
  FinancingDetails_6.insert(EndDate_6.getString());
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("64.590000");
  msg.set(MarginRatio_6);
  FinancingDetails_6.insert(MarginRatio_6.getString());
  FIX::StartDate StartDate_6("LOCALMKTDATE_2058172593");
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
    multiset<string> InstrumentLeg_14;
    FIX::EncodedLegIssuer EncodedLegIssuer_14("DATA_1769191308");
    noLegs_0_0.set(EncodedLegIssuer_14);
    InstrumentLeg_14.insert(EncodedLegIssuer_14.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_14(319826584);
    noLegs_0_0.set(EncodedLegIssuerLen_14);
    InstrumentLeg_14.insert(EncodedLegIssuerLen_14.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_14("DATA_836801341");
    noLegs_0_0.set(EncodedLegSecurityDesc_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDesc_14.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_14(275901421);
    noLegs_0_0.set(EncodedLegSecurityDescLen_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDescLen_14.getString());
    FIX::LegCFICode LegCFICode_14("STRING_1159484130");
    noLegs_0_0.set(LegCFICode_14);
    InstrumentLeg_14.insert(LegCFICode_14.getString());
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("8726822");
    noLegs_0_0.set(LegContractMultiplier_14);
    InstrumentLeg_14.insert(LegContractMultiplier_14.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_14(657658214);
    noLegs_0_0.set(LegContractMultiplierUnit_14);
    InstrumentLeg_14.insert(LegContractMultiplierUnit_14.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_14("MONTHYEAR_1588278940");
    noLegs_0_0.set(LegContractSettlMonth_14);
    InstrumentLeg_14.insert(LegContractSettlMonth_14.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_14("COUNTRY_1713585025");
    noLegs_0_0.set(LegCountryOfIssue_14);
    InstrumentLeg_14.insert(LegCountryOfIssue_14.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_14("LOCALMKTDATE_1197311418");
    noLegs_0_0.set(LegCouponPaymentDate_14);
    InstrumentLeg_14.insert(LegCouponPaymentDate_14.getString());
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("46.850000");
    noLegs_0_0.set(LegCouponRate_14);
    InstrumentLeg_14.insert(LegCouponRate_14.getString());
    FIX::LegCreditRating LegCreditRating_14("STRING_1517554964");
    noLegs_0_0.set(LegCreditRating_14);
    InstrumentLeg_14.insert(LegCreditRating_14.getString());
    FIX::LegCurrency LegCurrency_14("CHF");
    noLegs_0_0.set(LegCurrency_14);
    InstrumentLeg_14.insert(LegCurrency_14.getString());
    FIX::LegDatedDate LegDatedDate_14("LOCALMKTDATE_430996596");
    noLegs_0_0.set(LegDatedDate_14);
    InstrumentLeg_14.insert(LegDatedDate_14.getString());
    FIX::LegExerciseStyle LegExerciseStyle_14(1199067519);
    noLegs_0_0.set(LegExerciseStyle_14);
    InstrumentLeg_14.insert(LegExerciseStyle_14.getString());
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("1957857");
    noLegs_0_0.set(LegFactor_14);
    InstrumentLeg_14.insert(LegFactor_14.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_14(2100961869);
    noLegs_0_0.set(LegFlowScheduleType_14);
    InstrumentLeg_14.insert(LegFlowScheduleType_14.getString());
    FIX::LegInstrRegistry LegInstrRegistry_14("STRING_418009519");
    noLegs_0_0.set(LegInstrRegistry_14);
    InstrumentLeg_14.insert(LegInstrRegistry_14.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_14("LOCALMKTDATE_1259376637");
    noLegs_0_0.set(LegInterestAccrualDate_14);
    InstrumentLeg_14.insert(LegInterestAccrualDate_14.getString());
    FIX::LegIssueDate LegIssueDate_14("LOCALMKTDATE_1114903219");
    noLegs_0_0.set(LegIssueDate_14);
    InstrumentLeg_14.insert(LegIssueDate_14.getString());
    FIX::LegIssuer LegIssuer_14("STRING_2099646796");
    noLegs_0_0.set(LegIssuer_14);
    InstrumentLeg_14.insert(LegIssuer_14.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_14("STRING_280995310");
    noLegs_0_0.set(LegLocaleOfIssue_14);
    InstrumentLeg_14.insert(LegLocaleOfIssue_14.getString());
    FIX::LegMaturityDate LegMaturityDate_14("LOCALMKTDATE_530367422");
    noLegs_0_0.set(LegMaturityDate_14);
    InstrumentLeg_14.insert(LegMaturityDate_14.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_14("MONTHYEAR_1766883754");
    noLegs_0_0.set(LegMaturityMonthYear_14);
    InstrumentLeg_14.insert(LegMaturityMonthYear_14.getString());
    FIX::LegMaturityTime LegMaturityTime_14("TZTIMEONLY_1901777401");
    noLegs_0_0.set(LegMaturityTime_14);
    InstrumentLeg_14.insert(LegMaturityTime_14.getString());
    FIX::LegOptAttribute LegOptAttribute_14('1');
    noLegs_0_0.set(LegOptAttribute_14);
    InstrumentLeg_14.insert(LegOptAttribute_14.getString());
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("4528465");
    noLegs_0_0.set(LegOptionRatio_14);
    InstrumentLeg_14.insert(LegOptionRatio_14.getString());
    FIX::LegPool LegPool_14("STRING_1812466347");
    noLegs_0_0.set(LegPool_14);
    InstrumentLeg_14.insert(LegPool_14.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_14("STRING_1894575928");
    noLegs_0_0.set(LegPriceUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasure_14.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("5001483");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasureQty_14.getString());
    FIX::LegProduct LegProduct_14(1434174007);
    noLegs_0_0.set(LegProduct_14);
    InstrumentLeg_14.insert(LegProduct_14.getString());
    FIX::LegPutOrCall LegPutOrCall_14(66918864);
    noLegs_0_0.set(LegPutOrCall_14);
    InstrumentLeg_14.insert(LegPutOrCall_14.getString());
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("13369496");
    noLegs_0_0.set(LegRatioQty_14);
    InstrumentLeg_14.insert(LegRatioQty_14.getString());
    FIX::LegRedemptionDate LegRedemptionDate_14("LOCALMKTDATE_1710075429");
    noLegs_0_0.set(LegRedemptionDate_14);
    InstrumentLeg_14.insert(LegRedemptionDate_14.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_14("STRING_1226402995");
    noLegs_0_0.set(LegRepoCollateralSecurityType_14);
    InstrumentLeg_14.insert(LegRepoCollateralSecurityType_14.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("82.900000");
    noLegs_0_0.set(LegRepurchaseRate_14);
    InstrumentLeg_14.insert(LegRepurchaseRate_14.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_14(220249995);
    noLegs_0_0.set(LegRepurchaseTerm_14);
    InstrumentLeg_14.insert(LegRepurchaseTerm_14.getString());
    FIX::LegSecurityDesc LegSecurityDesc_14("STRING_667198287");
    noLegs_0_0.set(LegSecurityDesc_14);
    InstrumentLeg_14.insert(LegSecurityDesc_14.getString());
    FIX::LegSecurityExchange LegSecurityExchange_14("EXCHANGE_1775733315");
    noLegs_0_0.set(LegSecurityExchange_14);
    InstrumentLeg_14.insert(LegSecurityExchange_14.getString());
    FIX::LegSecurityID LegSecurityID_14("STRING_1417561414");
    noLegs_0_0.set(LegSecurityID_14);
    InstrumentLeg_14.insert(LegSecurityID_14.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_14("STRING_2121322973");
    noLegs_0_0.set(LegSecurityIDSource_14);
    InstrumentLeg_14.insert(LegSecurityIDSource_14.getString());
    FIX::LegSecuritySubType LegSecuritySubType_14("STRING_1145804631");
    noLegs_0_0.set(LegSecuritySubType_14);
    InstrumentLeg_14.insert(LegSecuritySubType_14.getString());
    FIX::LegSecurityType LegSecurityType_14("STRING_1712857094");
    noLegs_0_0.set(LegSecurityType_14);
    InstrumentLeg_14.insert(LegSecurityType_14.getString());
    FIX::LegSide LegSide_14('2');
    noLegs_0_0.set(LegSide_14);
    InstrumentLeg_14.insert(LegSide_14.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_14("STRING_1576801227");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_14);
    InstrumentLeg_14.insert(LegStateOrProvinceOfIssue_14.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_14("JPY");
    noLegs_0_0.set(LegStrikeCurrency_14);
    InstrumentLeg_14.insert(LegStrikeCurrency_14.getString());
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("15302794");
    noLegs_0_0.set(LegStrikePrice_14);
    InstrumentLeg_14.insert(LegStrikePrice_14.getString());
    FIX::LegSymbol LegSymbol_14("STRING_1182450485");
    noLegs_0_0.set(LegSymbol_14);
    InstrumentLeg_14.insert(LegSymbol_14.getString());
    FIX::LegSymbolSfx LegSymbolSfx_14("STRING_1334782650");
    noLegs_0_0.set(LegSymbolSfx_14);
    InstrumentLeg_14.insert(LegSymbolSfx_14.getString());
    FIX::LegTimeUnit LegTimeUnit_14("STRING_497699020");
    noLegs_0_0.set(LegTimeUnit_14);
    InstrumentLeg_14.insert(LegTimeUnit_14.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_14("STRING_1134613634");
    noLegs_0_0.set(LegUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegUnitOfMeasure_14.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("16157779");
    noLegs_0_0.set(LegUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegUnitOfMeasureQty_14.getString());
    all_values.push_back(InstrumentLeg_14);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      FIX::LegSecurityAltID LegSecurityAltID_25("STRING_754013740");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltID_25.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_25("STRING_1370071713");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_25);
      LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltIDSource_25.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("36.700000");
  msg.set(AttachmentPoint_11);
  Instrument_11.insert(AttachmentPoint_11.getString());
  FIX::CFICode CFICode_11("STRING_1206860305");
  msg.set(CFICode_11);
  Instrument_11.insert(CFICode_11.getString());
  FIX::CPProgram CPProgram_11(2);
  msg.set(CPProgram_11);
  Instrument_11.insert(CPProgram_11.getString());
  FIX::CPRegType CPRegType_11("STRING_410715950");
  msg.set(CPRegType_11);
  Instrument_11.insert(CPRegType_11.getString());
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("17070086");
  msg.set(CapPrice_11);
  Instrument_11.insert(CapPrice_11.getString());
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("3217447");
  msg.set(ContractMultiplier_11);
  Instrument_11.insert(ContractMultiplier_11.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_11(0);
  msg.set(ContractMultiplierUnit_11);
  Instrument_11.insert(ContractMultiplierUnit_11.getString());
  FIX::ContractSettlMonth ContractSettlMonth_11("MONTHYEAR_896474678");
  msg.set(ContractSettlMonth_11);
  Instrument_11.insert(ContractSettlMonth_11.getString());
  FIX::CountryOfIssue CountryOfIssue_11("COUNTRY_2031820201");
  msg.set(CountryOfIssue_11);
  Instrument_11.insert(CountryOfIssue_11.getString());
  FIX::CouponPaymentDate CouponPaymentDate_11("LOCALMKTDATE_1704037810");
  msg.set(CouponPaymentDate_11);
  Instrument_11.insert(CouponPaymentDate_11.getString());
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("29.690000");
  msg.set(CouponRate_11);
  Instrument_11.insert(CouponRate_11.getString());
  FIX::CreditRating CreditRating_11("STRING_104586548");
  msg.set(CreditRating_11);
  Instrument_11.insert(CreditRating_11.getString());
  FIX::DatedDate DatedDate_11("LOCALMKTDATE_223752449");
  msg.set(DatedDate_11);
  Instrument_11.insert(DatedDate_11.getString());
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("26.360000");
  msg.set(DetachmentPoint_11);
  Instrument_11.insert(DetachmentPoint_11.getString());
  FIX::EncodedIssuer EncodedIssuer_11("DATA_1522147962");
  msg.set(EncodedIssuer_11);
  Instrument_11.insert(EncodedIssuer_11.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_11(197591774);
  msg.set(EncodedIssuerLen_11);
  Instrument_11.insert(EncodedIssuerLen_11.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_11("DATA_1732677268");
  msg.set(EncodedSecurityDesc_11);
  Instrument_11.insert(EncodedSecurityDesc_11.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_11(1087521409);
  msg.set(EncodedSecurityDescLen_11);
  Instrument_11.insert(EncodedSecurityDescLen_11.getString());
  FIX::ExerciseStyle ExerciseStyle_11(0);
  msg.set(ExerciseStyle_11);
  Instrument_11.insert(ExerciseStyle_11.getString());
  FIX::Factor Factor_11;
  Factor_11.setString("11619948");
  msg.set(Factor_11);
  Instrument_11.insert(Factor_11.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_11(false);
  msg.set(FlexProductEligibilityIndicator_11);
  Instrument_11.insert(FlexProductEligibilityIndicator_11.getString());
  FIX::FlexibleIndicator FlexibleIndicator_11(false);
  msg.set(FlexibleIndicator_11);
  Instrument_11.insert(FlexibleIndicator_11.getString());
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("5447906");
  msg.set(FloorPrice_11);
  Instrument_11.insert(FloorPrice_11.getString());
  FIX::FlowScheduleType FlowScheduleType_11(2);
  msg.set(FlowScheduleType_11);
  Instrument_11.insert(FlowScheduleType_11.getString());
  FIX::InstrRegistry InstrRegistry_11("STRING_1487400665");
  msg.set(InstrRegistry_11);
  Instrument_11.insert(InstrRegistry_11.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_11('1');
  msg.set(InstrmtAssignmentMethod_11);
  Instrument_11.insert(InstrmtAssignmentMethod_11.getString());
  FIX::InterestAccrualDate InterestAccrualDate_11("LOCALMKTDATE_2021542846");
  msg.set(InterestAccrualDate_11);
  Instrument_11.insert(InterestAccrualDate_11.getString());
  FIX::IssueDate IssueDate_11("LOCALMKTDATE_955694977");
  msg.set(IssueDate_11);
  Instrument_11.insert(IssueDate_11.getString());
  FIX::Issuer Issuer_11("STRING_2070556110");
  msg.set(Issuer_11);
  Instrument_11.insert(Issuer_11.getString());
  FIX::ListMethod ListMethod_11(0);
  msg.set(ListMethod_11);
  Instrument_11.insert(ListMethod_11.getString());
  FIX::LocaleOfIssue LocaleOfIssue_11("STRING_178283042");
  msg.set(LocaleOfIssue_11);
  Instrument_11.insert(LocaleOfIssue_11.getString());
  FIX::MaturityDate MaturityDate_11("LOCALMKTDATE_586696132");
  msg.set(MaturityDate_11);
  Instrument_11.insert(MaturityDate_11.getString());
  FIX::MaturityMonthYear MaturityMonthYear_11("MONTHYEAR_1834933244");
  msg.set(MaturityMonthYear_11);
  Instrument_11.insert(MaturityMonthYear_11.getString());
  FIX::MaturityTime MaturityTime_11("TZTIMEONLY_1213337455");
  msg.set(MaturityTime_11);
  Instrument_11.insert(MaturityTime_11.getString());
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("9974120");
  msg.set(MinPriceIncrement_11);
  Instrument_11.insert(MinPriceIncrement_11.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("13944582");
  msg.set(MinPriceIncrementAmount_11);
  Instrument_11.insert(MinPriceIncrementAmount_11.getString());
  FIX::NTPositionLimit NTPositionLimit_11(1535082227);
  msg.set(NTPositionLimit_11);
  Instrument_11.insert(NTPositionLimit_11.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("68.980000");
  msg.set(NotionalPercentageOutstanding_11);
  Instrument_11.insert(NotionalPercentageOutstanding_11.getString());
  FIX::OptAttribute OptAttribute_11('1');
  msg.set(OptAttribute_11);
  Instrument_11.insert(OptAttribute_11.getString());
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("14194187");
  msg.set(OptPayoutAmount_11);
  Instrument_11.insert(OptPayoutAmount_11.getString());
  FIX::OptPayoutType OptPayoutType_11(1);
  msg.set(OptPayoutType_11);
  Instrument_11.insert(OptPayoutType_11.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("22.410000");
  msg.set(OriginalNotionalPercentageOutstanding_11);
  Instrument_11.insert(OriginalNotionalPercentageOutstanding_11.getString());
  FIX::Pool Pool_11("STRING_1524005328");
  msg.set(Pool_11);
  Instrument_11.insert(Pool_11.getString());
  FIX::PositionLimit PositionLimit_11(1255353509);
  msg.set(PositionLimit_11);
  Instrument_11.insert(PositionLimit_11.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_11("STRING_INX");
  msg.set(PriceQuoteMethod_11);
  Instrument_11.insert(PriceQuoteMethod_11.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_11("STRING_898669643");
  msg.set(PriceUnitOfMeasure_11);
  Instrument_11.insert(PriceUnitOfMeasure_11.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("14529452");
  msg.set(PriceUnitOfMeasureQty_11);
  Instrument_11.insert(PriceUnitOfMeasureQty_11.getString());
  FIX::Product Product_13(9);
  msg.set(Product_13);
  Instrument_11.insert(Product_13.getString());
  FIX::ProductComplex ProductComplex_11("STRING_1986191052");
  msg.set(ProductComplex_11);
  Instrument_11.insert(ProductComplex_11.getString());
  FIX::PutOrCall PutOrCall_11(0);
  msg.set(PutOrCall_11);
  Instrument_11.insert(PutOrCall_11.getString());
  FIX::RedemptionDate RedemptionDate_11("LOCALMKTDATE_288649697");
  msg.set(RedemptionDate_11);
  Instrument_11.insert(RedemptionDate_11.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_11("STRING_1690669779");
  msg.set(RepoCollateralSecurityType_11);
  Instrument_11.insert(RepoCollateralSecurityType_11.getString());
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("53.010000");
  msg.set(RepurchaseRate_11);
  Instrument_11.insert(RepurchaseRate_11.getString());
  FIX::RepurchaseTerm RepurchaseTerm_11(833440345);
  msg.set(RepurchaseTerm_11);
  Instrument_11.insert(RepurchaseTerm_11.getString());
  FIX::RestructuringType RestructuringType_11("STRING_XR");
  msg.set(RestructuringType_11);
  Instrument_11.insert(RestructuringType_11.getString());
  FIX::SecurityDesc SecurityDesc_11("STRING_1022692318");
  msg.set(SecurityDesc_11);
  Instrument_11.insert(SecurityDesc_11.getString());
  FIX::SecurityExchange SecurityExchange_11("EXCHANGE_1875930013");
  msg.set(SecurityExchange_11);
  Instrument_11.insert(SecurityExchange_11.getString());
  FIX::SecurityGroup SecurityGroup_11("STRING_304174542");
  msg.set(SecurityGroup_11);
  Instrument_11.insert(SecurityGroup_11.getString());
  FIX::SecurityID SecurityID_11("STRING_1978387295");
  msg.set(SecurityID_11);
  Instrument_11.insert(SecurityID_11.getString());
  FIX::SecurityIDSource SecurityIDSource_11("STRING_I");
  msg.set(SecurityIDSource_11);
  Instrument_11.insert(SecurityIDSource_11.getString());
  FIX::SecurityStatus SecurityStatus_11("STRING_1");
  msg.set(SecurityStatus_11);
  Instrument_11.insert(SecurityStatus_11.getString());
  FIX::SecuritySubType SecuritySubType_11("STRING_9186690");
  msg.set(SecuritySubType_11);
  Instrument_11.insert(SecuritySubType_11.getString());
  FIX::SecurityType SecurityType_13("STRING_SPCLA");
  msg.set(SecurityType_13);
  Instrument_11.insert(SecurityType_13.getString());
  FIX::Seniority Seniority_11("STRING_SD");
  msg.set(Seniority_11);
  Instrument_11.insert(Seniority_11.getString());
  FIX::SettlMethod SettlMethod_11('P');
  msg.set(SettlMethod_11);
  Instrument_11.insert(SettlMethod_11.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_11("STRING_1235627042");
  msg.set(SettleOnOpenFlag_11);
  Instrument_11.insert(SettleOnOpenFlag_11.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_11("STRING_2014155318");
  msg.set(StateOrProvinceOfIssue_11);
  Instrument_11.insert(StateOrProvinceOfIssue_11.getString());
  FIX::StrikeCurrency StrikeCurrency_11("JPY");
  msg.set(StrikeCurrency_11);
  Instrument_11.insert(StrikeCurrency_11.getString());
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("101209");
  msg.set(StrikeMultiplier_11);
  Instrument_11.insert(StrikeMultiplier_11.getString());
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("20295415");
  msg.set(StrikePrice_11);
  Instrument_11.insert(StrikePrice_11.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_11(3);
  msg.set(StrikePriceBoundaryMethod_11);
  Instrument_11.insert(StrikePriceBoundaryMethod_11.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("31.830000");
  msg.set(StrikePriceBoundaryPrecision_11);
  Instrument_11.insert(StrikePriceBoundaryPrecision_11.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_11(1);
  msg.set(StrikePriceDeterminationMethod_11);
  Instrument_11.insert(StrikePriceDeterminationMethod_11.getString());
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("7026612");
  msg.set(StrikeValue_11);
  Instrument_11.insert(StrikeValue_11.getString());
  FIX::Symbol Symbol_11("STRING_653654412");
  msg.set(Symbol_11);
  Instrument_11.insert(Symbol_11.getString());
  FIX::SymbolSfx SymbolSfx_11("STRING_WI");
  msg.set(SymbolSfx_11);
  Instrument_11.insert(SymbolSfx_11.getString());
  FIX::TimeUnit TimeUnit_11("STRING_Min");
  msg.set(TimeUnit_11);
  Instrument_11.insert(TimeUnit_11.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_11(3);
  msg.set(UnderlyingPriceDeterminationMethod_11);
  Instrument_11.insert(UnderlyingPriceDeterminationMethod_11.getString());
  FIX::UnitOfMeasure UnitOfMeasure_11("STRING_tn");
  msg.set(UnitOfMeasure_11);
  Instrument_11.insert(UnitOfMeasure_11.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("15382801");
  msg.set(UnitOfMeasureQty_11);
  Instrument_11.insert(UnitOfMeasureQty_11.getString());
  FIX::ValuationMethod ValuationMethod_11("STRING_CDSD");
  msg.set(ValuationMethod_11);
  Instrument_11.insert(ValuationMethod_11.getString());
  all_values.push_back(Instrument_11);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    FIX::ComplexEventCondition ComplexEventCondition_20(1);
    noComplexEvents_0_0.set(ComplexEventCondition_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventCondition_20.getString());
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("9023993");
    noComplexEvents_0_0.set(ComplexEventPrice_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPrice_20.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_20(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryMethod_20.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("41.080000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryPrecision_20.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_20(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceTimeType_20.getString());
    FIX::ComplexEventType ComplexEventType_20(1);
    noComplexEvents_0_0.set(ComplexEventType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventType_20.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("19271677");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexOptPayoutAmount_20.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_20);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      FIX::ComplexEventEndDate ComplexEventEndDate_33(FIX::UTCTIMESTAMP(6, 15, 37, 27, 7, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventEndDate_33.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_33(FIX::UTCTIMESTAMP(14, 9, 3, 3, 5, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventStartDate_33.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        FIX::ComplexEventEndTime ComplexEventEndTime_63(FIX::UTCTIMEONLY(23, 51, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventEndTime_63.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_63(FIX::UTCTIMEONLY(7, 57, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventStartTime_63.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        FIX::ComplexEventEndTime ComplexEventEndTime_64(FIX::UTCTIMEONLY(9, 15, 10));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventEndTime_64.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_64(FIX::UTCTIMEONLY(3, 38, 38));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventStartTime_64.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      FIX::ComplexEventEndDate ComplexEventEndDate_34(FIX::UTCTIMESTAMP(12, 54, 44, 11, 5, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventEndDate_34.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_34(FIX::UTCTIMESTAMP(6, 24, 13, 13, 5, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventStartDate_34.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        FIX::ComplexEventEndTime ComplexEventEndTime_65(FIX::UTCTIMEONLY(19, 45, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventEndTime_65.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_65(FIX::UTCTIMEONLY(9, 25, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventStartTime_65.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      FIX::ComplexEventEndDate ComplexEventEndDate_35(FIX::UTCTIMESTAMP(14, 18, 56, 5, 2, 2010));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventEndDate_35.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_35(FIX::UTCTIMESTAMP(4, 10, 45, 5, 2, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventStartDate_35.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        FIX::ComplexEventEndTime ComplexEventEndTime_66(FIX::UTCTIMEONLY(0, 57, 32));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventEndTime_66.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_66(FIX::UTCTIMEONLY(17, 57, 28));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventStartTime_66.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        FIX::ComplexEventEndTime ComplexEventEndTime_67(FIX::UTCTIMEONLY(4, 5, 22));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventEndTime_67.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_67(FIX::UTCTIMEONLY(2, 47, 29));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventStartTime_67.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        FIX::ComplexEventEndTime ComplexEventEndTime_68(FIX::UTCTIMEONLY(1, 39, 33));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventEndTime_68.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_68(FIX::UTCTIMEONLY(16, 0, 30));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventStartTime_68.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    FIX::ComplexEventCondition ComplexEventCondition_21(2);
    noComplexEvents_0_1.set(ComplexEventCondition_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventCondition_21.getString());
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("17673070");
    noComplexEvents_0_1.set(ComplexEventPrice_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPrice_21.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_21(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryMethod_21.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("8.340000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryPrecision_21.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_21(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceTimeType_21.getString());
    FIX::ComplexEventType ComplexEventType_21(7);
    noComplexEvents_0_1.set(ComplexEventType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventType_21.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("3107564");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexOptPayoutAmount_21.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_21);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      FIX::ComplexEventEndDate ComplexEventEndDate_36(FIX::UTCTIMESTAMP(15, 48, 10, 5, 10, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventEndDate_36.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_36(FIX::UTCTIMESTAMP(5, 44, 41, 0, 3, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventStartDate_36.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        FIX::ComplexEventEndTime ComplexEventEndTime_69(FIX::UTCTIMEONLY(22, 33, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventEndTime_69.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_69(FIX::UTCTIMEONLY(5, 29, 54));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_69);
        ComplexEventTimes_NoComplexEventTimes_69.insert(ComplexEventStartTime_69.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        FIX::ComplexEventEndTime ComplexEventEndTime_70(FIX::UTCTIMEONLY(19, 2, 52));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventEndTime_70.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_70(FIX::UTCTIMEONLY(23, 11, 59));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_70);
        ComplexEventTimes_NoComplexEventTimes_70.insert(ComplexEventStartTime_70.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_71;
        FIX::ComplexEventEndTime ComplexEventEndTime_71(FIX::UTCTIMEONLY(6, 39, 38));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventEndTime_71.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_71(FIX::UTCTIMEONLY(0, 17, 3));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_71);
        ComplexEventTimes_NoComplexEventTimes_71.insert(ComplexEventStartTime_71.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_71);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      FIX::ComplexEventEndDate ComplexEventEndDate_37(FIX::UTCTIMESTAMP(13, 44, 45, 15, 2, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventEndDate_37.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_37(FIX::UTCTIMESTAMP(15, 4, 52, 3, 10, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventStartDate_37.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        FIX::ComplexEventEndTime ComplexEventEndTime_72(FIX::UTCTIMEONLY(8, 4, 16));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventEndTime_72.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_72(FIX::UTCTIMEONLY(19, 27, 11));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventStartTime_72.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        FIX::ComplexEventEndTime ComplexEventEndTime_73(FIX::UTCTIMEONLY(14, 50, 1));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventEndTime_73.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_73(FIX::UTCTIMEONLY(18, 18, 24));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventStartTime_73.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        FIX::ComplexEventEndTime ComplexEventEndTime_74(FIX::UTCTIMEONLY(11, 1, 5));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventEndTime_74.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_74(FIX::UTCTIMEONLY(6, 44, 46));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventStartTime_74.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      FIX::ComplexEventEndDate ComplexEventEndDate_38(FIX::UTCTIMESTAMP(4, 38, 4, 1, 4, 2006));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventEndDate_38.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_38(FIX::UTCTIMESTAMP(3, 10, 54, 27, 6, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventStartDate_38.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        FIX::ComplexEventEndTime ComplexEventEndTime_75(FIX::UTCTIMEONLY(15, 32, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventEndTime_75.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_75(FIX::UTCTIMEONLY(6, 40, 29));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventStartTime_75.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        FIX::ComplexEventEndTime ComplexEventEndTime_76(FIX::UTCTIMEONLY(8, 22, 55));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventEndTime_76.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_76(FIX::UTCTIMEONLY(16, 31, 53));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventStartTime_76.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        FIX::ComplexEventEndTime ComplexEventEndTime_77(FIX::UTCTIMEONLY(11, 23, 30));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventEndTime_77.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_77(FIX::UTCTIMEONLY(2, 36, 54));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventStartTime_77.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
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
    multiset<string> EvntGrp_NoEvents_20;
    FIX::EventDate EventDate_20("LOCALMKTDATE_822159279");
    noEvents_0_0.set(EventDate_20);
    EvntGrp_NoEvents_20.insert(EventDate_20.getString());
    FIX::EventPx EventPx_20;
    EventPx_20.setString("11831200");
    noEvents_0_0.set(EventPx_20);
    EvntGrp_NoEvents_20.insert(EventPx_20.getString());
    FIX::EventText EventText_20("STRING_2130395301");
    noEvents_0_0.set(EventText_20);
    EvntGrp_NoEvents_20.insert(EventText_20.getString());
    FIX::EventTime EventTime_20(FIX::UTCTIMESTAMP(13, 3, 57, 25, 1, 2013));
    noEvents_0_0.set(EventTime_20);
    EvntGrp_NoEvents_20.insert(EventTime_20.getString());
    FIX::EventType EventType_20(11);
    noEvents_0_0.set(EventType_20);
    EvntGrp_NoEvents_20.insert(EventType_20.getString());
    all_values.push_back(EvntGrp_NoEvents_20);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    FIX::InstrumentPartyID InstrumentPartyID_22("STRING_119021691");
    noInstrumentParties_0_0.set(InstrumentPartyID_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyID_22.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_22('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyIDSource_22.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_22(734890128);
    noInstrumentParties_0_0.set(InstrumentPartyRole_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyRole_22.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      FIX::InstrumentPartySubID InstrumentPartySubID_39("STRING_646495354");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubID_39.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_39(1809863023);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubIDType_39.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      FIX::InstrumentPartySubID InstrumentPartySubID_40("STRING_1333198002");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubID_40.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_40(1009803962);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubIDType_40.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      FIX::InstrumentPartySubID InstrumentPartySubID_41("STRING_26230206");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubID_41.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_41(1779435995);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubIDType_41.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    FIX::InstrumentPartyID InstrumentPartyID_23("STRING_43438880");
    noInstrumentParties_0_1.set(InstrumentPartyID_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyID_23.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_23('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyIDSource_23.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_23(1818958978);
    noInstrumentParties_0_1.set(InstrumentPartyRole_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyRole_23.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      FIX::InstrumentPartySubID InstrumentPartySubID_42("STRING_574013794");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubID_42.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_42(1659871684);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubIDType_42.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      FIX::InstrumentPartySubID InstrumentPartySubID_43("STRING_878370558");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubID_43.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_43(1090416988);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubIDType_43.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      FIX::InstrumentPartySubID InstrumentPartySubID_44("STRING_1988104778");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubID_44.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_44(1700529837);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubIDType_44.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    FIX::SecurityAltID SecurityAltID_24("STRING_1971016431");
    noSecurityAltID_0_0.set(SecurityAltID_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltID_24.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_24("STRING_2007548614");
    noSecurityAltID_0_0.set(SecurityAltIDSource_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltIDSource_24.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    FIX::SecurityAltID SecurityAltID_25("STRING_1787287269");
    noSecurityAltID_0_1.set(SecurityAltID_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltID_25.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_25("STRING_736876846");
    noSecurityAltID_0_1.set(SecurityAltIDSource_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltIDSource_25.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    FIX::SecurityAltID SecurityAltID_26("STRING_21528023");
    noSecurityAltID_0_2.set(SecurityAltID_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltID_26.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_26("STRING_386732626");
    noSecurityAltID_0_2.set(SecurityAltIDSource_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltIDSource_26.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  FIX::SecurityXML SecurityXML_23("XMLDATA_335981474");
  msg.set(SecurityXML_23);
  FIX::SecurityXMLLen SecurityXMLLen_11(496203462);
  msg.set(SecurityXMLLen_11);
  FIX::SecurityXMLSchema SecurityXMLSchema_11("STRING_1330114116");
  msg.set(SecurityXMLSchema_11);
  SecurityXML_22.insert(SecurityXMLSchema_11.getString());
  all_values.push_back(SecurityXML_22);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_15;
    FIX::MiscFeeAmt MiscFeeAmt_15;
    MiscFeeAmt_15.setString("6152251");
    noMiscFees_0_0.set(MiscFeeAmt_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeAmt_15.getString());
    FIX::MiscFeeBasis MiscFeeBasis_15(0);
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
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_16;
    FIX::MiscFeeAmt MiscFeeAmt_16;
    MiscFeeAmt_16.setString("7586286");
    noMiscFees_0_1.set(MiscFeeAmt_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeAmt_16.getString());
    FIX::MiscFeeBasis MiscFeeBasis_16(1);
    noMiscFees_0_1.set(MiscFeeBasis_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeBasis_16.getString());
    FIX::MiscFeeCurr MiscFeeCurr_16("EUR");
    noMiscFees_0_1.set(MiscFeeCurr_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeCurr_16.getString());
    FIX::MiscFeeType MiscFeeType_16("STRING_14");
    noMiscFees_0_1.set(MiscFeeType_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeType_16.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_16);

    msg.addGroup(noMiscFees_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    FIX::PartyID PartyID_26("STRING_1306032661");
    noPartyIDs_0_0.set(PartyID_26);
    Parties_NoPartyIDs_26.insert(PartyID_26.getString());
    FIX::PartyIDSource PartyIDSource_26('7');
    noPartyIDs_0_0.set(PartyIDSource_26);
    Parties_NoPartyIDs_26.insert(PartyIDSource_26.getString());
    FIX::PartyRole PartyRole_26(68);
    noPartyIDs_0_0.set(PartyRole_26);
    Parties_NoPartyIDs_26.insert(PartyRole_26.getString());
    all_values.push_back(Parties_NoPartyIDs_26);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      FIX::PartySubID PartySubID_52("STRING_1894381626");
      noPartySubIDs_0_1_0.set(PartySubID_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubID_52.getString());
      FIX::PartySubIDType PartySubIDType_52(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_52);
      PtysSubGrp_NoPartySubIDs_52.insert(PartySubIDType_52.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      FIX::PartySubID PartySubID_53("STRING_822979795");
      noPartySubIDs_0_1_1.set(PartySubID_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubID_53.getString());
      FIX::PartySubIDType PartySubIDType_53(4);
      noPartySubIDs_0_1_1.set(PartySubIDType_53);
      PtysSubGrp_NoPartySubIDs_53.insert(PartySubIDType_53.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      FIX::PartySubID PartySubID_54("STRING_1081002506");
      noPartySubIDs_0_1_2.set(PartySubID_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubID_54.getString());
      FIX::PartySubIDType PartySubIDType_54(31);
      noPartySubIDs_0_1_2.set(PartySubIDType_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubIDType_54.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_8;
  FIX::SettlDeliveryType SettlDeliveryType_8(3);
  msg.set(SettlDeliveryType_8);
  SettlInstructionsData_8.insert(SettlDeliveryType_8.getString());
  FIX::StandInstDbID StandInstDbID_8("STRING_941067472");
  msg.set(StandInstDbID_8);
  SettlInstructionsData_8.insert(StandInstDbID_8.getString());
  FIX::StandInstDbName StandInstDbName_8("STRING_588836824");
  msg.set(StandInstDbName_8);
  SettlInstructionsData_8.insert(StandInstDbName_8.getString());
  FIX::StandInstDbType StandInstDbType_8(2);
  msg.set(StandInstDbType_8);
  SettlInstructionsData_8.insert(StandInstDbType_8.getString());
  all_values.push_back(SettlInstructionsData_8);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_15;
    FIX::DlvyInstType DlvyInstType_15('S');
    noDlvyInst_0_0.set(DlvyInstType_15);
    DlvyInstGrp_NoDlvyInst_15.insert(DlvyInstType_15.getString());
    FIX::SettlInstSource SettlInstSource_15('1');
    noDlvyInst_0_0.set(SettlInstSource_15);
    DlvyInstGrp_NoDlvyInst_15.insert(SettlInstSource_15.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_15);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_30;
      FIX::SettlPartyID SettlPartyID_30("STRING_158199919");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyID_30.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_30('8');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyIDSource_30.getString());
      FIX::SettlPartyRole SettlPartyRole_30(2074024111);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyRole_30.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_30);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
        FIX::SettlPartySubID SettlPartySubID_66("STRING_1941518606");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_66);
        SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubID_66.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_66(1671908372);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_66);
        SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubIDType_66.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
        FIX::SettlPartySubID SettlPartySubID_67("STRING_399667873");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_67);
        SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubID_67.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_67(552663595);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_67);
        SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubIDType_67.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_5;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_5("USD");
  msg.set(BenchmarkCurveCurrency_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveCurrency_5.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_5("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurveName_5.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_5("STRING_1018541598");
  msg.set(BenchmarkCurvePoint_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurvePoint_5.getString());
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("12031943");
  msg.set(BenchmarkPrice_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPrice_5.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_5(496071452);
  msg.set(BenchmarkPriceType_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPriceType_5.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_5("STRING_1253051540");
  msg.set(BenchmarkSecurityID_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityID_5.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_5("STRING_1852780097");
  msg.set(BenchmarkSecurityIDSource_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityIDSource_5.getString());
  FIX::Spread Spread_5;
  Spread_5.setString("2286342");
  msg.set(Spread_5);
  SpreadOrBenchmarkCurveData_5.insert(Spread_5.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_5);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    FIX::StipulationType StipulationType_9("STRING_WALA");
    noStipulations_0_0.set(StipulationType_9);
    Stipulations_NoStipulations_9.insert(StipulationType_9.getString());
    FIX::StipulationValue StipulationValue_9("STRING_1051614054");
    noStipulations_0_0.set(StipulationValue_9);
    Stipulations_NoStipulations_9.insert(StipulationValue_9.getString());
    all_values.push_back(Stipulations_NoStipulations_9);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_7("STRING_166771624");
    noTrades_0_0.set(SecondaryTradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(SecondaryTradeReportID_7.getString());
    FIX::TradeReportID TradeReportID_7("STRING_2000647257");
    noTrades_0_0.set(TradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(TradeReportID_7.getString());
    all_values.push_back(TrdCollGrp_NoTrades_7);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_8;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_8("STRING_2146004165");
    noTrades_0_1.set(SecondaryTradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(SecondaryTradeReportID_8.getString());
    FIX::TradeReportID TradeReportID_8("STRING_1107839097");
    noTrades_0_1.set(TradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(TradeReportID_8.getString());
    all_values.push_back(TrdCollGrp_NoTrades_8);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_4("MULTIPLESTRINGVALUE_IO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskOrderHandlingInst_4.getString());
    FIX::DeskType DeskType_4("STRING_PF");
    noTrdRegTimestamps_0_0.set(DeskType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskType_4.getString());
    FIX::DeskTypeSource DeskTypeSource_4(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskTypeSource_4.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_4(FIX::UTCTIMESTAMP(14, 4, 31, 25, 4, 2002));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestamp_4.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_4("STRING_832715089");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampOrigin_4.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_4(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampType_4.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_5("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskOrderHandlingInst_5.getString());
    FIX::DeskType DeskType_5("STRING_S");
    noTrdRegTimestamps_0_1.set(DeskType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskType_5.getString());
    FIX::DeskTypeSource DeskTypeSource_5(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskTypeSource_5.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_5(FIX::UTCTIMESTAMP(19, 29, 48, 3, 3, 2011));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestamp_5.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_5("STRING_264797437");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampOrigin_5.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_5(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampType_5.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_5);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_6("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskOrderHandlingInst_6.getString());
    FIX::DeskType DeskType_6("STRING_A");
    noTrdRegTimestamps_0_2.set(DeskType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskType_6.getString());
    FIX::DeskTypeSource DeskTypeSource_6(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskTypeSource_6.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_6(FIX::UTCTIMESTAMP(20, 18, 16, 14, 11, 2004));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestamp_6.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_6("STRING_1627595301");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampOrigin_6.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_6(4);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampType_6.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_6);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_18;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_18("DATA_955740464");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuer_18.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_18(1223988281);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuerLen_18.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_18("DATA_1166194732");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDesc_18.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_18(77920586);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDescLen_18.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("20567033");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_18);
    UnderlyingInstrument_18.insert(UnderlyingAdjustedQuantity_18.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("49.810000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_18);
    UnderlyingInstrument_18.insert(UnderlyingAllocationPercent_18.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("79.520000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingAttachmentPoint_18.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_18("STRING_1197441799");
    noUnderlyings_0_0.set(UnderlyingCFICode_18);
    UnderlyingInstrument_18.insert(UnderlyingCFICode_18.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_18("STRING_439445072");
    noUnderlyings_0_0.set(UnderlyingCPProgram_18);
    UnderlyingInstrument_18.insert(UnderlyingCPProgram_18.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_18("STRING_765130460");
    noUnderlyings_0_0.set(UnderlyingCPRegType_18);
    UnderlyingInstrument_18.insert(UnderlyingCPRegType_18.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("13567218");
    noUnderlyings_0_0.set(UnderlyingCapValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCapValue_18.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("11322495");
    noUnderlyings_0_0.set(UnderlyingCashAmount_18);
    UnderlyingInstrument_18.insert(UnderlyingCashAmount_18.getString());
    FIX::UnderlyingCashType UnderlyingCashType_18("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_18);
    UnderlyingInstrument_18.insert(UnderlyingCashType_18.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("6215697");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplier_18.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_18(1530350380);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplierUnit_18.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_18("COUNTRY_1863156288");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingCountryOfIssue_18.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_18("LOCALMKTDATE_886367182");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponPaymentDate_18.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("3.760000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponRate_18.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_18("STRING_356874914");
    noUnderlyings_0_0.set(UnderlyingCreditRating_18);
    UnderlyingInstrument_18.insert(UnderlyingCreditRating_18.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_18("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrency_18.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("8512407");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrentValue_18.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("61.770000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingDetachmentPoint_18.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("14233427");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingDirtyPrice_18.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("17876071");
    noUnderlyings_0_0.set(UnderlyingEndPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingEndPrice_18.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("14391720");
    noUnderlyings_0_0.set(UnderlyingEndValue_18);
    UnderlyingInstrument_18.insert(UnderlyingEndValue_18.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_18(2104774378);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_18);
    UnderlyingInstrument_18.insert(UnderlyingExerciseStyle_18.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("19940596");
    noUnderlyings_0_0.set(UnderlyingFXRate_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRate_18.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_18('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRateCalc_18.getString());
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("20204722");
    noUnderlyings_0_0.set(UnderlyingFactor_18);
    UnderlyingInstrument_18.insert(UnderlyingFactor_18.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_18(1628798373);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_18);
    UnderlyingInstrument_18.insert(UnderlyingFlowScheduleType_18.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_18("STRING_1875024129");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_18);
    UnderlyingInstrument_18.insert(UnderlyingInstrRegistry_18.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_18("LOCALMKTDATE_1096976928");
    noUnderlyings_0_0.set(UnderlyingIssueDate_18);
    UnderlyingInstrument_18.insert(UnderlyingIssueDate_18.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_18("STRING_647509457");
    noUnderlyings_0_0.set(UnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(UnderlyingIssuer_18.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_18("STRING_1952944715");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingLocaleOfIssue_18.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_18("LOCALMKTDATE_1006196650");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityDate_18.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_18("MONTHYEAR_1597344438");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityMonthYear_18.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_18("TZTIMEONLY_1705709019");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityTime_18.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("48.010000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_18('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_18);
    UnderlyingInstrument_18.insert(UnderlyingOptAttribute_18.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("58.320000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingOriginalNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_18("STRING_1412876627");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasure_18.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("10215553");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasureQty_18.getString());
    FIX::UnderlyingProduct UnderlyingProduct_18(449440253);
    noUnderlyings_0_0.set(UnderlyingProduct_18);
    UnderlyingInstrument_18.insert(UnderlyingProduct_18.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_18(2034446372);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_18);
    UnderlyingInstrument_18.insert(UnderlyingPutOrCall_18.getString());
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("4044220");
    noUnderlyings_0_0.set(UnderlyingPx_18);
    UnderlyingInstrument_18.insert(UnderlyingPx_18.getString());
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("1651128");
    noUnderlyings_0_0.set(UnderlyingQty_18);
    UnderlyingInstrument_18.insert(UnderlyingQty_18.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_18("LOCALMKTDATE_773329906");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_18);
    UnderlyingInstrument_18.insert(UnderlyingRedemptionDate_18.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_18("STRING_1418642472");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingRepoCollateralSecurityType_18.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("78.070000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseRate_18.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_18(364479503);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseTerm_18.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_18("STRING_2083504470");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_18);
    UnderlyingInstrument_18.insert(UnderlyingRestructuringType_18.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_18("STRING_1373228604");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityDesc_18.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_18("EXCHANGE_806415680");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityExchange_18.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_18("STRING_1359363537");
    noUnderlyings_0_0.set(UnderlyingSecurityID_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityID_18.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_18("STRING_1013352068");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityIDSource_18.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_18("STRING_98104044");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecuritySubType_18.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_18("STRING_1316654267");
    noUnderlyings_0_0.set(UnderlyingSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityType_18.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_18("STRING_859928085");
    noUnderlyings_0_0.set(UnderlyingSeniority_18);
    UnderlyingInstrument_18.insert(UnderlyingSeniority_18.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_18("STRING_1017387708");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlMethod_18.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_18(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlementType_18.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("3412428");
    noUnderlyings_0_0.set(UnderlyingStartValue_18);
    UnderlyingInstrument_18.insert(UnderlyingStartValue_18.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_18("STRING_744928189");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingStateOrProvinceOfIssue_18.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_18("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikeCurrency_18.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("5503892");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikePrice_18.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_18("STRING_1145332844");
    noUnderlyings_0_0.set(UnderlyingSymbol_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbol_18.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_18("STRING_438613059");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbolSfx_18.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_18("STRING_108614628");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingTimeUnit_18.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_18("STRING_1201487646");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasure_18.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("3279189");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasureQty_18.getString());
    all_values.push_back(UnderlyingInstrument_18);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_36("STRING_466880625");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltID_36.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_36("STRING_1349474285");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_36);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_36.insert(UnderlyingSecurityAltIDSource_36.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_37("STRING_881410713");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltID_37.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_37("STRING_353843350");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltIDSource_37.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      FIX::UnderlyingStipType UnderlyingStipType_33("STRING_1046523607");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipType_33.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_33("STRING_1127173256");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipValue_33.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_33);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_36("STRING_1568511414");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyID_36.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_36('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyIDSource_36.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_36(961076028);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyRole_36.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_69("STRING_150584792");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubID_69.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_69(172955917);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubIDType_69.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_70("STRING_1807608439");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubID_70.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_70(248688836);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubIDType_70.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_37("STRING_1489610185");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyID_37.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_37('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyIDSource_37.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_37(1266076545);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyRole_37.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_71("STRING_861295687");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubID_71.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_71(2011004734);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubIDType_71.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_72("STRING_670905645");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubID_72.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_72(1850047956);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubIDType_72.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_73("STRING_413910343");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubID_73.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_73(1816238489);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubIDType_73.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_38("STRING_141177367");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyID_38.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_38('5');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyIDSource_38.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_38(870242487);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyRole_38.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_74("STRING_954495432");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubID_74.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_74(1337123113);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubIDType_74.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_75("STRING_1818570574");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubID_75.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_75(1835906146);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubIDType_75.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_19("DATA_1690966463");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuer_19.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_19(1424983307);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuerLen_19.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_19("DATA_734946105");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDesc_19.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_19(670656071);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDescLen_19.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("3025548");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_19);
    UnderlyingInstrument_19.insert(UnderlyingAdjustedQuantity_19.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("38.710000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_19);
    UnderlyingInstrument_19.insert(UnderlyingAllocationPercent_19.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("51.830000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingAttachmentPoint_19.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_19("STRING_1263630893");
    noUnderlyings_0_1.set(UnderlyingCFICode_19);
    UnderlyingInstrument_19.insert(UnderlyingCFICode_19.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_19("STRING_950230242");
    noUnderlyings_0_1.set(UnderlyingCPProgram_19);
    UnderlyingInstrument_19.insert(UnderlyingCPProgram_19.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_19("STRING_165409976");
    noUnderlyings_0_1.set(UnderlyingCPRegType_19);
    UnderlyingInstrument_19.insert(UnderlyingCPRegType_19.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("14365868");
    noUnderlyings_0_1.set(UnderlyingCapValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCapValue_19.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("6103550");
    noUnderlyings_0_1.set(UnderlyingCashAmount_19);
    UnderlyingInstrument_19.insert(UnderlyingCashAmount_19.getString());
    FIX::UnderlyingCashType UnderlyingCashType_19("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_19);
    UnderlyingInstrument_19.insert(UnderlyingCashType_19.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("7787133");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplier_19.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_19(1130407909);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplierUnit_19.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_19("COUNTRY_1680175357");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingCountryOfIssue_19.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_19("LOCALMKTDATE_1310482799");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponPaymentDate_19.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("35.970000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponRate_19.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_19("STRING_1543696444");
    noUnderlyings_0_1.set(UnderlyingCreditRating_19);
    UnderlyingInstrument_19.insert(UnderlyingCreditRating_19.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_19("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrency_19.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("19576067");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrentValue_19.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("32.850000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingDetachmentPoint_19.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("18354452");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingDirtyPrice_19.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("3326481");
    noUnderlyings_0_1.set(UnderlyingEndPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingEndPrice_19.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("3729021");
    noUnderlyings_0_1.set(UnderlyingEndValue_19);
    UnderlyingInstrument_19.insert(UnderlyingEndValue_19.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_19(157057912);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_19);
    UnderlyingInstrument_19.insert(UnderlyingExerciseStyle_19.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("12871435");
    noUnderlyings_0_1.set(UnderlyingFXRate_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRate_19.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_19('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRateCalc_19.getString());
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("19756284");
    noUnderlyings_0_1.set(UnderlyingFactor_19);
    UnderlyingInstrument_19.insert(UnderlyingFactor_19.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_19(975566042);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_19);
    UnderlyingInstrument_19.insert(UnderlyingFlowScheduleType_19.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_19("STRING_1253508053");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_19);
    UnderlyingInstrument_19.insert(UnderlyingInstrRegistry_19.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_19("LOCALMKTDATE_1253128146");
    noUnderlyings_0_1.set(UnderlyingIssueDate_19);
    UnderlyingInstrument_19.insert(UnderlyingIssueDate_19.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_19("STRING_1710512147");
    noUnderlyings_0_1.set(UnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(UnderlyingIssuer_19.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_19("STRING_1924164124");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingLocaleOfIssue_19.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_19("LOCALMKTDATE_1555683011");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityDate_19.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_19("MONTHYEAR_1866486018");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityMonthYear_19.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_19("TZTIMEONLY_1938989308");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityTime_19.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("2.570000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_19('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_19);
    UnderlyingInstrument_19.insert(UnderlyingOptAttribute_19.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("92.840000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingOriginalNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_19("STRING_2108417068");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasure_19.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("12795876");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasureQty_19.getString());
    FIX::UnderlyingProduct UnderlyingProduct_19(371014448);
    noUnderlyings_0_1.set(UnderlyingProduct_19);
    UnderlyingInstrument_19.insert(UnderlyingProduct_19.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_19(739646768);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_19);
    UnderlyingInstrument_19.insert(UnderlyingPutOrCall_19.getString());
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("2625119");
    noUnderlyings_0_1.set(UnderlyingPx_19);
    UnderlyingInstrument_19.insert(UnderlyingPx_19.getString());
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("20511898");
    noUnderlyings_0_1.set(UnderlyingQty_19);
    UnderlyingInstrument_19.insert(UnderlyingQty_19.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_19("LOCALMKTDATE_2050129567");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_19);
    UnderlyingInstrument_19.insert(UnderlyingRedemptionDate_19.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_19("STRING_106731856");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingRepoCollateralSecurityType_19.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("26.020000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseRate_19.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_19(1884034363);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseTerm_19.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_19("STRING_1800999761");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_19);
    UnderlyingInstrument_19.insert(UnderlyingRestructuringType_19.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_19("STRING_1257525741");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityDesc_19.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_19("EXCHANGE_1386694000");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityExchange_19.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_19("STRING_1488961385");
    noUnderlyings_0_1.set(UnderlyingSecurityID_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityID_19.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_19("STRING_1590173853");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityIDSource_19.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_19("STRING_1759596125");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecuritySubType_19.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_19("STRING_1646019297");
    noUnderlyings_0_1.set(UnderlyingSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityType_19.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_19("STRING_729833749");
    noUnderlyings_0_1.set(UnderlyingSeniority_19);
    UnderlyingInstrument_19.insert(UnderlyingSeniority_19.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_19("STRING_1322137715");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlMethod_19.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_19(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlementType_19.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("17053997");
    noUnderlyings_0_1.set(UnderlyingStartValue_19);
    UnderlyingInstrument_19.insert(UnderlyingStartValue_19.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_19("STRING_428162120");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingStateOrProvinceOfIssue_19.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_19("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikeCurrency_19.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("2048425");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikePrice_19.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_19("STRING_2135491645");
    noUnderlyings_0_1.set(UnderlyingSymbol_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbol_19.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_19("STRING_987430660");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbolSfx_19.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_19("STRING_2143831905");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingTimeUnit_19.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_19("STRING_659838254");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasure_19.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("16566632");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasureQty_19.getString());
    all_values.push_back(UnderlyingInstrument_19);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_38("STRING_620771674");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltID_38.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_38("STRING_788767270");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltIDSource_38.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_39("STRING_324278341");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltID_39.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_39("STRING_1360418442");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltIDSource_39.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      FIX::UnderlyingStipType UnderlyingStipType_34("STRING_227984499");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipType_34.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_34("STRING_1263064361");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipValue_34.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      FIX::UnderlyingStipType UnderlyingStipType_35("STRING_1158011033");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipType_35.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_35("STRING_1675387101");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipValue_35.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_39("STRING_811527146");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyID_39.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_39('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyIDSource_39.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_39(238825429);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyRole_39.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_76("STRING_228119400");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubID_76.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_76(1998421554);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubIDType_76.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_77("STRING_1799024181");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubID_77.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_77(957953149);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubIDType_77.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_78("STRING_1173075622");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubID_78.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_78(1125704669);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubIDType_78.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_40("STRING_515869292");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyID_40.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_40('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyIDSource_40.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_40(1705513303);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyRole_40.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_79("STRING_1806080339");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubID_79.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_79(1693521300);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubIDType_79.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_80("STRING_624244594");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubID_80.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_80(1802428596);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubIDType_80.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_81("STRING_205875907");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubID_81.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_81(133424219);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubIDType_81.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_20("DATA_1755692489");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuer_20.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_20(826647581);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuerLen_20.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_20("DATA_922191490");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDesc_20.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_20(2079970831);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDescLen_20.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("395823");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_20);
    UnderlyingInstrument_20.insert(UnderlyingAdjustedQuantity_20.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("6.670000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_20);
    UnderlyingInstrument_20.insert(UnderlyingAllocationPercent_20.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("16.820000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingAttachmentPoint_20.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_20("STRING_1302646737");
    noUnderlyings_0_2.set(UnderlyingCFICode_20);
    UnderlyingInstrument_20.insert(UnderlyingCFICode_20.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_20("STRING_983998053");
    noUnderlyings_0_2.set(UnderlyingCPProgram_20);
    UnderlyingInstrument_20.insert(UnderlyingCPProgram_20.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_20("STRING_1835858784");
    noUnderlyings_0_2.set(UnderlyingCPRegType_20);
    UnderlyingInstrument_20.insert(UnderlyingCPRegType_20.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("1547781");
    noUnderlyings_0_2.set(UnderlyingCapValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCapValue_20.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("17955251");
    noUnderlyings_0_2.set(UnderlyingCashAmount_20);
    UnderlyingInstrument_20.insert(UnderlyingCashAmount_20.getString());
    FIX::UnderlyingCashType UnderlyingCashType_20("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_20);
    UnderlyingInstrument_20.insert(UnderlyingCashType_20.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("3936035");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplier_20.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_20(1948530083);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplierUnit_20.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_20("COUNTRY_701923731");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingCountryOfIssue_20.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_20("LOCALMKTDATE_244541501");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponPaymentDate_20.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("6.160000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponRate_20.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_20("STRING_1659876880");
    noUnderlyings_0_2.set(UnderlyingCreditRating_20);
    UnderlyingInstrument_20.insert(UnderlyingCreditRating_20.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_20("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrency_20.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("282625");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrentValue_20.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("12.180000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingDetachmentPoint_20.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("1363212");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingDirtyPrice_20.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("18125601");
    noUnderlyings_0_2.set(UnderlyingEndPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingEndPrice_20.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("5299679");
    noUnderlyings_0_2.set(UnderlyingEndValue_20);
    UnderlyingInstrument_20.insert(UnderlyingEndValue_20.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_20(1829842592);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_20);
    UnderlyingInstrument_20.insert(UnderlyingExerciseStyle_20.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("2893210");
    noUnderlyings_0_2.set(UnderlyingFXRate_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRate_20.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_20('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRateCalc_20.getString());
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("20357184");
    noUnderlyings_0_2.set(UnderlyingFactor_20);
    UnderlyingInstrument_20.insert(UnderlyingFactor_20.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_20(422745272);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_20);
    UnderlyingInstrument_20.insert(UnderlyingFlowScheduleType_20.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_20("STRING_1940605347");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_20);
    UnderlyingInstrument_20.insert(UnderlyingInstrRegistry_20.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_20("LOCALMKTDATE_714882433");
    noUnderlyings_0_2.set(UnderlyingIssueDate_20);
    UnderlyingInstrument_20.insert(UnderlyingIssueDate_20.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_20("STRING_1344936762");
    noUnderlyings_0_2.set(UnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(UnderlyingIssuer_20.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_20("STRING_1873092530");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingLocaleOfIssue_20.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_20("LOCALMKTDATE_754464809");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityDate_20.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_20("MONTHYEAR_1170923781");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityMonthYear_20.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_20("TZTIMEONLY_2033564213");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityTime_20.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("15.460000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_20('7');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_20);
    UnderlyingInstrument_20.insert(UnderlyingOptAttribute_20.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("93.490000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingOriginalNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_20("STRING_64406064");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasure_20.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("18029633");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasureQty_20.getString());
    FIX::UnderlyingProduct UnderlyingProduct_20(48260032);
    noUnderlyings_0_2.set(UnderlyingProduct_20);
    UnderlyingInstrument_20.insert(UnderlyingProduct_20.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_20(458009659);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_20);
    UnderlyingInstrument_20.insert(UnderlyingPutOrCall_20.getString());
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("16040098");
    noUnderlyings_0_2.set(UnderlyingPx_20);
    UnderlyingInstrument_20.insert(UnderlyingPx_20.getString());
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("7501837");
    noUnderlyings_0_2.set(UnderlyingQty_20);
    UnderlyingInstrument_20.insert(UnderlyingQty_20.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_20("LOCALMKTDATE_702551161");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_20);
    UnderlyingInstrument_20.insert(UnderlyingRedemptionDate_20.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_20("STRING_1056596789");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingRepoCollateralSecurityType_20.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("69.950000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseRate_20.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_20(2120168284);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseTerm_20.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_20("STRING_1634888426");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_20);
    UnderlyingInstrument_20.insert(UnderlyingRestructuringType_20.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_20("STRING_290839519");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityDesc_20.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_20("EXCHANGE_844055854");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityExchange_20.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_20("STRING_1771209718");
    noUnderlyings_0_2.set(UnderlyingSecurityID_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityID_20.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_20("STRING_2103399625");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityIDSource_20.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_20("STRING_1374023764");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecuritySubType_20.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_20("STRING_1453568662");
    noUnderlyings_0_2.set(UnderlyingSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityType_20.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_20("STRING_245237029");
    noUnderlyings_0_2.set(UnderlyingSeniority_20);
    UnderlyingInstrument_20.insert(UnderlyingSeniority_20.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_20("STRING_1558936622");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlMethod_20.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_20(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlementType_20.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("6679823");
    noUnderlyings_0_2.set(UnderlyingStartValue_20);
    UnderlyingInstrument_20.insert(UnderlyingStartValue_20.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_20("STRING_1352058321");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingStateOrProvinceOfIssue_20.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_20("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikeCurrency_20.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("10776672");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikePrice_20.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_20("STRING_663667108");
    noUnderlyings_0_2.set(UnderlyingSymbol_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbol_20.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_20("STRING_1036359197");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbolSfx_20.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_20("STRING_963747769");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingTimeUnit_20.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_20("STRING_573295006");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasure_20.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("10437973");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasureQty_20.getString());
    all_values.push_back(UnderlyingInstrument_20);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_40("STRING_637701071");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltID_40.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_40("STRING_699277121");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltIDSource_40.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_41("STRING_586463502");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltID_41.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_41("STRING_1095710730");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltIDSource_41.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_42("STRING_155803294");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltID_42.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_42("STRING_1336647265");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltIDSource_42.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      FIX::UnderlyingStipType UnderlyingStipType_36("STRING_1212400083");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipType_36.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_36("STRING_1599224260");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipValue_36.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      FIX::UnderlyingStipType UnderlyingStipType_37("STRING_1770946528");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipType_37.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_37("STRING_699804861");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipValue_37.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_41("STRING_467518734");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyID_41.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_41('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyIDSource_41.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_41(1845979756);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyRole_41.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_82("STRING_1777099594");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubID_82.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_82(2091216785);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubIDType_82.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_83("STRING_1252995472");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubID_83.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_83(971419460);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubIDType_83.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_42("STRING_611715439");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyID_42.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_42('4');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyIDSource_42.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_42(880621759);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyRole_42.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_84("STRING_1535237350");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubID_84.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_84(1544288867);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubIDType_84.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_85("STRING_1513510051");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubID_85.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_85(351501471);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubIDType_85.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_86("STRING_2117583873");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubID_86.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_86(409823787);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubIDType_86.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_43("STRING_889704941");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyID_43.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_43('6');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyIDSource_43.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_43(1109100908);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyRole_43.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_87("STRING_1703512027");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubID_87.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_87(1264904203);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubIDType_87.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_88("STRING_665332060");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubID_88.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_88(1354290270);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubIDType_88.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_89("STRING_329820638");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubID_89.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_89(117072672);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubIDType_89.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
