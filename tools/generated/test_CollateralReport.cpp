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
  FIX::Account Account_7("STRING_1884637932");
  msg.set(Account_7);
  CollateralReport_0.insert(Account_7.getString());
  FIX::AccountType AccountType_4(4);
  msg.set(AccountType_4);
  CollateralReport_0.insert(AccountType_4.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_5;
  AccruedInterestAmt_5.setString("20725862");
  msg.set(AccruedInterestAmt_5);
  CollateralReport_0.insert(AccruedInterestAmt_5.getString());
  FIX::CashOutstanding CashOutstanding_2;
  CashOutstanding_2.setString("5193180");
  msg.set(CashOutstanding_2);
  CollateralReport_0.insert(CashOutstanding_2.getString());
  FIX::ClOrdID ClOrdID_9("STRING_636485977");
  msg.set(ClOrdID_9);
  CollateralReport_0.insert(ClOrdID_9.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_9("LOCALMKTDATE_1435130522");
  msg.set(ClearingBusinessDate_9);
  CollateralReport_0.insert(ClearingBusinessDate_9.getString());
  FIX::CollApplType CollApplType_0(0);
  msg.set(CollApplType_0);
  CollateralReport_0.insert(CollApplType_0.getString());
  FIX::CollInquiryID CollInquiryID_2("STRING_2061767181");
  msg.set(CollInquiryID_2);
  CollateralReport_0.insert(CollInquiryID_2.getString());
  FIX::CollRptID CollRptID_0("STRING_1072305441");
  msg.set(CollRptID_0);
  CollateralReport_0.insert(CollRptID_0.getString());
  FIX::CollStatus CollStatus_0(3);
  msg.set(CollStatus_0);
  CollateralReport_0.insert(CollStatus_0.getString());
  FIX::Currency Currency_9("GBP");
  msg.set(Currency_9);
  CollateralReport_0.insert(Currency_9.getString());
  FIX::EncodedText EncodedText_18("DATA_1186768315");
  msg.set(EncodedText_18);
  CollateralReport_0.insert(EncodedText_18.getString());
  FIX::EncodedTextLen EncodedTextLen_18(895330900);
  msg.set(EncodedTextLen_18);
  CollateralReport_0.insert(EncodedTextLen_18.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_5;
  EndAccruedInterestAmt_5.setString("13147097");
  msg.set(EndAccruedInterestAmt_5);
  CollateralReport_0.insert(EndAccruedInterestAmt_5.getString());
  FIX::EndCash EndCash_5;
  EndCash_5.setString("15944699");
  msg.set(EndCash_5);
  CollateralReport_0.insert(EndCash_5.getString());
  FIX::FinancialStatus FinancialStatus_0("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_0);
  CollateralReport_0.insert(FinancialStatus_0.getString());
  FIX::LastRptRequested LastRptRequested_1(false);
  msg.set(LastRptRequested_1);
  CollateralReport_0.insert(LastRptRequested_1.getString());
  FIX::MarginExcess MarginExcess_2;
  MarginExcess_2.setString("19499068");
  msg.set(MarginExcess_2);
  CollateralReport_0.insert(MarginExcess_2.getString());
  FIX::OrderID OrderID_9("STRING_2142674512");
  msg.set(OrderID_9);
  CollateralReport_0.insert(OrderID_9.getString());
  FIX::Price Price_6;
  Price_6.setString("14365051");
  msg.set(Price_6);
  CollateralReport_0.insert(Price_6.getString());
  FIX::PriceType PriceType_8(4);
  msg.set(PriceType_8);
  CollateralReport_0.insert(PriceType_8.getString());
  FIX::QtyType QtyType_7(0);
  msg.set(QtyType_7);
  CollateralReport_0.insert(QtyType_7.getString());
  FIX::Quantity Quantity_8;
  Quantity_8.setString("12198402");
  msg.set(Quantity_8);
  CollateralReport_0.insert(Quantity_8.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_9("STRING_425772072");
  msg.set(SecondaryClOrdID_9);
  CollateralReport_0.insert(SecondaryClOrdID_9.getString());
  FIX::SecondaryOrderID SecondaryOrderID_9("STRING_217086091");
  msg.set(SecondaryOrderID_9);
  CollateralReport_0.insert(SecondaryOrderID_9.getString());
  FIX::SettlDate SettlDate_12("LOCALMKTDATE_1778291036");
  msg.set(SettlDate_12);
  CollateralReport_0.insert(SettlDate_12.getString());
  FIX::SettlSessID SettlSessID_5("STRING_EOD");
  msg.set(SettlSessID_5);
  CollateralReport_0.insert(SettlSessID_5.getString());
  FIX::SettlSessSubID SettlSessSubID_4("STRING_327143762");
  msg.set(SettlSessSubID_4);
  CollateralReport_0.insert(SettlSessSubID_4.getString());
  FIX::Side Side_11('C');
  msg.set(Side_11);
  CollateralReport_0.insert(Side_11.getString());
  FIX::StartCash StartCash_5;
  StartCash_5.setString("4412808");
  msg.set(StartCash_5);
  CollateralReport_0.insert(StartCash_5.getString());
  FIX::Text Text_18("STRING_64298046");
  msg.set(Text_18);
  CollateralReport_0.insert(Text_18.getString());
  FIX::TotNumReports TotNumReports_1(424384329);
  msg.set(TotNumReports_1);
  CollateralReport_0.insert(TotNumReports_1.getString());
  FIX::TotalNetValue TotalNetValue_2;
  TotalNetValue_2.setString("3663834");
  msg.set(TotalNetValue_2);
  CollateralReport_0.insert(TotalNetValue_2.getString());
  FIX::TradingSessionID TradingSessionID_13("STRING_6");
  msg.set(TradingSessionID_13);
  CollateralReport_0.insert(TradingSessionID_13.getString());
  FIX::TradingSessionSubID TradingSessionSubID_13("STRING_1");
  msg.set(TradingSessionSubID_13);
  CollateralReport_0.insert(TradingSessionSubID_13.getString());
  FIX::TransactTime TransactTime_7(FIX::UTCTIMESTAMP(19, 0, 26, 14, 1, 2017));
  msg.set(TransactTime_7);
  CollateralReport_0.insert(TransactTime_7.getString());
  all_values.push_back(CollateralReport_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralReport::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    FIX::ExecID ExecID_13("STRING_2111286101");
    noExecs_0_0.set(ExecID_13);
    ExecCollGrp_NoExecs_6.insert(ExecID_13.getString());
    all_values.push_back(ExecCollGrp_NoExecs_6);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_6;
  FIX::AgreementCurrency AgreementCurrency_6("JPY");
  msg.set(AgreementCurrency_6);
  FinancingDetails_6.insert(AgreementCurrency_6.getString());
  FIX::AgreementDate AgreementDate_6("LOCALMKTDATE_1942168271");
  msg.set(AgreementDate_6);
  FinancingDetails_6.insert(AgreementDate_6.getString());
  FIX::AgreementDesc AgreementDesc_6("STRING_745913365");
  msg.set(AgreementDesc_6);
  FinancingDetails_6.insert(AgreementDesc_6.getString());
  FIX::AgreementID AgreementID_6("STRING_191506020");
  msg.set(AgreementID_6);
  FinancingDetails_6.insert(AgreementID_6.getString());
  FIX::DeliveryType DeliveryType_6(0);
  msg.set(DeliveryType_6);
  FinancingDetails_6.insert(DeliveryType_6.getString());
  FIX::EndDate EndDate_6("LOCALMKTDATE_34934885");
  msg.set(EndDate_6);
  FinancingDetails_6.insert(EndDate_6.getString());
  FIX::MarginRatio MarginRatio_6;
  MarginRatio_6.setString("16.270000");
  msg.set(MarginRatio_6);
  FinancingDetails_6.insert(MarginRatio_6.getString());
  FIX::StartDate StartDate_6("LOCALMKTDATE_996152043");
  msg.set(StartDate_6);
  FinancingDetails_6.insert(StartDate_6.getString());
  FIX::TerminationType TerminationType_6(3);
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
    FIX::EncodedLegIssuer EncodedLegIssuer_14("DATA_1213238135");
    noLegs_0_0.set(EncodedLegIssuer_14);
    InstrumentLeg_14.insert(EncodedLegIssuer_14.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_14(885582506);
    noLegs_0_0.set(EncodedLegIssuerLen_14);
    InstrumentLeg_14.insert(EncodedLegIssuerLen_14.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_14("DATA_1122571106");
    noLegs_0_0.set(EncodedLegSecurityDesc_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDesc_14.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_14(1540381897);
    noLegs_0_0.set(EncodedLegSecurityDescLen_14);
    InstrumentLeg_14.insert(EncodedLegSecurityDescLen_14.getString());
    FIX::LegCFICode LegCFICode_14("STRING_1855915461");
    noLegs_0_0.set(LegCFICode_14);
    InstrumentLeg_14.insert(LegCFICode_14.getString());
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("15638519");
    noLegs_0_0.set(LegContractMultiplier_14);
    InstrumentLeg_14.insert(LegContractMultiplier_14.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_14(1604679943);
    noLegs_0_0.set(LegContractMultiplierUnit_14);
    InstrumentLeg_14.insert(LegContractMultiplierUnit_14.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_14("MONTHYEAR_132816142");
    noLegs_0_0.set(LegContractSettlMonth_14);
    InstrumentLeg_14.insert(LegContractSettlMonth_14.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_14("COUNTRY_1930235408");
    noLegs_0_0.set(LegCountryOfIssue_14);
    InstrumentLeg_14.insert(LegCountryOfIssue_14.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_14("LOCALMKTDATE_40812352");
    noLegs_0_0.set(LegCouponPaymentDate_14);
    InstrumentLeg_14.insert(LegCouponPaymentDate_14.getString());
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("64.490000");
    noLegs_0_0.set(LegCouponRate_14);
    InstrumentLeg_14.insert(LegCouponRate_14.getString());
    FIX::LegCreditRating LegCreditRating_14("STRING_1584265753");
    noLegs_0_0.set(LegCreditRating_14);
    InstrumentLeg_14.insert(LegCreditRating_14.getString());
    FIX::LegCurrency LegCurrency_14("EUR");
    noLegs_0_0.set(LegCurrency_14);
    InstrumentLeg_14.insert(LegCurrency_14.getString());
    FIX::LegDatedDate LegDatedDate_14("LOCALMKTDATE_163117892");
    noLegs_0_0.set(LegDatedDate_14);
    InstrumentLeg_14.insert(LegDatedDate_14.getString());
    FIX::LegExerciseStyle LegExerciseStyle_14(811546537);
    noLegs_0_0.set(LegExerciseStyle_14);
    InstrumentLeg_14.insert(LegExerciseStyle_14.getString());
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("12373118");
    noLegs_0_0.set(LegFactor_14);
    InstrumentLeg_14.insert(LegFactor_14.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_14(1201793005);
    noLegs_0_0.set(LegFlowScheduleType_14);
    InstrumentLeg_14.insert(LegFlowScheduleType_14.getString());
    FIX::LegInstrRegistry LegInstrRegistry_14("STRING_1753643122");
    noLegs_0_0.set(LegInstrRegistry_14);
    InstrumentLeg_14.insert(LegInstrRegistry_14.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_14("LOCALMKTDATE_1201114295");
    noLegs_0_0.set(LegInterestAccrualDate_14);
    InstrumentLeg_14.insert(LegInterestAccrualDate_14.getString());
    FIX::LegIssueDate LegIssueDate_14("LOCALMKTDATE_1407694245");
    noLegs_0_0.set(LegIssueDate_14);
    InstrumentLeg_14.insert(LegIssueDate_14.getString());
    FIX::LegIssuer LegIssuer_14("STRING_2142725972");
    noLegs_0_0.set(LegIssuer_14);
    InstrumentLeg_14.insert(LegIssuer_14.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_14("STRING_995798918");
    noLegs_0_0.set(LegLocaleOfIssue_14);
    InstrumentLeg_14.insert(LegLocaleOfIssue_14.getString());
    FIX::LegMaturityDate LegMaturityDate_14("LOCALMKTDATE_6123962");
    noLegs_0_0.set(LegMaturityDate_14);
    InstrumentLeg_14.insert(LegMaturityDate_14.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_14("MONTHYEAR_186748345");
    noLegs_0_0.set(LegMaturityMonthYear_14);
    InstrumentLeg_14.insert(LegMaturityMonthYear_14.getString());
    FIX::LegMaturityTime LegMaturityTime_14("TZTIMEONLY_785674406");
    noLegs_0_0.set(LegMaturityTime_14);
    InstrumentLeg_14.insert(LegMaturityTime_14.getString());
    FIX::LegOptAttribute LegOptAttribute_14('4');
    noLegs_0_0.set(LegOptAttribute_14);
    InstrumentLeg_14.insert(LegOptAttribute_14.getString());
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("15566599");
    noLegs_0_0.set(LegOptionRatio_14);
    InstrumentLeg_14.insert(LegOptionRatio_14.getString());
    FIX::LegPool LegPool_14("STRING_1781826450");
    noLegs_0_0.set(LegPool_14);
    InstrumentLeg_14.insert(LegPool_14.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_14("STRING_1295833965");
    noLegs_0_0.set(LegPriceUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasure_14.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("12048600");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegPriceUnitOfMeasureQty_14.getString());
    FIX::LegProduct LegProduct_14(847580937);
    noLegs_0_0.set(LegProduct_14);
    InstrumentLeg_14.insert(LegProduct_14.getString());
    FIX::LegPutOrCall LegPutOrCall_14(33932823);
    noLegs_0_0.set(LegPutOrCall_14);
    InstrumentLeg_14.insert(LegPutOrCall_14.getString());
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("1799474");
    noLegs_0_0.set(LegRatioQty_14);
    InstrumentLeg_14.insert(LegRatioQty_14.getString());
    FIX::LegRedemptionDate LegRedemptionDate_14("LOCALMKTDATE_240479186");
    noLegs_0_0.set(LegRedemptionDate_14);
    InstrumentLeg_14.insert(LegRedemptionDate_14.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_14("STRING_1889848284");
    noLegs_0_0.set(LegRepoCollateralSecurityType_14);
    InstrumentLeg_14.insert(LegRepoCollateralSecurityType_14.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("94.200000");
    noLegs_0_0.set(LegRepurchaseRate_14);
    InstrumentLeg_14.insert(LegRepurchaseRate_14.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_14(1845159129);
    noLegs_0_0.set(LegRepurchaseTerm_14);
    InstrumentLeg_14.insert(LegRepurchaseTerm_14.getString());
    FIX::LegSecurityDesc LegSecurityDesc_14("STRING_2022664426");
    noLegs_0_0.set(LegSecurityDesc_14);
    InstrumentLeg_14.insert(LegSecurityDesc_14.getString());
    FIX::LegSecurityExchange LegSecurityExchange_14("EXCHANGE_1526551180");
    noLegs_0_0.set(LegSecurityExchange_14);
    InstrumentLeg_14.insert(LegSecurityExchange_14.getString());
    FIX::LegSecurityID LegSecurityID_14("STRING_1885971481");
    noLegs_0_0.set(LegSecurityID_14);
    InstrumentLeg_14.insert(LegSecurityID_14.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_14("STRING_1068867228");
    noLegs_0_0.set(LegSecurityIDSource_14);
    InstrumentLeg_14.insert(LegSecurityIDSource_14.getString());
    FIX::LegSecuritySubType LegSecuritySubType_14("STRING_963333286");
    noLegs_0_0.set(LegSecuritySubType_14);
    InstrumentLeg_14.insert(LegSecuritySubType_14.getString());
    FIX::LegSecurityType LegSecurityType_14("STRING_794706100");
    noLegs_0_0.set(LegSecurityType_14);
    InstrumentLeg_14.insert(LegSecurityType_14.getString());
    FIX::LegSide LegSide_14('1');
    noLegs_0_0.set(LegSide_14);
    InstrumentLeg_14.insert(LegSide_14.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_14("STRING_1126451178");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_14);
    InstrumentLeg_14.insert(LegStateOrProvinceOfIssue_14.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_14("EUR");
    noLegs_0_0.set(LegStrikeCurrency_14);
    InstrumentLeg_14.insert(LegStrikeCurrency_14.getString());
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("1807605");
    noLegs_0_0.set(LegStrikePrice_14);
    InstrumentLeg_14.insert(LegStrikePrice_14.getString());
    FIX::LegSymbol LegSymbol_14("STRING_1212412111");
    noLegs_0_0.set(LegSymbol_14);
    InstrumentLeg_14.insert(LegSymbol_14.getString());
    FIX::LegSymbolSfx LegSymbolSfx_14("STRING_1381166358");
    noLegs_0_0.set(LegSymbolSfx_14);
    InstrumentLeg_14.insert(LegSymbolSfx_14.getString());
    FIX::LegTimeUnit LegTimeUnit_14("STRING_1588454780");
    noLegs_0_0.set(LegTimeUnit_14);
    InstrumentLeg_14.insert(LegTimeUnit_14.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_14("STRING_1207654436");
    noLegs_0_0.set(LegUnitOfMeasure_14);
    InstrumentLeg_14.insert(LegUnitOfMeasure_14.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("2294816");
    noLegs_0_0.set(LegUnitOfMeasureQty_14);
    InstrumentLeg_14.insert(LegUnitOfMeasureQty_14.getString());
    all_values.push_back(InstrumentLeg_14);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      FIX::LegSecurityAltID LegSecurityAltID_30("STRING_1394402781");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltID_30.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_30("STRING_1015156035");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltIDSource_30.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      FIX::LegSecurityAltID LegSecurityAltID_31("STRING_1635637589");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltID_31.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_31("STRING_803579105");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltIDSource_31.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("88.370000");
  msg.set(AttachmentPoint_10);
  Instrument_10.insert(AttachmentPoint_10.getString());
  FIX::CFICode CFICode_10("STRING_783987906");
  msg.set(CFICode_10);
  Instrument_10.insert(CFICode_10.getString());
  FIX::CPProgram CPProgram_10(99);
  msg.set(CPProgram_10);
  Instrument_10.insert(CPProgram_10.getString());
  FIX::CPRegType CPRegType_10("STRING_1497079774");
  msg.set(CPRegType_10);
  Instrument_10.insert(CPRegType_10.getString());
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("8179207");
  msg.set(CapPrice_10);
  Instrument_10.insert(CapPrice_10.getString());
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("409029");
  msg.set(ContractMultiplier_10);
  Instrument_10.insert(ContractMultiplier_10.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_10(0);
  msg.set(ContractMultiplierUnit_10);
  Instrument_10.insert(ContractMultiplierUnit_10.getString());
  FIX::ContractSettlMonth ContractSettlMonth_10("MONTHYEAR_560285365");
  msg.set(ContractSettlMonth_10);
  Instrument_10.insert(ContractSettlMonth_10.getString());
  FIX::CountryOfIssue CountryOfIssue_10("COUNTRY_1784702384");
  msg.set(CountryOfIssue_10);
  Instrument_10.insert(CountryOfIssue_10.getString());
  FIX::CouponPaymentDate CouponPaymentDate_10("LOCALMKTDATE_1435234441");
  msg.set(CouponPaymentDate_10);
  Instrument_10.insert(CouponPaymentDate_10.getString());
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("61.430000");
  msg.set(CouponRate_10);
  Instrument_10.insert(CouponRate_10.getString());
  FIX::CreditRating CreditRating_10("STRING_1163769916");
  msg.set(CreditRating_10);
  Instrument_10.insert(CreditRating_10.getString());
  FIX::DatedDate DatedDate_10("LOCALMKTDATE_1173722274");
  msg.set(DatedDate_10);
  Instrument_10.insert(DatedDate_10.getString());
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("33.710000");
  msg.set(DetachmentPoint_10);
  Instrument_10.insert(DetachmentPoint_10.getString());
  FIX::EncodedIssuer EncodedIssuer_10("DATA_2127103202");
  msg.set(EncodedIssuer_10);
  Instrument_10.insert(EncodedIssuer_10.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_10(1968428374);
  msg.set(EncodedIssuerLen_10);
  Instrument_10.insert(EncodedIssuerLen_10.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_10("DATA_447073593");
  msg.set(EncodedSecurityDesc_10);
  Instrument_10.insert(EncodedSecurityDesc_10.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_10(1106070732);
  msg.set(EncodedSecurityDescLen_10);
  Instrument_10.insert(EncodedSecurityDescLen_10.getString());
  FIX::ExerciseStyle ExerciseStyle_10(1);
  msg.set(ExerciseStyle_10);
  Instrument_10.insert(ExerciseStyle_10.getString());
  FIX::Factor Factor_10;
  Factor_10.setString("6271256");
  msg.set(Factor_10);
  Instrument_10.insert(Factor_10.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_10(false);
  msg.set(FlexProductEligibilityIndicator_10);
  Instrument_10.insert(FlexProductEligibilityIndicator_10.getString());
  FIX::FlexibleIndicator FlexibleIndicator_10(false);
  msg.set(FlexibleIndicator_10);
  Instrument_10.insert(FlexibleIndicator_10.getString());
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("20082920");
  msg.set(FloorPrice_10);
  Instrument_10.insert(FloorPrice_10.getString());
  FIX::FlowScheduleType FlowScheduleType_10(4);
  msg.set(FlowScheduleType_10);
  Instrument_10.insert(FlowScheduleType_10.getString());
  FIX::InstrRegistry InstrRegistry_10("STRING_1699780263");
  msg.set(InstrRegistry_10);
  Instrument_10.insert(InstrRegistry_10.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_10('9');
  msg.set(InstrmtAssignmentMethod_10);
  Instrument_10.insert(InstrmtAssignmentMethod_10.getString());
  FIX::InterestAccrualDate InterestAccrualDate_10("LOCALMKTDATE_174897493");
  msg.set(InterestAccrualDate_10);
  Instrument_10.insert(InterestAccrualDate_10.getString());
  FIX::IssueDate IssueDate_10("LOCALMKTDATE_946699396");
  msg.set(IssueDate_10);
  Instrument_10.insert(IssueDate_10.getString());
  FIX::Issuer Issuer_10("STRING_1105446031");
  msg.set(Issuer_10);
  Instrument_10.insert(Issuer_10.getString());
  FIX::ListMethod ListMethod_10(0);
  msg.set(ListMethod_10);
  Instrument_10.insert(ListMethod_10.getString());
  FIX::LocaleOfIssue LocaleOfIssue_10("STRING_1750278501");
  msg.set(LocaleOfIssue_10);
  Instrument_10.insert(LocaleOfIssue_10.getString());
  FIX::MaturityDate MaturityDate_10("LOCALMKTDATE_1754944869");
  msg.set(MaturityDate_10);
  Instrument_10.insert(MaturityDate_10.getString());
  FIX::MaturityMonthYear MaturityMonthYear_10("MONTHYEAR_447039340");
  msg.set(MaturityMonthYear_10);
  Instrument_10.insert(MaturityMonthYear_10.getString());
  FIX::MaturityTime MaturityTime_10("TZTIMEONLY_1611233983");
  msg.set(MaturityTime_10);
  Instrument_10.insert(MaturityTime_10.getString());
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("11045409");
  msg.set(MinPriceIncrement_10);
  Instrument_10.insert(MinPriceIncrement_10.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("12649600");
  msg.set(MinPriceIncrementAmount_10);
  Instrument_10.insert(MinPriceIncrementAmount_10.getString());
  FIX::NTPositionLimit NTPositionLimit_10(1652136947);
  msg.set(NTPositionLimit_10);
  Instrument_10.insert(NTPositionLimit_10.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("63.080000");
  msg.set(NotionalPercentageOutstanding_10);
  Instrument_10.insert(NotionalPercentageOutstanding_10.getString());
  FIX::OptAttribute OptAttribute_10('1');
  msg.set(OptAttribute_10);
  Instrument_10.insert(OptAttribute_10.getString());
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("12893556");
  msg.set(OptPayoutAmount_10);
  Instrument_10.insert(OptPayoutAmount_10.getString());
  FIX::OptPayoutType OptPayoutType_10(3);
  msg.set(OptPayoutType_10);
  Instrument_10.insert(OptPayoutType_10.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("79.300000");
  msg.set(OriginalNotionalPercentageOutstanding_10);
  Instrument_10.insert(OriginalNotionalPercentageOutstanding_10.getString());
  FIX::Pool Pool_10("STRING_305641951");
  msg.set(Pool_10);
  Instrument_10.insert(Pool_10.getString());
  FIX::PositionLimit PositionLimit_10(1156089376);
  msg.set(PositionLimit_10);
  Instrument_10.insert(PositionLimit_10.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_10("STRING_INX");
  msg.set(PriceQuoteMethod_10);
  Instrument_10.insert(PriceQuoteMethod_10.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_10("STRING_285261506");
  msg.set(PriceUnitOfMeasure_10);
  Instrument_10.insert(PriceUnitOfMeasure_10.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("9770341");
  msg.set(PriceUnitOfMeasureQty_10);
  Instrument_10.insert(PriceUnitOfMeasureQty_10.getString());
  FIX::Product Product_12(11);
  msg.set(Product_12);
  Instrument_10.insert(Product_12.getString());
  FIX::ProductComplex ProductComplex_10("STRING_1391332238");
  msg.set(ProductComplex_10);
  Instrument_10.insert(ProductComplex_10.getString());
  FIX::PutOrCall PutOrCall_10(0);
  msg.set(PutOrCall_10);
  Instrument_10.insert(PutOrCall_10.getString());
  FIX::RedemptionDate RedemptionDate_10("LOCALMKTDATE_544276903");
  msg.set(RedemptionDate_10);
  Instrument_10.insert(RedemptionDate_10.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_10("STRING_530679858");
  msg.set(RepoCollateralSecurityType_10);
  Instrument_10.insert(RepoCollateralSecurityType_10.getString());
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("36.450000");
  msg.set(RepurchaseRate_10);
  Instrument_10.insert(RepurchaseRate_10.getString());
  FIX::RepurchaseTerm RepurchaseTerm_10(405085270);
  msg.set(RepurchaseTerm_10);
  Instrument_10.insert(RepurchaseTerm_10.getString());
  FIX::RestructuringType RestructuringType_10("STRING_MR");
  msg.set(RestructuringType_10);
  Instrument_10.insert(RestructuringType_10.getString());
  FIX::SecurityDesc SecurityDesc_10("STRING_301170260");
  msg.set(SecurityDesc_10);
  Instrument_10.insert(SecurityDesc_10.getString());
  FIX::SecurityExchange SecurityExchange_10("EXCHANGE_495375266");
  msg.set(SecurityExchange_10);
  Instrument_10.insert(SecurityExchange_10.getString());
  FIX::SecurityGroup SecurityGroup_10("STRING_1433379751");
  msg.set(SecurityGroup_10);
  Instrument_10.insert(SecurityGroup_10.getString());
  FIX::SecurityID SecurityID_10("STRING_1247869656");
  msg.set(SecurityID_10);
  Instrument_10.insert(SecurityID_10.getString());
  FIX::SecurityIDSource SecurityIDSource_10("STRING_A");
  msg.set(SecurityIDSource_10);
  Instrument_10.insert(SecurityIDSource_10.getString());
  FIX::SecurityStatus SecurityStatus_10("STRING_2");
  msg.set(SecurityStatus_10);
  Instrument_10.insert(SecurityStatus_10.getString());
  FIX::SecuritySubType SecuritySubType_10("STRING_850664509");
  msg.set(SecuritySubType_10);
  Instrument_10.insert(SecuritySubType_10.getString());
  FIX::SecurityType SecurityType_12("STRING_TCAL");
  msg.set(SecurityType_12);
  Instrument_10.insert(SecurityType_12.getString());
  FIX::Seniority Seniority_10("STRING_SR");
  msg.set(Seniority_10);
  Instrument_10.insert(Seniority_10.getString());
  FIX::SettlMethod SettlMethod_10('C');
  msg.set(SettlMethod_10);
  Instrument_10.insert(SettlMethod_10.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_10("STRING_165339866");
  msg.set(SettleOnOpenFlag_10);
  Instrument_10.insert(SettleOnOpenFlag_10.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_10("STRING_660946947");
  msg.set(StateOrProvinceOfIssue_10);
  Instrument_10.insert(StateOrProvinceOfIssue_10.getString());
  FIX::StrikeCurrency StrikeCurrency_10("USD");
  msg.set(StrikeCurrency_10);
  Instrument_10.insert(StrikeCurrency_10.getString());
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("3387087");
  msg.set(StrikeMultiplier_10);
  Instrument_10.insert(StrikeMultiplier_10.getString());
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("11084238");
  msg.set(StrikePrice_10);
  Instrument_10.insert(StrikePrice_10.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_10(1);
  msg.set(StrikePriceBoundaryMethod_10);
  Instrument_10.insert(StrikePriceBoundaryMethod_10.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("66.640000");
  msg.set(StrikePriceBoundaryPrecision_10);
  Instrument_10.insert(StrikePriceBoundaryPrecision_10.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_10(3);
  msg.set(StrikePriceDeterminationMethod_10);
  Instrument_10.insert(StrikePriceDeterminationMethod_10.getString());
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("19984126");
  msg.set(StrikeValue_10);
  Instrument_10.insert(StrikeValue_10.getString());
  FIX::Symbol Symbol_10("STRING_2069497965");
  msg.set(Symbol_10);
  Instrument_10.insert(Symbol_10.getString());
  FIX::SymbolSfx SymbolSfx_10("STRING_CD");
  msg.set(SymbolSfx_10);
  Instrument_10.insert(SymbolSfx_10.getString());
  FIX::TimeUnit TimeUnit_10("STRING_Mo");
  msg.set(TimeUnit_10);
  Instrument_10.insert(TimeUnit_10.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_10(1);
  msg.set(UnderlyingPriceDeterminationMethod_10);
  Instrument_10.insert(UnderlyingPriceDeterminationMethod_10.getString());
  FIX::UnitOfMeasure UnitOfMeasure_10("STRING_Bbl");
  msg.set(UnitOfMeasure_10);
  Instrument_10.insert(UnitOfMeasure_10.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("10847109");
  msg.set(UnitOfMeasureQty_10);
  Instrument_10.insert(UnitOfMeasureQty_10.getString());
  FIX::ValuationMethod ValuationMethod_10("STRING_FUTDA");
  msg.set(ValuationMethod_10);
  Instrument_10.insert(ValuationMethod_10.getString());
  all_values.push_back(Instrument_10);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    FIX::ComplexEventCondition ComplexEventCondition_25(2);
    noComplexEvents_0_0.set(ComplexEventCondition_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventCondition_25.getString());
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("7885277");
    noComplexEvents_0_0.set(ComplexEventPrice_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPrice_25.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_25(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryMethod_25.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("48.290000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryPrecision_25.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_25(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceTimeType_25.getString());
    FIX::ComplexEventType ComplexEventType_25(6);
    noComplexEvents_0_0.set(ComplexEventType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventType_25.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("12351408");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexOptPayoutAmount_25.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_25);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      FIX::ComplexEventEndDate ComplexEventEndDate_55(FIX::UTCTIMESTAMP(2, 11, 28, 3, 2, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventEndDate_55.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_55(FIX::UTCTIMESTAMP(11, 30, 13, 18, 3, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventStartDate_55.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        FIX::ComplexEventEndTime ComplexEventEndTime_112(FIX::UTCTIMEONLY(15, 0, 55));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventEndTime_112.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_112(FIX::UTCTIMEONLY(0, 42, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventStartTime_112.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        FIX::ComplexEventEndTime ComplexEventEndTime_113(FIX::UTCTIMEONLY(19, 40, 6));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventEndTime_113.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_113(FIX::UTCTIMEONLY(1, 35, 59));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventStartTime_113.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        FIX::ComplexEventEndTime ComplexEventEndTime_114(FIX::UTCTIMEONLY(13, 2, 44));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventEndTime_114.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_114(FIX::UTCTIMEONLY(19, 32, 23));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventStartTime_114.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_20;
    FIX::EventDate EventDate_20("LOCALMKTDATE_146129514");
    noEvents_0_0.set(EventDate_20);
    EvntGrp_NoEvents_20.insert(EventDate_20.getString());
    FIX::EventPx EventPx_20;
    EventPx_20.setString("14858989");
    noEvents_0_0.set(EventPx_20);
    EvntGrp_NoEvents_20.insert(EventPx_20.getString());
    FIX::EventText EventText_20("STRING_577016964");
    noEvents_0_0.set(EventText_20);
    EvntGrp_NoEvents_20.insert(EventText_20.getString());
    FIX::EventTime EventTime_20(FIX::UTCTIMESTAMP(15, 26, 51, 10, 7, 2003));
    noEvents_0_0.set(EventTime_20);
    EvntGrp_NoEvents_20.insert(EventTime_20.getString());
    FIX::EventType EventType_20(4);
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
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    FIX::InstrumentPartyID InstrumentPartyID_16("STRING_790538533");
    noInstrumentParties_0_0.set(InstrumentPartyID_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyID_16.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_16('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyIDSource_16.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_16(245362179);
    noInstrumentParties_0_0.set(InstrumentPartyRole_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyRole_16.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      FIX::InstrumentPartySubID InstrumentPartySubID_38("STRING_1846969201");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubID_38.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_38(1200512505);
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
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    FIX::SecurityAltID SecurityAltID_21("STRING_423292578");
    noSecurityAltID_0_0.set(SecurityAltID_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltID_21.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_21("STRING_1243320020");
    noSecurityAltID_0_0.set(SecurityAltIDSource_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltIDSource_21.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    FIX::SecurityAltID SecurityAltID_22("STRING_1601899770");
    noSecurityAltID_0_1.set(SecurityAltID_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltID_22.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_22("STRING_2114281234");
    noSecurityAltID_0_1.set(SecurityAltIDSource_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltIDSource_22.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  FIX::SecurityXML SecurityXML_21("XMLDATA_1224449234");
  msg.set(SecurityXML_21);
  FIX::SecurityXMLLen SecurityXMLLen_10(1874026592);
  msg.set(SecurityXMLLen_10);
  FIX::SecurityXMLSchema SecurityXMLSchema_10("STRING_2020954750");
  msg.set(SecurityXMLSchema_10);
  SecurityXML_20.insert(SecurityXMLSchema_10.getString());
  all_values.push_back(SecurityXML_20);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_12;
    FIX::MiscFeeAmt MiscFeeAmt_12;
    MiscFeeAmt_12.setString("21095328");
    noMiscFees_0_0.set(MiscFeeAmt_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeAmt_12.getString());
    FIX::MiscFeeBasis MiscFeeBasis_12(1);
    noMiscFees_0_0.set(MiscFeeBasis_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeBasis_12.getString());
    FIX::MiscFeeCurr MiscFeeCurr_12("EUR");
    noMiscFees_0_0.set(MiscFeeCurr_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeCurr_12.getString());
    FIX::MiscFeeType MiscFeeType_12("STRING_9");
    noMiscFees_0_0.set(MiscFeeType_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeType_12.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_12);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_13;
    FIX::MiscFeeAmt MiscFeeAmt_13;
    MiscFeeAmt_13.setString("11024007");
    noMiscFees_0_1.set(MiscFeeAmt_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeAmt_13.getString());
    FIX::MiscFeeBasis MiscFeeBasis_13(2);
    noMiscFees_0_1.set(MiscFeeBasis_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeBasis_13.getString());
    FIX::MiscFeeCurr MiscFeeCurr_13("USD");
    noMiscFees_0_1.set(MiscFeeCurr_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeCurr_13.getString());
    FIX::MiscFeeType MiscFeeType_13("STRING_7");
    noMiscFees_0_1.set(MiscFeeType_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeType_13.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_13);

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_14;
    FIX::MiscFeeAmt MiscFeeAmt_14;
    MiscFeeAmt_14.setString("1664945");
    noMiscFees_0_2.set(MiscFeeAmt_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeAmt_14.getString());
    FIX::MiscFeeBasis MiscFeeBasis_14(2);
    noMiscFees_0_2.set(MiscFeeBasis_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeBasis_14.getString());
    FIX::MiscFeeCurr MiscFeeCurr_14("GBP");
    noMiscFees_0_2.set(MiscFeeCurr_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeCurr_14.getString());
    FIX::MiscFeeType MiscFeeType_14("STRING_3");
    noMiscFees_0_2.set(MiscFeeType_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeType_14.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_14);

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    FIX::PartyID PartyID_27("STRING_1935672064");
    noPartyIDs_0_0.set(PartyID_27);
    Parties_NoPartyIDs_27.insert(PartyID_27.getString());
    FIX::PartyIDSource PartyIDSource_27('3');
    noPartyIDs_0_0.set(PartyIDSource_27);
    Parties_NoPartyIDs_27.insert(PartyIDSource_27.getString());
    FIX::PartyRole PartyRole_27(55);
    noPartyIDs_0_0.set(PartyRole_27);
    Parties_NoPartyIDs_27.insert(PartyRole_27.getString());
    all_values.push_back(Parties_NoPartyIDs_27);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      FIX::PartySubID PartySubID_54("STRING_2090615481");
      noPartySubIDs_0_1_0.set(PartySubID_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubID_54.getString());
      FIX::PartySubIDType PartySubIDType_54(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_54);
      PtysSubGrp_NoPartySubIDs_54.insert(PartySubIDType_54.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      FIX::PartySubID PartySubID_55("STRING_159483064");
      noPartySubIDs_0_1_1.set(PartySubID_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubID_55.getString());
      FIX::PartySubIDType PartySubIDType_55(2);
      noPartySubIDs_0_1_1.set(PartySubIDType_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubIDType_55.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      FIX::PartySubID PartySubID_56("STRING_1506411603");
      noPartySubIDs_0_1_2.set(PartySubID_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubID_56.getString());
      FIX::PartySubIDType PartySubIDType_56(15);
      noPartySubIDs_0_1_2.set(PartySubIDType_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubIDType_56.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    FIX::PartyID PartyID_28("STRING_333221997");
    noPartyIDs_0_1.set(PartyID_28);
    Parties_NoPartyIDs_28.insert(PartyID_28.getString());
    FIX::PartyIDSource PartyIDSource_28('F');
    noPartyIDs_0_1.set(PartyIDSource_28);
    Parties_NoPartyIDs_28.insert(PartyIDSource_28.getString());
    FIX::PartyRole PartyRole_28(12);
    noPartyIDs_0_1.set(PartyRole_28);
    Parties_NoPartyIDs_28.insert(PartyRole_28.getString());
    all_values.push_back(Parties_NoPartyIDs_28);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      FIX::PartySubID PartySubID_57("STRING_2041692179");
      noPartySubIDs_1_1_0.set(PartySubID_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubID_57.getString());
      FIX::PartySubIDType PartySubIDType_57(14);
      noPartySubIDs_1_1_0.set(PartySubIDType_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubIDType_57.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      FIX::PartySubID PartySubID_58("STRING_1010953173");
      noPartySubIDs_1_1_1.set(PartySubID_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubID_58.getString());
      FIX::PartySubIDType PartySubIDType_58(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubIDType_58.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      FIX::PartySubID PartySubID_59("STRING_323382216");
      noPartySubIDs_1_1_2.set(PartySubID_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubID_59.getString());
      FIX::PartySubIDType PartySubIDType_59(5);
      noPartySubIDs_1_1_2.set(PartySubIDType_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubIDType_59.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_7;
  FIX::SettlDeliveryType SettlDeliveryType_7(2);
  msg.set(SettlDeliveryType_7);
  SettlInstructionsData_7.insert(SettlDeliveryType_7.getString());
  FIX::StandInstDbID StandInstDbID_7("STRING_1921290110");
  msg.set(StandInstDbID_7);
  SettlInstructionsData_7.insert(StandInstDbID_7.getString());
  FIX::StandInstDbName StandInstDbName_7("STRING_577655421");
  msg.set(StandInstDbName_7);
  SettlInstructionsData_7.insert(StandInstDbName_7.getString());
  FIX::StandInstDbType StandInstDbType_7(1);
  msg.set(StandInstDbType_7);
  SettlInstructionsData_7.insert(StandInstDbType_7.getString());
  all_values.push_back(SettlInstructionsData_7);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralReport::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_13;
    FIX::DlvyInstType DlvyInstType_13('S');
    noDlvyInst_0_0.set(DlvyInstType_13);
    DlvyInstGrp_NoDlvyInst_13.insert(DlvyInstType_13.getString());
    FIX::SettlInstSource SettlInstSource_13('1');
    noDlvyInst_0_0.set(SettlInstSource_13);
    DlvyInstGrp_NoDlvyInst_13.insert(SettlInstSource_13.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_13);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_30;
      FIX::SettlPartyID SettlPartyID_30("STRING_1889283503");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyID_30.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_30('1');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyIDSource_30.getString());
      FIX::SettlPartyRole SettlPartyRole_30(1822269923);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_30);
      SettlParties_NoSettlPartyIDs_30.insert(SettlPartyRole_30.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_30);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
        FIX::SettlPartySubID SettlPartySubID_69("STRING_1665624611");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_69);
        SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubID_69.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_69(884849000);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_69);
        SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubIDType_69.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
        FIX::SettlPartySubID SettlPartySubID_70("STRING_709142512");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_70);
        SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubID_70.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_70(1608756444);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_70);
        SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubIDType_70.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_31;
      FIX::SettlPartyID SettlPartyID_31("STRING_1147940583");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyID_31.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_31('8');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyIDSource_31.getString());
      FIX::SettlPartyRole SettlPartyRole_31(1975180855);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyRole_31.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_31);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
        FIX::SettlPartySubID SettlPartySubID_71("STRING_482524764");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_71);
        SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubID_71.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_71(160919205);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_71);
        SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubIDType_71.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
        FIX::SettlPartySubID SettlPartySubID_72("STRING_1090245727");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_72);
        SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubID_72.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_72(1970450543);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_72);
        SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubIDType_72.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
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
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_5("STRING_1378565478");
  msg.set(BenchmarkCurvePoint_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkCurvePoint_5.getString());
  FIX::BenchmarkPrice BenchmarkPrice_5;
  BenchmarkPrice_5.setString("4951645");
  msg.set(BenchmarkPrice_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPrice_5.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_5(1596324047);
  msg.set(BenchmarkPriceType_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkPriceType_5.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_5("STRING_1192424591");
  msg.set(BenchmarkSecurityID_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityID_5.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_5("STRING_1108275634");
  msg.set(BenchmarkSecurityIDSource_5);
  SpreadOrBenchmarkCurveData_5.insert(BenchmarkSecurityIDSource_5.getString());
  FIX::Spread Spread_5;
  Spread_5.setString("13701305");
  msg.set(Spread_5);
  SpreadOrBenchmarkCurveData_5.insert(Spread_5.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_5);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    FIX::StipulationType StipulationType_10("STRING_REFINT");
    noStipulations_0_0.set(StipulationType_10);
    Stipulations_NoStipulations_10.insert(StipulationType_10.getString());
    FIX::StipulationValue StipulationValue_10("STRING_540482376");
    noStipulations_0_0.set(StipulationValue_10);
    Stipulations_NoStipulations_10.insert(StipulationValue_10.getString());
    all_values.push_back(Stipulations_NoStipulations_10);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_5("STRING_486290762");
    noTrades_0_0.set(SecondaryTradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(SecondaryTradeReportID_5.getString());
    FIX::TradeReportID TradeReportID_5("STRING_1398051754");
    noTrades_0_0.set(TradeReportID_5);
    TrdCollGrp_NoTrades_5.insert(TradeReportID_5.getString());
    all_values.push_back(TrdCollGrp_NoTrades_5);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_6("STRING_108546193");
    noTrades_0_1.set(SecondaryTradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(SecondaryTradeReportID_6.getString());
    FIX::TradeReportID TradeReportID_6("STRING_1908269094");
    noTrades_0_1.set(TradeReportID_6);
    TrdCollGrp_NoTrades_6.insert(TradeReportID_6.getString());
    all_values.push_back(TrdCollGrp_NoTrades_6);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_4("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskOrderHandlingInst_4.getString());
    FIX::DeskType DeskType_4("STRING_PF");
    noTrdRegTimestamps_0_0.set(DeskType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskType_4.getString());
    FIX::DeskTypeSource DeskTypeSource_4(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(DeskTypeSource_4.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_4(FIX::UTCTIMESTAMP(13, 5, 14, 24, 4, 2008));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestamp_4.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_4("STRING_876299265");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampOrigin_4.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_4(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_4);
    TrdRegTimestamps_NoTrdRegTimestamps_4.insert(TrdRegTimestampType_4.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_5("MULTIPLESTRINGVALUE_IO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskOrderHandlingInst_5.getString());
    FIX::DeskType DeskType_5("STRING_A");
    noTrdRegTimestamps_0_1.set(DeskType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskType_5.getString());
    FIX::DeskTypeSource DeskTypeSource_5(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(DeskTypeSource_5.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_5(FIX::UTCTIMESTAMP(16, 56, 35, 15, 11, 2005));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestamp_5.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_5("STRING_1290014356");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampOrigin_5.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_5(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_5);
    TrdRegTimestamps_NoTrdRegTimestamps_5.insert(TrdRegTimestampType_5.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_5);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_6("MULTIPLESTRINGVALUE_PEG");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskOrderHandlingInst_6.getString());
    FIX::DeskType DeskType_6("STRING_PF");
    noTrdRegTimestamps_0_2.set(DeskType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskType_6.getString());
    FIX::DeskTypeSource DeskTypeSource_6(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskTypeSource_6.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_6(FIX::UTCTIMESTAMP(16, 28, 50, 5, 6, 2000));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestamp_6.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_6("STRING_1751518330");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampOrigin_6.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_6(2);
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
    multiset<string> UnderlyingInstrument_17;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_17("DATA_820337237");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuer_17.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_17(291297022);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuerLen_17.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_17("DATA_268504373");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDesc_17.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_17(371680907);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDescLen_17.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("11675962");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_17);
    UnderlyingInstrument_17.insert(UnderlyingAdjustedQuantity_17.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("89.560000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_17);
    UnderlyingInstrument_17.insert(UnderlyingAllocationPercent_17.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("51.210000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingAttachmentPoint_17.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_17("STRING_264024210");
    noUnderlyings_0_0.set(UnderlyingCFICode_17);
    UnderlyingInstrument_17.insert(UnderlyingCFICode_17.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_17("STRING_2068507797");
    noUnderlyings_0_0.set(UnderlyingCPProgram_17);
    UnderlyingInstrument_17.insert(UnderlyingCPProgram_17.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_17("STRING_393243870");
    noUnderlyings_0_0.set(UnderlyingCPRegType_17);
    UnderlyingInstrument_17.insert(UnderlyingCPRegType_17.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("7390176");
    noUnderlyings_0_0.set(UnderlyingCapValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCapValue_17.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("18084175");
    noUnderlyings_0_0.set(UnderlyingCashAmount_17);
    UnderlyingInstrument_17.insert(UnderlyingCashAmount_17.getString());
    FIX::UnderlyingCashType UnderlyingCashType_17("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_17);
    UnderlyingInstrument_17.insert(UnderlyingCashType_17.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("2589519");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplier_17.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_17(509119320);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplierUnit_17.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_17("COUNTRY_1955559970");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingCountryOfIssue_17.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_17("LOCALMKTDATE_1548966310");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponPaymentDate_17.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("44.590000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponRate_17.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_17("STRING_1814782004");
    noUnderlyings_0_0.set(UnderlyingCreditRating_17);
    UnderlyingInstrument_17.insert(UnderlyingCreditRating_17.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_17("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrency_17.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("9245721");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrentValue_17.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("65.960000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingDetachmentPoint_17.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("8766644");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingDirtyPrice_17.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("11072003");
    noUnderlyings_0_0.set(UnderlyingEndPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingEndPrice_17.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("20799079");
    noUnderlyings_0_0.set(UnderlyingEndValue_17);
    UnderlyingInstrument_17.insert(UnderlyingEndValue_17.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_17(1712382170);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_17);
    UnderlyingInstrument_17.insert(UnderlyingExerciseStyle_17.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("11000318");
    noUnderlyings_0_0.set(UnderlyingFXRate_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRate_17.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_17('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRateCalc_17.getString());
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("12882991");
    noUnderlyings_0_0.set(UnderlyingFactor_17);
    UnderlyingInstrument_17.insert(UnderlyingFactor_17.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_17(2051007384);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_17);
    UnderlyingInstrument_17.insert(UnderlyingFlowScheduleType_17.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_17("STRING_356796221");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_17);
    UnderlyingInstrument_17.insert(UnderlyingInstrRegistry_17.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_17("LOCALMKTDATE_1579596155");
    noUnderlyings_0_0.set(UnderlyingIssueDate_17);
    UnderlyingInstrument_17.insert(UnderlyingIssueDate_17.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_17("STRING_172028110");
    noUnderlyings_0_0.set(UnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(UnderlyingIssuer_17.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_17("STRING_728477128");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingLocaleOfIssue_17.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_17("LOCALMKTDATE_599708795");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityDate_17.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_17("MONTHYEAR_848307066");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityMonthYear_17.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_17("TZTIMEONLY_474468602");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityTime_17.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("30.050000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_17('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_17);
    UnderlyingInstrument_17.insert(UnderlyingOptAttribute_17.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("24.720000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingOriginalNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_17("STRING_1602750615");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasure_17.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("4302651");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasureQty_17.getString());
    FIX::UnderlyingProduct UnderlyingProduct_17(1357049137);
    noUnderlyings_0_0.set(UnderlyingProduct_17);
    UnderlyingInstrument_17.insert(UnderlyingProduct_17.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_17(1861702568);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_17);
    UnderlyingInstrument_17.insert(UnderlyingPutOrCall_17.getString());
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("9393844");
    noUnderlyings_0_0.set(UnderlyingPx_17);
    UnderlyingInstrument_17.insert(UnderlyingPx_17.getString());
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("11651254");
    noUnderlyings_0_0.set(UnderlyingQty_17);
    UnderlyingInstrument_17.insert(UnderlyingQty_17.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_17("LOCALMKTDATE_1263185230");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_17);
    UnderlyingInstrument_17.insert(UnderlyingRedemptionDate_17.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_17("STRING_610735264");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingRepoCollateralSecurityType_17.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("38.160000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseRate_17.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_17(173944939);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseTerm_17.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_17("STRING_2078091977");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_17);
    UnderlyingInstrument_17.insert(UnderlyingRestructuringType_17.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_17("STRING_1756995960");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityDesc_17.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_17("EXCHANGE_850011535");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityExchange_17.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_17("STRING_807272743");
    noUnderlyings_0_0.set(UnderlyingSecurityID_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityID_17.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_17("STRING_716712626");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityIDSource_17.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_17("STRING_782435837");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecuritySubType_17.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_17("STRING_372171265");
    noUnderlyings_0_0.set(UnderlyingSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityType_17.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_17("STRING_1816744492");
    noUnderlyings_0_0.set(UnderlyingSeniority_17);
    UnderlyingInstrument_17.insert(UnderlyingSeniority_17.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_17("STRING_318894821");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlMethod_17.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_17(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlementType_17.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("17202682");
    noUnderlyings_0_0.set(UnderlyingStartValue_17);
    UnderlyingInstrument_17.insert(UnderlyingStartValue_17.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_17("STRING_675691042");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingStateOrProvinceOfIssue_17.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_17("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikeCurrency_17.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("14041681");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikePrice_17.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_17("STRING_1692291700");
    noUnderlyings_0_0.set(UnderlyingSymbol_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbol_17.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_17("STRING_593119757");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbolSfx_17.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_17("STRING_1878636772");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingTimeUnit_17.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_17("STRING_408541057");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasure_17.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("13624509");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasureQty_17.getString());
    all_values.push_back(UnderlyingInstrument_17);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_37("STRING_2011291672");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltID_37.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_37("STRING_1792716104");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_37);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_37.insert(UnderlyingSecurityAltIDSource_37.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_38("STRING_1955914734");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltID_38.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_38("STRING_1725510592");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltIDSource_38.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      FIX::UnderlyingStipType UnderlyingStipType_33("STRING_973556546");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipType_33.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_33("STRING_841212175");
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
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_33("STRING_1805980362");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyID_33.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_33('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyIDSource_33.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_33(1125960502);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyRole_33.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_72("STRING_1865168649");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubID_72.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_72(1933233245);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubIDType_72.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_73("STRING_2132205300");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubID_73.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_73(500120838);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubIDType_73.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_34("STRING_157920863");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyID_34.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_34('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyIDSource_34.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_34(819015659);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyRole_34.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_74("STRING_1374250725");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubID_74.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_74(1494706701);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubIDType_74.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_75("STRING_763490518");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubID_75.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_75(1119063416);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubIDType_75.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_18;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_18("DATA_751391224");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuer_18.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_18(308298570);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuerLen_18.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_18("DATA_1712183173");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDesc_18.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_18(482544348);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDescLen_18.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("7168396");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_18);
    UnderlyingInstrument_18.insert(UnderlyingAdjustedQuantity_18.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("4.970000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_18);
    UnderlyingInstrument_18.insert(UnderlyingAllocationPercent_18.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("99.450000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingAttachmentPoint_18.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_18("STRING_580647651");
    noUnderlyings_0_1.set(UnderlyingCFICode_18);
    UnderlyingInstrument_18.insert(UnderlyingCFICode_18.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_18("STRING_572382954");
    noUnderlyings_0_1.set(UnderlyingCPProgram_18);
    UnderlyingInstrument_18.insert(UnderlyingCPProgram_18.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_18("STRING_889841031");
    noUnderlyings_0_1.set(UnderlyingCPRegType_18);
    UnderlyingInstrument_18.insert(UnderlyingCPRegType_18.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("1586745");
    noUnderlyings_0_1.set(UnderlyingCapValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCapValue_18.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("11569998");
    noUnderlyings_0_1.set(UnderlyingCashAmount_18);
    UnderlyingInstrument_18.insert(UnderlyingCashAmount_18.getString());
    FIX::UnderlyingCashType UnderlyingCashType_18("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_18);
    UnderlyingInstrument_18.insert(UnderlyingCashType_18.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("9998867");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplier_18.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_18(204868388);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplierUnit_18.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_18("COUNTRY_1521894291");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingCountryOfIssue_18.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_18("LOCALMKTDATE_2015043884");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponPaymentDate_18.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("88.900000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponRate_18.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_18("STRING_789903317");
    noUnderlyings_0_1.set(UnderlyingCreditRating_18);
    UnderlyingInstrument_18.insert(UnderlyingCreditRating_18.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_18("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrency_18.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("7746249");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrentValue_18.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("60.760000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingDetachmentPoint_18.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("12744993");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingDirtyPrice_18.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("4286074");
    noUnderlyings_0_1.set(UnderlyingEndPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingEndPrice_18.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("9043817");
    noUnderlyings_0_1.set(UnderlyingEndValue_18);
    UnderlyingInstrument_18.insert(UnderlyingEndValue_18.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_18(945406964);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_18);
    UnderlyingInstrument_18.insert(UnderlyingExerciseStyle_18.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("18028581");
    noUnderlyings_0_1.set(UnderlyingFXRate_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRate_18.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_18('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRateCalc_18.getString());
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("17088974");
    noUnderlyings_0_1.set(UnderlyingFactor_18);
    UnderlyingInstrument_18.insert(UnderlyingFactor_18.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_18(774437959);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_18);
    UnderlyingInstrument_18.insert(UnderlyingFlowScheduleType_18.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_18("STRING_1002996013");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_18);
    UnderlyingInstrument_18.insert(UnderlyingInstrRegistry_18.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_18("LOCALMKTDATE_2017196052");
    noUnderlyings_0_1.set(UnderlyingIssueDate_18);
    UnderlyingInstrument_18.insert(UnderlyingIssueDate_18.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_18("STRING_339137485");
    noUnderlyings_0_1.set(UnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(UnderlyingIssuer_18.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_18("STRING_1485540362");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingLocaleOfIssue_18.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_18("LOCALMKTDATE_586552031");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityDate_18.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_18("MONTHYEAR_1266287982");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityMonthYear_18.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_18("TZTIMEONLY_419466659");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityTime_18.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("96.820000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_18('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_18);
    UnderlyingInstrument_18.insert(UnderlyingOptAttribute_18.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("76.900000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingOriginalNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_18("STRING_1325874277");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasure_18.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("8481871");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasureQty_18.getString());
    FIX::UnderlyingProduct UnderlyingProduct_18(1025221619);
    noUnderlyings_0_1.set(UnderlyingProduct_18);
    UnderlyingInstrument_18.insert(UnderlyingProduct_18.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_18(178277400);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_18);
    UnderlyingInstrument_18.insert(UnderlyingPutOrCall_18.getString());
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("10530555");
    noUnderlyings_0_1.set(UnderlyingPx_18);
    UnderlyingInstrument_18.insert(UnderlyingPx_18.getString());
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("3996322");
    noUnderlyings_0_1.set(UnderlyingQty_18);
    UnderlyingInstrument_18.insert(UnderlyingQty_18.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_18("LOCALMKTDATE_45837636");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_18);
    UnderlyingInstrument_18.insert(UnderlyingRedemptionDate_18.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_18("STRING_236400782");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingRepoCollateralSecurityType_18.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("55.790000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseRate_18.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_18(1778566522);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseTerm_18.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_18("STRING_1352979270");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_18);
    UnderlyingInstrument_18.insert(UnderlyingRestructuringType_18.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_18("STRING_1964160548");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityDesc_18.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_18("EXCHANGE_1863932599");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityExchange_18.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_18("STRING_479994973");
    noUnderlyings_0_1.set(UnderlyingSecurityID_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityID_18.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_18("STRING_245284365");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityIDSource_18.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_18("STRING_620830687");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecuritySubType_18.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_18("STRING_1425401937");
    noUnderlyings_0_1.set(UnderlyingSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityType_18.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_18("STRING_2048142556");
    noUnderlyings_0_1.set(UnderlyingSeniority_18);
    UnderlyingInstrument_18.insert(UnderlyingSeniority_18.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_18("STRING_872435476");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlMethod_18.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_18(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlementType_18.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("6750968");
    noUnderlyings_0_1.set(UnderlyingStartValue_18);
    UnderlyingInstrument_18.insert(UnderlyingStartValue_18.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_18("STRING_1875431490");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingStateOrProvinceOfIssue_18.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_18("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikeCurrency_18.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("12134882");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikePrice_18.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_18("STRING_1443080206");
    noUnderlyings_0_1.set(UnderlyingSymbol_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbol_18.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_18("STRING_133038687");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbolSfx_18.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_18("STRING_1632954863");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingTimeUnit_18.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_18("STRING_462796240");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasure_18.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("19717096");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasureQty_18.getString());
    all_values.push_back(UnderlyingInstrument_18);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_39("STRING_1788670517");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltID_39.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_39("STRING_672413127");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltIDSource_39.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_40("STRING_1820000524");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltID_40.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_40("STRING_1966947917");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltIDSource_40.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_41("STRING_1725468667");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltID_41.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_41("STRING_72149138");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltIDSource_41.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      FIX::UnderlyingStipType UnderlyingStipType_34("STRING_1961869449");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipType_34.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_34("STRING_1261684717");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipValue_34.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_35("STRING_1167365071");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyID_35.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_35('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyIDSource_35.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_35(1360317379);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyRole_35.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_76("STRING_1323645982");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubID_76.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_76(1981148066);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubIDType_76.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_77("STRING_925278333");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubID_77.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_77(1224304891);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubIDType_77.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_78("STRING_706099895");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubID_78.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_78(1912094104);
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
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_36("STRING_1899401759");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyID_36.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_36('4');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyIDSource_36.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_36(621138631);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyRole_36.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_79("STRING_1647535941");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubID_79.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_79(2064218837);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubIDType_79.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_80("STRING_899191151");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubID_80.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_80(1133007156);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubIDType_80.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_81("STRING_379531429");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubID_81.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_81(723417127);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubIDType_81.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_37("STRING_1927786061");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyID_37.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_37('2');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyIDSource_37.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_37(1395830255);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyRole_37.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_82("STRING_1987666216");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubID_82.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_82(973815274);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubIDType_82.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_83("STRING_1672452075");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubID_83.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_83(1852968122);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubIDType_83.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
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
